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
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_string_hash(lean_object*);
uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Decoder_float(lean_object*);
lean_object* l_Lasm_UI_Decoder_map2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_UI_Decoder_string(lean_object*);
lean_object* l_Lasm_UI_Decoder_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_window_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_window_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_document_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_document_elim(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_UI_instReprSubSpec_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__5;
static lean_once_cell_t l_Lasm_UI_instReprSubSpec_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__6;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.UI.SubSpec.window"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__7 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__7_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__7_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__8 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__8_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__9 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__9_value;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.UI.SubSpec.document"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__10 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__10_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__10_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__11 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__11_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__12 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__12_value;
static const lean_string_object l_Lasm_UI_instReprSubSpec_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.UI.SubSpec.port"};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__13 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__13_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__13_value)}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__14 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__14_value;
static const lean_ctor_object l_Lasm_UI_instReprSubSpec_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_UI_instReprSubSpec_repr___closed__15 = (const lean_object*)&l_Lasm_UI_instReprSubSpec_repr___closed__15_value;
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
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_UI_SubSpec_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 0:
{
lean_object* v_ms_7_; lean_object* v___x_8_; 
v_ms_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_ms_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_ms_7_);
return v___x_8_;
}
case 1:
{
return v_k_6_;
}
case 4:
{
lean_object* v_name_9_; lean_object* v___x_10_; 
v_name_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_name_9_);
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_apply_1(v_k_6_, v_name_9_);
return v___x_10_;
}
default: 
{
lean_object* v_event_11_; lean_object* v_paths_12_; uint8_t v_preventDefault_13_; uint8_t v_stopPropagation_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v_event_11_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_event_11_);
v_paths_12_ = lean_ctor_get(v_t_5_, 1);
lean_inc(v_paths_12_);
v_preventDefault_13_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*2);
v_stopPropagation_14_ = lean_ctor_get_uint8(v_t_5_, sizeof(void*)*2 + 1);
lean_dec(v_t_5_);
v___x_15_ = lean_box(v_preventDefault_13_);
v___x_16_ = lean_box(v_stopPropagation_14_);
v___x_17_ = lean_apply_4(v_k_6_, v_event_11_, v_paths_12_, v___x_15_, v___x_16_);
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_20_, v_k_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___boxed(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_UI_SubSpec_ctorElim(v_motive_24_, v_ctorIdx_25_, v_t_26_, v_h_27_, v_k_28_);
lean_dec(v_ctorIdx_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim___redArg(lean_object* v_t_30_, lean_object* v_every_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_30_, v_every_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_every_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_34_, v_every_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim___redArg(lean_object* v_t_38_, lean_object* v_frame_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_38_, v_frame_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim(lean_object* v_motive_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_frame_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_42_, v_frame_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_window_elim___redArg(lean_object* v_t_46_, lean_object* v_window_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_46_, v_window_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_window_elim(lean_object* v_motive_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_window_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_50_, v_window_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_document_elim___redArg(lean_object* v_t_54_, lean_object* v_document_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_54_, v_document_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_document_elim(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_document_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_58_, v_document_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim___redArg(lean_object* v_t_62_, lean_object* v_port_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_62_, v_port_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_port_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_66_, v_port_68_);
return v___x_69_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(lean_object* v_a_70_, lean_object* v_b_71_){
_start:
{
lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_72_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_73_ = l_instDecidableEqList___redArg(v___x_72_, v_a_70_, v_b_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0___boxed(lean_object* v_a_74_, lean_object* v_b_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(v_a_74_, v_b_75_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
switch(lean_obj_tag(v_x_79_))
{
case 0:
{
if (lean_obj_tag(v_x_80_) == 0)
{
lean_object* v_ms_81_; lean_object* v_ms_82_; uint8_t v___x_83_; 
v_ms_81_ = lean_ctor_get(v_x_79_, 0);
lean_inc(v_ms_81_);
lean_dec_ref_known(v_x_79_, 1);
v_ms_82_ = lean_ctor_get(v_x_80_, 0);
lean_inc(v_ms_82_);
lean_dec_ref_known(v_x_80_, 1);
v___x_83_ = lean_nat_dec_eq(v_ms_81_, v_ms_82_);
lean_dec(v_ms_82_);
lean_dec(v_ms_81_);
return v___x_83_;
}
else
{
uint8_t v___x_84_; 
lean_dec_ref_known(v_x_79_, 1);
lean_dec(v_x_80_);
v___x_84_ = 0;
return v___x_84_;
}
}
case 1:
{
if (lean_obj_tag(v_x_80_) == 1)
{
uint8_t v___x_85_; 
v___x_85_ = 1;
return v___x_85_;
}
else
{
uint8_t v___x_86_; 
lean_dec(v_x_80_);
v___x_86_ = 0;
return v___x_86_;
}
}
case 2:
{
if (lean_obj_tag(v_x_80_) == 2)
{
lean_object* v_event_87_; lean_object* v_paths_88_; uint8_t v_preventDefault_89_; uint8_t v_stopPropagation_90_; lean_object* v_event_91_; lean_object* v_paths_92_; uint8_t v_preventDefault_93_; uint8_t v_stopPropagation_94_; uint8_t v___y_96_; uint8_t v___x_97_; 
v_event_87_ = lean_ctor_get(v_x_79_, 0);
lean_inc_ref(v_event_87_);
v_paths_88_ = lean_ctor_get(v_x_79_, 1);
lean_inc(v_paths_88_);
v_preventDefault_89_ = lean_ctor_get_uint8(v_x_79_, sizeof(void*)*2);
v_stopPropagation_90_ = lean_ctor_get_uint8(v_x_79_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_79_, 2);
v_event_91_ = lean_ctor_get(v_x_80_, 0);
lean_inc_ref(v_event_91_);
v_paths_92_ = lean_ctor_get(v_x_80_, 1);
lean_inc(v_paths_92_);
v_preventDefault_93_ = lean_ctor_get_uint8(v_x_80_, sizeof(void*)*2);
v_stopPropagation_94_ = lean_ctor_get_uint8(v_x_80_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_80_, 2);
v___x_97_ = lean_string_dec_eq(v_event_87_, v_event_91_);
lean_dec_ref(v_event_91_);
lean_dec_ref(v_event_87_);
if (v___x_97_ == 0)
{
lean_dec(v_paths_92_);
lean_dec(v_paths_88_);
return v___x_97_;
}
else
{
lean_object* v___f_98_; uint8_t v___x_99_; 
v___f_98_ = ((lean_object*)(l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0));
v___x_99_ = l_instDecidableEqList___redArg(v___f_98_, v_paths_88_, v_paths_92_);
if (v___x_99_ == 0)
{
return v___x_99_;
}
else
{
if (v_preventDefault_93_ == 0)
{
if (v_preventDefault_89_ == 0)
{
v___y_96_ = v___x_99_;
goto v___jp_95_;
}
else
{
return v_preventDefault_93_;
}
}
else
{
if (v_preventDefault_89_ == 0)
{
return v_preventDefault_89_;
}
else
{
v___y_96_ = v_preventDefault_89_;
goto v___jp_95_;
}
}
}
}
v___jp_95_:
{
if (v_stopPropagation_94_ == 0)
{
if (v_stopPropagation_90_ == 0)
{
return v___y_96_;
}
else
{
return v_stopPropagation_94_;
}
}
else
{
return v_stopPropagation_90_;
}
}
}
else
{
uint8_t v___x_100_; 
lean_dec_ref_known(v_x_79_, 2);
lean_dec(v_x_80_);
v___x_100_ = 0;
return v___x_100_;
}
}
case 3:
{
if (lean_obj_tag(v_x_80_) == 3)
{
lean_object* v_event_101_; lean_object* v_paths_102_; uint8_t v_preventDefault_103_; uint8_t v_stopPropagation_104_; lean_object* v_event_105_; lean_object* v_paths_106_; uint8_t v_preventDefault_107_; uint8_t v_stopPropagation_108_; uint8_t v___y_110_; uint8_t v___x_111_; 
v_event_101_ = lean_ctor_get(v_x_79_, 0);
lean_inc_ref(v_event_101_);
v_paths_102_ = lean_ctor_get(v_x_79_, 1);
lean_inc(v_paths_102_);
v_preventDefault_103_ = lean_ctor_get_uint8(v_x_79_, sizeof(void*)*2);
v_stopPropagation_104_ = lean_ctor_get_uint8(v_x_79_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_79_, 2);
v_event_105_ = lean_ctor_get(v_x_80_, 0);
lean_inc_ref(v_event_105_);
v_paths_106_ = lean_ctor_get(v_x_80_, 1);
lean_inc(v_paths_106_);
v_preventDefault_107_ = lean_ctor_get_uint8(v_x_80_, sizeof(void*)*2);
v_stopPropagation_108_ = lean_ctor_get_uint8(v_x_80_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_80_, 2);
v___x_111_ = lean_string_dec_eq(v_event_101_, v_event_105_);
lean_dec_ref(v_event_105_);
lean_dec_ref(v_event_101_);
if (v___x_111_ == 0)
{
lean_dec(v_paths_106_);
lean_dec(v_paths_102_);
return v___x_111_;
}
else
{
lean_object* v___f_112_; uint8_t v___x_113_; 
v___f_112_ = ((lean_object*)(l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0));
v___x_113_ = l_instDecidableEqList___redArg(v___f_112_, v_paths_102_, v_paths_106_);
if (v___x_113_ == 0)
{
return v___x_113_;
}
else
{
if (v_preventDefault_107_ == 0)
{
if (v_preventDefault_103_ == 0)
{
v___y_110_ = v___x_113_;
goto v___jp_109_;
}
else
{
return v_preventDefault_107_;
}
}
else
{
if (v_preventDefault_103_ == 0)
{
return v_preventDefault_103_;
}
else
{
v___y_110_ = v_preventDefault_103_;
goto v___jp_109_;
}
}
}
}
v___jp_109_:
{
if (v_stopPropagation_108_ == 0)
{
if (v_stopPropagation_104_ == 0)
{
return v___y_110_;
}
else
{
return v_stopPropagation_108_;
}
}
else
{
return v_stopPropagation_104_;
}
}
}
else
{
uint8_t v___x_114_; 
lean_dec_ref_known(v_x_79_, 2);
lean_dec(v_x_80_);
v___x_114_ = 0;
return v___x_114_;
}
}
default: 
{
if (lean_obj_tag(v_x_80_) == 4)
{
lean_object* v_name_115_; lean_object* v_name_116_; uint8_t v___x_117_; 
v_name_115_ = lean_ctor_get(v_x_79_, 0);
lean_inc_ref(v_name_115_);
lean_dec_ref_known(v_x_79_, 1);
v_name_116_ = lean_ctor_get(v_x_80_, 0);
lean_inc_ref(v_name_116_);
lean_dec_ref_known(v_x_80_, 1);
v___x_117_ = lean_string_dec_eq(v_name_115_, v_name_116_);
lean_dec_ref(v_name_116_);
lean_dec_ref(v_name_115_);
return v___x_117_;
}
else
{
uint8_t v___x_118_; 
lean_dec_ref_known(v_x_79_, 1);
lean_dec(v_x_80_);
v___x_118_ = 0;
return v___x_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___boxed(lean_object* v_x_119_, lean_object* v_x_120_){
_start:
{
uint8_t v_res_121_; lean_object* v_r_122_; 
v_res_121_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_x_119_, v_x_120_);
v_r_122_ = lean_box(v_res_121_);
return v_r_122_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v___x_125_; 
v___x_125_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_x_123_, v_x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec___boxed(lean_object* v_x_126_, lean_object* v_x_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Lasm_UI_instDecidableEqSubSpec(v_x_126_, v_x_127_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableSubSpec_hash(lean_object* v_x_130_){
_start:
{
switch(lean_obj_tag(v_x_130_))
{
case 0:
{
lean_object* v_ms_131_; uint64_t v___x_132_; uint64_t v___x_133_; uint64_t v___x_134_; 
v_ms_131_ = lean_ctor_get(v_x_130_, 0);
v___x_132_ = 0ULL;
v___x_133_ = lean_uint64_of_nat(v_ms_131_);
v___x_134_ = lean_uint64_mix_hash(v___x_132_, v___x_133_);
return v___x_134_;
}
case 1:
{
uint64_t v___x_135_; 
v___x_135_ = 1ULL;
return v___x_135_;
}
case 2:
{
lean_object* v_event_136_; lean_object* v_paths_137_; uint8_t v_preventDefault_138_; uint8_t v_stopPropagation_139_; uint64_t v___x_140_; uint64_t v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; uint64_t v___y_147_; 
v_event_136_ = lean_ctor_get(v_x_130_, 0);
v_paths_137_ = lean_ctor_get(v_x_130_, 1);
v_preventDefault_138_ = lean_ctor_get_uint8(v_x_130_, sizeof(void*)*2);
v_stopPropagation_139_ = lean_ctor_get_uint8(v_x_130_, sizeof(void*)*2 + 1);
v___x_140_ = 2ULL;
v___x_141_ = lean_string_hash(v_event_136_);
v___x_142_ = lean_uint64_mix_hash(v___x_140_, v___x_141_);
v___x_143_ = 7ULL;
v___x_144_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_143_, v_paths_137_);
v___x_145_ = lean_uint64_mix_hash(v___x_142_, v___x_144_);
if (v_preventDefault_138_ == 0)
{
uint64_t v___x_153_; 
v___x_153_ = 13ULL;
v___y_147_ = v___x_153_;
goto v___jp_146_;
}
else
{
uint64_t v___x_154_; 
v___x_154_ = 11ULL;
v___y_147_ = v___x_154_;
goto v___jp_146_;
}
v___jp_146_:
{
uint64_t v___x_148_; 
v___x_148_ = lean_uint64_mix_hash(v___x_145_, v___y_147_);
if (v_stopPropagation_139_ == 0)
{
uint64_t v___x_149_; uint64_t v___x_150_; 
v___x_149_ = 13ULL;
v___x_150_ = lean_uint64_mix_hash(v___x_148_, v___x_149_);
return v___x_150_;
}
else
{
uint64_t v___x_151_; uint64_t v___x_152_; 
v___x_151_ = 11ULL;
v___x_152_ = lean_uint64_mix_hash(v___x_148_, v___x_151_);
return v___x_152_;
}
}
}
case 3:
{
lean_object* v_event_155_; lean_object* v_paths_156_; uint8_t v_preventDefault_157_; uint8_t v_stopPropagation_158_; uint64_t v___x_159_; uint64_t v___x_160_; uint64_t v___x_161_; uint64_t v___x_162_; uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v___y_166_; 
v_event_155_ = lean_ctor_get(v_x_130_, 0);
v_paths_156_ = lean_ctor_get(v_x_130_, 1);
v_preventDefault_157_ = lean_ctor_get_uint8(v_x_130_, sizeof(void*)*2);
v_stopPropagation_158_ = lean_ctor_get_uint8(v_x_130_, sizeof(void*)*2 + 1);
v___x_159_ = 3ULL;
v___x_160_ = lean_string_hash(v_event_155_);
v___x_161_ = lean_uint64_mix_hash(v___x_159_, v___x_160_);
v___x_162_ = 7ULL;
v___x_163_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_162_, v_paths_156_);
v___x_164_ = lean_uint64_mix_hash(v___x_161_, v___x_163_);
if (v_preventDefault_157_ == 0)
{
uint64_t v___x_172_; 
v___x_172_ = 13ULL;
v___y_166_ = v___x_172_;
goto v___jp_165_;
}
else
{
uint64_t v___x_173_; 
v___x_173_ = 11ULL;
v___y_166_ = v___x_173_;
goto v___jp_165_;
}
v___jp_165_:
{
uint64_t v___x_167_; 
v___x_167_ = lean_uint64_mix_hash(v___x_164_, v___y_166_);
if (v_stopPropagation_158_ == 0)
{
uint64_t v___x_168_; uint64_t v___x_169_; 
v___x_168_ = 13ULL;
v___x_169_ = lean_uint64_mix_hash(v___x_167_, v___x_168_);
return v___x_169_;
}
else
{
uint64_t v___x_170_; uint64_t v___x_171_; 
v___x_170_ = 11ULL;
v___x_171_ = lean_uint64_mix_hash(v___x_167_, v___x_170_);
return v___x_171_;
}
}
}
default: 
{
lean_object* v_name_174_; uint64_t v___x_175_; uint64_t v___x_176_; uint64_t v___x_177_; 
v_name_174_ = lean_ctor_get(v_x_130_, 0);
v___x_175_ = 4ULL;
v___x_176_ = lean_string_hash(v_name_174_);
v___x_177_ = lean_uint64_mix_hash(v___x_175_, v___x_176_);
return v___x_177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableSubSpec_hash___boxed(lean_object* v_x_178_){
_start:
{
uint64_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l_Lasm_UI_instHashableSubSpec_hash(v_x_178_);
lean_dec(v_x_178_);
v_r_180_ = lean_box_uint64(v_res_179_);
return v_r_180_;
}
}
static lean_object* _init_l_Lasm_UI_instReprSubSpec_repr___closed__5(void){
_start:
{
lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_192_ = lean_unsigned_to_nat(2u);
v___x_193_ = lean_nat_to_int(v___x_192_);
return v___x_193_;
}
}
static lean_object* _init_l_Lasm_UI_instReprSubSpec_repr___closed__6(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_to_int(v___x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr(lean_object* v_x_214_, lean_object* v_prec_215_){
_start:
{
lean_object* v___y_217_; 
switch(lean_obj_tag(v_x_214_))
{
case 0:
{
lean_object* v_ms_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_243_; 
v_ms_223_ = lean_ctor_get(v_x_214_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v_x_214_);
if (v_isSharedCheck_243_ == 0)
{
v___x_225_ = v_x_214_;
v_isShared_226_ = v_isSharedCheck_243_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_ms_223_);
lean_dec(v_x_214_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_243_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___y_228_; lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(1024u);
v___x_240_ = lean_nat_dec_le(v___x_239_, v_prec_215_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_228_ = v___x_241_;
goto v___jp_227_;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_228_ = v___x_242_;
goto v___jp_227_;
}
v___jp_227_:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_229_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__4));
v___x_230_ = l_Nat_reprFast(v_ms_223_);
if (v_isShared_226_ == 0)
{
lean_ctor_set_tag(v___x_225_, 3);
lean_ctor_set(v___x_225_, 0, v___x_230_);
v___x_232_ = v___x_225_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_238_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_229_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
lean_inc(v___y_228_);
v___x_234_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_234_, 0, v___y_228_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = 0;
v___x_236_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_236_, 0, v___x_234_);
lean_ctor_set_uint8(v___x_236_, sizeof(void*)*1, v___x_235_);
v___x_237_ = l_Repr_addAppParen(v___x_236_, v_prec_215_);
return v___x_237_;
}
}
}
}
case 1:
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(1024u);
v___x_245_ = lean_nat_dec_le(v___x_244_, v_prec_215_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; 
v___x_246_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_217_ = v___x_246_;
goto v___jp_216_;
}
else
{
lean_object* v___x_247_; 
v___x_247_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_217_ = v___x_247_;
goto v___jp_216_;
}
}
case 2:
{
lean_object* v_event_248_; lean_object* v_paths_249_; uint8_t v_preventDefault_250_; uint8_t v_stopPropagation_251_; lean_object* v___y_253_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_event_248_ = lean_ctor_get(v_x_214_, 0);
lean_inc_ref(v_event_248_);
v_paths_249_ = lean_ctor_get(v_x_214_, 1);
lean_inc(v_paths_249_);
v_preventDefault_250_ = lean_ctor_get_uint8(v_x_214_, sizeof(void*)*2);
v_stopPropagation_251_ = lean_ctor_get_uint8(v_x_214_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_214_, 2);
v___x_272_ = lean_unsigned_to_nat(1024u);
v___x_273_ = lean_nat_dec_le(v___x_272_, v_prec_215_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_253_ = v___x_274_;
goto v___jp_252_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_253_ = v___x_275_;
goto v___jp_252_;
}
v___jp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_254_ = lean_box(1);
v___x_255_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__9));
v___x_256_ = l_String_quote(v_event_248_);
v___x_257_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_255_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___x_254_);
v___x_260_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_249_);
v___x_261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_254_);
v___x_263_ = l_Bool_repr___redArg(v_preventDefault_250_);
v___x_264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___x_254_);
v___x_266_ = l_Bool_repr___redArg(v_stopPropagation_251_);
v___x_267_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
lean_inc(v___y_253_);
v___x_268_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_268_, 0, v___y_253_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = 0;
v___x_270_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set_uint8(v___x_270_, sizeof(void*)*1, v___x_269_);
v___x_271_ = l_Repr_addAppParen(v___x_270_, v_prec_215_);
return v___x_271_;
}
}
case 3:
{
lean_object* v_event_276_; lean_object* v_paths_277_; uint8_t v_preventDefault_278_; uint8_t v_stopPropagation_279_; lean_object* v___y_281_; lean_object* v___x_300_; uint8_t v___x_301_; 
v_event_276_ = lean_ctor_get(v_x_214_, 0);
lean_inc_ref(v_event_276_);
v_paths_277_ = lean_ctor_get(v_x_214_, 1);
lean_inc(v_paths_277_);
v_preventDefault_278_ = lean_ctor_get_uint8(v_x_214_, sizeof(void*)*2);
v_stopPropagation_279_ = lean_ctor_get_uint8(v_x_214_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_214_, 2);
v___x_300_ = lean_unsigned_to_nat(1024u);
v___x_301_ = lean_nat_dec_le(v___x_300_, v_prec_215_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
v___x_302_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_281_ = v___x_302_;
goto v___jp_280_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_281_ = v___x_303_;
goto v___jp_280_;
}
v___jp_280_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_282_ = lean_box(1);
v___x_283_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__12));
v___x_284_ = l_String_quote(v_event_276_);
v___x_285_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_283_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_282_);
v___x_288_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_277_);
v___x_289_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_282_);
v___x_291_ = l_Bool_repr___redArg(v_preventDefault_278_);
v___x_292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_282_);
v___x_294_ = l_Bool_repr___redArg(v_stopPropagation_279_);
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_293_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
lean_inc(v___y_281_);
v___x_296_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_296_, 0, v___y_281_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = 0;
v___x_298_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set_uint8(v___x_298_, sizeof(void*)*1, v___x_297_);
v___x_299_ = l_Repr_addAppParen(v___x_298_, v_prec_215_);
return v___x_299_;
}
}
default: 
{
lean_object* v_name_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_324_; 
v_name_304_ = lean_ctor_get(v_x_214_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v_x_214_);
if (v_isSharedCheck_324_ == 0)
{
v___x_306_ = v_x_214_;
v_isShared_307_ = v_isSharedCheck_324_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_name_304_);
lean_dec(v_x_214_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_324_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___y_309_; lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(1024u);
v___x_321_ = lean_nat_dec_le(v___x_320_, v_prec_215_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; 
v___x_322_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_309_ = v___x_322_;
goto v___jp_308_;
}
else
{
lean_object* v___x_323_; 
v___x_323_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_309_ = v___x_323_;
goto v___jp_308_;
}
v___jp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_310_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__15));
v___x_311_ = l_String_quote(v_name_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set_tag(v___x_306_, 3);
lean_ctor_set(v___x_306_, 0, v___x_311_);
v___x_313_ = v___x_306_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_319_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_310_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
lean_inc(v___y_309_);
v___x_315_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_315_, 0, v___y_309_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v___x_316_ = 0;
v___x_317_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_317_, 0, v___x_315_);
lean_ctor_set_uint8(v___x_317_, sizeof(void*)*1, v___x_316_);
v___x_318_ = l_Repr_addAppParen(v___x_317_, v_prec_215_);
return v___x_318_;
}
}
}
}
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_218_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__1));
lean_inc(v___y_217_);
v___x_219_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_219_, 0, v___y_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = 0;
v___x_221_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set_uint8(v___x_221_, sizeof(void*)*1, v___x_220_);
v___x_222_ = l_Repr_addAppParen(v___x_221_, v_prec_215_);
return v___x_222_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr___boxed(lean_object* v_x_325_, lean_object* v_prec_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lasm_UI_instReprSubSpec_repr(v_x_325_, v_prec_326_);
lean_dec(v_prec_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg(){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_box(0);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg___boxed(lean_object* v___dummy_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lasm_UI_Subs_none___redArg();
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none(lean_object* v_Msg_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_box(0);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg(){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_box(0);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg___boxed(lean_object* v___dummy_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lasm_UI_Subs_instInhabited___redArg();
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited(lean_object* v_Msg_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_box(0);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg(){
_start:
{
lean_object* v___f_348_; 
v___f_348_ = ((lean_object*)(l_Lasm_UI_Subs_instAppend___redArg___closed__0));
return v___f_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg___boxed(lean_object* v___dummy_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = l_Lasm_UI_Subs_instAppend___redArg();
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend(lean_object* v_Msg_351_){
_start:
{
lean_object* v___f_352_; 
v___f_352_ = ((lean_object*)(l_Lasm_UI_Subs_instAppend___redArg___closed__0));
return v___f_352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
if (lean_obj_tag(v_a_353_) == 0)
{
lean_object* v___x_355_; 
v___x_355_ = lean_array_to_list(v_a_354_);
return v___x_355_;
}
else
{
lean_object* v_head_356_; lean_object* v_tail_357_; lean_object* v___x_358_; 
v_head_356_ = lean_ctor_get(v_a_353_, 0);
lean_inc(v_head_356_);
v_tail_357_ = lean_ctor_get(v_a_353_, 1);
lean_inc(v_tail_357_);
lean_dec_ref_known(v_a_353_, 2);
v___x_358_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_354_, v_head_356_);
v_a_353_ = v_tail_357_;
v_a_354_ = v___x_358_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch___redArg(lean_object* v_subs_362_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l_Lasm_UI_Subs_batch___redArg___closed__0));
v___x_364_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(v_subs_362_, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch(lean_object* v_Msg_365_, lean_object* v_subs_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lasm_UI_Subs_batch___redArg(v_subs_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0(lean_object* v_Msg_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(v_a_369_, v_a_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0(lean_object* v_handle_372_, lean_object* v_f_373_, lean_object* v_vs_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_apply_1(v_handle_372_, v_vs_374_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v___x_376_; 
lean_dec(v_f_373_);
v___x_376_ = lean_box(0);
return v___x_376_;
}
else
{
lean_object* v_val_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_385_; 
v_val_377_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_385_ == 0)
{
v___x_379_ = v___x_375_;
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_val_377_);
lean_dec(v___x_375_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_381_ = lean_apply_1(v_f_373_, v_val_377_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_381_);
v___x_383_ = v___x_379_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(lean_object* v_f_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
if (lean_obj_tag(v_a_387_) == 0)
{
lean_object* v___x_389_; 
lean_dec(v_f_386_);
v___x_389_ = l_List_reverse___redArg(v_a_388_);
return v___x_389_;
}
else
{
lean_object* v_head_390_; lean_object* v_tail_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_409_; 
v_head_390_ = lean_ctor_get(v_a_387_, 0);
v_tail_391_ = lean_ctor_get(v_a_387_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_a_387_);
if (v_isSharedCheck_409_ == 0)
{
v___x_393_ = v_a_387_;
v_isShared_394_ = v_isSharedCheck_409_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_tail_391_);
lean_inc(v_head_390_);
lean_dec(v_a_387_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_409_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v_spec_395_; lean_object* v_handle_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_408_; 
v_spec_395_ = lean_ctor_get(v_head_390_, 0);
v_handle_396_ = lean_ctor_get(v_head_390_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v_head_390_);
if (v_isSharedCheck_408_ == 0)
{
v___x_398_ = v_head_390_;
v_isShared_399_ = v_isSharedCheck_408_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_handle_396_);
lean_inc(v_spec_395_);
lean_dec(v_head_390_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_408_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___f_400_; lean_object* v___x_402_; 
lean_inc(v_f_386_);
v___f_400_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_400_, 0, v_handle_396_);
lean_closure_set(v___f_400_, 1, v_f_386_);
if (v_isShared_399_ == 0)
{
lean_ctor_set(v___x_398_, 1, v___f_400_);
v___x_402_ = v___x_398_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_spec_395_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___f_400_);
v___x_402_ = v_reuseFailAlloc_407_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_404_; 
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 1, v_a_388_);
lean_ctor_set(v___x_393_, 0, v___x_402_);
v___x_404_ = v___x_393_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v_a_388_);
v___x_404_ = v_reuseFailAlloc_406_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
v_a_387_ = v_tail_391_;
v_a_388_ = v___x_404_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map___redArg(lean_object* v_f_410_, lean_object* v_s_411_){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_box(0);
v___x_413_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(v_f_410_, v_s_411_, v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map(lean_object* v_00_u03b1_414_, lean_object* v_00_u03b2_415_, lean_object* v_f_416_, lean_object* v_s_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lasm_UI_Subs_map___redArg(v_f_416_, v_s_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0(lean_object* v_00_u03b1_419_, lean_object* v_00_u03b2_420_, lean_object* v_f_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(v_f_421_, v_a_422_, v_a_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_evVal(lean_object* v_x_425_){
_start:
{
switch(lean_obj_tag(v_x_425_))
{
case 1:
{
lean_object* v___x_426_; 
v___x_426_ = lean_box(1);
return v___x_426_;
}
case 2:
{
uint8_t v_b_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
v_b_427_ = lean_ctor_get_uint8(v_x_425_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v_x_425_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_dec(v_x_425_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_433_, 0, v_b_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
case 3:
{
double v_n_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_n_435_ = lean_ctor_get_float(v_x_425_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v_x_425_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_dec(v_x_425_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_441_, 0, v_n_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
case 4:
{
lean_object* v_s_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_s_443_ = lean_ctor_get(v_x_425_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v_x_425_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v_x_425_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_s_443_);
lean_dec(v_x_425_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_s_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
case 5:
{
lean_object* v_i_451_; double v___x_452_; lean_object* v___x_453_; 
v_i_451_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_i_451_);
lean_dec_ref_known(v_x_425_, 1);
v___x_452_ = l_Float_ofInt(v_i_451_);
lean_dec(v_i_451_);
v___x_453_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
default: 
{
lean_object* v___x_454_; 
lean_dec(v_x_425_);
v___x_454_ = lean_box(0);
return v___x_454_;
}
}
}
}
static double _init_l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0(void){
_start:
{
lean_object* v___x_455_; double v___x_456_; 
v___x_455_ = lean_unsigned_to_nat(0u);
v___x_456_ = lean_float_of_nat(v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT double l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(lean_object* v_x_457_){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = lean_array_get_size(v_x_457_);
v___x_461_ = lean_unsigned_to_nat(1u);
v___x_462_ = lean_nat_dec_eq(v___x_460_, v___x_461_);
if (v___x_462_ == 0)
{
goto v___jp_458_;
}
else
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = lean_array_fget_borrowed(v_x_457_, v___x_463_);
if (lean_obj_tag(v___x_464_) == 3)
{
double v_n_465_; 
v_n_465_ = lean_ctor_get_float(v___x_464_, 0);
return v_n_465_;
}
else
{
goto v___jp_458_;
}
}
v___jp_458_:
{
double v___x_459_; 
v___x_459_ = lean_float_once(&l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0, &l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0_once, _init_l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0);
return v___x_459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___boxed(lean_object* v_x_466_){
_start:
{
double v_res_467_; lean_object* v_r_468_; 
v_res_467_ = l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(v_x_466_);
lean_dec_ref(v_x_466_);
v_r_468_ = lean_box_float(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0(lean_object* v_f_469_, lean_object* v_vs_470_){
_start:
{
double v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_471_ = l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(v_vs_470_);
v___x_472_ = lean_box_float(v___x_471_);
v___x_473_ = lean_apply_1(v_f_469_, v___x_472_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0___boxed(lean_object* v_f_475_, lean_object* v_vs_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lasm_UI_Subs_every___redArg___lam__0(v_f_475_, v_vs_476_);
lean_dec_ref(v_vs_476_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg(lean_object* v_ms_478_, lean_object* v_f_479_){
_start:
{
lean_object* v___f_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___f_480_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_every___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_480_, 0, v_f_479_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v_ms_478_);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v___f_480_);
v___x_483_ = lean_box(0);
v___x_484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every(lean_object* v_Msg_485_, lean_object* v_ms_486_, lean_object* v_f_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lasm_UI_Subs_every___redArg(v_ms_486_, v_f_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame___redArg(lean_object* v_f_489_){
_start:
{
lean_object* v___f_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___f_490_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_every___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_490_, 0, v_f_489_);
v___x_491_ = lean_box(1);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___f_490_);
v___x_493_ = lean_box(0);
v___x_494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame(lean_object* v_Msg_495_, lean_object* v_f_496_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = l_Lasm_UI_Subs_onAnimationFrame___redArg(v_f_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
if (lean_obj_tag(v_a_498_) == 0)
{
lean_object* v___x_500_; 
v___x_500_ = l_List_reverse___redArg(v_a_499_);
return v___x_500_;
}
else
{
lean_object* v_head_501_; lean_object* v_tail_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_511_; 
v_head_501_ = lean_ctor_get(v_a_498_, 0);
v_tail_502_ = lean_ctor_get(v_a_498_, 1);
v_isSharedCheck_511_ = !lean_is_exclusive(v_a_498_);
if (v_isSharedCheck_511_ == 0)
{
v___x_504_ = v_a_498_;
v_isShared_505_ = v_isSharedCheck_511_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_tail_502_);
lean_inc(v_head_501_);
lean_dec(v_a_498_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_511_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_506_ = l_Lasm_UI_Subs_evVal(v_head_501_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v_a_499_);
lean_ctor_set(v___x_504_, 0, v___x_506_);
v___x_508_ = v___x_504_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_506_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_a_499_);
v___x_508_ = v_reuseFailAlloc_510_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
v_a_498_ = v_tail_502_;
v_a_499_ = v___x_508_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg___lam__0(lean_object* v_run_512_, lean_object* v_vs_513_){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_514_ = lean_array_to_list(v_vs_513_);
v___x_515_ = lean_box(0);
v___x_516_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_514_, v___x_515_);
v___x_517_ = lean_apply_1(v_run_512_, v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg(lean_object* v_event_518_, lean_object* v_d_519_, uint8_t v_preventDefault_520_, uint8_t v_stopPropagation_521_){
_start:
{
lean_object* v_paths_522_; lean_object* v_run_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_534_; 
v_paths_522_ = lean_ctor_get(v_d_519_, 0);
v_run_523_ = lean_ctor_get(v_d_519_, 1);
v_isSharedCheck_534_ = !lean_is_exclusive(v_d_519_);
if (v_isSharedCheck_534_ == 0)
{
v___x_525_ = v_d_519_;
v_isShared_526_ = v_isSharedCheck_534_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_run_523_);
lean_inc(v_paths_522_);
lean_dec(v_d_519_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_534_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___f_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___f_527_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_onWindow___redArg___lam__0), 2, 1);
lean_closure_set(v___f_527_, 0, v_run_523_);
v___x_528_ = lean_alloc_ctor(2, 2, 2);
lean_ctor_set(v___x_528_, 0, v_event_518_);
lean_ctor_set(v___x_528_, 1, v_paths_522_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*2, v_preventDefault_520_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*2 + 1, v_stopPropagation_521_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 1, v___f_527_);
lean_ctor_set(v___x_525_, 0, v___x_528_);
v___x_530_ = v___x_525_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___f_527_);
v___x_530_ = v_reuseFailAlloc_533_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = lean_box(0);
v___x_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
return v___x_532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg___boxed(lean_object* v_event_535_, lean_object* v_d_536_, lean_object* v_preventDefault_537_, lean_object* v_stopPropagation_538_){
_start:
{
uint8_t v_preventDefault_boxed_539_; uint8_t v_stopPropagation_boxed_540_; lean_object* v_res_541_; 
v_preventDefault_boxed_539_ = lean_unbox(v_preventDefault_537_);
v_stopPropagation_boxed_540_ = lean_unbox(v_stopPropagation_538_);
v_res_541_ = l_Lasm_UI_Subs_onWindow___redArg(v_event_535_, v_d_536_, v_preventDefault_boxed_539_, v_stopPropagation_boxed_540_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow(lean_object* v_Msg_542_, lean_object* v_event_543_, lean_object* v_d_544_, uint8_t v_preventDefault_545_, uint8_t v_stopPropagation_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lasm_UI_Subs_onWindow___redArg(v_event_543_, v_d_544_, v_preventDefault_545_, v_stopPropagation_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___boxed(lean_object* v_Msg_548_, lean_object* v_event_549_, lean_object* v_d_550_, lean_object* v_preventDefault_551_, lean_object* v_stopPropagation_552_){
_start:
{
uint8_t v_preventDefault_boxed_553_; uint8_t v_stopPropagation_boxed_554_; lean_object* v_res_555_; 
v_preventDefault_boxed_553_ = lean_unbox(v_preventDefault_551_);
v_stopPropagation_boxed_554_ = lean_unbox(v_stopPropagation_552_);
v_res_555_ = l_Lasm_UI_Subs_onWindow(v_Msg_548_, v_event_549_, v_d_550_, v_preventDefault_boxed_553_, v_stopPropagation_boxed_554_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___redArg(lean_object* v_event_556_, lean_object* v_d_557_, uint8_t v_preventDefault_558_, uint8_t v_stopPropagation_559_){
_start:
{
lean_object* v_paths_560_; lean_object* v_run_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_572_; 
v_paths_560_ = lean_ctor_get(v_d_557_, 0);
v_run_561_ = lean_ctor_get(v_d_557_, 1);
v_isSharedCheck_572_ = !lean_is_exclusive(v_d_557_);
if (v_isSharedCheck_572_ == 0)
{
v___x_563_ = v_d_557_;
v_isShared_564_ = v_isSharedCheck_572_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_run_561_);
lean_inc(v_paths_560_);
lean_dec(v_d_557_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_572_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___f_565_; lean_object* v___x_566_; lean_object* v___x_568_; 
v___f_565_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_onWindow___redArg___lam__0), 2, 1);
lean_closure_set(v___f_565_, 0, v_run_561_);
v___x_566_ = lean_alloc_ctor(3, 2, 2);
lean_ctor_set(v___x_566_, 0, v_event_556_);
lean_ctor_set(v___x_566_, 1, v_paths_560_);
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*2, v_preventDefault_558_);
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*2 + 1, v_stopPropagation_559_);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 1, v___f_565_);
lean_ctor_set(v___x_563_, 0, v___x_566_);
v___x_568_ = v___x_563_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_566_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v___f_565_);
v___x_568_ = v_reuseFailAlloc_571_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_box(0);
v___x_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_568_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
return v___x_570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___redArg___boxed(lean_object* v_event_573_, lean_object* v_d_574_, lean_object* v_preventDefault_575_, lean_object* v_stopPropagation_576_){
_start:
{
uint8_t v_preventDefault_boxed_577_; uint8_t v_stopPropagation_boxed_578_; lean_object* v_res_579_; 
v_preventDefault_boxed_577_ = lean_unbox(v_preventDefault_575_);
v_stopPropagation_boxed_578_ = lean_unbox(v_stopPropagation_576_);
v_res_579_ = l_Lasm_UI_Subs_onDocument___redArg(v_event_573_, v_d_574_, v_preventDefault_boxed_577_, v_stopPropagation_boxed_578_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument(lean_object* v_Msg_580_, lean_object* v_event_581_, lean_object* v_d_582_, uint8_t v_preventDefault_583_, uint8_t v_stopPropagation_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lasm_UI_Subs_onDocument___redArg(v_event_581_, v_d_582_, v_preventDefault_583_, v_stopPropagation_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___boxed(lean_object* v_Msg_586_, lean_object* v_event_587_, lean_object* v_d_588_, lean_object* v_preventDefault_589_, lean_object* v_stopPropagation_590_){
_start:
{
uint8_t v_preventDefault_boxed_591_; uint8_t v_stopPropagation_boxed_592_; lean_object* v_res_593_; 
v_preventDefault_boxed_591_ = lean_unbox(v_preventDefault_589_);
v_stopPropagation_boxed_592_ = lean_unbox(v_stopPropagation_590_);
v_res_593_ = l_Lasm_UI_Subs_onDocument(v_Msg_586_, v_event_587_, v_d_588_, v_preventDefault_boxed_591_, v_stopPropagation_boxed_592_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown___redArg(lean_object* v_d_595_){
_start:
{
lean_object* v___x_596_; uint8_t v___x_597_; lean_object* v___x_598_; 
v___x_596_ = ((lean_object*)(l_Lasm_UI_Subs_onKeyDown___redArg___closed__0));
v___x_597_ = 0;
v___x_598_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_596_, v_d_595_, v___x_597_, v___x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown(lean_object* v_Msg_599_, lean_object* v_d_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lasm_UI_Subs_onKeyDown___redArg(v_d_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp___redArg(lean_object* v_d_603_){
_start:
{
lean_object* v___x_604_; uint8_t v___x_605_; lean_object* v___x_606_; 
v___x_604_ = ((lean_object*)(l_Lasm_UI_Subs_onKeyUp___redArg___closed__0));
v___x_605_ = 0;
v___x_606_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_604_, v_d_603_, v___x_605_, v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp(lean_object* v_Msg_607_, lean_object* v_d_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lasm_UI_Subs_onKeyUp___redArg(v_d_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove___redArg(lean_object* v_d_611_){
_start:
{
lean_object* v___x_612_; uint8_t v___x_613_; lean_object* v___x_614_; 
v___x_612_ = ((lean_object*)(l_Lasm_UI_Subs_onMouseMove___redArg___closed__0));
v___x_613_ = 0;
v___x_614_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_612_, v_d_611_, v___x_613_, v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove(lean_object* v_Msg_615_, lean_object* v_d_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lasm_UI_Subs_onMouseMove___redArg(v_d_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp___redArg(lean_object* v_d_619_){
_start:
{
lean_object* v___x_620_; uint8_t v___x_621_; lean_object* v___x_622_; 
v___x_620_ = ((lean_object*)(l_Lasm_UI_Subs_onMouseUp___redArg___closed__0));
v___x_621_ = 0;
v___x_622_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_620_, v_d_619_, v___x_621_, v___x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp(lean_object* v_Msg_623_, lean_object* v_d_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lasm_UI_Subs_onMouseUp___redArg(v_d_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick___redArg(lean_object* v_d_627_){
_start:
{
lean_object* v___x_628_; uint8_t v___x_629_; lean_object* v___x_630_; 
v___x_628_ = ((lean_object*)(l_Lasm_UI_Subs_onClick___redArg___closed__0));
v___x_629_ = 0;
v___x_630_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_628_, v_d_627_, v___x_629_, v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick(lean_object* v_Msg_631_, lean_object* v_d_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lasm_UI_Subs_onClick___redArg(v_d_632_);
return v___x_633_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onResize___redArg___closed__5(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__4));
v___x_644_ = l_Lasm_UI_Decoder_float(v___x_643_);
return v___x_644_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onResize___redArg___closed__9(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__8));
v___x_653_ = l_Lasm_UI_Decoder_float(v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize___redArg(lean_object* v_f_654_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; lean_object* v___x_660_; 
v___x_655_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__0));
v___x_656_ = lean_obj_once(&l_Lasm_UI_Subs_onResize___redArg___closed__5, &l_Lasm_UI_Subs_onResize___redArg___closed__5_once, _init_l_Lasm_UI_Subs_onResize___redArg___closed__5);
v___x_657_ = lean_obj_once(&l_Lasm_UI_Subs_onResize___redArg___closed__9, &l_Lasm_UI_Subs_onResize___redArg___closed__9_once, _init_l_Lasm_UI_Subs_onResize___redArg___closed__9);
v___x_658_ = l_Lasm_UI_Decoder_map2___redArg(v_f_654_, v___x_656_, v___x_657_);
v___x_659_ = 0;
v___x_660_ = l_Lasm_UI_Subs_onWindow___redArg(v___x_655_, v___x_658_, v___x_659_, v___x_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize(lean_object* v_Msg_661_, lean_object* v_f_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lasm_UI_Subs_onResize___redArg(v_f_662_);
return v___x_663_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = ((lean_object*)(l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__3));
v___x_673_ = l_Lasm_UI_Decoder_string(v___x_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg(lean_object* v_f_674_){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; lean_object* v___x_679_; 
v___x_675_ = ((lean_object*)(l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__0));
v___x_676_ = lean_obj_once(&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4, &l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4_once, _init_l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4);
v___x_677_ = l_Lasm_UI_Decoder_map___redArg(v_f_674_, v___x_676_);
v___x_678_ = 0;
v___x_679_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_675_, v___x_677_, v___x_678_, v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange(lean_object* v_Msg_680_, lean_object* v_f_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lasm_UI_Subs_onVisibilityChange___redArg(v_f_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0(lean_object* v_f_683_, lean_object* v_vs_684_){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = lean_array_get_size(v_vs_684_);
v___x_687_ = lean_nat_dec_lt(v___x_685_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_box(0);
v___x_689_ = lean_apply_1(v_f_683_, v___x_688_);
return v___x_689_;
}
else
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_array_fget_borrowed(v_vs_684_, v___x_685_);
lean_inc(v___x_690_);
v___x_691_ = lean_apply_1(v_f_683_, v___x_690_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0___boxed(lean_object* v_f_692_, lean_object* v_vs_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lasm_UI_Subs_port___redArg___lam__0(v_f_692_, v_vs_693_);
lean_dec_ref(v_vs_693_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg(lean_object* v_name_695_, lean_object* v_f_696_){
_start:
{
lean_object* v___f_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___f_697_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_port___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_697_, 0, v_f_696_);
v___x_698_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_698_, 0, v_name_695_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v___f_697_);
v___x_700_ = lean_box(0);
v___x_701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port(lean_object* v_Msg_702_, lean_object* v_name_703_, lean_object* v_f_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_Lasm_UI_Subs_port___redArg(v_name_703_, v_f_704_);
return v___x_705_;
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
