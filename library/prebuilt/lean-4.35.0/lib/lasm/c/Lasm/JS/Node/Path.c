// Lean compiler output
// Module: Lasm.JS.Node.Path
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support
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
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathPathObject;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSPathPathObject___lam__0(lean_object* v___f_1_, lean_object* v_d_2_){
_start:
{
lean_object* v_dir_3_; lean_object* v_root_4_; lean_object* v_base_5_; lean_object* v_name_6_; lean_object* v_ext_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_dir_3_ = lean_ctor_get(v_d_2_, 0);
lean_inc(v_dir_3_);
v_root_4_ = lean_ctor_get(v_d_2_, 1);
lean_inc(v_root_4_);
v_base_5_ = lean_ctor_get(v_d_2_, 2);
lean_inc(v_base_5_);
v_name_6_ = lean_ctor_get(v_d_2_, 3);
lean_inc(v_name_6_);
v_ext_7_ = lean_ctor_get(v_d_2_, 4);
lean_inc(v_ext_7_);
lean_dec_ref(v_d_2_);
v___x_8_ = lean_mk_string_unchecked("dir", 3, 3);
lean_inc_ref_n(v___f_1_, 4);
v___x_9_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_dir_3_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_8_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = lean_mk_string_unchecked("root", 4, 4);
v___x_12_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_root_4_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_mk_string_unchecked("base", 4, 4);
v___x_15_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_base_5_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_mk_string_unchecked("name", 4, 4);
v___x_18_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_name_6_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_mk_string_unchecked("ext", 3, 3);
v___x_21_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_ext_7_);
v___x_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_20_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = lean_unsigned_to_nat(5u);
v___x_24_ = lean_mk_empty_array_with_capacity(v___x_23_);
v___x_25_ = lean_array_push(v___x_24_, v___x_10_);
v___x_26_ = lean_array_push(v___x_25_, v___x_13_);
v___x_27_ = lean_array_push(v___x_26_, v___x_16_);
v___x_28_ = lean_array_push(v___x_27_, v___x_19_);
v___x_29_ = lean_array_push(v___x_28_, v___x_22_);
v___x_30_ = l_Lasm_JS_Web_Internal_fields(v___x_29_);
lean_dec_ref(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSPathPathObject(void){
_start:
{
lean_object* v___f_31_; lean_object* v___f_32_; 
v___f_31_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_32_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSPathPathObject___lam__0), 2, 1);
lean_closure_set(v___f_32_, 0, v___f_31_);
return v___f_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0(lean_object* v___x_33_, lean_object* v_d_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_mk_string_unchecked("dir", 3, 3);
lean_inc_ref(v___x_33_);
v___x_36_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_34_, v___x_35_);
lean_dec_ref(v___x_35_);
if (lean_obj_tag(v___x_36_) == 0)
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
lean_dec_ref(v___x_33_);
v_a_37_ = lean_ctor_get(v___x_36_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_36_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_36_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_36_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
else
{
lean_object* v_a_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v_a_45_ = lean_ctor_get(v___x_36_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v___x_36_, 1);
v___x_46_ = lean_mk_string_unchecked("root", 4, 4);
lean_inc_ref(v___x_33_);
v___x_47_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_34_, v___x_46_);
lean_dec_ref(v___x_46_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
lean_dec(v_a_45_);
lean_dec_ref(v___x_33_);
v_a_48_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_47_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_47_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_a_56_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_a_56_);
lean_dec_ref_known(v___x_47_, 1);
v___x_57_ = lean_mk_string_unchecked("base", 4, 4);
lean_inc_ref(v___x_33_);
v___x_58_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_34_, v___x_57_);
lean_dec_ref(v___x_57_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v_a_59_; lean_object* v___x_61_; uint8_t v_isShared_62_; uint8_t v_isSharedCheck_66_; 
lean_dec(v_a_56_);
lean_dec(v_a_45_);
lean_dec_ref(v___x_33_);
v_a_59_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_66_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_66_ == 0)
{
v___x_61_ = v___x_58_;
v_isShared_62_ = v_isSharedCheck_66_;
goto v_resetjp_60_;
}
else
{
lean_inc(v_a_59_);
lean_dec(v___x_58_);
v___x_61_ = lean_box(0);
v_isShared_62_ = v_isSharedCheck_66_;
goto v_resetjp_60_;
}
v_resetjp_60_:
{
lean_object* v___x_64_; 
if (v_isShared_62_ == 0)
{
v___x_64_ = v___x_61_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_a_59_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
else
{
lean_object* v_a_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_a_67_ = lean_ctor_get(v___x_58_, 0);
lean_inc(v_a_67_);
lean_dec_ref_known(v___x_58_, 1);
v___x_68_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc_ref(v___x_33_);
v___x_69_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_34_, v___x_68_);
lean_dec_ref(v___x_68_);
if (lean_obj_tag(v___x_69_) == 0)
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_77_; 
lean_dec(v_a_67_);
lean_dec(v_a_56_);
lean_dec(v_a_45_);
lean_dec_ref(v___x_33_);
v_a_70_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_77_ == 0)
{
v___x_72_ = v___x_69_;
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v___x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_a_70_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
else
{
lean_object* v_a_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_a_78_ = lean_ctor_get(v___x_69_, 0);
lean_inc(v_a_78_);
lean_dec_ref_known(v___x_69_, 1);
v___x_79_ = lean_mk_string_unchecked("ext", 3, 3);
v___x_80_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_34_, v___x_79_);
lean_dec_ref(v___x_79_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
lean_dec(v_a_78_);
lean_dec(v_a_67_);
lean_dec(v_a_56_);
lean_dec(v_a_45_);
v_a_81_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_80_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_80_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
else
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_97_; 
v_a_89_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_97_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_97_ == 0)
{
v___x_91_ = v___x_80_;
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_80_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_97_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v___x_95_; 
v___x_93_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_93_, 0, v_a_45_);
lean_ctor_set(v___x_93_, 1, v_a_56_);
lean_ctor_set(v___x_93_, 2, v_a_67_);
lean_ctor_set(v___x_93_, 3, v_a_78_);
lean_ctor_set(v___x_93_, 4, v_a_89_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v___x_93_);
v___x_95_ = v___x_91_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSPathPathObject___lam__0___boxed(lean_object* v___x_98_, lean_object* v_d_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lasm_JS_Node_instFromJSPathPathObject___lam__0(v___x_98_, v_d_99_);
lean_dec(v_d_99_);
return v_res_100_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSPathPathObject(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___f_103_; lean_object* v___x_104_; uint8_t v___x_105_; lean_object* v___x_106_; 
v___x_101_ = l_Lasm_JS_instFromJSString;
v___x_102_ = l_Lasm_JS_instFromJSOption___redArg(v___x_101_);
v___f_103_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSPathPathObject___lam__0___boxed), 2, 1);
lean_closure_set(v___f_103_, 0, v___x_102_);
v___x_104_ = lean_mk_string_unchecked("Lasm.JS.Node.path.PathObject", 28, 28);
v___x_105_ = 0;
v___x_106_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_106_, 0, v___f_103_);
lean_ctor_set(v___x_106_, 1, v___x_104_);
lean_ctor_set_uint8(v___x_106_, sizeof(void*)*2, v___x_105_);
return v___x_106_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Path(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instToJSPathPathObject = _init_l_Lasm_JS_Node_instToJSPathPathObject();
lean_mark_persistent(l_Lasm_JS_Node_instToJSPathPathObject);
l_Lasm_JS_Node_instFromJSPathPathObject = _init_l_Lasm_JS_Node_instFromJSPathPathObject();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSPathPathObject);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
