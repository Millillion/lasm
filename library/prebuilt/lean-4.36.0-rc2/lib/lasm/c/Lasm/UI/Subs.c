// Lean compiler output
// Module: Lasm.UI.Subs
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.UI.Html
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
double lean_float_of_nat(lean_object*);
lean_object* l_Lasm_UI_Decoder_map___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_string_hash(lean_object*);
uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Decoder_float(lean_object*);
lean_object* l_Lasm_UI_Decoder_map2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object*);
lean_object* l_Lasm_UI_Handled_map___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Decoder_string(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Target_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqTarget(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableTarget_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableTarget_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_instHashableTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instHashableTarget_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instHashableTarget___closed__0 = (const lean_object*)&l_Lasm_UI_instHashableTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instHashableTarget = (const lean_object*)&l_Lasm_UI_instHashableTarget___closed__0_value;
static const lean_string_object l_Lasm_UI_instReprTarget_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.UI.Target.window"};
static const lean_object* l_Lasm_UI_instReprTarget_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprTarget_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprTarget_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprTarget_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprTarget_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprTarget_repr___closed__1_value;
static const lean_string_object l_Lasm_UI_instReprTarget_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.UI.Target.document"};
static const lean_object* l_Lasm_UI_instReprTarget_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprTarget_repr___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instReprTarget_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprTarget_repr___closed__2_value)}};
static const lean_object* l_Lasm_UI_instReprTarget_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprTarget_repr___closed__3_value;
static lean_once_cell_t l_Lasm_UI_instReprTarget_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprTarget_repr___closed__4;
static lean_once_cell_t l_Lasm_UI_instReprTarget_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprTarget_repr___closed__5;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprTarget_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprTarget_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprTarget_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprTarget___closed__0 = (const lean_object*)&l_Lasm_UI_instReprTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprTarget = (const lean_object*)&l_Lasm_UI_instReprTarget___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_instInhabitedTarget_default;
LEAN_EXPORT uint8_t l_Lasm_UI_instInhabitedTarget;
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_event_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_event_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0 = (const lean_object*)&l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableSubSpec_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableSubSpec_hash___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_instHashableSubSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instHashableSubSpec_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instHashableSubSpec___closed__0 = (const lean_object*)&l_Lasm_UI_instHashableSubSpec___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instHashableSubSpec = (const lean_object*)&l_Lasm_UI_instHashableSubSpec___closed__0_value;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.UI.SubSpec.frame"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__0 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__0_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__1 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__1_value;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.UI.SubSpec.every"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__2 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__2_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__2_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__3 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__3_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__4 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__4_value;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.UI.SubSpec.event"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__5 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__5_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__5_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__6 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__6_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__7 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__7_value;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.UI.SubSpec.port"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__8 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__8_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__8_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__9 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__9_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__10 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_instReprSubSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_instReprSubSpec_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_instReprSubSpec___closed__0 = (const lean_object*)&l_Lasm_UI_instReprSubSpec___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instReprSubSpec = (const lean_object*)&l_Lasm_UI_instReprSubSpec___closed__0_value;
static const lean_ctor_object l_Lasm_UI_instInhabitedSubSpec_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instInhabitedSubSpec_default___closed__0 = (const lean_object*)&l_Lasm_UI_instInhabitedSubSpec_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedSubSpec_default = (const lean_object*)&l_Lasm_UI_instInhabitedSubSpec_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_instInhabitedSubSpec = (const lean_object*)&l_Lasm_UI_instInhabitedSubSpec_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited(lean_object*);
static const lean_closure_object l_Lasm_UI_Subs_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_appendTR___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Subs_instAppend___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_Lasm_UI_Subs_batch___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Subs_batch___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_batch___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_evVal(lean_object*);
static lean_once_cell_t l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0;
LEAN_EXPORT double l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lasm_UI_Subs_on___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Subs_on___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Subs_on___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_on___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_Subs_preventDefaultOn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Subs_preventDefaultOn___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_preventDefaultOn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_Subs_stopPropagationOn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Subs_stopPropagationOn___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_stopPropagationOn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onKeyDown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "keydown"};
static const lean_object* l_Lasm_UI_Subs_onKeyDown___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onKeyDown___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onKeyUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "keyup"};
static const lean_object* l_Lasm_UI_Subs_onKeyUp___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onKeyUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onMouseMove___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mousemove"};
static const lean_object* l_Lasm_UI_Subs_onMouseMove___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onMouseMove___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onMouseUp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mouseup"};
static const lean_object* l_Lasm_UI_Subs_onMouseUp___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onMouseUp___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onClick___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "click"};
static const lean_object* l_Lasm_UI_Subs_onClick___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onClick___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onResize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "resize"};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_Subs_onResize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "currentTarget"};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__1_value;
static const lean_string_object l_Lasm_UI_Subs_onResize___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "innerWidth"};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Subs_onResize___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_UI_Subs_onResize___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__1_value),((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__3_value)}};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__4 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__4_value;
static lean_once_cell_t l_Lasm_UI_Subs_onResize___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__5;
static const lean_string_object l_Lasm_UI_Subs_onResize___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "innerHeight"};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__6 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__6_value;
static const lean_ctor_object l_Lasm_UI_Subs_onResize___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__7 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__7_value;
static const lean_ctor_object l_Lasm_UI_Subs_onResize___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__1_value),((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__7_value)}};
static const lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__8 = (const lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__8_value;
static lean_once_cell_t l_Lasm_UI_Subs_onResize___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Subs_onResize___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "visibilitychange"};
static const lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__0_value;
static const lean_string_object l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "visibilityState"};
static const lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__1 = (const lean_object*)&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__2 = (const lean_object*)&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_UI_Subs_onResize___redArg___closed__1_value),((lean_object*)&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__2_value)}};
static const lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__3 = (const lean_object*)&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__3_value;
static lean_once_cell_t l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lasm_UI_Target_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lasm_UI_Target_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lasm_UI_Target_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim___redArg(lean_object* v_window_22_){
_start:
{
lean_inc(v_window_22_);
return v_window_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim___redArg___boxed(lean_object* v_window_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_UI_Target_window_elim___redArg(v_window_23_);
lean_dec(v_window_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_window_28_){
_start:
{
lean_inc(v_window_28_);
return v_window_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_window_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_window_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lasm_UI_Target_window_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_window_32_);
lean_dec(v_window_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim___redArg(lean_object* v_document_35_){
_start:
{
lean_inc(v_document_35_);
return v_document_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim___redArg___boxed(lean_object* v_document_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lasm_UI_Target_document_elim___redArg(v_document_36_);
lean_dec(v_document_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_document_41_){
_start:
{
lean_inc(v_document_41_);
return v_document_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_document_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_document_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lasm_UI_Target_document_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_document_45_);
lean_dec(v_document_45_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Target_ofNat(lean_object* v_n_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_nat_dec_le(v_n_48_, v___x_49_);
if (v___x_50_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Target_ofNat___boxed(lean_object* v_n_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = l_Lasm_UI_Target_ofNat(v_n_53_);
lean_dec(v_n_53_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqTarget(uint8_t v_x_56_, uint8_t v_y_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_58_ = lean_box(v_x_56_);
v___x_59_ = lean_obj_tag_nat(v___x_58_);
lean_dec(v___x_58_);
v___x_60_ = lean_box(v_y_57_);
v___x_61_ = lean_obj_tag_nat(v___x_60_);
lean_dec(v___x_60_);
v___x_62_ = lean_nat_dec_eq(v___x_59_, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqTarget___boxed(lean_object* v_x_63_, lean_object* v_y_64_){
_start:
{
uint8_t v_x_23__boxed_65_; uint8_t v_y_24__boxed_66_; uint8_t v_res_67_; lean_object* v_r_68_; 
v_x_23__boxed_65_ = lean_unbox(v_x_63_);
v_y_24__boxed_66_ = lean_unbox(v_y_64_);
v_res_67_ = l_Lasm_UI_instDecidableEqTarget(v_x_23__boxed_65_, v_y_24__boxed_66_);
v_r_68_ = lean_box(v_res_67_);
return v_r_68_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableTarget_hash(uint8_t v_x_69_){
_start:
{
if (v_x_69_ == 0)
{
uint64_t v___x_70_; 
v___x_70_ = 0ULL;
return v___x_70_;
}
else
{
uint64_t v___x_71_; 
v___x_71_ = 1ULL;
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableTarget_hash___boxed(lean_object* v_x_72_){
_start:
{
uint8_t v_x_28__boxed_73_; uint64_t v_res_74_; lean_object* v_r_75_; 
v_x_28__boxed_73_ = lean_unbox(v_x_72_);
v_res_74_ = l_Lasm_UI_instHashableTarget_hash(v_x_28__boxed_73_);
v_r_75_ = lean_box_uint64(v_res_74_);
return v_r_75_;
}
}
static lean_object* _init_l_Lasm_UI_instReprTarget_repr___closed__4(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(2u);
v___x_85_ = lean_nat_to_int(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Lasm_UI_instReprTarget_repr___closed__5(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(1u);
v___x_87_ = lean_nat_to_int(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprTarget_repr(uint8_t v_x_88_, lean_object* v_prec_89_){
_start:
{
lean_object* v___y_91_; lean_object* v___y_98_; 
if (v_x_88_ == 0)
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_unsigned_to_nat(1024u);
v___x_105_ = lean_nat_dec_le(v___x_104_, v_prec_89_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__4, &l_Lasm_UI_instReprTarget_repr___closed__4_once, _init_l_Lasm_UI_instReprTarget_repr___closed__4);
v___y_91_ = v___x_106_;
goto v___jp_90_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__5, &l_Lasm_UI_instReprTarget_repr___closed__5_once, _init_l_Lasm_UI_instReprTarget_repr___closed__5);
v___y_91_ = v___x_107_;
goto v___jp_90_;
}
}
else
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1024u);
v___x_109_ = lean_nat_dec_le(v___x_108_, v_prec_89_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__4, &l_Lasm_UI_instReprTarget_repr___closed__4_once, _init_l_Lasm_UI_instReprTarget_repr___closed__4);
v___y_98_ = v___x_110_;
goto v___jp_97_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__5, &l_Lasm_UI_instReprTarget_repr___closed__5_once, _init_l_Lasm_UI_instReprTarget_repr___closed__5);
v___y_98_ = v___x_111_;
goto v___jp_97_;
}
}
v___jp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_92_ = ((lean_object*)(l_Lasm_UI_instReprTarget_repr___closed__1));
lean_inc(v___y_91_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___y_91_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = 0;
v___x_95_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_95_, sizeof(void*)*1, v___x_94_);
v___x_96_ = l_Repr_addAppParen(v___x_95_, v_prec_89_);
return v___x_96_;
}
v___jp_97_:
{
lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_99_ = ((lean_object*)(l_Lasm_UI_instReprTarget_repr___closed__3));
lean_inc(v___y_98_);
v___x_100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_100_, 0, v___y_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = 0;
v___x_102_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_101_);
v___x_103_ = l_Repr_addAppParen(v___x_102_, v_prec_89_);
return v___x_103_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprTarget_repr___boxed(lean_object* v_x_112_, lean_object* v_prec_113_){
_start:
{
uint8_t v_x_117__boxed_114_; lean_object* v_res_115_; 
v_x_117__boxed_114_ = lean_unbox(v_x_112_);
v_res_115_ = l_Lasm_UI_instReprTarget_repr(v_x_117__boxed_114_, v_prec_113_);
lean_dec(v_prec_113_);
return v_res_115_;
}
}
static uint8_t _init_l_Lasm_UI_instInhabitedTarget_default(void){
_start:
{
uint8_t v___x_118_; 
v___x_118_ = 0;
return v___x_118_;
}
}
static uint8_t _init_l_Lasm_UI_instInhabitedTarget(void){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = 0;
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl(lean_object* v_x_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_obj_tag_nat(v_x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl___boxed(lean_object* v_x_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lasm_UI_SubSpec_ctorIdx___impl(v_x_122_);
lean_dec(v_x_122_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___redArg(lean_object* v_t_124_, lean_object* v_k_125_){
_start:
{
switch(lean_obj_tag(v_t_124_))
{
case 0:
{
lean_object* v_ms_126_; lean_object* v___x_127_; 
v_ms_126_ = lean_ctor_get(v_t_124_, 0);
lean_inc(v_ms_126_);
lean_dec_ref_known(v_t_124_, 1);
v___x_127_ = lean_apply_1(v_k_125_, v_ms_126_);
return v___x_127_;
}
case 1:
{
return v_k_125_;
}
case 2:
{
uint8_t v_target_128_; lean_object* v_event_129_; lean_object* v_paths_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_target_128_ = lean_ctor_get_uint8(v_t_124_, sizeof(void*)*2);
v_event_129_ = lean_ctor_get(v_t_124_, 0);
lean_inc_ref(v_event_129_);
v_paths_130_ = lean_ctor_get(v_t_124_, 1);
lean_inc(v_paths_130_);
lean_dec_ref_known(v_t_124_, 2);
v___x_131_ = lean_box(v_target_128_);
v___x_132_ = lean_apply_3(v_k_125_, v___x_131_, v_event_129_, v_paths_130_);
return v___x_132_;
}
default: 
{
lean_object* v_name_133_; lean_object* v___x_134_; 
v_name_133_ = lean_ctor_get(v_t_124_, 0);
lean_inc_ref(v_name_133_);
lean_dec_ref_known(v_t_124_, 1);
v___x_134_ = lean_apply_1(v_k_125_, v_name_133_);
return v___x_134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim(lean_object* v_motive_135_, lean_object* v_ctorIdx_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_k_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_137_, v_k_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___boxed(lean_object* v_motive_141_, lean_object* v_ctorIdx_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_k_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lasm_UI_SubSpec_ctorElim(v_motive_141_, v_ctorIdx_142_, v_t_143_, v_h_144_, v_k_145_);
lean_dec(v_ctorIdx_142_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim___redArg(lean_object* v_t_147_, lean_object* v_every_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_147_, v_every_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim(lean_object* v_motive_150_, lean_object* v_t_151_, lean_object* v_h_152_, lean_object* v_every_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_151_, v_every_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim___redArg(lean_object* v_t_155_, lean_object* v_frame_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_155_, v_frame_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim(lean_object* v_motive_158_, lean_object* v_t_159_, lean_object* v_h_160_, lean_object* v_frame_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_159_, v_frame_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_event_elim___redArg(lean_object* v_t_163_, lean_object* v_event_164_){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_163_, v_event_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_event_elim(lean_object* v_motive_166_, lean_object* v_t_167_, lean_object* v_h_168_, lean_object* v_event_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_167_, v_event_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim___redArg(lean_object* v_t_171_, lean_object* v_port_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_171_, v_port_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim(lean_object* v_motive_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_port_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_175_, v_port_177_);
return v___x_178_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(lean_object* v_a_179_, lean_object* v_b_180_){
_start:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_182_ = l_instDecidableEqList___redArg(v___x_181_, v_a_179_, v_b_180_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0___boxed(lean_object* v_a_183_, lean_object* v_b_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(v_a_183_, v_b_184_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object* v_x_188_, lean_object* v_x_189_){
_start:
{
switch(lean_obj_tag(v_x_188_))
{
case 0:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_object* v_ms_190_; lean_object* v_ms_191_; uint8_t v___x_192_; 
v_ms_190_ = lean_ctor_get(v_x_188_, 0);
lean_inc(v_ms_190_);
lean_dec_ref_known(v_x_188_, 1);
v_ms_191_ = lean_ctor_get(v_x_189_, 0);
lean_inc(v_ms_191_);
lean_dec_ref_known(v_x_189_, 1);
v___x_192_ = lean_nat_dec_eq(v_ms_190_, v_ms_191_);
lean_dec(v_ms_191_);
lean_dec(v_ms_190_);
return v___x_192_;
}
else
{
uint8_t v___x_193_; 
lean_dec_ref_known(v_x_188_, 1);
lean_dec(v_x_189_);
v___x_193_ = 0;
return v___x_193_;
}
}
case 1:
{
if (lean_obj_tag(v_x_189_) == 1)
{
uint8_t v___x_194_; 
v___x_194_ = 1;
return v___x_194_;
}
else
{
uint8_t v___x_195_; 
lean_dec(v_x_189_);
v___x_195_ = 0;
return v___x_195_;
}
}
case 2:
{
if (lean_obj_tag(v_x_189_) == 2)
{
uint8_t v_target_196_; lean_object* v_event_197_; lean_object* v_paths_198_; uint8_t v_target_199_; lean_object* v_event_200_; lean_object* v_paths_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v_target_196_ = lean_ctor_get_uint8(v_x_188_, sizeof(void*)*2);
v_event_197_ = lean_ctor_get(v_x_188_, 0);
lean_inc_ref(v_event_197_);
v_paths_198_ = lean_ctor_get(v_x_188_, 1);
lean_inc(v_paths_198_);
lean_dec_ref_known(v_x_188_, 2);
v_target_199_ = lean_ctor_get_uint8(v_x_189_, sizeof(void*)*2);
v_event_200_ = lean_ctor_get(v_x_189_, 0);
lean_inc_ref(v_event_200_);
v_paths_201_ = lean_ctor_get(v_x_189_, 1);
lean_inc(v_paths_201_);
lean_dec_ref_known(v_x_189_, 2);
v___x_202_ = lean_box(v_target_196_);
v___x_203_ = lean_obj_tag_nat(v___x_202_);
lean_dec(v___x_202_);
v___x_204_ = lean_box(v_target_199_);
v___x_205_ = lean_obj_tag_nat(v___x_204_);
lean_dec(v___x_204_);
v___x_206_ = lean_nat_dec_eq(v___x_203_, v___x_205_);
if (v___x_206_ == 0)
{
lean_dec(v_paths_201_);
lean_dec_ref(v_event_200_);
lean_dec(v_paths_198_);
lean_dec_ref(v_event_197_);
return v___x_206_;
}
else
{
uint8_t v___x_207_; 
v___x_207_ = lean_string_dec_eq(v_event_197_, v_event_200_);
lean_dec_ref(v_event_200_);
lean_dec_ref(v_event_197_);
if (v___x_207_ == 0)
{
lean_dec(v_paths_201_);
lean_dec(v_paths_198_);
return v___x_207_;
}
else
{
lean_object* v___f_208_; uint8_t v___x_209_; 
v___f_208_ = ((lean_object*)(l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0));
v___x_209_ = l_instDecidableEqList___redArg(v___f_208_, v_paths_198_, v_paths_201_);
return v___x_209_;
}
}
}
else
{
uint8_t v___x_210_; 
lean_dec_ref_known(v_x_188_, 2);
lean_dec(v_x_189_);
v___x_210_ = 0;
return v___x_210_;
}
}
default: 
{
if (lean_obj_tag(v_x_189_) == 3)
{
lean_object* v_name_211_; lean_object* v_name_212_; uint8_t v___x_213_; 
v_name_211_ = lean_ctor_get(v_x_188_, 0);
lean_inc_ref(v_name_211_);
lean_dec_ref_known(v_x_188_, 1);
v_name_212_ = lean_ctor_get(v_x_189_, 0);
lean_inc_ref(v_name_212_);
lean_dec_ref_known(v_x_189_, 1);
v___x_213_ = lean_string_dec_eq(v_name_211_, v_name_212_);
lean_dec_ref(v_name_212_);
lean_dec_ref(v_name_211_);
return v___x_213_;
}
else
{
uint8_t v___x_214_; 
lean_dec_ref_known(v_x_188_, 1);
lean_dec(v_x_189_);
v___x_214_ = 0;
return v___x_214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___boxed(lean_object* v_x_215_, lean_object* v_x_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_x_215_, v_x_216_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec(lean_object* v_x_219_, lean_object* v_x_220_){
_start:
{
uint8_t v___x_221_; 
v___x_221_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_x_219_, v_x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec___boxed(lean_object* v_x_222_, lean_object* v_x_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = l_Lasm_UI_instDecidableEqSubSpec(v_x_222_, v_x_223_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableSubSpec_hash(lean_object* v_x_226_){
_start:
{
switch(lean_obj_tag(v_x_226_))
{
case 0:
{
lean_object* v_ms_227_; uint64_t v___x_228_; uint64_t v___x_229_; uint64_t v___x_230_; 
v_ms_227_ = lean_ctor_get(v_x_226_, 0);
v___x_228_ = 0ULL;
v___x_229_ = lean_uint64_of_nat(v_ms_227_);
v___x_230_ = lean_uint64_mix_hash(v___x_228_, v___x_229_);
return v___x_230_;
}
case 1:
{
uint64_t v___x_231_; 
v___x_231_ = 1ULL;
return v___x_231_;
}
case 2:
{
uint8_t v_target_232_; lean_object* v_event_233_; lean_object* v_paths_234_; uint64_t v___x_235_; uint64_t v___x_236_; uint64_t v___x_237_; uint64_t v___x_238_; uint64_t v___x_239_; uint64_t v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; 
v_target_232_ = lean_ctor_get_uint8(v_x_226_, sizeof(void*)*2);
v_event_233_ = lean_ctor_get(v_x_226_, 0);
v_paths_234_ = lean_ctor_get(v_x_226_, 1);
v___x_235_ = 2ULL;
v___x_236_ = l_Lasm_UI_instHashableTarget_hash(v_target_232_);
v___x_237_ = lean_uint64_mix_hash(v___x_235_, v___x_236_);
v___x_238_ = lean_string_hash(v_event_233_);
v___x_239_ = lean_uint64_mix_hash(v___x_237_, v___x_238_);
v___x_240_ = 7ULL;
v___x_241_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_240_, v_paths_234_);
v___x_242_ = lean_uint64_mix_hash(v___x_239_, v___x_241_);
return v___x_242_;
}
default: 
{
lean_object* v_name_243_; uint64_t v___x_244_; uint64_t v___x_245_; uint64_t v___x_246_; 
v_name_243_ = lean_ctor_get(v_x_226_, 0);
v___x_244_ = 3ULL;
v___x_245_ = lean_string_hash(v_name_243_);
v___x_246_ = lean_uint64_mix_hash(v___x_244_, v___x_245_);
return v___x_246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableSubSpec_hash___boxed(lean_object* v_x_247_){
_start:
{
uint64_t v_res_248_; lean_object* v_r_249_; 
v_res_248_ = l_Lasm_UI_instHashableSubSpec_hash(v_x_247_);
lean_dec(v_x_247_);
v_r_249_ = lean_box_uint64(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr(lean_object* v_x_273_, lean_object* v_prec_274_){
_start:
{
lean_object* v___y_276_; 
switch(lean_obj_tag(v_x_273_))
{
case 0:
{
lean_object* v_ms_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_302_; 
v_ms_282_ = lean_ctor_get(v_x_273_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_273_);
if (v_isSharedCheck_302_ == 0)
{
v___x_284_ = v_x_273_;
v_isShared_285_ = v_isSharedCheck_302_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_ms_282_);
lean_dec(v_x_273_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_302_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___y_287_; lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_298_ = lean_unsigned_to_nat(1024u);
v___x_299_ = lean_nat_dec_le(v___x_298_, v_prec_274_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__4, &l_Lasm_UI_instReprTarget_repr___closed__4_once, _init_l_Lasm_UI_instReprTarget_repr___closed__4);
v___y_287_ = v___x_300_;
goto v___jp_286_;
}
else
{
lean_object* v___x_301_; 
v___x_301_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__5, &l_Lasm_UI_instReprTarget_repr___closed__5_once, _init_l_Lasm_UI_instReprTarget_repr___closed__5);
v___y_287_ = v___x_301_;
goto v___jp_286_;
}
v___jp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_291_; 
v___x_288_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__4));
v___x_289_ = l_Nat_reprFast(v_ms_282_);
if (v_isShared_285_ == 0)
{
lean_ctor_set_tag(v___x_284_, 3);
lean_ctor_set(v___x_284_, 0, v___x_289_);
v___x_291_ = v___x_284_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_297_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_288_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_inc(v___y_287_);
v___x_293_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_293_, 0, v___y_287_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = 0;
v___x_295_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set_uint8(v___x_295_, sizeof(void*)*1, v___x_294_);
v___x_296_ = l_Repr_addAppParen(v___x_295_, v_prec_274_);
return v___x_296_;
}
}
}
}
case 1:
{
lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_303_ = lean_unsigned_to_nat(1024u);
v___x_304_ = lean_nat_dec_le(v___x_303_, v_prec_274_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
v___x_305_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__4, &l_Lasm_UI_instReprTarget_repr___closed__4_once, _init_l_Lasm_UI_instReprTarget_repr___closed__4);
v___y_276_ = v___x_305_;
goto v___jp_275_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__5, &l_Lasm_UI_instReprTarget_repr___closed__5_once, _init_l_Lasm_UI_instReprTarget_repr___closed__5);
v___y_276_ = v___x_306_;
goto v___jp_275_;
}
}
case 2:
{
uint8_t v_target_307_; lean_object* v_event_308_; lean_object* v_paths_309_; lean_object* v___y_311_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_target_307_ = lean_ctor_get_uint8(v_x_273_, sizeof(void*)*2);
v_event_308_ = lean_ctor_get(v_x_273_, 0);
lean_inc_ref(v_event_308_);
v_paths_309_ = lean_ctor_get(v_x_273_, 1);
lean_inc(v_paths_309_);
lean_dec_ref_known(v_x_273_, 2);
v___x_328_ = lean_unsigned_to_nat(1024u);
v___x_329_ = lean_nat_dec_le(v___x_328_, v_prec_274_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; 
v___x_330_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__4, &l_Lasm_UI_instReprTarget_repr___closed__4_once, _init_l_Lasm_UI_instReprTarget_repr___closed__4);
v___y_311_ = v___x_330_;
goto v___jp_310_;
}
else
{
lean_object* v___x_331_; 
v___x_331_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__5, &l_Lasm_UI_instReprTarget_repr___closed__5_once, _init_l_Lasm_UI_instReprTarget_repr___closed__5);
v___y_311_ = v___x_331_;
goto v___jp_310_;
}
v___jp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_312_ = lean_box(1);
v___x_313_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__7));
v___x_314_ = lean_unsigned_to_nat(1024u);
v___x_315_ = l_Lasm_UI_instReprTarget_repr(v_target_307_, v___x_314_);
v___x_316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_313_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set(v___x_317_, 1, v___x_312_);
v___x_318_ = l_String_quote(v_event_308_);
v___x_319_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
v___x_320_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_317_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set(v___x_321_, 1, v___x_312_);
v___x_322_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_309_);
v___x_323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
lean_inc(v___y_311_);
v___x_324_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_324_, 0, v___y_311_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = 0;
v___x_326_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set_uint8(v___x_326_, sizeof(void*)*1, v___x_325_);
v___x_327_ = l_Repr_addAppParen(v___x_326_, v_prec_274_);
return v___x_327_;
}
}
default: 
{
lean_object* v_name_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_352_; 
v_name_332_ = lean_ctor_get(v_x_273_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_273_);
if (v_isSharedCheck_352_ == 0)
{
v___x_334_ = v_x_273_;
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_name_332_);
lean_dec(v_x_273_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_352_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___y_337_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1024u);
v___x_349_ = lean_nat_dec_le(v___x_348_, v_prec_274_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; 
v___x_350_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__4, &l_Lasm_UI_instReprTarget_repr___closed__4_once, _init_l_Lasm_UI_instReprTarget_repr___closed__4);
v___y_337_ = v___x_350_;
goto v___jp_336_;
}
else
{
lean_object* v___x_351_; 
v___x_351_ = lean_obj_once(&l_Lasm_UI_instReprTarget_repr___closed__5, &l_Lasm_UI_instReprTarget_repr___closed__5_once, _init_l_Lasm_UI_instReprTarget_repr___closed__5);
v___y_337_ = v___x_351_;
goto v___jp_336_;
}
v___jp_336_:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_338_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__10));
v___x_339_ = l_String_quote(v_name_332_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_339_);
v___x_341_ = v___x_334_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_347_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_342_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_338_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
lean_inc(v___y_337_);
v___x_343_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_343_, 0, v___y_337_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = 0;
v___x_345_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_345_, 0, v___x_343_);
lean_ctor_set_uint8(v___x_345_, sizeof(void*)*1, v___x_344_);
v___x_346_ = l_Repr_addAppParen(v___x_345_, v_prec_274_);
return v___x_346_;
}
}
}
}
}
v___jp_275_:
{
lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_277_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__1));
lean_inc(v___y_276_);
v___x_278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_278_, 0, v___y_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = 0;
v___x_280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set_uint8(v___x_280_, sizeof(void*)*1, v___x_279_);
v___x_281_ = l_Repr_addAppParen(v___x_280_, v_prec_274_);
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr___boxed(lean_object* v_x_353_, lean_object* v_prec_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_UI_instReprSubSpec_repr(v_x_353_, v_prec_354_);
lean_dec(v_prec_354_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg(){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = lean_box(0);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg___boxed(lean_object* v___dummy_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lasm_UI_Subs_none___redArg();
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none(lean_object* v_Msg_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = lean_box(0);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg(){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_box(0);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg___boxed(lean_object* v___dummy_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lasm_UI_Subs_instInhabited___redArg();
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited(lean_object* v_Msg_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_box(0);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg(){
_start:
{
lean_object* v___f_376_; 
v___f_376_ = ((lean_object*)(l_Lasm_UI_Subs_instAppend___redArg___closed__0));
return v___f_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg___boxed(lean_object* v___dummy_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lasm_UI_Subs_instAppend___redArg();
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend(lean_object* v_Msg_379_){
_start:
{
lean_object* v___f_380_; 
v___f_380_ = ((lean_object*)(l_Lasm_UI_Subs_instAppend___redArg___closed__0));
return v___f_380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
if (lean_obj_tag(v_a_381_) == 0)
{
lean_object* v___x_383_; 
v___x_383_ = lean_array_to_list(v_a_382_);
return v___x_383_;
}
else
{
lean_object* v_head_384_; lean_object* v_tail_385_; lean_object* v___x_386_; 
v_head_384_ = lean_ctor_get(v_a_381_, 0);
lean_inc(v_head_384_);
v_tail_385_ = lean_ctor_get(v_a_381_, 1);
lean_inc(v_tail_385_);
lean_dec_ref_known(v_a_381_, 2);
v___x_386_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_382_, v_head_384_);
v_a_381_ = v_tail_385_;
v_a_382_ = v___x_386_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch___redArg(lean_object* v_subs_390_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = ((lean_object*)(l_Lasm_UI_Subs_batch___redArg___closed__0));
v___x_392_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(v_subs_390_, v___x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch(lean_object* v_Msg_393_, lean_object* v_subs_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lasm_UI_Subs_batch___redArg(v_subs_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0(lean_object* v_Msg_396_, lean_object* v_a_397_, lean_object* v_a_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(v_a_397_, v_a_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0(lean_object* v_handle_400_, lean_object* v_f_401_, lean_object* v_vs_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_apply_1(v_handle_400_, v_vs_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v___x_404_; 
lean_dec(v_f_401_);
v___x_404_ = lean_box(0);
return v___x_404_;
}
else
{
lean_object* v_val_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_413_; 
v_val_405_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_413_ == 0)
{
v___x_407_ = v___x_403_;
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_val_405_);
lean_dec(v___x_403_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_413_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_Lasm_UI_Handled_map___redArg(v_f_401_, v_val_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(lean_object* v_f_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
if (lean_obj_tag(v_a_415_) == 0)
{
lean_object* v___x_417_; 
lean_dec(v_f_414_);
v___x_417_ = l_List_reverse___redArg(v_a_416_);
return v___x_417_;
}
else
{
lean_object* v_head_418_; lean_object* v_tail_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_437_; 
v_head_418_ = lean_ctor_get(v_a_415_, 0);
v_tail_419_ = lean_ctor_get(v_a_415_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_a_415_);
if (v_isSharedCheck_437_ == 0)
{
v___x_421_ = v_a_415_;
v_isShared_422_ = v_isSharedCheck_437_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_tail_419_);
lean_inc(v_head_418_);
lean_dec(v_a_415_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_437_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v_spec_423_; lean_object* v_handle_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_436_; 
v_spec_423_ = lean_ctor_get(v_head_418_, 0);
v_handle_424_ = lean_ctor_get(v_head_418_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_head_418_);
if (v_isSharedCheck_436_ == 0)
{
v___x_426_ = v_head_418_;
v_isShared_427_ = v_isSharedCheck_436_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_handle_424_);
lean_inc(v_spec_423_);
lean_dec(v_head_418_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_436_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___f_428_; lean_object* v___x_430_; 
lean_inc(v_f_414_);
v___f_428_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_428_, 0, v_handle_424_);
lean_closure_set(v___f_428_, 1, v_f_414_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v___f_428_);
v___x_430_ = v___x_426_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_spec_423_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v___f_428_);
v___x_430_ = v_reuseFailAlloc_435_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_432_; 
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 1, v_a_416_);
lean_ctor_set(v___x_421_, 0, v___x_430_);
v___x_432_ = v___x_421_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_430_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_a_416_);
v___x_432_ = v_reuseFailAlloc_434_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
v_a_415_ = v_tail_419_;
v_a_416_ = v___x_432_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map___redArg(lean_object* v_f_438_, lean_object* v_s_439_){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = lean_box(0);
v___x_441_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(v_f_438_, v_s_439_, v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map(lean_object* v_00_u03b1_442_, lean_object* v_00_u03b2_443_, lean_object* v_f_444_, lean_object* v_s_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lasm_UI_Subs_map___redArg(v_f_444_, v_s_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0(lean_object* v_00_u03b1_447_, lean_object* v_00_u03b2_448_, lean_object* v_f_449_, lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(v_f_449_, v_a_450_, v_a_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_evVal(lean_object* v_x_453_){
_start:
{
switch(lean_obj_tag(v_x_453_))
{
case 1:
{
lean_object* v___x_454_; 
v___x_454_ = lean_box(1);
return v___x_454_;
}
case 2:
{
uint8_t v_b_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
v_b_455_ = lean_ctor_get_uint8(v_x_453_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v_x_453_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_dec(v_x_453_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, 0, v_b_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
case 3:
{
double v_n_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
v_n_463_ = lean_ctor_get_float(v_x_453_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v_x_453_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_dec(v_x_453_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_469_, 0, v_n_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
case 4:
{
lean_object* v_s_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_s_471_ = lean_ctor_get(v_x_453_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v_x_453_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v_x_453_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_s_471_);
lean_dec(v_x_453_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_s_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
case 5:
{
lean_object* v_i_479_; double v___x_480_; lean_object* v___x_481_; 
v_i_479_ = lean_ctor_get(v_x_453_, 0);
lean_inc(v_i_479_);
lean_dec_ref_known(v_x_453_, 1);
v___x_480_ = l_Float_ofInt(v_i_479_);
lean_dec(v_i_479_);
v___x_481_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
default: 
{
lean_object* v___x_482_; 
lean_dec(v_x_453_);
v___x_482_ = lean_box(0);
return v___x_482_;
}
}
}
}
static double _init_l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0(void){
_start:
{
lean_object* v___x_483_; double v___x_484_; 
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_float_of_nat(v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT double l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(lean_object* v_x_485_){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_488_ = lean_array_get_size(v_x_485_);
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = lean_nat_dec_eq(v___x_488_, v___x_489_);
if (v___x_490_ == 0)
{
goto v___jp_486_;
}
else
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = lean_array_fget_borrowed(v_x_485_, v___x_491_);
if (lean_obj_tag(v___x_492_) == 3)
{
double v_n_493_; 
v_n_493_ = lean_ctor_get_float(v___x_492_, 0);
return v_n_493_;
}
else
{
goto v___jp_486_;
}
}
v___jp_486_:
{
double v___x_487_; 
v___x_487_ = lean_float_once(&l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0, &l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0_once, _init_l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0);
return v___x_487_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___boxed(lean_object* v_x_494_){
_start:
{
double v_res_495_; lean_object* v_r_496_; 
v_res_495_ = l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(v_x_494_);
lean_dec_ref(v_x_494_);
v_r_496_ = lean_box_float(v_res_495_);
return v_r_496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0(lean_object* v_f_497_, lean_object* v_vs_498_){
_start:
{
double v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_499_ = l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(v_vs_498_);
v___x_500_ = lean_box_float(v___x_499_);
v___x_501_ = lean_apply_1(v_f_497_, v___x_500_);
v___x_502_ = 0;
v___x_503_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1, v___x_502_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1 + 1, v___x_502_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0___boxed(lean_object* v_f_505_, lean_object* v_vs_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lasm_UI_Subs_every___redArg___lam__0(v_f_505_, v_vs_506_);
lean_dec_ref(v_vs_506_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg(lean_object* v_ms_508_, lean_object* v_f_509_){
_start:
{
lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___f_510_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_every___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_510_, 0, v_f_509_);
v___x_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_511_, 0, v_ms_508_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v___f_510_);
v___x_513_ = lean_box(0);
v___x_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every(lean_object* v_Msg_515_, lean_object* v_ms_516_, lean_object* v_f_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lasm_UI_Subs_every___redArg(v_ms_516_, v_f_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame___redArg(lean_object* v_f_519_){
_start:
{
lean_object* v___f_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___f_520_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_every___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_520_, 0, v_f_519_);
v___x_521_ = lean_box(1);
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
lean_ctor_set(v___x_522_, 1, v___f_520_);
v___x_523_ = lean_box(0);
v___x_524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame(lean_object* v_Msg_525_, lean_object* v_f_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Lasm_UI_Subs_onAnimationFrame___redArg(v_f_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
if (lean_obj_tag(v_a_528_) == 0)
{
lean_object* v___x_530_; 
v___x_530_ = l_List_reverse___redArg(v_a_529_);
return v___x_530_;
}
else
{
lean_object* v_head_531_; lean_object* v_tail_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_541_; 
v_head_531_ = lean_ctor_get(v_a_528_, 0);
v_tail_532_ = lean_ctor_get(v_a_528_, 1);
v_isSharedCheck_541_ = !lean_is_exclusive(v_a_528_);
if (v_isSharedCheck_541_ == 0)
{
v___x_534_ = v_a_528_;
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_tail_532_);
lean_inc(v_head_531_);
lean_dec(v_a_528_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_536_ = l_Lasm_UI_Subs_evVal(v_head_531_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 1, v_a_529_);
lean_ctor_set(v___x_534_, 0, v___x_536_);
v___x_538_ = v___x_534_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_a_529_);
v___x_538_ = v_reuseFailAlloc_540_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
v_a_528_ = v_tail_532_;
v_a_529_ = v___x_538_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___redArg___lam__0(lean_object* v_run_542_, lean_object* v_vs_543_){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_544_ = lean_array_to_list(v_vs_543_);
v___x_545_ = lean_box(0);
v___x_546_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_custom_spec__0(v___x_544_, v___x_545_);
v___x_547_ = lean_apply_1(v_run_542_, v___x_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___redArg(uint8_t v_target_548_, lean_object* v_event_549_, lean_object* v_d_550_){
_start:
{
lean_object* v_paths_551_; lean_object* v_run_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_563_; 
v_paths_551_ = lean_ctor_get(v_d_550_, 0);
v_run_552_ = lean_ctor_get(v_d_550_, 1);
v_isSharedCheck_563_ = !lean_is_exclusive(v_d_550_);
if (v_isSharedCheck_563_ == 0)
{
v___x_554_ = v_d_550_;
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_run_552_);
lean_inc(v_paths_551_);
lean_dec(v_d_550_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___f_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
v___f_556_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_custom___redArg___lam__0), 2, 1);
lean_closure_set(v___f_556_, 0, v_run_552_);
v___x_557_ = lean_alloc_ctor(2, 2, 1);
lean_ctor_set(v___x_557_, 0, v_event_549_);
lean_ctor_set(v___x_557_, 1, v_paths_551_);
lean_ctor_set_uint8(v___x_557_, sizeof(void*)*2, v_target_548_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___f_556_);
lean_ctor_set(v___x_554_, 0, v___x_557_);
v___x_559_ = v___x_554_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_557_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v___f_556_);
v___x_559_ = v_reuseFailAlloc_562_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_box(0);
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
return v___x_561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___redArg___boxed(lean_object* v_target_564_, lean_object* v_event_565_, lean_object* v_d_566_){
_start:
{
uint8_t v_target_boxed_567_; lean_object* v_res_568_; 
v_target_boxed_567_ = lean_unbox(v_target_564_);
v_res_568_ = l_Lasm_UI_Subs_custom___redArg(v_target_boxed_567_, v_event_565_, v_d_566_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom(lean_object* v_Msg_569_, uint8_t v_target_570_, lean_object* v_event_571_, lean_object* v_d_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = l_Lasm_UI_Subs_custom___redArg(v_target_570_, v_event_571_, v_d_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_custom___boxed(lean_object* v_Msg_574_, lean_object* v_target_575_, lean_object* v_event_576_, lean_object* v_d_577_){
_start:
{
uint8_t v_target_boxed_578_; lean_object* v_res_579_; 
v_target_boxed_578_ = lean_unbox(v_target_575_);
v_res_579_ = l_Lasm_UI_Subs_custom(v_Msg_574_, v_target_boxed_578_, v_event_576_, v_d_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___redArg___lam__0(lean_object* v_m_580_){
_start:
{
uint8_t v___x_581_; lean_object* v___x_582_; 
v___x_581_ = 0;
v___x_582_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_582_, 0, v_m_580_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*1, v___x_581_);
lean_ctor_set_uint8(v___x_582_, sizeof(void*)*1 + 1, v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___redArg(uint8_t v_target_584_, lean_object* v_event_585_, lean_object* v_d_586_){
_start:
{
lean_object* v___f_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___f_587_ = ((lean_object*)(l_Lasm_UI_Subs_on___redArg___closed__0));
v___x_588_ = l_Lasm_UI_Decoder_map___redArg(v___f_587_, v_d_586_);
v___x_589_ = l_Lasm_UI_Subs_custom___redArg(v_target_584_, v_event_585_, v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___redArg___boxed(lean_object* v_target_590_, lean_object* v_event_591_, lean_object* v_d_592_){
_start:
{
uint8_t v_target_boxed_593_; lean_object* v_res_594_; 
v_target_boxed_593_ = lean_unbox(v_target_590_);
v_res_594_ = l_Lasm_UI_Subs_on___redArg(v_target_boxed_593_, v_event_591_, v_d_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on(lean_object* v_Msg_595_, uint8_t v_target_596_, lean_object* v_event_597_, lean_object* v_d_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lasm_UI_Subs_on___redArg(v_target_596_, v_event_597_, v_d_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_on___boxed(lean_object* v_Msg_600_, lean_object* v_target_601_, lean_object* v_event_602_, lean_object* v_d_603_){
_start:
{
uint8_t v_target_boxed_604_; lean_object* v_res_605_; 
v_target_boxed_604_ = lean_unbox(v_target_601_);
v_res_605_ = l_Lasm_UI_Subs_on(v_Msg_600_, v_target_boxed_604_, v_event_602_, v_d_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___lam__0(lean_object* v_x_606_){
_start:
{
lean_object* v_fst_607_; lean_object* v_snd_608_; uint8_t v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_fst_607_ = lean_ctor_get(v_x_606_, 0);
v_snd_608_ = lean_ctor_get(v_x_606_, 1);
v___x_609_ = 0;
lean_inc(v_fst_607_);
v___x_610_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_610_, 0, v_fst_607_);
v___x_611_ = lean_unbox(v_snd_608_);
lean_ctor_set_uint8(v___x_610_, sizeof(void*)*1, v___x_611_);
lean_ctor_set_uint8(v___x_610_, sizeof(void*)*1 + 1, v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___lam__0___boxed(lean_object* v_x_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lasm_UI_Subs_preventDefaultOn___redArg___lam__0(v_x_612_);
lean_dec_ref(v_x_612_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg(uint8_t v_target_615_, lean_object* v_event_616_, lean_object* v_d_617_){
_start:
{
lean_object* v___f_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___f_618_ = ((lean_object*)(l_Lasm_UI_Subs_preventDefaultOn___redArg___closed__0));
v___x_619_ = l_Lasm_UI_Decoder_map___redArg(v___f_618_, v_d_617_);
v___x_620_ = l_Lasm_UI_Subs_custom___redArg(v_target_615_, v_event_616_, v___x_619_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___redArg___boxed(lean_object* v_target_621_, lean_object* v_event_622_, lean_object* v_d_623_){
_start:
{
uint8_t v_target_boxed_624_; lean_object* v_res_625_; 
v_target_boxed_624_ = lean_unbox(v_target_621_);
v_res_625_ = l_Lasm_UI_Subs_preventDefaultOn___redArg(v_target_boxed_624_, v_event_622_, v_d_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn(lean_object* v_Msg_626_, uint8_t v_target_627_, lean_object* v_event_628_, lean_object* v_d_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lasm_UI_Subs_preventDefaultOn___redArg(v_target_627_, v_event_628_, v_d_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_preventDefaultOn___boxed(lean_object* v_Msg_631_, lean_object* v_target_632_, lean_object* v_event_633_, lean_object* v_d_634_){
_start:
{
uint8_t v_target_boxed_635_; lean_object* v_res_636_; 
v_target_boxed_635_ = lean_unbox(v_target_632_);
v_res_636_ = l_Lasm_UI_Subs_preventDefaultOn(v_Msg_631_, v_target_boxed_635_, v_event_633_, v_d_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___lam__0(lean_object* v_x_637_){
_start:
{
lean_object* v_fst_638_; lean_object* v_snd_639_; uint8_t v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v_fst_638_ = lean_ctor_get(v_x_637_, 0);
v_snd_639_ = lean_ctor_get(v_x_637_, 1);
v___x_640_ = 0;
lean_inc(v_fst_638_);
v___x_641_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_641_, 0, v_fst_638_);
lean_ctor_set_uint8(v___x_641_, sizeof(void*)*1, v___x_640_);
v___x_642_ = lean_unbox(v_snd_639_);
lean_ctor_set_uint8(v___x_641_, sizeof(void*)*1 + 1, v___x_642_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___lam__0___boxed(lean_object* v_x_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lasm_UI_Subs_stopPropagationOn___redArg___lam__0(v_x_643_);
lean_dec_ref(v_x_643_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg(uint8_t v_target_646_, lean_object* v_event_647_, lean_object* v_d_648_){
_start:
{
lean_object* v___f_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___f_649_ = ((lean_object*)(l_Lasm_UI_Subs_stopPropagationOn___redArg___closed__0));
v___x_650_ = l_Lasm_UI_Decoder_map___redArg(v___f_649_, v_d_648_);
v___x_651_ = l_Lasm_UI_Subs_custom___redArg(v_target_646_, v_event_647_, v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___redArg___boxed(lean_object* v_target_652_, lean_object* v_event_653_, lean_object* v_d_654_){
_start:
{
uint8_t v_target_boxed_655_; lean_object* v_res_656_; 
v_target_boxed_655_ = lean_unbox(v_target_652_);
v_res_656_ = l_Lasm_UI_Subs_stopPropagationOn___redArg(v_target_boxed_655_, v_event_653_, v_d_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn(lean_object* v_Msg_657_, uint8_t v_target_658_, lean_object* v_event_659_, lean_object* v_d_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lasm_UI_Subs_stopPropagationOn___redArg(v_target_658_, v_event_659_, v_d_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_stopPropagationOn___boxed(lean_object* v_Msg_662_, lean_object* v_target_663_, lean_object* v_event_664_, lean_object* v_d_665_){
_start:
{
uint8_t v_target_boxed_666_; lean_object* v_res_667_; 
v_target_boxed_666_ = lean_unbox(v_target_663_);
v_res_667_ = l_Lasm_UI_Subs_stopPropagationOn(v_Msg_662_, v_target_boxed_666_, v_event_664_, v_d_665_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown___redArg(lean_object* v_d_669_){
_start:
{
uint8_t v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = 1;
v___x_671_ = ((lean_object*)(l_Lasm_UI_Subs_onKeyDown___redArg___closed__0));
v___x_672_ = l_Lasm_UI_Subs_on___redArg(v___x_670_, v___x_671_, v_d_669_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown(lean_object* v_Msg_673_, lean_object* v_d_674_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l_Lasm_UI_Subs_onKeyDown___redArg(v_d_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp___redArg(lean_object* v_d_677_){
_start:
{
uint8_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = 1;
v___x_679_ = ((lean_object*)(l_Lasm_UI_Subs_onKeyUp___redArg___closed__0));
v___x_680_ = l_Lasm_UI_Subs_on___redArg(v___x_678_, v___x_679_, v_d_677_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp(lean_object* v_Msg_681_, lean_object* v_d_682_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lasm_UI_Subs_onKeyUp___redArg(v_d_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove___redArg(lean_object* v_d_685_){
_start:
{
uint8_t v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = 1;
v___x_687_ = ((lean_object*)(l_Lasm_UI_Subs_onMouseMove___redArg___closed__0));
v___x_688_ = l_Lasm_UI_Subs_on___redArg(v___x_686_, v___x_687_, v_d_685_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove(lean_object* v_Msg_689_, lean_object* v_d_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Lasm_UI_Subs_onMouseMove___redArg(v_d_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp___redArg(lean_object* v_d_693_){
_start:
{
uint8_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_694_ = 1;
v___x_695_ = ((lean_object*)(l_Lasm_UI_Subs_onMouseUp___redArg___closed__0));
v___x_696_ = l_Lasm_UI_Subs_on___redArg(v___x_694_, v___x_695_, v_d_693_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp(lean_object* v_Msg_697_, lean_object* v_d_698_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lasm_UI_Subs_onMouseUp___redArg(v_d_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick___redArg(lean_object* v_d_701_){
_start:
{
uint8_t v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_702_ = 1;
v___x_703_ = ((lean_object*)(l_Lasm_UI_Subs_onClick___redArg___closed__0));
v___x_704_ = l_Lasm_UI_Subs_on___redArg(v___x_702_, v___x_703_, v_d_701_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick(lean_object* v_Msg_705_, lean_object* v_d_706_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lasm_UI_Subs_onClick___redArg(v_d_706_);
return v___x_707_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onResize___redArg___closed__5(void){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__4));
v___x_718_ = l_Lasm_UI_Decoder_float(v___x_717_);
return v___x_718_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onResize___redArg___closed__9(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__8));
v___x_727_ = l_Lasm_UI_Decoder_float(v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize___redArg(lean_object* v_f_728_){
_start:
{
uint8_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_729_ = 0;
v___x_730_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__0));
v___x_731_ = lean_obj_once(&l_Lasm_UI_Subs_onResize___redArg___closed__5, &l_Lasm_UI_Subs_onResize___redArg___closed__5_once, _init_l_Lasm_UI_Subs_onResize___redArg___closed__5);
v___x_732_ = lean_obj_once(&l_Lasm_UI_Subs_onResize___redArg___closed__9, &l_Lasm_UI_Subs_onResize___redArg___closed__9_once, _init_l_Lasm_UI_Subs_onResize___redArg___closed__9);
v___x_733_ = l_Lasm_UI_Decoder_map2___redArg(v_f_728_, v___x_731_, v___x_732_);
v___x_734_ = l_Lasm_UI_Subs_on___redArg(v___x_729_, v___x_730_, v___x_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize(lean_object* v_Msg_735_, lean_object* v_f_736_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lasm_UI_Subs_onResize___redArg(v_f_736_);
return v___x_737_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__3));
v___x_747_ = l_Lasm_UI_Decoder_string(v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg(lean_object* v_f_748_){
_start:
{
uint8_t v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_749_ = 1;
v___x_750_ = ((lean_object*)(l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__0));
v___x_751_ = lean_obj_once(&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4, &l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4_once, _init_l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4);
v___x_752_ = l_Lasm_UI_Decoder_map___redArg(v_f_748_, v___x_751_);
v___x_753_ = l_Lasm_UI_Subs_on___redArg(v___x_749_, v___x_750_, v___x_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange(lean_object* v_Msg_754_, lean_object* v_f_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lasm_UI_Subs_onVisibilityChange___redArg(v_f_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0(lean_object* v_f_757_, lean_object* v_vs_758_){
_start:
{
lean_object* v___y_760_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = lean_array_get_size(v_vs_758_);
v___x_774_ = lean_nat_dec_lt(v___x_772_, v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = lean_box(0);
v___x_776_ = lean_apply_1(v_f_757_, v___x_775_);
v___y_760_ = v___x_776_;
goto v___jp_759_;
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_array_fget_borrowed(v_vs_758_, v___x_772_);
lean_inc(v___x_777_);
v___x_778_ = lean_apply_1(v_f_757_, v___x_777_);
v___y_760_ = v___x_778_;
goto v___jp_759_;
}
v___jp_759_:
{
if (lean_obj_tag(v___y_760_) == 0)
{
lean_object* v___x_761_; 
v___x_761_ = lean_box(0);
return v___x_761_;
}
else
{
lean_object* v_val_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_771_; 
v_val_762_ = lean_ctor_get(v___y_760_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___y_760_);
if (v_isSharedCheck_771_ == 0)
{
v___x_764_ = v___y_760_;
v_isShared_765_ = v_isSharedCheck_771_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_val_762_);
lean_dec(v___y_760_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_771_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
uint8_t v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_766_ = 0;
v___x_767_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_767_, 0, v_val_762_);
lean_ctor_set_uint8(v___x_767_, sizeof(void*)*1, v___x_766_);
lean_ctor_set_uint8(v___x_767_, sizeof(void*)*1 + 1, v___x_766_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 0, v___x_767_);
v___x_769_ = v___x_764_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_767_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0___boxed(lean_object* v_f_779_, lean_object* v_vs_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lasm_UI_Subs_port___redArg___lam__0(v_f_779_, v_vs_780_);
lean_dec_ref(v_vs_780_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg(lean_object* v_name_782_, lean_object* v_f_783_){
_start:
{
lean_object* v___f_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___f_784_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_port___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_784_, 0, v_f_783_);
v___x_785_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_785_, 0, v_name_782_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v___f_784_);
v___x_787_ = lean_box(0);
v___x_788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port(lean_object* v_Msg_789_, lean_object* v_name_790_, lean_object* v_f_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lasm_UI_Subs_port___redArg(v_name_790_, v_f_791_);
return v___x_792_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_UI_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Subs(uint8_t builtin) {
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
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_UI_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_UI_instInhabitedTarget_default = _init_l_Lasm_UI_instInhabitedTarget_default();
l_Lasm_UI_instInhabitedTarget = _init_l_Lasm_UI_instInhabitedTarget();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
