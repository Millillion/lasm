// Lean compiler output
// Module: Lasm.JS.Node.Stream
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Webidl
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
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadable___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSReadable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSReadable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadable = (const lean_object*)&l_Lasm_JS_Node_instToJSReadable_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadable___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadable___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadable;
static const lean_closure_object l_Lasm_JS_Node_instToJSWritable_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSReadable___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSWritable = (const lean_object*)&l_Lasm_JS_Node_instToJSWritable_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSWritable;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFromWebOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFromWebOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSToWebOptionsStrategy___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSToWebOptionsStrategy;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSToWebOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSToWebOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFromWebOptions__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFromWebOptions__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadable___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadable___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadable___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSReadable___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSReadable(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSReadable___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Readable", 28, 28);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSWritable(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSReadable___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Node.stream.Writable", 28, 28);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFromWebOptions___lam__0(lean_object* v___f_21_, lean_object* v___f_22_, lean_object* v___f_23_, lean_object* v___f_24_, lean_object* v_d_25_){
_start:
{
lean_object* v_encoding_26_; lean_object* v_highWaterMark_27_; lean_object* v_objectMode_28_; lean_object* v_signal_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_encoding_26_ = lean_ctor_get(v_d_25_, 0);
lean_inc(v_encoding_26_);
v_highWaterMark_27_ = lean_ctor_get(v_d_25_, 1);
lean_inc(v_highWaterMark_27_);
v_objectMode_28_ = lean_ctor_get(v_d_25_, 2);
lean_inc(v_objectMode_28_);
v_signal_29_ = lean_ctor_get(v_d_25_, 3);
lean_inc(v_signal_29_);
lean_dec_ref(v_d_25_);
v___x_30_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_31_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_21_, v_encoding_26_);
v___x_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_30_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_34_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_22_, v_highWaterMark_27_);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_33_);
lean_ctor_set(v___x_35_, 1, v___x_34_);
v___x_36_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_37_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_23_, v_objectMode_28_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_36_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_40_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_24_, v_signal_29_);
v___x_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_39_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v___x_42_ = lean_unsigned_to_nat(4u);
v___x_43_ = lean_mk_empty_array_with_capacity(v___x_42_);
v___x_44_ = lean_array_push(v___x_43_, v___x_32_);
v___x_45_ = lean_array_push(v___x_44_, v___x_35_);
v___x_46_ = lean_array_push(v___x_45_, v___x_38_);
v___x_47_ = lean_array_push(v___x_46_, v___x_41_);
v___x_48_ = l_Lasm_JS_Web_Internal_fields(v___x_47_);
lean_dec_ref(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFromWebOptions(void){
_start:
{
lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___f_53_; 
v___f_49_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_50_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_51_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_52_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_53_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFromWebOptions___lam__0), 5, 4);
lean_closure_set(v___f_53_, 0, v___f_49_);
lean_closure_set(v___f_53_, 1, v___f_50_);
lean_closure_set(v___f_53_, 2, v___f_51_);
lean_closure_set(v___f_53_, 3, v___f_52_);
return v___f_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSToWebOptionsStrategy___lam__0(lean_object* v___f_54_, lean_object* v___f_55_, lean_object* v_d_56_){
_start:
{
lean_object* v_highWaterMark_57_; lean_object* v_size_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_75_; 
v_highWaterMark_57_ = lean_ctor_get(v_d_56_, 0);
v_size_58_ = lean_ctor_get(v_d_56_, 1);
v_isSharedCheck_75_ = !lean_is_exclusive(v_d_56_);
if (v_isSharedCheck_75_ == 0)
{
v___x_60_ = v_d_56_;
v_isShared_61_ = v_isSharedCheck_75_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_size_58_);
lean_inc(v_highWaterMark_57_);
lean_dec(v_d_56_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_75_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_62_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_63_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_54_, v_highWaterMark_57_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 1, v___x_63_);
lean_ctor_set(v___x_60_, 0, v___x_62_);
v___x_65_ = v___x_60_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_62_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v___x_63_);
v___x_65_ = v_reuseFailAlloc_74_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_66_ = lean_mk_string_unchecked("size", 4, 4);
v___x_67_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_55_, v_size_58_);
v___x_68_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set(v___x_68_, 1, v___x_67_);
v___x_69_ = lean_unsigned_to_nat(2u);
v___x_70_ = lean_mk_empty_array_with_capacity(v___x_69_);
v___x_71_ = lean_array_push(v___x_70_, v___x_65_);
v___x_72_ = lean_array_push(v___x_71_, v___x_68_);
v___x_73_ = l_Lasm_JS_Web_Internal_fields(v___x_72_);
lean_dec_ref(v___x_72_);
return v___x_73_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSToWebOptionsStrategy(void){
_start:
{
lean_object* v___f_76_; lean_object* v___f_77_; lean_object* v___f_78_; 
v___f_76_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_77_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_78_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSToWebOptionsStrategy___lam__0), 3, 2);
lean_closure_set(v___f_78_, 0, v___f_76_);
lean_closure_set(v___f_78_, 1, v___f_77_);
return v___f_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSToWebOptions___lam__0(lean_object* v___x_79_, lean_object* v___f_80_, lean_object* v_d_81_){
_start:
{
lean_object* v_strategy_82_; lean_object* v_type_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_100_; 
v_strategy_82_ = lean_ctor_get(v_d_81_, 0);
v_type_83_ = lean_ctor_get(v_d_81_, 1);
v_isSharedCheck_100_ = !lean_is_exclusive(v_d_81_);
if (v_isSharedCheck_100_ == 0)
{
v___x_85_ = v_d_81_;
v_isShared_86_ = v_isSharedCheck_100_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_type_83_);
lean_inc(v_strategy_82_);
lean_dec(v_d_81_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_100_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_87_ = lean_mk_string_unchecked("strategy", 8, 8);
v___x_88_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_79_, v_strategy_82_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 1, v___x_88_);
lean_ctor_set(v___x_85_, 0, v___x_87_);
v___x_90_ = v___x_85_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_87_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v___x_88_);
v___x_90_ = v_reuseFailAlloc_99_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_91_ = lean_mk_string_unchecked("type", 4, 4);
v___x_92_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_80_, v_type_83_);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_91_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_unsigned_to_nat(2u);
v___x_95_ = lean_mk_empty_array_with_capacity(v___x_94_);
v___x_96_ = lean_array_push(v___x_95_, v___x_90_);
v___x_97_ = lean_array_push(v___x_96_, v___x_93_);
v___x_98_ = l_Lasm_JS_Web_Internal_fields(v___x_97_);
lean_dec_ref(v___x_97_);
return v___x_98_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSToWebOptions(void){
_start:
{
lean_object* v___x_101_; lean_object* v___f_102_; lean_object* v___f_103_; 
v___x_101_ = l_Lasm_JS_Node_instToJSToWebOptionsStrategy;
v___f_102_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_103_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSToWebOptions___lam__0), 3, 2);
lean_closure_set(v___f_103_, 0, v___x_101_);
lean_closure_set(v___f_103_, 1, v___f_102_);
return v___f_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSFromWebOptions__1___lam__0(lean_object* v___f_104_, lean_object* v___f_105_, lean_object* v___f_106_, lean_object* v_d_107_){
_start:
{
lean_object* v_decodeStrings_108_; lean_object* v_highWaterMark_109_; lean_object* v_objectMode_110_; lean_object* v_signal_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_decodeStrings_108_ = lean_ctor_get(v_d_107_, 0);
lean_inc(v_decodeStrings_108_);
v_highWaterMark_109_ = lean_ctor_get(v_d_107_, 1);
lean_inc(v_highWaterMark_109_);
v_objectMode_110_ = lean_ctor_get(v_d_107_, 2);
lean_inc(v_objectMode_110_);
v_signal_111_ = lean_ctor_get(v_d_107_, 3);
lean_inc(v_signal_111_);
lean_dec_ref(v_d_107_);
v___x_112_ = lean_mk_string_unchecked("decodeStrings", 13, 13);
lean_inc_ref(v___f_104_);
v___x_113_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_104_, v_decodeStrings_108_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
v___x_116_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_105_, v_highWaterMark_109_);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = lean_mk_string_unchecked("objectMode", 10, 10);
v___x_119_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_104_, v_objectMode_110_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_122_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_106_, v_signal_111_);
v___x_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = lean_unsigned_to_nat(4u);
v___x_125_ = lean_mk_empty_array_with_capacity(v___x_124_);
v___x_126_ = lean_array_push(v___x_125_, v___x_114_);
v___x_127_ = lean_array_push(v___x_126_, v___x_117_);
v___x_128_ = lean_array_push(v___x_127_, v___x_120_);
v___x_129_ = lean_array_push(v___x_128_, v___x_123_);
v___x_130_ = l_Lasm_JS_Web_Internal_fields(v___x_129_);
lean_dec_ref(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSFromWebOptions__1(void){
_start:
{
lean_object* v___f_131_; lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___f_134_; 
v___f_131_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_132_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_133_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_134_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSFromWebOptions__1___lam__0), 4, 3);
lean_closure_set(v___f_134_, 0, v___f_131_);
lean_closure_set(v___f_134_, 1, v___f_132_);
lean_closure_set(v___f_134_, 2, v___f_133_);
return v___f_134_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSReadable = _init_l_Lasm_JS_Node_instFromJSReadable();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSReadable);
l_Lasm_JS_Node_instFromJSWritable = _init_l_Lasm_JS_Node_instFromJSWritable();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSWritable);
l_Lasm_JS_Node_instToJSFromWebOptions = _init_l_Lasm_JS_Node_instToJSFromWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFromWebOptions);
l_Lasm_JS_Node_instToJSToWebOptionsStrategy = _init_l_Lasm_JS_Node_instToJSToWebOptionsStrategy();
lean_mark_persistent(l_Lasm_JS_Node_instToJSToWebOptionsStrategy);
l_Lasm_JS_Node_instToJSToWebOptions = _init_l_Lasm_JS_Node_instToJSToWebOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSToWebOptions);
l_Lasm_JS_Node_instToJSFromWebOptions__1 = _init_l_Lasm_JS_Node_instToJSFromWebOptions__1();
lean_mark_persistent(l_Lasm_JS_Node_instToJSFromWebOptions__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
