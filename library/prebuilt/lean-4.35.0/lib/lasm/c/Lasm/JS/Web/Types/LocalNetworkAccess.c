// Lean compiler output
// Module: Lasm.JS.Web.Types.LocalNetworkAccess
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqIPAddressSpace_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqIPAddressSpace_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqIPAddressSpace_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqIPAddressSpace_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqIPAddressSpace = (const lean_object*)&l_Lasm_JS_Web_instBEqIPAddressSpace_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprIPAddressSpace_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprIPAddressSpace_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprIPAddressSpace_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprIPAddressSpace_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprIPAddressSpace_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprIPAddressSpace = (const lean_object*)&l_Lasm_JS_Web_instReprIPAddressSpace_value;
static const lean_string_object l_Lasm_JS_Web_instInhabitedIPAddressSpace_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instInhabitedIPAddressSpace_default = (const lean_object*)&l_Lasm_JS_Web_instInhabitedIPAddressSpace_default_value;
static const lean_string_object l_Lasm_JS_Web_instInhabitedIPAddressSpace_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instInhabitedIPAddressSpace = (const lean_object*)&l_Lasm_JS_Web_instInhabitedIPAddressSpace_value;
static const lean_string_object l_Lasm_JS_Web_IPAddressSpace_public_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_IPAddressSpace_public = (const lean_object*)&l_Lasm_JS_Web_IPAddressSpace_public_value;
static const lean_string_object l_Lasm_JS_Web_IPAddressSpace_local_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_IPAddressSpace_local = (const lean_object*)&l_Lasm_JS_Web_IPAddressSpace_local_value;
static const lean_string_object l_Lasm_JS_Web_IPAddressSpace_loopback_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "loopback"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_IPAddressSpace_loopback = (const lean_object*)&l_Lasm_JS_Web_IPAddressSpace_loopback_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSIPAddressSpace___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSIPAddressSpace_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSIPAddressSpace___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSIPAddressSpace = (const lean_object*)&l_Lasm_JS_Web_instToJSIPAddressSpace_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSIPAddressSpace___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSIPAddressSpace;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqIPAddressSpace_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = lean_string_dec_eq(v_x_1_, v_x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqIPAddressSpace_beq___boxed(lean_object* v_x_4_, lean_object* v_x_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l_Lasm_JS_Web_instBEqIPAddressSpace_beq(v_x_4_, v_x_5_);
lean_dec_ref(v_x_5_);
lean_dec_ref(v_x_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprIPAddressSpace_repr___redArg(lean_object* v_x_9_){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_10_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_11_ = lean_box(0);
v___x_12_ = lean_mk_string_unchecked("val", 3, 3);
v___x_13_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_11_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_16_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
v___x_17_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_14_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = lean_unsigned_to_nat(7u);
v___x_19_ = lean_nat_to_int(v___x_18_);
v___x_20_ = l_String_quote(v_x_9_);
v___x_21_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
v___x_22_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_19_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = 0;
v___x_24_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_24_, 0, v___x_22_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*1, v___x_23_);
v___x_25_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_17_);
lean_ctor_set(v___x_25_, 1, v___x_24_);
v___x_26_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_27_ = lean_string_length(v___x_10_);
v___x_28_ = lean_nat_to_int(v___x_27_);
v___x_29_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_10_);
v___x_30_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___x_25_);
v___x_31_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_26_);
v___x_32_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_30_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_28_);
lean_ctor_set(v___x_33_, 1, v___x_32_);
v___x_34_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set_uint8(v___x_34_, sizeof(void*)*1, v___x_23_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprIPAddressSpace_repr(lean_object* v_x_35_, lean_object* v_prec_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_JS_Web_instReprIPAddressSpace_repr___redArg(v_x_35_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprIPAddressSpace_repr___boxed(lean_object* v_x_38_, lean_object* v_prec_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lasm_JS_Web_instReprIPAddressSpace_repr(v_x_38_, v_prec_39_);
lean_dec(v_prec_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSIPAddressSpace___lam__0(lean_object* v_x_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_48_, 0, v_x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSIPAddressSpace___lam__0(lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 4)
{
lean_object* v_s_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_58_; 
v_s_51_ = lean_ctor_get(v_x_50_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_58_ == 0)
{
v___x_53_ = v_x_50_;
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_s_51_);
lean_dec(v_x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_56_; 
if (v_isShared_54_ == 0)
{
lean_ctor_set_tag(v___x_53_, 1);
v___x_56_ = v___x_53_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_s_51_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_x_50_);
v___x_59_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSIPAddressSpace(void){
_start:
{
lean_object* v___f_61_; lean_object* v___x_62_; uint8_t v___x_63_; lean_object* v___x_64_; 
v___f_61_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSIPAddressSpace___lam__0), 1, 0);
v___x_62_ = lean_mk_string_unchecked("Lasm.JS.Web.IPAddressSpace", 26, 26);
v___x_63_ = 0;
v___x_64_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_64_, 0, v___f_61_);
lean_ctor_set(v___x_64_, 1, v___x_62_);
lean_ctor_set_uint8(v___x_64_, sizeof(void*)*2, v___x_63_);
return v___x_64_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Types_LocalNetworkAccess(uint8_t builtin) {
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
l_Lasm_JS_Web_instFromJSIPAddressSpace = _init_l_Lasm_JS_Web_instFromJSIPAddressSpace();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSIPAddressSpace);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
