// Lean compiler output
// Module: Lasm.JS.Web.ImageCapture
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Html public import Lasm.JS.Web.Types.FileAPI public import Lasm.JS.Web.Types.ImageCapture public import Lasm.JS.Web.Types.MediacaptureStreams
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
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
extern lean_object* l_Lasm_JS_Web_instFromJSRedEyeReduction;
extern lean_object* l_Lasm_JS_Web_instFromJSFillLightMode;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSFillLightMode___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPhotoSettings___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPhotoSettings;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoSettings___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoSettings___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoSettings;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMediaSettingsRange___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMediaSettingsRange;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMediaSettingsRange___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMediaSettingsRange___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMediaSettingsRange;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPhotoCapabilities___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPhotoCapabilities;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoCapabilities___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoCapabilities___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoCapabilities;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPoint2D___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPoint2D;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPoint2D___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPoint2D___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPoint2D;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2DParameters___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2DParameters;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_constrainPoint2DParameters_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_constrainPoint2DParameters_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2D___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2D___lam__1(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSConstrainPoint2D_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSConstrainPoint2D___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2D = (const lean_object*)&l_Lasm_JS_Web_instToJSConstrainPoint2D_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayPoint2DConstrainPoint2D___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeArrayPoint2DConstrainPoint2D_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeArrayPoint2DConstrainPoint2D___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeArrayPoint2DConstrainPoint2D = (const lean_object*)&l_Lasm_JS_Web_instCoeArrayPoint2DConstrainPoint2D_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeConstrainPoint2DParametersConstrainPoint2D___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeConstrainPoint2DParametersConstrainPoint2D_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeConstrainPoint2DParametersConstrainPoint2D___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeConstrainPoint2DParametersConstrainPoint2D = (const lean_object*)&l_Lasm_JS_Web_instCoeConstrainPoint2DParametersConstrainPoint2D_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPhotoSettings___lam__0(lean_object* v___f_1_, lean_object* v___f_2_, lean_object* v___f_3_, lean_object* v_d_4_){
_start:
{
lean_object* v_fillLightMode_5_; lean_object* v_imageHeight_6_; lean_object* v_imageWidth_7_; lean_object* v_redEyeReduction_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_fillLightMode_5_ = lean_ctor_get(v_d_4_, 0);
lean_inc(v_fillLightMode_5_);
v_imageHeight_6_ = lean_ctor_get(v_d_4_, 1);
lean_inc(v_imageHeight_6_);
v_imageWidth_7_ = lean_ctor_get(v_d_4_, 2);
lean_inc(v_imageWidth_7_);
v_redEyeReduction_8_ = lean_ctor_get(v_d_4_, 3);
lean_inc(v_redEyeReduction_8_);
lean_dec_ref(v_d_4_);
v___x_9_ = lean_mk_string_unchecked("fillLightMode", 13, 13);
v___x_10_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_fillLightMode_5_);
v___x_11_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_9_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
v___x_12_ = lean_mk_string_unchecked("imageHeight", 11, 11);
lean_inc_ref(v___f_2_);
v___x_13_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2_, v_imageHeight_6_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_12_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = lean_mk_string_unchecked("imageWidth", 10, 10);
v___x_16_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2_, v_imageWidth_7_);
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = lean_mk_string_unchecked("redEyeReduction", 15, 15);
v___x_19_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3_, v_redEyeReduction_8_);
v___x_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_20_, 0, v___x_18_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
v___x_21_ = lean_unsigned_to_nat(4u);
v___x_22_ = lean_mk_empty_array_with_capacity(v___x_21_);
v___x_23_ = lean_array_push(v___x_22_, v___x_11_);
v___x_24_ = lean_array_push(v___x_23_, v___x_14_);
v___x_25_ = lean_array_push(v___x_24_, v___x_17_);
v___x_26_ = lean_array_push(v___x_25_, v___x_20_);
v___x_27_ = l_Lasm_JS_Web_Internal_fields(v___x_26_);
lean_dec_ref(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPhotoSettings(void){
_start:
{
lean_object* v___f_28_; lean_object* v___f_29_; lean_object* v___f_30_; lean_object* v___f_31_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFillLightMode___lam__0), 1, 0);
v___f_29_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_30_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_31_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSPhotoSettings___lam__0), 4, 3);
lean_closure_set(v___f_31_, 0, v___f_28_);
lean_closure_set(v___f_31_, 1, v___f_29_);
lean_closure_set(v___f_31_, 2, v___f_30_);
return v___f_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoSettings___lam__0(lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v___x_34_, lean_object* v_d_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_mk_string_unchecked("fillLightMode", 13, 13);
v___x_37_ = l_Lasm_JS_readField___redArg(v___x_32_, v_d_35_, v___x_36_);
lean_dec_ref(v___x_36_);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_dec_ref(v___x_34_);
lean_dec_ref(v___x_33_);
v_a_38_ = lean_ctor_get(v___x_37_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_37_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_37_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_37_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
else
{
lean_object* v_a_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_a_46_ = lean_ctor_get(v___x_37_, 0);
lean_inc(v_a_46_);
lean_dec_ref_known(v___x_37_, 1);
v___x_47_ = lean_mk_string_unchecked("imageHeight", 11, 11);
lean_inc_ref(v___x_33_);
v___x_48_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_35_, v___x_47_);
lean_dec_ref(v___x_47_);
if (lean_obj_tag(v___x_48_) == 0)
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
lean_dec(v_a_46_);
lean_dec_ref(v___x_34_);
lean_dec_ref(v___x_33_);
v_a_49_ = lean_ctor_get(v___x_48_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_48_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v___x_48_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_48_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
else
{
lean_object* v_a_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v_a_57_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_a_57_);
lean_dec_ref_known(v___x_48_, 1);
v___x_58_ = lean_mk_string_unchecked("imageWidth", 10, 10);
v___x_59_ = l_Lasm_JS_readField___redArg(v___x_33_, v_d_35_, v___x_58_);
lean_dec_ref(v___x_58_);
if (lean_obj_tag(v___x_59_) == 0)
{
lean_object* v_a_60_; lean_object* v___x_62_; uint8_t v_isShared_63_; uint8_t v_isSharedCheck_67_; 
lean_dec(v_a_57_);
lean_dec(v_a_46_);
lean_dec_ref(v___x_34_);
v_a_60_ = lean_ctor_get(v___x_59_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_59_);
if (v_isSharedCheck_67_ == 0)
{
v___x_62_ = v___x_59_;
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
else
{
lean_inc(v_a_60_);
lean_dec(v___x_59_);
v___x_62_ = lean_box(0);
v_isShared_63_ = v_isSharedCheck_67_;
goto v_resetjp_61_;
}
v_resetjp_61_:
{
lean_object* v___x_65_; 
if (v_isShared_63_ == 0)
{
v___x_65_ = v___x_62_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v_a_60_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_a_68_ = lean_ctor_get(v___x_59_, 0);
lean_inc(v_a_68_);
lean_dec_ref_known(v___x_59_, 1);
v___x_69_ = lean_mk_string_unchecked("redEyeReduction", 15, 15);
v___x_70_ = l_Lasm_JS_readField___redArg(v___x_34_, v_d_35_, v___x_69_);
lean_dec_ref(v___x_69_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_78_; 
lean_dec(v_a_68_);
lean_dec(v_a_57_);
lean_dec(v_a_46_);
v_a_71_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_78_ == 0)
{
v___x_73_ = v___x_70_;
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_76_; 
if (v_isShared_74_ == 0)
{
v___x_76_ = v___x_73_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_71_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
else
{
lean_object* v_a_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_87_; 
v_a_79_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_87_ == 0)
{
v___x_81_ = v___x_70_;
v_isShared_82_ = v_isSharedCheck_87_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_a_79_);
lean_dec(v___x_70_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_87_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_83_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_83_, 0, v_a_46_);
lean_ctor_set(v___x_83_, 1, v_a_57_);
lean_ctor_set(v___x_83_, 2, v_a_68_);
lean_ctor_set(v___x_83_, 3, v_a_79_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 0, v___x_83_);
v___x_85_ = v___x_81_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoSettings___lam__0___boxed(lean_object* v___x_88_, lean_object* v___x_89_, lean_object* v___x_90_, lean_object* v_d_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lasm_JS_Web_instFromJSPhotoSettings___lam__0(v___x_88_, v___x_89_, v___x_90_, v_d_91_);
lean_dec(v_d_91_);
return v_res_92_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPhotoSettings(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___f_99_; lean_object* v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; 
v___x_93_ = l_Lasm_JS_Web_instFromJSFillLightMode;
v___x_94_ = l_Lasm_JS_instFromJSOption___redArg(v___x_93_);
v___x_95_ = l_Lasm_JS_instFromJSFloat;
v___x_96_ = l_Lasm_JS_instFromJSOption___redArg(v___x_95_);
v___x_97_ = l_Lasm_JS_instFromJSBool;
v___x_98_ = l_Lasm_JS_instFromJSOption___redArg(v___x_97_);
v___f_99_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPhotoSettings___lam__0___boxed), 4, 3);
lean_closure_set(v___f_99_, 0, v___x_94_);
lean_closure_set(v___f_99_, 1, v___x_96_);
lean_closure_set(v___f_99_, 2, v___x_98_);
v___x_100_ = lean_mk_string_unchecked("Lasm.JS.Web.PhotoSettings", 25, 25);
v___x_101_ = 0;
v___x_102_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_102_, 0, v___f_99_);
lean_ctor_set(v___x_102_, 1, v___x_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*2, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMediaSettingsRange___lam__0(lean_object* v___f_103_, lean_object* v_d_104_){
_start:
{
lean_object* v_max_105_; lean_object* v_min_106_; lean_object* v_step_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_max_105_ = lean_ctor_get(v_d_104_, 0);
lean_inc(v_max_105_);
v_min_106_ = lean_ctor_get(v_d_104_, 1);
lean_inc(v_min_106_);
v_step_107_ = lean_ctor_get(v_d_104_, 2);
lean_inc(v_step_107_);
lean_dec_ref(v_d_104_);
v___x_108_ = lean_mk_string_unchecked("max", 3, 3);
lean_inc_ref_n(v___f_103_, 2);
v___x_109_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_103_, v_max_105_);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_mk_string_unchecked("min", 3, 3);
v___x_112_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_103_, v_min_106_);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = lean_mk_string_unchecked("step", 4, 4);
v___x_115_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_103_, v_step_107_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_unsigned_to_nat(3u);
v___x_118_ = lean_mk_empty_array_with_capacity(v___x_117_);
v___x_119_ = lean_array_push(v___x_118_, v___x_110_);
v___x_120_ = lean_array_push(v___x_119_, v___x_113_);
v___x_121_ = lean_array_push(v___x_120_, v___x_116_);
v___x_122_ = l_Lasm_JS_Web_Internal_fields(v___x_121_);
lean_dec_ref(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSMediaSettingsRange(void){
_start:
{
lean_object* v___f_123_; lean_object* v___f_124_; 
v___f_123_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_124_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSMediaSettingsRange___lam__0), 2, 1);
lean_closure_set(v___f_124_, 0, v___f_123_);
return v___f_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMediaSettingsRange___lam__0(lean_object* v___x_125_, lean_object* v_d_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_mk_string_unchecked("max", 3, 3);
lean_inc_ref(v___x_125_);
v___x_128_ = l_Lasm_JS_readField___redArg(v___x_125_, v_d_126_, v___x_127_);
lean_dec_ref(v___x_127_);
if (lean_obj_tag(v___x_128_) == 0)
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec_ref(v___x_125_);
v_a_129_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_128_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_128_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
else
{
lean_object* v_a_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v_a_137_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_a_137_);
lean_dec_ref_known(v___x_128_, 1);
v___x_138_ = lean_mk_string_unchecked("min", 3, 3);
lean_inc_ref(v___x_125_);
v___x_139_ = l_Lasm_JS_readField___redArg(v___x_125_, v_d_126_, v___x_138_);
lean_dec_ref(v___x_138_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_a_137_);
lean_dec_ref(v___x_125_);
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_a_148_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_139_, 1);
v___x_149_ = lean_mk_string_unchecked("step", 4, 4);
v___x_150_ = l_Lasm_JS_readField___redArg(v___x_125_, v_d_126_, v___x_149_);
lean_dec_ref(v___x_149_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_dec(v_a_148_);
lean_dec(v_a_137_);
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_167_; 
v_a_159_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_167_ == 0)
{
v___x_161_ = v___x_150_;
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_150_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; lean_object* v___x_165_; 
v___x_163_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_163_, 0, v_a_137_);
lean_ctor_set(v___x_163_, 1, v_a_148_);
lean_ctor_set(v___x_163_, 2, v_a_159_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v___x_163_);
v___x_165_ = v___x_161_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMediaSettingsRange___lam__0___boxed(lean_object* v___x_168_, lean_object* v_d_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_JS_Web_instFromJSMediaSettingsRange___lam__0(v___x_168_, v_d_169_);
lean_dec(v_d_169_);
return v_res_170_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSMediaSettingsRange(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___f_173_; lean_object* v___x_174_; uint8_t v___x_175_; lean_object* v___x_176_; 
v___x_171_ = l_Lasm_JS_instFromJSFloat;
v___x_172_ = l_Lasm_JS_instFromJSOption___redArg(v___x_171_);
v___f_173_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSMediaSettingsRange___lam__0___boxed), 2, 1);
lean_closure_set(v___f_173_, 0, v___x_172_);
v___x_174_ = lean_mk_string_unchecked("Lasm.JS.Web.MediaSettingsRange", 30, 30);
v___x_175_ = 0;
v___x_176_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_176_, 0, v___f_173_);
lean_ctor_set(v___x_176_, 1, v___x_174_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*2, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPhotoCapabilities___lam__0(lean_object* v___f_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v_d_180_){
_start:
{
lean_object* v_redEyeReduction_181_; lean_object* v_imageHeight_182_; lean_object* v_imageWidth_183_; lean_object* v_fillLightMode_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_redEyeReduction_181_ = lean_ctor_get(v_d_180_, 0);
lean_inc(v_redEyeReduction_181_);
v_imageHeight_182_ = lean_ctor_get(v_d_180_, 1);
lean_inc(v_imageHeight_182_);
v_imageWidth_183_ = lean_ctor_get(v_d_180_, 2);
lean_inc(v_imageWidth_183_);
v_fillLightMode_184_ = lean_ctor_get(v_d_180_, 3);
lean_inc(v_fillLightMode_184_);
lean_dec_ref(v_d_180_);
v___x_185_ = lean_mk_string_unchecked("redEyeReduction", 15, 15);
v___x_186_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_177_, v_redEyeReduction_181_);
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_mk_string_unchecked("imageHeight", 11, 11);
lean_inc_ref(v___x_178_);
v___x_189_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_178_, v_imageHeight_182_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_mk_string_unchecked("imageWidth", 10, 10);
v___x_192_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_178_, v_imageWidth_183_);
v___x_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = lean_mk_string_unchecked("fillLightMode", 13, 13);
v___x_195_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_179_, v_fillLightMode_184_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_unsigned_to_nat(4u);
v___x_198_ = lean_mk_empty_array_with_capacity(v___x_197_);
v___x_199_ = lean_array_push(v___x_198_, v___x_187_);
v___x_200_ = lean_array_push(v___x_199_, v___x_190_);
v___x_201_ = lean_array_push(v___x_200_, v___x_193_);
v___x_202_ = lean_array_push(v___x_201_, v___x_196_);
v___x_203_ = l_Lasm_JS_Web_Internal_fields(v___x_202_);
lean_dec_ref(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPhotoCapabilities(void){
_start:
{
lean_object* v___f_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___f_207_; 
v___f_204_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFillLightMode___lam__0), 1, 0);
v___x_205_ = l_Lasm_JS_Web_instToJSMediaSettingsRange;
lean_inc_ref(v___f_204_);
v___x_206_ = l_Lasm_JS_instToJSArray___redArg(v___f_204_);
v___f_207_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSPhotoCapabilities___lam__0), 4, 3);
lean_closure_set(v___f_207_, 0, v___f_204_);
lean_closure_set(v___f_207_, 1, v___x_205_);
lean_closure_set(v___f_207_, 2, v___x_206_);
return v___f_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoCapabilities___lam__0(lean_object* v___x_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v_d_211_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_mk_string_unchecked("redEyeReduction", 15, 15);
v___x_213_ = l_Lasm_JS_readField___redArg(v___x_208_, v_d_211_, v___x_212_);
lean_dec_ref(v___x_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec_ref(v___x_210_);
lean_dec_ref(v___x_209_);
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_a_222_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_a_222_);
lean_dec_ref_known(v___x_213_, 1);
v___x_223_ = lean_mk_string_unchecked("imageHeight", 11, 11);
lean_inc_ref(v___x_209_);
v___x_224_ = l_Lasm_JS_readField___redArg(v___x_209_, v_d_211_, v___x_223_);
lean_dec_ref(v___x_223_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec(v_a_222_);
lean_dec_ref(v___x_210_);
lean_dec_ref(v___x_209_);
v_a_225_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_224_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_224_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_a_233_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_224_, 1);
v___x_234_ = lean_mk_string_unchecked("imageWidth", 10, 10);
v___x_235_ = l_Lasm_JS_readField___redArg(v___x_209_, v_d_211_, v___x_234_);
lean_dec_ref(v___x_234_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_243_; 
lean_dec(v_a_233_);
lean_dec(v_a_222_);
lean_dec_ref(v___x_210_);
v_a_236_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_243_ == 0)
{
v___x_238_ = v___x_235_;
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_235_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_243_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_236_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
else
{
lean_object* v_a_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_a_244_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_244_);
lean_dec_ref_known(v___x_235_, 1);
v___x_245_ = lean_mk_string_unchecked("fillLightMode", 13, 13);
v___x_246_ = l_Lasm_JS_readField___redArg(v___x_210_, v_d_211_, v___x_245_);
lean_dec_ref(v___x_245_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_254_; 
lean_dec(v_a_244_);
lean_dec(v_a_233_);
lean_dec(v_a_222_);
v_a_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_254_ == 0)
{
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_254_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_252_; 
if (v_isShared_250_ == 0)
{
v___x_252_ = v___x_249_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_247_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_263_; 
v_a_255_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_263_ == 0)
{
v___x_257_ = v___x_246_;
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_246_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_263_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_261_; 
v___x_259_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_259_, 0, v_a_222_);
lean_ctor_set(v___x_259_, 1, v_a_233_);
lean_ctor_set(v___x_259_, 2, v_a_244_);
lean_ctor_set(v___x_259_, 3, v_a_255_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_259_);
v___x_261_ = v___x_257_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPhotoCapabilities___lam__0___boxed(lean_object* v___x_264_, lean_object* v___x_265_, lean_object* v___x_266_, lean_object* v_d_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Web_instFromJSPhotoCapabilities___lam__0(v___x_264_, v___x_265_, v___x_266_, v_d_267_);
lean_dec(v_d_267_);
return v_res_268_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPhotoCapabilities(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___f_276_; lean_object* v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; 
v___x_269_ = l_Lasm_JS_Web_instFromJSRedEyeReduction;
v___x_270_ = l_Lasm_JS_instFromJSOption___redArg(v___x_269_);
v___x_271_ = l_Lasm_JS_Web_instFromJSMediaSettingsRange;
v___x_272_ = l_Lasm_JS_instFromJSOption___redArg(v___x_271_);
v___x_273_ = l_Lasm_JS_Web_instFromJSFillLightMode;
v___x_274_ = l_Lasm_JS_instFromJSArray___redArg(v___x_273_);
v___x_275_ = l_Lasm_JS_instFromJSOption___redArg(v___x_274_);
v___f_276_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPhotoCapabilities___lam__0___boxed), 4, 3);
lean_closure_set(v___f_276_, 0, v___x_270_);
lean_closure_set(v___f_276_, 1, v___x_272_);
lean_closure_set(v___f_276_, 2, v___x_275_);
v___x_277_ = lean_mk_string_unchecked("Lasm.JS.Web.PhotoCapabilities", 29, 29);
v___x_278_ = 0;
v___x_279_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_279_, 0, v___f_276_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
lean_ctor_set_uint8(v___x_279_, sizeof(void*)*2, v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPoint2D___lam__0(lean_object* v___f_280_, lean_object* v_d_281_){
_start:
{
lean_object* v_x_282_; lean_object* v_y_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_300_; 
v_x_282_ = lean_ctor_get(v_d_281_, 0);
v_y_283_ = lean_ctor_get(v_d_281_, 1);
v_isSharedCheck_300_ = !lean_is_exclusive(v_d_281_);
if (v_isSharedCheck_300_ == 0)
{
v___x_285_ = v_d_281_;
v_isShared_286_ = v_isSharedCheck_300_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_y_283_);
lean_inc(v_x_282_);
lean_dec(v_d_281_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_300_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_290_; 
v___x_287_ = lean_mk_string_unchecked("x", 1, 1);
lean_inc_ref(v___f_280_);
v___x_288_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_280_, v_x_282_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 1, v___x_288_);
lean_ctor_set(v___x_285_, 0, v___x_287_);
v___x_290_ = v___x_285_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_288_);
v___x_290_ = v_reuseFailAlloc_299_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_291_ = lean_mk_string_unchecked("y", 1, 1);
v___x_292_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_280_, v_y_283_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = lean_unsigned_to_nat(2u);
v___x_295_ = lean_mk_empty_array_with_capacity(v___x_294_);
v___x_296_ = lean_array_push(v___x_295_, v___x_290_);
v___x_297_ = lean_array_push(v___x_296_, v___x_293_);
v___x_298_ = l_Lasm_JS_Web_Internal_fields(v___x_297_);
lean_dec_ref(v___x_297_);
return v___x_298_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPoint2D(void){
_start:
{
lean_object* v___f_301_; lean_object* v___f_302_; 
v___f_301_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_302_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSPoint2D___lam__0), 2, 1);
lean_closure_set(v___f_302_, 0, v___f_301_);
return v___f_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPoint2D___lam__0(lean_object* v___x_303_, lean_object* v_d_304_){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = lean_mk_string_unchecked("x", 1, 1);
lean_inc_ref(v___x_303_);
v___x_306_ = l_Lasm_JS_readField___redArg(v___x_303_, v_d_304_, v___x_305_);
lean_dec_ref(v___x_305_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_dec_ref(v___x_303_);
v_a_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_a_315_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_315_);
lean_dec_ref_known(v___x_306_, 1);
v___x_316_ = lean_mk_string_unchecked("y", 1, 1);
v___x_317_ = l_Lasm_JS_readField___redArg(v___x_303_, v_d_304_, v___x_316_);
lean_dec_ref(v___x_316_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec(v_a_315_);
v_a_318_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_317_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_317_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_334_; 
v_a_326_ = lean_ctor_get(v___x_317_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_317_);
if (v_isSharedCheck_334_ == 0)
{
v___x_328_ = v___x_317_;
v_isShared_329_ = v_isSharedCheck_334_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_317_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_334_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_330_, 0, v_a_315_);
lean_ctor_set(v___x_330_, 1, v_a_326_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_330_);
v___x_332_ = v___x_328_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPoint2D___lam__0___boxed(lean_object* v___x_335_, lean_object* v_d_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lasm_JS_Web_instFromJSPoint2D___lam__0(v___x_335_, v_d_336_);
lean_dec(v_d_336_);
return v_res_337_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPoint2D(void){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___f_340_; lean_object* v___x_341_; uint8_t v___x_342_; lean_object* v___x_343_; 
v___x_338_ = l_Lasm_JS_instFromJSFloat;
v___x_339_ = l_Lasm_JS_instFromJSOption___redArg(v___x_338_);
v___f_340_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPoint2D___lam__0___boxed), 2, 1);
lean_closure_set(v___f_340_, 0, v___x_339_);
v___x_341_ = lean_mk_string_unchecked("Lasm.JS.Web.Point2D", 19, 19);
v___x_342_ = 0;
v___x_343_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_343_, 0, v___f_340_);
lean_ctor_set(v___x_343_, 1, v___x_341_);
lean_ctor_set_uint8(v___x_343_, sizeof(void*)*2, v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2DParameters___lam__0(lean_object* v___x_344_, lean_object* v_d_345_){
_start:
{
lean_object* v_exact_346_; lean_object* v_ideal_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_364_; 
v_exact_346_ = lean_ctor_get(v_d_345_, 0);
v_ideal_347_ = lean_ctor_get(v_d_345_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v_d_345_);
if (v_isSharedCheck_364_ == 0)
{
v___x_349_ = v_d_345_;
v_isShared_350_ = v_isSharedCheck_364_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_ideal_347_);
lean_inc(v_exact_346_);
lean_dec(v_d_345_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_364_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_351_ = lean_mk_string_unchecked("exact", 5, 5);
lean_inc_ref(v___x_344_);
v___x_352_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_344_, v_exact_346_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 1, v___x_352_);
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_354_ = v___x_349_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v___x_352_);
v___x_354_ = v_reuseFailAlloc_363_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_355_ = lean_mk_string_unchecked("ideal", 5, 5);
v___x_356_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_344_, v_ideal_347_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_355_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
v___x_358_ = lean_unsigned_to_nat(2u);
v___x_359_ = lean_mk_empty_array_with_capacity(v___x_358_);
v___x_360_ = lean_array_push(v___x_359_, v___x_354_);
v___x_361_ = lean_array_push(v___x_360_, v___x_357_);
v___x_362_ = l_Lasm_JS_Web_Internal_fields(v___x_361_);
lean_dec_ref(v___x_361_);
return v___x_362_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSConstrainPoint2DParameters(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___f_367_; 
v___x_365_ = l_Lasm_JS_Web_instToJSPoint2D;
v___x_366_ = l_Lasm_JS_instToJSArray___redArg(v___x_365_);
v___f_367_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSConstrainPoint2DParameters___lam__0), 2, 1);
lean_closure_set(v___f_367_, 0, v___x_366_);
return v___f_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters___lam__0(lean_object* v___x_368_, lean_object* v_d_369_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = lean_mk_string_unchecked("exact", 5, 5);
lean_inc_ref(v___x_368_);
v___x_371_ = l_Lasm_JS_readField___redArg(v___x_368_, v_d_369_, v___x_370_);
lean_dec_ref(v___x_370_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec_ref(v___x_368_);
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_371_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_a_380_ = lean_ctor_get(v___x_371_, 0);
lean_inc(v_a_380_);
lean_dec_ref_known(v___x_371_, 1);
v___x_381_ = lean_mk_string_unchecked("ideal", 5, 5);
v___x_382_ = l_Lasm_JS_readField___redArg(v___x_368_, v_d_369_, v___x_381_);
lean_dec_ref(v___x_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
lean_dec(v_a_380_);
v_a_383_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_382_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_382_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
else
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_399_; 
v_a_391_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_399_ == 0)
{
v___x_393_ = v___x_382_;
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_382_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_399_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v_a_380_);
lean_ctor_set(v___x_395_, 1, v_a_391_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v___x_395_);
v___x_397_ = v___x_393_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters___lam__0___boxed(lean_object* v___x_400_, lean_object* v_d_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters___lam__0(v___x_400_, v_d_401_);
lean_dec(v_d_401_);
return v_res_402_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___f_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; 
v___x_403_ = l_Lasm_JS_Web_instFromJSPoint2D;
v___x_404_ = l_Lasm_JS_instFromJSArray___redArg(v___x_403_);
v___x_405_ = l_Lasm_JS_instFromJSOption___redArg(v___x_404_);
v___f_406_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters___lam__0___boxed), 2, 1);
lean_closure_set(v___f_406_, 0, v___x_405_);
v___x_407_ = lean_mk_string_unchecked("Lasm.JS.Web.ConstrainPoint2DParameters", 38, 38);
v___x_408_ = 0;
v___x_409_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_409_, 0, v___f_406_);
lean_ctor_set(v___x_409_, 1, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*2, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorIdx(lean_object* v_x_410_){
_start:
{
if (lean_obj_tag(v_x_410_) == 0)
{
lean_object* v___x_411_; 
v___x_411_ = lean_unsigned_to_nat(0u);
return v___x_411_;
}
else
{
lean_object* v___x_412_; 
v___x_412_ = lean_unsigned_to_nat(1u);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorIdx___boxed(lean_object* v_x_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorIdx(v_x_413_);
lean_dec_ref(v_x_413_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(lean_object* v_t_415_, lean_object* v_k_416_){
_start:
{
lean_object* v_value_417_; lean_object* v___x_418_; 
v_value_417_ = lean_ctor_get(v_t_415_, 0);
lean_inc_ref(v_value_417_);
lean_dec_ref(v_t_415_);
v___x_418_ = lean_apply_1(v_k_416_, v_value_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorElim(lean_object* v_motive_419_, lean_object* v_ctorIdx_420_, lean_object* v_t_421_, lean_object* v_h_422_, lean_object* v_k_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(v_t_421_, v_k_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___boxed(lean_object* v_motive_425_, lean_object* v_ctorIdx_426_, lean_object* v_t_427_, lean_object* v_h_428_, lean_object* v_k_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorElim(v_motive_425_, v_ctorIdx_426_, v_t_427_, v_h_428_, v_k_429_);
lean_dec(v_ctorIdx_426_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_sequence_elim___redArg(lean_object* v_t_431_, lean_object* v_sequence_432_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(v_t_431_, v_sequence_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_sequence_elim(lean_object* v_motive_434_, lean_object* v_t_435_, lean_object* v_h_436_, lean_object* v_sequence_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(v_t_435_, v_sequence_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_constrainPoint2DParameters_elim___redArg(lean_object* v_t_439_, lean_object* v_constrainPoint2DParameters_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(v_t_439_, v_constrainPoint2DParameters_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ConstrainPoint2D_constrainPoint2DParameters_elim(lean_object* v_motive_442_, lean_object* v_t_443_, lean_object* v_h_444_, lean_object* v_constrainPoint2DParameters_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lasm_JS_Web_ConstrainPoint2D_ctorElim___redArg(v_t_443_, v_constrainPoint2DParameters_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2D___lam__0(lean_object* v___f_447_, lean_object* v_x_448_){
_start:
{
lean_object* v_x_449_; lean_object* v_y_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_467_; 
v_x_449_ = lean_ctor_get(v_x_448_, 0);
v_y_450_ = lean_ctor_get(v_x_448_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_467_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_467_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_y_450_);
lean_inc(v_x_449_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_467_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_457_; 
v___x_454_ = lean_mk_string_unchecked("x", 1, 1);
lean_inc_ref(v___f_447_);
v___x_455_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_447_, v_x_449_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 1, v___x_455_);
lean_ctor_set(v___x_452_, 0, v___x_454_);
v___x_457_ = v___x_452_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_454_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v___x_455_);
v___x_457_ = v_reuseFailAlloc_466_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_458_ = lean_mk_string_unchecked("y", 1, 1);
v___x_459_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_447_, v_y_450_);
v___x_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = lean_unsigned_to_nat(2u);
v___x_462_ = lean_mk_empty_array_with_capacity(v___x_461_);
v___x_463_ = lean_array_push(v___x_462_, v___x_457_);
v___x_464_ = lean_array_push(v___x_463_, v___x_460_);
v___x_465_ = l_Lasm_JS_Web_Internal_fields(v___x_464_);
lean_dec_ref(v___x_464_);
return v___x_465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSConstrainPoint2D___lam__1(lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_468_) == 0)
{
lean_object* v_value_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_491_; 
v_value_469_ = lean_ctor_get(v_x_468_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v_x_468_);
if (v_isSharedCheck_491_ == 0)
{
v___x_471_ = v_x_468_;
v_isShared_472_ = v_isSharedCheck_491_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_value_469_);
lean_dec(v_x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_491_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___f_473_; lean_object* v___f_474_; lean_object* v___f_475_; lean_object* v___f_476_; lean_object* v___f_477_; lean_object* v___f_478_; lean_object* v___f_479_; lean_object* v___f_480_; lean_object* v___f_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; size_t v_sz_485_; size_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v___f_473_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_474_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSConstrainPoint2D___lam__0), 2, 1);
lean_closure_set(v___f_474_, 0, v___f_473_);
v___f_475_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_476_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_477_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_478_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_479_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_480_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_481_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___f_475_);
lean_ctor_set(v___x_482_, 1, v___f_476_);
v___x_483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___f_477_);
lean_ctor_set(v___x_483_, 2, v___f_478_);
lean_ctor_set(v___x_483_, 3, v___f_479_);
lean_ctor_set(v___x_483_, 4, v___f_480_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v___f_481_);
v_sz_485_ = lean_array_size(v_value_469_);
v___x_486_ = ((size_t)0ULL);
v___x_487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_484_, v___f_474_, v_sz_485_, v___x_486_, v_value_469_);
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 7);
lean_ctor_set(v___x_471_, 0, v___x_487_);
v___x_489_ = v___x_471_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
else
{
lean_object* v_value_492_; lean_object* v_exact_493_; lean_object* v_ideal_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_513_; 
v_value_492_ = lean_ctor_get(v_x_468_, 0);
lean_inc_ref(v_value_492_);
lean_dec_ref_known(v_x_468_, 1);
v_exact_493_ = lean_ctor_get(v_value_492_, 0);
v_ideal_494_ = lean_ctor_get(v_value_492_, 1);
v_isSharedCheck_513_ = !lean_is_exclusive(v_value_492_);
if (v_isSharedCheck_513_ == 0)
{
v___x_496_ = v_value_492_;
v_isShared_497_ = v_isSharedCheck_513_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_ideal_494_);
lean_inc(v_exact_493_);
lean_dec(v_value_492_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_513_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_498_ = l_Lasm_JS_Web_instToJSPoint2D;
v___x_499_ = l_Lasm_JS_instToJSArray___redArg(v___x_498_);
v___x_500_ = lean_mk_string_unchecked("exact", 5, 5);
lean_inc_ref(v___x_499_);
v___x_501_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_499_, v_exact_493_);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v___x_501_);
lean_ctor_set(v___x_496_, 0, v___x_500_);
v___x_503_ = v___x_496_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_501_);
v___x_503_ = v_reuseFailAlloc_512_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_504_ = lean_mk_string_unchecked("ideal", 5, 5);
v___x_505_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_499_, v_ideal_494_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = lean_unsigned_to_nat(2u);
v___x_508_ = lean_mk_empty_array_with_capacity(v___x_507_);
v___x_509_ = lean_array_push(v___x_508_, v___x_503_);
v___x_510_ = lean_array_push(v___x_509_, v___x_506_);
v___x_511_ = l_Lasm_JS_Web_Internal_fields(v___x_510_);
lean_dec_ref(v___x_510_);
return v___x_511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayPoint2DConstrainPoint2D___lam__0(lean_object* v_value_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v_value_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeConstrainPoint2DParametersConstrainPoint2D___lam__0(lean_object* v_value_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v_value_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__0(lean_object* v_x_521_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = l_Lasm_JS_instFromJSFloat;
v___x_523_ = l_Lasm_JS_instFromJSOption___redArg(v___x_522_);
v___x_524_ = lean_mk_string_unchecked("x", 1, 1);
lean_inc_ref(v___x_523_);
v___x_525_ = l_Lasm_JS_readField___redArg(v___x_523_, v_x_521_, v___x_524_);
lean_dec_ref(v___x_524_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec_ref(v___x_523_);
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_a_534_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_525_, 1);
v___x_535_ = lean_mk_string_unchecked("y", 1, 1);
v___x_536_ = l_Lasm_JS_readField___redArg(v___x_523_, v_x_521_, v___x_535_);
lean_dec_ref(v___x_535_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec(v_a_534_);
v_a_537_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_536_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_536_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_553_; 
v_a_545_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_553_ == 0)
{
v___x_547_ = v___x_536_;
v_isShared_548_ = v_isSharedCheck_553_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_536_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_553_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v_a_534_);
lean_ctor_set(v___x_549_, 1, v_a_545_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_549_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__0___boxed(lean_object* v_x_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__0(v_x_554_);
lean_dec(v_x_554_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__1(lean_object* v___f_556_, lean_object* v_x_557_){
_start:
{
switch(lean_obj_tag(v_x_557_))
{
case 7:
{
lean_object* v_items_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_612_; 
v_items_558_ = lean_ctor_get(v_x_557_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v_x_557_);
if (v_isSharedCheck_612_ == 0)
{
v___x_560_ = v_x_557_;
v_isShared_561_ = v_isSharedCheck_612_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_items_558_);
lean_dec(v_x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_612_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___f_562_; lean_object* v___f_563_; lean_object* v___f_564_; lean_object* v___f_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; size_t v_sz_572_; size_t v___x_573_; lean_object* v___x_574_; 
v___f_562_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__0), 4, 0);
v___f_563_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__1), 4, 0);
v___f_564_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__2___boxed), 4, 0);
v___f_565_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__3), 4, 0);
v___x_566_ = lean_alloc_closure((void*)(l_Except_map), 5, 1);
lean_closure_set(v___x_566_, 0, lean_box(0));
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v___f_562_);
v___x_568_ = lean_alloc_closure((void*)(l_Except_pure), 3, 1);
lean_closure_set(v___x_568_, 0, lean_box(0));
v___x_569_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
lean_ctor_set(v___x_569_, 2, v___f_563_);
lean_ctor_set(v___x_569_, 3, v___f_564_);
lean_ctor_set(v___x_569_, 4, v___f_565_);
v___x_570_ = lean_alloc_closure((void*)(l_Except_bind), 5, 1);
lean_closure_set(v___x_570_, 0, lean_box(0));
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v_sz_572_ = lean_array_size(v_items_558_);
v___x_573_ = ((size_t)0ULL);
v___x_574_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_571_, v___f_556_, v_sz_572_, v___x_573_, v_items_558_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_592_; 
lean_del_object(v___x_560_);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_592_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_592_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_592_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_579_ = lean_mk_string_unchecked("an element is not Lasm.JS.Web.Point2D", 37, 37);
v___x_580_ = lean_string_utf8_byte_size(v_a_575_);
v___x_581_ = lean_unsigned_to_nat(0u);
v___x_582_ = lean_nat_dec_eq(v___x_580_, v___x_581_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_583_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_584_ = lean_string_append(v___x_583_, v_a_575_);
lean_dec(v_a_575_);
v___x_585_ = lean_string_append(v___x_579_, v___x_584_);
lean_dec_ref(v___x_584_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_585_);
v___x_587_ = v___x_577_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
else
{
lean_object* v___x_590_; 
lean_dec(v_a_575_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_579_);
v___x_590_ = v___x_577_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_579_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_del_object(v___x_560_);
v_a_593_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_574_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_574_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set_tag(v___x_595_, 0);
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_611_; 
v_a_601_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_611_ == 0)
{
v___x_603_ = v___x_574_;
v_isShared_604_ = v_isSharedCheck_611_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_574_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_611_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 0);
lean_ctor_set(v___x_560_, 0, v_a_601_);
v___x_606_ = v___x_560_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_610_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_608_; 
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_606_);
v___x_608_ = v___x_603_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
}
}
case 8:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec_ref(v___f_556_);
v___x_613_ = l_Lasm_JS_Web_instFromJSPoint2D;
v___x_614_ = l_Lasm_JS_instFromJSArray___redArg(v___x_613_);
v___x_615_ = l_Lasm_JS_instFromJSOption___redArg(v___x_614_);
v___x_616_ = lean_mk_string_unchecked("exact", 5, 5);
lean_inc_ref(v___x_615_);
v___x_617_ = l_Lasm_JS_readField___redArg(v___x_615_, v_x_557_, v___x_616_);
lean_dec_ref(v___x_616_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v___x_615_);
lean_dec_ref_known(v_x_557_, 1);
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_617_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_652_; 
v_a_626_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_617_, 1);
v___x_627_ = lean_mk_string_unchecked("ideal", 5, 5);
v___x_628_ = l_Lasm_JS_readField___redArg(v___x_615_, v_x_557_, v___x_627_);
lean_dec_ref(v___x_627_);
v_isSharedCheck_652_ = !lean_is_exclusive(v_x_557_);
if (v_isSharedCheck_652_ == 0)
{
lean_object* v_unused_653_; 
v_unused_653_ = lean_ctor_get(v_x_557_, 0);
lean_dec(v_unused_653_);
v___x_630_ = v_x_557_;
v_isShared_631_ = v_isSharedCheck_652_;
goto v_resetjp_629_;
}
else
{
lean_dec(v_x_557_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_652_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_del_object(v___x_630_);
lean_dec(v_a_626_);
v_a_632_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_628_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_651_; 
v_a_640_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_651_ == 0)
{
v___x_642_ = v___x_628_;
v_isShared_643_ = v_isSharedCheck_651_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_628_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_651_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v_a_626_);
lean_ctor_set(v___x_644_, 1, v_a_640_);
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 1);
lean_ctor_set(v___x_630_, 0, v___x_644_);
v___x_646_ = v___x_630_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_650_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_648_; 
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_646_);
v___x_648_ = v___x_642_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v___x_646_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v_x_557_);
lean_dec_ref(v___f_556_);
v___x_654_ = lean_mk_string_unchecked("", 0, 0);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSConstrainPoint2D(void){
_start:
{
lean_object* v___f_656_; lean_object* v___f_657_; lean_object* v___x_658_; uint8_t v___x_659_; lean_object* v___x_660_; 
v___f_656_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__0___boxed), 1, 0);
v___f_657_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSConstrainPoint2D___lam__1), 2, 1);
lean_closure_set(v___f_657_, 0, v___f_656_);
v___x_658_ = lean_mk_string_unchecked("Lasm.JS.Web.ConstrainPoint2D", 28, 28);
v___x_659_ = 0;
v___x_660_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_660_, 0, v___f_657_);
lean_ctor_set(v___x_660_, 1, v___x_658_);
lean_ctor_set_uint8(v___x_660_, sizeof(void*)*2, v___x_659_);
return v___x_660_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Html(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_FileAPI(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_ImageCapture(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_MediacaptureStreams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_ImageCapture(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_FileAPI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_ImageCapture(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_MediacaptureStreams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSPhotoSettings = _init_l_Lasm_JS_Web_instToJSPhotoSettings();
lean_mark_persistent(l_Lasm_JS_Web_instToJSPhotoSettings);
l_Lasm_JS_Web_instFromJSPhotoSettings = _init_l_Lasm_JS_Web_instFromJSPhotoSettings();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPhotoSettings);
l_Lasm_JS_Web_instToJSMediaSettingsRange = _init_l_Lasm_JS_Web_instToJSMediaSettingsRange();
lean_mark_persistent(l_Lasm_JS_Web_instToJSMediaSettingsRange);
l_Lasm_JS_Web_instFromJSMediaSettingsRange = _init_l_Lasm_JS_Web_instFromJSMediaSettingsRange();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSMediaSettingsRange);
l_Lasm_JS_Web_instToJSPhotoCapabilities = _init_l_Lasm_JS_Web_instToJSPhotoCapabilities();
lean_mark_persistent(l_Lasm_JS_Web_instToJSPhotoCapabilities);
l_Lasm_JS_Web_instFromJSPhotoCapabilities = _init_l_Lasm_JS_Web_instFromJSPhotoCapabilities();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPhotoCapabilities);
l_Lasm_JS_Web_instToJSPoint2D = _init_l_Lasm_JS_Web_instToJSPoint2D();
lean_mark_persistent(l_Lasm_JS_Web_instToJSPoint2D);
l_Lasm_JS_Web_instFromJSPoint2D = _init_l_Lasm_JS_Web_instFromJSPoint2D();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPoint2D);
l_Lasm_JS_Web_instToJSConstrainPoint2DParameters = _init_l_Lasm_JS_Web_instToJSConstrainPoint2DParameters();
lean_mark_persistent(l_Lasm_JS_Web_instToJSConstrainPoint2DParameters);
l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters = _init_l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSConstrainPoint2DParameters);
l_Lasm_JS_Web_instFromJSConstrainPoint2D = _init_l_Lasm_JS_Web_instFromJSConstrainPoint2D();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSConstrainPoint2D);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
