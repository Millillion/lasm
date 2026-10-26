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
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
default: 
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorIdx___boxed(lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lasm_UI_SubSpec_ctorIdx(v_x_7_);
lean_dec(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___redArg(lean_object* v_t_9_, lean_object* v_k_10_){
_start:
{
switch(lean_obj_tag(v_t_9_))
{
case 0:
{
lean_object* v_ms_11_; lean_object* v___x_12_; 
v_ms_11_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_ms_11_);
lean_dec_ref_known(v_t_9_, 1);
v___x_12_ = lean_apply_1(v_k_10_, v_ms_11_);
return v___x_12_;
}
case 1:
{
return v_k_10_;
}
case 4:
{
lean_object* v_name_13_; lean_object* v___x_14_; 
v_name_13_ = lean_ctor_get(v_t_9_, 0);
lean_inc_ref(v_name_13_);
lean_dec_ref_known(v_t_9_, 1);
v___x_14_ = lean_apply_1(v_k_10_, v_name_13_);
return v___x_14_;
}
default: 
{
lean_object* v_event_15_; lean_object* v_paths_16_; uint8_t v_preventDefault_17_; uint8_t v_stopPropagation_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_event_15_ = lean_ctor_get(v_t_9_, 0);
lean_inc_ref(v_event_15_);
v_paths_16_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_paths_16_);
v_preventDefault_17_ = lean_ctor_get_uint8(v_t_9_, sizeof(void*)*2);
v_stopPropagation_18_ = lean_ctor_get_uint8(v_t_9_, sizeof(void*)*2 + 1);
lean_dec(v_t_9_);
v___x_19_ = lean_box(v_preventDefault_17_);
v___x_20_ = lean_box(v_stopPropagation_18_);
v___x_21_ = lean_apply_4(v_k_10_, v_event_15_, v_paths_16_, v___x_19_, v___x_20_);
return v___x_21_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, lean_object* v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_24_, v_k_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_ctorElim___boxed(lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lasm_UI_SubSpec_ctorElim(v_motive_28_, v_ctorIdx_29_, v_t_30_, v_h_31_, v_k_32_);
lean_dec(v_ctorIdx_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim___redArg(lean_object* v_t_34_, lean_object* v_every_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_34_, v_every_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_every_elim(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_every_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_38_, v_every_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim___redArg(lean_object* v_t_42_, lean_object* v_frame_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_42_, v_frame_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_frame_elim(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_frame_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_46_, v_frame_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_window_elim___redArg(lean_object* v_t_50_, lean_object* v_window_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_50_, v_window_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_window_elim(lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_window_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_54_, v_window_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_document_elim___redArg(lean_object* v_t_58_, lean_object* v_document_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_58_, v_document_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_document_elim(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_document_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_62_, v_document_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim___redArg(lean_object* v_t_66_, lean_object* v_port_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_66_, v_port_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_SubSpec_port_elim(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_port_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lasm_UI_SubSpec_ctorElim___redArg(v_t_70_, v_port_72_);
return v___x_73_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(lean_object* v_a_74_, lean_object* v_b_75_){
_start:
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_77_ = l_instDecidableEqList___redArg(v___x_76_, v_a_74_, v_b_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0___boxed(lean_object* v_a_78_, lean_object* v_b_79_){
_start:
{
uint8_t v_res_80_; lean_object* v_r_81_; 
v_res_80_ = l_Lasm_UI_instDecidableEqSubSpec_decEq___lam__0(v_a_78_, v_b_79_);
v_r_81_ = lean_box(v_res_80_);
return v_r_81_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec_decEq(lean_object* v_x_83_, lean_object* v_x_84_){
_start:
{
switch(lean_obj_tag(v_x_83_))
{
case 0:
{
if (lean_obj_tag(v_x_84_) == 0)
{
lean_object* v_ms_85_; lean_object* v_ms_86_; uint8_t v___x_87_; 
v_ms_85_ = lean_ctor_get(v_x_83_, 0);
lean_inc(v_ms_85_);
lean_dec_ref_known(v_x_83_, 1);
v_ms_86_ = lean_ctor_get(v_x_84_, 0);
lean_inc(v_ms_86_);
lean_dec_ref_known(v_x_84_, 1);
v___x_87_ = lean_nat_dec_eq(v_ms_85_, v_ms_86_);
lean_dec(v_ms_86_);
lean_dec(v_ms_85_);
return v___x_87_;
}
else
{
uint8_t v___x_88_; 
lean_dec_ref_known(v_x_83_, 1);
lean_dec(v_x_84_);
v___x_88_ = 0;
return v___x_88_;
}
}
case 1:
{
if (lean_obj_tag(v_x_84_) == 1)
{
uint8_t v___x_89_; 
v___x_89_ = 1;
return v___x_89_;
}
else
{
uint8_t v___x_90_; 
lean_dec(v_x_84_);
v___x_90_ = 0;
return v___x_90_;
}
}
case 2:
{
if (lean_obj_tag(v_x_84_) == 2)
{
lean_object* v_event_91_; lean_object* v_paths_92_; uint8_t v_preventDefault_93_; uint8_t v_stopPropagation_94_; lean_object* v_event_95_; lean_object* v_paths_96_; uint8_t v_preventDefault_97_; uint8_t v_stopPropagation_98_; uint8_t v___y_100_; uint8_t v___x_101_; 
v_event_91_ = lean_ctor_get(v_x_83_, 0);
lean_inc_ref(v_event_91_);
v_paths_92_ = lean_ctor_get(v_x_83_, 1);
lean_inc(v_paths_92_);
v_preventDefault_93_ = lean_ctor_get_uint8(v_x_83_, sizeof(void*)*2);
v_stopPropagation_94_ = lean_ctor_get_uint8(v_x_83_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_83_, 2);
v_event_95_ = lean_ctor_get(v_x_84_, 0);
lean_inc_ref(v_event_95_);
v_paths_96_ = lean_ctor_get(v_x_84_, 1);
lean_inc(v_paths_96_);
v_preventDefault_97_ = lean_ctor_get_uint8(v_x_84_, sizeof(void*)*2);
v_stopPropagation_98_ = lean_ctor_get_uint8(v_x_84_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_84_, 2);
v___x_101_ = lean_string_dec_eq(v_event_91_, v_event_95_);
lean_dec_ref(v_event_95_);
lean_dec_ref(v_event_91_);
if (v___x_101_ == 0)
{
lean_dec(v_paths_96_);
lean_dec(v_paths_92_);
return v___x_101_;
}
else
{
lean_object* v___f_102_; uint8_t v___x_103_; 
v___f_102_ = ((lean_object*)(l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0));
v___x_103_ = l_instDecidableEqList___redArg(v___f_102_, v_paths_92_, v_paths_96_);
if (v___x_103_ == 0)
{
return v___x_103_;
}
else
{
if (v_preventDefault_97_ == 0)
{
if (v_preventDefault_93_ == 0)
{
v___y_100_ = v___x_103_;
goto v___jp_99_;
}
else
{
return v_preventDefault_97_;
}
}
else
{
v___y_100_ = v_preventDefault_93_;
goto v___jp_99_;
}
}
}
v___jp_99_:
{
if (v___y_100_ == 0)
{
return v___y_100_;
}
else
{
if (v_stopPropagation_98_ == 0)
{
if (v_stopPropagation_94_ == 0)
{
return v___y_100_;
}
else
{
return v_stopPropagation_98_;
}
}
else
{
return v_stopPropagation_94_;
}
}
}
}
else
{
uint8_t v___x_104_; 
lean_dec_ref_known(v_x_83_, 2);
lean_dec(v_x_84_);
v___x_104_ = 0;
return v___x_104_;
}
}
case 3:
{
if (lean_obj_tag(v_x_84_) == 3)
{
lean_object* v_event_105_; lean_object* v_paths_106_; uint8_t v_preventDefault_107_; uint8_t v_stopPropagation_108_; lean_object* v_event_109_; lean_object* v_paths_110_; uint8_t v_preventDefault_111_; uint8_t v_stopPropagation_112_; uint8_t v___y_114_; uint8_t v___x_115_; 
v_event_105_ = lean_ctor_get(v_x_83_, 0);
lean_inc_ref(v_event_105_);
v_paths_106_ = lean_ctor_get(v_x_83_, 1);
lean_inc(v_paths_106_);
v_preventDefault_107_ = lean_ctor_get_uint8(v_x_83_, sizeof(void*)*2);
v_stopPropagation_108_ = lean_ctor_get_uint8(v_x_83_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_83_, 2);
v_event_109_ = lean_ctor_get(v_x_84_, 0);
lean_inc_ref(v_event_109_);
v_paths_110_ = lean_ctor_get(v_x_84_, 1);
lean_inc(v_paths_110_);
v_preventDefault_111_ = lean_ctor_get_uint8(v_x_84_, sizeof(void*)*2);
v_stopPropagation_112_ = lean_ctor_get_uint8(v_x_84_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_84_, 2);
v___x_115_ = lean_string_dec_eq(v_event_105_, v_event_109_);
lean_dec_ref(v_event_109_);
lean_dec_ref(v_event_105_);
if (v___x_115_ == 0)
{
lean_dec(v_paths_110_);
lean_dec(v_paths_106_);
return v___x_115_;
}
else
{
lean_object* v___f_116_; uint8_t v___x_117_; 
v___f_116_ = ((lean_object*)(l_Lasm_UI_instDecidableEqSubSpec_decEq___closed__0));
v___x_117_ = l_instDecidableEqList___redArg(v___f_116_, v_paths_106_, v_paths_110_);
if (v___x_117_ == 0)
{
return v___x_117_;
}
else
{
if (v_preventDefault_111_ == 0)
{
if (v_preventDefault_107_ == 0)
{
v___y_114_ = v___x_117_;
goto v___jp_113_;
}
else
{
return v_preventDefault_111_;
}
}
else
{
v___y_114_ = v_preventDefault_107_;
goto v___jp_113_;
}
}
}
v___jp_113_:
{
if (v___y_114_ == 0)
{
return v___y_114_;
}
else
{
if (v_stopPropagation_112_ == 0)
{
if (v_stopPropagation_108_ == 0)
{
return v___y_114_;
}
else
{
return v_stopPropagation_112_;
}
}
else
{
return v_stopPropagation_108_;
}
}
}
}
else
{
uint8_t v___x_118_; 
lean_dec_ref_known(v_x_83_, 2);
lean_dec(v_x_84_);
v___x_118_ = 0;
return v___x_118_;
}
}
default: 
{
if (lean_obj_tag(v_x_84_) == 4)
{
lean_object* v_name_119_; lean_object* v_name_120_; uint8_t v___x_121_; 
v_name_119_ = lean_ctor_get(v_x_83_, 0);
lean_inc_ref(v_name_119_);
lean_dec_ref_known(v_x_83_, 1);
v_name_120_ = lean_ctor_get(v_x_84_, 0);
lean_inc_ref(v_name_120_);
lean_dec_ref_known(v_x_84_, 1);
v___x_121_ = lean_string_dec_eq(v_name_119_, v_name_120_);
lean_dec_ref(v_name_120_);
lean_dec_ref(v_name_119_);
return v___x_121_;
}
else
{
uint8_t v___x_122_; 
lean_dec_ref_known(v_x_83_, 1);
lean_dec(v_x_84_);
v___x_122_ = 0;
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec_decEq___boxed(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_x_123_, v_x_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_instDecidableEqSubSpec(lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
uint8_t v___x_129_; 
v___x_129_ = l_Lasm_UI_instDecidableEqSubSpec_decEq(v_x_127_, v_x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instDecidableEqSubSpec___boxed(lean_object* v_x_130_, lean_object* v_x_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = l_Lasm_UI_instDecidableEqSubSpec(v_x_130_, v_x_131_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT uint64_t l_Lasm_UI_instHashableSubSpec_hash(lean_object* v_x_134_){
_start:
{
switch(lean_obj_tag(v_x_134_))
{
case 0:
{
lean_object* v_ms_135_; uint64_t v___x_136_; uint64_t v___x_137_; uint64_t v___x_138_; 
v_ms_135_ = lean_ctor_get(v_x_134_, 0);
v___x_136_ = 0ULL;
v___x_137_ = lean_uint64_of_nat(v_ms_135_);
v___x_138_ = lean_uint64_mix_hash(v___x_136_, v___x_137_);
return v___x_138_;
}
case 1:
{
uint64_t v___x_139_; 
v___x_139_ = 1ULL;
return v___x_139_;
}
case 2:
{
lean_object* v_event_140_; lean_object* v_paths_141_; uint8_t v_preventDefault_142_; uint8_t v_stopPropagation_143_; uint64_t v___x_144_; uint64_t v___x_145_; uint64_t v___x_146_; uint64_t v___x_147_; uint64_t v___x_148_; uint64_t v___x_149_; uint64_t v___y_151_; 
v_event_140_ = lean_ctor_get(v_x_134_, 0);
v_paths_141_ = lean_ctor_get(v_x_134_, 1);
v_preventDefault_142_ = lean_ctor_get_uint8(v_x_134_, sizeof(void*)*2);
v_stopPropagation_143_ = lean_ctor_get_uint8(v_x_134_, sizeof(void*)*2 + 1);
v___x_144_ = 2ULL;
v___x_145_ = lean_string_hash(v_event_140_);
v___x_146_ = lean_uint64_mix_hash(v___x_144_, v___x_145_);
v___x_147_ = 7ULL;
v___x_148_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_147_, v_paths_141_);
v___x_149_ = lean_uint64_mix_hash(v___x_146_, v___x_148_);
if (v_preventDefault_142_ == 0)
{
uint64_t v___x_157_; 
v___x_157_ = 13ULL;
v___y_151_ = v___x_157_;
goto v___jp_150_;
}
else
{
uint64_t v___x_158_; 
v___x_158_ = 11ULL;
v___y_151_ = v___x_158_;
goto v___jp_150_;
}
v___jp_150_:
{
uint64_t v___x_152_; 
v___x_152_ = lean_uint64_mix_hash(v___x_149_, v___y_151_);
if (v_stopPropagation_143_ == 0)
{
uint64_t v___x_153_; uint64_t v___x_154_; 
v___x_153_ = 13ULL;
v___x_154_ = lean_uint64_mix_hash(v___x_152_, v___x_153_);
return v___x_154_;
}
else
{
uint64_t v___x_155_; uint64_t v___x_156_; 
v___x_155_ = 11ULL;
v___x_156_ = lean_uint64_mix_hash(v___x_152_, v___x_155_);
return v___x_156_;
}
}
}
case 3:
{
lean_object* v_event_159_; lean_object* v_paths_160_; uint8_t v_preventDefault_161_; uint8_t v_stopPropagation_162_; uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v___x_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; uint64_t v___y_170_; 
v_event_159_ = lean_ctor_get(v_x_134_, 0);
v_paths_160_ = lean_ctor_get(v_x_134_, 1);
v_preventDefault_161_ = lean_ctor_get_uint8(v_x_134_, sizeof(void*)*2);
v_stopPropagation_162_ = lean_ctor_get_uint8(v_x_134_, sizeof(void*)*2 + 1);
v___x_163_ = 3ULL;
v___x_164_ = lean_string_hash(v_event_159_);
v___x_165_ = lean_uint64_mix_hash(v___x_163_, v___x_164_);
v___x_166_ = 7ULL;
v___x_167_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_166_, v_paths_160_);
v___x_168_ = lean_uint64_mix_hash(v___x_165_, v___x_167_);
if (v_preventDefault_161_ == 0)
{
uint64_t v___x_176_; 
v___x_176_ = 13ULL;
v___y_170_ = v___x_176_;
goto v___jp_169_;
}
else
{
uint64_t v___x_177_; 
v___x_177_ = 11ULL;
v___y_170_ = v___x_177_;
goto v___jp_169_;
}
v___jp_169_:
{
uint64_t v___x_171_; 
v___x_171_ = lean_uint64_mix_hash(v___x_168_, v___y_170_);
if (v_stopPropagation_162_ == 0)
{
uint64_t v___x_172_; uint64_t v___x_173_; 
v___x_172_ = 13ULL;
v___x_173_ = lean_uint64_mix_hash(v___x_171_, v___x_172_);
return v___x_173_;
}
else
{
uint64_t v___x_174_; uint64_t v___x_175_; 
v___x_174_ = 11ULL;
v___x_175_ = lean_uint64_mix_hash(v___x_171_, v___x_174_);
return v___x_175_;
}
}
}
default: 
{
lean_object* v_name_178_; uint64_t v___x_179_; uint64_t v___x_180_; uint64_t v___x_181_; 
v_name_178_ = lean_ctor_get(v_x_134_, 0);
v___x_179_ = 4ULL;
v___x_180_ = lean_string_hash(v_name_178_);
v___x_181_ = lean_uint64_mix_hash(v___x_179_, v___x_180_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instHashableSubSpec_hash___boxed(lean_object* v_x_182_){
_start:
{
uint64_t v_res_183_; lean_object* v_r_184_; 
v_res_183_ = l_Lasm_UI_instHashableSubSpec_hash(v_x_182_);
lean_dec(v_x_182_);
v_r_184_ = lean_box_uint64(v_res_183_);
return v_r_184_;
}
}
static lean_object* _init_l_Lasm_UI_instReprSubSpec_repr___closed__5(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(2u);
v___x_197_ = lean_nat_to_int(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_l_Lasm_UI_instReprSubSpec_repr___closed__6(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(1u);
v___x_199_ = lean_nat_to_int(v___x_198_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr(lean_object* v_x_218_, lean_object* v_prec_219_){
_start:
{
lean_object* v___y_221_; 
switch(lean_obj_tag(v_x_218_))
{
case 0:
{
lean_object* v_ms_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_247_; 
v_ms_227_ = lean_ctor_get(v_x_218_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_218_);
if (v_isSharedCheck_247_ == 0)
{
v___x_229_ = v_x_218_;
v_isShared_230_ = v_isSharedCheck_247_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_ms_227_);
lean_dec(v_x_218_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_247_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___y_232_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(1024u);
v___x_244_ = lean_nat_dec_le(v___x_243_, v_prec_219_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_232_ = v___x_245_;
goto v___jp_231_;
}
else
{
lean_object* v___x_246_; 
v___x_246_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_232_ = v___x_246_;
goto v___jp_231_;
}
v___jp_231_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_233_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__4));
v___x_234_ = l_Nat_reprFast(v_ms_227_);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 3);
lean_ctor_set(v___x_229_, 0, v___x_234_);
v___x_236_ = v___x_229_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_242_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_233_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
lean_inc(v___y_232_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_232_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_219_);
return v___x_241_;
}
}
}
}
case 1:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(1024u);
v___x_249_ = lean_nat_dec_le(v___x_248_, v_prec_219_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; 
v___x_250_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_221_ = v___x_250_;
goto v___jp_220_;
}
else
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_221_ = v___x_251_;
goto v___jp_220_;
}
}
case 2:
{
lean_object* v_event_252_; lean_object* v_paths_253_; uint8_t v_preventDefault_254_; uint8_t v_stopPropagation_255_; lean_object* v___y_257_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_event_252_ = lean_ctor_get(v_x_218_, 0);
lean_inc_ref(v_event_252_);
v_paths_253_ = lean_ctor_get(v_x_218_, 1);
lean_inc(v_paths_253_);
v_preventDefault_254_ = lean_ctor_get_uint8(v_x_218_, sizeof(void*)*2);
v_stopPropagation_255_ = lean_ctor_get_uint8(v_x_218_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_218_, 2);
v___x_276_ = lean_unsigned_to_nat(1024u);
v___x_277_ = lean_nat_dec_le(v___x_276_, v_prec_219_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; 
v___x_278_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_257_ = v___x_278_;
goto v___jp_256_;
}
else
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_257_ = v___x_279_;
goto v___jp_256_;
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_258_ = lean_box(1);
v___x_259_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__9));
v___x_260_ = l_String_quote(v_event_252_);
v___x_261_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
v___x_262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_259_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v___x_258_);
v___x_264_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_253_);
v___x_265_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v___x_258_);
v___x_267_ = l_Bool_repr___redArg(v_preventDefault_254_);
v___x_268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
lean_ctor_set(v___x_269_, 1, v___x_258_);
v___x_270_ = l_Bool_repr___redArg(v_stopPropagation_255_);
v___x_271_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
lean_inc(v___y_257_);
v___x_272_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_272_, 0, v___y_257_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = 0;
v___x_274_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set_uint8(v___x_274_, sizeof(void*)*1, v___x_273_);
v___x_275_ = l_Repr_addAppParen(v___x_274_, v_prec_219_);
return v___x_275_;
}
}
case 3:
{
lean_object* v_event_280_; lean_object* v_paths_281_; uint8_t v_preventDefault_282_; uint8_t v_stopPropagation_283_; lean_object* v___y_285_; lean_object* v___x_304_; uint8_t v___x_305_; 
v_event_280_ = lean_ctor_get(v_x_218_, 0);
lean_inc_ref(v_event_280_);
v_paths_281_ = lean_ctor_get(v_x_218_, 1);
lean_inc(v_paths_281_);
v_preventDefault_282_ = lean_ctor_get_uint8(v_x_218_, sizeof(void*)*2);
v_stopPropagation_283_ = lean_ctor_get_uint8(v_x_218_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_x_218_, 2);
v___x_304_ = lean_unsigned_to_nat(1024u);
v___x_305_ = lean_nat_dec_le(v___x_304_, v_prec_219_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
v___x_306_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_285_ = v___x_306_;
goto v___jp_284_;
}
else
{
lean_object* v___x_307_; 
v___x_307_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_285_ = v___x_307_;
goto v___jp_284_;
}
v___jp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_286_ = lean_box(1);
v___x_287_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__12));
v___x_288_ = l_String_quote(v_event_280_);
v___x_289_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_287_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_286_);
v___x_292_ = l_List_repr___at___00Lasm_UI_instReprListener_repr_spec__0___redArg(v_paths_281_);
v___x_293_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___x_286_);
v___x_295_ = l_Bool_repr___redArg(v_preventDefault_282_);
v___x_296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_286_);
v___x_298_ = l_Bool_repr___redArg(v_stopPropagation_283_);
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
lean_inc(v___y_285_);
v___x_300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_300_, 0, v___y_285_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = 0;
v___x_302_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set_uint8(v___x_302_, sizeof(void*)*1, v___x_301_);
v___x_303_ = l_Repr_addAppParen(v___x_302_, v_prec_219_);
return v___x_303_;
}
}
default: 
{
lean_object* v_name_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_328_; 
v_name_308_ = lean_ctor_get(v_x_218_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v_x_218_);
if (v_isSharedCheck_328_ == 0)
{
v___x_310_ = v_x_218_;
v_isShared_311_ = v_isSharedCheck_328_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_name_308_);
lean_dec(v_x_218_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_328_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___y_313_; lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_324_ = lean_unsigned_to_nat(1024u);
v___x_325_ = lean_nat_dec_le(v___x_324_, v_prec_219_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
v___x_326_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__5, &l_Lasm_UI_instReprSubSpec_repr___closed__5_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__5);
v___y_313_ = v___x_326_;
goto v___jp_312_;
}
else
{
lean_object* v___x_327_; 
v___x_327_ = lean_obj_once(&l_Lasm_UI_instReprSubSpec_repr___closed__6, &l_Lasm_UI_instReprSubSpec_repr___closed__6_once, _init_l_Lasm_UI_instReprSubSpec_repr___closed__6);
v___y_313_ = v___x_327_;
goto v___jp_312_;
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_314_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__15));
v___x_315_ = l_String_quote(v_name_308_);
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 3);
lean_ctor_set(v___x_310_, 0, v___x_315_);
v___x_317_ = v___x_310_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_323_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_314_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
lean_inc(v___y_313_);
v___x_319_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_319_, 0, v___y_313_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = 0;
v___x_321_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set_uint8(v___x_321_, sizeof(void*)*1, v___x_320_);
v___x_322_ = l_Repr_addAppParen(v___x_321_, v_prec_219_);
return v___x_322_;
}
}
}
}
}
v___jp_220_:
{
lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_222_ = ((lean_object*)(l_Lasm_UI_instReprSubSpec_repr___closed__1));
lean_inc(v___y_221_);
v___x_223_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_223_, 0, v___y_221_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = 0;
v___x_225_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*1, v___x_224_);
v___x_226_ = l_Repr_addAppParen(v___x_225_, v_prec_219_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_instReprSubSpec_repr___boxed(lean_object* v_x_329_, lean_object* v_prec_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Lasm_UI_instReprSubSpec_repr(v_x_329_, v_prec_330_);
lean_dec(v_prec_330_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg(){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_box(0);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none___redArg___boxed(lean_object* v___dummy_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lasm_UI_Subs_none___redArg();
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_none(lean_object* v_Msg_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_box(0);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg(){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_box(0);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited___redArg___boxed(lean_object* v___dummy_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lasm_UI_Subs_instInhabited___redArg();
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instInhabited(lean_object* v_Msg_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_box(0);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg(){
_start:
{
lean_object* v___f_352_; 
v___f_352_ = ((lean_object*)(l_Lasm_UI_Subs_instAppend___redArg___closed__0));
return v___f_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend___redArg___boxed(lean_object* v___dummy_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lasm_UI_Subs_instAppend___redArg();
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_instAppend(lean_object* v_Msg_355_){
_start:
{
lean_object* v___f_356_; 
v___f_356_ = ((lean_object*)(l_Lasm_UI_Subs_instAppend___redArg___closed__0));
return v___f_356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(lean_object* v_a_357_, lean_object* v_a_358_){
_start:
{
if (lean_obj_tag(v_a_357_) == 0)
{
lean_object* v___x_359_; 
v___x_359_ = lean_array_to_list(v_a_358_);
return v___x_359_;
}
else
{
lean_object* v_head_360_; lean_object* v_tail_361_; lean_object* v___x_362_; 
v_head_360_ = lean_ctor_get(v_a_357_, 0);
lean_inc(v_head_360_);
v_tail_361_ = lean_ctor_get(v_a_357_, 1);
lean_inc(v_tail_361_);
lean_dec_ref_known(v_a_357_, 2);
v___x_362_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_358_, v_head_360_);
v_a_357_ = v_tail_361_;
v_a_358_ = v___x_362_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch___redArg(lean_object* v_subs_366_){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = ((lean_object*)(l_Lasm_UI_Subs_batch___redArg___closed__0));
v___x_368_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(v_subs_366_, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_batch(lean_object* v_Msg_369_, lean_object* v_subs_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lasm_UI_Subs_batch___redArg(v_subs_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0(lean_object* v_Msg_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lasm_UI_Subs_batch_spec__0___redArg(v_a_373_, v_a_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0(lean_object* v_handle_376_, lean_object* v_f_377_, lean_object* v_vs_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_apply_1(v_handle_376_, v_vs_378_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v___x_380_; 
lean_dec(v_f_377_);
v___x_380_ = lean_box(0);
return v___x_380_;
}
else
{
lean_object* v_val_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_389_; 
v_val_381_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_389_ == 0)
{
v___x_383_ = v___x_379_;
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_val_381_);
lean_dec(v___x_379_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_389_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = lean_apply_1(v_f_377_, v_val_381_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 0, v___x_385_);
v___x_387_ = v___x_383_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(lean_object* v_f_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
if (lean_obj_tag(v_a_391_) == 0)
{
lean_object* v___x_393_; 
lean_dec(v_f_390_);
v___x_393_ = l_List_reverse___redArg(v_a_392_);
return v___x_393_;
}
else
{
lean_object* v_head_394_; lean_object* v_tail_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_413_; 
v_head_394_ = lean_ctor_get(v_a_391_, 0);
v_tail_395_ = lean_ctor_get(v_a_391_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v_a_391_);
if (v_isSharedCheck_413_ == 0)
{
v___x_397_ = v_a_391_;
v_isShared_398_ = v_isSharedCheck_413_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_tail_395_);
lean_inc(v_head_394_);
lean_dec(v_a_391_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_413_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v_spec_399_; lean_object* v_handle_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_412_; 
v_spec_399_ = lean_ctor_get(v_head_394_, 0);
v_handle_400_ = lean_ctor_get(v_head_394_, 1);
v_isSharedCheck_412_ = !lean_is_exclusive(v_head_394_);
if (v_isSharedCheck_412_ == 0)
{
v___x_402_ = v_head_394_;
v_isShared_403_ = v_isSharedCheck_412_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_handle_400_);
lean_inc(v_spec_399_);
lean_dec(v_head_394_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_412_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___f_404_; lean_object* v___x_406_; 
lean_inc(v_f_390_);
v___f_404_ = lean_alloc_closure((void*)(l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_404_, 0, v_handle_400_);
lean_closure_set(v___f_404_, 1, v_f_390_);
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 1, v___f_404_);
v___x_406_ = v___x_402_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_spec_399_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___f_404_);
v___x_406_ = v_reuseFailAlloc_411_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_408_; 
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v_a_392_);
lean_ctor_set(v___x_397_, 0, v___x_406_);
v___x_408_ = v___x_397_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_406_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_a_392_);
v___x_408_ = v_reuseFailAlloc_410_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
v_a_391_ = v_tail_395_;
v_a_392_ = v___x_408_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map___redArg(lean_object* v_f_414_, lean_object* v_s_415_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_box(0);
v___x_417_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(v_f_414_, v_s_415_, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_map(lean_object* v_00_u03b1_418_, lean_object* v_00_u03b2_419_, lean_object* v_f_420_, lean_object* v_s_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lasm_UI_Subs_map___redArg(v_f_420_, v_s_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0(lean_object* v_00_u03b1_423_, lean_object* v_00_u03b2_424_, lean_object* v_f_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_map_spec__0___redArg(v_f_425_, v_a_426_, v_a_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_evVal(lean_object* v_x_429_){
_start:
{
switch(lean_obj_tag(v_x_429_))
{
case 0:
{
lean_object* v___x_430_; 
v___x_430_ = lean_box(0);
return v___x_430_;
}
case 1:
{
lean_object* v___x_431_; 
v___x_431_ = lean_box(1);
return v___x_431_;
}
case 2:
{
uint8_t v_b_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_b_432_ = lean_ctor_get_uint8(v_x_429_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v_x_429_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_dec(v_x_429_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 0, v_b_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
case 3:
{
double v_n_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_n_440_ = lean_ctor_get_float(v_x_429_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v_x_429_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_dec(v_x_429_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_446_, 0, v_n_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
case 4:
{
lean_object* v_s_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_s_448_ = lean_ctor_get(v_x_429_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v_x_429_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_s_448_);
lean_dec(v_x_429_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_s_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
case 5:
{
lean_object* v_i_456_; double v___x_457_; lean_object* v___x_458_; 
v_i_456_ = lean_ctor_get(v_x_429_, 0);
lean_inc(v_i_456_);
lean_dec_ref_known(v_x_429_, 1);
v___x_457_ = l_Float_ofInt(v_i_456_);
lean_dec(v_i_456_);
v___x_458_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
default: 
{
lean_object* v___x_459_; 
lean_dec(v_x_429_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
}
}
}
static double _init_l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0(void){
_start:
{
lean_object* v___x_460_; double v___x_461_; 
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = lean_float_of_nat(v___x_460_);
return v___x_461_;
}
}
LEAN_EXPORT double l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(lean_object* v_x_462_){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_465_ = lean_array_get_size(v_x_462_);
v___x_466_ = lean_unsigned_to_nat(1u);
v___x_467_ = lean_nat_dec_eq(v___x_465_, v___x_466_);
if (v___x_467_ == 0)
{
goto v___jp_463_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_array_fget_borrowed(v_x_462_, v___x_468_);
if (lean_obj_tag(v___x_469_) == 3)
{
double v_n_470_; 
v_n_470_ = lean_ctor_get_float(v___x_469_, 0);
return v_n_470_;
}
else
{
goto v___jp_463_;
}
}
v___jp_463_:
{
double v___x_464_; 
v___x_464_ = lean_float_once(&l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0, &l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0_once, _init_l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___closed__0);
return v___x_464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number___boxed(lean_object* v_x_471_){
_start:
{
double v_res_472_; lean_object* v_r_473_; 
v_res_472_ = l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(v_x_471_);
lean_dec_ref(v_x_471_);
v_r_473_ = lean_box_float(v_res_472_);
return v_r_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0(lean_object* v_f_474_, lean_object* v_vs_475_){
_start:
{
double v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_476_ = l___private_Lasm_UI_Subs_0__Lasm_UI_Subs_number(v_vs_475_);
v___x_477_ = lean_box_float(v___x_476_);
v___x_478_ = lean_apply_1(v_f_474_, v___x_477_);
v___x_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg___lam__0___boxed(lean_object* v_f_480_, lean_object* v_vs_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lasm_UI_Subs_every___redArg___lam__0(v_f_480_, v_vs_481_);
lean_dec_ref(v_vs_481_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every___redArg(lean_object* v_ms_483_, lean_object* v_f_484_){
_start:
{
lean_object* v___f_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___f_485_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_every___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_485_, 0, v_f_484_);
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v_ms_483_);
v___x_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
lean_ctor_set(v___x_487_, 1, v___f_485_);
v___x_488_ = lean_box(0);
v___x_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_every(lean_object* v_Msg_490_, lean_object* v_ms_491_, lean_object* v_f_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lasm_UI_Subs_every___redArg(v_ms_491_, v_f_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame___redArg(lean_object* v_f_494_){
_start:
{
lean_object* v___f_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___f_495_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_every___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_495_, 0, v_f_494_);
v___x_496_ = lean_box(1);
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___f_495_);
v___x_498_ = lean_box(0);
v___x_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onAnimationFrame(lean_object* v_Msg_500_, lean_object* v_f_501_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lasm_UI_Subs_onAnimationFrame___redArg(v_f_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(lean_object* v_a_503_, lean_object* v_a_504_){
_start:
{
if (lean_obj_tag(v_a_503_) == 0)
{
lean_object* v___x_505_; 
v___x_505_ = l_List_reverse___redArg(v_a_504_);
return v___x_505_;
}
else
{
lean_object* v_head_506_; lean_object* v_tail_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_516_; 
v_head_506_ = lean_ctor_get(v_a_503_, 0);
v_tail_507_ = lean_ctor_get(v_a_503_, 1);
v_isSharedCheck_516_ = !lean_is_exclusive(v_a_503_);
if (v_isSharedCheck_516_ == 0)
{
v___x_509_ = v_a_503_;
v_isShared_510_ = v_isSharedCheck_516_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_tail_507_);
lean_inc(v_head_506_);
lean_dec(v_a_503_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_516_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_511_ = l_Lasm_UI_Subs_evVal(v_head_506_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 1, v_a_504_);
lean_ctor_set(v___x_509_, 0, v___x_511_);
v___x_513_ = v___x_509_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_511_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_a_504_);
v___x_513_ = v_reuseFailAlloc_515_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
v_a_503_ = v_tail_507_;
v_a_504_ = v___x_513_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg___lam__0(lean_object* v_run_517_, lean_object* v_vs_518_){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_519_ = lean_array_to_list(v_vs_518_);
v___x_520_ = lean_box(0);
v___x_521_ = l_List_mapTR_loop___at___00Lasm_UI_Subs_onWindow_spec__0(v___x_519_, v___x_520_);
v___x_522_ = lean_apply_1(v_run_517_, v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg(lean_object* v_event_523_, lean_object* v_d_524_, uint8_t v_preventDefault_525_, uint8_t v_stopPropagation_526_){
_start:
{
lean_object* v_paths_527_; lean_object* v_run_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_539_; 
v_paths_527_ = lean_ctor_get(v_d_524_, 0);
v_run_528_ = lean_ctor_get(v_d_524_, 1);
v_isSharedCheck_539_ = !lean_is_exclusive(v_d_524_);
if (v_isSharedCheck_539_ == 0)
{
v___x_530_ = v_d_524_;
v_isShared_531_ = v_isSharedCheck_539_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_run_528_);
lean_inc(v_paths_527_);
lean_dec(v_d_524_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_539_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___f_532_; lean_object* v___x_533_; lean_object* v___x_535_; 
v___f_532_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_onWindow___redArg___lam__0), 2, 1);
lean_closure_set(v___f_532_, 0, v_run_528_);
v___x_533_ = lean_alloc_ctor(2, 2, 2);
lean_ctor_set(v___x_533_, 0, v_event_523_);
lean_ctor_set(v___x_533_, 1, v_paths_527_);
lean_ctor_set_uint8(v___x_533_, sizeof(void*)*2, v_preventDefault_525_);
lean_ctor_set_uint8(v___x_533_, sizeof(void*)*2 + 1, v_stopPropagation_526_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 1, v___f_532_);
lean_ctor_set(v___x_530_, 0, v___x_533_);
v___x_535_ = v___x_530_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_538_, 1, v___f_532_);
v___x_535_ = v_reuseFailAlloc_538_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_box(0);
v___x_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___redArg___boxed(lean_object* v_event_540_, lean_object* v_d_541_, lean_object* v_preventDefault_542_, lean_object* v_stopPropagation_543_){
_start:
{
uint8_t v_preventDefault_boxed_544_; uint8_t v_stopPropagation_boxed_545_; lean_object* v_res_546_; 
v_preventDefault_boxed_544_ = lean_unbox(v_preventDefault_542_);
v_stopPropagation_boxed_545_ = lean_unbox(v_stopPropagation_543_);
v_res_546_ = l_Lasm_UI_Subs_onWindow___redArg(v_event_540_, v_d_541_, v_preventDefault_boxed_544_, v_stopPropagation_boxed_545_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow(lean_object* v_Msg_547_, lean_object* v_event_548_, lean_object* v_d_549_, uint8_t v_preventDefault_550_, uint8_t v_stopPropagation_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lasm_UI_Subs_onWindow___redArg(v_event_548_, v_d_549_, v_preventDefault_550_, v_stopPropagation_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onWindow___boxed(lean_object* v_Msg_553_, lean_object* v_event_554_, lean_object* v_d_555_, lean_object* v_preventDefault_556_, lean_object* v_stopPropagation_557_){
_start:
{
uint8_t v_preventDefault_boxed_558_; uint8_t v_stopPropagation_boxed_559_; lean_object* v_res_560_; 
v_preventDefault_boxed_558_ = lean_unbox(v_preventDefault_556_);
v_stopPropagation_boxed_559_ = lean_unbox(v_stopPropagation_557_);
v_res_560_ = l_Lasm_UI_Subs_onWindow(v_Msg_553_, v_event_554_, v_d_555_, v_preventDefault_boxed_558_, v_stopPropagation_boxed_559_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___redArg(lean_object* v_event_561_, lean_object* v_d_562_, uint8_t v_preventDefault_563_, uint8_t v_stopPropagation_564_){
_start:
{
lean_object* v_paths_565_; lean_object* v_run_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_577_; 
v_paths_565_ = lean_ctor_get(v_d_562_, 0);
v_run_566_ = lean_ctor_get(v_d_562_, 1);
v_isSharedCheck_577_ = !lean_is_exclusive(v_d_562_);
if (v_isSharedCheck_577_ == 0)
{
v___x_568_ = v_d_562_;
v_isShared_569_ = v_isSharedCheck_577_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_run_566_);
lean_inc(v_paths_565_);
lean_dec(v_d_562_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_577_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___f_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___f_570_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_onWindow___redArg___lam__0), 2, 1);
lean_closure_set(v___f_570_, 0, v_run_566_);
v___x_571_ = lean_alloc_ctor(3, 2, 2);
lean_ctor_set(v___x_571_, 0, v_event_561_);
lean_ctor_set(v___x_571_, 1, v_paths_565_);
lean_ctor_set_uint8(v___x_571_, sizeof(void*)*2, v_preventDefault_563_);
lean_ctor_set_uint8(v___x_571_, sizeof(void*)*2 + 1, v_stopPropagation_564_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 1, v___f_570_);
lean_ctor_set(v___x_568_, 0, v___x_571_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v___f_570_);
v___x_573_ = v_reuseFailAlloc_576_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
return v___x_575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___redArg___boxed(lean_object* v_event_578_, lean_object* v_d_579_, lean_object* v_preventDefault_580_, lean_object* v_stopPropagation_581_){
_start:
{
uint8_t v_preventDefault_boxed_582_; uint8_t v_stopPropagation_boxed_583_; lean_object* v_res_584_; 
v_preventDefault_boxed_582_ = lean_unbox(v_preventDefault_580_);
v_stopPropagation_boxed_583_ = lean_unbox(v_stopPropagation_581_);
v_res_584_ = l_Lasm_UI_Subs_onDocument___redArg(v_event_578_, v_d_579_, v_preventDefault_boxed_582_, v_stopPropagation_boxed_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument(lean_object* v_Msg_585_, lean_object* v_event_586_, lean_object* v_d_587_, uint8_t v_preventDefault_588_, uint8_t v_stopPropagation_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lasm_UI_Subs_onDocument___redArg(v_event_586_, v_d_587_, v_preventDefault_588_, v_stopPropagation_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onDocument___boxed(lean_object* v_Msg_591_, lean_object* v_event_592_, lean_object* v_d_593_, lean_object* v_preventDefault_594_, lean_object* v_stopPropagation_595_){
_start:
{
uint8_t v_preventDefault_boxed_596_; uint8_t v_stopPropagation_boxed_597_; lean_object* v_res_598_; 
v_preventDefault_boxed_596_ = lean_unbox(v_preventDefault_594_);
v_stopPropagation_boxed_597_ = lean_unbox(v_stopPropagation_595_);
v_res_598_ = l_Lasm_UI_Subs_onDocument(v_Msg_591_, v_event_592_, v_d_593_, v_preventDefault_boxed_596_, v_stopPropagation_boxed_597_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown___redArg(lean_object* v_d_600_){
_start:
{
lean_object* v___x_601_; uint8_t v___x_602_; lean_object* v___x_603_; 
v___x_601_ = ((lean_object*)(l_Lasm_UI_Subs_onKeyDown___redArg___closed__0));
v___x_602_ = 0;
v___x_603_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_601_, v_d_600_, v___x_602_, v___x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyDown(lean_object* v_Msg_604_, lean_object* v_d_605_){
_start:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lasm_UI_Subs_onKeyDown___redArg(v_d_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp___redArg(lean_object* v_d_608_){
_start:
{
lean_object* v___x_609_; uint8_t v___x_610_; lean_object* v___x_611_; 
v___x_609_ = ((lean_object*)(l_Lasm_UI_Subs_onKeyUp___redArg___closed__0));
v___x_610_ = 0;
v___x_611_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_609_, v_d_608_, v___x_610_, v___x_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onKeyUp(lean_object* v_Msg_612_, lean_object* v_d_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l_Lasm_UI_Subs_onKeyUp___redArg(v_d_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove___redArg(lean_object* v_d_616_){
_start:
{
lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; 
v___x_617_ = ((lean_object*)(l_Lasm_UI_Subs_onMouseMove___redArg___closed__0));
v___x_618_ = 0;
v___x_619_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_617_, v_d_616_, v___x_618_, v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseMove(lean_object* v_Msg_620_, lean_object* v_d_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lasm_UI_Subs_onMouseMove___redArg(v_d_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp___redArg(lean_object* v_d_624_){
_start:
{
lean_object* v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; 
v___x_625_ = ((lean_object*)(l_Lasm_UI_Subs_onMouseUp___redArg___closed__0));
v___x_626_ = 0;
v___x_627_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_625_, v_d_624_, v___x_626_, v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onMouseUp(lean_object* v_Msg_628_, lean_object* v_d_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lasm_UI_Subs_onMouseUp___redArg(v_d_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick___redArg(lean_object* v_d_632_){
_start:
{
lean_object* v___x_633_; uint8_t v___x_634_; lean_object* v___x_635_; 
v___x_633_ = ((lean_object*)(l_Lasm_UI_Subs_onClick___redArg___closed__0));
v___x_634_ = 0;
v___x_635_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_633_, v_d_632_, v___x_634_, v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onClick(lean_object* v_Msg_636_, lean_object* v_d_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lasm_UI_Subs_onClick___redArg(v_d_637_);
return v___x_638_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onResize___redArg___closed__5(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__4));
v___x_649_ = l_Lasm_UI_Decoder_float(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onResize___redArg___closed__9(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__8));
v___x_658_ = l_Lasm_UI_Decoder_float(v___x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize___redArg(lean_object* v_f_659_){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; lean_object* v___x_665_; 
v___x_660_ = ((lean_object*)(l_Lasm_UI_Subs_onResize___redArg___closed__0));
v___x_661_ = lean_obj_once(&l_Lasm_UI_Subs_onResize___redArg___closed__5, &l_Lasm_UI_Subs_onResize___redArg___closed__5_once, _init_l_Lasm_UI_Subs_onResize___redArg___closed__5);
v___x_662_ = lean_obj_once(&l_Lasm_UI_Subs_onResize___redArg___closed__9, &l_Lasm_UI_Subs_onResize___redArg___closed__9_once, _init_l_Lasm_UI_Subs_onResize___redArg___closed__9);
v___x_663_ = l_Lasm_UI_Decoder_map2___redArg(v_f_659_, v___x_661_, v___x_662_);
v___x_664_ = 0;
v___x_665_ = l_Lasm_UI_Subs_onWindow___redArg(v___x_660_, v___x_663_, v___x_664_, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onResize(lean_object* v_Msg_666_, lean_object* v_f_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lasm_UI_Subs_onResize___redArg(v_f_667_);
return v___x_668_;
}
}
static lean_object* _init_l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = ((lean_object*)(l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__3));
v___x_678_ = l_Lasm_UI_Decoder_string(v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange___redArg(lean_object* v_f_679_){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; lean_object* v___x_684_; 
v___x_680_ = ((lean_object*)(l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__0));
v___x_681_ = lean_obj_once(&l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4, &l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4_once, _init_l_Lasm_UI_Subs_onVisibilityChange___redArg___closed__4);
v___x_682_ = l_Lasm_UI_Decoder_map___redArg(v_f_679_, v___x_681_);
v___x_683_ = 0;
v___x_684_ = l_Lasm_UI_Subs_onDocument___redArg(v___x_680_, v___x_682_, v___x_683_, v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_onVisibilityChange(lean_object* v_Msg_685_, lean_object* v_f_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lasm_UI_Subs_onVisibilityChange___redArg(v_f_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0(lean_object* v_f_688_, lean_object* v_vs_689_){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_690_ = lean_unsigned_to_nat(0u);
v___x_691_ = lean_array_get_size(v_vs_689_);
v___x_692_ = lean_nat_dec_lt(v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_box(0);
v___x_694_ = lean_apply_1(v_f_688_, v___x_693_);
return v___x_694_;
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_array_fget_borrowed(v_vs_689_, v___x_690_);
lean_inc(v___x_695_);
v___x_696_ = lean_apply_1(v_f_688_, v___x_695_);
return v___x_696_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg___lam__0___boxed(lean_object* v_f_697_, lean_object* v_vs_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lasm_UI_Subs_port___redArg___lam__0(v_f_697_, v_vs_698_);
lean_dec_ref(v_vs_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port___redArg(lean_object* v_name_700_, lean_object* v_f_701_){
_start:
{
lean_object* v___f_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___f_702_ = lean_alloc_closure((void*)(l_Lasm_UI_Subs_port___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_702_, 0, v_f_701_);
v___x_703_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_703_, 0, v_name_700_);
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v___f_702_);
v___x_705_ = lean_box(0);
v___x_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Subs_port(lean_object* v_Msg_707_, lean_object* v_name_708_, lean_object* v_f_709_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lasm_UI_Subs_port___redArg(v_name_708_, v_f_709_);
return v___x_710_;
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
