// Lean compiler output
// Module: Lasm.JS.Json
// Imports: public import Init public meta import Init public import Lean.Data.Json.Basic public import Lasm.JS.Core
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
double l_Lean_JsonNumber_toFloat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_JsonNumber_fromFloat_x3f(double);
lean_object* lean_float_to_string(double);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_jsonToData_spec__0(size_t, size_t, lean_object*);
static const lean_array_object l_Lasm_JS_jsonToData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_jsonToData___closed__0 = (const lean_object*)&l_Lasm_JS_jsonToData___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_jsonToData(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_jsonToData_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_dataToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "number "};
static const lean_object* l_Lasm_JS_dataToJson___closed__0 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__0_value;
static const lean_string_object l_Lasm_JS_dataToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = " is not representable in JSON ("};
static const lean_object* l_Lasm_JS_dataToJson___closed__1 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__1_value;
static const lean_string_object l_Lasm_JS_dataToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_dataToJson___closed__2 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__2_value;
static const lean_string_object l_Lasm_JS_dataToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Uint8Array is not JSON"};
static const lean_object* l_Lasm_JS_dataToJson___closed__3 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__3_value;
static const lean_ctor_object l_Lasm_JS_dataToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_dataToJson___closed__3_value)}};
static const lean_object* l_Lasm_JS_dataToJson___closed__4 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(size_t, size_t, lean_object*);
static const lean_string_object l_Lasm_JS_dataToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " is not plain JSON data"};
static const lean_object* l_Lasm_JS_dataToJson___closed__5 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__5_value;
static const lean_ctor_object l_Lasm_JS_dataToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_dataToJson___closed__6 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_dataToJson(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lasm_JS_dataToJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_jsonToData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSJson___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSJson = (const lean_object*)&l_Lasm_JS_instToJSJson___closed__0_value;
static const lean_closure_object l_Lasm_JS_instFromJSJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_dataToJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSJson___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSJson___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Json"};
static const lean_object* l_Lasm_JS_instFromJSJson___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSJson___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSJson___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSJson___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSJson___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSJson = (const lean_object*)&l_Lasm_JS_instFromJSJson___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_jsonToData_spec__0(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
return v_bs_3_;
}
else
{
lean_object* v_v_5_; lean_object* v___x_6_; lean_object* v_bs_x27_7_; lean_object* v___x_8_; size_t v___x_9_; size_t v___x_10_; lean_object* v___x_11_; 
v_v_5_ = lean_array_uget(v_bs_3_, v_i_2_);
v___x_6_ = lean_unsigned_to_nat(0u);
v_bs_x27_7_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_6_);
v___x_8_ = l_Lasm_JS_jsonToData(v_v_5_);
v___x_9_ = ((size_t)1ULL);
v___x_10_ = lean_usize_add(v_i_2_, v___x_9_);
v___x_11_ = lean_array_uset(v_bs_x27_7_, v_i_2_, v___x_8_);
v_i_2_ = v___x_10_;
v_bs_3_ = v___x_11_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_jsonToData(lean_object* v_x_15_){
_start:
{
switch(lean_obj_tag(v_x_15_))
{
case 0:
{
lean_object* v___x_16_; 
v___x_16_ = lean_box(1);
return v___x_16_;
}
case 1:
{
uint8_t v_b_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_b_17_ = lean_ctor_get_uint8(v_x_15_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v_x_15_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_dec(v_x_15_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
lean_ctor_set_tag(v___x_19_, 2);
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_23_, 0, v_b_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
case 2:
{
lean_object* v_n_25_; double v___x_26_; lean_object* v___x_27_; 
v_n_25_ = lean_ctor_get(v_x_15_, 0);
lean_inc_ref(v_n_25_);
lean_dec_ref_known(v_x_15_, 1);
v___x_26_ = l_Lean_JsonNumber_toFloat(v_n_25_);
v___x_27_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
case 3:
{
lean_object* v_s_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_35_; 
v_s_28_ = lean_ctor_get(v_x_15_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_35_ == 0)
{
v___x_30_ = v_x_15_;
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_s_28_);
lean_dec(v_x_15_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_33_; 
if (v_isShared_31_ == 0)
{
lean_ctor_set_tag(v___x_30_, 4);
v___x_33_ = v___x_30_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_s_28_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
return v___x_33_;
}
}
}
case 4:
{
lean_object* v_elems_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_46_; 
v_elems_36_ = lean_ctor_get(v_x_15_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_46_ == 0)
{
v___x_38_ = v_x_15_;
v_isShared_39_ = v_isSharedCheck_46_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_elems_36_);
lean_dec(v_x_15_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_46_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
size_t v_sz_40_; size_t v___x_41_; lean_object* v___x_42_; lean_object* v___x_44_; 
v_sz_40_ = lean_array_size(v_elems_36_);
v___x_41_ = ((size_t)0ULL);
v___x_42_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_jsonToData_spec__0(v_sz_40_, v___x_41_, v_elems_36_);
if (v_isShared_39_ == 0)
{
lean_ctor_set_tag(v___x_38_, 7);
lean_ctor_set(v___x_38_, 0, v___x_42_);
v___x_44_ = v___x_38_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_42_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
default: 
{
lean_object* v_kvPairs_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_56_; 
v_kvPairs_47_ = lean_ctor_get(v_x_15_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_56_ == 0)
{
v___x_49_ = v_x_15_;
v_isShared_50_ = v_isSharedCheck_56_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_kvPairs_47_);
lean_dec(v_x_15_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_56_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_54_; 
v___x_51_ = ((lean_object*)(l_Lasm_JS_jsonToData___closed__0));
v___x_52_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1_spec__1(v___x_51_, v_kvPairs_47_);
if (v_isShared_50_ == 0)
{
lean_ctor_set_tag(v___x_49_, 8);
lean_ctor_set(v___x_49_, 0, v___x_52_);
v___x_54_ = v___x_49_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1_spec__1(lean_object* v_init_57_, lean_object* v_x_58_){
_start:
{
if (lean_obj_tag(v_x_58_) == 0)
{
lean_object* v_k_59_; lean_object* v_v_60_; lean_object* v_l_61_; lean_object* v_r_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_k_59_ = lean_ctor_get(v_x_58_, 1);
lean_inc(v_k_59_);
v_v_60_ = lean_ctor_get(v_x_58_, 2);
lean_inc(v_v_60_);
v_l_61_ = lean_ctor_get(v_x_58_, 3);
lean_inc(v_l_61_);
v_r_62_ = lean_ctor_get(v_x_58_, 4);
lean_inc(v_r_62_);
lean_dec_ref_known(v_x_58_, 5);
v___x_63_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1_spec__1(v_init_57_, v_l_61_);
v___x_64_ = l_Lasm_JS_jsonToData(v_v_60_);
v___x_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_65_, 0, v_k_59_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = lean_array_push(v___x_63_, v___x_65_);
v_init_57_ = v___x_66_;
v_x_58_ = v_r_62_;
goto _start;
}
else
{
return v_init_57_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_jsonToData_spec__0___boxed(lean_object* v_sz_68_, lean_object* v_i_69_, lean_object* v_bs_70_){
_start:
{
size_t v_sz_boxed_71_; size_t v_i_boxed_72_; lean_object* v_res_73_; 
v_sz_boxed_71_ = lean_unbox_usize(v_sz_68_);
lean_dec(v_sz_68_);
v_i_boxed_72_ = lean_unbox_usize(v_i_69_);
lean_dec(v_i_69_);
v_res_73_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_jsonToData_spec__0(v_sz_boxed_71_, v_i_boxed_72_, v_bs_70_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1(lean_object* v_init_74_, lean_object* v_t_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lasm_JS_jsonToData_spec__1_spec__1(v_init_74_, v_t_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(size_t v_sz_83_, size_t v_i_84_, lean_object* v_bs_85_){
_start:
{
uint8_t v___x_86_; 
v___x_86_ = lean_usize_dec_lt(v_i_84_, v_sz_83_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_87_, 0, v_bs_85_);
return v___x_87_;
}
else
{
lean_object* v_v_88_; lean_object* v___x_89_; 
v_v_88_ = lean_array_uget_borrowed(v_bs_85_, v_i_84_);
lean_inc(v_v_88_);
v___x_89_ = l_Lasm_JS_dataToJson(v_v_88_);
if (lean_obj_tag(v___x_89_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_97_; 
lean_dec_ref(v_bs_85_);
v_a_90_ = lean_ctor_get(v___x_89_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_89_);
if (v_isSharedCheck_97_ == 0)
{
v___x_92_ = v___x_89_;
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v___x_89_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_97_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_a_90_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
else
{
lean_object* v_a_98_; lean_object* v___x_99_; lean_object* v_bs_x27_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; 
v_a_98_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_a_98_);
lean_dec_ref_known(v___x_89_, 1);
v___x_99_ = lean_unsigned_to_nat(0u);
v_bs_x27_100_ = lean_array_uset(v_bs_85_, v_i_84_, v___x_99_);
v___x_101_ = ((size_t)1ULL);
v___x_102_ = lean_usize_add(v_i_84_, v___x_101_);
v___x_103_ = lean_array_uset(v_bs_x27_100_, v_i_84_, v_a_98_);
v_i_84_ = v___x_102_;
v_bs_85_ = v___x_103_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_dataToJson(lean_object* v_x_108_){
_start:
{
switch(lean_obj_tag(v_x_108_))
{
case 2:
{
uint8_t v_b_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_117_; 
v_b_109_ = lean_ctor_get_uint8(v_x_108_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_117_ == 0)
{
v___x_111_ = v_x_108_;
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
else
{
lean_dec(v_x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_117_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set_tag(v___x_111_, 1);
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_116_, 0, v_b_109_);
v___x_114_ = v_reuseFailAlloc_116_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; 
v___x_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
return v___x_115_;
}
}
}
case 3:
{
double v_n_118_; lean_object* v___x_119_; 
v_n_118_ = lean_ctor_get_float(v_x_108_, 0);
lean_dec_ref_known(v_x_108_, 0);
v___x_119_ = l_Lean_JsonNumber_fromFloat_x3f(v_n_118_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_val_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_135_; 
v_val_120_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_135_ == 0)
{
v___x_122_ = v___x_119_;
v_isShared_123_ = v_isSharedCheck_135_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_val_120_);
lean_dec(v___x_119_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_135_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_124_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__0));
v___x_125_ = lean_float_to_string(v_n_118_);
v___x_126_ = lean_string_append(v___x_124_, v___x_125_);
lean_dec_ref(v___x_125_);
v___x_127_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__1));
v___x_128_ = lean_string_append(v___x_126_, v___x_127_);
v___x_129_ = lean_string_append(v___x_128_, v_val_120_);
lean_dec(v_val_120_);
v___x_130_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__2));
v___x_131_ = lean_string_append(v___x_129_, v___x_130_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 0, v___x_131_);
v___x_133_ = v___x_122_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_131_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_object* v_val_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_144_; 
v_val_136_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_144_ == 0)
{
v___x_138_ = v___x_119_;
v_isShared_139_ = v_isSharedCheck_144_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_val_136_);
lean_dec(v___x_119_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_144_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 2);
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_val_136_);
v___x_141_ = v_reuseFailAlloc_143_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_142_; 
v___x_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
}
}
case 4:
{
lean_object* v_s_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_153_; 
v_s_145_ = lean_ctor_get(v_x_108_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_153_ == 0)
{
v___x_147_ = v_x_108_;
v_isShared_148_ = v_isSharedCheck_153_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_s_145_);
lean_dec(v_x_108_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_153_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set_tag(v___x_147_, 3);
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_s_145_);
v___x_150_ = v_reuseFailAlloc_152_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_151_; 
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
}
case 5:
{
lean_object* v_i_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_163_; 
v_i_154_ = lean_ctor_get(v_x_108_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_163_ == 0)
{
v___x_156_ = v_x_108_;
v_isShared_157_ = v_isSharedCheck_163_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_i_154_);
lean_dec(v_x_108_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_163_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = l_Lean_JsonNumber_fromInt(v_i_154_);
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 2);
lean_ctor_set(v___x_156_, 0, v___x_158_);
v___x_160_ = v___x_156_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_162_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; 
v___x_161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
}
case 6:
{
lean_object* v___x_164_; 
lean_dec_ref_known(v_x_108_, 1);
v___x_164_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__4));
return v___x_164_;
}
case 7:
{
lean_object* v_items_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_191_; 
v_items_165_ = lean_ctor_get(v_x_108_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_108_);
if (v_isSharedCheck_191_ == 0)
{
v___x_167_ = v_x_108_;
v_isShared_168_ = v_isSharedCheck_191_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_items_165_);
lean_dec(v_x_108_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_191_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
size_t v_sz_169_; size_t v___x_170_; lean_object* v___x_171_; 
v_sz_169_ = lean_array_size(v_items_165_);
v___x_170_ = ((size_t)0ULL);
v___x_171_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(v_sz_169_, v___x_170_, v_items_165_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_del_object(v___x_167_);
v_a_172_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_171_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_171_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_190_; 
v_a_180_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_190_ == 0)
{
v___x_182_ = v___x_171_;
v_isShared_183_ = v_isSharedCheck_190_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_171_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_190_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_168_ == 0)
{
lean_ctor_set_tag(v___x_167_, 4);
lean_ctor_set(v___x_167_, 0, v_a_180_);
v___x_185_ = v___x_167_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_189_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_187_; 
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_185_);
v___x_187_ = v___x_182_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_185_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
case 8:
{
lean_object* v_fields_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_fields_192_ = lean_ctor_get(v_x_108_, 0);
lean_inc_ref(v_fields_192_);
lean_dec_ref_known(v_x_108_, 1);
v___x_193_ = lean_array_to_list(v_fields_192_);
v___x_194_ = lean_box(0);
v___x_195_ = l_List_mapM_loop___at___00Lasm_JS_dataToJson_spec__1(v___x_193_, v___x_194_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_195_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_195_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_212_; 
v_a_204_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_212_ == 0)
{
v___x_206_ = v___x_195_;
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_195_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_212_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = l_Lean_Json_mkObj(v_a_204_);
lean_dec(v_a_204_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 0, v___x_208_);
v___x_210_ = v___x_206_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
case 9:
{
lean_object* v_description_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_description_213_ = lean_ctor_get(v_x_108_, 1);
lean_inc_ref(v_description_213_);
lean_dec_ref_known(v_x_108_, 2);
v___x_214_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__5));
v___x_215_ = lean_string_append(v_description_213_, v___x_214_);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
default: 
{
lean_object* v___x_217_; 
lean_dec(v_x_108_);
v___x_217_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__6));
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lasm_JS_dataToJson_spec__1(lean_object* v_x_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_218_) == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = l_List_reverse___redArg(v_x_219_);
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
else
{
lean_object* v_head_222_; lean_object* v_tail_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_250_; 
v_head_222_ = lean_ctor_get(v_x_218_, 0);
v_tail_223_ = lean_ctor_get(v_x_218_, 1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_x_218_);
if (v_isSharedCheck_250_ == 0)
{
v___x_225_ = v_x_218_;
v_isShared_226_ = v_isSharedCheck_250_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_tail_223_);
lean_inc(v_head_222_);
lean_dec(v_x_218_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_250_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v_fst_227_; lean_object* v_snd_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_249_; 
v_fst_227_ = lean_ctor_get(v_head_222_, 0);
v_snd_228_ = lean_ctor_get(v_head_222_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v_head_222_);
if (v_isSharedCheck_249_ == 0)
{
v___x_230_ = v_head_222_;
v_isShared_231_ = v_isSharedCheck_249_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_snd_228_);
lean_inc(v_fst_227_);
lean_dec(v_head_222_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_249_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lasm_JS_dataToJson(v_snd_228_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
lean_del_object(v___x_230_);
lean_dec(v_fst_227_);
lean_del_object(v___x_225_);
lean_dec(v_tail_223_);
lean_dec(v_x_219_);
v_a_233_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_232_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_232_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; 
v_a_241_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_241_);
lean_dec_ref_known(v___x_232_, 1);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v_a_241_);
v___x_243_ = v___x_230_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_fst_227_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_a_241_);
v___x_243_ = v_reuseFailAlloc_248_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 1, v_x_219_);
lean_ctor_set(v___x_225_, 0, v___x_243_);
v___x_245_ = v___x_225_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_243_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_x_219_);
v___x_245_ = v_reuseFailAlloc_247_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
v_x_218_ = v_tail_223_;
v_x_219_ = v___x_245_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0___boxed(lean_object* v_sz_251_, lean_object* v_i_252_, lean_object* v_bs_253_){
_start:
{
size_t v_sz_boxed_254_; size_t v_i_boxed_255_; lean_object* v_res_256_; 
v_sz_boxed_254_ = lean_unbox_usize(v_sz_251_);
lean_dec(v_sz_251_);
v_i_boxed_255_ = lean_unbox_usize(v_i_252_);
lean_dec(v_i_252_);
v_res_256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(v_sz_boxed_254_, v_i_boxed_255_, v_bs_253_);
return v_res_256_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_Basic(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Json(uint8_t builtin) {
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
res = initialize_Lean_Data_Json_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
