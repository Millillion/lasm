// Lean compiler output
// Module: Lasm.JS.Web.Fetch
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Html public import Lasm.JS.Web.Types.Fetch public import Lasm.JS.Web.Types.FileAPI public import Lasm.JS.Web.Types.Streams public import Lasm.JS.Web.Types.LocalNetworkAccess public import Lasm.JS.Web.Types.ReferrerPolicy public import Lasm.JS.Web.Types.Url public import Lasm.JS.Web.Types.Xhr public import Lasm.JS.Web.TrustTokenApi
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
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSReferrerPolicy___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRequestCredentials___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSIPAddressSpace___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_Web_instToJSPrivateToken;
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
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
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_record_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_record_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringHeadersInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeArrayStringHeadersInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeArrayStringHeadersInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeArrayStringHeadersInit = (const lean_object*)&l_Lasm_JS_Web_instCoeArrayStringHeadersInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRecordStringHeadersInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeRecordStringHeadersInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeRecordStringHeadersInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeRecordStringHeadersInit = (const lean_object*)&l_Lasm_JS_Web_instCoeRecordStringHeadersInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_request_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_request_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRequestInfo___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRequestInfo_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSRequestInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSRequestInfo = (const lean_object*)&l_Lasm_JS_Web_instToJSRequestInfo_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRequestRequestInfo___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeRequestRequestInfo_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeRequestRequestInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeRequestRequestInfo = (const lean_object*)&l_Lasm_JS_Web_instCoeRequestRequestInfo_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringRequestInfo___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringRequestInfo_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringRequestInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringRequestInfo = (const lean_object*)&l_Lasm_JS_Web_instCoeStringRequestInfo_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_formData_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_formData_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_urlSearchParams_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_urlSearchParams_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBodyInit = (const lean_object*)&l_Lasm_JS_Web_instToJSBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeReadableStreamBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeReadableStreamBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeReadableStreamBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeReadableStreamBodyInit = (const lean_object*)&l_Lasm_JS_Web_instCoeReadableStreamBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBlobBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBlobBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBlobBodyInit = (const lean_object*)&l_Lasm_JS_Web_instCoeBlobBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeByteArrayBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeByteArrayBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeByteArrayBodyInit = (const lean_object*)&l_Lasm_JS_Web_instCoeByteArrayBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeFormDataBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeFormDataBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeFormDataBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeFormDataBodyInit = (const lean_object*)&l_Lasm_JS_Web_instCoeFormDataBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeURLSearchParamsBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeURLSearchParamsBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeURLSearchParamsBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeURLSearchParamsBodyInit = (const lean_object*)&l_Lasm_JS_Web_instCoeURLSearchParamsBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBodyInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringBodyInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringBodyInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringBodyInit = (const lean_object*)&l_Lasm_JS_Web_instCoeStringBodyInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRequestInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRequestInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSResponseInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSResponseInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDeferredRequestInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDeferredRequestInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lasm_JS_Web_HeadersInit_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
lean_object* v_value_8_; lean_object* v___x_9_; 
v_value_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_value_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_value_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lasm_JS_Web_HeadersInit_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_sequence_elim___redArg(lean_object* v_t_22_, lean_object* v_sequence_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(v_t_22_, v_sequence_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_sequence_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_sequence_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(v_t_26_, v_sequence_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_record_elim___redArg(lean_object* v_t_30_, lean_object* v_record_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(v_t_30_, v_record_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_HeadersInit_record_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_record_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_JS_Web_HeadersInit_ctorElim___redArg(v_t_34_, v_record_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__0(lean_object* v_x_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__1(lean_object* v___f_40_, lean_object* v_x_41_){
_start:
{
lean_object* v___f_42_; lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___f_47_; lean_object* v___f_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; size_t v_sz_52_; size_t v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___f_42_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_43_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_44_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_45_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_46_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_47_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_48_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_49_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_49_, 0, v___f_42_);
lean_ctor_set(v___x_49_, 1, v___f_43_);
v___x_50_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___f_44_);
lean_ctor_set(v___x_50_, 2, v___f_45_);
lean_ctor_set(v___x_50_, 3, v___f_46_);
lean_ctor_set(v___x_50_, 4, v___f_47_);
v___x_51_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___f_48_);
v_sz_52_ = lean_array_size(v_x_41_);
v___x_53_ = ((size_t)0ULL);
v___x_54_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_51_, v___f_40_, v_sz_52_, v___x_53_, v_x_41_);
v___x_55_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__2(lean_object* v_x_56_){
_start:
{
lean_object* v_fst_57_; lean_object* v_snd_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_66_; 
v_fst_57_ = lean_ctor_get(v_x_56_, 0);
v_snd_58_ = lean_ctor_get(v_x_56_, 1);
v_isSharedCheck_66_ = !lean_is_exclusive(v_x_56_);
if (v_isSharedCheck_66_ == 0)
{
v___x_60_ = v_x_56_;
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_snd_58_);
lean_inc(v_fst_57_);
lean_dec(v_x_56_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_62_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_62_, 0, v_snd_58_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 1, v___x_62_);
v___x_64_ = v___x_60_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_fst_57_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSHeadersInit___lam__3(lean_object* v___f_67_, lean_object* v___f_68_, lean_object* v_x_69_){
_start:
{
if (lean_obj_tag(v_x_69_) == 0)
{
lean_object* v_value_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_90_; 
lean_dec_ref(v___f_68_);
v_value_70_ = lean_ctor_get(v_x_69_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_90_ == 0)
{
v___x_72_ = v_x_69_;
v_isShared_73_ = v_isSharedCheck_90_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_value_70_);
lean_dec(v_x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_90_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___f_76_; lean_object* v___f_77_; lean_object* v___f_78_; lean_object* v___f_79_; lean_object* v___f_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; size_t v_sz_84_; size_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_88_; 
v___f_74_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_75_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_76_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_77_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_78_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_79_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_80_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_81_, 0, v___f_74_);
lean_ctor_set(v___x_81_, 1, v___f_75_);
v___x_82_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___f_76_);
lean_ctor_set(v___x_82_, 2, v___f_77_);
lean_ctor_set(v___x_82_, 3, v___f_78_);
lean_ctor_set(v___x_82_, 4, v___f_79_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___f_80_);
v_sz_84_ = lean_array_size(v_value_70_);
v___x_85_ = ((size_t)0ULL);
v___x_86_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_83_, v___f_67_, v_sz_84_, v___x_85_, v_value_70_);
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 7);
lean_ctor_set(v___x_72_, 0, v___x_86_);
v___x_88_ = v___x_72_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_86_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v_value_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_111_; 
lean_dec_ref(v___f_67_);
v_value_91_ = lean_ctor_get(v_x_69_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_111_ == 0)
{
v___x_93_ = v_x_69_;
v_isShared_94_ = v_isSharedCheck_111_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_value_91_);
lean_dec(v_x_69_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_111_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; size_t v_sz_105_; size_t v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
v___f_95_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_96_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_97_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_98_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_99_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_100_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_101_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___f_95_);
lean_ctor_set(v___x_102_, 1, v___f_96_);
v___x_103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___f_97_);
lean_ctor_set(v___x_103_, 2, v___f_98_);
lean_ctor_set(v___x_103_, 3, v___f_99_);
lean_ctor_set(v___x_103_, 4, v___f_100_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___f_101_);
v_sz_105_ = lean_array_size(v_value_91_);
v___x_106_ = ((size_t)0ULL);
v___x_107_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_104_, v___f_68_, v_sz_105_, v___x_106_, v_value_91_);
if (v_isShared_94_ == 0)
{
lean_ctor_set_tag(v___x_93_, 8);
lean_ctor_set(v___x_93_, 0, v___x_107_);
v___x_109_ = v___x_93_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSHeadersInit(void){
_start:
{
lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___f_115_; 
v___f_112_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSHeadersInit___lam__0), 1, 0);
v___f_113_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSHeadersInit___lam__1), 2, 1);
lean_closure_set(v___f_113_, 0, v___f_112_);
v___f_114_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSHeadersInit___lam__2), 1, 0);
v___f_115_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSHeadersInit___lam__3), 3, 2);
lean_closure_set(v___f_115_, 0, v___f_113_);
lean_closure_set(v___f_115_, 1, v___f_114_);
return v___f_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeArrayStringHeadersInit___lam__0(lean_object* v_value_116_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v_value_116_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRecordStringHeadersInit___lam__0(lean_object* v_value_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_120_, 0, v_value_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__0(lean_object* v_x_122_){
_start:
{
if (lean_obj_tag(v_x_122_) == 4)
{
lean_object* v_s_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
v_s_123_ = lean_ctor_get(v_x_122_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_122_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v_x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_s_123_);
lean_dec(v_x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set_tag(v___x_125_, 1);
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_s_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; 
lean_dec(v_x_122_);
v___x_131_ = lean_mk_string_unchecked("", 0, 0);
v___x_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__1(lean_object* v___f_133_, lean_object* v_x_134_){
_start:
{
lean_object* v___f_135_; lean_object* v___f_136_; lean_object* v___f_137_; lean_object* v___f_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___f_135_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__0), 4, 0);
v___f_136_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__1), 4, 0);
v___f_137_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__2___boxed), 4, 0);
v___f_138_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__3), 4, 0);
v___x_139_ = lean_alloc_closure((void*)(l_Except_map), 5, 1);
lean_closure_set(v___x_139_, 0, lean_box(0));
v___x_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
lean_ctor_set(v___x_140_, 1, v___f_135_);
v___x_141_ = lean_alloc_closure((void*)(l_Except_pure), 3, 1);
lean_closure_set(v___x_141_, 0, lean_box(0));
v___x_142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
lean_ctor_set(v___x_142_, 2, v___f_136_);
lean_ctor_set(v___x_142_, 3, v___f_137_);
lean_ctor_set(v___x_142_, 4, v___f_138_);
v___x_143_ = lean_alloc_closure((void*)(l_Except_bind), 5, 1);
lean_closure_set(v___x_143_, 0, lean_box(0));
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
if (lean_obj_tag(v_x_134_) == 7)
{
lean_object* v_items_145_; size_t v_sz_146_; size_t v___x_147_; lean_object* v___x_148_; 
v_items_145_ = lean_ctor_get(v_x_134_, 0);
lean_inc_ref(v_items_145_);
lean_dec_ref_known(v_x_134_, 1);
v_sz_146_ = lean_array_size(v_items_145_);
v___x_147_ = ((size_t)0ULL);
v___x_148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_144_, v___f_133_, v_sz_146_, v___x_147_, v_items_145_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_166_; 
v_a_149_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_166_ == 0)
{
v___x_151_ = v___x_148_;
v_isShared_152_ = v_isSharedCheck_166_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_148_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_166_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_153_ = lean_mk_string_unchecked("an element is not String", 24, 24);
v___x_154_ = lean_string_utf8_byte_size(v_a_149_);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_nat_dec_eq(v___x_154_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_157_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_158_ = lean_string_append(v___x_157_, v_a_149_);
lean_dec(v_a_149_);
v___x_159_ = lean_string_append(v___x_153_, v___x_158_);
lean_dec_ref(v___x_158_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_159_);
v___x_161_ = v___x_151_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
else
{
lean_object* v___x_164_; 
lean_dec(v_a_149_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_153_);
v___x_164_ = v___x_151_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_153_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
else
{
return v___x_148_;
}
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; 
lean_dec_ref_known(v___x_144_, 2);
lean_dec(v_x_134_);
lean_dec_ref(v___f_133_);
v___x_167_ = lean_mk_string_unchecked("", 0, 0);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__2(lean_object* v_x_169_){
_start:
{
lean_object* v_snd_170_; 
v_snd_170_ = lean_ctor_get(v_x_169_, 1);
lean_inc(v_snd_170_);
if (lean_obj_tag(v_snd_170_) == 4)
{
lean_object* v_fst_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_186_; 
v_fst_171_ = lean_ctor_get(v_x_169_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v_x_169_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v_x_169_, 1);
lean_dec(v_unused_187_);
v___x_173_ = v_x_169_;
v_isShared_174_ = v_isSharedCheck_186_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_fst_171_);
lean_dec(v_x_169_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_186_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v_s_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_185_; 
v_s_175_ = lean_ctor_get(v_snd_170_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v_snd_170_);
if (v_isSharedCheck_185_ == 0)
{
v___x_177_ = v_snd_170_;
v_isShared_178_ = v_isSharedCheck_185_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_s_175_);
lean_dec(v_snd_170_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_185_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 1, v_s_175_);
v___x_180_ = v___x_173_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_fst_171_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_s_175_);
v___x_180_ = v_reuseFailAlloc_184_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_182_; 
if (v_isShared_178_ == 0)
{
lean_ctor_set_tag(v___x_177_, 1);
lean_ctor_set(v___x_177_, 0, v___x_180_);
v___x_182_ = v___x_177_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
else
{
lean_object* v_fst_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec(v_snd_170_);
v_fst_188_ = lean_ctor_get(v_x_169_, 0);
lean_inc(v_fst_188_);
lean_dec_ref(v_x_169_);
v___x_189_ = lean_mk_string_unchecked("property ", 9, 9);
v___x_190_ = lean_string_append(v___x_189_, v_fst_188_);
lean_dec(v_fst_188_);
v___x_191_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
lean_dec_ref(v___x_191_);
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSHeadersInit___lam__3(lean_object* v___f_194_, lean_object* v___f_195_, lean_object* v_x_196_){
_start:
{
switch(lean_obj_tag(v_x_196_))
{
case 7:
{
lean_object* v_items_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_251_; 
lean_dec_ref(v___f_195_);
v_items_197_ = lean_ctor_get(v_x_196_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v_x_196_);
if (v_isSharedCheck_251_ == 0)
{
v___x_199_ = v_x_196_;
v_isShared_200_ = v_isSharedCheck_251_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_items_197_);
lean_dec(v_x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_251_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___f_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; size_t v_sz_211_; size_t v___x_212_; lean_object* v___x_213_; 
v___f_201_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__0), 4, 0);
v___f_202_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__1), 4, 0);
v___f_203_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__2___boxed), 4, 0);
v___f_204_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__3), 4, 0);
v___x_205_ = lean_alloc_closure((void*)(l_Except_map), 5, 1);
lean_closure_set(v___x_205_, 0, lean_box(0));
v___x_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___f_201_);
v___x_207_ = lean_alloc_closure((void*)(l_Except_pure), 3, 1);
lean_closure_set(v___x_207_, 0, lean_box(0));
v___x_208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
lean_ctor_set(v___x_208_, 2, v___f_202_);
lean_ctor_set(v___x_208_, 3, v___f_203_);
lean_ctor_set(v___x_208_, 4, v___f_204_);
v___x_209_ = lean_alloc_closure((void*)(l_Except_bind), 5, 1);
lean_closure_set(v___x_209_, 0, lean_box(0));
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v_sz_211_ = lean_array_size(v_items_197_);
v___x_212_ = ((size_t)0ULL);
v___x_213_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_210_, v___f_194_, v_sz_211_, v___x_212_, v_items_197_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_231_; 
lean_del_object(v___x_199_);
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_231_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_231_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_231_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_218_ = lean_mk_string_unchecked("an element is not Array (String)", 32, 32);
v___x_219_ = lean_string_utf8_byte_size(v_a_214_);
v___x_220_ = lean_unsigned_to_nat(0u);
v___x_221_ = lean_nat_dec_eq(v___x_219_, v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_222_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_223_ = lean_string_append(v___x_222_, v_a_214_);
lean_dec(v_a_214_);
v___x_224_ = lean_string_append(v___x_218_, v___x_223_);
lean_dec_ref(v___x_223_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_224_);
v___x_226_ = v___x_216_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_224_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
else
{
lean_object* v___x_229_; 
lean_dec(v_a_214_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_218_);
v___x_229_ = v___x_216_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_218_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
lean_del_object(v___x_199_);
v_a_232_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_239_ == 0)
{
v___x_234_ = v___x_213_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_213_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
lean_ctor_set_tag(v___x_234_, 0);
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_250_; 
v_a_240_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_250_ == 0)
{
v___x_242_ = v___x_213_;
v_isShared_243_ = v_isSharedCheck_250_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_213_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_250_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 0);
lean_ctor_set(v___x_199_, 0, v_a_240_);
v___x_245_ = v___x_199_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_240_);
v___x_245_ = v_reuseFailAlloc_249_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_object* v___x_247_; 
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v___x_245_);
v___x_247_ = v___x_242_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
}
}
case 8:
{
lean_object* v_fields_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_288_; 
lean_dec_ref(v___f_194_);
v_fields_252_ = lean_ctor_get(v_x_196_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_196_);
if (v_isSharedCheck_288_ == 0)
{
v___x_254_ = v_x_196_;
v_isShared_255_ = v_isSharedCheck_288_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_fields_252_);
lean_dec(v_x_196_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_288_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; size_t v_sz_266_; size_t v___x_267_; lean_object* v___x_268_; 
v___f_256_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__0), 4, 0);
v___f_257_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__1), 4, 0);
v___f_258_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__2___boxed), 4, 0);
v___f_259_ = lean_alloc_closure((void*)(l_Except_instMonad___redArg___lam__3), 4, 0);
v___x_260_ = lean_alloc_closure((void*)(l_Except_map), 5, 1);
lean_closure_set(v___x_260_, 0, lean_box(0));
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___f_256_);
v___x_262_ = lean_alloc_closure((void*)(l_Except_pure), 3, 1);
lean_closure_set(v___x_262_, 0, lean_box(0));
v___x_263_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_263_, 0, v___x_261_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
lean_ctor_set(v___x_263_, 2, v___f_257_);
lean_ctor_set(v___x_263_, 3, v___f_258_);
lean_ctor_set(v___x_263_, 4, v___f_259_);
v___x_264_ = lean_alloc_closure((void*)(l_Except_bind), 5, 1);
lean_closure_set(v___x_264_, 0, lean_box(0));
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v_sz_266_ = lean_array_size(v_fields_252_);
v___x_267_ = ((size_t)0ULL);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_265_, v___f_195_, v_sz_266_, v___x_267_, v_fields_252_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_del_object(v___x_254_);
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_287_; 
v_a_277_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_287_ == 0)
{
v___x_279_ = v___x_268_;
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_268_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_287_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_255_ == 0)
{
lean_ctor_set_tag(v___x_254_, 1);
lean_ctor_set(v___x_254_, 0, v_a_277_);
v___x_282_ = v___x_254_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_286_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_282_);
v___x_284_ = v___x_279_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v_x_196_);
lean_dec_ref(v___f_195_);
lean_dec_ref(v___f_194_);
v___x_289_ = lean_mk_string_unchecked("", 0, 0);
v___x_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
return v___x_290_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSHeadersInit(void){
_start:
{
lean_object* v___f_291_; lean_object* v___f_292_; lean_object* v___f_293_; lean_object* v___f_294_; lean_object* v___x_295_; uint8_t v___x_296_; lean_object* v___x_297_; 
v___f_291_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSHeadersInit___lam__0), 1, 0);
v___f_292_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSHeadersInit___lam__1), 2, 1);
lean_closure_set(v___f_292_, 0, v___f_291_);
v___f_293_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSHeadersInit___lam__2), 1, 0);
v___f_294_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSHeadersInit___lam__3), 3, 2);
lean_closure_set(v___f_294_, 0, v___f_292_);
lean_closure_set(v___f_294_, 1, v___f_293_);
v___x_295_ = lean_mk_string_unchecked("Lasm.JS.Web.HeadersInit", 23, 23);
v___x_296_ = 0;
v___x_297_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_297_, 0, v___f_294_);
lean_ctor_set(v___x_297_, 1, v___x_295_);
lean_ctor_set_uint8(v___x_297_, sizeof(void*)*2, v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorIdx(lean_object* v_x_298_){
_start:
{
if (lean_obj_tag(v_x_298_) == 0)
{
lean_object* v___x_299_; 
v___x_299_ = lean_unsigned_to_nat(0u);
return v___x_299_;
}
else
{
lean_object* v___x_300_; 
v___x_300_ = lean_unsigned_to_nat(1u);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorIdx___boxed(lean_object* v_x_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lasm_JS_Web_RequestInfo_ctorIdx(v_x_301_);
lean_dec_ref(v_x_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(lean_object* v_t_303_, lean_object* v_k_304_){
_start:
{
if (lean_obj_tag(v_t_303_) == 0)
{
lean_object* v_value_305_; lean_object* v___x_306_; 
v_value_305_ = lean_ctor_get(v_t_303_, 0);
lean_inc(v_value_305_);
lean_dec_ref_known(v_t_303_, 1);
v___x_306_ = lean_apply_1(v_k_304_, v_value_305_);
return v___x_306_;
}
else
{
lean_object* v_value_307_; lean_object* v___x_308_; 
v_value_307_ = lean_ctor_get(v_t_303_, 0);
lean_inc_ref(v_value_307_);
lean_dec_ref_known(v_t_303_, 1);
v___x_308_ = lean_apply_1(v_k_304_, v_value_307_);
return v___x_308_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorElim(lean_object* v_motive_309_, lean_object* v_ctorIdx_310_, lean_object* v_t_311_, lean_object* v_h_312_, lean_object* v_k_313_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(v_t_311_, v_k_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_ctorElim___boxed(lean_object* v_motive_315_, lean_object* v_ctorIdx_316_, lean_object* v_t_317_, lean_object* v_h_318_, lean_object* v_k_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_Web_RequestInfo_ctorElim(v_motive_315_, v_ctorIdx_316_, v_t_317_, v_h_318_, v_k_319_);
lean_dec(v_ctorIdx_316_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_request_elim___redArg(lean_object* v_t_321_, lean_object* v_request_322_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(v_t_321_, v_request_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_request_elim(lean_object* v_motive_324_, lean_object* v_t_325_, lean_object* v_h_326_, lean_object* v_request_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(v_t_325_, v_request_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_usvString_elim___redArg(lean_object* v_t_329_, lean_object* v_usvString_330_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(v_t_329_, v_usvString_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_RequestInfo_usvString_elim(lean_object* v_motive_332_, lean_object* v_t_333_, lean_object* v_h_334_, lean_object* v_usvString_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lasm_JS_Web_RequestInfo_ctorElim___redArg(v_t_333_, v_usvString_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRequestInfo___lam__0(lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_337_) == 0)
{
lean_object* v_value_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_value_338_ = lean_ctor_get(v_x_337_, 0);
lean_inc(v_value_338_);
lean_dec_ref_known(v_x_337_, 1);
v___x_339_ = lean_mk_string_unchecked("", 0, 0);
v___x_340_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_340_, 0, v_value_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
return v___x_340_;
}
else
{
lean_object* v_value_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_value_341_ = lean_ctor_get(v_x_337_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_337_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v_x_337_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_value_341_);
lean_dec(v_x_337_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 4);
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_value_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeRequestRequestInfo___lam__0(lean_object* v_value_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v_value_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringRequestInfo___lam__0(lean_object* v_value_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_354_, 0, v_value_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorIdx(lean_object* v_x_356_){
_start:
{
switch(lean_obj_tag(v_x_356_))
{
case 0:
{
lean_object* v___x_357_; 
v___x_357_ = lean_unsigned_to_nat(0u);
return v___x_357_;
}
case 1:
{
lean_object* v___x_358_; 
v___x_358_ = lean_unsigned_to_nat(1u);
return v___x_358_;
}
case 2:
{
lean_object* v___x_359_; 
v___x_359_ = lean_unsigned_to_nat(2u);
return v___x_359_;
}
case 3:
{
lean_object* v___x_360_; 
v___x_360_ = lean_unsigned_to_nat(3u);
return v___x_360_;
}
case 4:
{
lean_object* v___x_361_; 
v___x_361_ = lean_unsigned_to_nat(4u);
return v___x_361_;
}
default: 
{
lean_object* v___x_362_; 
v___x_362_ = lean_unsigned_to_nat(5u);
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorIdx___boxed(lean_object* v_x_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lasm_JS_Web_BodyInit_ctorIdx(v_x_363_);
lean_dec_ref(v_x_363_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorElim___redArg(lean_object* v_t_365_, lean_object* v_k_366_){
_start:
{
switch(lean_obj_tag(v_t_365_))
{
case 2:
{
lean_object* v_value_367_; lean_object* v___x_368_; 
v_value_367_ = lean_ctor_get(v_t_365_, 0);
lean_inc_ref(v_value_367_);
lean_dec_ref_known(v_t_365_, 1);
v___x_368_ = lean_apply_1(v_k_366_, v_value_367_);
return v___x_368_;
}
case 5:
{
lean_object* v_value_369_; lean_object* v___x_370_; 
v_value_369_ = lean_ctor_get(v_t_365_, 0);
lean_inc_ref(v_value_369_);
lean_dec_ref_known(v_t_365_, 1);
v___x_370_ = lean_apply_1(v_k_366_, v_value_369_);
return v___x_370_;
}
default: 
{
lean_object* v_value_371_; lean_object* v___x_372_; 
v_value_371_ = lean_ctor_get(v_t_365_, 0);
lean_inc(v_value_371_);
lean_dec_ref(v_t_365_);
v___x_372_ = lean_apply_1(v_k_366_, v_value_371_);
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorElim(lean_object* v_motive_373_, lean_object* v_ctorIdx_374_, lean_object* v_t_375_, lean_object* v_h_376_, lean_object* v_k_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_375_, v_k_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_ctorElim___boxed(lean_object* v_motive_379_, lean_object* v_ctorIdx_380_, lean_object* v_t_381_, lean_object* v_h_382_, lean_object* v_k_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lasm_JS_Web_BodyInit_ctorElim(v_motive_379_, v_ctorIdx_380_, v_t_381_, v_h_382_, v_k_383_);
lean_dec(v_ctorIdx_380_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_readableStream_elim___redArg(lean_object* v_t_385_, lean_object* v_readableStream_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_385_, v_readableStream_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_readableStream_elim(lean_object* v_motive_388_, lean_object* v_t_389_, lean_object* v_h_390_, lean_object* v_readableStream_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_389_, v_readableStream_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_blob_elim___redArg(lean_object* v_t_393_, lean_object* v_blob_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_393_, v_blob_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_blob_elim(lean_object* v_motive_396_, lean_object* v_t_397_, lean_object* v_h_398_, lean_object* v_blob_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_397_, v_blob_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_bufferSource_elim___redArg(lean_object* v_t_401_, lean_object* v_bufferSource_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_401_, v_bufferSource_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_bufferSource_elim(lean_object* v_motive_404_, lean_object* v_t_405_, lean_object* v_h_406_, lean_object* v_bufferSource_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_405_, v_bufferSource_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_formData_elim___redArg(lean_object* v_t_409_, lean_object* v_formData_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_409_, v_formData_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_formData_elim(lean_object* v_motive_412_, lean_object* v_t_413_, lean_object* v_h_414_, lean_object* v_formData_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_413_, v_formData_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_urlSearchParams_elim___redArg(lean_object* v_t_417_, lean_object* v_urlSearchParams_418_){
_start:
{
lean_object* v___x_419_; 
v___x_419_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_417_, v_urlSearchParams_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_urlSearchParams_elim(lean_object* v_motive_420_, lean_object* v_t_421_, lean_object* v_h_422_, lean_object* v_urlSearchParams_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_421_, v_urlSearchParams_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_usvString_elim___redArg(lean_object* v_t_425_, lean_object* v_usvString_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_425_, v_usvString_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BodyInit_usvString_elim(lean_object* v_motive_428_, lean_object* v_t_429_, lean_object* v_h_430_, lean_object* v_usvString_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lasm_JS_Web_BodyInit_ctorElim___redArg(v_t_429_, v_usvString_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBodyInit___lam__0(lean_object* v_x_433_){
_start:
{
switch(lean_obj_tag(v_x_433_))
{
case 2:
{
lean_object* v_value_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_value_434_ = lean_ctor_get(v_x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v_x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v_x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_value_434_);
lean_dec(v_x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set_tag(v___x_436_, 6);
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_value_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
case 5:
{
lean_object* v_value_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
v_value_442_ = lean_ctor_get(v_x_433_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v_x_433_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v_x_433_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_value_442_);
lean_dec(v_x_433_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
lean_ctor_set_tag(v___x_444_, 4);
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_value_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
default: 
{
lean_object* v_value_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_value_450_ = lean_ctor_get(v_x_433_, 0);
lean_inc(v_value_450_);
lean_dec_ref(v_x_433_);
v___x_451_ = lean_mk_string_unchecked("", 0, 0);
v___x_452_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_452_, 0, v_value_450_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
return v___x_452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeReadableStreamBodyInit___lam__0(lean_object* v_value_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_455_, 0, v_value_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBlobBodyInit___lam__0(lean_object* v_value_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v_value_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeByteArrayBodyInit___lam__0(lean_object* v_value_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_461_, 0, v_value_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeFormDataBodyInit___lam__0(lean_object* v_value_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_464_, 0, v_value_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeURLSearchParamsBodyInit___lam__0(lean_object* v_value_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_467_, 0, v_value_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringBodyInit___lam__0(lean_object* v_value_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_470_, 0, v_value_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRequestInit___lam__0(lean_object* v___f_472_, lean_object* v___x_473_, lean_object* v___f_474_, lean_object* v___f_475_, lean_object* v___f_476_, lean_object* v___f_477_, lean_object* v___f_478_, lean_object* v___f_479_, lean_object* v___f_480_, lean_object* v___f_481_, lean_object* v___f_482_, lean_object* v___f_483_, lean_object* v___f_484_, lean_object* v___x_485_, lean_object* v_d_486_){
_start:
{
lean_object* v_method_487_; lean_object* v_headers_488_; lean_object* v_body_489_; lean_object* v_referrer_490_; lean_object* v_referrerPolicy_491_; lean_object* v_mode_492_; lean_object* v_credentials_493_; lean_object* v_cache_494_; lean_object* v_redirect_495_; lean_object* v_integrity_496_; lean_object* v_keepalive_497_; lean_object* v_signal_498_; lean_object* v_duplex_499_; lean_object* v_priority_500_; lean_object* v_window_501_; lean_object* v_targetAddressSpace_502_; lean_object* v_privateToken_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v_method_487_ = lean_ctor_get(v_d_486_, 0);
lean_inc(v_method_487_);
v_headers_488_ = lean_ctor_get(v_d_486_, 1);
lean_inc(v_headers_488_);
v_body_489_ = lean_ctor_get(v_d_486_, 2);
lean_inc(v_body_489_);
v_referrer_490_ = lean_ctor_get(v_d_486_, 3);
lean_inc(v_referrer_490_);
v_referrerPolicy_491_ = lean_ctor_get(v_d_486_, 4);
lean_inc(v_referrerPolicy_491_);
v_mode_492_ = lean_ctor_get(v_d_486_, 5);
lean_inc(v_mode_492_);
v_credentials_493_ = lean_ctor_get(v_d_486_, 6);
lean_inc(v_credentials_493_);
v_cache_494_ = lean_ctor_get(v_d_486_, 7);
lean_inc(v_cache_494_);
v_redirect_495_ = lean_ctor_get(v_d_486_, 8);
lean_inc(v_redirect_495_);
v_integrity_496_ = lean_ctor_get(v_d_486_, 9);
lean_inc(v_integrity_496_);
v_keepalive_497_ = lean_ctor_get(v_d_486_, 10);
lean_inc(v_keepalive_497_);
v_signal_498_ = lean_ctor_get(v_d_486_, 11);
lean_inc(v_signal_498_);
v_duplex_499_ = lean_ctor_get(v_d_486_, 12);
lean_inc(v_duplex_499_);
v_priority_500_ = lean_ctor_get(v_d_486_, 13);
lean_inc(v_priority_500_);
v_window_501_ = lean_ctor_get(v_d_486_, 14);
lean_inc(v_window_501_);
v_targetAddressSpace_502_ = lean_ctor_get(v_d_486_, 15);
lean_inc(v_targetAddressSpace_502_);
v_privateToken_503_ = lean_ctor_get(v_d_486_, 16);
lean_inc(v_privateToken_503_);
lean_dec_ref(v_d_486_);
v___x_504_ = lean_mk_string_unchecked("method", 6, 6);
lean_inc_ref_n(v___f_472_, 2);
v___x_505_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_472_, v_method_487_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
v___x_507_ = lean_mk_string_unchecked("headers", 7, 7);
v___x_508_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_473_, v_headers_488_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
v___x_510_ = lean_mk_string_unchecked("body", 4, 4);
v___x_511_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_474_, v_body_489_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = lean_mk_string_unchecked("referrer", 8, 8);
v___x_514_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_472_, v_referrer_490_);
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = lean_mk_string_unchecked("referrerPolicy", 14, 14);
v___x_517_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_475_, v_referrerPolicy_491_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_516_);
lean_ctor_set(v___x_518_, 1, v___x_517_);
v___x_519_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_520_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_476_, v_mode_492_);
v___x_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_mk_string_unchecked("credentials", 11, 11);
v___x_523_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_477_, v_credentials_493_);
v___x_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
v___x_525_ = lean_mk_string_unchecked("cache", 5, 5);
v___x_526_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_478_, v_cache_494_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_525_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
v___x_528_ = lean_mk_string_unchecked("redirect", 8, 8);
v___x_529_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_479_, v_redirect_495_);
v___x_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_mk_string_unchecked("integrity", 9, 9);
v___x_532_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_472_, v_integrity_496_);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_mk_string_unchecked("keepalive", 9, 9);
v___x_535_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_480_, v_keepalive_497_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_538_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_481_, v_signal_498_);
v___x_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = lean_mk_string_unchecked("duplex", 6, 6);
v___x_541_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_482_, v_duplex_499_);
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_540_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = lean_mk_string_unchecked("priority", 8, 8);
v___x_544_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_483_, v_priority_500_);
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_mk_string_unchecked("window", 6, 6);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v_window_501_);
v___x_548_ = lean_mk_string_unchecked("targetAddressSpace", 18, 18);
v___x_549_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_484_, v_targetAddressSpace_502_);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_548_);
lean_ctor_set(v___x_550_, 1, v___x_549_);
v___x_551_ = lean_mk_string_unchecked("privateToken", 12, 12);
v___x_552_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_485_, v_privateToken_503_);
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = lean_unsigned_to_nat(17u);
v___x_555_ = lean_mk_empty_array_with_capacity(v___x_554_);
v___x_556_ = lean_array_push(v___x_555_, v___x_506_);
v___x_557_ = lean_array_push(v___x_556_, v___x_509_);
v___x_558_ = lean_array_push(v___x_557_, v___x_512_);
v___x_559_ = lean_array_push(v___x_558_, v___x_515_);
v___x_560_ = lean_array_push(v___x_559_, v___x_518_);
v___x_561_ = lean_array_push(v___x_560_, v___x_521_);
v___x_562_ = lean_array_push(v___x_561_, v___x_524_);
v___x_563_ = lean_array_push(v___x_562_, v___x_527_);
v___x_564_ = lean_array_push(v___x_563_, v___x_530_);
v___x_565_ = lean_array_push(v___x_564_, v___x_533_);
v___x_566_ = lean_array_push(v___x_565_, v___x_536_);
v___x_567_ = lean_array_push(v___x_566_, v___x_539_);
v___x_568_ = lean_array_push(v___x_567_, v___x_542_);
v___x_569_ = lean_array_push(v___x_568_, v___x_545_);
v___x_570_ = lean_array_push(v___x_569_, v___x_547_);
v___x_571_ = lean_array_push(v___x_570_, v___x_550_);
v___x_572_ = lean_array_push(v___x_571_, v___x_553_);
v___x_573_ = l_Lasm_JS_Web_Internal_fields(v___x_572_);
lean_dec_ref(v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSRequestInit(void){
_start:
{
lean_object* v___f_574_; lean_object* v___x_575_; lean_object* v___f_576_; lean_object* v___f_577_; lean_object* v___f_578_; lean_object* v___f_579_; lean_object* v___f_580_; lean_object* v___f_581_; lean_object* v___x_582_; lean_object* v___f_583_; 
v___f_574_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_575_ = l_Lasm_JS_Web_instToJSHeadersInit;
v___f_576_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSBodyInit___lam__0), 1, 0);
v___f_577_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSReferrerPolicy___lam__0), 1, 0);
v___f_578_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSRequestCredentials___lam__0), 1, 0);
v___f_579_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_580_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_581_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSIPAddressSpace___lam__0), 1, 0);
v___x_582_ = l_Lasm_JS_Web_instToJSPrivateToken;
lean_inc_ref_n(v___f_578_, 5);
v___f_583_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSRequestInit___lam__0), 15, 14);
lean_closure_set(v___f_583_, 0, v___f_574_);
lean_closure_set(v___f_583_, 1, v___x_575_);
lean_closure_set(v___f_583_, 2, v___f_576_);
lean_closure_set(v___f_583_, 3, v___f_577_);
lean_closure_set(v___f_583_, 4, v___f_578_);
lean_closure_set(v___f_583_, 5, v___f_578_);
lean_closure_set(v___f_583_, 6, v___f_578_);
lean_closure_set(v___f_583_, 7, v___f_578_);
lean_closure_set(v___f_583_, 8, v___f_579_);
lean_closure_set(v___f_583_, 9, v___f_580_);
lean_closure_set(v___f_583_, 10, v___f_578_);
lean_closure_set(v___f_583_, 11, v___f_578_);
lean_closure_set(v___f_583_, 12, v___f_581_);
lean_closure_set(v___f_583_, 13, v___x_582_);
return v___f_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSResponseInit___lam__0(lean_object* v___f_584_, lean_object* v___f_585_, lean_object* v___x_586_, lean_object* v_d_587_){
_start:
{
lean_object* v_status_588_; lean_object* v_statusText_589_; lean_object* v_headers_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v_status_588_ = lean_ctor_get(v_d_587_, 0);
lean_inc(v_status_588_);
v_statusText_589_ = lean_ctor_get(v_d_587_, 1);
lean_inc(v_statusText_589_);
v_headers_590_ = lean_ctor_get(v_d_587_, 2);
lean_inc(v_headers_590_);
lean_dec_ref(v_d_587_);
v___x_591_ = lean_mk_string_unchecked("status", 6, 6);
v___x_592_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_584_, v_status_588_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_mk_string_unchecked("statusText", 10, 10);
v___x_595_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_585_, v_statusText_589_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_mk_string_unchecked("headers", 7, 7);
v___x_598_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_586_, v_headers_590_);
v___x_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_597_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = lean_unsigned_to_nat(3u);
v___x_601_ = lean_mk_empty_array_with_capacity(v___x_600_);
v___x_602_ = lean_array_push(v___x_601_, v___x_593_);
v___x_603_ = lean_array_push(v___x_602_, v___x_596_);
v___x_604_ = lean_array_push(v___x_603_, v___x_599_);
v___x_605_ = l_Lasm_JS_Web_Internal_fields(v___x_604_);
lean_dec_ref(v___x_604_);
return v___x_605_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSResponseInit(void){
_start:
{
lean_object* v___f_606_; lean_object* v___f_607_; lean_object* v___x_608_; lean_object* v___f_609_; 
v___f_606_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_607_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_608_ = l_Lasm_JS_Web_instToJSHeadersInit;
v___f_609_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSResponseInit___lam__0), 4, 3);
lean_closure_set(v___f_609_, 0, v___f_606_);
lean_closure_set(v___f_609_, 1, v___f_607_);
lean_closure_set(v___f_609_, 2, v___x_608_);
return v___f_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDeferredRequestInit___lam__0(lean_object* v___f_610_, lean_object* v___x_611_, lean_object* v___f_612_, lean_object* v___f_613_, lean_object* v___f_614_, lean_object* v___f_615_, lean_object* v___f_616_, lean_object* v___f_617_, lean_object* v___f_618_, lean_object* v___f_619_, lean_object* v___f_620_, lean_object* v___f_621_, lean_object* v___f_622_, lean_object* v___x_623_, lean_object* v___f_624_, lean_object* v_d_625_){
_start:
{
lean_object* v_method_626_; lean_object* v_headers_627_; lean_object* v_body_628_; lean_object* v_referrer_629_; lean_object* v_referrerPolicy_630_; lean_object* v_mode_631_; lean_object* v_credentials_632_; lean_object* v_cache_633_; lean_object* v_redirect_634_; lean_object* v_integrity_635_; lean_object* v_keepalive_636_; lean_object* v_signal_637_; lean_object* v_duplex_638_; lean_object* v_priority_639_; lean_object* v_window_640_; lean_object* v_targetAddressSpace_641_; lean_object* v_privateToken_642_; lean_object* v_activateAfter_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_method_626_ = lean_ctor_get(v_d_625_, 0);
lean_inc(v_method_626_);
v_headers_627_ = lean_ctor_get(v_d_625_, 1);
lean_inc(v_headers_627_);
v_body_628_ = lean_ctor_get(v_d_625_, 2);
lean_inc(v_body_628_);
v_referrer_629_ = lean_ctor_get(v_d_625_, 3);
lean_inc(v_referrer_629_);
v_referrerPolicy_630_ = lean_ctor_get(v_d_625_, 4);
lean_inc(v_referrerPolicy_630_);
v_mode_631_ = lean_ctor_get(v_d_625_, 5);
lean_inc(v_mode_631_);
v_credentials_632_ = lean_ctor_get(v_d_625_, 6);
lean_inc(v_credentials_632_);
v_cache_633_ = lean_ctor_get(v_d_625_, 7);
lean_inc(v_cache_633_);
v_redirect_634_ = lean_ctor_get(v_d_625_, 8);
lean_inc(v_redirect_634_);
v_integrity_635_ = lean_ctor_get(v_d_625_, 9);
lean_inc(v_integrity_635_);
v_keepalive_636_ = lean_ctor_get(v_d_625_, 10);
lean_inc(v_keepalive_636_);
v_signal_637_ = lean_ctor_get(v_d_625_, 11);
lean_inc(v_signal_637_);
v_duplex_638_ = lean_ctor_get(v_d_625_, 12);
lean_inc(v_duplex_638_);
v_priority_639_ = lean_ctor_get(v_d_625_, 13);
lean_inc(v_priority_639_);
v_window_640_ = lean_ctor_get(v_d_625_, 14);
lean_inc(v_window_640_);
v_targetAddressSpace_641_ = lean_ctor_get(v_d_625_, 15);
lean_inc(v_targetAddressSpace_641_);
v_privateToken_642_ = lean_ctor_get(v_d_625_, 16);
lean_inc(v_privateToken_642_);
v_activateAfter_643_ = lean_ctor_get(v_d_625_, 17);
lean_inc(v_activateAfter_643_);
lean_dec_ref(v_d_625_);
v___x_644_ = lean_mk_string_unchecked("method", 6, 6);
lean_inc_ref_n(v___f_610_, 2);
v___x_645_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_610_, v_method_626_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_mk_string_unchecked("headers", 7, 7);
v___x_648_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_611_, v_headers_627_);
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_647_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
v___x_650_ = lean_mk_string_unchecked("body", 4, 4);
v___x_651_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_612_, v_body_628_);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_650_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_mk_string_unchecked("referrer", 8, 8);
v___x_654_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_610_, v_referrer_629_);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_653_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = lean_mk_string_unchecked("referrerPolicy", 14, 14);
v___x_657_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_613_, v_referrerPolicy_630_);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_656_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_660_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_614_, v_mode_631_);
v___x_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = lean_mk_string_unchecked("credentials", 11, 11);
v___x_663_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_615_, v_credentials_632_);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_662_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_mk_string_unchecked("cache", 5, 5);
v___x_666_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_616_, v_cache_633_);
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_mk_string_unchecked("redirect", 8, 8);
v___x_669_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_617_, v_redirect_634_);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = lean_mk_string_unchecked("integrity", 9, 9);
v___x_672_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_610_, v_integrity_635_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = lean_mk_string_unchecked("keepalive", 9, 9);
v___x_675_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_618_, v_keepalive_636_);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_678_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_619_, v_signal_637_);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_677_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v___x_680_ = lean_mk_string_unchecked("duplex", 6, 6);
v___x_681_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_620_, v_duplex_638_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v___x_680_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = lean_mk_string_unchecked("priority", 8, 8);
v___x_684_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_621_, v_priority_639_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_683_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
v___x_686_ = lean_mk_string_unchecked("window", 6, 6);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v_window_640_);
v___x_688_ = lean_mk_string_unchecked("targetAddressSpace", 18, 18);
v___x_689_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_622_, v_targetAddressSpace_641_);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_mk_string_unchecked("privateToken", 12, 12);
v___x_692_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_623_, v_privateToken_642_);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_mk_string_unchecked("activateAfter", 13, 13);
v___x_695_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_624_, v_activateAfter_643_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = lean_unsigned_to_nat(18u);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_697_);
v___x_699_ = lean_array_push(v___x_698_, v___x_646_);
v___x_700_ = lean_array_push(v___x_699_, v___x_649_);
v___x_701_ = lean_array_push(v___x_700_, v___x_652_);
v___x_702_ = lean_array_push(v___x_701_, v___x_655_);
v___x_703_ = lean_array_push(v___x_702_, v___x_658_);
v___x_704_ = lean_array_push(v___x_703_, v___x_661_);
v___x_705_ = lean_array_push(v___x_704_, v___x_664_);
v___x_706_ = lean_array_push(v___x_705_, v___x_667_);
v___x_707_ = lean_array_push(v___x_706_, v___x_670_);
v___x_708_ = lean_array_push(v___x_707_, v___x_673_);
v___x_709_ = lean_array_push(v___x_708_, v___x_676_);
v___x_710_ = lean_array_push(v___x_709_, v___x_679_);
v___x_711_ = lean_array_push(v___x_710_, v___x_682_);
v___x_712_ = lean_array_push(v___x_711_, v___x_685_);
v___x_713_ = lean_array_push(v___x_712_, v___x_687_);
v___x_714_ = lean_array_push(v___x_713_, v___x_690_);
v___x_715_ = lean_array_push(v___x_714_, v___x_693_);
v___x_716_ = lean_array_push(v___x_715_, v___x_696_);
v___x_717_ = l_Lasm_JS_Web_Internal_fields(v___x_716_);
lean_dec_ref(v___x_716_);
return v___x_717_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSDeferredRequestInit(void){
_start:
{
lean_object* v___f_718_; lean_object* v___x_719_; lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___f_722_; lean_object* v___f_723_; lean_object* v___f_724_; lean_object* v___f_725_; lean_object* v___x_726_; lean_object* v___f_727_; lean_object* v___f_728_; 
v___f_718_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_719_ = l_Lasm_JS_Web_instToJSHeadersInit;
v___f_720_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSBodyInit___lam__0), 1, 0);
v___f_721_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSReferrerPolicy___lam__0), 1, 0);
v___f_722_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSRequestCredentials___lam__0), 1, 0);
v___f_723_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_724_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_725_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSIPAddressSpace___lam__0), 1, 0);
v___x_726_ = l_Lasm_JS_Web_instToJSPrivateToken;
v___f_727_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
lean_inc_ref_n(v___f_722_, 5);
v___f_728_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSDeferredRequestInit___lam__0), 16, 15);
lean_closure_set(v___f_728_, 0, v___f_718_);
lean_closure_set(v___f_728_, 1, v___x_719_);
lean_closure_set(v___f_728_, 2, v___f_720_);
lean_closure_set(v___f_728_, 3, v___f_721_);
lean_closure_set(v___f_728_, 4, v___f_722_);
lean_closure_set(v___f_728_, 5, v___f_722_);
lean_closure_set(v___f_728_, 6, v___f_722_);
lean_closure_set(v___f_728_, 7, v___f_722_);
lean_closure_set(v___f_728_, 8, v___f_723_);
lean_closure_set(v___f_728_, 9, v___f_724_);
lean_closure_set(v___f_728_, 10, v___f_722_);
lean_closure_set(v___f_728_, 11, v___f_722_);
lean_closure_set(v___f_728_, 12, v___f_725_);
lean_closure_set(v___f_728_, 13, v___x_726_);
lean_closure_set(v___f_728_, 14, v___f_727_);
return v___f_728_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Html(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_FileAPI(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_LocalNetworkAccess(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_ReferrerPolicy(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Xhr(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_TrustTokenApi(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_FileAPI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_LocalNetworkAccess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_ReferrerPolicy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Xhr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_TrustTokenApi(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSHeadersInit = _init_l_Lasm_JS_Web_instToJSHeadersInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSHeadersInit);
l_Lasm_JS_Web_instFromJSHeadersInit = _init_l_Lasm_JS_Web_instFromJSHeadersInit();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSHeadersInit);
l_Lasm_JS_Web_instToJSRequestInit = _init_l_Lasm_JS_Web_instToJSRequestInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSRequestInit);
l_Lasm_JS_Web_instToJSResponseInit = _init_l_Lasm_JS_Web_instToJSResponseInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSResponseInit);
l_Lasm_JS_Web_instToJSDeferredRequestInit = _init_l_Lasm_JS_Web_instToJSDeferredRequestInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSDeferredRequestInit);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
