// Lean compiler output
// Module: Lasm.JS.Node.Process
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Url public import Lasm.JS.Web.Webidl public import Lasm.JS.Web.MediacaptureStreams public import Lasm.JS.Node.Events public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Net
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
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSNetServerOrSocket_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket = (const lean_object*)&l_Lasm_JS_Node_instToJSNetServerOrSocket_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket = (const lean_object*)&l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket = (const lean_object*)&l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSObjectOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instToJSObjectOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0(lean_object* v___f_1_, lean_object* v___f_2_, lean_object* v_d_3_){
_start:
{
lean_object* v_type_4_; lean_object* v_code_5_; lean_object* v_ctor_6_; lean_object* v_detail_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v_type_4_ = lean_ctor_get(v_d_3_, 0);
lean_inc(v_type_4_);
v_code_5_ = lean_ctor_get(v_d_3_, 1);
lean_inc(v_code_5_);
v_ctor_6_ = lean_ctor_get(v_d_3_, 2);
lean_inc(v_ctor_6_);
v_detail_7_ = lean_ctor_get(v_d_3_, 3);
lean_inc(v_detail_7_);
lean_dec_ref(v_d_3_);
v___x_8_ = lean_mk_string_unchecked("type", 4, 4);
lean_inc_ref_n(v___f_1_, 2);
v___x_9_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_type_4_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_8_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = lean_mk_string_unchecked("code", 4, 4);
v___x_12_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_code_5_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_mk_string_unchecked("ctor", 4, 4);
v___x_15_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2_, v_ctor_6_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_mk_string_unchecked("detail", 6, 6);
v___x_18_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_detail_7_);
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
static lean_object* _init_l_Lasm_JS_Node_instToJSProcessEmitWarningOptions(void){
_start:
{
lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___f_29_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_28_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_29_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0), 3, 2);
lean_closure_set(v___f_29_, 0, v___f_27_);
lean_closure_set(v___f_29_, 1, v___f_28_);
return v___f_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object* v_x_30_){
_start:
{
if (lean_obj_tag(v_x_30_) == 0)
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(0u);
return v___x_31_;
}
else
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(1u);
return v___x_32_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object* v_x_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(v_x_33_);
lean_dec_ref(v_x_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_35_, lean_object* v_k_36_){
_start:
{
if (lean_obj_tag(v_t_35_) == 0)
{
lean_object* v_value_37_; lean_object* v___x_38_; 
v_value_37_ = lean_ctor_get(v_t_35_, 0);
lean_inc_ref(v_value_37_);
lean_dec_ref_known(v_t_35_, 1);
v___x_38_ = lean_apply_1(v_k_36_, v_value_37_);
return v___x_38_;
}
else
{
double v_value_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v_value_39_ = lean_ctor_get_float(v_t_35_, 0);
lean_dec_ref_known(v_t_35_, 0);
v___x_40_ = lean_box_float(v_value_39_);
v___x_41_ = lean_apply_1(v_k_36_, v___x_40_);
return v___x_41_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object* v_motive_42_, lean_object* v_ctorIdx_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_k_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_44_, v_k_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(v_motive_48_, v_ctorIdx_49_, v_t_50_, v_h_51_, v_k_52_);
lean_dec(v_ctorIdx_49_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_54_, lean_object* v_domString_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_54_, v_domString_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_domString_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_58_, v_domString_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_62_, lean_object* v_double_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_62_, v_double_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_double_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_66_, v_double_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
lean_object* v_value_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_78_; 
v_value_71_ = lean_ctor_get(v_x_70_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_78_ == 0)
{
v___x_73_ = v_x_70_;
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_value_71_);
lean_dec(v_x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_76_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 4);
v___x_76_ = v___x_73_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_value_71_);
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
double v_value_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_86_; 
v_value_79_ = lean_ctor_get_float(v_x_70_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v_x_70_);
if (v_isSharedCheck_86_ == 0)
{
v___x_81_ = v_x_70_;
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
else
{
lean_dec(v_x_70_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
if (v_isShared_82_ == 0)
{
lean_ctor_set_tag(v___x_81_, 3);
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_85_, 0, v_value_79_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v_value_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double v_value_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_92_, 0, v_value_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_93_){
_start:
{
double v_value_boxed_94_; lean_object* v_res_95_; 
v_value_boxed_94_ = lean_unbox_float(v_value_93_);
lean_dec_ref(v_value_93_);
v_res_95_ = l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx(lean_object* v_x_97_){
_start:
{
switch(lean_obj_tag(v_x_97_))
{
case 0:
{
lean_object* v___x_98_; 
v___x_98_ = lean_unsigned_to_nat(0u);
return v___x_98_;
}
case 1:
{
lean_object* v___x_99_; 
v___x_99_ = lean_unsigned_to_nat(1u);
return v___x_99_;
}
default: 
{
lean_object* v___x_100_; 
v___x_100_ = lean_unsigned_to_nat(2u);
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx___boxed(lean_object* v_x_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx(v_x_101_);
lean_dec_ref(v_x_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(lean_object* v_t_103_, lean_object* v_k_104_){
_start:
{
if (lean_obj_tag(v_t_103_) == 1)
{
lean_object* v_value_105_; lean_object* v___x_106_; 
v_value_105_ = lean_ctor_get(v_t_103_, 0);
lean_inc(v_value_105_);
lean_dec_ref_known(v_t_103_, 1);
v___x_106_ = lean_apply_1(v_k_104_, v_value_105_);
return v___x_106_;
}
else
{
lean_object* v_value_107_; lean_object* v___x_108_; 
v_value_107_ = lean_ctor_get(v_t_103_, 0);
lean_inc_ref(v_value_107_);
lean_dec_ref(v_t_103_);
v___x_108_ = lean_apply_1(v_k_104_, v_value_107_);
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim(lean_object* v_motive_109_, lean_object* v_ctorIdx_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_k_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_111_, v_k_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___boxed(lean_object* v_motive_115_, lean_object* v_ctorIdx_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_k_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim(v_motive_115_, v_ctorIdx_116_, v_t_117_, v_h_118_, v_k_119_);
lean_dec(v_ctorIdx_116_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim___redArg(lean_object* v_t_121_, lean_object* v_domString_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_121_, v_domString_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_domString_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_125_, v_domString_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim___redArg(lean_object* v_t_129_, lean_object* v_url_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_129_, v_url_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_url_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_133_, v_url_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_137_, lean_object* v_uint8Array_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_137_, v_uint8Array_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim(lean_object* v_motive_140_, lean_object* v_t_141_, lean_object* v_h_142_, lean_object* v_uint8Array_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_141_, v_uint8Array_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0(lean_object* v_x_145_){
_start:
{
switch(lean_obj_tag(v_x_145_))
{
case 0:
{
lean_object* v_value_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
v_value_146_ = lean_ctor_get(v_x_145_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v_x_145_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_value_146_);
lean_dec(v_x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 4);
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_value_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
case 1:
{
lean_object* v_value_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_value_154_ = lean_ctor_get(v_x_145_, 0);
lean_inc(v_value_154_);
lean_dec_ref_known(v_x_145_, 1);
v___x_155_ = lean_mk_string_unchecked("", 0, 0);
v___x_156_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_156_, 0, v_value_154_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
return v___x_156_;
}
default: 
{
lean_object* v_value_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_value_157_ = lean_ctor_get(v_x_145_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_145_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v_x_145_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_value_157_);
lean_dec(v_x_145_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 6);
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_value_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___lam__0(lean_object* v_value_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v_value_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___lam__0(lean_object* v_value_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_170_, 0, v_value_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___lam__0(lean_object* v_value_172_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_173_, 0, v_value_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx(lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v___x_176_; 
v___x_176_ = lean_unsigned_to_nat(0u);
return v___x_176_;
}
else
{
lean_object* v___x_177_; 
v___x_177_ = lean_unsigned_to_nat(1u);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx___boxed(lean_object* v_x_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx(v_x_178_);
lean_dec_ref(v_x_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(lean_object* v_t_180_, lean_object* v_k_181_){
_start:
{
lean_object* v_value_182_; lean_object* v___x_183_; 
v_value_182_ = lean_ctor_get(v_t_180_, 0);
lean_inc(v_value_182_);
lean_dec_ref(v_t_180_);
v___x_183_ = lean_apply_1(v_k_181_, v_value_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim(lean_object* v_motive_184_, lean_object* v_ctorIdx_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_k_188_){
_start:
{
lean_object* v___x_189_; 
v___x_189_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_186_, v_k_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___boxed(lean_object* v_motive_190_, lean_object* v_ctorIdx_191_, lean_object* v_t_192_, lean_object* v_h_193_, lean_object* v_k_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim(v_motive_190_, v_ctorIdx_191_, v_t_192_, v_h_193_, v_k_194_);
lean_dec(v_ctorIdx_191_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim___redArg(lean_object* v_t_196_, lean_object* v_server_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_196_, v_server_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim(lean_object* v_motive_199_, lean_object* v_t_200_, lean_object* v_h_201_, lean_object* v_server_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_200_, v_server_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim___redArg(lean_object* v_t_204_, lean_object* v_socket_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_204_, v_socket_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim(lean_object* v_motive_207_, lean_object* v_t_208_, lean_object* v_h_209_, lean_object* v_socket_210_){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_208_, v_socket_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0(lean_object* v_x_212_){
_start:
{
lean_object* v_value_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_value_213_ = lean_ctor_get(v_x_212_, 0);
v___x_214_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_213_);
v___x_215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_215_, 0, v_value_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0___boxed(lean_object* v_x_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0(v_x_216_);
lean_dec_ref(v_x_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___lam__0(lean_object* v_value_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v_value_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___lam__0(lean_object* v_value_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_223_, 0, v_value_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0(lean_object* v___f_225_, lean_object* v_d_226_){
_start:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_227_ = lean_mk_string_unchecked("keepOpen", 8, 8);
v___x_228_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_225_, v_d_226_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = lean_unsigned_to_nat(1u);
v___x_231_ = lean_mk_empty_array_with_capacity(v___x_230_);
v___x_232_ = lean_array_push(v___x_231_, v___x_229_);
v___x_233_ = l_Lasm_JS_Web_Internal_fields(v___x_232_);
lean_dec_ref(v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSProcessSendOptions(void){
_start:
{
lean_object* v___f_234_; lean_object* v___f_235_; 
v___f_234_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_235_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0), 2, 1);
lean_closure_set(v___f_235_, 0, v___f_234_);
return v___f_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(lean_object* v_x_236_){
_start:
{
if (lean_obj_tag(v_x_236_) == 0)
{
lean_object* v___x_237_; 
v___x_237_ = lean_unsigned_to_nat(0u);
return v___x_237_;
}
else
{
lean_object* v___x_238_; 
v___x_238_ = lean_unsigned_to_nat(1u);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx___boxed(lean_object* v_x_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(v_x_239_);
lean_dec_ref(v_x_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(lean_object* v_t_241_, lean_object* v_k_242_){
_start:
{
if (lean_obj_tag(v_t_241_) == 0)
{
lean_object* v_value_243_; lean_object* v___x_244_; 
v_value_243_ = lean_ctor_get(v_t_241_, 0);
lean_inc_ref(v_value_243_);
lean_dec_ref_known(v_t_241_, 1);
v___x_244_ = lean_apply_1(v_k_242_, v_value_243_);
return v___x_244_;
}
else
{
lean_object* v_value_245_; lean_object* v___x_246_; 
v_value_245_ = lean_ctor_get(v_t_241_, 0);
lean_inc(v_value_245_);
lean_dec_ref_known(v_t_241_, 1);
v___x_246_ = lean_apply_1(v_k_242_, v_value_245_);
return v___x_246_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(lean_object* v_motive_247_, lean_object* v_ctorIdx_248_, lean_object* v_t_249_, lean_object* v_h_250_, lean_object* v_k_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_249_, v_k_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___boxed(lean_object* v_motive_253_, lean_object* v_ctorIdx_254_, lean_object* v_t_255_, lean_object* v_h_256_, lean_object* v_k_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(v_motive_253_, v_ctorIdx_254_, v_t_255_, v_h_256_, v_k_257_);
lean_dec(v_ctorIdx_254_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim___redArg(lean_object* v_t_259_, lean_object* v_domString_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_259_, v_domString_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim(lean_object* v_motive_262_, lean_object* v_t_263_, lean_object* v_h_264_, lean_object* v_domString_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_263_, v_domString_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim___redArg(lean_object* v_t_267_, lean_object* v_longLong_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_267_, v_longLong_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim(lean_object* v_motive_270_, lean_object* v_t_271_, lean_object* v_h_272_, lean_object* v_longLong_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_271_, v_longLong_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v_value_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
v_value_276_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v_x_275_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_value_276_);
lean_dec(v_x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 4);
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_value_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
else
{
lean_object* v_value_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_296_; 
v_value_284_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_296_ == 0)
{
v___x_286_ = v_x_275_;
v_isShared_287_ = v_isSharedCheck_296_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_value_284_);
lean_dec(v_x_275_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_296_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_288_ = lean_nat_abs(v_value_284_);
v___x_289_ = lean_cstr_to_nat("9007199254740991");
v___x_290_ = lean_nat_dec_le(v___x_288_, v___x_289_);
lean_dec(v___x_288_);
if (v___x_290_ == 0)
{
lean_object* v___x_292_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set_tag(v___x_286_, 5);
v___x_292_ = v___x_286_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_value_284_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
else
{
double v___x_294_; lean_object* v___x_295_; 
lean_del_object(v___x_286_);
v___x_294_ = l_Float_ofInt(v_value_284_);
lean_dec(v_value_284_);
v___x_295_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0(lean_object* v_value_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v_value_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0(lean_object* v_value_301_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v_value_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx(lean_object* v_x_304_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
lean_object* v___x_305_; 
v___x_305_ = lean_unsigned_to_nat(0u);
return v___x_305_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = lean_unsigned_to_nat(1u);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx___boxed(lean_object* v_x_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx(v_x_307_);
lean_dec_ref(v_x_307_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(lean_object* v_t_309_, lean_object* v_k_310_){
_start:
{
lean_object* v_value_311_; lean_object* v___x_312_; 
v_value_311_ = lean_ctor_get(v_t_309_, 0);
lean_inc(v_value_311_);
lean_dec_ref(v_t_309_);
v___x_312_ = lean_apply_1(v_k_310_, v_value_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim(lean_object* v_motive_313_, lean_object* v_ctorIdx_314_, lean_object* v_t_315_, lean_object* v_h_316_, lean_object* v_k_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_315_, v_k_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___boxed(lean_object* v_motive_319_, lean_object* v_ctorIdx_320_, lean_object* v_t_321_, lean_object* v_h_322_, lean_object* v_k_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim(v_motive_319_, v_ctorIdx_320_, v_t_321_, v_h_322_, v_k_323_);
lean_dec(v_ctorIdx_320_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim___redArg(lean_object* v_t_325_, lean_object* v_object_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_325_, v_object_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim(lean_object* v_motive_328_, lean_object* v_t_329_, lean_object* v_h_330_, lean_object* v_object_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_329_, v_object_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_333_, lean_object* v_jsFunction_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_333_, v_jsFunction_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim(lean_object* v_motive_336_, lean_object* v_t_337_, lean_object* v_h_338_, lean_object* v_jsFunction_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_337_, v_jsFunction_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0(lean_object* v_x_341_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_object* v_value_342_; 
v_value_342_ = lean_ctor_get(v_x_341_, 0);
lean_inc(v_value_342_);
return v_value_342_;
}
else
{
lean_object* v_value_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_value_343_ = lean_ctor_get(v_x_341_, 0);
v___x_344_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_343_);
v___x_345_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_345_, 0, v_value_343_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0___boxed(lean_object* v_x_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0(v_x_346_);
lean_dec_ref(v_x_346_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___lam__0(lean_object* v_value_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v_value_349_);
return v___x_350_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_MediacaptureStreams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Net(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_MediacaptureStreams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Buffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instToJSProcessEmitWarningOptions = _init_l_Lasm_JS_Node_instToJSProcessEmitWarningOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions);
l_Lasm_JS_Node_instToJSProcessSendOptions = _init_l_Lasm_JS_Node_instToJSProcessSendOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSProcessSendOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
