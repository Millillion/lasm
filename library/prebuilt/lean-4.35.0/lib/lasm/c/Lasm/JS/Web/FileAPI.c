// Lean compiler output
// Module: Lasm.JS.Web.FileAPI
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Webidl public import Lasm.JS.Web.Types.FileAPI public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Types.MediaSource public import Lasm.JS.Web.Types.Url public import Lasm.JS.Web.Html
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
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_FunctionStringCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEndingType___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBlobPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBlobPart = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayBlobPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBlobPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBlobPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBlobPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBlobPart___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringBlobPart_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringBlobPart___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringBlobPart = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBlobPart_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_arrayBuffer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_arrayBuffer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_decode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBlobOrMediaSource_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource = (const lean_object*)&l_Lasm_JS_Web_instToJSBlobOrMediaSource_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeMediaSourceBlobOrMediaSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeMediaSourceBlobOrMediaSource_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeMediaSourceBlobOrMediaSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeMediaSourceBlobOrMediaSource = (const lean_object*)&l_Lasm_JS_Web_instCoeMediaSourceBlobOrMediaSource_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileReader_EMPTY;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileReader_LOADING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileReader_DONE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx(lean_object* v_x_1_){
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
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lasm_JS_Web_BlobPart_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 1)
{
lean_object* v_value_9_; lean_object* v___x_10_; 
v_value_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_value_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_value_9_);
return v___x_10_;
}
else
{
lean_object* v_value_11_; lean_object* v___x_12_; 
v_value_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_value_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_value_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Web_BlobPart_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim___redArg(lean_object* v_t_25_, lean_object* v_bufferSource_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_25_, v_bufferSource_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_bufferSource_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_bufferSource_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_29_, v_bufferSource_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim___redArg(lean_object* v_t_33_, lean_object* v_blob_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_33_, v_blob_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_blob_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_blob_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_37_, v_blob_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim___redArg(lean_object* v_t_41_, lean_object* v_usvString_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_41_, v_usvString_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobPart_usvString_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_usvString_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_JS_Web_BlobPart_ctorElim___redArg(v_t_45_, v_usvString_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPart___lam__0(lean_object* v_x_49_){
_start:
{
switch(lean_obj_tag(v_x_49_))
{
case 0:
{
lean_object* v_value_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_value_50_ = lean_ctor_get(v_x_49_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_x_49_);
if (v_isSharedCheck_57_ == 0)
{
v___x_52_ = v_x_49_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_value_50_);
lean_dec(v_x_49_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
lean_ctor_set_tag(v___x_52_, 6);
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_value_50_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
case 1:
{
lean_object* v_value_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v_value_58_ = lean_ctor_get(v_x_49_, 0);
lean_inc(v_value_58_);
lean_dec_ref_known(v_x_49_, 1);
v___x_59_ = lean_mk_string_unchecked("", 0, 0);
v___x_60_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_60_, 0, v_value_58_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
return v___x_60_;
}
default: 
{
lean_object* v_value_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_68_; 
v_value_61_ = lean_ctor_get(v_x_49_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_x_49_);
if (v_isSharedCheck_68_ == 0)
{
v___x_63_ = v_x_49_;
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_value_61_);
lean_dec(v_x_49_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_66_; 
if (v_isShared_64_ == 0)
{
lean_ctor_set_tag(v___x_63_, 4);
v___x_66_ = v___x_63_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_value_61_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBlobPart___lam__0(lean_object* v_value_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v_value_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobPart___lam__0(lean_object* v_value_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v_value_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBlobPart___lam__0(lean_object* v_value_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_77_, 0, v_value_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0(lean_object* v___f_79_, lean_object* v___f_80_, lean_object* v_d_81_){
_start:
{
lean_object* v_type_82_; lean_object* v_endings_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_100_; 
v_type_82_ = lean_ctor_get(v_d_81_, 0);
v_endings_83_ = lean_ctor_get(v_d_81_, 1);
v_isSharedCheck_100_ = !lean_is_exclusive(v_d_81_);
if (v_isSharedCheck_100_ == 0)
{
v___x_85_ = v_d_81_;
v_isShared_86_ = v_isSharedCheck_100_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_endings_83_);
lean_inc(v_type_82_);
lean_dec(v_d_81_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_100_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_87_ = lean_mk_string_unchecked("type", 4, 4);
v___x_88_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_79_, v_type_82_);
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
v___x_91_ = lean_mk_string_unchecked("endings", 7, 7);
v___x_92_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_80_, v_endings_83_);
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
static lean_object* _init_l_Lasm_JS_Web_instToJSBlobPropertyBag(void){
_start:
{
lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___f_103_; 
v___f_101_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_102_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSEndingType___lam__0), 1, 0);
v___f_103_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSBlobPropertyBag___lam__0), 3, 2);
lean_closure_set(v___f_103_, 0, v___f_101_);
lean_closure_set(v___f_103_, 1, v___f_102_);
return v___f_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorIdx(lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_unsigned_to_nat(0u);
return v___x_105_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_unsigned_to_nat(1u);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorIdx___boxed(lean_object* v_x_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorIdx(v_x_107_);
lean_dec_ref(v_x_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(lean_object* v_t_109_, lean_object* v_k_110_){
_start:
{
lean_object* v_value_111_; lean_object* v___x_112_; 
v_value_111_ = lean_ctor_get(v_t_109_, 0);
lean_inc_ref(v_value_111_);
lean_dec_ref(v_t_109_);
v___x_112_ = lean_apply_1(v_k_110_, v_value_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim(lean_object* v_motive_113_, lean_object* v_ctorIdx_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_k_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(v_t_115_, v_k_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___boxed(lean_object* v_motive_119_, lean_object* v_ctorIdx_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_k_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim(v_motive_119_, v_ctorIdx_120_, v_t_121_, v_h_122_, v_k_123_);
lean_dec(v_ctorIdx_120_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_domString_elim___redArg(lean_object* v_t_125_, lean_object* v_domString_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(v_t_125_, v_domString_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_domString_elim(lean_object* v_motive_128_, lean_object* v_t_129_, lean_object* v_h_130_, lean_object* v_domString_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(v_t_129_, v_domString_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_arrayBuffer_elim___redArg(lean_object* v_t_133_, lean_object* v_arrayBuffer_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(v_t_133_, v_arrayBuffer_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_arrayBuffer_elim(lean_object* v_motive_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_arrayBuffer_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_ctorElim___redArg(v_t_137_, v_arrayBuffer_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_decode(lean_object* v_d_141_){
_start:
{
switch(lean_obj_tag(v_d_141_))
{
case 4:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_mk_string_unchecked("DOMStringOrArrayBuffer", 22, 22);
v___x_144_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_FunctionStringCallback_ofFn_spec__0_spec__0(v___x_143_, v_d_141_);
lean_dec_ref(v___x_143_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_153_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_153_ == 0)
{
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_153_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_144_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_153_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_151_; 
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v_a_145_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_149_);
v___x_151_ = v___x_147_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_149_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_a_154_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_144_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_144_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
case 9:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_mk_string_unchecked("DOMStringOrArrayBuffer", 22, 22);
v___x_163_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_162_, v_d_141_);
lean_dec_ref(v___x_162_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_165_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v___x_163_, 1);
v___x_165_ = l_Lasm_JS_Web_Internal_arrayBufferBytes(v_a_164_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_174_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_174_ == 0)
{
v___x_168_ = v___x_165_;
v_isShared_169_ = v_isSharedCheck_174_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_165_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_174_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_170_, 0, v_a_166_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_170_);
v___x_172_ = v___x_168_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
else
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_182_; 
v_a_175_ = lean_ctor_get(v___x_165_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_165_);
if (v_isSharedCheck_182_ == 0)
{
v___x_177_ = v___x_165_;
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_165_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_175_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
v_a_183_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_163_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_163_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
default: 
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_191_ = lean_mk_string_unchecked("Lasm.JS.Web: expected a DOMStringOrArrayBuffer, received JavaScript ", 68, 68);
v___x_192_ = l_Lasm_JS_Data_describe(v_d_141_);
v___x_193_ = lean_string_append(v___x_191_, v___x_192_);
lean_dec_ref(v___x_192_);
v___x_194_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
v___x_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrArrayBuffer_decode___boxed(lean_object* v_d_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lasm_JS_Web_DOMStringOrArrayBuffer_decode(v_d_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0(lean_object* v___f_199_, lean_object* v___f_200_, lean_object* v___f_201_, lean_object* v_d_202_){
_start:
{
lean_object* v_type_203_; lean_object* v_endings_204_; lean_object* v_lastModified_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_type_203_ = lean_ctor_get(v_d_202_, 0);
lean_inc(v_type_203_);
v_endings_204_ = lean_ctor_get(v_d_202_, 1);
lean_inc(v_endings_204_);
v_lastModified_205_ = lean_ctor_get(v_d_202_, 2);
lean_inc(v_lastModified_205_);
lean_dec_ref(v_d_202_);
v___x_206_ = lean_mk_string_unchecked("type", 4, 4);
v___x_207_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_199_, v_type_203_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lean_mk_string_unchecked("endings", 7, 7);
v___x_210_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_200_, v_endings_204_);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = lean_mk_string_unchecked("lastModified", 12, 12);
v___x_213_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_201_, v_lastModified_205_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = lean_unsigned_to_nat(3u);
v___x_216_ = lean_mk_empty_array_with_capacity(v___x_215_);
v___x_217_ = lean_array_push(v___x_216_, v___x_208_);
v___x_218_ = lean_array_push(v___x_217_, v___x_211_);
v___x_219_ = lean_array_push(v___x_218_, v___x_214_);
v___x_220_ = l_Lasm_JS_Web_Internal_fields(v___x_219_);
lean_dec_ref(v___x_219_);
return v___x_220_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSFilePropertyBag(void){
_start:
{
lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; 
v___f_221_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_222_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSEndingType___lam__0), 1, 0);
v___f_223_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_224_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFilePropertyBag___lam__0), 4, 3);
lean_closure_set(v___f_224_, 0, v___f_221_);
lean_closure_set(v___f_224_, 1, v___f_222_);
lean_closure_set(v___f_224_, 2, v___f_223_);
return v___f_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx(lean_object* v_x_225_){
_start:
{
if (lean_obj_tag(v_x_225_) == 0)
{
lean_object* v___x_226_; 
v___x_226_ = lean_unsigned_to_nat(0u);
return v___x_226_;
}
else
{
lean_object* v___x_227_; 
v___x_227_ = lean_unsigned_to_nat(1u);
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx___boxed(lean_object* v_x_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorIdx(v_x_228_);
lean_dec_ref(v_x_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(lean_object* v_t_230_, lean_object* v_k_231_){
_start:
{
lean_object* v_value_232_; lean_object* v___x_233_; 
v_value_232_ = lean_ctor_get(v_t_230_, 0);
lean_inc(v_value_232_);
lean_dec_ref(v_t_230_);
v___x_233_ = lean_apply_1(v_k_231_, v_value_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(lean_object* v_motive_234_, lean_object* v_ctorIdx_235_, lean_object* v_t_236_, lean_object* v_h_237_, lean_object* v_k_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_236_, v_k_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___boxed(lean_object* v_motive_240_, lean_object* v_ctorIdx_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_k_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim(v_motive_240_, v_ctorIdx_241_, v_t_242_, v_h_243_, v_k_244_);
lean_dec(v_ctorIdx_241_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim___redArg(lean_object* v_t_246_, lean_object* v_blob_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_246_, v_blob_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_blob_elim(lean_object* v_motive_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_blob_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_250_, v_blob_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim___redArg(lean_object* v_t_254_, lean_object* v_mediaSource_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_254_, v_mediaSource_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BlobOrMediaSource_mediaSource_elim(lean_object* v_motive_257_, lean_object* v_t_258_, lean_object* v_h_259_, lean_object* v_mediaSource_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lasm_JS_Web_BlobOrMediaSource_ctorElim___redArg(v_t_258_, v_mediaSource_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(lean_object* v_x_262_){
_start:
{
lean_object* v_value_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v_value_263_ = lean_ctor_get(v_x_262_, 0);
v___x_264_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_263_);
v___x_265_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_265_, 0, v_value_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0___boxed(lean_object* v_x_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lasm_JS_Web_instToJSBlobOrMediaSource___lam__0(v_x_266_);
lean_dec_ref(v_x_266_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBlobOrMediaSource___lam__0(lean_object* v_value_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v_value_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeMediaSourceBlobOrMediaSource___lam__0(lean_object* v_value_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_273_, 0, v_value_272_);
return v___x_273_;
}
}
static lean_object* _init_l_Lasm_JS_Web_FileReader_EMPTY(void){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_unsigned_to_nat(0u);
return v___x_275_;
}
}
static lean_object* _init_l_Lasm_JS_Web_FileReader_LOADING(void){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = lean_unsigned_to_nat(1u);
return v___x_276_;
}
}
static lean_object* _init_l_Lasm_JS_Web_FileReader_DONE(void){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = lean_unsigned_to_nat(2u);
return v___x_277_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_FileAPI(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_MediaSource(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_FileAPI(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_FileAPI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_MediaSource(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSBlobPropertyBag = _init_l_Lasm_JS_Web_instToJSBlobPropertyBag();
lean_mark_persistent(l_Lasm_JS_Web_instToJSBlobPropertyBag);
l_Lasm_JS_Web_instToJSFilePropertyBag = _init_l_Lasm_JS_Web_instToJSFilePropertyBag();
lean_mark_persistent(l_Lasm_JS_Web_instToJSFilePropertyBag);
l_Lasm_JS_Web_FileReader_EMPTY = _init_l_Lasm_JS_Web_FileReader_EMPTY();
lean_mark_persistent(l_Lasm_JS_Web_FileReader_EMPTY);
l_Lasm_JS_Web_FileReader_LOADING = _init_l_Lasm_JS_Web_FileReader_LOADING();
lean_mark_persistent(l_Lasm_JS_Web_FileReader_LOADING);
l_Lasm_JS_Web_FileReader_DONE = _init_l_Lasm_JS_Web_FileReader_DONE();
lean_mark_persistent(l_Lasm_JS_Web_FileReader_DONE);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
