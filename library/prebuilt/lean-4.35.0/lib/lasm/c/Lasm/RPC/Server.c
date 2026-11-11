// Lean compiler output
// Module: Lasm.RPC.Server
// Imports: public import Init public meta import Init public import Lasm.RPC.Core public import Std.Async.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_RPC_Endpoint_encodeResponse___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Endpoint_decodeRequest___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_RPC_Error_toString(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_RPC_instInhabitedAnswer_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_RPC_instInhabitedAnswer_default___closed__0 = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__0_value;
static const lean_string_object l_Lasm_RPC_instInhabitedAnswer_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_RPC_instInhabitedAnswer_default___closed__1 = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__0_value),((lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_RPC_instInhabitedAnswer_default___closed__2 = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instInhabitedAnswer_default = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_instInhabitedAnswer = (const lean_object*)&l_Lasm_RPC_instInhabitedAnswer_default___closed__2_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__0 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__0_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__1 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_Answer_ofRoute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__0_value),((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__1_value)}};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__2 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__2_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cache-control"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__3 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__3_value;
static const lean_string_object l_Lasm_RPC_Answer_ofRoute___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no-store"};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__4 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__4_value;
static const lean_ctor_object l_Lasm_RPC_Answer_ofRoute___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__3_value),((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__4_value)}};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__5 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__5_value;
static const lean_array_object l_Lasm_RPC_Answer_ofRoute___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__2_value),((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__5_value)}};
static const lean_object* l_Lasm_RPC_Answer_ofRoute___closed__6 = (const lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute___boxed(lean_object*);
static const lean_array_object l_Lasm_RPC_Answer_unknown___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__2_value)}};
static const lean_object* l_Lasm_RPC_Answer_unknown___closed__0 = (const lean_object*)&l_Lasm_RPC_Answer_unknown___closed__0_value;
static const lean_string_object l_Lasm_RPC_Answer_unknown___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_RPC_Answer_unknown___closed__1 = (const lean_object*)&l_Lasm_RPC_Answer_unknown___closed__1_value;
static const lean_string_object l_Lasm_RPC_Answer_unknown___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "no endpoint "};
static const lean_object* l_Lasm_RPC_Answer_unknown___closed__2 = (const lean_object*)&l_Lasm_RPC_Answer_unknown___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown___boxed(lean_object*);
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "text/plain; charset=utf-8"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__0 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__0_value;
static const lean_ctor_object l_Lasm_RPC_Answer_wrongMethod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_ofRoute___closed__0_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__0_value)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__1 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__1_value;
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "allow"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__2 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__2_value;
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__3 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__3_value;
static const lean_ctor_object l_Lasm_RPC_Answer_wrongMethod___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__2_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__3_value)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__4 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__4_value;
static const lean_array_object l_Lasm_RPC_Answer_wrongMethod___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__1_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__4_value)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__5 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__5_value;
static const lean_string_object l_Lasm_RPC_Answer_wrongMethod___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Use POST\n"};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__6 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__6_value;
static const lean_ctor_object l_Lasm_RPC_Answer_wrongMethod___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__5_value),((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__6_value),LEAN_SCALAR_PTR_LITERAL(149, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_RPC_Answer_wrongMethod___closed__7 = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__7_value;
LEAN_EXPORT const lean_object* l_Lasm_RPC_Answer_wrongMethod = (const lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_dispatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rpc"};
static const lean_object* l_Lasm_RPC_dispatch___closed__0 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__0_value;
static const lean_closure_object l_Lasm_RPC_dispatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_dispatch___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_RPC_Answer_wrongMethod___closed__7_value)} };
static const lean_object* l_Lasm_RPC_dispatch___closed__1 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__1_value;
static const lean_ctor_object l_Lasm_RPC_dispatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_dispatch___closed__1_value)}};
static const lean_object* l_Lasm_RPC_dispatch___closed__2 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__2_value;
static const lean_closure_object l_Lasm_RPC_dispatch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_dispatch___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_dispatch___closed__3 = (const lean_object*)&l_Lasm_RPC_dispatch___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_12_; 
lean_dec_ref(v_inst_1_);
v_a_4_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_12_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_12_ == 0)
{
v___x_6_ = v_x_2_;
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_12_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_9_; 
if (v_isShared_7_ == 0)
{
v___x_9_ = v___x_6_;
goto v_reusejp_8_;
}
else
{
lean_object* v_reuseFailAlloc_11_; 
v_reuseFailAlloc_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_11_, 0, v_a_4_);
v___x_9_ = v_reuseFailAlloc_11_;
goto v_reusejp_8_;
}
v_reusejp_8_:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
}
else
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_28_; 
v_a_13_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_28_ == 0)
{
v___x_15_ = v_x_2_;
v_isShared_16_ = v_isSharedCheck_28_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v_x_2_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_28_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
uint16_t v___y_18_; 
if (lean_obj_tag(v_a_13_) == 1)
{
uint16_t v___x_26_; 
v___x_26_ = 200;
v___y_18_ = v___x_26_;
goto v___jp_17_;
}
else
{
uint16_t v___x_27_; 
v___x_27_ = 500;
v___y_18_ = v___x_27_;
goto v___jp_17_;
}
v___jp_17_:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_19_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_1_, v_a_13_);
v___x_20_ = lean_box(v___y_18_);
v___x_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v___x_19_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 0, v___x_21_);
v___x_23_ = v___x_15_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v___x_21_);
v___x_23_ = v_reuseFailAlloc_25_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; 
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed(lean_object* v_inst_29_, lean_object* v_x_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lasm_RPC_Endpoint_serve___redArg___lam__0(v_inst_29_, v_x_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1(lean_object* v_inst_33_, lean_object* v_e_34_, lean_object* v_inst_35_, lean_object* v_handler_36_, lean_object* v___f_37_, lean_object* v_body_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_RPC_Endpoint_decodeRequest___redArg(v_inst_33_, v_e_34_, v_body_38_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_55_; 
lean_dec_ref(v___f_37_);
lean_dec_ref(v_handler_36_);
v_a_41_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_55_ == 0)
{
v___x_43_ = v___x_40_;
v_isShared_44_ = v_isSharedCheck_55_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_40_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_55_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
uint16_t v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = 400;
v___x_46_ = l_Lasm_RPC_Error_toString(v_a_41_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_46_);
v___x_48_ = v___x_43_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_46_);
v___x_48_ = v_reuseFailAlloc_54_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_49_ = l_Lasm_RPC_Endpoint_encodeResponse___redArg(v_inst_35_, v___x_48_);
v___x_50_ = lean_box(v___x_45_);
v___x_51_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
lean_ctor_set(v___x_51_, 1, v___x_49_);
v___x_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
}
else
{
lean_object* v_a_56_; lean_object* v___x_57_; uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref(v_inst_35_);
v_a_56_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_a_56_);
lean_dec_ref_known(v___x_40_, 1);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = 0;
v___x_59_ = lean_apply_3(v_handler_36_, v_a_56_, lean_box(0), lean_box(0));
v___x_60_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_57_, v___x_58_, v___x_59_, v___f_37_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed(lean_object* v_inst_61_, lean_object* v_e_62_, lean_object* v_inst_63_, lean_object* v_handler_64_, lean_object* v___f_65_, lean_object* v_body_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Lasm_RPC_Endpoint_serve___redArg___lam__1(v_inst_61_, v_e_62_, v_inst_63_, v_handler_64_, v___f_65_, v_body_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve___redArg(lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_e_71_, lean_object* v_handler_72_){
_start:
{
lean_object* v_name_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___x_76_; 
v_name_73_ = lean_ctor_get(v_e_71_, 0);
lean_inc_ref(v_name_73_);
lean_inc_ref(v_inst_70_);
v___f_74_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_74_, 0, v_inst_70_);
v___f_75_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_75_, 0, v_inst_69_);
lean_closure_set(v___f_75_, 1, v_e_71_);
lean_closure_set(v___f_75_, 2, v_inst_70_);
lean_closure_set(v___f_75_, 3, v_handler_72_);
lean_closure_set(v___f_75_, 4, v___f_74_);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v_name_73_);
lean_ctor_set(v___x_76_, 1, v___f_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve(lean_object* v_Req_77_, lean_object* v_Res_78_, lean_object* v_inst_79_, lean_object* v_inst_80_, lean_object* v_e_81_, lean_object* v_handler_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lasm_RPC_Endpoint_serve___redArg(v_inst_79_, v_inst_80_, v_e_81_, v_handler_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(lean_object* v_handler_84_, lean_object* v_r_85_, lean_object* v_x_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_apply_2(v_handler_84_, v_r_85_, lean_box(0));
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed(lean_object* v_handler_89_, lean_object* v_r_90_, lean_object* v_x_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0(v_handler_89_, v_r_90_, v_x_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27___redArg(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_e_96_, lean_object* v_handler_97_){
_start:
{
lean_object* v___f_98_; lean_object* v___x_99_; 
v___f_98_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_serve_x27___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_98_, 0, v_handler_97_);
v___x_99_ = l_Lasm_RPC_Endpoint_serve___redArg(v_inst_94_, v_inst_95_, v_e_96_, v___f_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_serve_x27(lean_object* v_Req_100_, lean_object* v_Res_101_, lean_object* v_inst_102_, lean_object* v_inst_103_, lean_object* v_e_104_, lean_object* v_handler_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lasm_RPC_Endpoint_serve_x27___redArg(v_inst_102_, v_inst_103_, v_e_104_, v_handler_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute(lean_object* v_r_132_){
_start:
{
lean_object* v_fst_133_; lean_object* v_snd_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint16_t v___x_137_; 
v_fst_133_ = lean_ctor_get(v_r_132_, 0);
v_snd_134_ = lean_ctor_get(v_r_132_, 1);
v___x_135_ = ((lean_object*)(l_Lasm_RPC_Answer_ofRoute___closed__6));
lean_inc(v_snd_134_);
v___x_136_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v_snd_134_);
v___x_137_ = lean_unbox(v_fst_133_);
lean_ctor_set_uint16(v___x_136_, sizeof(void*)*2, v___x_137_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_ofRoute___boxed(lean_object* v_r_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lasm_RPC_Answer_ofRoute(v_r_138_);
lean_dec_ref(v_r_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown(lean_object* v_name_146_){
_start:
{
uint16_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_147_ = 404;
v___x_148_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__0));
v___x_149_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__1));
v___x_150_ = ((lean_object*)(l_Lasm_RPC_Answer_unknown___closed__2));
v___x_151_ = lean_string_append(v___x_150_, v_name_146_);
v___x_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
v___x_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_149_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = lean_box(0);
v___x_155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = l_Lean_Json_mkObj(v___x_155_);
lean_dec_ref_known(v___x_155_, 2);
v___x_157_ = l_Lean_Json_compress(v___x_156_);
v___x_158_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_158_, 0, v___x_148_);
lean_ctor_set(v___x_158_, 1, v___x_157_);
lean_ctor_set_uint16(v___x_158_, sizeof(void*)*2, v___x_147_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Answer_unknown___boxed(lean_object* v_name_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lasm_RPC_Answer_unknown(v_name_159_);
lean_dec_ref(v_name_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0(lean_object* v___x_182_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_182_);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__0___boxed(lean_object* v___x_186_, lean_object* v___y_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lasm_RPC_dispatch___lam__0(v___x_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__2(lean_object* v___y_189_){
_start:
{
if (lean_obj_tag(v___y_189_) == 0)
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
v_a_190_ = lean_ctor_get(v___y_189_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___y_189_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___y_189_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___y_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_206_; 
v_a_198_ = lean_ctor_get(v___y_189_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___y_189_);
if (v_isSharedCheck_206_ == 0)
{
v___x_200_ = v___y_189_;
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___y_189_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_202_ = l_Lasm_RPC_Answer_ofRoute(v_a_198_);
lean_dec(v_a_198_);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 0, v___x_202_);
v___x_204_ = v___x_200_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1(lean_object* v_run_207_, lean_object* v_body_208_, lean_object* v___f_209_){
_start:
{
lean_object* v___x_211_; uint8_t v___x_212_; lean_object* v___x_213_; lean_object* v___y_215_; 
v___x_211_ = lean_unsigned_to_nat(0u);
v___x_212_ = 0;
v___x_213_ = lean_apply_2(v_run_207_, v_body_208_, lean_box(0));
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_217_; 
lean_dec_ref(v___f_209_);
v_a_217_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_a_217_);
lean_dec_ref_known(v___x_213_, 1);
if (lean_obj_tag(v_a_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
v_a_218_ = lean_ctor_get(v_a_217_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v_a_217_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v_a_217_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v_a_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
v___y_215_ = v___x_223_;
goto v___jp_214_;
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_234_; 
v_a_226_ = lean_ctor_get(v_a_217_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v_a_217_);
if (v_isSharedCheck_234_ == 0)
{
v___x_228_ = v_a_217_;
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v_a_217_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_232_; 
v___x_230_ = l_Lasm_RPC_Answer_ofRoute(v_a_226_);
lean_dec(v_a_226_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 0, v___x_230_);
v___x_232_ = v___x_228_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_230_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
v___y_215_ = v___x_232_;
goto v___jp_214_;
}
}
}
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_243_; 
v_a_235_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_243_ == 0)
{
v___x_237_ = v___x_213_;
v_isShared_238_ = v_isSharedCheck_243_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_213_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_243_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_239_ = lean_task_map(v___f_209_, v_a_235_, v___x_211_, v___x_212_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 0, v___x_239_);
v___x_241_ = v___x_237_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
v___jp_214_:
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___y_215_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___lam__1___boxed(lean_object* v_run_244_, lean_object* v_body_245_, lean_object* v___f_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_RPC_dispatch___lam__1(v_run_244_, v_body_245_, v___f_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(lean_object* v_head_249_, lean_object* v_x_250_){
_start:
{
if (lean_obj_tag(v_x_250_) == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_box(0);
return v___x_251_;
}
else
{
lean_object* v_head_252_; lean_object* v_tail_253_; lean_object* v_name_254_; uint8_t v___x_255_; 
v_head_252_ = lean_ctor_get(v_x_250_, 0);
v_tail_253_ = lean_ctor_get(v_x_250_, 1);
v_name_254_ = lean_ctor_get(v_head_252_, 0);
v___x_255_ = lean_string_dec_eq(v_name_254_, v_head_249_);
if (v___x_255_ == 0)
{
v_x_250_ = v_tail_253_;
goto _start;
}
else
{
lean_object* v___x_257_; 
lean_inc(v_head_252_);
v___x_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_257_, 0, v_head_252_);
return v___x_257_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0___boxed(lean_object* v_head_258_, lean_object* v_x_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(v_head_258_, v_x_259_);
lean_dec(v_x_259_);
lean_dec_ref(v_head_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch(lean_object* v_routes_267_, lean_object* v_method_268_, lean_object* v_segments_269_, lean_object* v_body_270_){
_start:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = ((lean_object*)(l_Lasm_RPC_Answer_wrongMethod___closed__3));
v___x_272_ = lean_string_dec_eq(v_method_268_, v___x_271_);
if (v___x_272_ == 0)
{
lean_dec_ref(v_body_270_);
if (lean_obj_tag(v_segments_269_) == 1)
{
lean_object* v_head_273_; lean_object* v_tail_274_; lean_object* v___x_275_; uint8_t v___x_276_; 
v_head_273_ = lean_ctor_get(v_segments_269_, 0);
v_tail_274_ = lean_ctor_get(v_segments_269_, 1);
v___x_275_ = ((lean_object*)(l_Lasm_RPC_dispatch___closed__0));
v___x_276_ = lean_string_dec_eq(v_head_273_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(0);
return v___x_277_;
}
else
{
if (lean_obj_tag(v_tail_274_) == 1)
{
lean_object* v_tail_278_; 
v_tail_278_ = lean_ctor_get(v_tail_274_, 1);
if (lean_obj_tag(v_tail_278_) == 0)
{
lean_object* v___x_279_; 
v___x_279_ = ((lean_object*)(l_Lasm_RPC_dispatch___closed__2));
return v___x_279_;
}
else
{
lean_object* v___x_280_; 
v___x_280_ = lean_box(0);
return v___x_280_;
}
}
else
{
lean_object* v___x_281_; 
v___x_281_ = lean_box(0);
return v___x_281_;
}
}
}
else
{
lean_object* v___x_282_; 
v___x_282_ = lean_box(0);
return v___x_282_;
}
}
else
{
if (lean_obj_tag(v_segments_269_) == 1)
{
lean_object* v_head_283_; lean_object* v_tail_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v_head_283_ = lean_ctor_get(v_segments_269_, 0);
v_tail_284_ = lean_ctor_get(v_segments_269_, 1);
v___x_285_ = ((lean_object*)(l_Lasm_RPC_dispatch___closed__0));
v___x_286_ = lean_string_dec_eq(v_head_283_, v___x_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; 
lean_dec_ref(v_body_270_);
v___x_287_ = lean_box(0);
return v___x_287_;
}
else
{
if (lean_obj_tag(v_tail_284_) == 1)
{
lean_object* v_tail_288_; 
v_tail_288_ = lean_ctor_get(v_tail_284_, 1);
if (lean_obj_tag(v_tail_288_) == 0)
{
lean_object* v_head_289_; lean_object* v___x_290_; 
v_head_289_ = lean_ctor_get(v_tail_284_, 0);
v___x_290_ = l_List_find_x3f___at___00Lasm_RPC_dispatch_spec__0(v_head_289_, v_routes_267_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v___x_291_; lean_object* v___f_292_; lean_object* v___x_293_; 
lean_dec_ref(v_body_270_);
v___x_291_ = l_Lasm_RPC_Answer_unknown(v_head_289_);
v___f_292_ = lean_alloc_closure((void*)(l_Lasm_RPC_dispatch___lam__0___boxed), 2, 1);
lean_closure_set(v___f_292_, 0, v___x_291_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___f_292_);
return v___x_293_;
}
else
{
lean_object* v_val_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_304_; 
v_val_294_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_304_ == 0)
{
v___x_296_ = v___x_290_;
v_isShared_297_ = v_isSharedCheck_304_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_val_294_);
lean_dec(v___x_290_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_304_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v_run_298_; lean_object* v___f_299_; lean_object* v___f_300_; lean_object* v___x_302_; 
v_run_298_ = lean_ctor_get(v_val_294_, 1);
lean_inc_ref(v_run_298_);
lean_dec(v_val_294_);
v___f_299_ = ((lean_object*)(l_Lasm_RPC_dispatch___closed__3));
v___f_300_ = lean_alloc_closure((void*)(l_Lasm_RPC_dispatch___lam__1___boxed), 4, 3);
lean_closure_set(v___f_300_, 0, v_run_298_);
lean_closure_set(v___f_300_, 1, v_body_270_);
lean_closure_set(v___f_300_, 2, v___f_299_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___f_300_);
v___x_302_ = v___x_296_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___f_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
else
{
lean_object* v___x_305_; 
lean_dec_ref(v_body_270_);
v___x_305_ = lean_box(0);
return v___x_305_;
}
}
else
{
lean_object* v___x_306_; 
lean_dec_ref(v_body_270_);
v___x_306_ = lean_box(0);
return v___x_306_;
}
}
}
else
{
lean_object* v___x_307_; 
lean_dec_ref(v_body_270_);
v___x_307_ = lean_box(0);
return v___x_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_dispatch___boxed(lean_object* v_routes_308_, lean_object* v_method_309_, lean_object* v_segments_310_, lean_object* v_body_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lasm_RPC_dispatch(v_routes_308_, v_method_309_, v_segments_310_, v_body_311_);
lean_dec(v_segments_310_);
lean_dec_ref(v_method_309_);
lean_dec(v_routes_308_);
return v_res_312_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Core(uint8_t builtin);
lean_object* initialize_Std_Async_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Server(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_RPC_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
