// Lean compiler output
// Module: Lasm.RPC.Client
// Imports: public import Init public meta import Init public import Lasm.RPC.Core public import Lasm.UI.Cmd public import Lasm.JS.Web.Fetch
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
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invokeAsync___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_RPC_Endpoint_decodeResponse___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSValue;
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_UI_Cmd_send___redArg(lean_object*);
extern lean_object* l_Lasm_JS_Web_instToJSRequestInit;
lean_object* l_Lasm_RPC_Endpoint_path___redArg(lean_object*);
lean_object* l_Lasm_RPC_Endpoint_encodeRequest___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_UI_Cmd_task___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.Response.text: "};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Web.fetch: "};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__0_value;
static const lean_array_object l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__1_value;
static lean_once_cell_t l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__2;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.Response.status: "};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_Endpoint_call___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__0 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__0_value;
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_Endpoint_call___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__1 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__1_value;
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_Endpoint_call___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__2 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__2_value;
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_RPC_Endpoint_call___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__3 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__3_value;
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__4 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__4_value;
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__5 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__5_value;
static const lean_closure_object l_Lasm_RPC_Endpoint_call___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__5_value)} };
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__6 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__6_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Web.fetch"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__7 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__7_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__8 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__8_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__9 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__9_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__7_value),((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__8_value),((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__9_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__10 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__10_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__11 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__11_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__11_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__12 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__12_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__13 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__13_value;
static const lean_string_object l_Lasm_RPC_Endpoint_call___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__14 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__14_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__13_value),((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__14_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__15 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__15_value;
static const lean_array_object l_Lasm_RPC_Endpoint_call___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__15_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__16 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__16_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__16_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__17 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__17_value;
static const lean_ctor_object l_Lasm_RPC_Endpoint_call___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__17_value)}};
static const lean_object* l_Lasm_RPC_Endpoint_call___redArg___closed__18 = (const lean_object*)&l_Lasm_RPC_Endpoint_call___redArg___closed__18_value;
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0(lean_object* v_handle_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
lean_object* v_a_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_17_; 
v_a_4_ = lean_ctor_get(v_x_2_, 0);
v_isSharedCheck_17_ = !lean_is_exclusive(v_x_2_);
if (v_isSharedCheck_17_ == 0)
{
v___x_6_ = v_x_2_;
v_isShared_7_ = v_isSharedCheck_17_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_a_4_);
lean_dec(v_x_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_17_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_8_ = lean_io_error_to_string(v_a_4_);
v___x_9_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 0, v___x_9_);
v___x_11_ = v___x_6_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___x_9_);
v___x_11_ = v_reuseFailAlloc_16_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_apply_1(v_handle_1_, v___x_11_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
}
else
{
lean_object* v___x_18_; 
lean_dec(v_handle_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v_x_2_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__0___boxed(lean_object* v_handle_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_RPC_Endpoint_call___redArg___lam__0(v_handle_19_, v_x_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1(lean_object* v_x_24_){
_start:
{
if (lean_obj_tag(v_x_24_) == 0)
{
lean_object* v_a_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_38_; 
v_a_26_ = lean_ctor_get(v_x_24_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v_x_24_);
if (v_isSharedCheck_38_ == 0)
{
v___x_28_ = v_x_24_;
v_isShared_29_ = v_isSharedCheck_38_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_a_26_);
lean_dec(v_x_24_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_38_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_30_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___lam__1___closed__0));
v___x_31_ = lean_io_error_to_string(v_a_26_);
v___x_32_ = lean_string_append(v___x_30_, v___x_31_);
lean_dec_ref(v___x_31_);
v___x_33_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v___x_33_);
v___x_35_ = v___x_28_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v___x_33_);
v___x_35_ = v_reuseFailAlloc_37_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; 
v___x_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
return v___x_36_;
}
}
}
else
{
lean_object* v___x_39_; 
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_24_);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__1___boxed(lean_object* v_x_40_, lean_object* v___y_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lasm_RPC_Endpoint_call___redArg___lam__1(v_x_40_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2(lean_object* v_x_44_){
_start:
{
if (lean_obj_tag(v_x_44_) == 0)
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_58_; 
v_a_46_ = lean_ctor_get(v_x_44_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v_x_44_);
if (v_isSharedCheck_58_ == 0)
{
v___x_48_ = v_x_44_;
v_isShared_49_ = v_isSharedCheck_58_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v_x_44_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_58_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_50_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___lam__2___closed__0));
v___x_51_ = lean_io_error_to_string(v_a_46_);
v___x_52_ = lean_string_append(v___x_50_, v___x_51_);
lean_dec_ref(v___x_51_);
v___x_53_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v___x_53_);
v___x_55_ = v___x_48_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_53_);
v___x_55_ = v_reuseFailAlloc_57_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; 
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
}
else
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v_x_44_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__2___boxed(lean_object* v_x_60_, lean_object* v___y_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lasm_RPC_Endpoint_call___redArg___lam__2(v_x_60_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3(lean_object* v_x_63_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_73_; 
v_a_65_ = lean_ctor_get(v_x_63_, 0);
v_isSharedCheck_73_ = !lean_is_exclusive(v_x_63_);
if (v_isSharedCheck_73_ == 0)
{
v___x_67_ = v_x_63_;
v_isShared_68_ = v_isSharedCheck_73_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v_x_63_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_73_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v_a_65_);
v___x_70_ = v_reuseFailAlloc_72_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
}
else
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_82_; 
v_a_74_ = lean_ctor_get(v_x_63_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v_x_63_);
if (v_isSharedCheck_82_ == 0)
{
v___x_76_ = v_x_63_;
v_isShared_77_ = v_isSharedCheck_82_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v_x_63_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_82_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_81_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__3___boxed(lean_object* v_x_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lasm_RPC_Endpoint_call___redArg___lam__3(v_x_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4(lean_object* v_e_86_){
_start:
{
lean_object* v_r_89_; lean_object* v_a_92_; 
v_a_92_ = lean_ctor_get(v_e_86_, 0);
lean_inc(v_a_92_);
lean_dec_ref(v_e_86_);
v_r_89_ = v_a_92_;
goto v___jp_88_;
v___jp_88_:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_90_, 0, v_r_89_);
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__4___boxed(lean_object* v_e_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lasm_RPC_Endpoint_call___redArg___lam__4(v_e_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5(lean_object* v_inst_96_, lean_object* v_a_97_, lean_object* v_handle_98_, lean_object* v_x_99_){
_start:
{
if (lean_obj_tag(v_x_99_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_109_; 
lean_dec(v_handle_98_);
lean_dec(v_a_97_);
lean_dec_ref(v_inst_96_);
v_a_101_ = lean_ctor_get(v_x_99_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_99_);
if (v_isSharedCheck_109_ == 0)
{
v___x_103_ = v_x_99_;
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v_x_99_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_108_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; 
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
}
else
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_121_; 
v_a_110_ = lean_ctor_get(v_x_99_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v_x_99_);
if (v_isSharedCheck_121_ == 0)
{
v___x_112_ = v_x_99_;
v_isShared_113_ = v_isSharedCheck_121_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v_x_99_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_121_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_114_ = l_Lasm_RPC_Endpoint_decodeResponse___redArg(v_inst_96_, v_a_97_, v_a_110_);
v___x_115_ = lean_apply_1(v_handle_98_, v___x_114_);
if (v_isShared_113_ == 0)
{
lean_ctor_set_tag(v___x_112_, 0);
lean_ctor_set(v___x_112_, 0, v___x_115_);
v___x_117_ = v___x_112_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_115_);
v___x_117_ = v_reuseFailAlloc_120_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
v___x_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__5___boxed(lean_object* v_inst_122_, lean_object* v_a_123_, lean_object* v_handle_124_, lean_object* v_x_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lasm_RPC_Endpoint_call___redArg___lam__5(v_inst_122_, v_a_123_, v_handle_124_, v_x_125_);
return v_res_127_;
}
}
static lean_object* _init_l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__2(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__1));
v___x_132_ = l_Lasm_JS_Web_Internal_args(v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6(lean_object* v_inst_133_, lean_object* v_handle_134_, lean_object* v___f_135_, lean_object* v_a_136_, lean_object* v___x_137_, lean_object* v___f_138_, lean_object* v_x_139_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_149_; 
lean_dec_ref(v___f_138_);
lean_dec_ref(v___x_137_);
lean_dec(v_a_136_);
lean_dec(v___f_135_);
lean_dec(v_handle_134_);
lean_dec_ref(v_inst_133_);
v_a_141_ = lean_ctor_get(v_x_139_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_149_ == 0)
{
v___x_143_ = v_x_139_;
v_isShared_144_ = v_isSharedCheck_149_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v_x_139_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_149_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_148_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; 
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___f_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_1812__overap_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_a_150_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v_x_139_, 1);
v___f_151_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_151_, 0, v_inst_133_);
lean_closure_set(v___f_151_, 1, v_a_150_);
lean_closure_set(v___f_151_, 2, v_handle_134_);
v___x_152_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__0));
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_obj_once(&l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__2, &l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__2_once, _init_l_Lasm_RPC_Endpoint_call___redArg___lam__6___closed__2);
v___x_155_ = 0;
v___x_1812__overap_156_ = l_Lasm_JS_Value_callMethodAwait___redArg(v___f_135_, v_a_136_, v___x_152_, v___x_154_, v___x_137_);
v___x_157_ = lean_apply_1(v___x_1812__overap_156_, lean_box(0));
v___x_158_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_153_, v___x_155_, v___x_157_, v___f_138_);
v___x_159_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_153_, v___x_155_, v___x_158_, v___f_151_);
return v___x_159_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__6___boxed(lean_object* v_inst_160_, lean_object* v_handle_161_, lean_object* v___f_162_, lean_object* v_a_163_, lean_object* v___x_164_, lean_object* v___f_165_, lean_object* v_x_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lasm_RPC_Endpoint_call___redArg___lam__6(v_inst_160_, v_handle_161_, v___f_162_, v_a_163_, v___x_164_, v___f_165_, v_x_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__7(lean_object* v_inst_171_, lean_object* v_handle_172_, lean_object* v___f_173_, lean_object* v___x_174_, lean_object* v___f_175_, lean_object* v___f_176_, lean_object* v___x_177_, lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_188_; 
lean_dec_ref(v___x_177_);
lean_dec_ref(v___f_176_);
lean_dec_ref(v___f_175_);
lean_dec_ref(v___x_174_);
lean_dec(v___f_173_);
lean_dec(v_handle_172_);
lean_dec_ref(v_inst_171_);
v_a_180_ = lean_ctor_get(v_x_178_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_188_ == 0)
{
v___x_182_ = v_x_178_;
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v_x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_227_; 
v_a_189_ = lean_ctor_get(v_x_178_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_227_ == 0)
{
v___x_191_ = v_x_178_;
v_isShared_192_ = v_isSharedCheck_227_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v_x_178_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_227_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___f_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; lean_object* v_val_198_; lean_object* v_a_202_; lean_object* v___x_206_; 
lean_inc(v_a_189_);
v___f_193_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__6___boxed), 8, 6);
lean_closure_set(v___f_193_, 0, v_inst_171_);
lean_closure_set(v___f_193_, 1, v_handle_172_);
lean_closure_set(v___f_193_, 2, v___f_173_);
lean_closure_set(v___f_193_, 3, v_a_189_);
lean_closure_set(v___f_193_, 4, v___x_174_);
lean_closure_set(v___f_193_, 5, v___f_175_);
v___x_194_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__0));
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = 0;
v___x_206_ = l_Lasm_JS_Value_get___redArg(v___f_176_, v_a_189_, v___x_194_, v___x_177_);
if (lean_obj_tag(v___x_206_) == 0)
{
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_del_object(v___x_191_);
v_a_207_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_206_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set_tag(v___x_209_, 1);
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
v_val_198_ = v___x_212_;
goto v___jp_197_;
}
}
}
else
{
lean_object* v_a_215_; 
v_a_215_ = lean_ctor_get(v___x_206_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v___x_206_, 1);
v_a_202_ = v_a_215_;
goto v___jp_201_;
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_226_; 
v_a_216_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_226_ == 0)
{
v___x_218_ = v___x_206_;
v_isShared_219_ = v_isSharedCheck_226_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_206_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_226_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_220_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___lam__7___closed__1));
v___x_221_ = lean_io_error_to_string(v_a_216_);
v___x_222_ = lean_string_append(v___x_220_, v___x_221_);
lean_dec_ref(v___x_221_);
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 18);
lean_ctor_set(v___x_218_, 0, v___x_222_);
v___x_224_ = v___x_218_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
v_a_202_ = v___x_224_;
goto v___jp_201_;
}
}
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v_val_198_);
v___x_200_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_195_, v___x_196_, v___x_199_, v___f_193_);
return v___x_200_;
}
v___jp_201_:
{
lean_object* v___x_204_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 0);
lean_ctor_set(v___x_191_, 0, v_a_202_);
v___x_204_ = v___x_191_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v_val_198_ = v___x_204_;
goto v___jp_197_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__7___boxed(lean_object* v_inst_228_, lean_object* v_handle_229_, lean_object* v___f_230_, lean_object* v___x_231_, lean_object* v___f_232_, lean_object* v___f_233_, lean_object* v___x_234_, lean_object* v_x_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lasm_RPC_Endpoint_call___redArg___lam__7(v_inst_228_, v_handle_229_, v___f_230_, v___x_231_, v___f_232_, v___f_233_, v___x_234_, v_x_235_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__8(lean_object* v___x_238_, lean_object* v___x_239_, lean_object* v___x_240_, uint8_t v___x_241_, lean_object* v___f_242_, lean_object* v___f_243_, lean_object* v___f_244_, lean_object* v___f_245_){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_247_ = lean_unsigned_to_nat(0u);
v___x_248_ = l_Lasm_JS_Binding_invokeAsync___redArg(v___x_238_, v___x_239_, v___x_240_);
v___x_249_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_247_, v___x_241_, v___x_248_, v___f_242_);
v___x_250_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_247_, v___x_241_, v___x_249_, v___f_243_);
v___x_251_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_247_, v___x_241_, v___x_250_, v___f_244_);
v___x_252_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_247_, v___x_241_, v___x_251_, v___f_245_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg___lam__8___boxed(lean_object* v___x_253_, lean_object* v___x_254_, lean_object* v___x_255_, lean_object* v___x_256_, lean_object* v___f_257_, lean_object* v___f_258_, lean_object* v___f_259_, lean_object* v___f_260_, lean_object* v___y_261_){
_start:
{
uint8_t v___x_2309__boxed_262_; lean_object* v_res_263_; 
v___x_2309__boxed_262_ = lean_unbox(v___x_256_);
v_res_263_ = l_Lasm_RPC_Endpoint_call___redArg___lam__8(v___x_253_, v___x_254_, v___x_255_, v___x_2309__boxed_262_, v___f_257_, v___f_258_, v___f_259_, v___f_260_);
lean_dec_ref(v___x_254_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call___redArg(lean_object* v_inst_297_, lean_object* v_inst_298_, lean_object* v_e_299_, lean_object* v_req_300_, lean_object* v_handle_301_, lean_object* v_base_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_validate_306_; lean_object* v___x_307_; 
v___x_303_ = l_Lasm_JS_instFromJSValue;
v___x_304_ = l_Lasm_JS_instFromJSNat;
v___x_305_ = l_Lasm_JS_instFromJSString;
v_validate_306_ = lean_ctor_get(v_e_299_, 1);
lean_inc_ref(v_validate_306_);
lean_inc(v_req_300_);
v___x_307_ = lean_apply_1(v_validate_306_, v_req_300_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_318_; 
lean_dec_ref(v_base_302_);
lean_dec(v_req_300_);
lean_dec_ref(v_e_299_);
lean_dec_ref(v_inst_298_);
lean_dec_ref(v_inst_297_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_318_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v_a_308_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_314_ = v___x_310_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_317_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_apply_1(v_handle_301_, v___x_314_);
v___x_316_ = l_Lasm_UI_Cmd_send___redArg(v___x_315_);
return v___x_316_;
}
}
}
else
{
lean_object* v___f_319_; lean_object* v___f_320_; lean_object* v___f_321_; lean_object* v___f_322_; lean_object* v___f_323_; lean_object* v___x_324_; lean_object* v___f_325_; lean_object* v___f_326_; lean_object* v___f_327_; uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___f_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
lean_dec_ref_known(v___x_307_, 1);
lean_inc(v_handle_301_);
v___f_319_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_319_, 0, v_handle_301_);
v___f_320_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__0));
v___f_321_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__1));
v___f_322_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__2));
v___f_323_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__3));
v___x_324_ = l_Lasm_JS_Web_instToJSRequestInit;
v___f_325_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__4));
v___f_326_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__6));
v___f_327_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__7___boxed), 9, 7);
lean_closure_set(v___f_327_, 0, v_inst_298_);
lean_closure_set(v___f_327_, 1, v_handle_301_);
lean_closure_set(v___f_327_, 2, v___f_326_);
lean_closure_set(v___f_327_, 3, v___x_305_);
lean_closure_set(v___f_327_, 4, v___f_320_);
lean_closure_set(v___f_327_, 5, v___f_325_);
lean_closure_set(v___f_327_, 6, v___x_304_);
v___x_328_ = 0;
v___x_329_ = lean_unsigned_to_nat(2u);
v___x_330_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__10));
v___x_331_ = l_Lasm_RPC_Endpoint_path___redArg(v_e_299_);
lean_dec_ref(v_e_299_);
v___x_332_ = lean_string_append(v_base_302_, v___x_331_);
lean_dec_ref(v___x_331_);
v___x_333_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
v___x_334_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__12));
v___x_335_ = ((lean_object*)(l_Lasm_RPC_Endpoint_call___redArg___closed__18));
v___x_336_ = l_Lasm_RPC_Endpoint_encodeRequest___redArg(v_inst_297_, v_req_300_);
v___x_337_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
v___x_339_ = lean_box(0);
v___x_340_ = lean_box(0);
v___x_341_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v___x_341_, 0, v___x_334_);
lean_ctor_set(v___x_341_, 1, v___x_335_);
lean_ctor_set(v___x_341_, 2, v___x_338_);
lean_ctor_set(v___x_341_, 3, v___x_339_);
lean_ctor_set(v___x_341_, 4, v___x_339_);
lean_ctor_set(v___x_341_, 5, v___x_339_);
lean_ctor_set(v___x_341_, 6, v___x_339_);
lean_ctor_set(v___x_341_, 7, v___x_339_);
lean_ctor_set(v___x_341_, 8, v___x_339_);
lean_ctor_set(v___x_341_, 9, v___x_339_);
lean_ctor_set(v___x_341_, 10, v___x_339_);
lean_ctor_set(v___x_341_, 11, v___x_339_);
lean_ctor_set(v___x_341_, 12, v___x_339_);
lean_ctor_set(v___x_341_, 13, v___x_339_);
lean_ctor_set(v___x_341_, 14, v___x_340_);
lean_ctor_set(v___x_341_, 15, v___x_339_);
lean_ctor_set(v___x_341_, 16, v___x_339_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
v___x_343_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_324_, v___x_342_);
v___x_344_ = lean_mk_empty_array_with_capacity(v___x_329_);
v___x_345_ = lean_array_push(v___x_344_, v___x_333_);
v___x_346_ = lean_array_push(v___x_345_, v___x_343_);
v___x_347_ = l_Lasm_JS_Web_Internal_args(v___x_346_);
v___x_348_ = lean_box(v___x_328_);
v___f_349_ = lean_alloc_closure((void*)(l_Lasm_RPC_Endpoint_call___redArg___lam__8___boxed), 9, 8);
lean_closure_set(v___f_349_, 0, v___x_303_);
lean_closure_set(v___f_349_, 1, v___x_330_);
lean_closure_set(v___f_349_, 2, v___x_347_);
lean_closure_set(v___f_349_, 3, v___x_348_);
lean_closure_set(v___f_349_, 4, v___f_322_);
lean_closure_set(v___f_349_, 5, v___f_321_);
lean_closure_set(v___f_349_, 6, v___f_327_);
lean_closure_set(v___f_349_, 7, v___f_319_);
v___x_350_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___boxed), 6, 5);
lean_closure_set(v___x_350_, 0, lean_box(0));
lean_closure_set(v___x_350_, 1, lean_box(0));
lean_closure_set(v___x_350_, 2, lean_box(0));
lean_closure_set(v___x_350_, 3, v___f_349_);
lean_closure_set(v___x_350_, 4, v___f_323_);
v___x_351_ = l_Lasm_UI_Cmd_task___redArg(v___x_350_);
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_RPC_Endpoint_call(lean_object* v_Req_352_, lean_object* v_Res_353_, lean_object* v_Msg_354_, lean_object* v_inst_355_, lean_object* v_inst_356_, lean_object* v_e_357_, lean_object* v_req_358_, lean_object* v_handle_359_, lean_object* v_base_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lasm_RPC_Endpoint_call___redArg(v_inst_355_, v_inst_356_, v_e_357_, v_req_358_, v_handle_359_, v_base_360_);
return v___x_361_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_RPC_Core(uint8_t builtin);
lean_object* initialize_Lasm_UI_Cmd(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_RPC_Client(uint8_t builtin) {
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
res = initialize_Lasm_UI_Cmd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
