// Lean compiler output
// Module: Lasm.JS.Web.Fs
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.FileAPI public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Types.Fs public import Lasm.JS.Web.Types.Storage
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
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWriteParams___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWriteParams;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_writeParams_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_writeParams_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemWriteChunkType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSFileSystemWriteChunkType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSFileSystemWriteChunkType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSFileSystemWriteChunkType = (const lean_object*)&l_Lasm_JS_Web_instToJSFileSystemWriteChunkType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayFileSystemWriteChunkType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayFileSystemWriteChunkType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayFileSystemWriteChunkType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayFileSystemWriteChunkType = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayFileSystemWriteChunkType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobFileSystemWriteChunkType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobFileSystemWriteChunkType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobFileSystemWriteChunkType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobFileSystemWriteChunkType = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobFileSystemWriteChunkType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringFileSystemWriteChunkType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringFileSystemWriteChunkType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringFileSystemWriteChunkType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringFileSystemWriteChunkType = (const lean_object*)&l_Lasm_JS_Web_instCoeStringFileSystemWriteChunkType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeWriteParamsFileSystemWriteChunkType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeWriteParamsFileSystemWriteChunkType_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeWriteParamsFileSystemWriteChunkType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeWriteParamsFileSystemWriteChunkType = (const lean_object*)&l_Lasm_JS_Web_instCoeWriteParamsFileSystemWriteChunkType_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemGetFileOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemGetFileOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemGetDirectoryOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemRemoveOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemRemoveOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions___lam__0(lean_object* v___f_1_, lean_object* v_d_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_3_ = lean_mk_string_unchecked("at", 2, 2);
v___x_4_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_d_2_);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_3_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_mk_empty_array_with_capacity(v___x_6_);
v___x_8_ = lean_array_push(v___x_7_, v___x_5_);
v___x_9_ = l_Lasm_JS_Web_Internal_fields(v___x_8_);
lean_dec_ref(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions(void){
_start:
{
lean_object* v___f_10_; lean_object* v___f_11_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_11_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions___lam__0), 2, 1);
lean_closure_set(v___f_11_, 0, v___f_10_);
return v___f_11_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx(lean_object* v_x_12_){
_start:
{
switch(lean_obj_tag(v_x_12_))
{
case 0:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(0u);
return v___x_13_;
}
case 1:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(1u);
return v___x_14_;
}
default: 
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(2u);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx___boxed(lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorIdx(v_x_16_);
lean_dec_ref(v_x_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(lean_object* v_t_18_, lean_object* v_k_19_){
_start:
{
if (lean_obj_tag(v_t_18_) == 1)
{
lean_object* v_value_20_; lean_object* v___x_21_; 
v_value_20_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_value_20_);
lean_dec_ref_known(v_t_18_, 1);
v___x_21_ = lean_apply_1(v_k_19_, v_value_20_);
return v___x_21_;
}
else
{
lean_object* v_value_22_; lean_object* v___x_23_; 
v_value_22_ = lean_ctor_get(v_t_18_, 0);
lean_inc_ref(v_value_22_);
lean_dec_ref(v_t_18_);
v___x_23_ = lean_apply_1(v_k_19_, v_value_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_26_, v_k_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___boxed(lean_object* v_motive_30_, lean_object* v_ctorIdx_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_k_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim(v_motive_30_, v_ctorIdx_31_, v_t_32_, v_h_33_, v_k_34_);
lean_dec(v_ctorIdx_31_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim___redArg(lean_object* v_t_36_, lean_object* v_bufferSource_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_36_, v_bufferSource_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_bufferSource_elim(lean_object* v_motive_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_bufferSource_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_40_, v_bufferSource_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim___redArg(lean_object* v_t_44_, lean_object* v_blob_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_44_, v_blob_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_blob_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_blob_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_48_, v_blob_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim___redArg(lean_object* v_t_52_, lean_object* v_usvString_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_52_, v_usvString_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_usvString_elim(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_usvString_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lasm_JS_Web_BufferSourceOrBlobOrUSVString_ctorElim___redArg(v_t_56_, v_usvString_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_x_60_){
_start:
{
switch(lean_obj_tag(v_x_60_))
{
case 0:
{
lean_object* v_value_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_68_; 
v_value_61_ = lean_ctor_get(v_x_60_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_x_60_);
if (v_isSharedCheck_68_ == 0)
{
v___x_63_ = v_x_60_;
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_value_61_);
lean_dec(v_x_60_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_66_; 
if (v_isShared_64_ == 0)
{
lean_ctor_set_tag(v___x_63_, 6);
v___x_66_ = v___x_63_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(6, 1, 0);
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
case 1:
{
lean_object* v_value_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v_value_69_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_value_69_);
lean_dec_ref_known(v_x_60_, 1);
v___x_70_ = lean_mk_string_unchecked("", 0, 0);
v___x_71_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_71_, 0, v_value_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
return v___x_71_;
}
default: 
{
lean_object* v_value_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_79_; 
v_value_72_ = lean_ctor_get(v_x_60_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_x_60_);
if (v_isSharedCheck_79_ == 0)
{
v___x_74_ = v_x_60_;
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_value_72_);
lean_dec(v_x_60_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_79_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
lean_object* v___x_77_; 
if (v_isShared_75_ == 0)
{
lean_ctor_set_tag(v___x_74_, 4);
v___x_77_ = v___x_74_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_value_72_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_value_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v_value_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBufferSourceOrBlobOrUSVString___lam__0(lean_object* v_value_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_88_, 0, v_value_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSWriteParams___lam__0(lean_object* v___f_90_, lean_object* v___f_91_, lean_object* v_d_92_){
_start:
{
lean_object* v_type_93_; lean_object* v_size_94_; lean_object* v_position_95_; lean_object* v_data_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v_type_93_ = lean_ctor_get(v_d_92_, 0);
lean_inc_ref(v_type_93_);
v_size_94_ = lean_ctor_get(v_d_92_, 1);
lean_inc(v_size_94_);
v_position_95_ = lean_ctor_get(v_d_92_, 2);
lean_inc(v_position_95_);
v_data_96_ = lean_ctor_get(v_d_92_, 3);
lean_inc(v_data_96_);
lean_dec_ref(v_d_92_);
v___x_97_ = lean_mk_string_unchecked("type", 4, 4);
v___x_98_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_98_, 0, v_type_93_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_mk_string_unchecked("size", 4, 4);
lean_inc_ref(v___f_90_);
v___x_101_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_90_, v_size_94_);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = lean_mk_string_unchecked("position", 8, 8);
v___x_104_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_90_, v_position_95_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_103_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_mk_string_unchecked("data", 4, 4);
v___x_107_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_91_, v_data_96_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_unsigned_to_nat(4u);
v___x_110_ = lean_mk_empty_array_with_capacity(v___x_109_);
v___x_111_ = lean_array_push(v___x_110_, v___x_99_);
v___x_112_ = lean_array_push(v___x_111_, v___x_102_);
v___x_113_ = lean_array_push(v___x_112_, v___x_105_);
v___x_114_ = lean_array_push(v___x_113_, v___x_108_);
v___x_115_ = l_Lasm_JS_Web_Internal_fields(v___x_114_);
lean_dec_ref(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSWriteParams(void){
_start:
{
lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___f_118_; 
v___f_116_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_117_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0), 1, 0);
v___f_118_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSWriteParams___lam__0), 3, 2);
lean_closure_set(v___f_118_, 0, v___f_116_);
lean_closure_set(v___f_118_, 1, v___f_117_);
return v___f_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorIdx(lean_object* v_x_119_){
_start:
{
switch(lean_obj_tag(v_x_119_))
{
case 0:
{
lean_object* v___x_120_; 
v___x_120_ = lean_unsigned_to_nat(0u);
return v___x_120_;
}
case 1:
{
lean_object* v___x_121_; 
v___x_121_ = lean_unsigned_to_nat(1u);
return v___x_121_;
}
case 2:
{
lean_object* v___x_122_; 
v___x_122_ = lean_unsigned_to_nat(2u);
return v___x_122_;
}
default: 
{
lean_object* v___x_123_; 
v___x_123_ = lean_unsigned_to_nat(3u);
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorIdx___boxed(lean_object* v_x_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorIdx(v_x_124_);
lean_dec_ref(v_x_124_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(lean_object* v_t_126_, lean_object* v_k_127_){
_start:
{
if (lean_obj_tag(v_t_126_) == 1)
{
lean_object* v_value_128_; lean_object* v___x_129_; 
v_value_128_ = lean_ctor_get(v_t_126_, 0);
lean_inc(v_value_128_);
lean_dec_ref_known(v_t_126_, 1);
v___x_129_ = lean_apply_1(v_k_127_, v_value_128_);
return v___x_129_;
}
else
{
lean_object* v_value_130_; lean_object* v___x_131_; 
v_value_130_ = lean_ctor_get(v_t_126_, 0);
lean_inc_ref(v_value_130_);
lean_dec_ref(v_t_126_);
v___x_131_ = lean_apply_1(v_k_127_, v_value_130_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim(lean_object* v_motive_132_, lean_object* v_ctorIdx_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_k_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_134_, v_k_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___boxed(lean_object* v_motive_138_, lean_object* v_ctorIdx_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_k_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim(v_motive_138_, v_ctorIdx_139_, v_t_140_, v_h_141_, v_k_142_);
lean_dec(v_ctorIdx_139_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_bufferSource_elim___redArg(lean_object* v_t_144_, lean_object* v_bufferSource_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_144_, v_bufferSource_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_bufferSource_elim(lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_bufferSource_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_148_, v_bufferSource_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_blob_elim___redArg(lean_object* v_t_152_, lean_object* v_blob_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_152_, v_blob_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_blob_elim(lean_object* v_motive_155_, lean_object* v_t_156_, lean_object* v_h_157_, lean_object* v_blob_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_156_, v_blob_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_usvString_elim___redArg(lean_object* v_t_160_, lean_object* v_usvString_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_160_, v_usvString_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_usvString_elim(lean_object* v_motive_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_usvString_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_164_, v_usvString_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_writeParams_elim___redArg(lean_object* v_t_168_, lean_object* v_writeParams_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_168_, v_writeParams_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_FileSystemWriteChunkType_writeParams_elim(lean_object* v_motive_171_, lean_object* v_t_172_, lean_object* v_h_173_, lean_object* v_writeParams_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l_Lasm_JS_Web_FileSystemWriteChunkType_ctorElim___redArg(v_t_172_, v_writeParams_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemWriteChunkType___lam__0(lean_object* v_x_176_){
_start:
{
switch(lean_obj_tag(v_x_176_))
{
case 0:
{
lean_object* v_value_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
v_value_177_ = lean_ctor_get(v_x_176_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v_x_176_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v_x_176_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_value_177_);
lean_dec(v_x_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set_tag(v___x_179_, 6);
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_value_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
case 1:
{
lean_object* v_value_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v_value_185_ = lean_ctor_get(v_x_176_, 0);
lean_inc(v_value_185_);
lean_dec_ref_known(v_x_176_, 1);
v___x_186_ = lean_mk_string_unchecked("", 0, 0);
v___x_187_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_187_, 0, v_value_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
return v___x_187_;
}
case 2:
{
lean_object* v_value_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_value_188_ = lean_ctor_get(v_x_176_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v_x_176_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v_x_176_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_value_188_);
lean_dec(v_x_176_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 4);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_value_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
default: 
{
lean_object* v_value_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_227_; 
v_value_196_ = lean_ctor_get(v_x_176_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v_x_176_);
if (v_isSharedCheck_227_ == 0)
{
v___x_198_ = v_x_176_;
v_isShared_199_ = v_isSharedCheck_227_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_value_196_);
lean_dec(v_x_176_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_227_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v_type_200_; lean_object* v_size_201_; lean_object* v_position_202_; lean_object* v_data_203_; lean_object* v___f_204_; lean_object* v___f_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v_type_200_ = lean_ctor_get(v_value_196_, 0);
lean_inc_ref(v_type_200_);
v_size_201_ = lean_ctor_get(v_value_196_, 1);
lean_inc(v_size_201_);
v_position_202_ = lean_ctor_get(v_value_196_, 2);
lean_inc(v_position_202_);
v_data_203_ = lean_ctor_get(v_value_196_, 3);
lean_inc(v_data_203_);
lean_dec_ref(v_value_196_);
v___f_204_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_205_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSBufferSourceOrBlobOrUSVString___lam__0), 1, 0);
v___x_206_ = lean_mk_string_unchecked("type", 4, 4);
if (v_isShared_199_ == 0)
{
lean_ctor_set_tag(v___x_198_, 4);
lean_ctor_set(v___x_198_, 0, v_type_200_);
v___x_208_ = v___x_198_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_type_200_);
v___x_208_ = v_reuseFailAlloc_226_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_206_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = lean_mk_string_unchecked("size", 4, 4);
lean_inc_ref(v___f_204_);
v___x_211_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_204_, v_size_201_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = lean_mk_string_unchecked("position", 8, 8);
v___x_214_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_204_, v_position_202_);
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_mk_string_unchecked("data", 4, 4);
v___x_217_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_205_, v_data_203_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = lean_unsigned_to_nat(4u);
v___x_220_ = lean_mk_empty_array_with_capacity(v___x_219_);
v___x_221_ = lean_array_push(v___x_220_, v___x_209_);
v___x_222_ = lean_array_push(v___x_221_, v___x_212_);
v___x_223_ = lean_array_push(v___x_222_, v___x_215_);
v___x_224_ = lean_array_push(v___x_223_, v___x_218_);
v___x_225_ = l_Lasm_JS_Web_Internal_fields(v___x_224_);
lean_dec_ref(v___x_224_);
return v___x_225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayFileSystemWriteChunkType___lam__0(lean_object* v_value_229_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v_value_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobFileSystemWriteChunkType___lam__0(lean_object* v_value_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v_value_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringFileSystemWriteChunkType___lam__0(lean_object* v_value_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_236_, 0, v_value_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeWriteParamsFileSystemWriteChunkType___lam__0(lean_object* v_value_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_239_, 0, v_value_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemGetFileOptions___lam__0(lean_object* v___f_241_, lean_object* v_d_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_243_ = lean_mk_string_unchecked("create", 6, 6);
v___x_244_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_241_, v_d_242_);
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = lean_mk_empty_array_with_capacity(v___x_246_);
v___x_248_ = lean_array_push(v___x_247_, v___x_245_);
v___x_249_ = l_Lasm_JS_Web_Internal_fields(v___x_248_);
lean_dec_ref(v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSFileSystemGetFileOptions(void){
_start:
{
lean_object* v___f_250_; lean_object* v___f_251_; 
v___f_250_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_251_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFileSystemGetFileOptions___lam__0), 2, 1);
lean_closure_set(v___f_251_, 0, v___f_250_);
return v___f_251_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSFileSystemGetDirectoryOptions(void){
_start:
{
lean_object* v___f_252_; lean_object* v___f_253_; 
v___f_252_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_253_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFileSystemGetFileOptions___lam__0), 2, 1);
lean_closure_set(v___f_253_, 0, v___f_252_);
return v___f_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemRemoveOptions___lam__0(lean_object* v___f_254_, lean_object* v_d_255_){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_256_ = lean_mk_string_unchecked("recursive", 9, 9);
v___x_257_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_254_, v_d_255_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_unsigned_to_nat(1u);
v___x_260_ = lean_mk_empty_array_with_capacity(v___x_259_);
v___x_261_ = lean_array_push(v___x_260_, v___x_258_);
v___x_262_ = l_Lasm_JS_Web_Internal_fields(v___x_261_);
lean_dec_ref(v___x_261_);
return v___x_262_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSFileSystemRemoveOptions(void){
_start:
{
lean_object* v___f_263_; lean_object* v___f_264_; 
v___f_263_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_264_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFileSystemRemoveOptions___lam__0), 2, 1);
lean_closure_set(v___f_264_, 0, v___f_263_);
return v___f_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions___lam__0(lean_object* v___f_265_, lean_object* v_d_266_){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_267_ = lean_mk_string_unchecked("keepExistingData", 16, 16);
v___x_268_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_265_, v_d_266_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = lean_unsigned_to_nat(1u);
v___x_271_ = lean_mk_empty_array_with_capacity(v___x_270_);
v___x_272_ = lean_array_push(v___x_271_, v___x_269_);
v___x_273_ = l_Lasm_JS_Web_Internal_fields(v___x_272_);
lean_dec_ref(v___x_272_);
return v___x_273_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions(void){
_start:
{
lean_object* v___f_274_; lean_object* v___f_275_; 
v___f_274_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_275_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions___lam__0), 2, 1);
lean_closure_set(v___f_275_, 0, v___f_274_);
return v___f_275_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_FileAPI(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Fs(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Storage(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Fs(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_FileAPI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Fs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Storage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions = _init_l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSFileSystemReadWriteOptions);
l_Lasm_JS_Web_instToJSWriteParams = _init_l_Lasm_JS_Web_instToJSWriteParams();
lean_mark_persistent(l_Lasm_JS_Web_instToJSWriteParams);
l_Lasm_JS_Web_instToJSFileSystemGetFileOptions = _init_l_Lasm_JS_Web_instToJSFileSystemGetFileOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSFileSystemGetFileOptions);
l_Lasm_JS_Web_instToJSFileSystemGetDirectoryOptions = _init_l_Lasm_JS_Web_instToJSFileSystemGetDirectoryOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSFileSystemGetDirectoryOptions);
l_Lasm_JS_Web_instToJSFileSystemRemoveOptions = _init_l_Lasm_JS_Web_instToJSFileSystemRemoveOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSFileSystemRemoveOptions);
l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions = _init_l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSFileSystemCreateWritableOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
