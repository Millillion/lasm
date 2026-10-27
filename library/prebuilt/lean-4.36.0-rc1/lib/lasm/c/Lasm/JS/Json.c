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
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* l_Lean_JsonNumber_fromFloat_x3f(double);
lean_object* lean_float_to_string(double);
lean_object* lean_string_append(lean_object*, lean_object*);
double round(double);
uint8_t lean_float_beq(double, double);
double fabs(double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_decLe(double, double);
uint8_t lean_float_decLt(double, double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_to_int(lean_object*);
double lean_float_negate(double);
lean_object* lean_int_neg(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_dataToJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_dataToJson___closed__3;
static lean_once_cell_t l_Lasm_JS_dataToJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_dataToJson___closed__4;
static const lean_string_object l_Lasm_JS_dataToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Uint8Array is not JSON"};
static const lean_object* l_Lasm_JS_dataToJson___closed__5 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__5_value;
static const lean_ctor_object l_Lasm_JS_dataToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_dataToJson___closed__5_value)}};
static const lean_object* l_Lasm_JS_dataToJson___closed__6 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(size_t, size_t, lean_object*);
static const lean_string_object l_Lasm_JS_dataToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " is not plain JSON data"};
static const lean_object* l_Lasm_JS_dataToJson___closed__7 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__7_value;
static const lean_ctor_object l_Lasm_JS_dataToJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_dataToJson___closed__8 = (const lean_object*)&l_Lasm_JS_dataToJson___closed__8_value;
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
static double _init_l_Lasm_JS_dataToJson___closed__3(void){
_start:
{
lean_object* v___x_80_; double v___x_81_; 
v___x_80_ = lean_cstr_to_nat("9007199254740991");
v___x_81_ = lean_float_of_nat(v___x_80_);
return v___x_81_;
}
}
static double _init_l_Lasm_JS_dataToJson___closed__4(void){
_start:
{
lean_object* v___x_82_; double v___x_83_; 
v___x_82_ = lean_unsigned_to_nat(0u);
v___x_83_ = lean_float_of_nat(v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(size_t v_sz_87_, size_t v_i_88_, lean_object* v_bs_89_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = lean_usize_dec_lt(v_i_88_, v_sz_87_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_91_, 0, v_bs_89_);
return v___x_91_;
}
else
{
lean_object* v_v_92_; lean_object* v___x_93_; 
v_v_92_ = lean_array_uget_borrowed(v_bs_89_, v_i_88_);
lean_inc(v_v_92_);
v___x_93_ = l_Lasm_JS_dataToJson(v_v_92_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_101_; 
lean_dec_ref(v_bs_89_);
v_a_94_ = lean_ctor_get(v___x_93_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_101_ == 0)
{
v___x_96_ = v___x_93_;
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_93_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_97_ == 0)
{
v___x_99_ = v___x_96_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_94_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
else
{
lean_object* v_a_102_; lean_object* v___x_103_; lean_object* v_bs_x27_104_; size_t v___x_105_; size_t v___x_106_; lean_object* v___x_107_; 
v_a_102_ = lean_ctor_get(v___x_93_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v___x_93_, 1);
v___x_103_ = lean_unsigned_to_nat(0u);
v_bs_x27_104_ = lean_array_uset(v_bs_89_, v_i_88_, v___x_103_);
v___x_105_ = ((size_t)1ULL);
v___x_106_ = lean_usize_add(v_i_88_, v___x_105_);
v___x_107_ = lean_array_uset(v_bs_x27_104_, v_i_88_, v_a_102_);
v_i_88_ = v___x_106_;
v_bs_89_ = v___x_107_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_dataToJson(lean_object* v_x_112_){
_start:
{
lean_object* v___y_114_; 
switch(lean_obj_tag(v_x_112_))
{
case 2:
{
uint8_t v_b_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_126_; 
v_b_118_ = lean_ctor_get_uint8(v_x_112_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_126_ == 0)
{
v___x_120_ = v_x_112_;
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
else
{
lean_dec(v_x_112_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
lean_ctor_set_tag(v___x_120_, 1);
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_125_, 0, v_b_118_);
v___x_123_ = v_reuseFailAlloc_125_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
lean_object* v___x_124_; 
v___x_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
return v___x_124_;
}
}
}
case 3:
{
double v_n_127_; double v___x_155_; uint8_t v___x_156_; 
v_n_127_ = lean_ctor_get_float(v_x_112_, 0);
lean_dec_ref_known(v_x_112_, 0);
v___x_155_ = round(v_n_127_);
v___x_156_ = lean_float_beq(v_n_127_, v___x_155_);
if (v___x_156_ == 0)
{
goto v___jp_128_;
}
else
{
double v___x_157_; double v___x_158_; uint8_t v___x_159_; 
v___x_157_ = fabs(v_n_127_);
v___x_158_ = lean_float_once(&l_Lasm_JS_dataToJson___closed__3, &l_Lasm_JS_dataToJson___closed__3_once, _init_l_Lasm_JS_dataToJson___closed__3);
v___x_159_ = lean_float_decLe(v___x_157_, v___x_158_);
if (v___x_159_ == 0)
{
goto v___jp_128_;
}
else
{
double v___x_160_; uint8_t v___x_161_; 
v___x_160_ = lean_float_once(&l_Lasm_JS_dataToJson___closed__4, &l_Lasm_JS_dataToJson___closed__4_once, _init_l_Lasm_JS_dataToJson___closed__4);
v___x_161_ = lean_float_decLt(v_n_127_, v___x_160_);
if (v___x_161_ == 0)
{
uint64_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_162_ = lean_float_to_uint64(v_n_127_);
v___x_163_ = lean_uint64_to_nat(v___x_162_);
v___x_164_ = lean_nat_to_int(v___x_163_);
v___y_114_ = v___x_164_;
goto v___jp_113_;
}
else
{
double v___x_165_; uint64_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_165_ = lean_float_negate(v_n_127_);
v___x_166_ = lean_float_to_uint64(v___x_165_);
v___x_167_ = lean_uint64_to_nat(v___x_166_);
v___x_168_ = lean_nat_to_int(v___x_167_);
v___x_169_ = lean_int_neg(v___x_168_);
lean_dec(v___x_168_);
v___y_114_ = v___x_169_;
goto v___jp_113_;
}
}
}
v___jp_128_:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_JsonNumber_fromFloat_x3f(v_n_127_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v_val_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_145_; 
v_val_130_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_145_ == 0)
{
v___x_132_ = v___x_129_;
v_isShared_133_ = v_isSharedCheck_145_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_val_130_);
lean_dec(v___x_129_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_145_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_134_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__0));
v___x_135_ = lean_float_to_string(v_n_127_);
v___x_136_ = lean_string_append(v___x_134_, v___x_135_);
lean_dec_ref(v___x_135_);
v___x_137_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__1));
v___x_138_ = lean_string_append(v___x_136_, v___x_137_);
v___x_139_ = lean_string_append(v___x_138_, v_val_130_);
lean_dec(v_val_130_);
v___x_140_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__2));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 0, v___x_141_);
v___x_143_ = v___x_132_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_141_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
else
{
lean_object* v_val_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_154_; 
v_val_146_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_154_ == 0)
{
v___x_148_ = v___x_129_;
v_isShared_149_ = v_isSharedCheck_154_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_val_146_);
lean_dec(v___x_129_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_154_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 2);
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_val_146_);
v___x_151_ = v_reuseFailAlloc_153_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_152_; 
v___x_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
}
}
}
}
case 4:
{
lean_object* v_s_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_178_; 
v_s_170_ = lean_ctor_get(v_x_112_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_178_ == 0)
{
v___x_172_ = v_x_112_;
v_isShared_173_ = v_isSharedCheck_178_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_s_170_);
lean_dec(v_x_112_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_178_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set_tag(v___x_172_, 3);
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_s_170_);
v___x_175_ = v_reuseFailAlloc_177_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; 
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
}
case 5:
{
lean_object* v_i_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_188_; 
v_i_179_ = lean_ctor_get(v_x_112_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_188_ == 0)
{
v___x_181_ = v_x_112_;
v_isShared_182_ = v_isSharedCheck_188_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_i_179_);
lean_dec(v_x_112_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_188_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_183_ = l_Lean_JsonNumber_fromInt(v_i_179_);
if (v_isShared_182_ == 0)
{
lean_ctor_set_tag(v___x_181_, 2);
lean_ctor_set(v___x_181_, 0, v___x_183_);
v___x_185_ = v___x_181_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_183_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
}
case 6:
{
lean_object* v___x_189_; 
lean_dec_ref_known(v_x_112_, 1);
v___x_189_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__6));
return v___x_189_;
}
case 7:
{
lean_object* v_items_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_216_; 
v_items_190_ = lean_ctor_get(v_x_112_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_216_ == 0)
{
v___x_192_ = v_x_112_;
v_isShared_193_ = v_isSharedCheck_216_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_items_190_);
lean_dec(v_x_112_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_216_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
size_t v_sz_194_; size_t v___x_195_; lean_object* v___x_196_; 
v_sz_194_ = lean_array_size(v_items_190_);
v___x_195_ = ((size_t)0ULL);
v___x_196_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(v_sz_194_, v___x_195_, v_items_190_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
lean_del_object(v___x_192_);
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
}
}
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_215_; 
v_a_205_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_215_ == 0)
{
v___x_207_ = v___x_196_;
v_isShared_208_ = v_isSharedCheck_215_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_196_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_215_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 4);
lean_ctor_set(v___x_192_, 0, v_a_205_);
v___x_210_ = v___x_192_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_214_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_212_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v___x_210_);
v___x_212_ = v___x_207_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
}
}
case 8:
{
lean_object* v_fields_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_fields_217_ = lean_ctor_get(v_x_112_, 0);
lean_inc_ref(v_fields_217_);
lean_dec_ref_known(v_x_112_, 1);
v___x_218_ = lean_array_to_list(v_fields_217_);
v___x_219_ = lean_box(0);
v___x_220_ = l_List_mapM_loop___at___00Lasm_JS_dataToJson_spec__1(v___x_218_, v___x_219_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_220_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_220_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_237_; 
v_a_229_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_237_ == 0)
{
v___x_231_ = v___x_220_;
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_220_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_237_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_235_; 
v___x_233_ = l_Lean_Json_mkObj(v_a_229_);
lean_dec(v_a_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_233_);
v___x_235_ = v___x_231_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
case 9:
{
lean_object* v_description_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_description_238_ = lean_ctor_get(v_x_112_, 1);
lean_inc_ref(v_description_238_);
lean_dec_ref_known(v_x_112_, 2);
v___x_239_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__7));
v___x_240_ = lean_string_append(v_description_238_, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
default: 
{
lean_object* v___x_242_; 
lean_dec(v_x_112_);
v___x_242_ = ((lean_object*)(l_Lasm_JS_dataToJson___closed__8));
return v___x_242_;
}
}
v___jp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = l_Lean_JsonNumber_fromInt(v___y_114_);
v___x_116_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
v___x_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lasm_JS_dataToJson_spec__1(lean_object* v_x_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = l_List_reverse___redArg(v_x_244_);
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
return v___x_246_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_275_; 
v_head_247_ = lean_ctor_get(v_x_243_, 0);
v_tail_248_ = lean_ctor_get(v_x_243_, 1);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_275_ == 0)
{
v___x_250_ = v_x_243_;
v_isShared_251_ = v_isSharedCheck_275_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_head_247_);
lean_dec(v_x_243_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_275_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v_fst_252_; lean_object* v_snd_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_274_; 
v_fst_252_ = lean_ctor_get(v_head_247_, 0);
v_snd_253_ = lean_ctor_get(v_head_247_, 1);
v_isSharedCheck_274_ = !lean_is_exclusive(v_head_247_);
if (v_isSharedCheck_274_ == 0)
{
v___x_255_ = v_head_247_;
v_isShared_256_ = v_isSharedCheck_274_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_snd_253_);
lean_inc(v_fst_252_);
lean_dec(v_head_247_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_274_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lasm_JS_dataToJson(v_snd_253_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_del_object(v___x_255_);
lean_dec(v_fst_252_);
lean_del_object(v___x_250_);
lean_dec(v_tail_248_);
lean_dec(v_x_244_);
v_a_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; 
v_a_266_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_257_, 1);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 1, v_a_266_);
v___x_268_ = v___x_255_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_fst_252_);
lean_ctor_set(v_reuseFailAlloc_273_, 1, v_a_266_);
v___x_268_ = v_reuseFailAlloc_273_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_270_; 
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 1, v_x_244_);
lean_ctor_set(v___x_250_, 0, v___x_268_);
v___x_270_ = v___x_250_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_268_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_x_244_);
v___x_270_ = v_reuseFailAlloc_272_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
v_x_243_ = v_tail_248_;
v_x_244_ = v___x_270_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0___boxed(lean_object* v_sz_276_, lean_object* v_i_277_, lean_object* v_bs_278_){
_start:
{
size_t v_sz_boxed_279_; size_t v_i_boxed_280_; lean_object* v_res_281_; 
v_sz_boxed_279_ = lean_unbox_usize(v_sz_276_);
lean_dec(v_sz_276_);
v_i_boxed_280_ = lean_unbox_usize(v_i_277_);
lean_dec(v_i_277_);
v_res_281_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_dataToJson_spec__0(v_sz_boxed_279_, v_i_boxed_280_, v_bs_278_);
return v_res_281_;
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
