// Lean compiler output
// Module: Lasm.Fastly
// Imports: public import Init public meta import Init
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
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lasm_fastly_config_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_configGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_secret_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_secretGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvGet___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_put(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvPut___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_fastly_kv_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvDelete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_secretText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_secretText___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvGetText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvGetText___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Fastly_configGet___boxed(lean_object* v_store_4_, lean_object* v_key_5_, lean_object* v_a_00___x40___internal___hyg_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = lasm_fastly_config_get(v_store_4_, v_key_5_);
lean_dec_ref(v_key_5_);
lean_dec_ref(v_store_4_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_secretGet___boxed(lean_object* v_store_11_, lean_object* v_key_12_, lean_object* v_a_00___x40___internal___hyg_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = lasm_fastly_secret_get(v_store_11_, v_key_12_);
lean_dec_ref(v_key_12_);
lean_dec_ref(v_store_11_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvGet___boxed(lean_object* v_store_18_, lean_object* v_key_19_, lean_object* v_a_00___x40___internal___hyg_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lasm_fastly_kv_get(v_store_18_, v_key_19_);
lean_dec_ref(v_key_19_);
lean_dec_ref(v_store_18_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvPut___boxed(lean_object* v_store_26_, lean_object* v_key_27_, lean_object* v_value_28_, lean_object* v_a_00___x40___internal___hyg_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lasm_fastly_kv_put(v_store_26_, v_key_27_, v_value_28_);
lean_dec_ref(v_value_28_);
lean_dec_ref(v_key_27_);
lean_dec_ref(v_store_26_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvDelete___boxed(lean_object* v_store_34_, lean_object* v_key_35_, lean_object* v_a_00___x40___internal___hyg_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lasm_fastly_kv_delete(v_store_34_, v_key_35_);
lean_dec_ref(v_key_35_);
lean_dec_ref(v_store_34_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_secretText(lean_object* v_store_38_, lean_object* v_key_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lasm_fastly_secret_get(v_store_38_, v_key_39_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v_a_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_67_; 
v_a_42_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_67_ == 0)
{
v___x_44_ = v___x_41_;
v_isShared_45_ = v_isSharedCheck_67_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_a_42_);
lean_dec(v___x_41_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_67_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
if (lean_obj_tag(v_a_42_) == 0)
{
lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_46_ = lean_box(0);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_46_);
v___x_48_ = v___x_44_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
else
{
lean_object* v_val_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_66_; 
v_val_50_ = lean_ctor_get(v_a_42_, 0);
v_isSharedCheck_66_ = !lean_is_exclusive(v_a_42_);
if (v_isSharedCheck_66_ == 0)
{
v___x_52_ = v_a_42_;
v_isShared_53_ = v_isSharedCheck_66_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_val_50_);
lean_dec(v_a_42_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_66_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
uint8_t v___x_54_; 
v___x_54_ = lean_string_validate_utf8(v_val_50_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; lean_object* v___x_57_; 
lean_del_object(v___x_52_);
lean_dec(v_val_50_);
v___x_55_ = lean_box(0);
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_55_);
v___x_57_ = v___x_44_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v___x_55_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
else
{
lean_object* v___x_59_; lean_object* v___x_61_; 
v___x_59_ = lean_string_from_utf8_unchecked(v_val_50_);
if (v_isShared_53_ == 0)
{
lean_ctor_set(v___x_52_, 0, v___x_59_);
v___x_61_ = v___x_52_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_59_);
v___x_61_ = v_reuseFailAlloc_65_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_63_; 
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_61_);
v___x_63_ = v___x_44_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_61_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
v_a_68_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v___x_41_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_41_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_secretText___boxed(lean_object* v_store_76_, lean_object* v_key_77_, lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lasm_Fastly_secretText(v_store_76_, v_key_77_);
lean_dec_ref(v_key_77_);
lean_dec_ref(v_store_76_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvGetText(lean_object* v_store_80_, lean_object* v_key_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = lasm_fastly_kv_get(v_store_80_, v_key_81_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_109_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_109_ == 0)
{
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_109_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_109_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
if (lean_obj_tag(v_a_84_) == 0)
{
lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_88_ = lean_box(0);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_90_ = v___x_86_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
else
{
lean_object* v_val_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_108_; 
v_val_92_ = lean_ctor_get(v_a_84_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v_a_84_);
if (v_isSharedCheck_108_ == 0)
{
v___x_94_ = v_a_84_;
v_isShared_95_ = v_isSharedCheck_108_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_val_92_);
lean_dec(v_a_84_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_108_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
uint8_t v___x_96_; 
v___x_96_ = lean_string_validate_utf8(v_val_92_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_99_; 
lean_del_object(v___x_94_);
lean_dec(v_val_92_);
v___x_97_ = lean_box(0);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_97_);
v___x_99_ = v___x_86_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
else
{
lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_101_ = lean_string_from_utf8_unchecked(v_val_92_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_101_);
v___x_103_ = v___x_94_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_101_);
v___x_103_ = v_reuseFailAlloc_107_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_105_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_103_);
v___x_105_ = v___x_86_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
v_a_110_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_117_ == 0)
{
v___x_112_ = v___x_83_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_83_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Fastly_kvGetText___boxed(lean_object* v_store_118_, lean_object* v_key_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_Fastly_kvGetText(v_store_118_, v_key_119_);
lean_dec_ref(v_key_119_);
lean_dec_ref(v_store_118_);
return v_res_121_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
