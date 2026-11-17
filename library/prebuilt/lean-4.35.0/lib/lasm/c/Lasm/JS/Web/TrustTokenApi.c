// Lean compiler output
// Module: Lasm.JS.Web.TrustTokenApi
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Html public import Lasm.JS.Web.Types.TrustTokenApi public import Lasm.JS.Web.Types.Xhr
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
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSTokenVersion___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_Web_instFromJSTokenVersion;
extern lean_object* l_Lasm_JS_Web_instFromJSOperationType;
extern lean_object* l_Lasm_JS_Web_instFromJSRefreshPolicy;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPrivateToken___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPrivateToken;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPrivateToken___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPrivateToken___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPrivateToken;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPrivateToken___lam__0(lean_object* v___f_1_, lean_object* v___x_2_, lean_object* v_d_3_){
_start:
{
lean_object* v_version_4_; lean_object* v_operation_5_; lean_object* v_refreshPolicy_6_; lean_object* v_issuers_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v_version_4_ = lean_ctor_get(v_d_3_, 0);
lean_inc_ref(v_version_4_);
v_operation_5_ = lean_ctor_get(v_d_3_, 1);
lean_inc_ref(v_operation_5_);
v_refreshPolicy_6_ = lean_ctor_get(v_d_3_, 2);
lean_inc(v_refreshPolicy_6_);
v_issuers_7_ = lean_ctor_get(v_d_3_, 3);
lean_inc(v_issuers_7_);
lean_dec_ref(v_d_3_);
v___x_8_ = lean_mk_string_unchecked("version", 7, 7);
v___x_9_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_9_, 0, v_version_4_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_8_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = lean_mk_string_unchecked("operation", 9, 9);
v___x_12_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_12_, 0, v_operation_5_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_mk_string_unchecked("refreshPolicy", 13, 13);
v___x_15_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_refreshPolicy_6_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_mk_string_unchecked("issuers", 7, 7);
v___x_18_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_2_, v_issuers_7_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_unsigned_to_nat(4u);
v___x_21_ = lean_mk_empty_array_with_capacity(v___x_20_);
v___x_22_ = lean_array_push(v___x_21_, v___x_10_);
v___x_23_ = lean_array_push(v___x_22_, v___x_13_);
v___x_24_ = lean_array_push(v___x_23_, v___x_16_);
v___x_25_ = lean_array_push(v___x_24_, v___x_19_);
v___x_26_ = l_Lasm_JS_Web_Internal_fields(v___x_25_);
lean_dec_ref(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPrivateToken(void){
_start:
{
lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___f_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSTokenVersion___lam__0), 1, 0);
v___f_28_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_29_ = l_Lasm_JS_instToJSArray___redArg(v___f_28_);
v___f_30_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSPrivateToken___lam__0), 3, 2);
lean_closure_set(v___f_30_, 0, v___f_27_);
lean_closure_set(v___f_30_, 1, v___x_29_);
return v___f_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPrivateToken___lam__0(lean_object* v___x_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v___x_34_, lean_object* v_d_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_mk_string_unchecked("version", 7, 7);
v___x_37_ = l_Lasm_JS_readField___redArg(v___x_31_, v_d_35_, v___x_36_);
lean_dec_ref(v___x_36_);
if (lean_obj_tag(v___x_37_) == 0)
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
lean_dec_ref(v___x_34_);
lean_dec_ref(v___x_33_);
lean_dec_ref(v___x_32_);
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
v___x_47_ = lean_mk_string_unchecked("operation", 9, 9);
v___x_48_ = l_Lasm_JS_readField___redArg(v___x_32_, v_d_35_, v___x_47_);
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
v___x_58_ = lean_mk_string_unchecked("refreshPolicy", 13, 13);
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
v___x_69_ = lean_mk_string_unchecked("issuers", 7, 7);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPrivateToken___lam__0___boxed(lean_object* v___x_88_, lean_object* v___x_89_, lean_object* v___x_90_, lean_object* v___x_91_, lean_object* v_d_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_JS_Web_instFromJSPrivateToken___lam__0(v___x_88_, v___x_89_, v___x_90_, v___x_91_, v_d_92_);
lean_dec(v_d_92_);
return v_res_93_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPrivateToken(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___x_102_; uint8_t v___x_103_; lean_object* v___x_104_; 
v___x_94_ = l_Lasm_JS_Web_instFromJSTokenVersion;
v___x_95_ = l_Lasm_JS_Web_instFromJSOperationType;
v___x_96_ = l_Lasm_JS_Web_instFromJSRefreshPolicy;
v___x_97_ = l_Lasm_JS_instFromJSOption___redArg(v___x_96_);
v___x_98_ = l_Lasm_JS_instFromJSString;
v___x_99_ = l_Lasm_JS_instFromJSArray___redArg(v___x_98_);
v___x_100_ = l_Lasm_JS_instFromJSOption___redArg(v___x_99_);
v___f_101_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPrivateToken___lam__0___boxed), 5, 4);
lean_closure_set(v___f_101_, 0, v___x_94_);
lean_closure_set(v___f_101_, 1, v___x_95_);
lean_closure_set(v___f_101_, 2, v___x_97_);
lean_closure_set(v___f_101_, 3, v___x_100_);
v___x_102_ = lean_mk_string_unchecked("Lasm.JS.Web.PrivateToken", 24, 24);
v___x_103_ = 0;
v___x_104_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_104_, 0, v___f_101_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
lean_ctor_set_uint8(v___x_104_, sizeof(void*)*2, v___x_103_);
return v___x_104_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Html(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_TrustTokenApi(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Xhr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_TrustTokenApi(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_TrustTokenApi(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Xhr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSPrivateToken = _init_l_Lasm_JS_Web_instToJSPrivateToken();
lean_mark_persistent(l_Lasm_JS_Web_instToJSPrivateToken);
l_Lasm_JS_Web_instFromJSPrivateToken = _init_l_Lasm_JS_Web_instFromJSPrivateToken();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPrivateToken);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
