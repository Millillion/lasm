// Lean compiler output
// Module: Lasm.Target
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Target_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_Target_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Target_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_instDecidableEqTarget(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_instDecidableEqTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_instReprTarget_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Target.node"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__0 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__0_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__0_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__1 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__1_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Target.lambda"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__2 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__2_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__2_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__3 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__3_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.Target.lambdaEdge"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__4 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__4_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__4_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__5 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__5_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Target.vercel"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__6 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__6_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__6_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__7 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__7_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.Target.netlify"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__8 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__8_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__8_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__9 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__9_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.Target.azureFunctions"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__10 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__10_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__10_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__11 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__11_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.Target.cloudFunctions"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__12 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__12_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__12_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__13 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__13_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.Target.workers"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__14 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__14_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__14_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__15 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__15_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.Target.vercelEdge"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__16 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__16_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__16_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__17 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__17_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.Target.netlifyEdge"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__18 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__18_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__18_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__19 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__19_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.Target.bun"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__20 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__20_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__20_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__21 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__21_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Target.deno"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__22 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__22_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__22_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__23 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__23_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.Target.denoDeploy"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__24 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__24_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__24_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__25 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__25_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.Target.supabaseEdge"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__26 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__26_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__26_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__27 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__27_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Target.wasi"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__28 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__28_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__28_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__29 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__29_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Target.fastly"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__30 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__30_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__30_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__31 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__31_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.Target.wasiHttp"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__32 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__32_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__32_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__33 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__33_value;
static const lean_string_object l_Lasm_instReprTarget_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.Target.browser"};
static const lean_object* l_Lasm_instReprTarget_repr___closed__34 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__34_value;
static const lean_ctor_object l_Lasm_instReprTarget_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_instReprTarget_repr___closed__34_value)}};
static const lean_object* l_Lasm_instReprTarget_repr___closed__35 = (const lean_object*)&l_Lasm_instReprTarget_repr___closed__35_value;
static lean_once_cell_t l_Lasm_instReprTarget_repr___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_instReprTarget_repr___closed__36;
static lean_once_cell_t l_Lasm_instReprTarget_repr___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_instReprTarget_repr___closed__37;
LEAN_EXPORT lean_object* l_Lasm_instReprTarget_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_instReprTarget_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_instReprTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_instReprTarget_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_instReprTarget___closed__0 = (const lean_object*)&l_Lasm_instReprTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_instReprTarget = (const lean_object*)&l_Lasm_instReprTarget___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_instInhabitedTarget_default;
LEAN_EXPORT uint8_t l_Lasm_instInhabitedTarget;
static const lean_string_object l_Lasm_Target_name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "node"};
static const lean_object* l_Lasm_Target_name___closed__0 = (const lean_object*)&l_Lasm_Target_name___closed__0_value;
static const lean_string_object l_Lasm_Target_name___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lambda"};
static const lean_object* l_Lasm_Target_name___closed__1 = (const lean_object*)&l_Lasm_Target_name___closed__1_value;
static const lean_string_object l_Lasm_Target_name___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lambda-edge"};
static const lean_object* l_Lasm_Target_name___closed__2 = (const lean_object*)&l_Lasm_Target_name___closed__2_value;
static const lean_string_object l_Lasm_Target_name___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "vercel"};
static const lean_object* l_Lasm_Target_name___closed__3 = (const lean_object*)&l_Lasm_Target_name___closed__3_value;
static const lean_string_object l_Lasm_Target_name___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "netlify"};
static const lean_object* l_Lasm_Target_name___closed__4 = (const lean_object*)&l_Lasm_Target_name___closed__4_value;
static const lean_string_object l_Lasm_Target_name___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "azure-functions"};
static const lean_object* l_Lasm_Target_name___closed__5 = (const lean_object*)&l_Lasm_Target_name___closed__5_value;
static const lean_string_object l_Lasm_Target_name___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "cloud-functions"};
static const lean_object* l_Lasm_Target_name___closed__6 = (const lean_object*)&l_Lasm_Target_name___closed__6_value;
static const lean_string_object l_Lasm_Target_name___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "workers"};
static const lean_object* l_Lasm_Target_name___closed__7 = (const lean_object*)&l_Lasm_Target_name___closed__7_value;
static const lean_string_object l_Lasm_Target_name___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "vercel-edge"};
static const lean_object* l_Lasm_Target_name___closed__8 = (const lean_object*)&l_Lasm_Target_name___closed__8_value;
static const lean_string_object l_Lasm_Target_name___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "netlify-edge"};
static const lean_object* l_Lasm_Target_name___closed__9 = (const lean_object*)&l_Lasm_Target_name___closed__9_value;
static const lean_string_object l_Lasm_Target_name___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bun"};
static const lean_object* l_Lasm_Target_name___closed__10 = (const lean_object*)&l_Lasm_Target_name___closed__10_value;
static const lean_string_object l_Lasm_Target_name___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "deno"};
static const lean_object* l_Lasm_Target_name___closed__11 = (const lean_object*)&l_Lasm_Target_name___closed__11_value;
static const lean_string_object l_Lasm_Target_name___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "deno-deploy"};
static const lean_object* l_Lasm_Target_name___closed__12 = (const lean_object*)&l_Lasm_Target_name___closed__12_value;
static const lean_string_object l_Lasm_Target_name___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "supabase-edge"};
static const lean_object* l_Lasm_Target_name___closed__13 = (const lean_object*)&l_Lasm_Target_name___closed__13_value;
static const lean_string_object l_Lasm_Target_name___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wasi"};
static const lean_object* l_Lasm_Target_name___closed__14 = (const lean_object*)&l_Lasm_Target_name___closed__14_value;
static const lean_string_object l_Lasm_Target_name___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fastly"};
static const lean_object* l_Lasm_Target_name___closed__15 = (const lean_object*)&l_Lasm_Target_name___closed__15_value;
static const lean_string_object l_Lasm_Target_name___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "wasi-http"};
static const lean_object* l_Lasm_Target_name___closed__16 = (const lean_object*)&l_Lasm_Target_name___closed__16_value;
static const lean_string_object l_Lasm_Target_name___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "browser"};
static const lean_object* l_Lasm_Target_name___closed__17 = (const lean_object*)&l_Lasm_Target_name___closed__17_value;
LEAN_EXPORT lean_object* l_Lasm_Target_name(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_Target_name___boxed(lean_object*);
static const lean_closure_object l_Lasm_instToStringTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Target_name___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_instToStringTarget___closed__0 = (const lean_object*)&l_Lasm_instToStringTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_instToStringTarget = (const lean_object*)&l_Lasm_instToStringTarget___closed__0_value;
uint8_t lasm_target(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Target_0__Lasm_stamped___boxed(lean_object*);
static lean_once_cell_t l_Lasm_target___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_target___closed__0;
LEAN_EXPORT uint8_t l_Lasm_target;
LEAN_EXPORT lean_object* l_Lasm_Target_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
case 6:
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
case 7:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(7u);
return v___x_9_;
}
case 8:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(8u);
return v___x_10_;
}
case 9:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(9u);
return v___x_11_;
}
case 10:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(10u);
return v___x_12_;
}
case 11:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(11u);
return v___x_13_;
}
case 12:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(12u);
return v___x_14_;
}
case 13:
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(13u);
return v___x_15_;
}
case 14:
{
lean_object* v___x_16_; 
v___x_16_ = lean_unsigned_to_nat(14u);
return v___x_16_;
}
case 15:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(15u);
return v___x_17_;
}
case 16:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(16u);
return v___x_18_;
}
default: 
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(17u);
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_ctorIdx___boxed(lean_object* v_x_20_){
_start:
{
uint8_t v_x_boxed_21_; lean_object* v_res_22_; 
v_x_boxed_21_ = lean_unbox(v_x_20_);
v_res_22_ = l_Lasm_Target_ctorIdx(v_x_boxed_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim___redArg(lean_object* v_k_23_){
_start:
{
lean_inc(v_k_23_);
return v_k_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim___redArg___boxed(lean_object* v_k_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lasm_Target_ctorElim___redArg(v_k_24_);
lean_dec(v_k_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim(lean_object* v_motive_26_, lean_object* v_ctorIdx_27_, uint8_t v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_inc(v_k_30_);
return v_k_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
uint8_t v_t_boxed_36_; lean_object* v_res_37_; 
v_t_boxed_36_ = lean_unbox(v_t_33_);
v_res_37_ = l_Lasm_Target_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_boxed_36_, v_h_34_, v_k_35_);
lean_dec(v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim___redArg(lean_object* v_node_38_){
_start:
{
lean_inc(v_node_38_);
return v_node_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim___redArg___boxed(lean_object* v_node_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lasm_Target_node_elim___redArg(v_node_39_);
lean_dec(v_node_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim(lean_object* v_motive_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_node_44_){
_start:
{
lean_inc(v_node_44_);
return v_node_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_node_elim___boxed(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_node_48_){
_start:
{
uint8_t v_t_boxed_49_; lean_object* v_res_50_; 
v_t_boxed_49_ = lean_unbox(v_t_46_);
v_res_50_ = l_Lasm_Target_node_elim(v_motive_45_, v_t_boxed_49_, v_h_47_, v_node_48_);
lean_dec(v_node_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim___redArg(lean_object* v_lambda_51_){
_start:
{
lean_inc(v_lambda_51_);
return v_lambda_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim___redArg___boxed(lean_object* v_lambda_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lasm_Target_lambda_elim___redArg(v_lambda_52_);
lean_dec(v_lambda_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim(lean_object* v_motive_54_, uint8_t v_t_55_, lean_object* v_h_56_, lean_object* v_lambda_57_){
_start:
{
lean_inc(v_lambda_57_);
return v_lambda_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambda_elim___boxed(lean_object* v_motive_58_, lean_object* v_t_59_, lean_object* v_h_60_, lean_object* v_lambda_61_){
_start:
{
uint8_t v_t_boxed_62_; lean_object* v_res_63_; 
v_t_boxed_62_ = lean_unbox(v_t_59_);
v_res_63_ = l_Lasm_Target_lambda_elim(v_motive_58_, v_t_boxed_62_, v_h_60_, v_lambda_61_);
lean_dec(v_lambda_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim___redArg(lean_object* v_lambdaEdge_64_){
_start:
{
lean_inc(v_lambdaEdge_64_);
return v_lambdaEdge_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim___redArg___boxed(lean_object* v_lambdaEdge_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lasm_Target_lambdaEdge_elim___redArg(v_lambdaEdge_65_);
lean_dec(v_lambdaEdge_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim(lean_object* v_motive_67_, uint8_t v_t_68_, lean_object* v_h_69_, lean_object* v_lambdaEdge_70_){
_start:
{
lean_inc(v_lambdaEdge_70_);
return v_lambdaEdge_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_lambdaEdge_elim___boxed(lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_lambdaEdge_74_){
_start:
{
uint8_t v_t_boxed_75_; lean_object* v_res_76_; 
v_t_boxed_75_ = lean_unbox(v_t_72_);
v_res_76_ = l_Lasm_Target_lambdaEdge_elim(v_motive_71_, v_t_boxed_75_, v_h_73_, v_lambdaEdge_74_);
lean_dec(v_lambdaEdge_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim___redArg(lean_object* v_vercel_77_){
_start:
{
lean_inc(v_vercel_77_);
return v_vercel_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim___redArg___boxed(lean_object* v_vercel_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lasm_Target_vercel_elim___redArg(v_vercel_78_);
lean_dec(v_vercel_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim(lean_object* v_motive_80_, uint8_t v_t_81_, lean_object* v_h_82_, lean_object* v_vercel_83_){
_start:
{
lean_inc(v_vercel_83_);
return v_vercel_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercel_elim___boxed(lean_object* v_motive_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_vercel_87_){
_start:
{
uint8_t v_t_boxed_88_; lean_object* v_res_89_; 
v_t_boxed_88_ = lean_unbox(v_t_85_);
v_res_89_ = l_Lasm_Target_vercel_elim(v_motive_84_, v_t_boxed_88_, v_h_86_, v_vercel_87_);
lean_dec(v_vercel_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim___redArg(lean_object* v_netlify_90_){
_start:
{
lean_inc(v_netlify_90_);
return v_netlify_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim___redArg___boxed(lean_object* v_netlify_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lasm_Target_netlify_elim___redArg(v_netlify_91_);
lean_dec(v_netlify_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim(lean_object* v_motive_93_, uint8_t v_t_94_, lean_object* v_h_95_, lean_object* v_netlify_96_){
_start:
{
lean_inc(v_netlify_96_);
return v_netlify_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlify_elim___boxed(lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_netlify_100_){
_start:
{
uint8_t v_t_boxed_101_; lean_object* v_res_102_; 
v_t_boxed_101_ = lean_unbox(v_t_98_);
v_res_102_ = l_Lasm_Target_netlify_elim(v_motive_97_, v_t_boxed_101_, v_h_99_, v_netlify_100_);
lean_dec(v_netlify_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim___redArg(lean_object* v_azureFunctions_103_){
_start:
{
lean_inc(v_azureFunctions_103_);
return v_azureFunctions_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim___redArg___boxed(lean_object* v_azureFunctions_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lasm_Target_azureFunctions_elim___redArg(v_azureFunctions_104_);
lean_dec(v_azureFunctions_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim(lean_object* v_motive_106_, uint8_t v_t_107_, lean_object* v_h_108_, lean_object* v_azureFunctions_109_){
_start:
{
lean_inc(v_azureFunctions_109_);
return v_azureFunctions_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_azureFunctions_elim___boxed(lean_object* v_motive_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_azureFunctions_113_){
_start:
{
uint8_t v_t_boxed_114_; lean_object* v_res_115_; 
v_t_boxed_114_ = lean_unbox(v_t_111_);
v_res_115_ = l_Lasm_Target_azureFunctions_elim(v_motive_110_, v_t_boxed_114_, v_h_112_, v_azureFunctions_113_);
lean_dec(v_azureFunctions_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim___redArg(lean_object* v_cloudFunctions_116_){
_start:
{
lean_inc(v_cloudFunctions_116_);
return v_cloudFunctions_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim___redArg___boxed(lean_object* v_cloudFunctions_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lasm_Target_cloudFunctions_elim___redArg(v_cloudFunctions_117_);
lean_dec(v_cloudFunctions_117_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim(lean_object* v_motive_119_, uint8_t v_t_120_, lean_object* v_h_121_, lean_object* v_cloudFunctions_122_){
_start:
{
lean_inc(v_cloudFunctions_122_);
return v_cloudFunctions_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_cloudFunctions_elim___boxed(lean_object* v_motive_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_cloudFunctions_126_){
_start:
{
uint8_t v_t_boxed_127_; lean_object* v_res_128_; 
v_t_boxed_127_ = lean_unbox(v_t_124_);
v_res_128_ = l_Lasm_Target_cloudFunctions_elim(v_motive_123_, v_t_boxed_127_, v_h_125_, v_cloudFunctions_126_);
lean_dec(v_cloudFunctions_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim___redArg(lean_object* v_workers_129_){
_start:
{
lean_inc(v_workers_129_);
return v_workers_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim___redArg___boxed(lean_object* v_workers_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lasm_Target_workers_elim___redArg(v_workers_130_);
lean_dec(v_workers_130_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim(lean_object* v_motive_132_, uint8_t v_t_133_, lean_object* v_h_134_, lean_object* v_workers_135_){
_start:
{
lean_inc(v_workers_135_);
return v_workers_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_workers_elim___boxed(lean_object* v_motive_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_workers_139_){
_start:
{
uint8_t v_t_boxed_140_; lean_object* v_res_141_; 
v_t_boxed_140_ = lean_unbox(v_t_137_);
v_res_141_ = l_Lasm_Target_workers_elim(v_motive_136_, v_t_boxed_140_, v_h_138_, v_workers_139_);
lean_dec(v_workers_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim___redArg(lean_object* v_vercelEdge_142_){
_start:
{
lean_inc(v_vercelEdge_142_);
return v_vercelEdge_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim___redArg___boxed(lean_object* v_vercelEdge_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lasm_Target_vercelEdge_elim___redArg(v_vercelEdge_143_);
lean_dec(v_vercelEdge_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim(lean_object* v_motive_145_, uint8_t v_t_146_, lean_object* v_h_147_, lean_object* v_vercelEdge_148_){
_start:
{
lean_inc(v_vercelEdge_148_);
return v_vercelEdge_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_vercelEdge_elim___boxed(lean_object* v_motive_149_, lean_object* v_t_150_, lean_object* v_h_151_, lean_object* v_vercelEdge_152_){
_start:
{
uint8_t v_t_boxed_153_; lean_object* v_res_154_; 
v_t_boxed_153_ = lean_unbox(v_t_150_);
v_res_154_ = l_Lasm_Target_vercelEdge_elim(v_motive_149_, v_t_boxed_153_, v_h_151_, v_vercelEdge_152_);
lean_dec(v_vercelEdge_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim___redArg(lean_object* v_netlifyEdge_155_){
_start:
{
lean_inc(v_netlifyEdge_155_);
return v_netlifyEdge_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim___redArg___boxed(lean_object* v_netlifyEdge_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lasm_Target_netlifyEdge_elim___redArg(v_netlifyEdge_156_);
lean_dec(v_netlifyEdge_156_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim(lean_object* v_motive_158_, uint8_t v_t_159_, lean_object* v_h_160_, lean_object* v_netlifyEdge_161_){
_start:
{
lean_inc(v_netlifyEdge_161_);
return v_netlifyEdge_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_netlifyEdge_elim___boxed(lean_object* v_motive_162_, lean_object* v_t_163_, lean_object* v_h_164_, lean_object* v_netlifyEdge_165_){
_start:
{
uint8_t v_t_boxed_166_; lean_object* v_res_167_; 
v_t_boxed_166_ = lean_unbox(v_t_163_);
v_res_167_ = l_Lasm_Target_netlifyEdge_elim(v_motive_162_, v_t_boxed_166_, v_h_164_, v_netlifyEdge_165_);
lean_dec(v_netlifyEdge_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim___redArg(lean_object* v_bun_168_){
_start:
{
lean_inc(v_bun_168_);
return v_bun_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim___redArg___boxed(lean_object* v_bun_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_Target_bun_elim___redArg(v_bun_169_);
lean_dec(v_bun_169_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim(lean_object* v_motive_171_, uint8_t v_t_172_, lean_object* v_h_173_, lean_object* v_bun_174_){
_start:
{
lean_inc(v_bun_174_);
return v_bun_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_bun_elim___boxed(lean_object* v_motive_175_, lean_object* v_t_176_, lean_object* v_h_177_, lean_object* v_bun_178_){
_start:
{
uint8_t v_t_boxed_179_; lean_object* v_res_180_; 
v_t_boxed_179_ = lean_unbox(v_t_176_);
v_res_180_ = l_Lasm_Target_bun_elim(v_motive_175_, v_t_boxed_179_, v_h_177_, v_bun_178_);
lean_dec(v_bun_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim___redArg(lean_object* v_deno_181_){
_start:
{
lean_inc(v_deno_181_);
return v_deno_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim___redArg___boxed(lean_object* v_deno_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lasm_Target_deno_elim___redArg(v_deno_182_);
lean_dec(v_deno_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim(lean_object* v_motive_184_, uint8_t v_t_185_, lean_object* v_h_186_, lean_object* v_deno_187_){
_start:
{
lean_inc(v_deno_187_);
return v_deno_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_deno_elim___boxed(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_deno_191_){
_start:
{
uint8_t v_t_boxed_192_; lean_object* v_res_193_; 
v_t_boxed_192_ = lean_unbox(v_t_189_);
v_res_193_ = l_Lasm_Target_deno_elim(v_motive_188_, v_t_boxed_192_, v_h_190_, v_deno_191_);
lean_dec(v_deno_191_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim___redArg(lean_object* v_denoDeploy_194_){
_start:
{
lean_inc(v_denoDeploy_194_);
return v_denoDeploy_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim___redArg___boxed(lean_object* v_denoDeploy_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lasm_Target_denoDeploy_elim___redArg(v_denoDeploy_195_);
lean_dec(v_denoDeploy_195_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim(lean_object* v_motive_197_, uint8_t v_t_198_, lean_object* v_h_199_, lean_object* v_denoDeploy_200_){
_start:
{
lean_inc(v_denoDeploy_200_);
return v_denoDeploy_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_denoDeploy_elim___boxed(lean_object* v_motive_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_denoDeploy_204_){
_start:
{
uint8_t v_t_boxed_205_; lean_object* v_res_206_; 
v_t_boxed_205_ = lean_unbox(v_t_202_);
v_res_206_ = l_Lasm_Target_denoDeploy_elim(v_motive_201_, v_t_boxed_205_, v_h_203_, v_denoDeploy_204_);
lean_dec(v_denoDeploy_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim___redArg(lean_object* v_supabaseEdge_207_){
_start:
{
lean_inc(v_supabaseEdge_207_);
return v_supabaseEdge_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim___redArg___boxed(lean_object* v_supabaseEdge_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lasm_Target_supabaseEdge_elim___redArg(v_supabaseEdge_208_);
lean_dec(v_supabaseEdge_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim(lean_object* v_motive_210_, uint8_t v_t_211_, lean_object* v_h_212_, lean_object* v_supabaseEdge_213_){
_start:
{
lean_inc(v_supabaseEdge_213_);
return v_supabaseEdge_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_supabaseEdge_elim___boxed(lean_object* v_motive_214_, lean_object* v_t_215_, lean_object* v_h_216_, lean_object* v_supabaseEdge_217_){
_start:
{
uint8_t v_t_boxed_218_; lean_object* v_res_219_; 
v_t_boxed_218_ = lean_unbox(v_t_215_);
v_res_219_ = l_Lasm_Target_supabaseEdge_elim(v_motive_214_, v_t_boxed_218_, v_h_216_, v_supabaseEdge_217_);
lean_dec(v_supabaseEdge_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim___redArg(lean_object* v_wasi_220_){
_start:
{
lean_inc(v_wasi_220_);
return v_wasi_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim___redArg___boxed(lean_object* v_wasi_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lasm_Target_wasi_elim___redArg(v_wasi_221_);
lean_dec(v_wasi_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim(lean_object* v_motive_223_, uint8_t v_t_224_, lean_object* v_h_225_, lean_object* v_wasi_226_){
_start:
{
lean_inc(v_wasi_226_);
return v_wasi_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasi_elim___boxed(lean_object* v_motive_227_, lean_object* v_t_228_, lean_object* v_h_229_, lean_object* v_wasi_230_){
_start:
{
uint8_t v_t_boxed_231_; lean_object* v_res_232_; 
v_t_boxed_231_ = lean_unbox(v_t_228_);
v_res_232_ = l_Lasm_Target_wasi_elim(v_motive_227_, v_t_boxed_231_, v_h_229_, v_wasi_230_);
lean_dec(v_wasi_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim___redArg(lean_object* v_fastly_233_){
_start:
{
lean_inc(v_fastly_233_);
return v_fastly_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim___redArg___boxed(lean_object* v_fastly_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lasm_Target_fastly_elim___redArg(v_fastly_234_);
lean_dec(v_fastly_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim(lean_object* v_motive_236_, uint8_t v_t_237_, lean_object* v_h_238_, lean_object* v_fastly_239_){
_start:
{
lean_inc(v_fastly_239_);
return v_fastly_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_fastly_elim___boxed(lean_object* v_motive_240_, lean_object* v_t_241_, lean_object* v_h_242_, lean_object* v_fastly_243_){
_start:
{
uint8_t v_t_boxed_244_; lean_object* v_res_245_; 
v_t_boxed_244_ = lean_unbox(v_t_241_);
v_res_245_ = l_Lasm_Target_fastly_elim(v_motive_240_, v_t_boxed_244_, v_h_242_, v_fastly_243_);
lean_dec(v_fastly_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim___redArg(lean_object* v_wasiHttp_246_){
_start:
{
lean_inc(v_wasiHttp_246_);
return v_wasiHttp_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim___redArg___boxed(lean_object* v_wasiHttp_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_Target_wasiHttp_elim___redArg(v_wasiHttp_247_);
lean_dec(v_wasiHttp_247_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim(lean_object* v_motive_249_, uint8_t v_t_250_, lean_object* v_h_251_, lean_object* v_wasiHttp_252_){
_start:
{
lean_inc(v_wasiHttp_252_);
return v_wasiHttp_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_wasiHttp_elim___boxed(lean_object* v_motive_253_, lean_object* v_t_254_, lean_object* v_h_255_, lean_object* v_wasiHttp_256_){
_start:
{
uint8_t v_t_boxed_257_; lean_object* v_res_258_; 
v_t_boxed_257_ = lean_unbox(v_t_254_);
v_res_258_ = l_Lasm_Target_wasiHttp_elim(v_motive_253_, v_t_boxed_257_, v_h_255_, v_wasiHttp_256_);
lean_dec(v_wasiHttp_256_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim___redArg(lean_object* v_browser_259_){
_start:
{
lean_inc(v_browser_259_);
return v_browser_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim___redArg___boxed(lean_object* v_browser_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_Target_browser_elim___redArg(v_browser_260_);
lean_dec(v_browser_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim(lean_object* v_motive_262_, uint8_t v_t_263_, lean_object* v_h_264_, lean_object* v_browser_265_){
_start:
{
lean_inc(v_browser_265_);
return v_browser_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_browser_elim___boxed(lean_object* v_motive_266_, lean_object* v_t_267_, lean_object* v_h_268_, lean_object* v_browser_269_){
_start:
{
uint8_t v_t_boxed_270_; lean_object* v_res_271_; 
v_t_boxed_270_ = lean_unbox(v_t_267_);
v_res_271_ = l_Lasm_Target_browser_elim(v_motive_266_, v_t_boxed_270_, v_h_268_, v_browser_269_);
lean_dec(v_browser_269_);
return v_res_271_;
}
}
LEAN_EXPORT uint8_t l_Lasm_Target_ofNat(lean_object* v_n_272_){
_start:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(8u);
v___x_274_ = lean_nat_dec_le(v_n_272_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(12u);
v___x_276_ = lean_nat_dec_le(v_n_272_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(14u);
v___x_278_ = lean_nat_dec_le(v_n_272_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(15u);
v___x_280_ = lean_nat_dec_le(v_n_272_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(16u);
v___x_282_ = lean_nat_dec_le(v_n_272_, v___x_281_);
if (v___x_282_ == 0)
{
uint8_t v___x_283_; 
v___x_283_ = 17;
return v___x_283_;
}
else
{
uint8_t v___x_284_; 
v___x_284_ = 16;
return v___x_284_;
}
}
else
{
uint8_t v___x_285_; 
v___x_285_ = 15;
return v___x_285_;
}
}
else
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(13u);
v___x_287_ = lean_nat_dec_le(v_n_272_, v___x_286_);
if (v___x_287_ == 0)
{
uint8_t v___x_288_; 
v___x_288_ = 14;
return v___x_288_;
}
else
{
uint8_t v___x_289_; 
v___x_289_ = 13;
return v___x_289_;
}
}
}
else
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = lean_unsigned_to_nat(10u);
v___x_291_ = lean_nat_dec_le(v_n_272_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(11u);
v___x_293_ = lean_nat_dec_le(v_n_272_, v___x_292_);
if (v___x_293_ == 0)
{
uint8_t v___x_294_; 
v___x_294_ = 12;
return v___x_294_;
}
else
{
uint8_t v___x_295_; 
v___x_295_ = 11;
return v___x_295_;
}
}
else
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(9u);
v___x_297_ = lean_nat_dec_le(v_n_272_, v___x_296_);
if (v___x_297_ == 0)
{
uint8_t v___x_298_; 
v___x_298_ = 10;
return v___x_298_;
}
else
{
uint8_t v___x_299_; 
v___x_299_ = 9;
return v___x_299_;
}
}
}
}
else
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(3u);
v___x_301_ = lean_nat_dec_le(v_n_272_, v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_unsigned_to_nat(5u);
v___x_303_ = lean_nat_dec_le(v_n_272_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(6u);
v___x_305_ = lean_nat_dec_le(v_n_272_, v___x_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_306_ = lean_unsigned_to_nat(7u);
v___x_307_ = lean_nat_dec_le(v_n_272_, v___x_306_);
if (v___x_307_ == 0)
{
uint8_t v___x_308_; 
v___x_308_ = 8;
return v___x_308_;
}
else
{
uint8_t v___x_309_; 
v___x_309_ = 7;
return v___x_309_;
}
}
else
{
uint8_t v___x_310_; 
v___x_310_ = 6;
return v___x_310_;
}
}
else
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(4u);
v___x_312_ = lean_nat_dec_le(v_n_272_, v___x_311_);
if (v___x_312_ == 0)
{
uint8_t v___x_313_; 
v___x_313_ = 5;
return v___x_313_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = 4;
return v___x_314_;
}
}
}
else
{
lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_315_ = lean_unsigned_to_nat(1u);
v___x_316_ = lean_nat_dec_le(v_n_272_, v___x_315_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_unsigned_to_nat(2u);
v___x_318_ = lean_nat_dec_le(v_n_272_, v___x_317_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; 
v___x_319_ = 3;
return v___x_319_;
}
else
{
uint8_t v___x_320_; 
v___x_320_ = 2;
return v___x_320_;
}
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(0u);
v___x_322_ = lean_nat_dec_le(v_n_272_, v___x_321_);
if (v___x_322_ == 0)
{
uint8_t v___x_323_; 
v___x_323_ = 1;
return v___x_323_;
}
else
{
uint8_t v___x_324_; 
v___x_324_ = 0;
return v___x_324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_ofNat___boxed(lean_object* v_n_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = l_Lasm_Target_ofNat(v_n_325_);
lean_dec(v_n_325_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT uint8_t l_Lasm_instDecidableEqTarget(uint8_t v_x_328_, uint8_t v_y_329_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_330_ = l_Lasm_Target_ctorIdx(v_x_328_);
v___x_331_ = l_Lasm_Target_ctorIdx(v_y_329_);
v___x_332_ = lean_nat_dec_eq(v___x_330_, v___x_331_);
lean_dec(v___x_331_);
lean_dec(v___x_330_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_instDecidableEqTarget___boxed(lean_object* v_x_333_, lean_object* v_y_334_){
_start:
{
uint8_t v_x_20__boxed_335_; uint8_t v_y_21__boxed_336_; uint8_t v_res_337_; lean_object* v_r_338_; 
v_x_20__boxed_335_ = lean_unbox(v_x_333_);
v_y_21__boxed_336_ = lean_unbox(v_y_334_);
v_res_337_ = l_Lasm_instDecidableEqTarget(v_x_20__boxed_335_, v_y_21__boxed_336_);
v_r_338_ = lean_box(v_res_337_);
return v_r_338_;
}
}
static lean_object* _init_l_Lasm_instReprTarget_repr___closed__36(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = lean_unsigned_to_nat(2u);
v___x_394_ = lean_nat_to_int(v___x_393_);
return v___x_394_;
}
}
static lean_object* _init_l_Lasm_instReprTarget_repr___closed__37(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_unsigned_to_nat(1u);
v___x_396_ = lean_nat_to_int(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_instReprTarget_repr(uint8_t v_x_397_, lean_object* v_prec_398_){
_start:
{
lean_object* v___y_400_; lean_object* v___y_407_; lean_object* v___y_414_; lean_object* v___y_421_; lean_object* v___y_428_; lean_object* v___y_435_; lean_object* v___y_442_; lean_object* v___y_449_; lean_object* v___y_456_; lean_object* v___y_463_; lean_object* v___y_470_; lean_object* v___y_477_; lean_object* v___y_484_; lean_object* v___y_491_; lean_object* v___y_498_; lean_object* v___y_505_; lean_object* v___y_512_; lean_object* v___y_519_; 
switch(v_x_397_)
{
case 0:
{
lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(1024u);
v___x_526_ = lean_nat_dec_le(v___x_525_, v_prec_398_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_400_ = v___x_527_;
goto v___jp_399_;
}
else
{
lean_object* v___x_528_; 
v___x_528_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_400_ = v___x_528_;
goto v___jp_399_;
}
}
case 1:
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(1024u);
v___x_530_ = lean_nat_dec_le(v___x_529_, v_prec_398_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; 
v___x_531_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_407_ = v___x_531_;
goto v___jp_406_;
}
else
{
lean_object* v___x_532_; 
v___x_532_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_407_ = v___x_532_;
goto v___jp_406_;
}
}
case 2:
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(1024u);
v___x_534_ = lean_nat_dec_le(v___x_533_, v_prec_398_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; 
v___x_535_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_414_ = v___x_535_;
goto v___jp_413_;
}
else
{
lean_object* v___x_536_; 
v___x_536_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_414_ = v___x_536_;
goto v___jp_413_;
}
}
case 3:
{
lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(1024u);
v___x_538_ = lean_nat_dec_le(v___x_537_, v_prec_398_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
v___x_539_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_421_ = v___x_539_;
goto v___jp_420_;
}
else
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_421_ = v___x_540_;
goto v___jp_420_;
}
}
case 4:
{
lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(1024u);
v___x_542_ = lean_nat_dec_le(v___x_541_, v_prec_398_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_428_ = v___x_543_;
goto v___jp_427_;
}
else
{
lean_object* v___x_544_; 
v___x_544_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_428_ = v___x_544_;
goto v___jp_427_;
}
}
case 5:
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = lean_unsigned_to_nat(1024u);
v___x_546_ = lean_nat_dec_le(v___x_545_, v_prec_398_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_435_ = v___x_547_;
goto v___jp_434_;
}
else
{
lean_object* v___x_548_; 
v___x_548_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_435_ = v___x_548_;
goto v___jp_434_;
}
}
case 6:
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(1024u);
v___x_550_ = lean_nat_dec_le(v___x_549_, v_prec_398_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_442_ = v___x_551_;
goto v___jp_441_;
}
else
{
lean_object* v___x_552_; 
v___x_552_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_442_ = v___x_552_;
goto v___jp_441_;
}
}
case 7:
{
lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(1024u);
v___x_554_ = lean_nat_dec_le(v___x_553_, v_prec_398_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_449_ = v___x_555_;
goto v___jp_448_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_449_ = v___x_556_;
goto v___jp_448_;
}
}
case 8:
{
lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(1024u);
v___x_558_ = lean_nat_dec_le(v___x_557_, v_prec_398_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_456_ = v___x_559_;
goto v___jp_455_;
}
else
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_456_ = v___x_560_;
goto v___jp_455_;
}
}
case 9:
{
lean_object* v___x_561_; uint8_t v___x_562_; 
v___x_561_ = lean_unsigned_to_nat(1024u);
v___x_562_ = lean_nat_dec_le(v___x_561_, v_prec_398_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_463_ = v___x_563_;
goto v___jp_462_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_463_ = v___x_564_;
goto v___jp_462_;
}
}
case 10:
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_unsigned_to_nat(1024u);
v___x_566_ = lean_nat_dec_le(v___x_565_, v_prec_398_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_470_ = v___x_567_;
goto v___jp_469_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_470_ = v___x_568_;
goto v___jp_469_;
}
}
case 11:
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_unsigned_to_nat(1024u);
v___x_570_ = lean_nat_dec_le(v___x_569_, v_prec_398_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_477_ = v___x_571_;
goto v___jp_476_;
}
else
{
lean_object* v___x_572_; 
v___x_572_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_477_ = v___x_572_;
goto v___jp_476_;
}
}
case 12:
{
lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_573_ = lean_unsigned_to_nat(1024u);
v___x_574_ = lean_nat_dec_le(v___x_573_, v_prec_398_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_484_ = v___x_575_;
goto v___jp_483_;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_484_ = v___x_576_;
goto v___jp_483_;
}
}
case 13:
{
lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_577_ = lean_unsigned_to_nat(1024u);
v___x_578_ = lean_nat_dec_le(v___x_577_, v_prec_398_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_491_ = v___x_579_;
goto v___jp_490_;
}
else
{
lean_object* v___x_580_; 
v___x_580_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_491_ = v___x_580_;
goto v___jp_490_;
}
}
case 14:
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = lean_unsigned_to_nat(1024u);
v___x_582_ = lean_nat_dec_le(v___x_581_, v_prec_398_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
v___x_583_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_498_ = v___x_583_;
goto v___jp_497_;
}
else
{
lean_object* v___x_584_; 
v___x_584_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_498_ = v___x_584_;
goto v___jp_497_;
}
}
case 15:
{
lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_585_ = lean_unsigned_to_nat(1024u);
v___x_586_ = lean_nat_dec_le(v___x_585_, v_prec_398_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_505_ = v___x_587_;
goto v___jp_504_;
}
else
{
lean_object* v___x_588_; 
v___x_588_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_505_ = v___x_588_;
goto v___jp_504_;
}
}
case 16:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_unsigned_to_nat(1024u);
v___x_590_ = lean_nat_dec_le(v___x_589_, v_prec_398_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
v___x_591_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_512_ = v___x_591_;
goto v___jp_511_;
}
else
{
lean_object* v___x_592_; 
v___x_592_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_512_ = v___x_592_;
goto v___jp_511_;
}
}
default: 
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(1024u);
v___x_594_ = lean_nat_dec_le(v___x_593_, v_prec_398_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__36, &l_Lasm_instReprTarget_repr___closed__36_once, _init_l_Lasm_instReprTarget_repr___closed__36);
v___y_519_ = v___x_595_;
goto v___jp_518_;
}
else
{
lean_object* v___x_596_; 
v___x_596_ = lean_obj_once(&l_Lasm_instReprTarget_repr___closed__37, &l_Lasm_instReprTarget_repr___closed__37_once, _init_l_Lasm_instReprTarget_repr___closed__37);
v___y_519_ = v___x_596_;
goto v___jp_518_;
}
}
}
v___jp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; uint8_t v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_401_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__1));
lean_inc(v___y_400_);
v___x_402_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_402_, 0, v___y_400_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = 0;
v___x_404_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_404_, 0, v___x_402_);
lean_ctor_set_uint8(v___x_404_, sizeof(void*)*1, v___x_403_);
v___x_405_ = l_Repr_addAppParen(v___x_404_, v_prec_398_);
return v___x_405_;
}
v___jp_406_:
{
lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_408_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__3));
lean_inc(v___y_407_);
v___x_409_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_409_, 0, v___y_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = 0;
v___x_411_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_411_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_411_, sizeof(void*)*1, v___x_410_);
v___x_412_ = l_Repr_addAppParen(v___x_411_, v_prec_398_);
return v___x_412_;
}
v___jp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_415_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__5));
lean_inc(v___y_414_);
v___x_416_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_416_, 0, v___y_414_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = 0;
v___x_418_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set_uint8(v___x_418_, sizeof(void*)*1, v___x_417_);
v___x_419_ = l_Repr_addAppParen(v___x_418_, v_prec_398_);
return v___x_419_;
}
v___jp_420_:
{
lean_object* v___x_422_; lean_object* v___x_423_; uint8_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_422_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__7));
lean_inc(v___y_421_);
v___x_423_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_423_, 0, v___y_421_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = 0;
v___x_425_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set_uint8(v___x_425_, sizeof(void*)*1, v___x_424_);
v___x_426_ = l_Repr_addAppParen(v___x_425_, v_prec_398_);
return v___x_426_;
}
v___jp_427_:
{
lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_429_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__9));
lean_inc(v___y_428_);
v___x_430_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_430_, 0, v___y_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = 0;
v___x_432_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set_uint8(v___x_432_, sizeof(void*)*1, v___x_431_);
v___x_433_ = l_Repr_addAppParen(v___x_432_, v_prec_398_);
return v___x_433_;
}
v___jp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_436_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__11));
lean_inc(v___y_435_);
v___x_437_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_437_, 0, v___y_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = 0;
v___x_439_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set_uint8(v___x_439_, sizeof(void*)*1, v___x_438_);
v___x_440_ = l_Repr_addAppParen(v___x_439_, v_prec_398_);
return v___x_440_;
}
v___jp_441_:
{
lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_443_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__13));
lean_inc(v___y_442_);
v___x_444_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_444_, 0, v___y_442_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = 0;
v___x_446_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set_uint8(v___x_446_, sizeof(void*)*1, v___x_445_);
v___x_447_ = l_Repr_addAppParen(v___x_446_, v_prec_398_);
return v___x_447_;
}
v___jp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_450_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__15));
lean_inc(v___y_449_);
v___x_451_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_451_, 0, v___y_449_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = 0;
v___x_453_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_453_, 0, v___x_451_);
lean_ctor_set_uint8(v___x_453_, sizeof(void*)*1, v___x_452_);
v___x_454_ = l_Repr_addAppParen(v___x_453_, v_prec_398_);
return v___x_454_;
}
v___jp_455_:
{
lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_457_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__17));
lean_inc(v___y_456_);
v___x_458_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_458_, 0, v___y_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = 0;
v___x_460_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*1, v___x_459_);
v___x_461_ = l_Repr_addAppParen(v___x_460_, v_prec_398_);
return v___x_461_;
}
v___jp_462_:
{
lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_464_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__19));
lean_inc(v___y_463_);
v___x_465_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_465_, 0, v___y_463_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
v___x_466_ = 0;
v___x_467_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set_uint8(v___x_467_, sizeof(void*)*1, v___x_466_);
v___x_468_ = l_Repr_addAppParen(v___x_467_, v_prec_398_);
return v___x_468_;
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_471_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__21));
lean_inc(v___y_470_);
v___x_472_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_472_, 0, v___y_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = 0;
v___x_474_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set_uint8(v___x_474_, sizeof(void*)*1, v___x_473_);
v___x_475_ = l_Repr_addAppParen(v___x_474_, v_prec_398_);
return v___x_475_;
}
v___jp_476_:
{
lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_478_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__23));
lean_inc(v___y_477_);
v___x_479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_479_, 0, v___y_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = 0;
v___x_481_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*1, v___x_480_);
v___x_482_ = l_Repr_addAppParen(v___x_481_, v_prec_398_);
return v___x_482_;
}
v___jp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_485_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__25));
lean_inc(v___y_484_);
v___x_486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_486_, 0, v___y_484_);
lean_ctor_set(v___x_486_, 1, v___x_485_);
v___x_487_ = 0;
v___x_488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_488_, 0, v___x_486_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*1, v___x_487_);
v___x_489_ = l_Repr_addAppParen(v___x_488_, v_prec_398_);
return v___x_489_;
}
v___jp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_492_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__27));
lean_inc(v___y_491_);
v___x_493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_493_, 0, v___y_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = 0;
v___x_495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set_uint8(v___x_495_, sizeof(void*)*1, v___x_494_);
v___x_496_ = l_Repr_addAppParen(v___x_495_, v_prec_398_);
return v___x_496_;
}
v___jp_497_:
{
lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_499_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__29));
lean_inc(v___y_498_);
v___x_500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_500_, 0, v___y_498_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = 0;
v___x_502_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set_uint8(v___x_502_, sizeof(void*)*1, v___x_501_);
v___x_503_ = l_Repr_addAppParen(v___x_502_, v_prec_398_);
return v___x_503_;
}
v___jp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_506_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__31));
lean_inc(v___y_505_);
v___x_507_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_507_, 0, v___y_505_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
v___x_508_ = 0;
v___x_509_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set_uint8(v___x_509_, sizeof(void*)*1, v___x_508_);
v___x_510_ = l_Repr_addAppParen(v___x_509_, v_prec_398_);
return v___x_510_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_513_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__33));
lean_inc(v___y_512_);
v___x_514_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_514_, 0, v___y_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = 0;
v___x_516_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set_uint8(v___x_516_, sizeof(void*)*1, v___x_515_);
v___x_517_ = l_Repr_addAppParen(v___x_516_, v_prec_398_);
return v___x_517_;
}
v___jp_518_:
{
lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_520_ = ((lean_object*)(l_Lasm_instReprTarget_repr___closed__35));
lean_inc(v___y_519_);
v___x_521_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_521_, 0, v___y_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = 0;
v___x_523_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set_uint8(v___x_523_, sizeof(void*)*1, v___x_522_);
v___x_524_ = l_Repr_addAppParen(v___x_523_, v_prec_398_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_instReprTarget_repr___boxed(lean_object* v_x_597_, lean_object* v_prec_598_){
_start:
{
uint8_t v_x_981__boxed_599_; lean_object* v_res_600_; 
v_x_981__boxed_599_ = lean_unbox(v_x_597_);
v_res_600_ = l_Lasm_instReprTarget_repr(v_x_981__boxed_599_, v_prec_598_);
lean_dec(v_prec_598_);
return v_res_600_;
}
}
static uint8_t _init_l_Lasm_instInhabitedTarget_default(void){
_start:
{
uint8_t v___x_603_; 
v___x_603_ = 0;
return v___x_603_;
}
}
static uint8_t _init_l_Lasm_instInhabitedTarget(void){
_start:
{
uint8_t v___x_604_; 
v___x_604_ = 0;
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_name(uint8_t v_x_623_){
_start:
{
switch(v_x_623_)
{
case 0:
{
lean_object* v___x_624_; 
v___x_624_ = ((lean_object*)(l_Lasm_Target_name___closed__0));
return v___x_624_;
}
case 1:
{
lean_object* v___x_625_; 
v___x_625_ = ((lean_object*)(l_Lasm_Target_name___closed__1));
return v___x_625_;
}
case 2:
{
lean_object* v___x_626_; 
v___x_626_ = ((lean_object*)(l_Lasm_Target_name___closed__2));
return v___x_626_;
}
case 3:
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(l_Lasm_Target_name___closed__3));
return v___x_627_;
}
case 4:
{
lean_object* v___x_628_; 
v___x_628_ = ((lean_object*)(l_Lasm_Target_name___closed__4));
return v___x_628_;
}
case 5:
{
lean_object* v___x_629_; 
v___x_629_ = ((lean_object*)(l_Lasm_Target_name___closed__5));
return v___x_629_;
}
case 6:
{
lean_object* v___x_630_; 
v___x_630_ = ((lean_object*)(l_Lasm_Target_name___closed__6));
return v___x_630_;
}
case 7:
{
lean_object* v___x_631_; 
v___x_631_ = ((lean_object*)(l_Lasm_Target_name___closed__7));
return v___x_631_;
}
case 8:
{
lean_object* v___x_632_; 
v___x_632_ = ((lean_object*)(l_Lasm_Target_name___closed__8));
return v___x_632_;
}
case 9:
{
lean_object* v___x_633_; 
v___x_633_ = ((lean_object*)(l_Lasm_Target_name___closed__9));
return v___x_633_;
}
case 10:
{
lean_object* v___x_634_; 
v___x_634_ = ((lean_object*)(l_Lasm_Target_name___closed__10));
return v___x_634_;
}
case 11:
{
lean_object* v___x_635_; 
v___x_635_ = ((lean_object*)(l_Lasm_Target_name___closed__11));
return v___x_635_;
}
case 12:
{
lean_object* v___x_636_; 
v___x_636_ = ((lean_object*)(l_Lasm_Target_name___closed__12));
return v___x_636_;
}
case 13:
{
lean_object* v___x_637_; 
v___x_637_ = ((lean_object*)(l_Lasm_Target_name___closed__13));
return v___x_637_;
}
case 14:
{
lean_object* v___x_638_; 
v___x_638_ = ((lean_object*)(l_Lasm_Target_name___closed__14));
return v___x_638_;
}
case 15:
{
lean_object* v___x_639_; 
v___x_639_ = ((lean_object*)(l_Lasm_Target_name___closed__15));
return v___x_639_;
}
case 16:
{
lean_object* v___x_640_; 
v___x_640_ = ((lean_object*)(l_Lasm_Target_name___closed__16));
return v___x_640_;
}
default: 
{
lean_object* v___x_641_; 
v___x_641_ = ((lean_object*)(l_Lasm_Target_name___closed__17));
return v___x_641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Target_name___boxed(lean_object* v_x_642_){
_start:
{
uint8_t v_x_166__boxed_643_; lean_object* v_res_644_; 
v_x_166__boxed_643_ = lean_unbox(v_x_642_);
v_res_644_ = l_Lasm_Target_name(v_x_166__boxed_643_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Target_0__Lasm_stamped___boxed(lean_object* v_a_00___x40___internal___hyg_648_){
_start:
{
uint8_t v_res_649_; lean_object* v_r_650_; 
v_res_649_ = lasm_target(v_a_00___x40___internal___hyg_648_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
static uint8_t _init_l_Lasm_target___closed__0(void){
_start:
{
lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_651_ = lean_box(0);
v___x_652_ = lasm_target(v___x_651_);
return v___x_652_;
}
}
static uint8_t _init_l_Lasm_target(void){
_start:
{
uint8_t v___x_653_; 
v___x_653_ = lean_uint8_once(&l_Lasm_target___closed__0, &l_Lasm_target___closed__0_once, _init_l_Lasm_target___closed__0);
return v___x_653_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Target(uint8_t builtin) {
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
l_Lasm_instInhabitedTarget_default = _init_l_Lasm_instInhabitedTarget_default();
l_Lasm_instInhabitedTarget = _init_l_Lasm_instInhabitedTarget();
l_Lasm_target = _init_l_Lasm_target();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
