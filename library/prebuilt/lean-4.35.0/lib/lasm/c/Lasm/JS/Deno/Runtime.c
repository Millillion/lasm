// Lean compiler output
// Module: Lasm.JS.Deno.Runtime
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Url
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
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSEnv___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSEnv___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSEnv___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSEnv___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSEnv = (const lean_object*)&l_Lasm_JS_Deno_instToJSEnv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSEnv___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSEnv___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSEnv___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSEnv___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSEnv___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSEnv___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Deno.Env"};
static const lean_object* l_Lasm_JS_Deno_instFromJSEnv___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSEnv___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSEnv = (const lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqSignal_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqSignal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqSignal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqSignal___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqSignal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqSignal = (const lean_object*)&l_Lasm_JS_Deno_instBEqSignal___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigabrt"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigalrm"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.Signal.sigbreak"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigbus"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigchld"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigcont"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigemt"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigfpe"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__15_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sighup"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__16_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__17_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigill"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__18 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__18_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__19 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__19_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.siginfo"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__20 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__20_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__21 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__21_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigint"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__22 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__22_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__23 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__23_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Deno.Signal.sigio"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__24 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__24_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__25 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__25_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigpoll"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__26 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__26_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__26_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__27 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__27_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.Signal.sigunused"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__28 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__28_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__28_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__29 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__29_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigkill"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__30 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__30_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__31 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__31_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigpipe"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__32 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__32_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__32_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__33 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__33_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigprof"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__34 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__34_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__34_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__35 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__35_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigpwr"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__36 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__36_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__37 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__37_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigquit"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__38 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__38_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__38_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__39 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__39_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigsegv"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__40 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__40_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__40_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__41 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__41_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.Signal.sigstkflt"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__42 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__42_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__42_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__43 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__43_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigstop"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__44 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__44_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__44_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__45 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__45_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigsys"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__46 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__46_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__46_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__47 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__47_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigterm"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__48 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__48_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__48_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__49 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__49_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigtrap"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__50 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__50_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__50_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__51 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__51_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigtstp"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__52 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__52_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__52_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__53 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__53_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigttin"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__54 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__54_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__54_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__55 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__55_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigttou"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__56 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__56_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__56_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__57 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__57_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.Signal.sigurg"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__58 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__58_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__58_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__59 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__59_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigusr1"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__60 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__60_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__60_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__61 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__61_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigusr2"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__62 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__62_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__62_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__63 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__63_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.Signal.sigvtalrm"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__64 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__64_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__64_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__65 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__65_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.Signal.sigwinch"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__66 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__66_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__66_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__67 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__67_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigxcpu"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__68 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__68_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__68_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__69 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__69_value;
static const lean_string_object l_Lasm_JS_Deno_instReprSignal_repr___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.Signal.sigxfsz"};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__70 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__70_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprSignal_repr___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__70_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__71 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal_repr___closed__71_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__72;
static lean_once_cell_t l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprSignal_repr___closed__73;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSignal_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSignal_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprSignal_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprSignal___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprSignal = (const lean_object*)&l_Lasm_JS_Deno_instReprSignal___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedSignal_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedSignal;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGABRT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGALRM"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SIGBREAK"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGBUS"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGCHLD"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGCONT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGEMT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGFPE"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGHUP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGILL"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGINFO"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGINT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__22 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__22_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SIGIO"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__24 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__24_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGPOLL"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__26 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__26_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__26_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SIGUNUSED"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__28 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__28_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__28_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGKILL"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__30 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__30_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGPIPE"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__32 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__32_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__32_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGPROF"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__34 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__34_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__34_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGPWR"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__36 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__36_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGQUIT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__38 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__38_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__38_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGSEGV"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__40 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__40_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__40_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SIGSTKFLT"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__42 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__42_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__42_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGSTOP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__44 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__44_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__44_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGSYS"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__46 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__46_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__46_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTERM"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__48 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__48_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__48_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTRAP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__50 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__50_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__50_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTSTP"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__52 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__52_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__52_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTTIN"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__54 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__54_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__54_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGTTOU"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__56 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__56_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__56_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SIGURG"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__58 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__58_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__58_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGUSR1"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__60 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__60_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__60_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGUSR2"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__62 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__62_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__62_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "SIGVTALRM"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__64 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__64_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__64_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "SIGWINCH"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__66 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__66_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__66_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGXCPU"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__68 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__68_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__68_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SIGXFSZ"};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__70 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__70_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__70_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSSignal___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSSignal___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSSignal = (const lean_object*)&l_Lasm_JS_Deno_instToJSSignal___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__11_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__13_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(22) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__15_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(21) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__17_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(18) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__19_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(16) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__21_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__22 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__22_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(14) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__23 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__23_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__24 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__24_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__25 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__25_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__26 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__26_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__27 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__27_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__28 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__28_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__29 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__29_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__30 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__30_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__31 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__31_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__32 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__32_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__33 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__33_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__34 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__34_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__35 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__35_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__36 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__36_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__37 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__37_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSSignal___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSignal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Deno.Signal"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSSignal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSSignal___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSSignal = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqBuildArch_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqBuildArch_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqBuildArch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqBuildArch_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqBuildArch___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqBuildArch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqBuildArch = (const lean_object*)&l_Lasm_JS_Deno_instBEqBuildArch___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildArch_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.BuildArch.x8664"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildArch_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildArch_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildArch_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildArch_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildArch_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Deno.BuildArch.aarch64"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildArch_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildArch_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildArch_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildArch_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprBuildArch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprBuildArch_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprBuildArch___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildArch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprBuildArch = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildArch___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedBuildArch_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedBuildArch;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "x86_64"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aarch64"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSBuildArch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSBuildArch___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSBuildArch___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSBuildArch = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildArch___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSBuildArch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuildArch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.BuildArch"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildArch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSBuildArch = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildArch___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqBuildOs_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqBuildOs_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqBuildOs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqBuildOs_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqBuildOs___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqBuildOs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqBuildOs = (const lean_object*)&l_Lasm_JS_Deno_instBEqBuildOs___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.BuildOs.darwin"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Deno.BuildOs.linux"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.BuildOs.android"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.BuildOs.windows"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.BuildOs.freebsd"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.BuildOs.netbsd"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.BuildOs.aix"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.BuildOs.solaris"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__15_value;
static const lean_string_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Deno.BuildOs.illumos"};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprBuildOs_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__16_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs_repr___closed__17_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprBuildOs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprBuildOs_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprBuildOs___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprBuildOs = (const lean_object*)&l_Lasm_JS_Deno_instReprBuildOs___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedBuildOs_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedBuildOs;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "darwin"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "linux"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "android"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "windows"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "freebsd"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "netbsd"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "aix"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "solaris"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "illumos"};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__17_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSBuildOs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSBuildOs___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSBuildOs___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSBuildOs = (const lean_object*)&l_Lasm_JS_Deno_instToJSBuildOs___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSBuildOs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuildOs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.BuildOs"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSBuildOs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSBuildOs = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuildOs___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rss"};
static const lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "heapTotal"};
static const lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "heapUsed"};
static const lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "external"};
static const lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.MemoryUsage"};
static const lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "total"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "free"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "available"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "buffers"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cached"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "swapTotal"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "swapFree"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.SystemMemoryInfo"};
static const lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDOMStringOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrURL = (const lean_object*)&l_Lasm_JS_Deno_instToJSDOMStringOrURL___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrURL = (const lean_object*)&l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeURLDOMStringOrURL = (const lean_object*)&l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSAddSignalListenerHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSEnv___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Deno.AddSignalListenerHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSAddSignalListenerHandler___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9;
static lean_once_cell_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__10;
static lean_once_cell_t l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSRemoveSignalListenerHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSEnv___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Deno.RemoveSignalListenerHandler"};
static const lean_object* l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSEnv___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler = (const lean_object*)&l_Lasm_JS_Deno_instFromJSRemoveSignalListenerHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrObject___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDoubleOrObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDoubleOrObject___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrObject___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrObject___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrObject = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrObject___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrObject = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "arch"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "os"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "standalone"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "vendor"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSBuild___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSBuild___closed__0;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSBuild___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSBuild___closed__1;
static const lean_string_object l_Lasm_JS_Deno_instFromJSBuild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.Build"};
static const lean_object* l_Lasm_JS_Deno_instFromJSBuild___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSBuild___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSBuild___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild;
static const lean_string_object l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "deno"};
static const lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v8"};
static const lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "typescript"};
static const lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSVersion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSVersion___closed__0;
static const lean_string_object l_Lasm_JS_Deno_instFromJSVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.Version"};
static const lean_object* l_Lasm_JS_Deno_instFromJSVersion___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSVersion___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instFromJSVersion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instFromJSVersion___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion;
static const lean_string_object l_Lasm_JS_Deno_Env_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Deno_Env_get___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Env_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_get___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Env_set___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "set"};
static const lean_object* l_Lasm_JS_Deno_Env_set___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Env_set___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Env_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Deno_Env_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Env_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_delete___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Env_has___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "has"};
static const lean_object* l_Lasm_JS_Deno_Env_has___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Env_has___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_has(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_has___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "property "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.Record (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_Env_toObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toObject"};
static const lean_object* l_Lasm_JS_Deno_Env_toObject___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_Env_toObject___closed__0_value;
static const lean_array_object l_Lasm_JS_Deno_Env_toObject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_Env_toObject___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_Env_toObject___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_Env_toObject___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_Env_toObject___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_toObject(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_toObject___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Deno"};
static const lean_object* l_Lasm_JS_Deno_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_pid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pid"};
static const lean_object* l_Lasm_JS_Deno_pid___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_pid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_pid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_pid___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_pid___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_pid___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_pid___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_pid___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_pid___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_pid();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_pid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_ppid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ppid"};
static const lean_object* l_Lasm_JS_Deno_ppid___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_ppid___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_ppid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_ppid___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_ppid___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_ppid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_ppid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_ppid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_ppid___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_ppid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ppid();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ppid___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_noColor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "noColor"};
static const lean_object* l_Lasm_JS_Deno_noColor___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_noColor___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_noColor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_noColor___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_noColor___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_noColor___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_noColor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_noColor___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_noColor___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_noColor___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_noColor();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_noColor___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exitCode"};
static const lean_object* l_Lasm_JS_Deno_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_exitCode___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_exitCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_exitCode___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_exitCode___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_exitCode___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_exitCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_exitCode___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_exitCode___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_exitCode___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exitCode();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exitCode___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Deno_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_env___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_env___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_env___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_env___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_env___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_env___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_env___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_build___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "build"};
static const lean_object* l_Lasm_JS_Deno_build___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_build___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_build___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_build___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_build___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_build___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_build___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_build___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_build___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_build___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_build();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_build___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lasm_JS_Deno_version___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_version___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_version___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_version___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_version___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_version___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_version___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_version___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_version___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_version___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_version___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_args___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "args"};
static const lean_object* l_Lasm_JS_Deno_args___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_args___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_args___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_args___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_args___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_args___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_args___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_args___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_args___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_args___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_args();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_args___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_mainModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mainModule"};
static const lean_object* l_Lasm_JS_Deno_mainModule___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_mainModule___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_mainModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_mainModule___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_mainModule___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_mainModule___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_mainModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_pid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_mainModule___closed__1_value)}};
static const lean_object* l_Lasm_JS_Deno_mainModule___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_mainModule___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mainModule();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mainModule___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_memoryUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Deno.memoryUsage"};
static const lean_object* l_Lasm_JS_Deno_memoryUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_memoryUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Deno_memoryUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_memoryUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Deno.memoryUsage"};
static const lean_object* l_Lasm_JS_Deno_memoryUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_memoryUsage___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_memoryUsage___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_memoryUsage();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_memoryUsage___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_hostname___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.hostname"};
static const lean_object* l_Lasm_JS_Deno_hostname___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_hostname___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_hostname___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.hostname"};
static const lean_object* l_Lasm_JS_Deno_hostname___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_hostname___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_hostname___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_hostname___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_hostname___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_hostname___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_hostname___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_hostname();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_hostname___boxed(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Array (Float)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "an element is not Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_loadavg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Deno.loadavg"};
static const lean_object* l_Lasm_JS_Deno_loadavg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_loadavg___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_loadavg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Deno.loadavg"};
static const lean_object* l_Lasm_JS_Deno_loadavg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_loadavg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_loadavg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_loadavg___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_loadavg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_loadavg___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_loadavg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_loadavg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_loadavg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_systemMemoryInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.systemMemoryInfo"};
static const lean_object* l_Lasm_JS_Deno_systemMemoryInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_systemMemoryInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_systemMemoryInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Deno.systemMemoryInfo"};
static const lean_object* l_Lasm_JS_Deno_systemMemoryInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_systemMemoryInfo___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_systemMemoryInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_systemMemoryInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_systemMemoryInfo___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_systemMemoryInfo___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_systemMemoryInfo___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_systemMemoryInfo();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_systemMemoryInfo___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_osRelease___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Deno.osRelease"};
static const lean_object* l_Lasm_JS_Deno_osRelease___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_osRelease___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_osRelease___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Deno.osRelease"};
static const lean_object* l_Lasm_JS_Deno_osRelease___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_osRelease___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_osRelease___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_osRelease___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_osRelease___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_osRelease___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_osRelease___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osRelease();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osRelease___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_osUptime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.osUptime"};
static const lean_object* l_Lasm_JS_Deno_osUptime___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_osUptime___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_osUptime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.osUptime"};
static const lean_object* l_Lasm_JS_Deno_osUptime___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_osUptime___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_osUptime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_osUptime___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_osUptime___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_osUptime___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_osUptime___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osUptime();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osUptime___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_exit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Deno.exit"};
static const lean_object* l_Lasm_JS_Deno_exit___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_exit___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_exit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Deno.exit"};
static const lean_object* l_Lasm_JS_Deno_exit___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_exit___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_exit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_exit___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_exit___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_exit___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_exit___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exit(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_execPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.execPath"};
static const lean_object* l_Lasm_JS_Deno_execPath___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_execPath___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_execPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.execPath"};
static const lean_object* l_Lasm_JS_Deno_execPath___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_execPath___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_execPath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_execPath___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_execPath___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_execPath___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_execPath___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_execPath();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_execPath___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_chdir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Deno.chdir"};
static const lean_object* l_Lasm_JS_Deno_chdir___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_chdir___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_chdir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Deno.chdir"};
static const lean_object* l_Lasm_JS_Deno_chdir___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_chdir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_chdir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_chdir___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_chdir___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_chdir___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_chdir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chdir(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chdir___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_cwd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Deno.cwd"};
static const lean_object* l_Lasm_JS_Deno_cwd___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_cwd___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_cwd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deno.cwd"};
static const lean_object* l_Lasm_JS_Deno_cwd___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_cwd___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_cwd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_cwd___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_cwd___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_cwd___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_cwd___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cwd();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cwd___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_addSignalListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Deno.addSignalListener"};
static const lean_object* l_Lasm_JS_Deno_addSignalListener___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_addSignalListener___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_addSignalListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Deno.addSignalListener"};
static const lean_object* l_Lasm_JS_Deno_addSignalListener___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_addSignalListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_addSignalListener___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_addSignalListener___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_addSignalListener___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_addSignalListener___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_addSignalListener___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_addSignalListener(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_addSignalListener___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_removeSignalListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.removeSignalListener"};
static const lean_object* l_Lasm_JS_Deno_removeSignalListener___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_removeSignalListener___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_removeSignalListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Deno.removeSignalListener"};
static const lean_object* l_Lasm_JS_Deno_removeSignalListener___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_removeSignalListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_removeSignalListener___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_removeSignalListener___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_removeSignalListener___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_removeSignalListener___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_removeSignalListener___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSignalListener(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSignalListener___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_refTimer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Deno.refTimer"};
static const lean_object* l_Lasm_JS_Deno_refTimer___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_refTimer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_refTimer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Deno.refTimer"};
static const lean_object* l_Lasm_JS_Deno_refTimer___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_refTimer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_refTimer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_refTimer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_refTimer___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_refTimer___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_refTimer___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_refTimer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_refTimer___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_unrefTimer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.unrefTimer"};
static const lean_object* l_Lasm_JS_Deno_unrefTimer___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_unrefTimer___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_unrefTimer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Deno.unrefTimer"};
static const lean_object* l_Lasm_JS_Deno_unrefTimer___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_unrefTimer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_unrefTimer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_unrefTimer___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_unrefTimer___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_unrefTimer___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_unrefTimer___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_unrefTimer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_unrefTimer___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_uid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Deno.uid"};
static const lean_object* l_Lasm_JS_Deno_uid___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_uid___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_uid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deno.uid"};
static const lean_object* l_Lasm_JS_Deno_uid___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_uid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_uid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_uid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_uid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_uid___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_uid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_uid();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_uid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_gid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.JS.Deno.gid"};
static const lean_object* l_Lasm_JS_Deno_gid___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_gid___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_gid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deno.gid"};
static const lean_object* l_Lasm_JS_Deno_gid___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_gid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_gid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_gid___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_gid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_gid___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_gid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_gid();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_gid___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSEnv___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSEnv___lam__0(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 9)
{
lean_object* v_value_10_; lean_object* v___x_11_; 
v_value_10_ = lean_ctor_get(v_x_9_, 0);
lean_inc(v_value_10_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v_value_10_);
return v___x_11_;
}
else
{
lean_object* v___x_12_; 
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSEnv___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSEnv___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSEnv___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorIdx(uint8_t v_x_22_){
_start:
{
switch(v_x_22_)
{
case 0:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(0u);
return v___x_23_;
}
case 1:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(1u);
return v___x_24_;
}
case 2:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(2u);
return v___x_25_;
}
case 3:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(3u);
return v___x_26_;
}
case 4:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(4u);
return v___x_27_;
}
case 5:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(5u);
return v___x_28_;
}
case 6:
{
lean_object* v___x_29_; 
v___x_29_ = lean_unsigned_to_nat(6u);
return v___x_29_;
}
case 7:
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(7u);
return v___x_30_;
}
case 8:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(8u);
return v___x_31_;
}
case 9:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(9u);
return v___x_32_;
}
case 10:
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(10u);
return v___x_33_;
}
case 11:
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(11u);
return v___x_34_;
}
case 12:
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(12u);
return v___x_35_;
}
case 13:
{
lean_object* v___x_36_; 
v___x_36_ = lean_unsigned_to_nat(13u);
return v___x_36_;
}
case 14:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(14u);
return v___x_37_;
}
case 15:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(15u);
return v___x_38_;
}
case 16:
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(16u);
return v___x_39_;
}
case 17:
{
lean_object* v___x_40_; 
v___x_40_ = lean_unsigned_to_nat(17u);
return v___x_40_;
}
case 18:
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(18u);
return v___x_41_;
}
case 19:
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(19u);
return v___x_42_;
}
case 20:
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(20u);
return v___x_43_;
}
case 21:
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(21u);
return v___x_44_;
}
case 22:
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(22u);
return v___x_45_;
}
case 23:
{
lean_object* v___x_46_; 
v___x_46_ = lean_unsigned_to_nat(23u);
return v___x_46_;
}
case 24:
{
lean_object* v___x_47_; 
v___x_47_ = lean_unsigned_to_nat(24u);
return v___x_47_;
}
case 25:
{
lean_object* v___x_48_; 
v___x_48_ = lean_unsigned_to_nat(25u);
return v___x_48_;
}
case 26:
{
lean_object* v___x_49_; 
v___x_49_ = lean_unsigned_to_nat(26u);
return v___x_49_;
}
case 27:
{
lean_object* v___x_50_; 
v___x_50_ = lean_unsigned_to_nat(27u);
return v___x_50_;
}
case 28:
{
lean_object* v___x_51_; 
v___x_51_ = lean_unsigned_to_nat(28u);
return v___x_51_;
}
case 29:
{
lean_object* v___x_52_; 
v___x_52_ = lean_unsigned_to_nat(29u);
return v___x_52_;
}
case 30:
{
lean_object* v___x_53_; 
v___x_53_ = lean_unsigned_to_nat(30u);
return v___x_53_;
}
case 31:
{
lean_object* v___x_54_; 
v___x_54_ = lean_unsigned_to_nat(31u);
return v___x_54_;
}
case 32:
{
lean_object* v___x_55_; 
v___x_55_ = lean_unsigned_to_nat(32u);
return v___x_55_;
}
case 33:
{
lean_object* v___x_56_; 
v___x_56_ = lean_unsigned_to_nat(33u);
return v___x_56_;
}
case 34:
{
lean_object* v___x_57_; 
v___x_57_ = lean_unsigned_to_nat(34u);
return v___x_57_;
}
default: 
{
lean_object* v___x_58_; 
v___x_58_ = lean_unsigned_to_nat(35u);
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorIdx___boxed(lean_object* v_x_59_){
_start:
{
uint8_t v_x_boxed_60_; lean_object* v_res_61_; 
v_x_boxed_60_ = lean_unbox(v_x_59_);
v_res_61_ = l_Lasm_JS_Deno_Signal_ctorIdx(v_x_boxed_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim___redArg(lean_object* v_k_62_){
_start:
{
lean_inc(v_k_62_);
return v_k_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim___redArg___boxed(lean_object* v_k_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lasm_JS_Deno_Signal_ctorElim___redArg(v_k_63_);
lean_dec(v_k_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim(lean_object* v_motive_65_, lean_object* v_ctorIdx_66_, uint8_t v_t_67_, lean_object* v_h_68_, lean_object* v_k_69_){
_start:
{
lean_inc(v_k_69_);
return v_k_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_ctorElim___boxed(lean_object* v_motive_70_, lean_object* v_ctorIdx_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_k_74_){
_start:
{
uint8_t v_t_boxed_75_; lean_object* v_res_76_; 
v_t_boxed_75_ = lean_unbox(v_t_72_);
v_res_76_ = l_Lasm_JS_Deno_Signal_ctorElim(v_motive_70_, v_ctorIdx_71_, v_t_boxed_75_, v_h_73_, v_k_74_);
lean_dec(v_k_74_);
lean_dec(v_ctorIdx_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim___redArg(lean_object* v_sigabrt_77_){
_start:
{
lean_inc(v_sigabrt_77_);
return v_sigabrt_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim___redArg___boxed(lean_object* v_sigabrt_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lasm_JS_Deno_Signal_sigabrt_elim___redArg(v_sigabrt_78_);
lean_dec(v_sigabrt_78_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim(lean_object* v_motive_80_, uint8_t v_t_81_, lean_object* v_h_82_, lean_object* v_sigabrt_83_){
_start:
{
lean_inc(v_sigabrt_83_);
return v_sigabrt_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigabrt_elim___boxed(lean_object* v_motive_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_sigabrt_87_){
_start:
{
uint8_t v_t_boxed_88_; lean_object* v_res_89_; 
v_t_boxed_88_ = lean_unbox(v_t_85_);
v_res_89_ = l_Lasm_JS_Deno_Signal_sigabrt_elim(v_motive_84_, v_t_boxed_88_, v_h_86_, v_sigabrt_87_);
lean_dec(v_sigabrt_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim___redArg(lean_object* v_sigalrm_90_){
_start:
{
lean_inc(v_sigalrm_90_);
return v_sigalrm_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim___redArg___boxed(lean_object* v_sigalrm_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lasm_JS_Deno_Signal_sigalrm_elim___redArg(v_sigalrm_91_);
lean_dec(v_sigalrm_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim(lean_object* v_motive_93_, uint8_t v_t_94_, lean_object* v_h_95_, lean_object* v_sigalrm_96_){
_start:
{
lean_inc(v_sigalrm_96_);
return v_sigalrm_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigalrm_elim___boxed(lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_sigalrm_100_){
_start:
{
uint8_t v_t_boxed_101_; lean_object* v_res_102_; 
v_t_boxed_101_ = lean_unbox(v_t_98_);
v_res_102_ = l_Lasm_JS_Deno_Signal_sigalrm_elim(v_motive_97_, v_t_boxed_101_, v_h_99_, v_sigalrm_100_);
lean_dec(v_sigalrm_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim___redArg(lean_object* v_sigbreak_103_){
_start:
{
lean_inc(v_sigbreak_103_);
return v_sigbreak_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim___redArg___boxed(lean_object* v_sigbreak_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lasm_JS_Deno_Signal_sigbreak_elim___redArg(v_sigbreak_104_);
lean_dec(v_sigbreak_104_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim(lean_object* v_motive_106_, uint8_t v_t_107_, lean_object* v_h_108_, lean_object* v_sigbreak_109_){
_start:
{
lean_inc(v_sigbreak_109_);
return v_sigbreak_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbreak_elim___boxed(lean_object* v_motive_110_, lean_object* v_t_111_, lean_object* v_h_112_, lean_object* v_sigbreak_113_){
_start:
{
uint8_t v_t_boxed_114_; lean_object* v_res_115_; 
v_t_boxed_114_ = lean_unbox(v_t_111_);
v_res_115_ = l_Lasm_JS_Deno_Signal_sigbreak_elim(v_motive_110_, v_t_boxed_114_, v_h_112_, v_sigbreak_113_);
lean_dec(v_sigbreak_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim___redArg(lean_object* v_sigbus_116_){
_start:
{
lean_inc(v_sigbus_116_);
return v_sigbus_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim___redArg___boxed(lean_object* v_sigbus_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lasm_JS_Deno_Signal_sigbus_elim___redArg(v_sigbus_117_);
lean_dec(v_sigbus_117_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim(lean_object* v_motive_119_, uint8_t v_t_120_, lean_object* v_h_121_, lean_object* v_sigbus_122_){
_start:
{
lean_inc(v_sigbus_122_);
return v_sigbus_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigbus_elim___boxed(lean_object* v_motive_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_sigbus_126_){
_start:
{
uint8_t v_t_boxed_127_; lean_object* v_res_128_; 
v_t_boxed_127_ = lean_unbox(v_t_124_);
v_res_128_ = l_Lasm_JS_Deno_Signal_sigbus_elim(v_motive_123_, v_t_boxed_127_, v_h_125_, v_sigbus_126_);
lean_dec(v_sigbus_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim___redArg(lean_object* v_sigchld_129_){
_start:
{
lean_inc(v_sigchld_129_);
return v_sigchld_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim___redArg___boxed(lean_object* v_sigchld_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lasm_JS_Deno_Signal_sigchld_elim___redArg(v_sigchld_130_);
lean_dec(v_sigchld_130_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim(lean_object* v_motive_132_, uint8_t v_t_133_, lean_object* v_h_134_, lean_object* v_sigchld_135_){
_start:
{
lean_inc(v_sigchld_135_);
return v_sigchld_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigchld_elim___boxed(lean_object* v_motive_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_sigchld_139_){
_start:
{
uint8_t v_t_boxed_140_; lean_object* v_res_141_; 
v_t_boxed_140_ = lean_unbox(v_t_137_);
v_res_141_ = l_Lasm_JS_Deno_Signal_sigchld_elim(v_motive_136_, v_t_boxed_140_, v_h_138_, v_sigchld_139_);
lean_dec(v_sigchld_139_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim___redArg(lean_object* v_sigcont_142_){
_start:
{
lean_inc(v_sigcont_142_);
return v_sigcont_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim___redArg___boxed(lean_object* v_sigcont_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lasm_JS_Deno_Signal_sigcont_elim___redArg(v_sigcont_143_);
lean_dec(v_sigcont_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim(lean_object* v_motive_145_, uint8_t v_t_146_, lean_object* v_h_147_, lean_object* v_sigcont_148_){
_start:
{
lean_inc(v_sigcont_148_);
return v_sigcont_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigcont_elim___boxed(lean_object* v_motive_149_, lean_object* v_t_150_, lean_object* v_h_151_, lean_object* v_sigcont_152_){
_start:
{
uint8_t v_t_boxed_153_; lean_object* v_res_154_; 
v_t_boxed_153_ = lean_unbox(v_t_150_);
v_res_154_ = l_Lasm_JS_Deno_Signal_sigcont_elim(v_motive_149_, v_t_boxed_153_, v_h_151_, v_sigcont_152_);
lean_dec(v_sigcont_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim___redArg(lean_object* v_sigemt_155_){
_start:
{
lean_inc(v_sigemt_155_);
return v_sigemt_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim___redArg___boxed(lean_object* v_sigemt_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lasm_JS_Deno_Signal_sigemt_elim___redArg(v_sigemt_156_);
lean_dec(v_sigemt_156_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim(lean_object* v_motive_158_, uint8_t v_t_159_, lean_object* v_h_160_, lean_object* v_sigemt_161_){
_start:
{
lean_inc(v_sigemt_161_);
return v_sigemt_161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigemt_elim___boxed(lean_object* v_motive_162_, lean_object* v_t_163_, lean_object* v_h_164_, lean_object* v_sigemt_165_){
_start:
{
uint8_t v_t_boxed_166_; lean_object* v_res_167_; 
v_t_boxed_166_ = lean_unbox(v_t_163_);
v_res_167_ = l_Lasm_JS_Deno_Signal_sigemt_elim(v_motive_162_, v_t_boxed_166_, v_h_164_, v_sigemt_165_);
lean_dec(v_sigemt_165_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim___redArg(lean_object* v_sigfpe_168_){
_start:
{
lean_inc(v_sigfpe_168_);
return v_sigfpe_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim___redArg___boxed(lean_object* v_sigfpe_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_JS_Deno_Signal_sigfpe_elim___redArg(v_sigfpe_169_);
lean_dec(v_sigfpe_169_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim(lean_object* v_motive_171_, uint8_t v_t_172_, lean_object* v_h_173_, lean_object* v_sigfpe_174_){
_start:
{
lean_inc(v_sigfpe_174_);
return v_sigfpe_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigfpe_elim___boxed(lean_object* v_motive_175_, lean_object* v_t_176_, lean_object* v_h_177_, lean_object* v_sigfpe_178_){
_start:
{
uint8_t v_t_boxed_179_; lean_object* v_res_180_; 
v_t_boxed_179_ = lean_unbox(v_t_176_);
v_res_180_ = l_Lasm_JS_Deno_Signal_sigfpe_elim(v_motive_175_, v_t_boxed_179_, v_h_177_, v_sigfpe_178_);
lean_dec(v_sigfpe_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim___redArg(lean_object* v_sighup_181_){
_start:
{
lean_inc(v_sighup_181_);
return v_sighup_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim___redArg___boxed(lean_object* v_sighup_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lasm_JS_Deno_Signal_sighup_elim___redArg(v_sighup_182_);
lean_dec(v_sighup_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim(lean_object* v_motive_184_, uint8_t v_t_185_, lean_object* v_h_186_, lean_object* v_sighup_187_){
_start:
{
lean_inc(v_sighup_187_);
return v_sighup_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sighup_elim___boxed(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_sighup_191_){
_start:
{
uint8_t v_t_boxed_192_; lean_object* v_res_193_; 
v_t_boxed_192_ = lean_unbox(v_t_189_);
v_res_193_ = l_Lasm_JS_Deno_Signal_sighup_elim(v_motive_188_, v_t_boxed_192_, v_h_190_, v_sighup_191_);
lean_dec(v_sighup_191_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim___redArg(lean_object* v_sigill_194_){
_start:
{
lean_inc(v_sigill_194_);
return v_sigill_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim___redArg___boxed(lean_object* v_sigill_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lasm_JS_Deno_Signal_sigill_elim___redArg(v_sigill_195_);
lean_dec(v_sigill_195_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim(lean_object* v_motive_197_, uint8_t v_t_198_, lean_object* v_h_199_, lean_object* v_sigill_200_){
_start:
{
lean_inc(v_sigill_200_);
return v_sigill_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigill_elim___boxed(lean_object* v_motive_201_, lean_object* v_t_202_, lean_object* v_h_203_, lean_object* v_sigill_204_){
_start:
{
uint8_t v_t_boxed_205_; lean_object* v_res_206_; 
v_t_boxed_205_ = lean_unbox(v_t_202_);
v_res_206_ = l_Lasm_JS_Deno_Signal_sigill_elim(v_motive_201_, v_t_boxed_205_, v_h_203_, v_sigill_204_);
lean_dec(v_sigill_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim___redArg(lean_object* v_siginfo_207_){
_start:
{
lean_inc(v_siginfo_207_);
return v_siginfo_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim___redArg___boxed(lean_object* v_siginfo_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lasm_JS_Deno_Signal_siginfo_elim___redArg(v_siginfo_208_);
lean_dec(v_siginfo_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim(lean_object* v_motive_210_, uint8_t v_t_211_, lean_object* v_h_212_, lean_object* v_siginfo_213_){
_start:
{
lean_inc(v_siginfo_213_);
return v_siginfo_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_siginfo_elim___boxed(lean_object* v_motive_214_, lean_object* v_t_215_, lean_object* v_h_216_, lean_object* v_siginfo_217_){
_start:
{
uint8_t v_t_boxed_218_; lean_object* v_res_219_; 
v_t_boxed_218_ = lean_unbox(v_t_215_);
v_res_219_ = l_Lasm_JS_Deno_Signal_siginfo_elim(v_motive_214_, v_t_boxed_218_, v_h_216_, v_siginfo_217_);
lean_dec(v_siginfo_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim___redArg(lean_object* v_sigint_220_){
_start:
{
lean_inc(v_sigint_220_);
return v_sigint_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim___redArg___boxed(lean_object* v_sigint_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lasm_JS_Deno_Signal_sigint_elim___redArg(v_sigint_221_);
lean_dec(v_sigint_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim(lean_object* v_motive_223_, uint8_t v_t_224_, lean_object* v_h_225_, lean_object* v_sigint_226_){
_start:
{
lean_inc(v_sigint_226_);
return v_sigint_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigint_elim___boxed(lean_object* v_motive_227_, lean_object* v_t_228_, lean_object* v_h_229_, lean_object* v_sigint_230_){
_start:
{
uint8_t v_t_boxed_231_; lean_object* v_res_232_; 
v_t_boxed_231_ = lean_unbox(v_t_228_);
v_res_232_ = l_Lasm_JS_Deno_Signal_sigint_elim(v_motive_227_, v_t_boxed_231_, v_h_229_, v_sigint_230_);
lean_dec(v_sigint_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim___redArg(lean_object* v_sigio_233_){
_start:
{
lean_inc(v_sigio_233_);
return v_sigio_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim___redArg___boxed(lean_object* v_sigio_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lasm_JS_Deno_Signal_sigio_elim___redArg(v_sigio_234_);
lean_dec(v_sigio_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim(lean_object* v_motive_236_, uint8_t v_t_237_, lean_object* v_h_238_, lean_object* v_sigio_239_){
_start:
{
lean_inc(v_sigio_239_);
return v_sigio_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigio_elim___boxed(lean_object* v_motive_240_, lean_object* v_t_241_, lean_object* v_h_242_, lean_object* v_sigio_243_){
_start:
{
uint8_t v_t_boxed_244_; lean_object* v_res_245_; 
v_t_boxed_244_ = lean_unbox(v_t_241_);
v_res_245_ = l_Lasm_JS_Deno_Signal_sigio_elim(v_motive_240_, v_t_boxed_244_, v_h_242_, v_sigio_243_);
lean_dec(v_sigio_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim___redArg(lean_object* v_sigpoll_246_){
_start:
{
lean_inc(v_sigpoll_246_);
return v_sigpoll_246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim___redArg___boxed(lean_object* v_sigpoll_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_JS_Deno_Signal_sigpoll_elim___redArg(v_sigpoll_247_);
lean_dec(v_sigpoll_247_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim(lean_object* v_motive_249_, uint8_t v_t_250_, lean_object* v_h_251_, lean_object* v_sigpoll_252_){
_start:
{
lean_inc(v_sigpoll_252_);
return v_sigpoll_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpoll_elim___boxed(lean_object* v_motive_253_, lean_object* v_t_254_, lean_object* v_h_255_, lean_object* v_sigpoll_256_){
_start:
{
uint8_t v_t_boxed_257_; lean_object* v_res_258_; 
v_t_boxed_257_ = lean_unbox(v_t_254_);
v_res_258_ = l_Lasm_JS_Deno_Signal_sigpoll_elim(v_motive_253_, v_t_boxed_257_, v_h_255_, v_sigpoll_256_);
lean_dec(v_sigpoll_256_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim___redArg(lean_object* v_sigunused_259_){
_start:
{
lean_inc(v_sigunused_259_);
return v_sigunused_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim___redArg___boxed(lean_object* v_sigunused_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_JS_Deno_Signal_sigunused_elim___redArg(v_sigunused_260_);
lean_dec(v_sigunused_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim(lean_object* v_motive_262_, uint8_t v_t_263_, lean_object* v_h_264_, lean_object* v_sigunused_265_){
_start:
{
lean_inc(v_sigunused_265_);
return v_sigunused_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigunused_elim___boxed(lean_object* v_motive_266_, lean_object* v_t_267_, lean_object* v_h_268_, lean_object* v_sigunused_269_){
_start:
{
uint8_t v_t_boxed_270_; lean_object* v_res_271_; 
v_t_boxed_270_ = lean_unbox(v_t_267_);
v_res_271_ = l_Lasm_JS_Deno_Signal_sigunused_elim(v_motive_266_, v_t_boxed_270_, v_h_268_, v_sigunused_269_);
lean_dec(v_sigunused_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim___redArg(lean_object* v_sigkill_272_){
_start:
{
lean_inc(v_sigkill_272_);
return v_sigkill_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim___redArg___boxed(lean_object* v_sigkill_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lasm_JS_Deno_Signal_sigkill_elim___redArg(v_sigkill_273_);
lean_dec(v_sigkill_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim(lean_object* v_motive_275_, uint8_t v_t_276_, lean_object* v_h_277_, lean_object* v_sigkill_278_){
_start:
{
lean_inc(v_sigkill_278_);
return v_sigkill_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigkill_elim___boxed(lean_object* v_motive_279_, lean_object* v_t_280_, lean_object* v_h_281_, lean_object* v_sigkill_282_){
_start:
{
uint8_t v_t_boxed_283_; lean_object* v_res_284_; 
v_t_boxed_283_ = lean_unbox(v_t_280_);
v_res_284_ = l_Lasm_JS_Deno_Signal_sigkill_elim(v_motive_279_, v_t_boxed_283_, v_h_281_, v_sigkill_282_);
lean_dec(v_sigkill_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim___redArg(lean_object* v_sigpipe_285_){
_start:
{
lean_inc(v_sigpipe_285_);
return v_sigpipe_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim___redArg___boxed(lean_object* v_sigpipe_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lasm_JS_Deno_Signal_sigpipe_elim___redArg(v_sigpipe_286_);
lean_dec(v_sigpipe_286_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim(lean_object* v_motive_288_, uint8_t v_t_289_, lean_object* v_h_290_, lean_object* v_sigpipe_291_){
_start:
{
lean_inc(v_sigpipe_291_);
return v_sigpipe_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpipe_elim___boxed(lean_object* v_motive_292_, lean_object* v_t_293_, lean_object* v_h_294_, lean_object* v_sigpipe_295_){
_start:
{
uint8_t v_t_boxed_296_; lean_object* v_res_297_; 
v_t_boxed_296_ = lean_unbox(v_t_293_);
v_res_297_ = l_Lasm_JS_Deno_Signal_sigpipe_elim(v_motive_292_, v_t_boxed_296_, v_h_294_, v_sigpipe_295_);
lean_dec(v_sigpipe_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim___redArg(lean_object* v_sigprof_298_){
_start:
{
lean_inc(v_sigprof_298_);
return v_sigprof_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim___redArg___boxed(lean_object* v_sigprof_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Lasm_JS_Deno_Signal_sigprof_elim___redArg(v_sigprof_299_);
lean_dec(v_sigprof_299_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim(lean_object* v_motive_301_, uint8_t v_t_302_, lean_object* v_h_303_, lean_object* v_sigprof_304_){
_start:
{
lean_inc(v_sigprof_304_);
return v_sigprof_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigprof_elim___boxed(lean_object* v_motive_305_, lean_object* v_t_306_, lean_object* v_h_307_, lean_object* v_sigprof_308_){
_start:
{
uint8_t v_t_boxed_309_; lean_object* v_res_310_; 
v_t_boxed_309_ = lean_unbox(v_t_306_);
v_res_310_ = l_Lasm_JS_Deno_Signal_sigprof_elim(v_motive_305_, v_t_boxed_309_, v_h_307_, v_sigprof_308_);
lean_dec(v_sigprof_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim___redArg(lean_object* v_sigpwr_311_){
_start:
{
lean_inc(v_sigpwr_311_);
return v_sigpwr_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim___redArg___boxed(lean_object* v_sigpwr_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lasm_JS_Deno_Signal_sigpwr_elim___redArg(v_sigpwr_312_);
lean_dec(v_sigpwr_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim(lean_object* v_motive_314_, uint8_t v_t_315_, lean_object* v_h_316_, lean_object* v_sigpwr_317_){
_start:
{
lean_inc(v_sigpwr_317_);
return v_sigpwr_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigpwr_elim___boxed(lean_object* v_motive_318_, lean_object* v_t_319_, lean_object* v_h_320_, lean_object* v_sigpwr_321_){
_start:
{
uint8_t v_t_boxed_322_; lean_object* v_res_323_; 
v_t_boxed_322_ = lean_unbox(v_t_319_);
v_res_323_ = l_Lasm_JS_Deno_Signal_sigpwr_elim(v_motive_318_, v_t_boxed_322_, v_h_320_, v_sigpwr_321_);
lean_dec(v_sigpwr_321_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim___redArg(lean_object* v_sigquit_324_){
_start:
{
lean_inc(v_sigquit_324_);
return v_sigquit_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim___redArg___boxed(lean_object* v_sigquit_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lasm_JS_Deno_Signal_sigquit_elim___redArg(v_sigquit_325_);
lean_dec(v_sigquit_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim(lean_object* v_motive_327_, uint8_t v_t_328_, lean_object* v_h_329_, lean_object* v_sigquit_330_){
_start:
{
lean_inc(v_sigquit_330_);
return v_sigquit_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigquit_elim___boxed(lean_object* v_motive_331_, lean_object* v_t_332_, lean_object* v_h_333_, lean_object* v_sigquit_334_){
_start:
{
uint8_t v_t_boxed_335_; lean_object* v_res_336_; 
v_t_boxed_335_ = lean_unbox(v_t_332_);
v_res_336_ = l_Lasm_JS_Deno_Signal_sigquit_elim(v_motive_331_, v_t_boxed_335_, v_h_333_, v_sigquit_334_);
lean_dec(v_sigquit_334_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim___redArg(lean_object* v_sigsegv_337_){
_start:
{
lean_inc(v_sigsegv_337_);
return v_sigsegv_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim___redArg___boxed(lean_object* v_sigsegv_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lasm_JS_Deno_Signal_sigsegv_elim___redArg(v_sigsegv_338_);
lean_dec(v_sigsegv_338_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim(lean_object* v_motive_340_, uint8_t v_t_341_, lean_object* v_h_342_, lean_object* v_sigsegv_343_){
_start:
{
lean_inc(v_sigsegv_343_);
return v_sigsegv_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsegv_elim___boxed(lean_object* v_motive_344_, lean_object* v_t_345_, lean_object* v_h_346_, lean_object* v_sigsegv_347_){
_start:
{
uint8_t v_t_boxed_348_; lean_object* v_res_349_; 
v_t_boxed_348_ = lean_unbox(v_t_345_);
v_res_349_ = l_Lasm_JS_Deno_Signal_sigsegv_elim(v_motive_344_, v_t_boxed_348_, v_h_346_, v_sigsegv_347_);
lean_dec(v_sigsegv_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim___redArg(lean_object* v_sigstkflt_350_){
_start:
{
lean_inc(v_sigstkflt_350_);
return v_sigstkflt_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim___redArg___boxed(lean_object* v_sigstkflt_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lasm_JS_Deno_Signal_sigstkflt_elim___redArg(v_sigstkflt_351_);
lean_dec(v_sigstkflt_351_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim(lean_object* v_motive_353_, uint8_t v_t_354_, lean_object* v_h_355_, lean_object* v_sigstkflt_356_){
_start:
{
lean_inc(v_sigstkflt_356_);
return v_sigstkflt_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstkflt_elim___boxed(lean_object* v_motive_357_, lean_object* v_t_358_, lean_object* v_h_359_, lean_object* v_sigstkflt_360_){
_start:
{
uint8_t v_t_boxed_361_; lean_object* v_res_362_; 
v_t_boxed_361_ = lean_unbox(v_t_358_);
v_res_362_ = l_Lasm_JS_Deno_Signal_sigstkflt_elim(v_motive_357_, v_t_boxed_361_, v_h_359_, v_sigstkflt_360_);
lean_dec(v_sigstkflt_360_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim___redArg(lean_object* v_sigstop_363_){
_start:
{
lean_inc(v_sigstop_363_);
return v_sigstop_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim___redArg___boxed(lean_object* v_sigstop_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Lasm_JS_Deno_Signal_sigstop_elim___redArg(v_sigstop_364_);
lean_dec(v_sigstop_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim(lean_object* v_motive_366_, uint8_t v_t_367_, lean_object* v_h_368_, lean_object* v_sigstop_369_){
_start:
{
lean_inc(v_sigstop_369_);
return v_sigstop_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigstop_elim___boxed(lean_object* v_motive_370_, lean_object* v_t_371_, lean_object* v_h_372_, lean_object* v_sigstop_373_){
_start:
{
uint8_t v_t_boxed_374_; lean_object* v_res_375_; 
v_t_boxed_374_ = lean_unbox(v_t_371_);
v_res_375_ = l_Lasm_JS_Deno_Signal_sigstop_elim(v_motive_370_, v_t_boxed_374_, v_h_372_, v_sigstop_373_);
lean_dec(v_sigstop_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim___redArg(lean_object* v_sigsys_376_){
_start:
{
lean_inc(v_sigsys_376_);
return v_sigsys_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim___redArg___boxed(lean_object* v_sigsys_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lasm_JS_Deno_Signal_sigsys_elim___redArg(v_sigsys_377_);
lean_dec(v_sigsys_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim(lean_object* v_motive_379_, uint8_t v_t_380_, lean_object* v_h_381_, lean_object* v_sigsys_382_){
_start:
{
lean_inc(v_sigsys_382_);
return v_sigsys_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigsys_elim___boxed(lean_object* v_motive_383_, lean_object* v_t_384_, lean_object* v_h_385_, lean_object* v_sigsys_386_){
_start:
{
uint8_t v_t_boxed_387_; lean_object* v_res_388_; 
v_t_boxed_387_ = lean_unbox(v_t_384_);
v_res_388_ = l_Lasm_JS_Deno_Signal_sigsys_elim(v_motive_383_, v_t_boxed_387_, v_h_385_, v_sigsys_386_);
lean_dec(v_sigsys_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim___redArg(lean_object* v_sigterm_389_){
_start:
{
lean_inc(v_sigterm_389_);
return v_sigterm_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim___redArg___boxed(lean_object* v_sigterm_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lasm_JS_Deno_Signal_sigterm_elim___redArg(v_sigterm_390_);
lean_dec(v_sigterm_390_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim(lean_object* v_motive_392_, uint8_t v_t_393_, lean_object* v_h_394_, lean_object* v_sigterm_395_){
_start:
{
lean_inc(v_sigterm_395_);
return v_sigterm_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigterm_elim___boxed(lean_object* v_motive_396_, lean_object* v_t_397_, lean_object* v_h_398_, lean_object* v_sigterm_399_){
_start:
{
uint8_t v_t_boxed_400_; lean_object* v_res_401_; 
v_t_boxed_400_ = lean_unbox(v_t_397_);
v_res_401_ = l_Lasm_JS_Deno_Signal_sigterm_elim(v_motive_396_, v_t_boxed_400_, v_h_398_, v_sigterm_399_);
lean_dec(v_sigterm_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim___redArg(lean_object* v_sigtrap_402_){
_start:
{
lean_inc(v_sigtrap_402_);
return v_sigtrap_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim___redArg___boxed(lean_object* v_sigtrap_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lasm_JS_Deno_Signal_sigtrap_elim___redArg(v_sigtrap_403_);
lean_dec(v_sigtrap_403_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim(lean_object* v_motive_405_, uint8_t v_t_406_, lean_object* v_h_407_, lean_object* v_sigtrap_408_){
_start:
{
lean_inc(v_sigtrap_408_);
return v_sigtrap_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtrap_elim___boxed(lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_sigtrap_412_){
_start:
{
uint8_t v_t_boxed_413_; lean_object* v_res_414_; 
v_t_boxed_413_ = lean_unbox(v_t_410_);
v_res_414_ = l_Lasm_JS_Deno_Signal_sigtrap_elim(v_motive_409_, v_t_boxed_413_, v_h_411_, v_sigtrap_412_);
lean_dec(v_sigtrap_412_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim___redArg(lean_object* v_sigtstp_415_){
_start:
{
lean_inc(v_sigtstp_415_);
return v_sigtstp_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim___redArg___boxed(lean_object* v_sigtstp_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lasm_JS_Deno_Signal_sigtstp_elim___redArg(v_sigtstp_416_);
lean_dec(v_sigtstp_416_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim(lean_object* v_motive_418_, uint8_t v_t_419_, lean_object* v_h_420_, lean_object* v_sigtstp_421_){
_start:
{
lean_inc(v_sigtstp_421_);
return v_sigtstp_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigtstp_elim___boxed(lean_object* v_motive_422_, lean_object* v_t_423_, lean_object* v_h_424_, lean_object* v_sigtstp_425_){
_start:
{
uint8_t v_t_boxed_426_; lean_object* v_res_427_; 
v_t_boxed_426_ = lean_unbox(v_t_423_);
v_res_427_ = l_Lasm_JS_Deno_Signal_sigtstp_elim(v_motive_422_, v_t_boxed_426_, v_h_424_, v_sigtstp_425_);
lean_dec(v_sigtstp_425_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim___redArg(lean_object* v_sigttin_428_){
_start:
{
lean_inc(v_sigttin_428_);
return v_sigttin_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim___redArg___boxed(lean_object* v_sigttin_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lasm_JS_Deno_Signal_sigttin_elim___redArg(v_sigttin_429_);
lean_dec(v_sigttin_429_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim(lean_object* v_motive_431_, uint8_t v_t_432_, lean_object* v_h_433_, lean_object* v_sigttin_434_){
_start:
{
lean_inc(v_sigttin_434_);
return v_sigttin_434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttin_elim___boxed(lean_object* v_motive_435_, lean_object* v_t_436_, lean_object* v_h_437_, lean_object* v_sigttin_438_){
_start:
{
uint8_t v_t_boxed_439_; lean_object* v_res_440_; 
v_t_boxed_439_ = lean_unbox(v_t_436_);
v_res_440_ = l_Lasm_JS_Deno_Signal_sigttin_elim(v_motive_435_, v_t_boxed_439_, v_h_437_, v_sigttin_438_);
lean_dec(v_sigttin_438_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim___redArg(lean_object* v_sigttou_441_){
_start:
{
lean_inc(v_sigttou_441_);
return v_sigttou_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim___redArg___boxed(lean_object* v_sigttou_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lasm_JS_Deno_Signal_sigttou_elim___redArg(v_sigttou_442_);
lean_dec(v_sigttou_442_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim(lean_object* v_motive_444_, uint8_t v_t_445_, lean_object* v_h_446_, lean_object* v_sigttou_447_){
_start:
{
lean_inc(v_sigttou_447_);
return v_sigttou_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigttou_elim___boxed(lean_object* v_motive_448_, lean_object* v_t_449_, lean_object* v_h_450_, lean_object* v_sigttou_451_){
_start:
{
uint8_t v_t_boxed_452_; lean_object* v_res_453_; 
v_t_boxed_452_ = lean_unbox(v_t_449_);
v_res_453_ = l_Lasm_JS_Deno_Signal_sigttou_elim(v_motive_448_, v_t_boxed_452_, v_h_450_, v_sigttou_451_);
lean_dec(v_sigttou_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim___redArg(lean_object* v_sigurg_454_){
_start:
{
lean_inc(v_sigurg_454_);
return v_sigurg_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim___redArg___boxed(lean_object* v_sigurg_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lasm_JS_Deno_Signal_sigurg_elim___redArg(v_sigurg_455_);
lean_dec(v_sigurg_455_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim(lean_object* v_motive_457_, uint8_t v_t_458_, lean_object* v_h_459_, lean_object* v_sigurg_460_){
_start:
{
lean_inc(v_sigurg_460_);
return v_sigurg_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigurg_elim___boxed(lean_object* v_motive_461_, lean_object* v_t_462_, lean_object* v_h_463_, lean_object* v_sigurg_464_){
_start:
{
uint8_t v_t_boxed_465_; lean_object* v_res_466_; 
v_t_boxed_465_ = lean_unbox(v_t_462_);
v_res_466_ = l_Lasm_JS_Deno_Signal_sigurg_elim(v_motive_461_, v_t_boxed_465_, v_h_463_, v_sigurg_464_);
lean_dec(v_sigurg_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim___redArg(lean_object* v_sigusr1_467_){
_start:
{
lean_inc(v_sigusr1_467_);
return v_sigusr1_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim___redArg___boxed(lean_object* v_sigusr1_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lasm_JS_Deno_Signal_sigusr1_elim___redArg(v_sigusr1_468_);
lean_dec(v_sigusr1_468_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim(lean_object* v_motive_470_, uint8_t v_t_471_, lean_object* v_h_472_, lean_object* v_sigusr1_473_){
_start:
{
lean_inc(v_sigusr1_473_);
return v_sigusr1_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr1_elim___boxed(lean_object* v_motive_474_, lean_object* v_t_475_, lean_object* v_h_476_, lean_object* v_sigusr1_477_){
_start:
{
uint8_t v_t_boxed_478_; lean_object* v_res_479_; 
v_t_boxed_478_ = lean_unbox(v_t_475_);
v_res_479_ = l_Lasm_JS_Deno_Signal_sigusr1_elim(v_motive_474_, v_t_boxed_478_, v_h_476_, v_sigusr1_477_);
lean_dec(v_sigusr1_477_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim___redArg(lean_object* v_sigusr2_480_){
_start:
{
lean_inc(v_sigusr2_480_);
return v_sigusr2_480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim___redArg___boxed(lean_object* v_sigusr2_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lasm_JS_Deno_Signal_sigusr2_elim___redArg(v_sigusr2_481_);
lean_dec(v_sigusr2_481_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim(lean_object* v_motive_483_, uint8_t v_t_484_, lean_object* v_h_485_, lean_object* v_sigusr2_486_){
_start:
{
lean_inc(v_sigusr2_486_);
return v_sigusr2_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigusr2_elim___boxed(lean_object* v_motive_487_, lean_object* v_t_488_, lean_object* v_h_489_, lean_object* v_sigusr2_490_){
_start:
{
uint8_t v_t_boxed_491_; lean_object* v_res_492_; 
v_t_boxed_491_ = lean_unbox(v_t_488_);
v_res_492_ = l_Lasm_JS_Deno_Signal_sigusr2_elim(v_motive_487_, v_t_boxed_491_, v_h_489_, v_sigusr2_490_);
lean_dec(v_sigusr2_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim___redArg(lean_object* v_sigvtalrm_493_){
_start:
{
lean_inc(v_sigvtalrm_493_);
return v_sigvtalrm_493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim___redArg___boxed(lean_object* v_sigvtalrm_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lasm_JS_Deno_Signal_sigvtalrm_elim___redArg(v_sigvtalrm_494_);
lean_dec(v_sigvtalrm_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim(lean_object* v_motive_496_, uint8_t v_t_497_, lean_object* v_h_498_, lean_object* v_sigvtalrm_499_){
_start:
{
lean_inc(v_sigvtalrm_499_);
return v_sigvtalrm_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigvtalrm_elim___boxed(lean_object* v_motive_500_, lean_object* v_t_501_, lean_object* v_h_502_, lean_object* v_sigvtalrm_503_){
_start:
{
uint8_t v_t_boxed_504_; lean_object* v_res_505_; 
v_t_boxed_504_ = lean_unbox(v_t_501_);
v_res_505_ = l_Lasm_JS_Deno_Signal_sigvtalrm_elim(v_motive_500_, v_t_boxed_504_, v_h_502_, v_sigvtalrm_503_);
lean_dec(v_sigvtalrm_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim___redArg(lean_object* v_sigwinch_506_){
_start:
{
lean_inc(v_sigwinch_506_);
return v_sigwinch_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim___redArg___boxed(lean_object* v_sigwinch_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Lasm_JS_Deno_Signal_sigwinch_elim___redArg(v_sigwinch_507_);
lean_dec(v_sigwinch_507_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim(lean_object* v_motive_509_, uint8_t v_t_510_, lean_object* v_h_511_, lean_object* v_sigwinch_512_){
_start:
{
lean_inc(v_sigwinch_512_);
return v_sigwinch_512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigwinch_elim___boxed(lean_object* v_motive_513_, lean_object* v_t_514_, lean_object* v_h_515_, lean_object* v_sigwinch_516_){
_start:
{
uint8_t v_t_boxed_517_; lean_object* v_res_518_; 
v_t_boxed_517_ = lean_unbox(v_t_514_);
v_res_518_ = l_Lasm_JS_Deno_Signal_sigwinch_elim(v_motive_513_, v_t_boxed_517_, v_h_515_, v_sigwinch_516_);
lean_dec(v_sigwinch_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim___redArg(lean_object* v_sigxcpu_519_){
_start:
{
lean_inc(v_sigxcpu_519_);
return v_sigxcpu_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim___redArg___boxed(lean_object* v_sigxcpu_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_JS_Deno_Signal_sigxcpu_elim___redArg(v_sigxcpu_520_);
lean_dec(v_sigxcpu_520_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim(lean_object* v_motive_522_, uint8_t v_t_523_, lean_object* v_h_524_, lean_object* v_sigxcpu_525_){
_start:
{
lean_inc(v_sigxcpu_525_);
return v_sigxcpu_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxcpu_elim___boxed(lean_object* v_motive_526_, lean_object* v_t_527_, lean_object* v_h_528_, lean_object* v_sigxcpu_529_){
_start:
{
uint8_t v_t_boxed_530_; lean_object* v_res_531_; 
v_t_boxed_530_ = lean_unbox(v_t_527_);
v_res_531_ = l_Lasm_JS_Deno_Signal_sigxcpu_elim(v_motive_526_, v_t_boxed_530_, v_h_528_, v_sigxcpu_529_);
lean_dec(v_sigxcpu_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim___redArg(lean_object* v_sigxfsz_532_){
_start:
{
lean_inc(v_sigxfsz_532_);
return v_sigxfsz_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim___redArg___boxed(lean_object* v_sigxfsz_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_JS_Deno_Signal_sigxfsz_elim___redArg(v_sigxfsz_533_);
lean_dec(v_sigxfsz_533_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim(lean_object* v_motive_535_, uint8_t v_t_536_, lean_object* v_h_537_, lean_object* v_sigxfsz_538_){
_start:
{
lean_inc(v_sigxfsz_538_);
return v_sigxfsz_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Signal_sigxfsz_elim___boxed(lean_object* v_motive_539_, lean_object* v_t_540_, lean_object* v_h_541_, lean_object* v_sigxfsz_542_){
_start:
{
uint8_t v_t_boxed_543_; lean_object* v_res_544_; 
v_t_boxed_543_ = lean_unbox(v_t_540_);
v_res_544_ = l_Lasm_JS_Deno_Signal_sigxfsz_elim(v_motive_539_, v_t_boxed_543_, v_h_541_, v_sigxfsz_542_);
lean_dec(v_sigxfsz_542_);
return v_res_544_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqSignal_beq(uint8_t v_x_545_, uint8_t v_y_546_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_547_ = l_Lasm_JS_Deno_Signal_ctorIdx(v_x_545_);
v___x_548_ = l_Lasm_JS_Deno_Signal_ctorIdx(v_y_546_);
v___x_549_ = lean_nat_dec_eq(v___x_547_, v___x_548_);
lean_dec(v___x_548_);
lean_dec(v___x_547_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqSignal_beq___boxed(lean_object* v_x_550_, lean_object* v_y_551_){
_start:
{
uint8_t v_x_21__boxed_552_; uint8_t v_y_22__boxed_553_; uint8_t v_res_554_; lean_object* v_r_555_; 
v_x_21__boxed_552_ = lean_unbox(v_x_550_);
v_y_22__boxed_553_ = lean_unbox(v_y_551_);
v_res_554_ = l_Lasm_JS_Deno_instBEqSignal_beq(v_x_21__boxed_552_, v_y_22__boxed_553_);
v_r_555_ = lean_box(v_res_554_);
return v_r_555_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_unsigned_to_nat(2u);
v___x_667_ = lean_nat_to_int(v___x_666_);
return v___x_667_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_unsigned_to_nat(1u);
v___x_669_ = lean_nat_to_int(v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSignal_repr(uint8_t v_x_670_, lean_object* v_prec_671_){
_start:
{
lean_object* v___y_673_; lean_object* v___y_680_; lean_object* v___y_687_; lean_object* v___y_694_; lean_object* v___y_701_; lean_object* v___y_708_; lean_object* v___y_715_; lean_object* v___y_722_; lean_object* v___y_729_; lean_object* v___y_736_; lean_object* v___y_743_; lean_object* v___y_750_; lean_object* v___y_757_; lean_object* v___y_764_; lean_object* v___y_771_; lean_object* v___y_778_; lean_object* v___y_785_; lean_object* v___y_792_; lean_object* v___y_799_; lean_object* v___y_806_; lean_object* v___y_813_; lean_object* v___y_820_; lean_object* v___y_827_; lean_object* v___y_834_; lean_object* v___y_841_; lean_object* v___y_848_; lean_object* v___y_855_; lean_object* v___y_862_; lean_object* v___y_869_; lean_object* v___y_876_; lean_object* v___y_883_; lean_object* v___y_890_; lean_object* v___y_897_; lean_object* v___y_904_; lean_object* v___y_911_; lean_object* v___y_918_; 
switch(v_x_670_)
{
case 0:
{
lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_924_ = lean_unsigned_to_nat(1024u);
v___x_925_ = lean_nat_dec_le(v___x_924_, v_prec_671_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; 
v___x_926_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_673_ = v___x_926_;
goto v___jp_672_;
}
else
{
lean_object* v___x_927_; 
v___x_927_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_673_ = v___x_927_;
goto v___jp_672_;
}
}
case 1:
{
lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_928_ = lean_unsigned_to_nat(1024u);
v___x_929_ = lean_nat_dec_le(v___x_928_, v_prec_671_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; 
v___x_930_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_680_ = v___x_930_;
goto v___jp_679_;
}
else
{
lean_object* v___x_931_; 
v___x_931_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_680_ = v___x_931_;
goto v___jp_679_;
}
}
case 2:
{
lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = lean_unsigned_to_nat(1024u);
v___x_933_ = lean_nat_dec_le(v___x_932_, v_prec_671_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_687_ = v___x_934_;
goto v___jp_686_;
}
else
{
lean_object* v___x_935_; 
v___x_935_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_687_ = v___x_935_;
goto v___jp_686_;
}
}
case 3:
{
lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(1024u);
v___x_937_ = lean_nat_dec_le(v___x_936_, v_prec_671_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
v___x_938_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_694_ = v___x_938_;
goto v___jp_693_;
}
else
{
lean_object* v___x_939_; 
v___x_939_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_694_ = v___x_939_;
goto v___jp_693_;
}
}
case 4:
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_unsigned_to_nat(1024u);
v___x_941_ = lean_nat_dec_le(v___x_940_, v_prec_671_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; 
v___x_942_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_701_ = v___x_942_;
goto v___jp_700_;
}
else
{
lean_object* v___x_943_; 
v___x_943_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_701_ = v___x_943_;
goto v___jp_700_;
}
}
case 5:
{
lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_944_ = lean_unsigned_to_nat(1024u);
v___x_945_ = lean_nat_dec_le(v___x_944_, v_prec_671_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; 
v___x_946_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_708_ = v___x_946_;
goto v___jp_707_;
}
else
{
lean_object* v___x_947_; 
v___x_947_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_708_ = v___x_947_;
goto v___jp_707_;
}
}
case 6:
{
lean_object* v___x_948_; uint8_t v___x_949_; 
v___x_948_ = lean_unsigned_to_nat(1024u);
v___x_949_ = lean_nat_dec_le(v___x_948_, v_prec_671_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; 
v___x_950_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_715_ = v___x_950_;
goto v___jp_714_;
}
else
{
lean_object* v___x_951_; 
v___x_951_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_715_ = v___x_951_;
goto v___jp_714_;
}
}
case 7:
{
lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(1024u);
v___x_953_ = lean_nat_dec_le(v___x_952_, v_prec_671_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; 
v___x_954_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_722_ = v___x_954_;
goto v___jp_721_;
}
else
{
lean_object* v___x_955_; 
v___x_955_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_722_ = v___x_955_;
goto v___jp_721_;
}
}
case 8:
{
lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_956_ = lean_unsigned_to_nat(1024u);
v___x_957_ = lean_nat_dec_le(v___x_956_, v_prec_671_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
v___x_958_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_729_ = v___x_958_;
goto v___jp_728_;
}
else
{
lean_object* v___x_959_; 
v___x_959_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_729_ = v___x_959_;
goto v___jp_728_;
}
}
case 9:
{
lean_object* v___x_960_; uint8_t v___x_961_; 
v___x_960_ = lean_unsigned_to_nat(1024u);
v___x_961_ = lean_nat_dec_le(v___x_960_, v_prec_671_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; 
v___x_962_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_736_ = v___x_962_;
goto v___jp_735_;
}
else
{
lean_object* v___x_963_; 
v___x_963_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_736_ = v___x_963_;
goto v___jp_735_;
}
}
case 10:
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_unsigned_to_nat(1024u);
v___x_965_ = lean_nat_dec_le(v___x_964_, v_prec_671_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
v___x_966_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_743_ = v___x_966_;
goto v___jp_742_;
}
else
{
lean_object* v___x_967_; 
v___x_967_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_743_ = v___x_967_;
goto v___jp_742_;
}
}
case 11:
{
lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_968_ = lean_unsigned_to_nat(1024u);
v___x_969_ = lean_nat_dec_le(v___x_968_, v_prec_671_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; 
v___x_970_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_750_ = v___x_970_;
goto v___jp_749_;
}
else
{
lean_object* v___x_971_; 
v___x_971_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_750_ = v___x_971_;
goto v___jp_749_;
}
}
case 12:
{
lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(1024u);
v___x_973_ = lean_nat_dec_le(v___x_972_, v_prec_671_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; 
v___x_974_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_757_ = v___x_974_;
goto v___jp_756_;
}
else
{
lean_object* v___x_975_; 
v___x_975_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_757_ = v___x_975_;
goto v___jp_756_;
}
}
case 13:
{
lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_976_ = lean_unsigned_to_nat(1024u);
v___x_977_ = lean_nat_dec_le(v___x_976_, v_prec_671_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
v___x_978_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_764_ = v___x_978_;
goto v___jp_763_;
}
else
{
lean_object* v___x_979_; 
v___x_979_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_764_ = v___x_979_;
goto v___jp_763_;
}
}
case 14:
{
lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_980_ = lean_unsigned_to_nat(1024u);
v___x_981_ = lean_nat_dec_le(v___x_980_, v_prec_671_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; 
v___x_982_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_771_ = v___x_982_;
goto v___jp_770_;
}
else
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_771_ = v___x_983_;
goto v___jp_770_;
}
}
case 15:
{
lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_984_ = lean_unsigned_to_nat(1024u);
v___x_985_ = lean_nat_dec_le(v___x_984_, v_prec_671_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; 
v___x_986_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_778_ = v___x_986_;
goto v___jp_777_;
}
else
{
lean_object* v___x_987_; 
v___x_987_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_778_ = v___x_987_;
goto v___jp_777_;
}
}
case 16:
{
lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_988_ = lean_unsigned_to_nat(1024u);
v___x_989_ = lean_nat_dec_le(v___x_988_, v_prec_671_);
if (v___x_989_ == 0)
{
lean_object* v___x_990_; 
v___x_990_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_785_ = v___x_990_;
goto v___jp_784_;
}
else
{
lean_object* v___x_991_; 
v___x_991_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_785_ = v___x_991_;
goto v___jp_784_;
}
}
case 17:
{
lean_object* v___x_992_; uint8_t v___x_993_; 
v___x_992_ = lean_unsigned_to_nat(1024u);
v___x_993_ = lean_nat_dec_le(v___x_992_, v_prec_671_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; 
v___x_994_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_792_ = v___x_994_;
goto v___jp_791_;
}
else
{
lean_object* v___x_995_; 
v___x_995_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_792_ = v___x_995_;
goto v___jp_791_;
}
}
case 18:
{
lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_996_ = lean_unsigned_to_nat(1024u);
v___x_997_ = lean_nat_dec_le(v___x_996_, v_prec_671_);
if (v___x_997_ == 0)
{
lean_object* v___x_998_; 
v___x_998_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_799_ = v___x_998_;
goto v___jp_798_;
}
else
{
lean_object* v___x_999_; 
v___x_999_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_799_ = v___x_999_;
goto v___jp_798_;
}
}
case 19:
{
lean_object* v___x_1000_; uint8_t v___x_1001_; 
v___x_1000_ = lean_unsigned_to_nat(1024u);
v___x_1001_ = lean_nat_dec_le(v___x_1000_, v_prec_671_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_806_ = v___x_1002_;
goto v___jp_805_;
}
else
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_806_ = v___x_1003_;
goto v___jp_805_;
}
}
case 20:
{
lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1004_ = lean_unsigned_to_nat(1024u);
v___x_1005_ = lean_nat_dec_le(v___x_1004_, v_prec_671_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_813_ = v___x_1006_;
goto v___jp_812_;
}
else
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_813_ = v___x_1007_;
goto v___jp_812_;
}
}
case 21:
{
lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = lean_unsigned_to_nat(1024u);
v___x_1009_ = lean_nat_dec_le(v___x_1008_, v_prec_671_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_820_ = v___x_1010_;
goto v___jp_819_;
}
else
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_820_ = v___x_1011_;
goto v___jp_819_;
}
}
case 22:
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = lean_unsigned_to_nat(1024u);
v___x_1013_ = lean_nat_dec_le(v___x_1012_, v_prec_671_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_827_ = v___x_1014_;
goto v___jp_826_;
}
else
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_827_ = v___x_1015_;
goto v___jp_826_;
}
}
case 23:
{
lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = lean_unsigned_to_nat(1024u);
v___x_1017_ = lean_nat_dec_le(v___x_1016_, v_prec_671_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_834_ = v___x_1018_;
goto v___jp_833_;
}
else
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_834_ = v___x_1019_;
goto v___jp_833_;
}
}
case 24:
{
lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = lean_unsigned_to_nat(1024u);
v___x_1021_ = lean_nat_dec_le(v___x_1020_, v_prec_671_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_841_ = v___x_1022_;
goto v___jp_840_;
}
else
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_841_ = v___x_1023_;
goto v___jp_840_;
}
}
case 25:
{
lean_object* v___x_1024_; uint8_t v___x_1025_; 
v___x_1024_ = lean_unsigned_to_nat(1024u);
v___x_1025_ = lean_nat_dec_le(v___x_1024_, v_prec_671_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; 
v___x_1026_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_848_ = v___x_1026_;
goto v___jp_847_;
}
else
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_848_ = v___x_1027_;
goto v___jp_847_;
}
}
case 26:
{
lean_object* v___x_1028_; uint8_t v___x_1029_; 
v___x_1028_ = lean_unsigned_to_nat(1024u);
v___x_1029_ = lean_nat_dec_le(v___x_1028_, v_prec_671_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_855_ = v___x_1030_;
goto v___jp_854_;
}
else
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_855_ = v___x_1031_;
goto v___jp_854_;
}
}
case 27:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = lean_unsigned_to_nat(1024u);
v___x_1033_ = lean_nat_dec_le(v___x_1032_, v_prec_671_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_862_ = v___x_1034_;
goto v___jp_861_;
}
else
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_862_ = v___x_1035_;
goto v___jp_861_;
}
}
case 28:
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1036_ = lean_unsigned_to_nat(1024u);
v___x_1037_ = lean_nat_dec_le(v___x_1036_, v_prec_671_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_869_ = v___x_1038_;
goto v___jp_868_;
}
else
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_869_ = v___x_1039_;
goto v___jp_868_;
}
}
case 29:
{
lean_object* v___x_1040_; uint8_t v___x_1041_; 
v___x_1040_ = lean_unsigned_to_nat(1024u);
v___x_1041_ = lean_nat_dec_le(v___x_1040_, v_prec_671_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; 
v___x_1042_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_876_ = v___x_1042_;
goto v___jp_875_;
}
else
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_876_ = v___x_1043_;
goto v___jp_875_;
}
}
case 30:
{
lean_object* v___x_1044_; uint8_t v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(1024u);
v___x_1045_ = lean_nat_dec_le(v___x_1044_, v_prec_671_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_883_ = v___x_1046_;
goto v___jp_882_;
}
else
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_883_ = v___x_1047_;
goto v___jp_882_;
}
}
case 31:
{
lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1048_ = lean_unsigned_to_nat(1024u);
v___x_1049_ = lean_nat_dec_le(v___x_1048_, v_prec_671_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_890_ = v___x_1050_;
goto v___jp_889_;
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_890_ = v___x_1051_;
goto v___jp_889_;
}
}
case 32:
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = lean_unsigned_to_nat(1024u);
v___x_1053_ = lean_nat_dec_le(v___x_1052_, v_prec_671_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; 
v___x_1054_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_897_ = v___x_1054_;
goto v___jp_896_;
}
else
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_897_ = v___x_1055_;
goto v___jp_896_;
}
}
case 33:
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(1024u);
v___x_1057_ = lean_nat_dec_le(v___x_1056_, v_prec_671_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; 
v___x_1058_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_904_ = v___x_1058_;
goto v___jp_903_;
}
else
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_904_ = v___x_1059_;
goto v___jp_903_;
}
}
case 34:
{
lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(1024u);
v___x_1061_ = lean_nat_dec_le(v___x_1060_, v_prec_671_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_911_ = v___x_1062_;
goto v___jp_910_;
}
else
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_911_ = v___x_1063_;
goto v___jp_910_;
}
}
default: 
{
lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1064_ = lean_unsigned_to_nat(1024u);
v___x_1065_ = lean_nat_dec_le(v___x_1064_, v_prec_671_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_918_ = v___x_1066_;
goto v___jp_917_;
}
else
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_918_ = v___x_1067_;
goto v___jp_917_;
}
}
}
v___jp_672_:
{
lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_674_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__1));
lean_inc(v___y_673_);
v___x_675_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_675_, 0, v___y_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = 0;
v___x_677_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_677_, 0, v___x_675_);
lean_ctor_set_uint8(v___x_677_, sizeof(void*)*1, v___x_676_);
v___x_678_ = l_Repr_addAppParen(v___x_677_, v_prec_671_);
return v___x_678_;
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_681_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__3));
lean_inc(v___y_680_);
v___x_682_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_682_, 0, v___y_680_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
v___x_683_ = 0;
v___x_684_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set_uint8(v___x_684_, sizeof(void*)*1, v___x_683_);
v___x_685_ = l_Repr_addAppParen(v___x_684_, v_prec_671_);
return v___x_685_;
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_688_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__5));
lean_inc(v___y_687_);
v___x_689_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_689_, 0, v___y_687_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = 0;
v___x_691_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_691_, 0, v___x_689_);
lean_ctor_set_uint8(v___x_691_, sizeof(void*)*1, v___x_690_);
v___x_692_ = l_Repr_addAppParen(v___x_691_, v_prec_671_);
return v___x_692_;
}
v___jp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_695_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__7));
lean_inc(v___y_694_);
v___x_696_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_696_, 0, v___y_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = 0;
v___x_698_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set_uint8(v___x_698_, sizeof(void*)*1, v___x_697_);
v___x_699_ = l_Repr_addAppParen(v___x_698_, v_prec_671_);
return v___x_699_;
}
v___jp_700_:
{
lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_702_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__9));
lean_inc(v___y_701_);
v___x_703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_703_, 0, v___y_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = 0;
v___x_705_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*1, v___x_704_);
v___x_706_ = l_Repr_addAppParen(v___x_705_, v_prec_671_);
return v___x_706_;
}
v___jp_707_:
{
lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_709_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__11));
lean_inc(v___y_708_);
v___x_710_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_710_, 0, v___y_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = 0;
v___x_712_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_712_, 0, v___x_710_);
lean_ctor_set_uint8(v___x_712_, sizeof(void*)*1, v___x_711_);
v___x_713_ = l_Repr_addAppParen(v___x_712_, v_prec_671_);
return v___x_713_;
}
v___jp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__13));
lean_inc(v___y_715_);
v___x_717_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_717_, 0, v___y_715_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = 0;
v___x_719_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set_uint8(v___x_719_, sizeof(void*)*1, v___x_718_);
v___x_720_ = l_Repr_addAppParen(v___x_719_, v_prec_671_);
return v___x_720_;
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_723_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__15));
lean_inc(v___y_722_);
v___x_724_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_724_, 0, v___y_722_);
lean_ctor_set(v___x_724_, 1, v___x_723_);
v___x_725_ = 0;
v___x_726_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set_uint8(v___x_726_, sizeof(void*)*1, v___x_725_);
v___x_727_ = l_Repr_addAppParen(v___x_726_, v_prec_671_);
return v___x_727_;
}
v___jp_728_:
{
lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_730_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__17));
lean_inc(v___y_729_);
v___x_731_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_731_, 0, v___y_729_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
v___x_732_ = 0;
v___x_733_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_733_, 0, v___x_731_);
lean_ctor_set_uint8(v___x_733_, sizeof(void*)*1, v___x_732_);
v___x_734_ = l_Repr_addAppParen(v___x_733_, v_prec_671_);
return v___x_734_;
}
v___jp_735_:
{
lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_737_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__19));
lean_inc(v___y_736_);
v___x_738_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_738_, 0, v___y_736_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = 0;
v___x_740_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set_uint8(v___x_740_, sizeof(void*)*1, v___x_739_);
v___x_741_ = l_Repr_addAppParen(v___x_740_, v_prec_671_);
return v___x_741_;
}
v___jp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_744_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__21));
lean_inc(v___y_743_);
v___x_745_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_745_, 0, v___y_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = 0;
v___x_747_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_747_, 0, v___x_745_);
lean_ctor_set_uint8(v___x_747_, sizeof(void*)*1, v___x_746_);
v___x_748_ = l_Repr_addAppParen(v___x_747_, v_prec_671_);
return v___x_748_;
}
v___jp_749_:
{
lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_751_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__23));
lean_inc(v___y_750_);
v___x_752_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_752_, 0, v___y_750_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = 0;
v___x_754_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set_uint8(v___x_754_, sizeof(void*)*1, v___x_753_);
v___x_755_ = l_Repr_addAppParen(v___x_754_, v_prec_671_);
return v___x_755_;
}
v___jp_756_:
{
lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_758_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__25));
lean_inc(v___y_757_);
v___x_759_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_759_, 0, v___y_757_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = 0;
v___x_761_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_761_, 0, v___x_759_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*1, v___x_760_);
v___x_762_ = l_Repr_addAppParen(v___x_761_, v_prec_671_);
return v___x_762_;
}
v___jp_763_:
{
lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_765_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__27));
lean_inc(v___y_764_);
v___x_766_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_766_, 0, v___y_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = 0;
v___x_768_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*1, v___x_767_);
v___x_769_ = l_Repr_addAppParen(v___x_768_, v_prec_671_);
return v___x_769_;
}
v___jp_770_:
{
lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_772_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__29));
lean_inc(v___y_771_);
v___x_773_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_773_, 0, v___y_771_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = 0;
v___x_775_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_775_, 0, v___x_773_);
lean_ctor_set_uint8(v___x_775_, sizeof(void*)*1, v___x_774_);
v___x_776_ = l_Repr_addAppParen(v___x_775_, v_prec_671_);
return v___x_776_;
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_779_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__31));
lean_inc(v___y_778_);
v___x_780_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_780_, 0, v___y_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = 0;
v___x_782_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_782_, 0, v___x_780_);
lean_ctor_set_uint8(v___x_782_, sizeof(void*)*1, v___x_781_);
v___x_783_ = l_Repr_addAppParen(v___x_782_, v_prec_671_);
return v___x_783_;
}
v___jp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; uint8_t v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_786_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__33));
lean_inc(v___y_785_);
v___x_787_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_787_, 0, v___y_785_);
lean_ctor_set(v___x_787_, 1, v___x_786_);
v___x_788_ = 0;
v___x_789_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_789_, 0, v___x_787_);
lean_ctor_set_uint8(v___x_789_, sizeof(void*)*1, v___x_788_);
v___x_790_ = l_Repr_addAppParen(v___x_789_, v_prec_671_);
return v___x_790_;
}
v___jp_791_:
{
lean_object* v___x_793_; lean_object* v___x_794_; uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_793_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__35));
lean_inc(v___y_792_);
v___x_794_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_794_, 0, v___y_792_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v___x_795_ = 0;
v___x_796_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set_uint8(v___x_796_, sizeof(void*)*1, v___x_795_);
v___x_797_ = l_Repr_addAppParen(v___x_796_, v_prec_671_);
return v___x_797_;
}
v___jp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_800_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__37));
lean_inc(v___y_799_);
v___x_801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_801_, 0, v___y_799_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = 0;
v___x_803_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set_uint8(v___x_803_, sizeof(void*)*1, v___x_802_);
v___x_804_ = l_Repr_addAppParen(v___x_803_, v_prec_671_);
return v___x_804_;
}
v___jp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_807_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__39));
lean_inc(v___y_806_);
v___x_808_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_808_, 0, v___y_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = 0;
v___x_810_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*1, v___x_809_);
v___x_811_ = l_Repr_addAppParen(v___x_810_, v_prec_671_);
return v___x_811_;
}
v___jp_812_:
{
lean_object* v___x_814_; lean_object* v___x_815_; uint8_t v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_814_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__41));
lean_inc(v___y_813_);
v___x_815_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_815_, 0, v___y_813_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = 0;
v___x_817_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_817_, 0, v___x_815_);
lean_ctor_set_uint8(v___x_817_, sizeof(void*)*1, v___x_816_);
v___x_818_ = l_Repr_addAppParen(v___x_817_, v_prec_671_);
return v___x_818_;
}
v___jp_819_:
{
lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_821_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__43));
lean_inc(v___y_820_);
v___x_822_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_822_, 0, v___y_820_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v___x_823_ = 0;
v___x_824_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_824_, 0, v___x_822_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*1, v___x_823_);
v___x_825_ = l_Repr_addAppParen(v___x_824_, v_prec_671_);
return v___x_825_;
}
v___jp_826_:
{
lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_828_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__45));
lean_inc(v___y_827_);
v___x_829_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_829_, 0, v___y_827_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = 0;
v___x_831_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set_uint8(v___x_831_, sizeof(void*)*1, v___x_830_);
v___x_832_ = l_Repr_addAppParen(v___x_831_, v_prec_671_);
return v___x_832_;
}
v___jp_833_:
{
lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_835_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__47));
lean_inc(v___y_834_);
v___x_836_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_836_, 0, v___y_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = 0;
v___x_838_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set_uint8(v___x_838_, sizeof(void*)*1, v___x_837_);
v___x_839_ = l_Repr_addAppParen(v___x_838_, v_prec_671_);
return v___x_839_;
}
v___jp_840_:
{
lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_842_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__49));
lean_inc(v___y_841_);
v___x_843_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_843_, 0, v___y_841_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = 0;
v___x_845_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_845_, 0, v___x_843_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*1, v___x_844_);
v___x_846_ = l_Repr_addAppParen(v___x_845_, v_prec_671_);
return v___x_846_;
}
v___jp_847_:
{
lean_object* v___x_849_; lean_object* v___x_850_; uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_849_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__51));
lean_inc(v___y_848_);
v___x_850_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_850_, 0, v___y_848_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
v___x_851_ = 0;
v___x_852_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_852_, 0, v___x_850_);
lean_ctor_set_uint8(v___x_852_, sizeof(void*)*1, v___x_851_);
v___x_853_ = l_Repr_addAppParen(v___x_852_, v_prec_671_);
return v___x_853_;
}
v___jp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_856_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__53));
lean_inc(v___y_855_);
v___x_857_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_857_, 0, v___y_855_);
lean_ctor_set(v___x_857_, 1, v___x_856_);
v___x_858_ = 0;
v___x_859_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_859_, 0, v___x_857_);
lean_ctor_set_uint8(v___x_859_, sizeof(void*)*1, v___x_858_);
v___x_860_ = l_Repr_addAppParen(v___x_859_, v_prec_671_);
return v___x_860_;
}
v___jp_861_:
{
lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_863_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__55));
lean_inc(v___y_862_);
v___x_864_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_864_, 0, v___y_862_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = 0;
v___x_866_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_866_, 0, v___x_864_);
lean_ctor_set_uint8(v___x_866_, sizeof(void*)*1, v___x_865_);
v___x_867_ = l_Repr_addAppParen(v___x_866_, v_prec_671_);
return v___x_867_;
}
v___jp_868_:
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_870_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__57));
lean_inc(v___y_869_);
v___x_871_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_871_, 0, v___y_869_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = 0;
v___x_873_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set_uint8(v___x_873_, sizeof(void*)*1, v___x_872_);
v___x_874_ = l_Repr_addAppParen(v___x_873_, v_prec_671_);
return v___x_874_;
}
v___jp_875_:
{
lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_877_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__59));
lean_inc(v___y_876_);
v___x_878_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_878_, 0, v___y_876_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = 0;
v___x_880_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_880_, 0, v___x_878_);
lean_ctor_set_uint8(v___x_880_, sizeof(void*)*1, v___x_879_);
v___x_881_ = l_Repr_addAppParen(v___x_880_, v_prec_671_);
return v___x_881_;
}
v___jp_882_:
{
lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_884_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__61));
lean_inc(v___y_883_);
v___x_885_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_885_, 0, v___y_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = 0;
v___x_887_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_887_, 0, v___x_885_);
lean_ctor_set_uint8(v___x_887_, sizeof(void*)*1, v___x_886_);
v___x_888_ = l_Repr_addAppParen(v___x_887_, v_prec_671_);
return v___x_888_;
}
v___jp_889_:
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_891_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__63));
lean_inc(v___y_890_);
v___x_892_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_892_, 0, v___y_890_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = 0;
v___x_894_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set_uint8(v___x_894_, sizeof(void*)*1, v___x_893_);
v___x_895_ = l_Repr_addAppParen(v___x_894_, v_prec_671_);
return v___x_895_;
}
v___jp_896_:
{
lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_898_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__65));
lean_inc(v___y_897_);
v___x_899_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_899_, 0, v___y_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = 0;
v___x_901_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set_uint8(v___x_901_, sizeof(void*)*1, v___x_900_);
v___x_902_ = l_Repr_addAppParen(v___x_901_, v_prec_671_);
return v___x_902_;
}
v___jp_903_:
{
lean_object* v___x_905_; lean_object* v___x_906_; uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_905_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__67));
lean_inc(v___y_904_);
v___x_906_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_906_, 0, v___y_904_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = 0;
v___x_908_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set_uint8(v___x_908_, sizeof(void*)*1, v___x_907_);
v___x_909_ = l_Repr_addAppParen(v___x_908_, v_prec_671_);
return v___x_909_;
}
v___jp_910_:
{
lean_object* v___x_912_; lean_object* v___x_913_; uint8_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_912_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__69));
lean_inc(v___y_911_);
v___x_913_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_913_, 0, v___y_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = 0;
v___x_915_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set_uint8(v___x_915_, sizeof(void*)*1, v___x_914_);
v___x_916_ = l_Repr_addAppParen(v___x_915_, v_prec_671_);
return v___x_916_;
}
v___jp_917_:
{
lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_919_ = ((lean_object*)(l_Lasm_JS_Deno_instReprSignal_repr___closed__71));
lean_inc(v___y_918_);
v___x_920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_920_, 0, v___y_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = 0;
v___x_922_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set_uint8(v___x_922_, sizeof(void*)*1, v___x_921_);
v___x_923_ = l_Repr_addAppParen(v___x_922_, v_prec_671_);
return v___x_923_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprSignal_repr___boxed(lean_object* v_x_1068_, lean_object* v_prec_1069_){
_start:
{
uint8_t v_x_1953__boxed_1070_; lean_object* v_res_1071_; 
v_x_1953__boxed_1070_ = lean_unbox(v_x_1068_);
v_res_1071_ = l_Lasm_JS_Deno_instReprSignal_repr(v_x_1953__boxed_1070_, v_prec_1069_);
lean_dec(v_prec_1069_);
return v_res_1071_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedSignal_default(void){
_start:
{
uint8_t v___x_1074_; 
v___x_1074_ = 0;
return v___x_1074_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedSignal(void){
_start:
{
uint8_t v___x_1075_; 
v___x_1075_ = 0;
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0(uint8_t v_x_1184_){
_start:
{
switch(v_x_1184_)
{
case 0:
{
lean_object* v___x_1185_; 
v___x_1185_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1));
return v___x_1185_;
}
case 1:
{
lean_object* v___x_1186_; 
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3));
return v___x_1186_;
}
case 2:
{
lean_object* v___x_1187_; 
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5));
return v___x_1187_;
}
case 3:
{
lean_object* v___x_1188_; 
v___x_1188_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7));
return v___x_1188_;
}
case 4:
{
lean_object* v___x_1189_; 
v___x_1189_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9));
return v___x_1189_;
}
case 5:
{
lean_object* v___x_1190_; 
v___x_1190_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11));
return v___x_1190_;
}
case 6:
{
lean_object* v___x_1191_; 
v___x_1191_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13));
return v___x_1191_;
}
case 7:
{
lean_object* v___x_1192_; 
v___x_1192_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15));
return v___x_1192_;
}
case 8:
{
lean_object* v___x_1193_; 
v___x_1193_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17));
return v___x_1193_;
}
case 9:
{
lean_object* v___x_1194_; 
v___x_1194_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19));
return v___x_1194_;
}
case 10:
{
lean_object* v___x_1195_; 
v___x_1195_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21));
return v___x_1195_;
}
case 11:
{
lean_object* v___x_1196_; 
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23));
return v___x_1196_;
}
case 12:
{
lean_object* v___x_1197_; 
v___x_1197_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25));
return v___x_1197_;
}
case 13:
{
lean_object* v___x_1198_; 
v___x_1198_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27));
return v___x_1198_;
}
case 14:
{
lean_object* v___x_1199_; 
v___x_1199_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29));
return v___x_1199_;
}
case 15:
{
lean_object* v___x_1200_; 
v___x_1200_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31));
return v___x_1200_;
}
case 16:
{
lean_object* v___x_1201_; 
v___x_1201_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33));
return v___x_1201_;
}
case 17:
{
lean_object* v___x_1202_; 
v___x_1202_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35));
return v___x_1202_;
}
case 18:
{
lean_object* v___x_1203_; 
v___x_1203_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37));
return v___x_1203_;
}
case 19:
{
lean_object* v___x_1204_; 
v___x_1204_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39));
return v___x_1204_;
}
case 20:
{
lean_object* v___x_1205_; 
v___x_1205_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41));
return v___x_1205_;
}
case 21:
{
lean_object* v___x_1206_; 
v___x_1206_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43));
return v___x_1206_;
}
case 22:
{
lean_object* v___x_1207_; 
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45));
return v___x_1207_;
}
case 23:
{
lean_object* v___x_1208_; 
v___x_1208_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47));
return v___x_1208_;
}
case 24:
{
lean_object* v___x_1209_; 
v___x_1209_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49));
return v___x_1209_;
}
case 25:
{
lean_object* v___x_1210_; 
v___x_1210_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51));
return v___x_1210_;
}
case 26:
{
lean_object* v___x_1211_; 
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53));
return v___x_1211_;
}
case 27:
{
lean_object* v___x_1212_; 
v___x_1212_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55));
return v___x_1212_;
}
case 28:
{
lean_object* v___x_1213_; 
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57));
return v___x_1213_;
}
case 29:
{
lean_object* v___x_1214_; 
v___x_1214_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59));
return v___x_1214_;
}
case 30:
{
lean_object* v___x_1215_; 
v___x_1215_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61));
return v___x_1215_;
}
case 31:
{
lean_object* v___x_1216_; 
v___x_1216_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63));
return v___x_1216_;
}
case 32:
{
lean_object* v___x_1217_; 
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65));
return v___x_1217_;
}
case 33:
{
lean_object* v___x_1218_; 
v___x_1218_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67));
return v___x_1218_;
}
case 34:
{
lean_object* v___x_1219_; 
v___x_1219_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69));
return v___x_1219_;
}
default: 
{
lean_object* v___x_1220_; 
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71));
return v___x_1220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSSignal___lam__0___boxed(lean_object* v_x_1221_){
_start:
{
uint8_t v_x_618__boxed_1222_; lean_object* v_res_1223_; 
v_x_618__boxed_1222_ = lean_unbox(v_x_1221_);
v_res_1223_ = l_Lasm_JS_Deno_instToJSSignal___lam__0(v_x_618__boxed_1222_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0(lean_object* v_x_1337_){
_start:
{
if (lean_obj_tag(v_x_1337_) == 4)
{
lean_object* v_s_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_s_1340_ = lean_ctor_get(v_x_1337_, 0);
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__0));
v___x_1342_ = lean_string_dec_eq(v_s_1340_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; uint8_t v___x_1344_; 
v___x_1343_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__2));
v___x_1344_ = lean_string_dec_eq(v_s_1340_, v___x_1343_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; uint8_t v___x_1346_; 
v___x_1345_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__4));
v___x_1346_ = lean_string_dec_eq(v_s_1340_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__6));
v___x_1348_ = lean_string_dec_eq(v_s_1340_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__8));
v___x_1350_ = lean_string_dec_eq(v_s_1340_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__10));
v___x_1352_ = lean_string_dec_eq(v_s_1340_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; uint8_t v___x_1354_; 
v___x_1353_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__12));
v___x_1354_ = lean_string_dec_eq(v_s_1340_, v___x_1353_);
if (v___x_1354_ == 0)
{
lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1355_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__14));
v___x_1356_ = lean_string_dec_eq(v_s_1340_, v___x_1355_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__16));
v___x_1358_ = lean_string_dec_eq(v_s_1340_, v___x_1357_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; uint8_t v___x_1360_; 
v___x_1359_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__18));
v___x_1360_ = lean_string_dec_eq(v_s_1340_, v___x_1359_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; uint8_t v___x_1362_; 
v___x_1361_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__20));
v___x_1362_ = lean_string_dec_eq(v_s_1340_, v___x_1361_);
if (v___x_1362_ == 0)
{
lean_object* v___x_1363_; uint8_t v___x_1364_; 
v___x_1363_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__22));
v___x_1364_ = lean_string_dec_eq(v_s_1340_, v___x_1363_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__24));
v___x_1366_ = lean_string_dec_eq(v_s_1340_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; uint8_t v___x_1368_; 
v___x_1367_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__26));
v___x_1368_ = lean_string_dec_eq(v_s_1340_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__28));
v___x_1370_ = lean_string_dec_eq(v_s_1340_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__30));
v___x_1372_ = lean_string_dec_eq(v_s_1340_, v___x_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__32));
v___x_1374_ = lean_string_dec_eq(v_s_1340_, v___x_1373_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1375_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__34));
v___x_1376_ = lean_string_dec_eq(v_s_1340_, v___x_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__36));
v___x_1378_ = lean_string_dec_eq(v_s_1340_, v___x_1377_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__38));
v___x_1380_ = lean_string_dec_eq(v_s_1340_, v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; uint8_t v___x_1382_; 
v___x_1381_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__40));
v___x_1382_ = lean_string_dec_eq(v_s_1340_, v___x_1381_);
if (v___x_1382_ == 0)
{
lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__42));
v___x_1384_ = lean_string_dec_eq(v_s_1340_, v___x_1383_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; uint8_t v___x_1386_; 
v___x_1385_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__44));
v___x_1386_ = lean_string_dec_eq(v_s_1340_, v___x_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__46));
v___x_1388_ = lean_string_dec_eq(v_s_1340_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1389_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__48));
v___x_1390_ = lean_string_dec_eq(v_s_1340_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__50));
v___x_1392_ = lean_string_dec_eq(v_s_1340_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__52));
v___x_1394_ = lean_string_dec_eq(v_s_1340_, v___x_1393_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__54));
v___x_1396_ = lean_string_dec_eq(v_s_1340_, v___x_1395_);
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; uint8_t v___x_1398_; 
v___x_1397_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__56));
v___x_1398_ = lean_string_dec_eq(v_s_1340_, v___x_1397_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; uint8_t v___x_1400_; 
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__58));
v___x_1400_ = lean_string_dec_eq(v_s_1340_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; uint8_t v___x_1402_; 
v___x_1401_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__60));
v___x_1402_ = lean_string_dec_eq(v_s_1340_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1403_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__62));
v___x_1404_ = lean_string_dec_eq(v_s_1340_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__64));
v___x_1406_ = lean_string_dec_eq(v_s_1340_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__66));
v___x_1408_ = lean_string_dec_eq(v_s_1340_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__68));
v___x_1410_ = lean_string_dec_eq(v_s_1340_, v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__70));
v___x_1412_ = lean_string_dec_eq(v_s_1340_, v___x_1411_);
if (v___x_1412_ == 0)
{
goto v___jp_1338_;
}
else
{
lean_object* v___x_1413_; 
v___x_1413_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__2));
return v___x_1413_;
}
}
else
{
lean_object* v___x_1414_; 
v___x_1414_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__3));
return v___x_1414_;
}
}
else
{
lean_object* v___x_1415_; 
v___x_1415_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__4));
return v___x_1415_;
}
}
else
{
lean_object* v___x_1416_; 
v___x_1416_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__5));
return v___x_1416_;
}
}
else
{
lean_object* v___x_1417_; 
v___x_1417_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__6));
return v___x_1417_;
}
}
else
{
lean_object* v___x_1418_; 
v___x_1418_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__7));
return v___x_1418_;
}
}
else
{
lean_object* v___x_1419_; 
v___x_1419_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__8));
return v___x_1419_;
}
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__9));
return v___x_1420_;
}
}
else
{
lean_object* v___x_1421_; 
v___x_1421_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__10));
return v___x_1421_;
}
}
else
{
lean_object* v___x_1422_; 
v___x_1422_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__11));
return v___x_1422_;
}
}
else
{
lean_object* v___x_1423_; 
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__12));
return v___x_1423_;
}
}
else
{
lean_object* v___x_1424_; 
v___x_1424_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__13));
return v___x_1424_;
}
}
else
{
lean_object* v___x_1425_; 
v___x_1425_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__14));
return v___x_1425_;
}
}
else
{
lean_object* v___x_1426_; 
v___x_1426_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__15));
return v___x_1426_;
}
}
else
{
lean_object* v___x_1427_; 
v___x_1427_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__16));
return v___x_1427_;
}
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__17));
return v___x_1428_;
}
}
else
{
lean_object* v___x_1429_; 
v___x_1429_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__18));
return v___x_1429_;
}
}
else
{
lean_object* v___x_1430_; 
v___x_1430_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__19));
return v___x_1430_;
}
}
else
{
lean_object* v___x_1431_; 
v___x_1431_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__20));
return v___x_1431_;
}
}
else
{
lean_object* v___x_1432_; 
v___x_1432_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__21));
return v___x_1432_;
}
}
else
{
lean_object* v___x_1433_; 
v___x_1433_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__22));
return v___x_1433_;
}
}
else
{
lean_object* v___x_1434_; 
v___x_1434_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__23));
return v___x_1434_;
}
}
else
{
lean_object* v___x_1435_; 
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__24));
return v___x_1435_;
}
}
else
{
lean_object* v___x_1436_; 
v___x_1436_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__25));
return v___x_1436_;
}
}
else
{
lean_object* v___x_1437_; 
v___x_1437_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__26));
return v___x_1437_;
}
}
else
{
lean_object* v___x_1438_; 
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__27));
return v___x_1438_;
}
}
else
{
lean_object* v___x_1439_; 
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__28));
return v___x_1439_;
}
}
else
{
lean_object* v___x_1440_; 
v___x_1440_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__29));
return v___x_1440_;
}
}
else
{
lean_object* v___x_1441_; 
v___x_1441_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__30));
return v___x_1441_;
}
}
else
{
lean_object* v___x_1442_; 
v___x_1442_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__31));
return v___x_1442_;
}
}
else
{
lean_object* v___x_1443_; 
v___x_1443_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__32));
return v___x_1443_;
}
}
else
{
lean_object* v___x_1444_; 
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__33));
return v___x_1444_;
}
}
else
{
lean_object* v___x_1445_; 
v___x_1445_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__34));
return v___x_1445_;
}
}
else
{
lean_object* v___x_1446_; 
v___x_1446_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__35));
return v___x_1446_;
}
}
else
{
lean_object* v___x_1447_; 
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__36));
return v___x_1447_;
}
}
else
{
lean_object* v___x_1448_; 
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__37));
return v___x_1448_;
}
}
else
{
goto v___jp_1338_;
}
v___jp_1338_:
{
lean_object* v___x_1339_; 
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__1));
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSignal___lam__0___boxed(lean_object* v_x_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lasm_JS_Deno_instFromJSSignal___lam__0(v_x_1449_);
lean_dec(v_x_1449_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorIdx(uint8_t v_x_1458_){
_start:
{
if (v_x_1458_ == 0)
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_unsigned_to_nat(0u);
return v___x_1459_;
}
else
{
lean_object* v___x_1460_; 
v___x_1460_ = lean_unsigned_to_nat(1u);
return v___x_1460_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorIdx___boxed(lean_object* v_x_1461_){
_start:
{
uint8_t v_x_boxed_1462_; lean_object* v_res_1463_; 
v_x_boxed_1462_ = lean_unbox(v_x_1461_);
v_res_1463_ = l_Lasm_JS_Deno_BuildArch_ctorIdx(v_x_boxed_1462_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim___redArg(lean_object* v_k_1464_){
_start:
{
lean_inc(v_k_1464_);
return v_k_1464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim___redArg___boxed(lean_object* v_k_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lasm_JS_Deno_BuildArch_ctorElim___redArg(v_k_1465_);
lean_dec(v_k_1465_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim(lean_object* v_motive_1467_, lean_object* v_ctorIdx_1468_, uint8_t v_t_1469_, lean_object* v_h_1470_, lean_object* v_k_1471_){
_start:
{
lean_inc(v_k_1471_);
return v_k_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_ctorElim___boxed(lean_object* v_motive_1472_, lean_object* v_ctorIdx_1473_, lean_object* v_t_1474_, lean_object* v_h_1475_, lean_object* v_k_1476_){
_start:
{
uint8_t v_t_boxed_1477_; lean_object* v_res_1478_; 
v_t_boxed_1477_ = lean_unbox(v_t_1474_);
v_res_1478_ = l_Lasm_JS_Deno_BuildArch_ctorElim(v_motive_1472_, v_ctorIdx_1473_, v_t_boxed_1477_, v_h_1475_, v_k_1476_);
lean_dec(v_k_1476_);
lean_dec(v_ctorIdx_1473_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim___redArg(lean_object* v_00x8664_1479_){
_start:
{
lean_inc(v_00x8664_1479_);
return v_00x8664_1479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim___redArg___boxed(lean_object* v_00x8664_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lasm_JS_Deno_BuildArch_00x8664_elim___redArg(v_00x8664_1480_);
lean_dec(v_00x8664_1480_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim(lean_object* v_motive_1482_, uint8_t v_t_1483_, lean_object* v_h_1484_, lean_object* v_00x8664_1485_){
_start:
{
lean_inc(v_00x8664_1485_);
return v_00x8664_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_00x8664_elim___boxed(lean_object* v_motive_1486_, lean_object* v_t_1487_, lean_object* v_h_1488_, lean_object* v_00x8664_1489_){
_start:
{
uint8_t v_t_boxed_1490_; lean_object* v_res_1491_; 
v_t_boxed_1490_ = lean_unbox(v_t_1487_);
v_res_1491_ = l_Lasm_JS_Deno_BuildArch_00x8664_elim(v_motive_1486_, v_t_boxed_1490_, v_h_1488_, v_00x8664_1489_);
lean_dec(v_00x8664_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim___redArg(lean_object* v_aarch64_1492_){
_start:
{
lean_inc(v_aarch64_1492_);
return v_aarch64_1492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim___redArg___boxed(lean_object* v_aarch64_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lasm_JS_Deno_BuildArch_aarch64_elim___redArg(v_aarch64_1493_);
lean_dec(v_aarch64_1493_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim(lean_object* v_motive_1495_, uint8_t v_t_1496_, lean_object* v_h_1497_, lean_object* v_aarch64_1498_){
_start:
{
lean_inc(v_aarch64_1498_);
return v_aarch64_1498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildArch_aarch64_elim___boxed(lean_object* v_motive_1499_, lean_object* v_t_1500_, lean_object* v_h_1501_, lean_object* v_aarch64_1502_){
_start:
{
uint8_t v_t_boxed_1503_; lean_object* v_res_1504_; 
v_t_boxed_1503_ = lean_unbox(v_t_1500_);
v_res_1504_ = l_Lasm_JS_Deno_BuildArch_aarch64_elim(v_motive_1499_, v_t_boxed_1503_, v_h_1501_, v_aarch64_1502_);
lean_dec(v_aarch64_1502_);
return v_res_1504_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqBuildArch_beq(uint8_t v_x_1505_, uint8_t v_y_1506_){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; uint8_t v___x_1509_; 
v___x_1507_ = l_Lasm_JS_Deno_BuildArch_ctorIdx(v_x_1505_);
v___x_1508_ = l_Lasm_JS_Deno_BuildArch_ctorIdx(v_y_1506_);
v___x_1509_ = lean_nat_dec_eq(v___x_1507_, v___x_1508_);
lean_dec(v___x_1508_);
lean_dec(v___x_1507_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqBuildArch_beq___boxed(lean_object* v_x_1510_, lean_object* v_y_1511_){
_start:
{
uint8_t v_x_21__boxed_1512_; uint8_t v_y_22__boxed_1513_; uint8_t v_res_1514_; lean_object* v_r_1515_; 
v_x_21__boxed_1512_ = lean_unbox(v_x_1510_);
v_y_22__boxed_1513_ = lean_unbox(v_y_1511_);
v_res_1514_ = l_Lasm_JS_Deno_instBEqBuildArch_beq(v_x_21__boxed_1512_, v_y_22__boxed_1513_);
v_r_1515_ = lean_box(v_res_1514_);
return v_r_1515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr(uint8_t v_x_1524_, lean_object* v_prec_1525_){
_start:
{
lean_object* v___y_1527_; lean_object* v___y_1534_; 
if (v_x_1524_ == 0)
{
lean_object* v___x_1540_; uint8_t v___x_1541_; 
v___x_1540_ = lean_unsigned_to_nat(1024u);
v___x_1541_ = lean_nat_dec_le(v___x_1540_, v_prec_1525_);
if (v___x_1541_ == 0)
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1527_ = v___x_1542_;
goto v___jp_1526_;
}
else
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1527_ = v___x_1543_;
goto v___jp_1526_;
}
}
else
{
lean_object* v___x_1544_; uint8_t v___x_1545_; 
v___x_1544_ = lean_unsigned_to_nat(1024u);
v___x_1545_ = lean_nat_dec_le(v___x_1544_, v_prec_1525_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1534_ = v___x_1546_;
goto v___jp_1533_;
}
else
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1534_ = v___x_1547_;
goto v___jp_1533_;
}
}
v___jp_1526_:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1528_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildArch_repr___closed__1));
lean_inc(v___y_1527_);
v___x_1529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1529_, 0, v___y_1527_);
lean_ctor_set(v___x_1529_, 1, v___x_1528_);
v___x_1530_ = 0;
v___x_1531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1531_, 0, v___x_1529_);
lean_ctor_set_uint8(v___x_1531_, sizeof(void*)*1, v___x_1530_);
v___x_1532_ = l_Repr_addAppParen(v___x_1531_, v_prec_1525_);
return v___x_1532_;
}
v___jp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; uint8_t v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1535_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildArch_repr___closed__3));
lean_inc(v___y_1534_);
v___x_1536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1536_, 0, v___y_1534_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
v___x_1537_ = 0;
v___x_1538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1538_, 0, v___x_1536_);
lean_ctor_set_uint8(v___x_1538_, sizeof(void*)*1, v___x_1537_);
v___x_1539_ = l_Repr_addAppParen(v___x_1538_, v_prec_1525_);
return v___x_1539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildArch_repr___boxed(lean_object* v_x_1548_, lean_object* v_prec_1549_){
_start:
{
uint8_t v_x_113__boxed_1550_; lean_object* v_res_1551_; 
v_x_113__boxed_1550_ = lean_unbox(v_x_1548_);
v_res_1551_ = l_Lasm_JS_Deno_instReprBuildArch_repr(v_x_113__boxed_1550_, v_prec_1549_);
lean_dec(v_prec_1549_);
return v_res_1551_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedBuildArch_default(void){
_start:
{
uint8_t v___x_1554_; 
v___x_1554_ = 0;
return v___x_1554_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedBuildArch(void){
_start:
{
uint8_t v___x_1555_; 
v___x_1555_ = 0;
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0(uint8_t v_x_1562_){
_start:
{
if (v_x_1562_ == 0)
{
lean_object* v___x_1563_; 
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__1));
return v___x_1563_;
}
else
{
lean_object* v___x_1564_; 
v___x_1564_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__3));
return v___x_1564_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildArch___lam__0___boxed(lean_object* v_x_1565_){
_start:
{
uint8_t v_x_40__boxed_1566_; lean_object* v_res_1567_; 
v_x_40__boxed_1566_ = lean_unbox(v_x_1565_);
v_res_1567_ = l_Lasm_JS_Deno_instToJSBuildArch___lam__0(v_x_40__boxed_1566_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0(lean_object* v_x_1578_){
_start:
{
if (lean_obj_tag(v_x_1578_) == 4)
{
lean_object* v_s_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v_s_1581_ = lean_ctor_get(v_x_1578_, 0);
v___x_1582_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0));
v___x_1583_ = lean_string_dec_eq(v_s_1581_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_object* v___x_1584_; uint8_t v___x_1585_; 
v___x_1584_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2));
v___x_1585_ = lean_string_dec_eq(v_s_1581_, v___x_1584_);
if (v___x_1585_ == 0)
{
goto v___jp_1579_;
}
else
{
lean_object* v___x_1586_; 
v___x_1586_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__1));
return v___x_1586_;
}
}
else
{
lean_object* v___x_1587_; 
v___x_1587_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__2));
return v___x_1587_;
}
}
else
{
goto v___jp_1579_;
}
v___jp_1579_:
{
lean_object* v___x_1580_; 
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__0));
return v___x_1580_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___boxed(lean_object* v_x_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lasm_JS_Deno_instFromJSBuildArch___lam__0(v_x_1588_);
lean_dec(v_x_1588_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorIdx(uint8_t v_x_1597_){
_start:
{
switch(v_x_1597_)
{
case 0:
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_unsigned_to_nat(0u);
return v___x_1598_;
}
case 1:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_unsigned_to_nat(1u);
return v___x_1599_;
}
case 2:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_unsigned_to_nat(2u);
return v___x_1600_;
}
case 3:
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_unsigned_to_nat(3u);
return v___x_1601_;
}
case 4:
{
lean_object* v___x_1602_; 
v___x_1602_ = lean_unsigned_to_nat(4u);
return v___x_1602_;
}
case 5:
{
lean_object* v___x_1603_; 
v___x_1603_ = lean_unsigned_to_nat(5u);
return v___x_1603_;
}
case 6:
{
lean_object* v___x_1604_; 
v___x_1604_ = lean_unsigned_to_nat(6u);
return v___x_1604_;
}
case 7:
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_unsigned_to_nat(7u);
return v___x_1605_;
}
default: 
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_unsigned_to_nat(8u);
return v___x_1606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorIdx___boxed(lean_object* v_x_1607_){
_start:
{
uint8_t v_x_boxed_1608_; lean_object* v_res_1609_; 
v_x_boxed_1608_ = lean_unbox(v_x_1607_);
v_res_1609_ = l_Lasm_JS_Deno_BuildOs_ctorIdx(v_x_boxed_1608_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim___redArg(lean_object* v_k_1610_){
_start:
{
lean_inc(v_k_1610_);
return v_k_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim___redArg___boxed(lean_object* v_k_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lasm_JS_Deno_BuildOs_ctorElim___redArg(v_k_1611_);
lean_dec(v_k_1611_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim(lean_object* v_motive_1613_, lean_object* v_ctorIdx_1614_, uint8_t v_t_1615_, lean_object* v_h_1616_, lean_object* v_k_1617_){
_start:
{
lean_inc(v_k_1617_);
return v_k_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_ctorElim___boxed(lean_object* v_motive_1618_, lean_object* v_ctorIdx_1619_, lean_object* v_t_1620_, lean_object* v_h_1621_, lean_object* v_k_1622_){
_start:
{
uint8_t v_t_boxed_1623_; lean_object* v_res_1624_; 
v_t_boxed_1623_ = lean_unbox(v_t_1620_);
v_res_1624_ = l_Lasm_JS_Deno_BuildOs_ctorElim(v_motive_1618_, v_ctorIdx_1619_, v_t_boxed_1623_, v_h_1621_, v_k_1622_);
lean_dec(v_k_1622_);
lean_dec(v_ctorIdx_1619_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim___redArg(lean_object* v_darwin_1625_){
_start:
{
lean_inc(v_darwin_1625_);
return v_darwin_1625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim___redArg___boxed(lean_object* v_darwin_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lasm_JS_Deno_BuildOs_darwin_elim___redArg(v_darwin_1626_);
lean_dec(v_darwin_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim(lean_object* v_motive_1628_, uint8_t v_t_1629_, lean_object* v_h_1630_, lean_object* v_darwin_1631_){
_start:
{
lean_inc(v_darwin_1631_);
return v_darwin_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_darwin_elim___boxed(lean_object* v_motive_1632_, lean_object* v_t_1633_, lean_object* v_h_1634_, lean_object* v_darwin_1635_){
_start:
{
uint8_t v_t_boxed_1636_; lean_object* v_res_1637_; 
v_t_boxed_1636_ = lean_unbox(v_t_1633_);
v_res_1637_ = l_Lasm_JS_Deno_BuildOs_darwin_elim(v_motive_1632_, v_t_boxed_1636_, v_h_1634_, v_darwin_1635_);
lean_dec(v_darwin_1635_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim___redArg(lean_object* v_linux_1638_){
_start:
{
lean_inc(v_linux_1638_);
return v_linux_1638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim___redArg___boxed(lean_object* v_linux_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_Lasm_JS_Deno_BuildOs_linux_elim___redArg(v_linux_1639_);
lean_dec(v_linux_1639_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim(lean_object* v_motive_1641_, uint8_t v_t_1642_, lean_object* v_h_1643_, lean_object* v_linux_1644_){
_start:
{
lean_inc(v_linux_1644_);
return v_linux_1644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_linux_elim___boxed(lean_object* v_motive_1645_, lean_object* v_t_1646_, lean_object* v_h_1647_, lean_object* v_linux_1648_){
_start:
{
uint8_t v_t_boxed_1649_; lean_object* v_res_1650_; 
v_t_boxed_1649_ = lean_unbox(v_t_1646_);
v_res_1650_ = l_Lasm_JS_Deno_BuildOs_linux_elim(v_motive_1645_, v_t_boxed_1649_, v_h_1647_, v_linux_1648_);
lean_dec(v_linux_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim___redArg(lean_object* v_android_1651_){
_start:
{
lean_inc(v_android_1651_);
return v_android_1651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim___redArg___boxed(lean_object* v_android_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l_Lasm_JS_Deno_BuildOs_android_elim___redArg(v_android_1652_);
lean_dec(v_android_1652_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim(lean_object* v_motive_1654_, uint8_t v_t_1655_, lean_object* v_h_1656_, lean_object* v_android_1657_){
_start:
{
lean_inc(v_android_1657_);
return v_android_1657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_android_elim___boxed(lean_object* v_motive_1658_, lean_object* v_t_1659_, lean_object* v_h_1660_, lean_object* v_android_1661_){
_start:
{
uint8_t v_t_boxed_1662_; lean_object* v_res_1663_; 
v_t_boxed_1662_ = lean_unbox(v_t_1659_);
v_res_1663_ = l_Lasm_JS_Deno_BuildOs_android_elim(v_motive_1658_, v_t_boxed_1662_, v_h_1660_, v_android_1661_);
lean_dec(v_android_1661_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim___redArg(lean_object* v_windows_1664_){
_start:
{
lean_inc(v_windows_1664_);
return v_windows_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim___redArg___boxed(lean_object* v_windows_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lasm_JS_Deno_BuildOs_windows_elim___redArg(v_windows_1665_);
lean_dec(v_windows_1665_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim(lean_object* v_motive_1667_, uint8_t v_t_1668_, lean_object* v_h_1669_, lean_object* v_windows_1670_){
_start:
{
lean_inc(v_windows_1670_);
return v_windows_1670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_windows_elim___boxed(lean_object* v_motive_1671_, lean_object* v_t_1672_, lean_object* v_h_1673_, lean_object* v_windows_1674_){
_start:
{
uint8_t v_t_boxed_1675_; lean_object* v_res_1676_; 
v_t_boxed_1675_ = lean_unbox(v_t_1672_);
v_res_1676_ = l_Lasm_JS_Deno_BuildOs_windows_elim(v_motive_1671_, v_t_boxed_1675_, v_h_1673_, v_windows_1674_);
lean_dec(v_windows_1674_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim___redArg(lean_object* v_freebsd_1677_){
_start:
{
lean_inc(v_freebsd_1677_);
return v_freebsd_1677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim___redArg___boxed(lean_object* v_freebsd_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lasm_JS_Deno_BuildOs_freebsd_elim___redArg(v_freebsd_1678_);
lean_dec(v_freebsd_1678_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim(lean_object* v_motive_1680_, uint8_t v_t_1681_, lean_object* v_h_1682_, lean_object* v_freebsd_1683_){
_start:
{
lean_inc(v_freebsd_1683_);
return v_freebsd_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_freebsd_elim___boxed(lean_object* v_motive_1684_, lean_object* v_t_1685_, lean_object* v_h_1686_, lean_object* v_freebsd_1687_){
_start:
{
uint8_t v_t_boxed_1688_; lean_object* v_res_1689_; 
v_t_boxed_1688_ = lean_unbox(v_t_1685_);
v_res_1689_ = l_Lasm_JS_Deno_BuildOs_freebsd_elim(v_motive_1684_, v_t_boxed_1688_, v_h_1686_, v_freebsd_1687_);
lean_dec(v_freebsd_1687_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim___redArg(lean_object* v_netbsd_1690_){
_start:
{
lean_inc(v_netbsd_1690_);
return v_netbsd_1690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim___redArg___boxed(lean_object* v_netbsd_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lasm_JS_Deno_BuildOs_netbsd_elim___redArg(v_netbsd_1691_);
lean_dec(v_netbsd_1691_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim(lean_object* v_motive_1693_, uint8_t v_t_1694_, lean_object* v_h_1695_, lean_object* v_netbsd_1696_){
_start:
{
lean_inc(v_netbsd_1696_);
return v_netbsd_1696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_netbsd_elim___boxed(lean_object* v_motive_1697_, lean_object* v_t_1698_, lean_object* v_h_1699_, lean_object* v_netbsd_1700_){
_start:
{
uint8_t v_t_boxed_1701_; lean_object* v_res_1702_; 
v_t_boxed_1701_ = lean_unbox(v_t_1698_);
v_res_1702_ = l_Lasm_JS_Deno_BuildOs_netbsd_elim(v_motive_1697_, v_t_boxed_1701_, v_h_1699_, v_netbsd_1700_);
lean_dec(v_netbsd_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim___redArg(lean_object* v_aix_1703_){
_start:
{
lean_inc(v_aix_1703_);
return v_aix_1703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim___redArg___boxed(lean_object* v_aix_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lasm_JS_Deno_BuildOs_aix_elim___redArg(v_aix_1704_);
lean_dec(v_aix_1704_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim(lean_object* v_motive_1706_, uint8_t v_t_1707_, lean_object* v_h_1708_, lean_object* v_aix_1709_){
_start:
{
lean_inc(v_aix_1709_);
return v_aix_1709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_aix_elim___boxed(lean_object* v_motive_1710_, lean_object* v_t_1711_, lean_object* v_h_1712_, lean_object* v_aix_1713_){
_start:
{
uint8_t v_t_boxed_1714_; lean_object* v_res_1715_; 
v_t_boxed_1714_ = lean_unbox(v_t_1711_);
v_res_1715_ = l_Lasm_JS_Deno_BuildOs_aix_elim(v_motive_1710_, v_t_boxed_1714_, v_h_1712_, v_aix_1713_);
lean_dec(v_aix_1713_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim___redArg(lean_object* v_solaris_1716_){
_start:
{
lean_inc(v_solaris_1716_);
return v_solaris_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim___redArg___boxed(lean_object* v_solaris_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lasm_JS_Deno_BuildOs_solaris_elim___redArg(v_solaris_1717_);
lean_dec(v_solaris_1717_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim(lean_object* v_motive_1719_, uint8_t v_t_1720_, lean_object* v_h_1721_, lean_object* v_solaris_1722_){
_start:
{
lean_inc(v_solaris_1722_);
return v_solaris_1722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_solaris_elim___boxed(lean_object* v_motive_1723_, lean_object* v_t_1724_, lean_object* v_h_1725_, lean_object* v_solaris_1726_){
_start:
{
uint8_t v_t_boxed_1727_; lean_object* v_res_1728_; 
v_t_boxed_1727_ = lean_unbox(v_t_1724_);
v_res_1728_ = l_Lasm_JS_Deno_BuildOs_solaris_elim(v_motive_1723_, v_t_boxed_1727_, v_h_1725_, v_solaris_1726_);
lean_dec(v_solaris_1726_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim___redArg(lean_object* v_illumos_1729_){
_start:
{
lean_inc(v_illumos_1729_);
return v_illumos_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim___redArg___boxed(lean_object* v_illumos_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lasm_JS_Deno_BuildOs_illumos_elim___redArg(v_illumos_1730_);
lean_dec(v_illumos_1730_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim(lean_object* v_motive_1732_, uint8_t v_t_1733_, lean_object* v_h_1734_, lean_object* v_illumos_1735_){
_start:
{
lean_inc(v_illumos_1735_);
return v_illumos_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_BuildOs_illumos_elim___boxed(lean_object* v_motive_1736_, lean_object* v_t_1737_, lean_object* v_h_1738_, lean_object* v_illumos_1739_){
_start:
{
uint8_t v_t_boxed_1740_; lean_object* v_res_1741_; 
v_t_boxed_1740_ = lean_unbox(v_t_1737_);
v_res_1741_ = l_Lasm_JS_Deno_BuildOs_illumos_elim(v_motive_1736_, v_t_boxed_1740_, v_h_1738_, v_illumos_1739_);
lean_dec(v_illumos_1739_);
return v_res_1741_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqBuildOs_beq(uint8_t v_x_1742_, uint8_t v_y_1743_){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; uint8_t v___x_1746_; 
v___x_1744_ = l_Lasm_JS_Deno_BuildOs_ctorIdx(v_x_1742_);
v___x_1745_ = l_Lasm_JS_Deno_BuildOs_ctorIdx(v_y_1743_);
v___x_1746_ = lean_nat_dec_eq(v___x_1744_, v___x_1745_);
lean_dec(v___x_1745_);
lean_dec(v___x_1744_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqBuildOs_beq___boxed(lean_object* v_x_1747_, lean_object* v_y_1748_){
_start:
{
uint8_t v_x_21__boxed_1749_; uint8_t v_y_22__boxed_1750_; uint8_t v_res_1751_; lean_object* v_r_1752_; 
v_x_21__boxed_1749_ = lean_unbox(v_x_1747_);
v_y_22__boxed_1750_ = lean_unbox(v_y_1748_);
v_res_1751_ = l_Lasm_JS_Deno_instBEqBuildOs_beq(v_x_21__boxed_1749_, v_y_22__boxed_1750_);
v_r_1752_ = lean_box(v_res_1751_);
return v_r_1752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr(uint8_t v_x_1782_, lean_object* v_prec_1783_){
_start:
{
lean_object* v___y_1785_; lean_object* v___y_1792_; lean_object* v___y_1799_; lean_object* v___y_1806_; lean_object* v___y_1813_; lean_object* v___y_1820_; lean_object* v___y_1827_; lean_object* v___y_1834_; lean_object* v___y_1841_; 
switch(v_x_1782_)
{
case 0:
{
lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1847_ = lean_unsigned_to_nat(1024u);
v___x_1848_ = lean_nat_dec_le(v___x_1847_, v_prec_1783_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1785_ = v___x_1849_;
goto v___jp_1784_;
}
else
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1785_ = v___x_1850_;
goto v___jp_1784_;
}
}
case 1:
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = lean_unsigned_to_nat(1024u);
v___x_1852_ = lean_nat_dec_le(v___x_1851_, v_prec_1783_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1792_ = v___x_1853_;
goto v___jp_1791_;
}
else
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1792_ = v___x_1854_;
goto v___jp_1791_;
}
}
case 2:
{
lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1855_ = lean_unsigned_to_nat(1024u);
v___x_1856_ = lean_nat_dec_le(v___x_1855_, v_prec_1783_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; 
v___x_1857_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1799_ = v___x_1857_;
goto v___jp_1798_;
}
else
{
lean_object* v___x_1858_; 
v___x_1858_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1799_ = v___x_1858_;
goto v___jp_1798_;
}
}
case 3:
{
lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1859_ = lean_unsigned_to_nat(1024u);
v___x_1860_ = lean_nat_dec_le(v___x_1859_, v_prec_1783_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1806_ = v___x_1861_;
goto v___jp_1805_;
}
else
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1806_ = v___x_1862_;
goto v___jp_1805_;
}
}
case 4:
{
lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1863_ = lean_unsigned_to_nat(1024u);
v___x_1864_ = lean_nat_dec_le(v___x_1863_, v_prec_1783_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1813_ = v___x_1865_;
goto v___jp_1812_;
}
else
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1813_ = v___x_1866_;
goto v___jp_1812_;
}
}
case 5:
{
lean_object* v___x_1867_; uint8_t v___x_1868_; 
v___x_1867_ = lean_unsigned_to_nat(1024u);
v___x_1868_ = lean_nat_dec_le(v___x_1867_, v_prec_1783_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1820_ = v___x_1869_;
goto v___jp_1819_;
}
else
{
lean_object* v___x_1870_; 
v___x_1870_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1820_ = v___x_1870_;
goto v___jp_1819_;
}
}
case 6:
{
lean_object* v___x_1871_; uint8_t v___x_1872_; 
v___x_1871_ = lean_unsigned_to_nat(1024u);
v___x_1872_ = lean_nat_dec_le(v___x_1871_, v_prec_1783_);
if (v___x_1872_ == 0)
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1827_ = v___x_1873_;
goto v___jp_1826_;
}
else
{
lean_object* v___x_1874_; 
v___x_1874_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1827_ = v___x_1874_;
goto v___jp_1826_;
}
}
case 7:
{
lean_object* v___x_1875_; uint8_t v___x_1876_; 
v___x_1875_ = lean_unsigned_to_nat(1024u);
v___x_1876_ = lean_nat_dec_le(v___x_1875_, v_prec_1783_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; 
v___x_1877_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1834_ = v___x_1877_;
goto v___jp_1833_;
}
else
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1834_ = v___x_1878_;
goto v___jp_1833_;
}
}
default: 
{
lean_object* v___x_1879_; uint8_t v___x_1880_; 
v___x_1879_ = lean_unsigned_to_nat(1024u);
v___x_1880_ = lean_nat_dec_le(v___x_1879_, v_prec_1783_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__72, &l_Lasm_JS_Deno_instReprSignal_repr___closed__72_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__72);
v___y_1841_ = v___x_1881_;
goto v___jp_1840_;
}
else
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_obj_once(&l_Lasm_JS_Deno_instReprSignal_repr___closed__73, &l_Lasm_JS_Deno_instReprSignal_repr___closed__73_once, _init_l_Lasm_JS_Deno_instReprSignal_repr___closed__73);
v___y_1841_ = v___x_1882_;
goto v___jp_1840_;
}
}
}
v___jp_1784_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1786_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__1));
lean_inc(v___y_1785_);
v___x_1787_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1787_, 0, v___y_1785_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
v___x_1788_ = 0;
v___x_1789_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set_uint8(v___x_1789_, sizeof(void*)*1, v___x_1788_);
v___x_1790_ = l_Repr_addAppParen(v___x_1789_, v_prec_1783_);
return v___x_1790_;
}
v___jp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1793_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__3));
lean_inc(v___y_1792_);
v___x_1794_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1794_, 0, v___y_1792_);
lean_ctor_set(v___x_1794_, 1, v___x_1793_);
v___x_1795_ = 0;
v___x_1796_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1796_, 0, v___x_1794_);
lean_ctor_set_uint8(v___x_1796_, sizeof(void*)*1, v___x_1795_);
v___x_1797_ = l_Repr_addAppParen(v___x_1796_, v_prec_1783_);
return v___x_1797_;
}
v___jp_1798_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__5));
lean_inc(v___y_1799_);
v___x_1801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___y_1799_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = 0;
v___x_1803_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1803_, 0, v___x_1801_);
lean_ctor_set_uint8(v___x_1803_, sizeof(void*)*1, v___x_1802_);
v___x_1804_ = l_Repr_addAppParen(v___x_1803_, v_prec_1783_);
return v___x_1804_;
}
v___jp_1805_:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1807_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__7));
lean_inc(v___y_1806_);
v___x_1808_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___y_1806_);
lean_ctor_set(v___x_1808_, 1, v___x_1807_);
v___x_1809_ = 0;
v___x_1810_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1810_, 0, v___x_1808_);
lean_ctor_set_uint8(v___x_1810_, sizeof(void*)*1, v___x_1809_);
v___x_1811_ = l_Repr_addAppParen(v___x_1810_, v_prec_1783_);
return v___x_1811_;
}
v___jp_1812_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1814_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__9));
lean_inc(v___y_1813_);
v___x_1815_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___y_1813_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
v___x_1816_ = 0;
v___x_1817_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set_uint8(v___x_1817_, sizeof(void*)*1, v___x_1816_);
v___x_1818_ = l_Repr_addAppParen(v___x_1817_, v_prec_1783_);
return v___x_1818_;
}
v___jp_1819_:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1821_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__11));
lean_inc(v___y_1820_);
v___x_1822_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___y_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = 0;
v___x_1824_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1824_, 0, v___x_1822_);
lean_ctor_set_uint8(v___x_1824_, sizeof(void*)*1, v___x_1823_);
v___x_1825_ = l_Repr_addAppParen(v___x_1824_, v_prec_1783_);
return v___x_1825_;
}
v___jp_1826_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1828_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__13));
lean_inc(v___y_1827_);
v___x_1829_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___y_1827_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = 0;
v___x_1831_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1831_, 0, v___x_1829_);
lean_ctor_set_uint8(v___x_1831_, sizeof(void*)*1, v___x_1830_);
v___x_1832_ = l_Repr_addAppParen(v___x_1831_, v_prec_1783_);
return v___x_1832_;
}
v___jp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1835_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__15));
lean_inc(v___y_1834_);
v___x_1836_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___y_1834_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
v___x_1837_ = 0;
v___x_1838_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set_uint8(v___x_1838_, sizeof(void*)*1, v___x_1837_);
v___x_1839_ = l_Repr_addAppParen(v___x_1838_, v_prec_1783_);
return v___x_1839_;
}
v___jp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1842_ = ((lean_object*)(l_Lasm_JS_Deno_instReprBuildOs_repr___closed__17));
lean_inc(v___y_1841_);
v___x_1843_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___y_1841_);
lean_ctor_set(v___x_1843_, 1, v___x_1842_);
v___x_1844_ = 0;
v___x_1845_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set_uint8(v___x_1845_, sizeof(void*)*1, v___x_1844_);
v___x_1846_ = l_Repr_addAppParen(v___x_1845_, v_prec_1783_);
return v___x_1846_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprBuildOs_repr___boxed(lean_object* v_x_1883_, lean_object* v_prec_1884_){
_start:
{
uint8_t v_x_491__boxed_1885_; lean_object* v_res_1886_; 
v_x_491__boxed_1885_ = lean_unbox(v_x_1883_);
v_res_1886_ = l_Lasm_JS_Deno_instReprBuildOs_repr(v_x_491__boxed_1885_, v_prec_1884_);
lean_dec(v_prec_1884_);
return v_res_1886_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedBuildOs_default(void){
_start:
{
uint8_t v___x_1889_; 
v___x_1889_ = 0;
return v___x_1889_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedBuildOs(void){
_start:
{
uint8_t v___x_1890_; 
v___x_1890_ = 0;
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0(uint8_t v_x_1918_){
_start:
{
switch(v_x_1918_)
{
case 0:
{
lean_object* v___x_1919_; 
v___x_1919_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__1));
return v___x_1919_;
}
case 1:
{
lean_object* v___x_1920_; 
v___x_1920_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__3));
return v___x_1920_;
}
case 2:
{
lean_object* v___x_1921_; 
v___x_1921_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__5));
return v___x_1921_;
}
case 3:
{
lean_object* v___x_1922_; 
v___x_1922_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__7));
return v___x_1922_;
}
case 4:
{
lean_object* v___x_1923_; 
v___x_1923_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__9));
return v___x_1923_;
}
case 5:
{
lean_object* v___x_1924_; 
v___x_1924_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__11));
return v___x_1924_;
}
case 6:
{
lean_object* v___x_1925_; 
v___x_1925_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__13));
return v___x_1925_;
}
case 7:
{
lean_object* v___x_1926_; 
v___x_1926_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__15));
return v___x_1926_;
}
default: 
{
lean_object* v___x_1927_; 
v___x_1927_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__17));
return v___x_1927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBuildOs___lam__0___boxed(lean_object* v_x_1928_){
_start:
{
uint8_t v_x_159__boxed_1929_; lean_object* v_res_1930_; 
v_x_159__boxed_1929_ = lean_unbox(v_x_1928_);
v_res_1930_ = l_Lasm_JS_Deno_instToJSBuildOs___lam__0(v_x_159__boxed_1929_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0(lean_object* v_x_1962_){
_start:
{
if (lean_obj_tag(v_x_1962_) == 4)
{
lean_object* v_s_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v_s_1965_ = lean_ctor_get(v_x_1962_, 0);
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0));
v___x_1967_ = lean_string_dec_eq(v_s_1965_, v___x_1966_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1968_; uint8_t v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2));
v___x_1969_ = lean_string_dec_eq(v_s_1965_, v___x_1968_);
if (v___x_1969_ == 0)
{
lean_object* v___x_1970_; uint8_t v___x_1971_; 
v___x_1970_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4));
v___x_1971_ = lean_string_dec_eq(v_s_1965_, v___x_1970_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6));
v___x_1973_ = lean_string_dec_eq(v_s_1965_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; uint8_t v___x_1975_; 
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8));
v___x_1975_ = lean_string_dec_eq(v_s_1965_, v___x_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___x_1976_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10));
v___x_1977_ = lean_string_dec_eq(v_s_1965_, v___x_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; uint8_t v___x_1979_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12));
v___x_1979_ = lean_string_dec_eq(v_s_1965_, v___x_1978_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1980_; uint8_t v___x_1981_; 
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14));
v___x_1981_ = lean_string_dec_eq(v_s_1965_, v___x_1980_);
if (v___x_1981_ == 0)
{
lean_object* v___x_1982_; uint8_t v___x_1983_; 
v___x_1982_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16));
v___x_1983_ = lean_string_dec_eq(v_s_1965_, v___x_1982_);
if (v___x_1983_ == 0)
{
goto v___jp_1963_;
}
else
{
lean_object* v___x_1984_; 
v___x_1984_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__1));
return v___x_1984_;
}
}
else
{
lean_object* v___x_1985_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__2));
return v___x_1985_;
}
}
else
{
lean_object* v___x_1986_; 
v___x_1986_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__3));
return v___x_1986_;
}
}
else
{
lean_object* v___x_1987_; 
v___x_1987_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__4));
return v___x_1987_;
}
}
else
{
lean_object* v___x_1988_; 
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__5));
return v___x_1988_;
}
}
else
{
lean_object* v___x_1989_; 
v___x_1989_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__6));
return v___x_1989_;
}
}
else
{
lean_object* v___x_1990_; 
v___x_1990_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__7));
return v___x_1990_;
}
}
else
{
lean_object* v___x_1991_; 
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__8));
return v___x_1991_;
}
}
else
{
lean_object* v___x_1992_; 
v___x_1992_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__9));
return v___x_1992_;
}
}
else
{
goto v___jp_1963_;
}
v___jp_1963_:
{
lean_object* v___x_1964_; 
v___x_1964_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__0));
return v___x_1964_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___boxed(lean_object* v_x_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lasm_JS_Deno_instFromJSBuildOs___lam__0(v_x_1993_);
lean_dec(v_x_1993_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0(lean_object* v___x_2006_, lean_object* v_d_2007_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__0));
lean_inc_ref(v___x_2006_);
v___x_2009_ = l_Lasm_JS_readField___redArg(v___x_2006_, v_d_2007_, v___x_2008_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2017_; 
lean_dec_ref(v___x_2006_);
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2012_ = v___x_2009_;
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_2013_ == 0)
{
v___x_2015_ = v___x_2012_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2010_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_a_2018_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v___x_2009_, 1);
v___x_2019_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__1));
lean_inc_ref(v___x_2006_);
v___x_2020_ = l_Lasm_JS_readField___redArg(v___x_2006_, v_d_2007_, v___x_2019_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_a_2018_);
lean_dec_ref(v___x_2006_);
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v_a_2029_ = lean_ctor_get(v___x_2020_, 0);
lean_inc(v_a_2029_);
lean_dec_ref_known(v___x_2020_, 1);
v___x_2030_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__2));
lean_inc_ref(v___x_2006_);
v___x_2031_ = l_Lasm_JS_readField___redArg(v___x_2006_, v_d_2007_, v___x_2030_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
lean_dec(v_a_2029_);
lean_dec(v_a_2018_);
lean_dec_ref(v___x_2006_);
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2031_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v_a_2040_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2031_, 1);
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__3));
v___x_2042_ = l_Lasm_JS_readField___redArg(v___x_2006_, v_d_2007_, v___x_2041_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec(v_a_2040_);
lean_dec(v_a_2029_);
lean_dec(v_a_2018_);
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2063_; 
v_a_2051_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2053_ = v___x_2042_;
v_isShared_2054_ = v_isSharedCheck_2063_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2042_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2063_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; double v___x_2056_; double v___x_2057_; double v___x_2058_; double v___x_2059_; lean_object* v___x_2061_; 
v___x_2055_ = lean_alloc_ctor(0, 0, 32);
v___x_2056_ = lean_unbox_float(v_a_2018_);
lean_dec(v_a_2018_);
lean_ctor_set_float(v___x_2055_, 0, v___x_2056_);
v___x_2057_ = lean_unbox_float(v_a_2029_);
lean_dec(v_a_2029_);
lean_ctor_set_float(v___x_2055_, 8, v___x_2057_);
v___x_2058_ = lean_unbox_float(v_a_2040_);
lean_dec(v_a_2040_);
lean_ctor_set_float(v___x_2055_, 16, v___x_2058_);
v___x_2059_ = lean_unbox_float(v_a_2051_);
lean_dec(v_a_2051_);
lean_ctor_set_float(v___x_2055_, 24, v___x_2059_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2055_);
v___x_2061_ = v___x_2053_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2055_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___boxed(lean_object* v___x_2064_, lean_object* v_d_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0(v___x_2064_, v_d_2065_);
lean_dec(v_d_2065_);
return v_res_2066_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__0(void){
_start:
{
lean_object* v___x_2067_; lean_object* v___f_2068_; 
v___x_2067_ = l_Lasm_JS_instFromJSFloat;
v___f_2068_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2068_, 0, v___x_2067_);
return v___f_2068_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__2(void){
_start:
{
uint8_t v___x_2070_; lean_object* v___x_2071_; lean_object* v___f_2072_; lean_object* v___x_2073_; 
v___x_2070_ = 0;
v___x_2071_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__1));
v___f_2072_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__0, &l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__0);
v___x_2073_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2073_, 0, v___f_2072_);
lean_ctor_set(v___x_2073_, 1, v___x_2071_);
lean_ctor_set_uint8(v___x_2073_, sizeof(void*)*2, v___x_2070_);
return v___x_2073_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSMemoryUsage(void){
_start:
{
lean_object* v___x_2074_; 
v___x_2074_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__2, &l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__2);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0(lean_object* v___x_2082_, lean_object* v_d_2083_){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__0));
lean_inc_ref(v___x_2082_);
v___x_2085_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2084_);
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec_ref(v___x_2082_);
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2085_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2085_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2085_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v_a_2094_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2085_, 1);
v___x_2095_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__1));
lean_inc_ref(v___x_2082_);
v___x_2096_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2095_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec(v_a_2094_);
lean_dec_ref(v___x_2082_);
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2096_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2096_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v_a_2105_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2105_);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__2));
lean_inc_ref(v___x_2082_);
v___x_2107_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2106_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2115_; 
lean_dec(v_a_2105_);
lean_dec(v_a_2094_);
lean_dec_ref(v___x_2082_);
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2110_ = v___x_2107_;
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v___x_2107_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2108_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
else
{
lean_object* v_a_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v_a_2116_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2107_, 1);
v___x_2117_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__3));
lean_inc_ref(v___x_2082_);
v___x_2118_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2117_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec(v_a_2116_);
lean_dec(v_a_2105_);
lean_dec(v_a_2094_);
lean_dec_ref(v___x_2082_);
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v_a_2127_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2118_, 1);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__4));
lean_inc_ref(v___x_2082_);
v___x_2129_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2128_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
lean_dec(v_a_2127_);
lean_dec(v_a_2116_);
lean_dec(v_a_2105_);
lean_dec(v_a_2094_);
lean_dec_ref(v___x_2082_);
v_a_2130_ = lean_ctor_get(v___x_2129_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2129_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2129_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2129_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v_a_2138_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2129_, 1);
v___x_2139_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__5));
lean_inc_ref(v___x_2082_);
v___x_2140_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2139_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
lean_dec(v_a_2138_);
lean_dec(v_a_2127_);
lean_dec(v_a_2116_);
lean_dec(v_a_2105_);
lean_dec(v_a_2094_);
lean_dec_ref(v___x_2082_);
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2140_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2140_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
else
{
lean_object* v_a_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_a_2149_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2140_, 1);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__6));
v___x_2151_ = l_Lasm_JS_readField___redArg(v___x_2082_, v_d_2083_, v___x_2150_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
lean_dec(v_a_2149_);
lean_dec(v_a_2138_);
lean_dec(v_a_2127_);
lean_dec(v_a_2116_);
lean_dec(v_a_2105_);
lean_dec(v_a_2094_);
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2151_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2151_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2175_; 
v_a_2160_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2162_ = v___x_2151_;
v_isShared_2163_ = v_isSharedCheck_2175_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2151_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2175_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; double v___x_2165_; double v___x_2166_; double v___x_2167_; double v___x_2168_; double v___x_2169_; double v___x_2170_; double v___x_2171_; lean_object* v___x_2173_; 
v___x_2164_ = lean_alloc_ctor(0, 0, 56);
v___x_2165_ = lean_unbox_float(v_a_2094_);
lean_dec(v_a_2094_);
lean_ctor_set_float(v___x_2164_, 0, v___x_2165_);
v___x_2166_ = lean_unbox_float(v_a_2105_);
lean_dec(v_a_2105_);
lean_ctor_set_float(v___x_2164_, 8, v___x_2166_);
v___x_2167_ = lean_unbox_float(v_a_2116_);
lean_dec(v_a_2116_);
lean_ctor_set_float(v___x_2164_, 16, v___x_2167_);
v___x_2168_ = lean_unbox_float(v_a_2127_);
lean_dec(v_a_2127_);
lean_ctor_set_float(v___x_2164_, 24, v___x_2168_);
v___x_2169_ = lean_unbox_float(v_a_2138_);
lean_dec(v_a_2138_);
lean_ctor_set_float(v___x_2164_, 32, v___x_2169_);
v___x_2170_ = lean_unbox_float(v_a_2149_);
lean_dec(v_a_2149_);
lean_ctor_set_float(v___x_2164_, 40, v___x_2170_);
v___x_2171_ = lean_unbox_float(v_a_2160_);
lean_dec(v_a_2160_);
lean_ctor_set_float(v___x_2164_, 48, v___x_2171_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 0, v___x_2164_);
v___x_2173_ = v___x_2162_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2164_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___boxed(lean_object* v___x_2176_, lean_object* v_d_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0(v___x_2176_, v_d_2177_);
lean_dec(v_d_2177_);
return v_res_2178_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__0(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___f_2180_; 
v___x_2179_ = l_Lasm_JS_instFromJSFloat;
v___f_2180_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2180_, 0, v___x_2179_);
return v___f_2180_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__2(void){
_start:
{
uint8_t v___x_2182_; lean_object* v___x_2183_; lean_object* v___f_2184_; lean_object* v___x_2185_; 
v___x_2182_ = 0;
v___x_2183_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__1));
v___f_2184_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__0, &l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__0);
v___x_2185_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2185_, 0, v___f_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2183_);
lean_ctor_set_uint8(v___x_2185_, sizeof(void*)*2, v___x_2182_);
return v___x_2185_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSSystemMemoryInfo(void){
_start:
{
lean_object* v___x_2186_; 
v___x_2186_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__2, &l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__2);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorIdx(lean_object* v_x_2187_){
_start:
{
if (lean_obj_tag(v_x_2187_) == 0)
{
lean_object* v___x_2188_; 
v___x_2188_ = lean_unsigned_to_nat(0u);
return v___x_2188_;
}
else
{
lean_object* v___x_2189_; 
v___x_2189_ = lean_unsigned_to_nat(1u);
return v___x_2189_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorIdx___boxed(lean_object* v_x_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorIdx(v_x_2190_);
lean_dec_ref(v_x_2190_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(lean_object* v_t_2192_, lean_object* v_k_2193_){
_start:
{
if (lean_obj_tag(v_t_2192_) == 0)
{
lean_object* v_value_2194_; lean_object* v___x_2195_; 
v_value_2194_ = lean_ctor_get(v_t_2192_, 0);
lean_inc_ref(v_value_2194_);
lean_dec_ref_known(v_t_2192_, 1);
v___x_2195_ = lean_apply_1(v_k_2193_, v_value_2194_);
return v___x_2195_;
}
else
{
lean_object* v_value_2196_; lean_object* v___x_2197_; 
v_value_2196_ = lean_ctor_get(v_t_2192_, 0);
lean_inc(v_value_2196_);
lean_dec_ref_known(v_t_2192_, 1);
v___x_2197_ = lean_apply_1(v_k_2193_, v_value_2196_);
return v___x_2197_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorElim(lean_object* v_motive_2198_, lean_object* v_ctorIdx_2199_, lean_object* v_t_2200_, lean_object* v_h_2201_, lean_object* v_k_2202_){
_start:
{
lean_object* v___x_2203_; 
v___x_2203_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(v_t_2200_, v_k_2202_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___boxed(lean_object* v_motive_2204_, lean_object* v_ctorIdx_2205_, lean_object* v_t_2206_, lean_object* v_h_2207_, lean_object* v_k_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorElim(v_motive_2204_, v_ctorIdx_2205_, v_t_2206_, v_h_2207_, v_k_2208_);
lean_dec(v_ctorIdx_2205_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_domString_elim___redArg(lean_object* v_t_2210_, lean_object* v_domString_2211_){
_start:
{
lean_object* v___x_2212_; 
v___x_2212_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(v_t_2210_, v_domString_2211_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_domString_elim(lean_object* v_motive_2213_, lean_object* v_t_2214_, lean_object* v_h_2215_, lean_object* v_domString_2216_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(v_t_2214_, v_domString_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_url_elim___redArg(lean_object* v_t_2218_, lean_object* v_url_2219_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(v_t_2218_, v_url_2219_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DOMStringOrURL_url_elim(lean_object* v_motive_2221_, lean_object* v_t_2222_, lean_object* v_h_2223_, lean_object* v_url_2224_){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = l_Lasm_JS_Deno_DOMStringOrURL_ctorElim___redArg(v_t_2222_, v_url_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDOMStringOrURL___lam__0(lean_object* v_x_2226_){
_start:
{
if (lean_obj_tag(v_x_2226_) == 0)
{
lean_object* v_value_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
v_value_2227_ = lean_ctor_get(v_x_2226_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v_x_2226_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v_x_2226_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_value_2227_);
lean_dec(v_x_2226_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
lean_ctor_set_tag(v___x_2229_, 4);
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_value_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
else
{
lean_object* v_value_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_value_2235_ = lean_ctor_get(v_x_2226_, 0);
lean_inc(v_value_2235_);
lean_dec_ref_known(v_x_2226_, 1);
v___x_2236_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_2237_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2237_, 0, v_value_2235_);
lean_ctor_set(v___x_2237_, 1, v___x_2236_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeStringDOMStringOrURL___lam__0(lean_object* v_value_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v_value_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeURLDOMStringOrURL___lam__0(lean_object* v_value_2244_){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2245_, 0, v_value_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0(lean_object* v_x_2259_){
_start:
{
if (lean_obj_tag(v_x_2259_) == 0)
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2269_; 
v_a_2261_ = lean_ctor_get(v_x_2259_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_x_2259_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2263_ = v_x_2259_;
v_isShared_2264_ = v_isSharedCheck_2269_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v_x_2259_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2269_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2266_; 
if (v_isShared_2264_ == 0)
{
v___x_2266_ = v___x_2263_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2261_);
v___x_2266_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_object* v___x_2267_; 
v___x_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
}
}
else
{
lean_object* v___x_2270_; 
lean_dec_ref_known(v_x_2259_, 1);
v___x_2270_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___closed__1));
return v___x_2270_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0___boxed(lean_object* v_x_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__0(v_x_2271_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1(lean_object* v_f_2274_, lean_object* v___f_2275_, lean_object* v_x_2276_){
_start:
{
lean_object* v___x_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2278_ = lean_unsigned_to_nat(0u);
v___x_2279_ = 0;
v___x_2280_ = lean_apply_1(v_f_2274_, lean_box(0));
v___x_2281_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2278_, v___x_2279_, v___x_2280_, v___f_2275_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1___boxed(lean_object* v_f_2282_, lean_object* v___f_2283_, lean_object* v_x_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1(v_f_2282_, v___f_2283_, v_x_2284_);
lean_dec_ref(v_x_2284_);
return v_res_2286_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2294_ = lean_unsigned_to_nat(0u);
v___x_2295_ = lean_nat_to_int(v___x_2294_);
return v___x_2295_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6);
v___x_2297_ = lean_nat_abs(v___x_2296_);
return v___x_2297_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; 
v___x_2298_ = lean_cstr_to_nat("9007199254740991");
v___x_2299_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__7, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__7);
v___x_2300_ = lean_nat_dec_le(v___x_2299_, v___x_2298_);
return v___x_2300_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9(void){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6);
v___x_2302_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
static double _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__10(void){
_start:
{
lean_object* v___x_2303_; double v___x_2304_; 
v___x_2303_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__6);
v___x_2304_ = l_Float_ofInt(v___x_2303_);
return v___x_2304_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11(void){
_start:
{
double v___x_2305_; lean_object* v___x_2306_; 
v___x_2305_ = lean_float_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__10, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__10);
v___x_2306_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2306_, 0, v___x_2305_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn(lean_object* v_f_2307_){
_start:
{
lean_object* v___f_2309_; lean_object* v___f_2310_; lean_object* v___x_2311_; 
v___f_2309_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__0));
v___f_2310_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2310_, 0, v_f_2307_);
lean_closure_set(v___f_2310_, 1, v___f_2309_);
v___x_2311_ = l_Lasm_JS_Function_ofFn(v___f_2310_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v___x_2313_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2311_, 1);
v___x_2313_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2313_, 1);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1));
v___x_2316_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2314_, v___x_2315_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___y_2324_; uint8_t v___x_2351_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_a_2317_);
lean_dec_ref_known(v___x_2316_, 1);
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2));
v___x_2319_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
lean_inc(v_a_2312_);
v___x_2320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2320_, 0, v_a_2312_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4));
v___x_2322_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5));
v___x_2351_ = lean_uint8_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9);
v___y_2324_ = v___x_2352_;
goto v___jp_2323_;
}
else
{
lean_object* v___x_2353_; 
v___x_2353_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11);
v___y_2324_ = v___x_2353_;
goto v___jp_2323_;
}
v___jp_2323_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_inc(v___y_2324_);
v___x_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2322_);
lean_ctor_set(v___x_2325_, 1, v___y_2324_);
v___x_2326_ = lean_box(0);
v___x_2327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2325_);
lean_ctor_set(v___x_2327_, 1, v___x_2326_);
v___x_2328_ = l_Lasm_JS_obj(v___x_2327_);
v___x_2329_ = lean_unsigned_to_nat(3u);
v___x_2330_ = lean_mk_empty_array_with_capacity(v___x_2329_);
v___x_2331_ = lean_array_push(v___x_2330_, v___x_2320_);
v___x_2332_ = lean_array_push(v___x_2331_, v___x_2321_);
v___x_2333_ = lean_array_push(v___x_2332_, v___x_2328_);
v___x_2334_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2317_, v___x_2318_, v___x_2333_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2341_; 
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2341_ == 0)
{
lean_object* v_unused_2342_; 
v_unused_2342_ = lean_ctor_get(v___x_2334_, 0);
lean_dec(v_unused_2342_);
v___x_2336_ = v___x_2334_;
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
else
{
lean_dec(v___x_2334_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2341_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2339_; 
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 0, v_a_2312_);
v___x_2339_ = v___x_2336_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v_a_2312_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec(v_a_2312_);
v_a_2343_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2334_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2334_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
}
else
{
lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2361_; 
lean_dec(v_a_2312_);
v_a_2354_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2356_ = v___x_2316_;
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2316_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2361_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2359_; 
if (v_isShared_2357_ == 0)
{
v___x_2359_ = v___x_2356_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v_a_2354_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
}
else
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
lean_dec(v_a_2312_);
v_a_2362_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v___x_2313_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2313_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2362_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
v_a_2370_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2311_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2311_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___boxed(lean_object* v_f_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn(v_f_2378_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0(lean_object* v_f_2381_, lean_object* v_x_2382_){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_apply_1(v_f_2381_, lean_box(0));
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2392_; 
v_isSharedCheck_2392_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2392_ == 0)
{
lean_object* v_unused_2393_; 
v_unused_2393_ = lean_ctor_get(v___x_2384_, 0);
lean_dec(v_unused_2393_);
v___x_2386_ = v___x_2384_;
v_isShared_2387_ = v_isSharedCheck_2392_;
goto v_resetjp_2385_;
}
else
{
lean_dec(v___x_2384_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2392_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2388_; lean_object* v___x_2390_; 
v___x_2388_ = lean_box(0);
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 0, v___x_2388_);
v___x_2390_ = v___x_2386_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
v_a_2394_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2384_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2384_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_2402_, lean_object* v_x_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0(v_f_2402_, v_x_2403_);
lean_dec_ref(v_x_2403_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn(lean_object* v_f_2406_){
_start:
{
lean_object* v___f_2408_; lean_object* v___x_2409_; 
v___f_2408_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2408_, 0, v_f_2406_);
v___x_2409_ = l_Lasm_JS_Function_ofSyncFn(v___f_2408_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v_a_2410_; lean_object* v___x_2411_; 
v_a_2410_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2409_, 1);
v___x_2411_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2411_, 1);
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1));
v___x_2414_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2412_, v___x_2413_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___y_2422_; uint8_t v___x_2449_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2416_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2));
v___x_2417_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
lean_inc(v_a_2410_);
v___x_2418_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2418_, 0, v_a_2410_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4));
v___x_2420_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5));
v___x_2449_ = lean_uint8_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8);
if (v___x_2449_ == 0)
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9);
v___y_2422_ = v___x_2450_;
goto v___jp_2421_;
}
else
{
lean_object* v___x_2451_; 
v___x_2451_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11);
v___y_2422_ = v___x_2451_;
goto v___jp_2421_;
}
v___jp_2421_:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
lean_inc(v___y_2422_);
v___x_2423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2420_);
lean_ctor_set(v___x_2423_, 1, v___y_2422_);
v___x_2424_ = lean_box(0);
v___x_2425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2423_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
v___x_2426_ = l_Lasm_JS_obj(v___x_2425_);
v___x_2427_ = lean_unsigned_to_nat(3u);
v___x_2428_ = lean_mk_empty_array_with_capacity(v___x_2427_);
v___x_2429_ = lean_array_push(v___x_2428_, v___x_2418_);
v___x_2430_ = lean_array_push(v___x_2429_, v___x_2419_);
v___x_2431_ = lean_array_push(v___x_2430_, v___x_2426_);
v___x_2432_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2415_, v___x_2416_, v___x_2431_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2439_ == 0)
{
lean_object* v_unused_2440_; 
v_unused_2440_ = lean_ctor_get(v___x_2432_, 0);
lean_dec(v_unused_2440_);
v___x_2434_ = v___x_2432_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_dec(v___x_2432_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 0, v_a_2410_);
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2410_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
lean_dec(v_a_2410_);
v_a_2441_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2432_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2432_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
lean_dec(v_a_2410_);
v_a_2452_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2414_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2414_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
else
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
lean_dec(v_a_2410_);
v_a_2460_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2411_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2411_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2475_; 
v_a_2468_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2470_ = v___x_2409_;
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2409_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___boxed(lean_object* v_f_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn(v_f_2476_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofFn(lean_object* v_f_2486_){
_start:
{
lean_object* v___f_2488_; lean_object* v___f_2489_; lean_object* v___x_2490_; 
v___f_2488_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__0));
v___f_2489_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2489_, 0, v_f_2486_);
lean_closure_set(v___f_2489_, 1, v___f_2488_);
v___x_2490_ = l_Lasm_JS_Function_ofFn(v___f_2489_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v___x_2492_; 
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_a_2491_);
lean_dec_ref_known(v___x_2490_, 1);
v___x_2492_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2492_, 1);
v___x_2494_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1));
v___x_2495_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2493_, v___x_2494_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___y_2503_; uint8_t v___x_2530_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v___x_2497_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2));
v___x_2498_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
lean_inc(v_a_2491_);
v___x_2499_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2499_, 0, v_a_2491_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4));
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5));
v___x_2530_ = lean_uint8_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9);
v___y_2503_ = v___x_2531_;
goto v___jp_2502_;
}
else
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11);
v___y_2503_ = v___x_2532_;
goto v___jp_2502_;
}
v___jp_2502_:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
lean_inc(v___y_2503_);
v___x_2504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2501_);
lean_ctor_set(v___x_2504_, 1, v___y_2503_);
v___x_2505_ = lean_box(0);
v___x_2506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = l_Lasm_JS_obj(v___x_2506_);
v___x_2508_ = lean_unsigned_to_nat(3u);
v___x_2509_ = lean_mk_empty_array_with_capacity(v___x_2508_);
v___x_2510_ = lean_array_push(v___x_2509_, v___x_2499_);
v___x_2511_ = lean_array_push(v___x_2510_, v___x_2500_);
v___x_2512_ = lean_array_push(v___x_2511_, v___x_2507_);
v___x_2513_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2496_, v___x_2497_, v___x_2512_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2520_ == 0)
{
lean_object* v_unused_2521_; 
v_unused_2521_ = lean_ctor_get(v___x_2513_, 0);
lean_dec(v_unused_2521_);
v___x_2515_ = v___x_2513_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_dec(v___x_2513_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
lean_ctor_set(v___x_2515_, 0, v_a_2491_);
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2491_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec(v_a_2491_);
v_a_2522_ = lean_ctor_get(v___x_2513_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2513_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2513_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2513_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
lean_dec(v_a_2491_);
v_a_2533_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2495_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2495_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v_a_2491_);
v_a_2541_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2492_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2492_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
v_a_2549_ = lean_ctor_get(v___x_2490_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2490_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2490_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2490_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofFn___boxed(lean_object* v_f_2557_, lean_object* v_a_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofFn(v_f_2557_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofSyncFn(lean_object* v_f_2560_){
_start:
{
lean_object* v___f_2562_; lean_object* v___x_2563_; 
v___f_2562_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2562_, 0, v_f_2560_);
v___x_2563_ = l_Lasm_JS_Function_ofSyncFn(v___f_2562_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2565_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2566_);
lean_dec_ref_known(v___x_2565_, 1);
v___x_2567_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__1));
v___x_2568_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2566_, v___x_2567_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___y_2576_; uint8_t v___x_2603_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
v___x_2570_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__2));
v___x_2571_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
lean_inc(v_a_2564_);
v___x_2572_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2572_, 0, v_a_2564_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__4));
v___x_2574_ = ((lean_object*)(l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__5));
v___x_2603_ = lean_uint8_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__8);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; 
v___x_2604_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__9);
v___y_2576_ = v___x_2604_;
goto v___jp_2575_;
}
else
{
lean_object* v___x_2605_; 
v___x_2605_ = lean_obj_once(&l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11, &l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Deno_AddSignalListenerHandler_ofFn___closed__11);
v___y_2576_ = v___x_2605_;
goto v___jp_2575_;
}
v___jp_2575_:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_inc(v___y_2576_);
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2574_);
lean_ctor_set(v___x_2577_, 1, v___y_2576_);
v___x_2578_ = lean_box(0);
v___x_2579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2577_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = l_Lasm_JS_obj(v___x_2579_);
v___x_2581_ = lean_unsigned_to_nat(3u);
v___x_2582_ = lean_mk_empty_array_with_capacity(v___x_2581_);
v___x_2583_ = lean_array_push(v___x_2582_, v___x_2572_);
v___x_2584_ = lean_array_push(v___x_2583_, v___x_2573_);
v___x_2585_ = lean_array_push(v___x_2584_, v___x_2580_);
v___x_2586_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2569_, v___x_2570_, v___x_2585_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2593_ == 0)
{
lean_object* v_unused_2594_; 
v_unused_2594_ = lean_ctor_get(v___x_2586_, 0);
lean_dec(v_unused_2594_);
v___x_2588_ = v___x_2586_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_dec(v___x_2586_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v_a_2564_);
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2564_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
else
{
lean_object* v_a_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
lean_dec(v_a_2564_);
v_a_2595_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2597_ = v___x_2586_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_a_2595_);
lean_dec(v___x_2586_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2595_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
lean_dec(v_a_2564_);
v_a_2606_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2568_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2568_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
else
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2621_; 
lean_dec(v_a_2564_);
v_a_2614_ = lean_ctor_get(v___x_2565_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2565_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2616_ = v___x_2565_;
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2565_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2621_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
v_a_2622_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2563_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2563_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofSyncFn___boxed(lean_object* v_f_2630_, lean_object* v_a_2631_){
_start:
{
lean_object* v_res_2632_; 
v_res_2632_ = l_Lasm_JS_Deno_RemoveSignalListenerHandler_ofSyncFn(v_f_2630_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorIdx(lean_object* v_x_2633_){
_start:
{
if (lean_obj_tag(v_x_2633_) == 0)
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_unsigned_to_nat(0u);
return v___x_2634_;
}
else
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_unsigned_to_nat(1u);
return v___x_2635_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorIdx___boxed(lean_object* v_x_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Lasm_JS_Deno_DoubleOrObject_ctorIdx(v_x_2636_);
lean_dec_ref(v_x_2636_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(lean_object* v_t_2638_, lean_object* v_k_2639_){
_start:
{
if (lean_obj_tag(v_t_2638_) == 0)
{
double v_value_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v_value_2640_ = lean_ctor_get_float(v_t_2638_, 0);
lean_dec_ref_known(v_t_2638_, 0);
v___x_2641_ = lean_box_float(v_value_2640_);
v___x_2642_ = lean_apply_1(v_k_2639_, v___x_2641_);
return v___x_2642_;
}
else
{
lean_object* v_value_2643_; lean_object* v___x_2644_; 
v_value_2643_ = lean_ctor_get(v_t_2638_, 0);
lean_inc(v_value_2643_);
lean_dec_ref_known(v_t_2638_, 1);
v___x_2644_ = lean_apply_1(v_k_2639_, v_value_2643_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorElim(lean_object* v_motive_2645_, lean_object* v_ctorIdx_2646_, lean_object* v_t_2647_, lean_object* v_h_2648_, lean_object* v_k_2649_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(v_t_2647_, v_k_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_ctorElim___boxed(lean_object* v_motive_2651_, lean_object* v_ctorIdx_2652_, lean_object* v_t_2653_, lean_object* v_h_2654_, lean_object* v_k_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Lasm_JS_Deno_DoubleOrObject_ctorElim(v_motive_2651_, v_ctorIdx_2652_, v_t_2653_, v_h_2654_, v_k_2655_);
lean_dec(v_ctorIdx_2652_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_double_elim___redArg(lean_object* v_t_2657_, lean_object* v_double_2658_){
_start:
{
lean_object* v___x_2659_; 
v___x_2659_ = l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(v_t_2657_, v_double_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_double_elim(lean_object* v_motive_2660_, lean_object* v_t_2661_, lean_object* v_h_2662_, lean_object* v_double_2663_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(v_t_2661_, v_double_2663_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_object_elim___redArg(lean_object* v_t_2665_, lean_object* v_object_2666_){
_start:
{
lean_object* v___x_2667_; 
v___x_2667_ = l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(v_t_2665_, v_object_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrObject_object_elim(lean_object* v_motive_2668_, lean_object* v_t_2669_, lean_object* v_h_2670_, lean_object* v_object_2671_){
_start:
{
lean_object* v___x_2672_; 
v___x_2672_ = l_Lasm_JS_Deno_DoubleOrObject_ctorElim___redArg(v_t_2669_, v_object_2671_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrObject___lam__0(lean_object* v_x_2673_){
_start:
{
if (lean_obj_tag(v_x_2673_) == 0)
{
double v_value_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2681_; 
v_value_2674_ = lean_ctor_get_float(v_x_2673_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_x_2673_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2676_ = v_x_2673_;
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
else
{
lean_dec(v_x_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2681_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2679_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set_tag(v___x_2676_, 3);
v___x_2679_ = v___x_2676_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2680_, 0, v_value_2674_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
else
{
lean_object* v_value_2682_; 
v_value_2682_ = lean_ctor_get(v_x_2673_, 0);
lean_inc(v_value_2682_);
lean_dec_ref_known(v_x_2673_, 1);
return v_value_2682_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___lam__0(double v_value_2685_){
_start:
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_2686_, 0, v_value_2685_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___lam__0___boxed(lean_object* v_value_2687_){
_start:
{
double v_value_boxed_2688_; lean_object* v_res_2689_; 
v_value_boxed_2688_ = lean_unbox_float(v_value_2687_);
lean_dec_ref(v_value_2687_);
v_res_2689_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrObject___lam__0(v_value_boxed_2688_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0(lean_object* v___x_2698_, lean_object* v___x_2699_, lean_object* v___x_2700_, lean_object* v___x_2701_, lean_object* v___x_2702_, lean_object* v_d_2703_){
_start:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0));
lean_inc_ref(v___x_2698_);
v___x_2705_ = l_Lasm_JS_readField___redArg(v___x_2698_, v_d_2703_, v___x_2704_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref(v___x_2702_);
lean_dec_ref(v___x_2701_);
lean_dec_ref(v___x_2700_);
lean_dec_ref(v___x_2699_);
lean_dec_ref(v___x_2698_);
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2705_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_a_2714_ = lean_ctor_get(v___x_2705_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v___x_2705_, 1);
v___x_2715_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1));
v___x_2716_ = l_Lasm_JS_readField___redArg(v___x_2699_, v_d_2703_, v___x_2715_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec(v_a_2714_);
lean_dec_ref(v___x_2702_);
lean_dec_ref(v___x_2701_);
lean_dec_ref(v___x_2700_);
lean_dec_ref(v___x_2698_);
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2716_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v_a_2725_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2725_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2726_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2));
v___x_2727_ = l_Lasm_JS_readField___redArg(v___x_2700_, v_d_2703_, v___x_2726_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec(v_a_2725_);
lean_dec(v_a_2714_);
lean_dec_ref(v___x_2702_);
lean_dec_ref(v___x_2701_);
lean_dec_ref(v___x_2698_);
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2727_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2727_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v_a_2736_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2736_);
lean_dec_ref_known(v___x_2727_, 1);
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3));
v___x_2738_ = l_Lasm_JS_readField___redArg(v___x_2701_, v_d_2703_, v___x_2737_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_dec(v_a_2736_);
lean_dec(v_a_2725_);
lean_dec(v_a_2714_);
lean_dec_ref(v___x_2702_);
lean_dec_ref(v___x_2698_);
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2738_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2738_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v_a_2747_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2738_, 1);
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4));
v___x_2749_ = l_Lasm_JS_readField___redArg(v___x_2698_, v_d_2703_, v___x_2748_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
lean_dec(v_a_2747_);
lean_dec(v_a_2736_);
lean_dec(v_a_2725_);
lean_dec(v_a_2714_);
lean_dec_ref(v___x_2702_);
v_a_2750_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2749_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2749_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v_a_2758_ = lean_ctor_get(v___x_2749_, 0);
lean_inc(v_a_2758_);
lean_dec_ref_known(v___x_2749_, 1);
v___x_2759_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5));
v___x_2760_ = l_Lasm_JS_readField___redArg(v___x_2702_, v_d_2703_, v___x_2759_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
lean_dec(v_a_2758_);
lean_dec(v_a_2747_);
lean_dec(v_a_2736_);
lean_dec(v_a_2725_);
lean_dec(v_a_2714_);
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2763_ = v___x_2760_;
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2760_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2768_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2766_; 
if (v_isShared_2764_ == 0)
{
v___x_2766_ = v___x_2763_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_a_2761_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
else
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2780_; 
v_a_2769_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2771_ = v___x_2760_;
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2760_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; uint8_t v___x_2774_; uint8_t v___x_2775_; uint8_t v___x_2776_; lean_object* v___x_2778_; 
v___x_2773_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_2773_, 0, v_a_2714_);
lean_ctor_set(v___x_2773_, 1, v_a_2758_);
lean_ctor_set(v___x_2773_, 2, v_a_2769_);
v___x_2774_ = lean_unbox(v_a_2725_);
lean_dec(v_a_2725_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*3, v___x_2774_);
v___x_2775_ = lean_unbox(v_a_2736_);
lean_dec(v_a_2736_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*3 + 1, v___x_2775_);
v___x_2776_ = lean_unbox(v_a_2747_);
lean_dec(v_a_2747_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*3 + 2, v___x_2776_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 0, v___x_2773_);
v___x_2778_ = v___x_2771_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___boxed(lean_object* v___x_2781_, lean_object* v___x_2782_, lean_object* v___x_2783_, lean_object* v___x_2784_, lean_object* v___x_2785_, lean_object* v_d_2786_){
_start:
{
lean_object* v_res_2787_; 
v_res_2787_ = l_Lasm_JS_Deno_instFromJSBuild___lam__0(v___x_2781_, v___x_2782_, v___x_2783_, v___x_2784_, v___x_2785_, v_d_2786_);
lean_dec(v_d_2786_);
return v_res_2787_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild___closed__0(void){
_start:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = l_Lasm_JS_instFromJSString;
v___x_2789_ = l_Lasm_JS_instFromJSOption___redArg(v___x_2788_);
return v___x_2789_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild___closed__1(void){
_start:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___f_2795_; 
v___x_2790_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSBuild___closed__0, &l_Lasm_JS_Deno_instFromJSBuild___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSBuild___closed__0);
v___x_2791_ = l_Lasm_JS_instFromJSBool;
v___x_2792_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs));
v___x_2793_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch));
v___x_2794_ = l_Lasm_JS_instFromJSString;
v___f_2795_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2795_, 0, v___x_2794_);
lean_closure_set(v___f_2795_, 1, v___x_2793_);
lean_closure_set(v___f_2795_, 2, v___x_2792_);
lean_closure_set(v___f_2795_, 3, v___x_2791_);
lean_closure_set(v___f_2795_, 4, v___x_2790_);
return v___f_2795_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild___closed__3(void){
_start:
{
uint8_t v___x_2797_; lean_object* v___x_2798_; lean_object* v___f_2799_; lean_object* v___x_2800_; 
v___x_2797_ = 0;
v___x_2798_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___closed__2));
v___f_2799_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSBuild___closed__1, &l_Lasm_JS_Deno_instFromJSBuild___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSBuild___closed__1);
v___x_2800_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2800_, 0, v___f_2799_);
lean_ctor_set(v___x_2800_, 1, v___x_2798_);
lean_ctor_set_uint8(v___x_2800_, sizeof(void*)*2, v___x_2797_);
return v___x_2800_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild(void){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSBuild___closed__3, &l_Lasm_JS_Deno_instFromJSBuild___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSBuild___closed__3);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0(lean_object* v___x_2805_, lean_object* v_d_2806_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0));
lean_inc_ref(v___x_2805_);
v___x_2808_ = l_Lasm_JS_readField___redArg(v___x_2805_, v_d_2806_, v___x_2807_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
lean_dec_ref(v___x_2805_);
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2808_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2808_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v_a_2817_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2817_);
lean_dec_ref_known(v___x_2808_, 1);
v___x_2818_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1));
lean_inc_ref(v___x_2805_);
v___x_2819_ = l_Lasm_JS_readField___redArg(v___x_2805_, v_d_2806_, v___x_2818_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec(v_a_2817_);
lean_dec_ref(v___x_2805_);
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2819_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2819_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v_a_2828_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2828_);
lean_dec_ref_known(v___x_2819_, 1);
v___x_2829_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2));
v___x_2830_ = l_Lasm_JS_readField___redArg(v___x_2805_, v_d_2806_, v___x_2829_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
lean_dec(v_a_2828_);
lean_dec(v_a_2817_);
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2830_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2830_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2847_; 
v_a_2839_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2841_ = v___x_2830_;
v_isShared_2842_ = v_isSharedCheck_2847_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2830_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2847_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2843_; lean_object* v___x_2845_; 
v___x_2843_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2843_, 0, v_a_2817_);
lean_ctor_set(v___x_2843_, 1, v_a_2828_);
lean_ctor_set(v___x_2843_, 2, v_a_2839_);
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 0, v___x_2843_);
v___x_2845_ = v___x_2841_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2843_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0___boxed(lean_object* v___x_2848_, lean_object* v_d_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lasm_JS_Deno_instFromJSVersion___lam__0(v___x_2848_, v_d_2849_);
lean_dec(v_d_2849_);
return v_res_2850_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSVersion___closed__0(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___f_2852_; 
v___x_2851_ = l_Lasm_JS_instFromJSString;
v___f_2852_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2852_, 0, v___x_2851_);
return v___f_2852_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSVersion___closed__2(void){
_start:
{
uint8_t v___x_2854_; lean_object* v___x_2855_; lean_object* v___f_2856_; lean_object* v___x_2857_; 
v___x_2854_ = 0;
v___x_2855_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___closed__1));
v___f_2856_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSVersion___closed__0, &l_Lasm_JS_Deno_instFromJSVersion___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSVersion___closed__0);
v___x_2857_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2857_, 0, v___f_2856_);
lean_ctor_set(v___x_2857_, 1, v___x_2855_);
lean_ctor_set_uint8(v___x_2857_, sizeof(void*)*2, v___x_2854_);
return v___x_2857_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSVersion(void){
_start:
{
lean_object* v___x_2858_; 
v___x_2858_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSVersion___closed__2, &l_Lasm_JS_Deno_instFromJSVersion___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSVersion___closed__2);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_get(lean_object* v_self_2860_, lean_object* v_key_2861_){
_start:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2863_ = ((lean_object*)(l_Lasm_JS_Deno_Env_get___closed__0));
v___x_2864_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2864_, 0, v_key_2861_);
v___x_2865_ = lean_unsigned_to_nat(1u);
v___x_2866_ = lean_mk_empty_array_with_capacity(v___x_2865_);
v___x_2867_ = lean_array_push(v___x_2866_, v___x_2864_);
v___x_2868_ = l_Lasm_JS_Web_Support_args(v___x_2867_);
v___x_2869_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_2860_, v___x_2863_, v___x_2868_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_get___boxed(lean_object* v_self_2870_, lean_object* v_key_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l_Lasm_JS_Deno_Env_get(v_self_2870_, v_key_2871_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_set(lean_object* v_self_2875_, lean_object* v_key_2876_, lean_object* v_value_2877_){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2879_ = ((lean_object*)(l_Lasm_JS_Deno_Env_set___closed__0));
v___x_2880_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2880_, 0, v_key_2876_);
v___x_2881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2881_, 0, v_value_2877_);
v___x_2882_ = lean_unsigned_to_nat(2u);
v___x_2883_ = lean_mk_empty_array_with_capacity(v___x_2882_);
v___x_2884_ = lean_array_push(v___x_2883_, v___x_2880_);
v___x_2885_ = lean_array_push(v___x_2884_, v___x_2881_);
v___x_2886_ = l_Lasm_JS_Web_Support_args(v___x_2885_);
v___x_2887_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2875_, v___x_2879_, v___x_2886_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_set___boxed(lean_object* v_self_2888_, lean_object* v_key_2889_, lean_object* v_value_2890_, lean_object* v_a_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Lasm_JS_Deno_Env_set(v_self_2888_, v_key_2889_, v_value_2890_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_delete(lean_object* v_self_2894_, lean_object* v_key_2895_){
_start:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2897_ = ((lean_object*)(l_Lasm_JS_Deno_Env_delete___closed__0));
v___x_2898_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2898_, 0, v_key_2895_);
v___x_2899_ = lean_unsigned_to_nat(1u);
v___x_2900_ = lean_mk_empty_array_with_capacity(v___x_2899_);
v___x_2901_ = lean_array_push(v___x_2900_, v___x_2898_);
v___x_2902_ = l_Lasm_JS_Web_Support_args(v___x_2901_);
v___x_2903_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2894_, v___x_2897_, v___x_2902_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_delete___boxed(lean_object* v_self_2904_, lean_object* v_key_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lasm_JS_Deno_Env_delete(v_self_2904_, v_key_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_has(lean_object* v_self_2909_, lean_object* v_key_2910_){
_start:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2912_ = ((lean_object*)(l_Lasm_JS_Deno_Env_has___closed__0));
v___x_2913_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2913_, 0, v_key_2910_);
v___x_2914_ = lean_unsigned_to_nat(1u);
v___x_2915_ = lean_mk_empty_array_with_capacity(v___x_2914_);
v___x_2916_ = lean_array_push(v___x_2915_, v___x_2913_);
v___x_2917_ = l_Lasm_JS_Web_Support_args(v___x_2916_);
v___x_2918_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2909_, v___x_2912_, v___x_2917_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_has___boxed(lean_object* v_self_2919_, lean_object* v_key_2920_, lean_object* v_a_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lasm_JS_Deno_Env_has(v_self_2919_, v_key_2920_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2925_, size_t v_i_2926_, lean_object* v_bs_2927_){
_start:
{
uint8_t v___x_2928_; 
v___x_2928_ = lean_usize_dec_lt(v_i_2926_, v_sz_2925_);
if (v___x_2928_ == 0)
{
lean_object* v___x_2929_; 
v___x_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2929_, 0, v_bs_2927_);
return v___x_2929_;
}
else
{
lean_object* v_v_2930_; lean_object* v_snd_2931_; 
v_v_2930_ = lean_array_uget(v_bs_2927_, v_i_2926_);
v_snd_2931_ = lean_ctor_get(v_v_2930_, 1);
if (lean_obj_tag(v_snd_2931_) == 4)
{
lean_object* v_fst_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2946_; 
lean_inc_ref(v_snd_2931_);
v_fst_2932_ = lean_ctor_get(v_v_2930_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_v_2930_);
if (v_isSharedCheck_2946_ == 0)
{
lean_object* v_unused_2947_; 
v_unused_2947_ = lean_ctor_get(v_v_2930_, 1);
lean_dec(v_unused_2947_);
v___x_2934_ = v_v_2930_;
v_isShared_2935_ = v_isSharedCheck_2946_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_fst_2932_);
lean_dec(v_v_2930_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2946_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v_s_2936_; lean_object* v___x_2937_; lean_object* v_bs_x27_2938_; lean_object* v___x_2940_; 
v_s_2936_ = lean_ctor_get(v_snd_2931_, 0);
lean_inc_ref(v_s_2936_);
lean_dec_ref_known(v_snd_2931_, 1);
v___x_2937_ = lean_unsigned_to_nat(0u);
v_bs_x27_2938_ = lean_array_uset(v_bs_2927_, v_i_2926_, v___x_2937_);
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 1, v_s_2936_);
v___x_2940_ = v___x_2934_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_fst_2932_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v_s_2936_);
v___x_2940_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
size_t v___x_2941_; size_t v___x_2942_; lean_object* v___x_2943_; 
v___x_2941_ = ((size_t)1ULL);
v___x_2942_ = lean_usize_add(v_i_2926_, v___x_2941_);
v___x_2943_ = lean_array_uset(v_bs_x27_2938_, v_i_2926_, v___x_2940_);
v_i_2926_ = v___x_2942_;
v_bs_2927_ = v___x_2943_;
goto _start;
}
}
}
else
{
lean_object* v_fst_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; 
lean_dec_ref(v_bs_2927_);
v_fst_2948_ = lean_ctor_get(v_v_2930_, 0);
lean_inc(v_fst_2948_);
lean_dec(v_v_2930_);
v___x_2949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2950_ = lean_string_append(v___x_2949_, v_fst_2948_);
lean_dec(v_fst_2948_);
v___x_2951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2952_ = lean_string_append(v___x_2950_, v___x_2951_);
v___x_2953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
return v___x_2953_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2954_, lean_object* v_i_2955_, lean_object* v_bs_2956_){
_start:
{
size_t v_sz_boxed_2957_; size_t v_i_boxed_2958_; lean_object* v_res_2959_; 
v_sz_boxed_2957_ = lean_unbox_usize(v_sz_2954_);
lean_dec(v_sz_2954_);
v_i_boxed_2958_ = lean_unbox_usize(v_i_2955_);
lean_dec(v_i_2955_);
v_res_2959_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2957_, v_i_boxed_2958_, v_bs_2956_);
return v_res_2959_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2969_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__8));
v___x_2970_ = lean_unsigned_to_nat(46u);
v___x_2971_ = lean_unsigned_to_nat(193u);
v___x_2972_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__7));
v___x_2973_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__6));
v___x_2974_ = l_mkPanicMessageWithDecl(v___x_2973_, v___x_2972_, v___x_2971_, v___x_2970_, v___x_2969_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(lean_object* v_context_2976_, lean_object* v_d_2977_){
_start:
{
lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2986_; lean_object* v_received_2987_; lean_object* v___y_3006_; lean_object* v_a_3009_; 
if (lean_obj_tag(v_d_2977_) == 8)
{
lean_object* v_fields_3033_; size_t v_sz_3034_; size_t v___x_3035_; lean_object* v___x_3036_; 
v_fields_3033_ = lean_ctor_get(v_d_2977_, 0);
v_sz_3034_ = lean_array_size(v_fields_3033_);
v___x_3035_ = ((size_t)0ULL);
lean_inc_ref(v_fields_3033_);
v___x_3036_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(v_sz_3034_, v___x_3035_, v_fields_3033_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
lean_inc(v_a_3037_);
lean_dec_ref_known(v___x_3036_, 1);
v_a_3009_ = v_a_3037_;
goto v___jp_3008_;
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref_known(v_d_2977_, 1);
v_a_3038_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3036_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3036_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
lean_ctor_set_tag(v___x_3040_, 0);
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
else
{
lean_object* v___x_3046_; 
v___x_3046_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v_a_3009_ = v___x_3046_;
goto v___jp_3008_;
}
v___jp_2979_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2982_ = lean_string_append(v___y_2980_, v___y_2981_);
lean_dec_ref(v___y_2981_);
v___x_2983_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
v___x_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
return v___x_2984_;
}
v___jp_2985_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; uint8_t v___x_2999_; 
v___x_2988_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_2989_ = lean_string_append(v___x_2988_, v_context_2976_);
v___x_2990_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_2991_ = lean_string_append(v___x_2989_, v___x_2990_);
v___x_2992_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__2));
v___x_2993_ = lean_string_append(v___x_2991_, v___x_2992_);
v___x_2994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_2995_ = lean_string_append(v___x_2993_, v___x_2994_);
v___x_2996_ = lean_string_append(v___x_2995_, v_received_2987_);
lean_dec_ref(v_received_2987_);
v___x_2997_ = lean_string_utf8_byte_size(v___y_2986_);
v___x_2998_ = lean_unsigned_to_nat(0u);
v___x_2999_ = lean_nat_dec_eq(v___x_2997_, v___x_2998_);
if (v___x_2999_ == 0)
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v___x_3000_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_3001_ = lean_string_append(v___x_3000_, v___y_2986_);
lean_dec_ref(v___y_2986_);
v___x_3002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_3003_ = lean_string_append(v___x_3001_, v___x_3002_);
v___y_2980_ = v___x_2996_;
v___y_2981_ = v___x_3003_;
goto v___jp_2979_;
}
else
{
lean_object* v___x_3004_; 
lean_dec_ref(v___y_2986_);
v___x_3004_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_2980_ = v___x_2996_;
v___y_2981_ = v___x_3004_;
goto v___jp_2979_;
}
}
v___jp_3005_:
{
lean_object* v___x_3007_; 
v___x_3007_ = l_Lasm_JS_Data_describe(v_d_2977_);
v___y_2986_ = v___y_3006_;
v_received_2987_ = v___x_3007_;
goto v___jp_2985_;
}
v___jp_3008_:
{
if (lean_obj_tag(v_d_2977_) == 9)
{
lean_object* v_value_3010_; lean_object* v_description_3011_; lean_object* v___x_3012_; uint8_t v___x_3013_; 
v_value_3010_ = lean_ctor_get(v_d_2977_, 0);
v_description_3011_ = lean_ctor_get(v_d_2977_, 1);
v___x_3012_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3013_ = lean_string_dec_eq(v_description_3011_, v___x_3012_);
if (v___x_3013_ == 0)
{
v___y_3006_ = v_a_3009_;
goto v___jp_3005_;
}
else
{
lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3030_; 
lean_inc(v_value_3010_);
v_isSharedCheck_3030_ = !lean_is_exclusive(v_d_2977_);
if (v_isSharedCheck_3030_ == 0)
{
lean_object* v_unused_3031_; lean_object* v_unused_3032_; 
v_unused_3031_ = lean_ctor_get(v_d_2977_, 1);
lean_dec(v_unused_3031_);
v_unused_3032_ = lean_ctor_get(v_d_2977_, 0);
lean_dec(v_unused_3032_);
v___x_3015_ = v_d_2977_;
v_isShared_3016_ = v_isSharedCheck_3030_;
goto v_resetjp_3014_;
}
else
{
lean_dec(v_d_2977_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3030_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
uint32_t v___x_3017_; uint64_t v___x_3018_; lean_object* v___x_3020_; 
v___x_3017_ = 206;
v___x_3018_ = 0ULL;
lean_inc(v_value_3010_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 1, v___x_3012_);
v___x_3020_ = v___x_3015_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_value_3010_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v___x_3012_);
v___x_3020_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
uint32_t v___x_3021_; lean_object* v___x_3022_; 
v___x_3021_ = lasm_js_value_handle(v_value_3010_);
lean_dec(v_value_3010_);
v___x_3022_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3017_, v___x_3018_, v___x_3020_, v___x_3021_);
lean_dec_ref(v___x_3020_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; uint8_t v___x_3024_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = lean_string_validate_utf8(v_a_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
lean_dec(v_a_3023_);
v___x_3025_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_3026_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3025_);
v___y_2986_ = v_a_3009_;
v_received_2987_ = v___x_3026_;
goto v___jp_2985_;
}
else
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_string_from_utf8_unchecked(v_a_3023_);
v___y_2986_ = v_a_3009_;
v_received_2987_ = v___x_3027_;
goto v___jp_2985_;
}
}
else
{
lean_object* v___x_3028_; 
lean_dec_ref_known(v___x_3022_, 1);
v___x_3028_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_2986_ = v_a_3009_;
v_received_2987_ = v___x_3028_;
goto v___jp_2985_;
}
}
}
}
}
else
{
v___y_3006_ = v_a_3009_;
goto v___jp_3005_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3047_, lean_object* v_d_3048_, lean_object* v_a_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(v_context_3047_, v_d_3048_);
lean_dec_ref(v_context_3047_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(lean_object* v_context_3051_, lean_object* v_bytes_3052_){
_start:
{
lean_object* v___x_3054_; 
v___x_3054_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3052_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v_a_3055_; lean_object* v___x_3056_; 
v_a_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_a_3055_);
lean_dec_ref_known(v___x_3054_, 1);
v___x_3056_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(v_context_3051_, v_a_3055_);
return v___x_3056_;
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
v_a_3057_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_3054_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_3054_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1___boxed(lean_object* v_context_3065_, lean_object* v_bytes_3066_, lean_object* v_a_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(v_context_3065_, v_bytes_3066_);
lean_dec_ref(v_bytes_3066_);
lean_dec_ref(v_context_3065_);
return v_res_3068_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3069_; uint64_t v___x_3070_; 
v___x_3069_ = 0;
v___x_3070_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3069_);
return v___x_3070_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(uint8_t v_await_3071_, uint64_t v_extra_3072_){
_start:
{
uint64_t v___x_3073_; uint64_t v___y_3075_; 
v___x_3073_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_3071_ == 0)
{
uint64_t v___x_3078_; 
v___x_3078_ = 0ULL;
v___y_3075_ = v___x_3078_;
goto v___jp_3074_;
}
else
{
uint64_t v___x_3079_; 
v___x_3079_ = 2ULL;
v___y_3075_ = v___x_3079_;
goto v___jp_3074_;
}
v___jp_3074_:
{
uint64_t v___x_3076_; uint64_t v___x_3077_; 
v___x_3076_ = lean_uint64_lor(v___x_3073_, v___y_3075_);
v___x_3077_ = lean_uint64_lor(v___x_3076_, v_extra_3072_);
return v___x_3077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___boxed(lean_object* v_await_3080_, lean_object* v_extra_3081_){
_start:
{
uint8_t v_await_boxed_3082_; uint64_t v_extra_boxed_3083_; uint64_t v_res_3084_; lean_object* v_r_3085_; 
v_await_boxed_3082_ = lean_unbox(v_await_3080_);
v_extra_boxed_3083_ = lean_unbox_uint64(v_extra_3081_);
lean_dec_ref(v_extra_3081_);
v_res_3084_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(v_await_boxed_3082_, v_extra_boxed_3083_);
v_r_3085_ = lean_box_uint64(v_res_3084_);
return v_r_3085_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3086_; uint8_t v___x_3087_; uint64_t v___x_3088_; 
v___x_3086_ = 8ULL;
v___x_3087_ = 0;
v___x_3088_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(v___x_3087_, v___x_3086_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(lean_object* v_o_3090_, lean_object* v_name_3091_, lean_object* v_args_3092_){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; uint64_t v___x_3097_; lean_object* v___x_3098_; 
v___x_3094_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3095_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3095_, 0, v_o_3090_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
lean_inc_ref(v_name_3091_);
v___x_3096_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3096_, 0, v_name_3091_);
v___x_3097_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0);
v___x_3098_ = l_Lasm_JS_Value_invokeRaw(v___x_3095_, v___x_3096_, v_args_3092_, v___x_3097_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v___x_3100_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__1));
v___x_3101_ = lean_string_append(v___x_3100_, v_name_3091_);
lean_dec_ref(v_name_3091_);
v___x_3102_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(v___x_3101_, v_a_3099_);
lean_dec(v_a_3099_);
lean_dec_ref(v___x_3101_);
return v___x_3102_;
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec_ref(v_name_3091_);
v_a_3103_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3098_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3098_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___boxed(lean_object* v_o_3111_, lean_object* v_name_3112_, lean_object* v_args_3113_, lean_object* v_a_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(v_o_3111_, v_name_3112_, v_args_3113_);
return v_res_3115_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_Env_toObject___closed__2(void){
_start:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3119_ = ((lean_object*)(l_Lasm_JS_Deno_Env_toObject___closed__1));
v___x_3120_ = l_Lasm_JS_Web_Support_args(v___x_3119_);
return v___x_3120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_toObject(lean_object* v_self_3121_){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3123_ = ((lean_object*)(l_Lasm_JS_Deno_Env_toObject___closed__0));
v___x_3124_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_3125_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(v_self_3121_, v___x_3123_, v___x_3124_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_toObject___boxed(lean_object* v_self_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Lasm_JS_Deno_Env_toObject(v_self_3126_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(lean_object* v_o_3132_, lean_object* v_a_3133_){
_start:
{
if (lean_obj_tag(v_a_3133_) == 0)
{
lean_object* v___x_3135_; lean_object* v___x_3136_; 
lean_dec(v_o_3132_);
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
return v___x_3136_;
}
else
{
lean_object* v_tail_3137_; 
v_tail_3137_ = lean_ctor_get(v_a_3133_, 1);
if (lean_obj_tag(v_tail_3137_) == 0)
{
lean_object* v_head_3138_; lean_object* v___x_3139_; 
v_head_3138_ = lean_ctor_get(v_a_3133_, 0);
lean_inc(v_head_3138_);
lean_dec_ref_known(v_a_3133_, 2);
v___x_3139_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_3132_, v_head_3138_);
return v___x_3139_;
}
else
{
lean_object* v_head_3140_; lean_object* v___x_3141_; 
lean_inc(v_tail_3137_);
v_head_3140_ = lean_ctor_get(v_a_3133_, 0);
lean_inc(v_head_3140_);
lean_dec_ref_known(v_a_3133_, 2);
v___x_3141_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3132_, v_head_3140_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
v_o_3132_ = v_a_3142_;
v_a_3133_ = v_tail_3137_;
goto _start;
}
else
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec(v_tail_3137_);
v_a_3144_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3141_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3141_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___boxed(lean_object* v_o_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_){
_start:
{
lean_object* v_res_3155_; 
v_res_3155_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(v_o_3152_, v_a_3153_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(lean_object* v_path_3156_){
_start:
{
lean_object* v___x_3158_; 
v___x_3158_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_object* v_a_3159_; lean_object* v___x_3160_; 
v_a_3159_ = lean_ctor_get(v___x_3158_, 0);
lean_inc(v_a_3159_);
lean_dec_ref_known(v___x_3158_, 1);
v___x_3160_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(v_a_3159_, v_path_3156_);
return v___x_3160_;
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec(v_path_3156_);
v_a_3161_ = lean_ctor_get(v___x_3158_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3158_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3158_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3158_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0___boxed(lean_object* v_path_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(v_path_3169_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_pid(){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3181_ = ((lean_object*)(l_Lasm_JS_Deno_pid___closed__3));
v___x_3182_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(v___x_3181_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_pid___boxed(lean_object* v_a_3183_){
_start:
{
lean_object* v_res_3184_; 
v_res_3184_ = l_Lasm_JS_Deno_pid();
return v_res_3184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ppid(){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = ((lean_object*)(l_Lasm_JS_Deno_ppid___closed__2));
v___x_3194_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(v___x_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ppid___boxed(lean_object* v_a_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Lasm_JS_Deno_ppid();
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(lean_object* v_o_3197_, lean_object* v_a_3198_){
_start:
{
if (lean_obj_tag(v_a_3198_) == 0)
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
lean_dec(v_o_3197_);
v___x_3200_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
return v___x_3201_;
}
else
{
lean_object* v_tail_3202_; 
v_tail_3202_ = lean_ctor_get(v_a_3198_, 1);
if (lean_obj_tag(v_tail_3202_) == 0)
{
lean_object* v_head_3203_; lean_object* v___x_3204_; 
v_head_3203_ = lean_ctor_get(v_a_3198_, 0);
lean_inc(v_head_3203_);
lean_dec_ref_known(v_a_3198_, 2);
v___x_3204_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_o_3197_, v_head_3203_);
return v___x_3204_;
}
else
{
lean_object* v_head_3205_; lean_object* v___x_3206_; 
lean_inc(v_tail_3202_);
v_head_3205_ = lean_ctor_get(v_a_3198_, 0);
lean_inc(v_head_3205_);
lean_dec_ref_known(v_a_3198_, 2);
v___x_3206_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3197_, v_head_3205_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v_o_3197_ = v_a_3207_;
v_a_3198_ = v_tail_3202_;
goto _start;
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec(v_tail_3202_);
v_a_3209_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3206_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3206_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0___boxed(lean_object* v_o_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(v_o_3217_, v_a_3218_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(lean_object* v_path_3221_){
_start:
{
lean_object* v___x_3223_; 
v___x_3223_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3225_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref_known(v___x_3223_, 1);
v___x_3225_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(v_a_3224_, v_path_3221_);
return v___x_3225_;
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec(v_path_3221_);
v_a_3226_ = lean_ctor_get(v___x_3223_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3223_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3223_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3223_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0___boxed(lean_object* v_path_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(v_path_3234_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_noColor(){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; 
v___x_3245_ = ((lean_object*)(l_Lasm_JS_Deno_noColor___closed__2));
v___x_3246_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(v___x_3245_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_noColor___boxed(lean_object* v_a_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l_Lasm_JS_Deno_noColor();
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(lean_object* v_o_3249_, lean_object* v_a_3250_){
_start:
{
if (lean_obj_tag(v_a_3250_) == 0)
{
lean_object* v___x_3252_; lean_object* v___x_3253_; 
lean_dec(v_o_3249_);
v___x_3252_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
return v___x_3253_;
}
else
{
lean_object* v_tail_3254_; 
v_tail_3254_ = lean_ctor_get(v_a_3250_, 1);
if (lean_obj_tag(v_tail_3254_) == 0)
{
lean_object* v_head_3255_; lean_object* v___x_3256_; 
v_head_3255_ = lean_ctor_get(v_a_3250_, 0);
lean_inc(v_head_3255_);
lean_dec_ref_known(v_a_3250_, 2);
v___x_3256_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_o_3249_, v_head_3255_);
return v___x_3256_;
}
else
{
lean_object* v_head_3257_; lean_object* v___x_3258_; 
lean_inc(v_tail_3254_);
v_head_3257_ = lean_ctor_get(v_a_3250_, 0);
lean_inc(v_head_3257_);
lean_dec_ref_known(v_a_3250_, 2);
v___x_3258_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3249_, v_head_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3259_);
lean_dec_ref_known(v___x_3258_, 1);
v_o_3249_ = v_a_3259_;
v_a_3250_ = v_tail_3254_;
goto _start;
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v_tail_3254_);
v_a_3261_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3258_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3258_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0___boxed(lean_object* v_o_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(v_o_3269_, v_a_3270_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(lean_object* v_path_3273_){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; lean_object* v___x_3277_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3276_);
lean_dec_ref_known(v___x_3275_, 1);
v___x_3277_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(v_a_3276_, v_path_3273_);
return v___x_3277_;
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v_path_3273_);
v_a_3278_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3275_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3275_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0___boxed(lean_object* v_path_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v_res_3288_; 
v_res_3288_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(v_path_3286_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exitCode(){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3297_ = ((lean_object*)(l_Lasm_JS_Deno_exitCode___closed__2));
v___x_3298_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(v___x_3297_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exitCode___boxed(lean_object* v_a_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lasm_JS_Deno_exitCode();
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_env(){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3308_ = ((lean_object*)(l_Lasm_JS_Deno_env___closed__1));
v___x_3309_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_3308_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3309_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3309_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
v_a_3318_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3309_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3309_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_env___boxed(lean_object* v_a_3326_){
_start:
{
lean_object* v_res_3327_; 
v_res_3327_ = l_Lasm_JS_Deno_env();
return v_res_3327_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4(void){
_start:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3332_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3333_ = lean_string_utf8_byte_size(v___x_3332_);
return v___x_3333_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5(void){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; uint8_t v___x_3336_; 
v___x_3334_ = lean_unsigned_to_nat(0u);
v___x_3335_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4);
v___x_3336_ = lean_nat_dec_eq(v___x_3335_, v___x_3334_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_3341_, lean_object* v_key_3342_){
_start:
{
if (lean_obj_tag(v_d_3341_) == 8)
{
lean_object* v___x_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3374_; 
v___x_3343_ = l_Lasm_JS_Data_field(v_d_3341_, v_key_3342_);
v_isSharedCheck_3374_ = !lean_is_exclusive(v_d_3341_);
if (v_isSharedCheck_3374_ == 0)
{
lean_object* v_unused_3375_; 
v_unused_3375_ = lean_ctor_get(v_d_3341_, 0);
lean_dec(v_unused_3375_);
v___x_3345_ = v_d_3341_;
v_isShared_3346_ = v_isSharedCheck_3374_;
goto v_resetjp_3344_;
}
else
{
lean_dec(v_d_3341_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3374_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
if (lean_obj_tag(v___x_3343_) == 4)
{
lean_object* v_s_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
lean_del_object(v___x_3345_);
v_s_3347_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3343_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_s_3347_);
lean_dec(v___x_3343_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
lean_ctor_set_tag(v___x_3349_, 1);
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_s_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
else
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; uint8_t v___x_3365_; 
v___x_3355_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3356_ = lean_string_append(v___x_3355_, v_key_3342_);
v___x_3357_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3358_ = lean_string_append(v___x_3356_, v___x_3357_);
v___x_3359_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_3360_ = lean_string_append(v___x_3358_, v___x_3359_);
v___x_3361_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3362_ = lean_string_append(v___x_3360_, v___x_3361_);
v___x_3363_ = l_Lasm_JS_Data_describe(v___x_3343_);
v___x_3364_ = lean_string_append(v___x_3362_, v___x_3363_);
lean_dec_ref(v___x_3363_);
v___x_3365_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_3365_ == 0)
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3369_; 
v___x_3366_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_3367_ = lean_string_append(v___x_3364_, v___x_3366_);
if (v_isShared_3346_ == 0)
{
lean_ctor_set_tag(v___x_3345_, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3367_);
v___x_3369_ = v___x_3345_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v___x_3367_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
else
{
lean_object* v___x_3372_; 
if (v_isShared_3346_ == 0)
{
lean_ctor_set_tag(v___x_3345_, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3364_);
v___x_3372_ = v___x_3345_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3364_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
}
else
{
lean_object* v___x_3376_; 
lean_dec(v_d_3341_);
v___x_3376_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
return v___x_3376_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_3377_, lean_object* v_key_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3377_, v_key_3378_);
lean_dec_ref(v_key_3378_);
return v_res_3379_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3380_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0));
v___x_3381_ = lean_string_utf8_byte_size(v___x_3380_);
return v___x_3381_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; uint8_t v___x_3384_; 
v___x_3382_ = lean_unsigned_to_nat(0u);
v___x_3383_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0);
v___x_3384_ = lean_nat_dec_eq(v___x_3383_, v___x_3382_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_d_3388_, lean_object* v_key_3389_){
_start:
{
if (lean_obj_tag(v_d_3388_) == 8)
{
lean_object* v___x_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3442_; 
v___x_3390_ = l_Lasm_JS_Data_field(v_d_3388_, v_key_3389_);
v_isSharedCheck_3442_ = !lean_is_exclusive(v_d_3388_);
if (v_isSharedCheck_3442_ == 0)
{
lean_object* v_unused_3443_; 
v_unused_3443_ = lean_ctor_get(v_d_3388_, 0);
lean_dec(v_unused_3443_);
v___x_3392_ = v_d_3388_;
v_isShared_3393_ = v_isSharedCheck_3442_;
goto v_resetjp_3391_;
}
else
{
lean_dec(v_d_3388_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3442_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
if (lean_obj_tag(v___x_3390_) == 4)
{
lean_object* v_s_3414_; lean_object* v___x_3415_; uint8_t v___x_3416_; 
v_s_3414_ = lean_ctor_get(v___x_3390_, 0);
lean_inc_ref(v_s_3414_);
v___x_3415_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0));
v___x_3416_ = lean_string_dec_eq(v_s_3414_, v___x_3415_);
if (v___x_3416_ == 0)
{
lean_object* v___x_3417_; uint8_t v___x_3418_; 
v___x_3417_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2));
v___x_3418_ = lean_string_dec_eq(v_s_3414_, v___x_3417_);
if (v___x_3418_ == 0)
{
lean_object* v___x_3419_; uint8_t v___x_3420_; 
v___x_3419_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4));
v___x_3420_ = lean_string_dec_eq(v_s_3414_, v___x_3419_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; uint8_t v___x_3422_; 
v___x_3421_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6));
v___x_3422_ = lean_string_dec_eq(v_s_3414_, v___x_3421_);
if (v___x_3422_ == 0)
{
lean_object* v___x_3423_; uint8_t v___x_3424_; 
v___x_3423_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8));
v___x_3424_ = lean_string_dec_eq(v_s_3414_, v___x_3423_);
if (v___x_3424_ == 0)
{
lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___x_3425_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10));
v___x_3426_ = lean_string_dec_eq(v_s_3414_, v___x_3425_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3427_; uint8_t v___x_3428_; 
v___x_3427_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12));
v___x_3428_ = lean_string_dec_eq(v_s_3414_, v___x_3427_);
if (v___x_3428_ == 0)
{
lean_object* v___x_3429_; uint8_t v___x_3430_; 
v___x_3429_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14));
v___x_3430_ = lean_string_dec_eq(v_s_3414_, v___x_3429_);
if (v___x_3430_ == 0)
{
lean_object* v___x_3431_; uint8_t v___x_3432_; 
v___x_3431_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16));
v___x_3432_ = lean_string_dec_eq(v_s_3414_, v___x_3431_);
lean_dec_ref(v_s_3414_);
if (v___x_3432_ == 0)
{
goto v___jp_3394_;
}
else
{
lean_object* v___x_3433_; 
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3433_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__1));
return v___x_3433_;
}
}
else
{
lean_object* v___x_3434_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3434_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__2));
return v___x_3434_;
}
}
else
{
lean_object* v___x_3435_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3435_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__3));
return v___x_3435_;
}
}
else
{
lean_object* v___x_3436_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3436_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__4));
return v___x_3436_;
}
}
else
{
lean_object* v___x_3437_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3437_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__5));
return v___x_3437_;
}
}
else
{
lean_object* v___x_3438_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3438_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__6));
return v___x_3438_;
}
}
else
{
lean_object* v___x_3439_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3439_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__7));
return v___x_3439_;
}
}
else
{
lean_object* v___x_3440_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3440_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__8));
return v___x_3440_;
}
}
else
{
lean_object* v___x_3441_; 
lean_dec_ref(v_s_3414_);
lean_dec_ref_known(v___x_3390_, 1);
lean_del_object(v___x_3392_);
v___x_3441_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__9));
return v___x_3441_;
}
}
else
{
goto v___jp_3394_;
}
v___jp_3394_:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v___x_3405_; 
v___x_3395_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3396_ = lean_string_append(v___x_3395_, v_key_3389_);
v___x_3397_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3398_ = lean_string_append(v___x_3396_, v___x_3397_);
v___x_3399_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___closed__1));
v___x_3400_ = lean_string_append(v___x_3398_, v___x_3399_);
v___x_3401_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3402_ = lean_string_append(v___x_3400_, v___x_3401_);
v___x_3403_ = l_Lasm_JS_Data_describe(v___x_3390_);
v___x_3404_ = lean_string_append(v___x_3402_, v___x_3403_);
lean_dec_ref(v___x_3403_);
v___x_3405_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1);
if (v___x_3405_ == 0)
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3409_; 
v___x_3406_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2));
v___x_3407_ = lean_string_append(v___x_3404_, v___x_3406_);
if (v_isShared_3393_ == 0)
{
lean_ctor_set_tag(v___x_3392_, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3407_);
v___x_3409_ = v___x_3392_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
else
{
lean_object* v___x_3412_; 
if (v_isShared_3393_ == 0)
{
lean_ctor_set_tag(v___x_3392_, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3404_);
v___x_3412_ = v___x_3392_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3404_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
}
else
{
lean_object* v___x_3444_; 
lean_dec(v_d_3388_);
v___x_3444_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__3));
return v___x_3444_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_d_3445_, lean_object* v_key_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(v_d_3445_, v_key_3446_);
lean_dec_ref(v_key_3446_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_3450_, lean_object* v_key_3451_){
_start:
{
if (lean_obj_tag(v_d_3450_) == 8)
{
lean_object* v___x_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3483_; 
v___x_3452_ = l_Lasm_JS_Data_field(v_d_3450_, v_key_3451_);
v_isSharedCheck_3483_ = !lean_is_exclusive(v_d_3450_);
if (v_isSharedCheck_3483_ == 0)
{
lean_object* v_unused_3484_; 
v_unused_3484_ = lean_ctor_get(v_d_3450_, 0);
lean_dec(v_unused_3484_);
v___x_3454_ = v_d_3450_;
v_isShared_3455_ = v_isSharedCheck_3483_;
goto v_resetjp_3453_;
}
else
{
lean_dec(v_d_3450_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3483_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
if (lean_obj_tag(v___x_3452_) == 4)
{
lean_object* v_s_3476_; lean_object* v___x_3477_; uint8_t v___x_3478_; 
v_s_3476_ = lean_ctor_get(v___x_3452_, 0);
lean_inc_ref(v_s_3476_);
v___x_3477_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0));
v___x_3478_ = lean_string_dec_eq(v_s_3476_, v___x_3477_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3479_; uint8_t v___x_3480_; 
v___x_3479_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2));
v___x_3480_ = lean_string_dec_eq(v_s_3476_, v___x_3479_);
lean_dec_ref(v_s_3476_);
if (v___x_3480_ == 0)
{
goto v___jp_3456_;
}
else
{
lean_object* v___x_3481_; 
lean_dec_ref_known(v___x_3452_, 1);
lean_del_object(v___x_3454_);
v___x_3481_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__1));
return v___x_3481_;
}
}
else
{
lean_object* v___x_3482_; 
lean_dec_ref(v_s_3476_);
lean_dec_ref_known(v___x_3452_, 1);
lean_del_object(v___x_3454_);
v___x_3482_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__2));
return v___x_3482_;
}
}
else
{
goto v___jp_3456_;
}
v___jp_3456_:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; uint8_t v___x_3467_; 
v___x_3457_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3458_ = lean_string_append(v___x_3457_, v_key_3451_);
v___x_3459_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3460_ = lean_string_append(v___x_3458_, v___x_3459_);
v___x_3461_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___closed__1));
v___x_3462_ = lean_string_append(v___x_3460_, v___x_3461_);
v___x_3463_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3464_ = lean_string_append(v___x_3462_, v___x_3463_);
v___x_3465_ = l_Lasm_JS_Data_describe(v___x_3452_);
v___x_3466_ = lean_string_append(v___x_3464_, v___x_3465_);
lean_dec_ref(v___x_3465_);
v___x_3467_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1);
if (v___x_3467_ == 0)
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3471_; 
v___x_3468_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2));
v___x_3469_ = lean_string_append(v___x_3466_, v___x_3468_);
if (v_isShared_3455_ == 0)
{
lean_ctor_set_tag(v___x_3454_, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3469_);
v___x_3471_ = v___x_3454_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
else
{
lean_object* v___x_3474_; 
if (v_isShared_3455_ == 0)
{
lean_ctor_set_tag(v___x_3454_, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3466_);
v___x_3474_ = v___x_3454_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v___x_3466_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
else
{
lean_object* v___x_3485_; 
lean_dec(v_d_3450_);
v___x_3485_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___closed__0));
return v___x_3485_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_3486_, lean_object* v_key_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(v_d_3486_, v_key_3487_);
lean_dec_ref(v_key_3487_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(lean_object* v_d_3492_, lean_object* v_key_3493_){
_start:
{
if (lean_obj_tag(v_d_3492_) == 8)
{
lean_object* v___x_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3522_; 
v___x_3494_ = l_Lasm_JS_Data_field(v_d_3492_, v_key_3493_);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_d_3492_);
if (v_isSharedCheck_3522_ == 0)
{
lean_object* v_unused_3523_; 
v_unused_3523_ = lean_ctor_get(v_d_3492_, 0);
lean_dec(v_unused_3523_);
v___x_3496_ = v_d_3492_;
v_isShared_3497_ = v_isSharedCheck_3522_;
goto v_resetjp_3495_;
}
else
{
lean_dec(v_d_3492_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3522_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
if (lean_obj_tag(v___x_3494_) == 2)
{
uint8_t v_b_3498_; lean_object* v___x_3499_; lean_object* v___x_3501_; 
v_b_3498_ = lean_ctor_get_uint8(v___x_3494_, 0);
lean_dec_ref_known(v___x_3494_, 0);
v___x_3499_ = lean_box(v_b_3498_);
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 1);
lean_ctor_set(v___x_3496_, 0, v___x_3499_);
v___x_3501_ = v___x_3496_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3499_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
else
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; uint8_t v___x_3513_; 
v___x_3503_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3504_ = lean_string_append(v___x_3503_, v_key_3493_);
v___x_3505_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3506_ = lean_string_append(v___x_3504_, v___x_3505_);
v___x_3507_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__0));
v___x_3508_ = lean_string_append(v___x_3506_, v___x_3507_);
v___x_3509_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3510_ = lean_string_append(v___x_3508_, v___x_3509_);
v___x_3511_ = l_Lasm_JS_Data_describe(v___x_3494_);
v___x_3512_ = lean_string_append(v___x_3510_, v___x_3511_);
lean_dec_ref(v___x_3511_);
v___x_3513_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_3513_ == 0)
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3517_; 
v___x_3514_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_3515_ = lean_string_append(v___x_3512_, v___x_3514_);
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3515_);
v___x_3517_ = v___x_3496_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
else
{
lean_object* v___x_3520_; 
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3512_);
v___x_3520_ = v___x_3496_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v___x_3512_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
}
}
else
{
lean_object* v___x_3524_; 
lean_dec(v_d_3492_);
v___x_3524_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__1));
return v___x_3524_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___boxed(lean_object* v_d_3525_, lean_object* v_key_3526_){
_start:
{
lean_object* v_res_3527_; 
v_res_3527_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3525_, v_key_3526_);
lean_dec_ref(v_key_3526_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_3528_, lean_object* v_d_3529_){
_start:
{
lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3538_; lean_object* v_received_3539_; lean_object* v___y_3558_; lean_object* v_a_3561_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3585_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0));
lean_inc(v_d_3529_);
v___x_3586_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3529_, v___x_3585_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
lean_inc(v_a_3587_);
lean_dec_ref_known(v___x_3586_, 1);
v_a_3561_ = v_a_3587_;
goto v___jp_3560_;
}
else
{
lean_object* v_a_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v_a_3588_ = lean_ctor_get(v___x_3586_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3586_, 1);
v___x_3589_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1));
lean_inc(v_d_3529_);
v___x_3590_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(v_d_3529_, v___x_3589_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v_a_3591_; 
lean_dec(v_a_3588_);
v_a_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_a_3591_);
lean_dec_ref_known(v___x_3590_, 1);
v_a_3561_ = v_a_3591_;
goto v___jp_3560_;
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v_a_3592_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3590_, 1);
v___x_3593_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2));
lean_inc(v_d_3529_);
v___x_3594_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(v_d_3529_, v___x_3593_);
if (lean_obj_tag(v___x_3594_) == 0)
{
lean_object* v_a_3595_; 
lean_dec(v_a_3592_);
lean_dec(v_a_3588_);
v_a_3595_ = lean_ctor_get(v___x_3594_, 0);
lean_inc(v_a_3595_);
lean_dec_ref_known(v___x_3594_, 1);
v_a_3561_ = v_a_3595_;
goto v___jp_3560_;
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v_a_3596_ = lean_ctor_get(v___x_3594_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3594_, 1);
v___x_3597_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3));
lean_inc(v_d_3529_);
v___x_3598_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3529_, v___x_3597_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; 
lean_dec(v_a_3596_);
lean_dec(v_a_3592_);
lean_dec(v_a_3588_);
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3598_, 1);
v_a_3561_ = v_a_3599_;
goto v___jp_3560_;
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v_a_3600_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3600_);
lean_dec_ref_known(v___x_3598_, 1);
v___x_3601_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4));
lean_inc(v_d_3529_);
v___x_3602_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3529_, v___x_3601_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; 
lean_dec(v_a_3600_);
lean_dec(v_a_3596_);
lean_dec(v_a_3592_);
lean_dec(v_a_3588_);
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v_a_3561_ = v_a_3603_;
goto v___jp_3560_;
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v_a_3604_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3602_, 1);
v___x_3605_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5));
lean_inc(v_d_3529_);
v___x_3606_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3529_, v___x_3605_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; 
lean_dec(v_a_3604_);
lean_dec(v_a_3600_);
lean_dec(v_a_3596_);
lean_dec(v_a_3592_);
lean_dec(v_a_3588_);
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3607_);
lean_dec_ref_known(v___x_3606_, 1);
v_a_3561_ = v_a_3607_;
goto v___jp_3560_;
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3619_; 
lean_dec(v_d_3529_);
v_a_3608_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3610_ = v___x_3606_;
v_isShared_3611_ = v_isSharedCheck_3619_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3606_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3619_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3612_; uint8_t v___x_3613_; uint8_t v___x_3614_; uint8_t v___x_3615_; lean_object* v___x_3617_; 
v___x_3612_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3612_, 0, v_a_3588_);
lean_ctor_set(v___x_3612_, 1, v_a_3604_);
lean_ctor_set(v___x_3612_, 2, v_a_3608_);
v___x_3613_ = lean_unbox(v_a_3592_);
lean_dec(v_a_3592_);
lean_ctor_set_uint8(v___x_3612_, sizeof(void*)*3, v___x_3613_);
v___x_3614_ = lean_unbox(v_a_3596_);
lean_dec(v_a_3596_);
lean_ctor_set_uint8(v___x_3612_, sizeof(void*)*3 + 1, v___x_3614_);
v___x_3615_ = lean_unbox(v_a_3600_);
lean_dec(v_a_3600_);
lean_ctor_set_uint8(v___x_3612_, sizeof(void*)*3 + 2, v___x_3615_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set_tag(v___x_3610_, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3612_);
v___x_3617_ = v___x_3610_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___x_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
}
}
}
}
v___jp_3531_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3534_ = lean_string_append(v___y_3532_, v___y_3533_);
lean_dec_ref(v___y_3533_);
v___x_3535_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3534_);
v___x_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
return v___x_3536_;
}
v___jp_3537_:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; 
v___x_3540_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_3541_ = lean_string_append(v___x_3540_, v_context_3528_);
v___x_3542_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_3543_ = lean_string_append(v___x_3541_, v___x_3542_);
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___closed__2));
v___x_3545_ = lean_string_append(v___x_3543_, v___x_3544_);
v___x_3546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_3547_ = lean_string_append(v___x_3545_, v___x_3546_);
v___x_3548_ = lean_string_append(v___x_3547_, v_received_3539_);
lean_dec_ref(v_received_3539_);
v___x_3549_ = lean_string_utf8_byte_size(v___y_3538_);
v___x_3550_ = lean_unsigned_to_nat(0u);
v___x_3551_ = lean_nat_dec_eq(v___x_3549_, v___x_3550_);
if (v___x_3551_ == 0)
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_3553_ = lean_string_append(v___x_3552_, v___y_3538_);
lean_dec_ref(v___y_3538_);
v___x_3554_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_3555_ = lean_string_append(v___x_3553_, v___x_3554_);
v___y_3532_ = v___x_3548_;
v___y_3533_ = v___x_3555_;
goto v___jp_3531_;
}
else
{
lean_object* v___x_3556_; 
lean_dec_ref(v___y_3538_);
v___x_3556_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_3532_ = v___x_3548_;
v___y_3533_ = v___x_3556_;
goto v___jp_3531_;
}
}
v___jp_3557_:
{
lean_object* v___x_3559_; 
v___x_3559_ = l_Lasm_JS_Data_describe(v_d_3529_);
v___y_3538_ = v___y_3558_;
v_received_3539_ = v___x_3559_;
goto v___jp_3537_;
}
v___jp_3560_:
{
if (lean_obj_tag(v_d_3529_) == 9)
{
lean_object* v_value_3562_; lean_object* v_description_3563_; lean_object* v___x_3564_; uint8_t v___x_3565_; 
v_value_3562_ = lean_ctor_get(v_d_3529_, 0);
v_description_3563_ = lean_ctor_get(v_d_3529_, 1);
v___x_3564_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3565_ = lean_string_dec_eq(v_description_3563_, v___x_3564_);
if (v___x_3565_ == 0)
{
v___y_3558_ = v_a_3561_;
goto v___jp_3557_;
}
else
{
lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3582_; 
lean_inc(v_value_3562_);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_d_3529_);
if (v_isSharedCheck_3582_ == 0)
{
lean_object* v_unused_3583_; lean_object* v_unused_3584_; 
v_unused_3583_ = lean_ctor_get(v_d_3529_, 1);
lean_dec(v_unused_3583_);
v_unused_3584_ = lean_ctor_get(v_d_3529_, 0);
lean_dec(v_unused_3584_);
v___x_3567_ = v_d_3529_;
v_isShared_3568_ = v_isSharedCheck_3582_;
goto v_resetjp_3566_;
}
else
{
lean_dec(v_d_3529_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3582_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
uint32_t v___x_3569_; uint64_t v___x_3570_; lean_object* v___x_3572_; 
v___x_3569_ = 206;
v___x_3570_ = 0ULL;
lean_inc(v_value_3562_);
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 1, v___x_3564_);
v___x_3572_ = v___x_3567_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_value_3562_);
lean_ctor_set(v_reuseFailAlloc_3581_, 1, v___x_3564_);
v___x_3572_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
uint32_t v___x_3573_; lean_object* v___x_3574_; 
v___x_3573_ = lasm_js_value_handle(v_value_3562_);
lean_dec(v_value_3562_);
v___x_3574_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3569_, v___x_3570_, v___x_3572_, v___x_3573_);
lean_dec_ref(v___x_3572_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; uint8_t v___x_3576_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref_known(v___x_3574_, 1);
v___x_3576_ = lean_string_validate_utf8(v_a_3575_);
if (v___x_3576_ == 0)
{
lean_object* v___x_3577_; lean_object* v___x_3578_; 
lean_dec(v_a_3575_);
v___x_3577_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_3578_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3577_);
v___y_3538_ = v_a_3561_;
v_received_3539_ = v___x_3578_;
goto v___jp_3537_;
}
else
{
lean_object* v___x_3579_; 
v___x_3579_ = lean_string_from_utf8_unchecked(v_a_3575_);
v___y_3538_ = v_a_3561_;
v_received_3539_ = v___x_3579_;
goto v___jp_3537_;
}
}
else
{
lean_object* v___x_3580_; 
lean_dec_ref_known(v___x_3574_, 1);
v___x_3580_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_3538_ = v_a_3561_;
v_received_3539_ = v___x_3580_;
goto v___jp_3537_;
}
}
}
}
}
else
{
v___y_3558_ = v_a_3561_;
goto v___jp_3557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_3620_, lean_object* v_d_3621_, lean_object* v_a_3622_){
_start:
{
lean_object* v_res_3623_; 
v_res_3623_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3620_, v_d_3621_);
lean_dec_ref(v_context_3620_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_3624_, lean_object* v_bytes_3625_){
_start:
{
lean_object* v___x_3627_; 
v___x_3627_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3625_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; lean_object* v___x_3629_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
lean_inc(v_a_3628_);
lean_dec_ref_known(v___x_3627_, 1);
v___x_3629_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3624_, v_a_3628_);
return v___x_3629_;
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
v_a_3630_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___x_3627_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3627_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3638_, lean_object* v_bytes_3639_, lean_object* v_a_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(v_context_3638_, v_bytes_3639_);
lean_dec_ref(v_bytes_3639_);
lean_dec_ref(v_context_3638_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(lean_object* v_o_3643_, lean_object* v_key_3644_){
_start:
{
lean_object* v_k_3646_; lean_object* v___x_3647_; 
v_k_3646_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3646_, 0, v_key_3644_);
v___x_3647_ = l_Lasm_JS_Wire_encodeIO(v_k_3646_);
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_object* v_a_3648_; uint32_t v___x_3649_; uint32_t v___x_3650_; uint64_t v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v_a_3648_ = lean_ctor_get(v___x_3647_, 0);
lean_inc(v_a_3648_);
lean_dec_ref_known(v___x_3647_, 1);
v___x_3649_ = 203;
v___x_3650_ = lasm_js_value_handle(v_o_3643_);
v___x_3651_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
v___x_3652_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3653_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3653_, 0, v_o_3643_);
lean_ctor_set(v___x_3653_, 1, v___x_3652_);
v___x_3654_ = lean_unsigned_to_nat(2u);
v___x_3655_ = lean_mk_empty_array_with_capacity(v___x_3654_);
lean_inc_ref(v_k_3646_);
v___x_3656_ = lean_array_push(v___x_3655_, v_k_3646_);
v___x_3657_ = lean_array_push(v___x_3656_, v___x_3653_);
v___x_3658_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3657_);
v___x_3659_ = lasm_js_call(v___x_3649_, v___x_3650_, v___x_3651_, v_a_3648_, v___x_3658_);
lean_dec_ref_known(v___x_3658_, 1);
lean_dec(v_a_3648_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3659_, 1);
v___x_3661_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0));
v___x_3662_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3646_);
v___x_3663_ = lean_string_append(v___x_3661_, v___x_3662_);
lean_dec_ref(v___x_3662_);
v___x_3664_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(v___x_3663_, v_a_3660_);
lean_dec(v_a_3660_);
lean_dec_ref(v___x_3663_);
return v___x_3664_;
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
lean_dec_ref_known(v_k_3646_, 1);
v_a_3665_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3659_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3659_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
else
{
lean_object* v_a_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3680_; 
lean_dec_ref_known(v_k_3646_, 1);
lean_dec(v_o_3643_);
v_a_3673_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3675_ = v___x_3647_;
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_a_3673_);
lean_dec(v___x_3647_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
if (v_isShared_3676_ == 0)
{
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3673_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___boxed(lean_object* v_o_3681_, lean_object* v_key_3682_, lean_object* v_a_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(v_o_3681_, v_key_3682_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(lean_object* v_o_3685_, lean_object* v_a_3686_){
_start:
{
if (lean_obj_tag(v_a_3686_) == 0)
{
lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_dec(v_o_3685_);
v___x_3688_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
return v___x_3689_;
}
else
{
lean_object* v_tail_3690_; 
v_tail_3690_ = lean_ctor_get(v_a_3686_, 1);
if (lean_obj_tag(v_tail_3690_) == 0)
{
lean_object* v_head_3691_; lean_object* v___x_3692_; 
v_head_3691_ = lean_ctor_get(v_a_3686_, 0);
lean_inc(v_head_3691_);
lean_dec_ref_known(v_a_3686_, 2);
v___x_3692_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(v_o_3685_, v_head_3691_);
return v___x_3692_;
}
else
{
lean_object* v_head_3693_; lean_object* v___x_3694_; 
lean_inc(v_tail_3690_);
v_head_3693_ = lean_ctor_get(v_a_3686_, 0);
lean_inc(v_head_3693_);
lean_dec_ref_known(v_a_3686_, 2);
v___x_3694_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3685_, v_head_3693_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v___x_3694_, 1);
v_o_3685_ = v_a_3695_;
v_a_3686_ = v_tail_3690_;
goto _start;
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3704_; 
lean_dec(v_tail_3690_);
v_a_3697_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3699_ = v___x_3694_;
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3694_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3702_; 
if (v_isShared_3700_ == 0)
{
v___x_3702_ = v___x_3699_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_a_3697_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0___boxed(lean_object* v_o_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(v_o_3705_, v_a_3706_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(lean_object* v_path_3709_){
_start:
{
lean_object* v___x_3711_; 
v___x_3711_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; lean_object* v___x_3713_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
lean_inc(v_a_3712_);
lean_dec_ref_known(v___x_3711_, 1);
v___x_3713_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(v_a_3712_, v_path_3709_);
return v___x_3713_;
}
else
{
lean_object* v_a_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3721_; 
lean_dec(v_path_3709_);
v_a_3714_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3716_ = v___x_3711_;
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_a_3714_);
lean_dec(v___x_3711_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3721_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3714_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0___boxed(lean_object* v_path_3722_, lean_object* v_a_3723_){
_start:
{
lean_object* v_res_3724_; 
v_res_3724_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(v_path_3722_);
return v_res_3724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_build(){
_start:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = ((lean_object*)(l_Lasm_JS_Deno_build___closed__2));
v___x_3734_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(v___x_3733_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_build___boxed(lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lasm_JS_Deno_build();
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_3737_, lean_object* v_d_3738_){
_start:
{
lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v___y_3747_; lean_object* v_received_3748_; lean_object* v___y_3767_; lean_object* v_a_3770_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3794_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0));
lean_inc(v_d_3738_);
v___x_3795_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3738_, v___x_3794_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3795_, 1);
v_a_3770_ = v_a_3796_;
goto v___jp_3769_;
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v_a_3797_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3797_);
lean_dec_ref_known(v___x_3795_, 1);
v___x_3798_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1));
lean_inc(v_d_3738_);
v___x_3799_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3738_, v___x_3798_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; 
lean_dec(v_a_3797_);
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3800_);
lean_dec_ref_known(v___x_3799_, 1);
v_a_3770_ = v_a_3800_;
goto v___jp_3769_;
}
else
{
lean_object* v_a_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v_a_3801_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3801_);
lean_dec_ref_known(v___x_3799_, 1);
v___x_3802_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2));
lean_inc(v_d_3738_);
v___x_3803_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3738_, v___x_3802_);
if (lean_obj_tag(v___x_3803_) == 0)
{
lean_object* v_a_3804_; 
lean_dec(v_a_3801_);
lean_dec(v_a_3797_);
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
lean_inc(v_a_3804_);
lean_dec_ref_known(v___x_3803_, 1);
v_a_3770_ = v_a_3804_;
goto v___jp_3769_;
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3813_; 
lean_dec(v_d_3738_);
v_a_3805_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3807_ = v___x_3803_;
v_isShared_3808_ = v_isSharedCheck_3813_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3803_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3813_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3809_; lean_object* v___x_3811_; 
v___x_3809_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3809_, 0, v_a_3797_);
lean_ctor_set(v___x_3809_, 1, v_a_3801_);
lean_ctor_set(v___x_3809_, 2, v_a_3805_);
if (v_isShared_3808_ == 0)
{
lean_ctor_set_tag(v___x_3807_, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3809_);
v___x_3811_ = v___x_3807_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3809_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
}
v___jp_3740_:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3743_ = lean_string_append(v___y_3741_, v___y_3742_);
lean_dec_ref(v___y_3742_);
v___x_3744_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3743_);
v___x_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
return v___x_3745_;
}
v___jp_3746_:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; uint8_t v___x_3760_; 
v___x_3749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_3750_ = lean_string_append(v___x_3749_, v_context_3737_);
v___x_3751_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_3752_ = lean_string_append(v___x_3750_, v___x_3751_);
v___x_3753_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___closed__1));
v___x_3754_ = lean_string_append(v___x_3752_, v___x_3753_);
v___x_3755_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_3756_ = lean_string_append(v___x_3754_, v___x_3755_);
v___x_3757_ = lean_string_append(v___x_3756_, v_received_3748_);
lean_dec_ref(v_received_3748_);
v___x_3758_ = lean_string_utf8_byte_size(v___y_3747_);
v___x_3759_ = lean_unsigned_to_nat(0u);
v___x_3760_ = lean_nat_dec_eq(v___x_3758_, v___x_3759_);
if (v___x_3760_ == 0)
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_3762_ = lean_string_append(v___x_3761_, v___y_3747_);
lean_dec_ref(v___y_3747_);
v___x_3763_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_3764_ = lean_string_append(v___x_3762_, v___x_3763_);
v___y_3741_ = v___x_3757_;
v___y_3742_ = v___x_3764_;
goto v___jp_3740_;
}
else
{
lean_object* v___x_3765_; 
lean_dec_ref(v___y_3747_);
v___x_3765_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_3741_ = v___x_3757_;
v___y_3742_ = v___x_3765_;
goto v___jp_3740_;
}
}
v___jp_3766_:
{
lean_object* v___x_3768_; 
v___x_3768_ = l_Lasm_JS_Data_describe(v_d_3738_);
v___y_3747_ = v___y_3767_;
v_received_3748_ = v___x_3768_;
goto v___jp_3746_;
}
v___jp_3769_:
{
if (lean_obj_tag(v_d_3738_) == 9)
{
lean_object* v_value_3771_; lean_object* v_description_3772_; lean_object* v___x_3773_; uint8_t v___x_3774_; 
v_value_3771_ = lean_ctor_get(v_d_3738_, 0);
v_description_3772_ = lean_ctor_get(v_d_3738_, 1);
v___x_3773_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3774_ = lean_string_dec_eq(v_description_3772_, v___x_3773_);
if (v___x_3774_ == 0)
{
v___y_3767_ = v_a_3770_;
goto v___jp_3766_;
}
else
{
lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3791_; 
lean_inc(v_value_3771_);
v_isSharedCheck_3791_ = !lean_is_exclusive(v_d_3738_);
if (v_isSharedCheck_3791_ == 0)
{
lean_object* v_unused_3792_; lean_object* v_unused_3793_; 
v_unused_3792_ = lean_ctor_get(v_d_3738_, 1);
lean_dec(v_unused_3792_);
v_unused_3793_ = lean_ctor_get(v_d_3738_, 0);
lean_dec(v_unused_3793_);
v___x_3776_ = v_d_3738_;
v_isShared_3777_ = v_isSharedCheck_3791_;
goto v_resetjp_3775_;
}
else
{
lean_dec(v_d_3738_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3791_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
uint32_t v___x_3778_; uint64_t v___x_3779_; lean_object* v___x_3781_; 
v___x_3778_ = 206;
v___x_3779_ = 0ULL;
lean_inc(v_value_3771_);
if (v_isShared_3777_ == 0)
{
lean_ctor_set(v___x_3776_, 1, v___x_3773_);
v___x_3781_ = v___x_3776_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_value_3771_);
lean_ctor_set(v_reuseFailAlloc_3790_, 1, v___x_3773_);
v___x_3781_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
uint32_t v___x_3782_; lean_object* v___x_3783_; 
v___x_3782_ = lasm_js_value_handle(v_value_3771_);
lean_dec(v_value_3771_);
v___x_3783_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3778_, v___x_3779_, v___x_3781_, v___x_3782_);
lean_dec_ref(v___x_3781_);
if (lean_obj_tag(v___x_3783_) == 0)
{
lean_object* v_a_3784_; uint8_t v___x_3785_; 
v_a_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3784_);
lean_dec_ref_known(v___x_3783_, 1);
v___x_3785_ = lean_string_validate_utf8(v_a_3784_);
if (v___x_3785_ == 0)
{
lean_object* v___x_3786_; lean_object* v___x_3787_; 
lean_dec(v_a_3784_);
v___x_3786_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_3787_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3786_);
v___y_3747_ = v_a_3770_;
v_received_3748_ = v___x_3787_;
goto v___jp_3746_;
}
else
{
lean_object* v___x_3788_; 
v___x_3788_ = lean_string_from_utf8_unchecked(v_a_3784_);
v___y_3747_ = v_a_3770_;
v_received_3748_ = v___x_3788_;
goto v___jp_3746_;
}
}
else
{
lean_object* v___x_3789_; 
lean_dec_ref_known(v___x_3783_, 1);
v___x_3789_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_3747_ = v_a_3770_;
v_received_3748_ = v___x_3789_;
goto v___jp_3746_;
}
}
}
}
}
else
{
v___y_3767_ = v_a_3770_;
goto v___jp_3766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_3814_, lean_object* v_d_3815_, lean_object* v_a_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3814_, v_d_3815_);
lean_dec_ref(v_context_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_3818_, lean_object* v_bytes_3819_){
_start:
{
lean_object* v___x_3821_; 
v___x_3821_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3819_);
if (lean_obj_tag(v___x_3821_) == 0)
{
lean_object* v_a_3822_; lean_object* v___x_3823_; 
v_a_3822_ = lean_ctor_get(v___x_3821_, 0);
lean_inc(v_a_3822_);
lean_dec_ref_known(v___x_3821_, 1);
v___x_3823_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3818_, v_a_3822_);
return v___x_3823_;
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3831_; 
v_a_3824_ = lean_ctor_get(v___x_3821_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3821_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3826_ = v___x_3821_;
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v___x_3821_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3829_; 
if (v_isShared_3827_ == 0)
{
v___x_3829_ = v___x_3826_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_a_3824_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
return v___x_3829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3832_, lean_object* v_bytes_3833_, lean_object* v_a_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(v_context_3832_, v_bytes_3833_);
lean_dec_ref(v_bytes_3833_);
lean_dec_ref(v_context_3832_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(lean_object* v_o_3836_, lean_object* v_key_3837_){
_start:
{
lean_object* v_k_3839_; lean_object* v___x_3840_; 
v_k_3839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3839_, 0, v_key_3837_);
v___x_3840_ = l_Lasm_JS_Wire_encodeIO(v_k_3839_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v_a_3841_; uint32_t v___x_3842_; uint32_t v___x_3843_; uint64_t v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v_a_3841_ = lean_ctor_get(v___x_3840_, 0);
lean_inc(v_a_3841_);
lean_dec_ref_known(v___x_3840_, 1);
v___x_3842_ = 203;
v___x_3843_ = lasm_js_value_handle(v_o_3836_);
v___x_3844_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
v___x_3845_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3846_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3846_, 0, v_o_3836_);
lean_ctor_set(v___x_3846_, 1, v___x_3845_);
v___x_3847_ = lean_unsigned_to_nat(2u);
v___x_3848_ = lean_mk_empty_array_with_capacity(v___x_3847_);
lean_inc_ref(v_k_3839_);
v___x_3849_ = lean_array_push(v___x_3848_, v_k_3839_);
v___x_3850_ = lean_array_push(v___x_3849_, v___x_3846_);
v___x_3851_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3850_);
v___x_3852_ = lasm_js_call(v___x_3842_, v___x_3843_, v___x_3844_, v_a_3841_, v___x_3851_);
lean_dec_ref_known(v___x_3851_, 1);
lean_dec(v_a_3841_);
if (lean_obj_tag(v___x_3852_) == 0)
{
lean_object* v_a_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; 
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc(v_a_3853_);
lean_dec_ref_known(v___x_3852_, 1);
v___x_3854_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0));
v___x_3855_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3839_);
v___x_3856_ = lean_string_append(v___x_3854_, v___x_3855_);
lean_dec_ref(v___x_3855_);
v___x_3857_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(v___x_3856_, v_a_3853_);
lean_dec(v_a_3853_);
lean_dec_ref(v___x_3856_);
return v___x_3857_;
}
else
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
lean_dec_ref_known(v_k_3839_, 1);
v_a_3858_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3852_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3852_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
lean_dec_ref_known(v_k_3839_, 1);
lean_dec(v_o_3836_);
v_a_3866_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3840_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3840_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1___boxed(lean_object* v_o_3874_, lean_object* v_key_3875_, lean_object* v_a_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(v_o_3874_, v_key_3875_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(lean_object* v_o_3878_, lean_object* v_a_3879_){
_start:
{
if (lean_obj_tag(v_a_3879_) == 0)
{
lean_object* v___x_3881_; lean_object* v___x_3882_; 
lean_dec(v_o_3878_);
v___x_3881_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
return v___x_3882_;
}
else
{
lean_object* v_tail_3883_; 
v_tail_3883_ = lean_ctor_get(v_a_3879_, 1);
if (lean_obj_tag(v_tail_3883_) == 0)
{
lean_object* v_head_3884_; lean_object* v___x_3885_; 
v_head_3884_ = lean_ctor_get(v_a_3879_, 0);
lean_inc(v_head_3884_);
lean_dec_ref_known(v_a_3879_, 2);
v___x_3885_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(v_o_3878_, v_head_3884_);
return v___x_3885_;
}
else
{
lean_object* v_head_3886_; lean_object* v___x_3887_; 
lean_inc(v_tail_3883_);
v_head_3886_ = lean_ctor_get(v_a_3879_, 0);
lean_inc(v_head_3886_);
lean_dec_ref_known(v_a_3879_, 2);
v___x_3887_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3878_, v_head_3886_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v_a_3888_; 
v_a_3888_ = lean_ctor_get(v___x_3887_, 0);
lean_inc(v_a_3888_);
lean_dec_ref_known(v___x_3887_, 1);
v_o_3878_ = v_a_3888_;
v_a_3879_ = v_tail_3883_;
goto _start;
}
else
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
lean_dec(v_tail_3883_);
v_a_3890_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v___x_3887_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3887_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0___boxed(lean_object* v_o_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(v_o_3898_, v_a_3899_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(lean_object* v_path_3902_){
_start:
{
lean_object* v___x_3904_; 
v___x_3904_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v___x_3906_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref_known(v___x_3904_, 1);
v___x_3906_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(v_a_3905_, v_path_3902_);
return v___x_3906_;
}
else
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3914_; 
lean_dec(v_path_3902_);
v_a_3907_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3909_ = v___x_3904_;
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v___x_3904_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3912_; 
if (v_isShared_3910_ == 0)
{
v___x_3912_ = v___x_3909_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_a_3907_);
v___x_3912_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
return v___x_3912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0___boxed(lean_object* v_path_3915_, lean_object* v_a_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(v_path_3915_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_version(){
_start:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; 
v___x_3926_ = ((lean_object*)(l_Lasm_JS_Deno_version___closed__2));
v___x_3927_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(v___x_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_version___boxed(lean_object* v_a_3928_){
_start:
{
lean_object* v_res_3929_; 
v_res_3929_ = l_Lasm_JS_Deno_version();
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(lean_object* v_o_3930_, lean_object* v_key_3931_){
_start:
{
lean_object* v_k_3933_; lean_object* v___x_3934_; 
v_k_3933_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3933_, 0, v_key_3931_);
v___x_3934_ = l_Lasm_JS_Wire_encodeIO(v_k_3933_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; uint32_t v___x_3936_; uint32_t v___x_3937_; uint64_t v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_a_3935_);
lean_dec_ref_known(v___x_3934_, 1);
v___x_3936_ = 203;
v___x_3937_ = lasm_js_value_handle(v_o_3930_);
v___x_3938_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
v___x_3939_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3940_, 0, v_o_3930_);
lean_ctor_set(v___x_3940_, 1, v___x_3939_);
v___x_3941_ = lean_unsigned_to_nat(2u);
v___x_3942_ = lean_mk_empty_array_with_capacity(v___x_3941_);
lean_inc_ref(v_k_3933_);
v___x_3943_ = lean_array_push(v___x_3942_, v_k_3933_);
v___x_3944_ = lean_array_push(v___x_3943_, v___x_3940_);
v___x_3945_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
v___x_3946_ = lasm_js_call(v___x_3936_, v___x_3937_, v___x_3938_, v_a_3935_, v___x_3945_);
lean_dec_ref_known(v___x_3945_, 1);
lean_dec(v_a_3935_);
if (lean_obj_tag(v___x_3946_) == 0)
{
lean_object* v_a_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v_a_3947_ = lean_ctor_get(v___x_3946_, 0);
lean_inc(v_a_3947_);
lean_dec_ref_known(v___x_3946_, 1);
v___x_3948_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0));
v___x_3949_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3933_);
v___x_3950_ = lean_string_append(v___x_3948_, v___x_3949_);
lean_dec_ref(v___x_3949_);
v___x_3951_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_3950_, v_a_3947_);
lean_dec(v_a_3947_);
lean_dec_ref(v___x_3950_);
return v___x_3951_;
}
else
{
lean_object* v_a_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3959_; 
lean_dec_ref_known(v_k_3933_, 1);
v_a_3952_ = lean_ctor_get(v___x_3946_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3946_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3954_ = v___x_3946_;
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_a_3952_);
lean_dec(v___x_3946_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3959_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3957_; 
if (v_isShared_3955_ == 0)
{
v___x_3957_ = v___x_3954_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_a_3952_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
}
else
{
lean_object* v_a_3960_; lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3967_; 
lean_dec_ref_known(v_k_3933_, 1);
lean_dec(v_o_3930_);
v_a_3960_ = lean_ctor_get(v___x_3934_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3962_ = v___x_3934_;
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
else
{
lean_inc(v_a_3960_);
lean_dec(v___x_3934_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3967_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_a_3960_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1___boxed(lean_object* v_o_3968_, lean_object* v_key_3969_, lean_object* v_a_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(v_o_3968_, v_key_3969_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(lean_object* v_o_3972_, lean_object* v_a_3973_){
_start:
{
if (lean_obj_tag(v_a_3973_) == 0)
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
lean_dec(v_o_3972_);
v___x_3975_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
else
{
lean_object* v_tail_3977_; 
v_tail_3977_ = lean_ctor_get(v_a_3973_, 1);
if (lean_obj_tag(v_tail_3977_) == 0)
{
lean_object* v_head_3978_; lean_object* v___x_3979_; 
v_head_3978_ = lean_ctor_get(v_a_3973_, 0);
lean_inc(v_head_3978_);
lean_dec_ref_known(v_a_3973_, 2);
v___x_3979_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(v_o_3972_, v_head_3978_);
return v___x_3979_;
}
else
{
lean_object* v_head_3980_; lean_object* v___x_3981_; 
lean_inc(v_tail_3977_);
v_head_3980_ = lean_ctor_get(v_a_3973_, 0);
lean_inc(v_head_3980_);
lean_dec_ref_known(v_a_3973_, 2);
v___x_3981_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3972_, v_head_3980_);
if (lean_obj_tag(v___x_3981_) == 0)
{
lean_object* v_a_3982_; 
v_a_3982_ = lean_ctor_get(v___x_3981_, 0);
lean_inc(v_a_3982_);
lean_dec_ref_known(v___x_3981_, 1);
v_o_3972_ = v_a_3982_;
v_a_3973_ = v_tail_3977_;
goto _start;
}
else
{
lean_object* v_a_3984_; lean_object* v___x_3986_; uint8_t v_isShared_3987_; uint8_t v_isSharedCheck_3991_; 
lean_dec(v_tail_3977_);
v_a_3984_ = lean_ctor_get(v___x_3981_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v___x_3981_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3986_ = v___x_3981_;
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
else
{
lean_inc(v_a_3984_);
lean_dec(v___x_3981_);
v___x_3986_ = lean_box(0);
v_isShared_3987_ = v_isSharedCheck_3991_;
goto v_resetjp_3985_;
}
v_resetjp_3985_:
{
lean_object* v___x_3989_; 
if (v_isShared_3987_ == 0)
{
v___x_3989_ = v___x_3986_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v_a_3984_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
return v___x_3989_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0___boxed(lean_object* v_o_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_){
_start:
{
lean_object* v_res_3995_; 
v_res_3995_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(v_o_3992_, v_a_3993_);
return v_res_3995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(lean_object* v_path_3996_){
_start:
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_a_3999_; lean_object* v___x_4000_; 
v_a_3999_ = lean_ctor_get(v___x_3998_, 0);
lean_inc(v_a_3999_);
lean_dec_ref_known(v___x_3998_, 1);
v___x_4000_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(v_a_3999_, v_path_3996_);
return v___x_4000_;
}
else
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4008_; 
lean_dec(v_path_3996_);
v_a_4001_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_4003_ = v___x_3998_;
v_isShared_4004_ = v_isSharedCheck_4008_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_3998_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4008_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4006_; 
if (v_isShared_4004_ == 0)
{
v___x_4006_ = v___x_4003_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v_a_4001_);
v___x_4006_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
return v___x_4006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0___boxed(lean_object* v_path_4009_, lean_object* v_a_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(v_path_4009_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_args(){
_start:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4020_ = ((lean_object*)(l_Lasm_JS_Deno_args___closed__2));
v___x_4021_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(v___x_4020_);
return v___x_4021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_args___boxed(lean_object* v_a_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = l_Lasm_JS_Deno_args();
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(lean_object* v_o_4024_, lean_object* v_a_4025_){
_start:
{
if (lean_obj_tag(v_a_4025_) == 0)
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
lean_dec(v_o_4024_);
v___x_4027_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_4028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4027_);
return v___x_4028_;
}
else
{
lean_object* v_tail_4029_; 
v_tail_4029_ = lean_ctor_get(v_a_4025_, 1);
if (lean_obj_tag(v_tail_4029_) == 0)
{
lean_object* v_head_4030_; lean_object* v___x_4031_; 
v_head_4030_ = lean_ctor_get(v_a_4025_, 0);
lean_inc(v_head_4030_);
lean_dec_ref_known(v_a_4025_, 2);
v___x_4031_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_o_4024_, v_head_4030_);
return v___x_4031_;
}
else
{
lean_object* v_head_4032_; lean_object* v___x_4033_; 
lean_inc(v_tail_4029_);
v_head_4032_ = lean_ctor_get(v_a_4025_, 0);
lean_inc(v_head_4032_);
lean_dec_ref_known(v_a_4025_, 2);
v___x_4033_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_4024_, v_head_4032_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
lean_inc(v_a_4034_);
lean_dec_ref_known(v___x_4033_, 1);
v_o_4024_ = v_a_4034_;
v_a_4025_ = v_tail_4029_;
goto _start;
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec(v_tail_4029_);
v_a_4036_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_4033_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_4033_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0___boxed(lean_object* v_o_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(v_o_4044_, v_a_4045_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(lean_object* v_path_4048_){
_start:
{
lean_object* v___x_4050_; 
v___x_4050_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4050_) == 0)
{
lean_object* v_a_4051_; lean_object* v___x_4052_; 
v_a_4051_ = lean_ctor_get(v___x_4050_, 0);
lean_inc(v_a_4051_);
lean_dec_ref_known(v___x_4050_, 1);
v___x_4052_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(v_a_4051_, v_path_4048_);
return v___x_4052_;
}
else
{
lean_object* v_a_4053_; lean_object* v___x_4055_; uint8_t v_isShared_4056_; uint8_t v_isSharedCheck_4060_; 
lean_dec(v_path_4048_);
v_a_4053_ = lean_ctor_get(v___x_4050_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4050_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4055_ = v___x_4050_;
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
else
{
lean_inc(v_a_4053_);
lean_dec(v___x_4050_);
v___x_4055_ = lean_box(0);
v_isShared_4056_ = v_isSharedCheck_4060_;
goto v_resetjp_4054_;
}
v_resetjp_4054_:
{
lean_object* v___x_4058_; 
if (v_isShared_4056_ == 0)
{
v___x_4058_ = v___x_4055_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v_a_4053_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0___boxed(lean_object* v_path_4061_, lean_object* v_a_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(v_path_4061_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mainModule(){
_start:
{
lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4072_ = ((lean_object*)(l_Lasm_JS_Deno_mainModule___closed__2));
v___x_4073_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(v___x_4072_);
return v___x_4073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mainModule___boxed(lean_object* v_a_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l_Lasm_JS_Deno_mainModule();
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(lean_object* v_d_4079_, lean_object* v_key_4080_){
_start:
{
if (lean_obj_tag(v_d_4079_) == 8)
{
lean_object* v___x_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4109_; 
v___x_4081_ = l_Lasm_JS_Data_field(v_d_4079_, v_key_4080_);
v_isSharedCheck_4109_ = !lean_is_exclusive(v_d_4079_);
if (v_isSharedCheck_4109_ == 0)
{
lean_object* v_unused_4110_; 
v_unused_4110_ = lean_ctor_get(v_d_4079_, 0);
lean_dec(v_unused_4110_);
v___x_4083_ = v_d_4079_;
v_isShared_4084_ = v_isSharedCheck_4109_;
goto v_resetjp_4082_;
}
else
{
lean_dec(v_d_4079_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4109_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
if (lean_obj_tag(v___x_4081_) == 3)
{
double v_n_4085_; lean_object* v___x_4086_; lean_object* v___x_4088_; 
v_n_4085_ = lean_ctor_get_float(v___x_4081_, 0);
lean_dec_ref_known(v___x_4081_, 0);
v___x_4086_ = lean_box_float(v_n_4085_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set_tag(v___x_4083_, 1);
lean_ctor_set(v___x_4083_, 0, v___x_4086_);
v___x_4088_ = v___x_4083_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v___x_4086_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
return v___x_4088_;
}
}
else
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; uint8_t v___x_4100_; 
v___x_4090_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_4091_ = lean_string_append(v___x_4090_, v_key_4080_);
v___x_4092_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_4093_ = lean_string_append(v___x_4091_, v___x_4092_);
v___x_4094_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__0));
v___x_4095_ = lean_string_append(v___x_4093_, v___x_4094_);
v___x_4096_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_4097_ = lean_string_append(v___x_4095_, v___x_4096_);
v___x_4098_ = l_Lasm_JS_Data_describe(v___x_4081_);
v___x_4099_ = lean_string_append(v___x_4097_, v___x_4098_);
lean_dec_ref(v___x_4098_);
v___x_4100_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4104_; 
v___x_4101_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_4102_ = lean_string_append(v___x_4099_, v___x_4101_);
if (v_isShared_4084_ == 0)
{
lean_ctor_set_tag(v___x_4083_, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4102_);
v___x_4104_ = v___x_4083_;
goto v_reusejp_4103_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v___x_4102_);
v___x_4104_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4103_;
}
v_reusejp_4103_:
{
return v___x_4104_;
}
}
else
{
lean_object* v___x_4107_; 
if (v_isShared_4084_ == 0)
{
lean_ctor_set_tag(v___x_4083_, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4099_);
v___x_4107_ = v___x_4083_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v___x_4099_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
}
}
else
{
lean_object* v___x_4111_; 
lean_dec(v_d_4079_);
v___x_4111_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__1));
return v___x_4111_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___boxed(lean_object* v_d_4112_, lean_object* v_key_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4112_, v_key_4113_);
lean_dec_ref(v_key_4113_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(lean_object* v_context_4115_, lean_object* v_d_4116_){
_start:
{
lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4125_; lean_object* v_received_4126_; lean_object* v___y_4145_; lean_object* v_a_4148_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4172_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__0));
lean_inc(v_d_4116_);
v___x_4173_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4116_, v___x_4172_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4174_);
lean_dec_ref_known(v___x_4173_, 1);
v_a_4148_ = v_a_4174_;
goto v___jp_4147_;
}
else
{
lean_object* v_a_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v_a_4175_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4175_);
lean_dec_ref_known(v___x_4173_, 1);
v___x_4176_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__1));
lean_inc(v_d_4116_);
v___x_4177_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4116_, v___x_4176_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v_a_4178_; 
lean_dec(v_a_4175_);
v_a_4178_ = lean_ctor_get(v___x_4177_, 0);
lean_inc(v_a_4178_);
lean_dec_ref_known(v___x_4177_, 1);
v_a_4148_ = v_a_4178_;
goto v___jp_4147_;
}
else
{
lean_object* v_a_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; 
v_a_4179_ = lean_ctor_get(v___x_4177_, 0);
lean_inc(v_a_4179_);
lean_dec_ref_known(v___x_4177_, 1);
v___x_4180_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__2));
lean_inc(v_d_4116_);
v___x_4181_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4116_, v___x_4180_);
if (lean_obj_tag(v___x_4181_) == 0)
{
lean_object* v_a_4182_; 
lean_dec(v_a_4179_);
lean_dec(v_a_4175_);
v_a_4182_ = lean_ctor_get(v___x_4181_, 0);
lean_inc(v_a_4182_);
lean_dec_ref_known(v___x_4181_, 1);
v_a_4148_ = v_a_4182_;
goto v___jp_4147_;
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v_a_4183_ = lean_ctor_get(v___x_4181_, 0);
lean_inc(v_a_4183_);
lean_dec_ref_known(v___x_4181_, 1);
v___x_4184_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__3));
lean_inc(v_d_4116_);
v___x_4185_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4116_, v___x_4184_);
if (lean_obj_tag(v___x_4185_) == 0)
{
lean_object* v_a_4186_; 
lean_dec(v_a_4183_);
lean_dec(v_a_4179_);
lean_dec(v_a_4175_);
v_a_4186_ = lean_ctor_get(v___x_4185_, 0);
lean_inc(v_a_4186_);
lean_dec_ref_known(v___x_4185_, 1);
v_a_4148_ = v_a_4186_;
goto v___jp_4147_;
}
else
{
lean_object* v_a_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4199_; 
lean_dec(v_d_4116_);
v_a_4187_ = lean_ctor_get(v___x_4185_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v___x_4185_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4189_ = v___x_4185_;
v_isShared_4190_ = v_isSharedCheck_4199_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_a_4187_);
lean_dec(v___x_4185_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4199_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4191_; double v___x_4192_; double v___x_4193_; double v___x_4194_; double v___x_4195_; lean_object* v___x_4197_; 
v___x_4191_ = lean_alloc_ctor(0, 0, 32);
v___x_4192_ = lean_unbox_float(v_a_4175_);
lean_dec(v_a_4175_);
lean_ctor_set_float(v___x_4191_, 0, v___x_4192_);
v___x_4193_ = lean_unbox_float(v_a_4179_);
lean_dec(v_a_4179_);
lean_ctor_set_float(v___x_4191_, 8, v___x_4193_);
v___x_4194_ = lean_unbox_float(v_a_4183_);
lean_dec(v_a_4183_);
lean_ctor_set_float(v___x_4191_, 16, v___x_4194_);
v___x_4195_ = lean_unbox_float(v_a_4187_);
lean_dec(v_a_4187_);
lean_ctor_set_float(v___x_4191_, 24, v___x_4195_);
if (v_isShared_4190_ == 0)
{
lean_ctor_set_tag(v___x_4189_, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4191_);
v___x_4197_ = v___x_4189_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v___x_4191_);
v___x_4197_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
return v___x_4197_;
}
}
}
}
}
}
v___jp_4118_:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4121_ = lean_string_append(v___y_4119_, v___y_4120_);
lean_dec_ref(v___y_4120_);
v___x_4122_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4121_);
v___x_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4122_);
return v___x_4123_;
}
v___jp_4124_:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; uint8_t v___x_4138_; 
v___x_4127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4128_ = lean_string_append(v___x_4127_, v_context_4115_);
v___x_4129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_4130_ = lean_string_append(v___x_4128_, v___x_4129_);
v___x_4131_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__1));
v___x_4132_ = lean_string_append(v___x_4130_, v___x_4131_);
v___x_4133_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_4134_ = lean_string_append(v___x_4132_, v___x_4133_);
v___x_4135_ = lean_string_append(v___x_4134_, v_received_4126_);
lean_dec_ref(v_received_4126_);
v___x_4136_ = lean_string_utf8_byte_size(v___y_4125_);
v___x_4137_ = lean_unsigned_to_nat(0u);
v___x_4138_ = lean_nat_dec_eq(v___x_4136_, v___x_4137_);
if (v___x_4138_ == 0)
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; 
v___x_4139_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_4140_ = lean_string_append(v___x_4139_, v___y_4125_);
lean_dec_ref(v___y_4125_);
v___x_4141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_4142_ = lean_string_append(v___x_4140_, v___x_4141_);
v___y_4119_ = v___x_4135_;
v___y_4120_ = v___x_4142_;
goto v___jp_4118_;
}
else
{
lean_object* v___x_4143_; 
lean_dec_ref(v___y_4125_);
v___x_4143_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_4119_ = v___x_4135_;
v___y_4120_ = v___x_4143_;
goto v___jp_4118_;
}
}
v___jp_4144_:
{
lean_object* v___x_4146_; 
v___x_4146_ = l_Lasm_JS_Data_describe(v_d_4116_);
v___y_4125_ = v___y_4145_;
v_received_4126_ = v___x_4146_;
goto v___jp_4124_;
}
v___jp_4147_:
{
if (lean_obj_tag(v_d_4116_) == 9)
{
lean_object* v_value_4149_; lean_object* v_description_4150_; lean_object* v___x_4151_; uint8_t v___x_4152_; 
v_value_4149_ = lean_ctor_get(v_d_4116_, 0);
v_description_4150_ = lean_ctor_get(v_d_4116_, 1);
v___x_4151_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4152_ = lean_string_dec_eq(v_description_4150_, v___x_4151_);
if (v___x_4152_ == 0)
{
v___y_4145_ = v_a_4148_;
goto v___jp_4144_;
}
else
{
lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4169_; 
lean_inc(v_value_4149_);
v_isSharedCheck_4169_ = !lean_is_exclusive(v_d_4116_);
if (v_isSharedCheck_4169_ == 0)
{
lean_object* v_unused_4170_; lean_object* v_unused_4171_; 
v_unused_4170_ = lean_ctor_get(v_d_4116_, 1);
lean_dec(v_unused_4170_);
v_unused_4171_ = lean_ctor_get(v_d_4116_, 0);
lean_dec(v_unused_4171_);
v___x_4154_ = v_d_4116_;
v_isShared_4155_ = v_isSharedCheck_4169_;
goto v_resetjp_4153_;
}
else
{
lean_dec(v_d_4116_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4169_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
uint32_t v___x_4156_; uint64_t v___x_4157_; lean_object* v___x_4159_; 
v___x_4156_ = 206;
v___x_4157_ = 0ULL;
lean_inc(v_value_4149_);
if (v_isShared_4155_ == 0)
{
lean_ctor_set(v___x_4154_, 1, v___x_4151_);
v___x_4159_ = v___x_4154_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_value_4149_);
lean_ctor_set(v_reuseFailAlloc_4168_, 1, v___x_4151_);
v___x_4159_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
uint32_t v___x_4160_; lean_object* v___x_4161_; 
v___x_4160_ = lasm_js_value_handle(v_value_4149_);
lean_dec(v_value_4149_);
v___x_4161_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4156_, v___x_4157_, v___x_4159_, v___x_4160_);
lean_dec_ref(v___x_4159_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; uint8_t v___x_4163_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_a_4162_);
lean_dec_ref_known(v___x_4161_, 1);
v___x_4163_ = lean_string_validate_utf8(v_a_4162_);
if (v___x_4163_ == 0)
{
lean_object* v___x_4164_; lean_object* v___x_4165_; 
lean_dec(v_a_4162_);
v___x_4164_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_4165_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4164_);
v___y_4125_ = v_a_4148_;
v_received_4126_ = v___x_4165_;
goto v___jp_4124_;
}
else
{
lean_object* v___x_4166_; 
v___x_4166_ = lean_string_from_utf8_unchecked(v_a_4162_);
v___y_4125_ = v_a_4148_;
v_received_4126_ = v___x_4166_;
goto v___jp_4124_;
}
}
else
{
lean_object* v___x_4167_; 
lean_dec_ref_known(v___x_4161_, 1);
v___x_4167_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_4125_ = v_a_4148_;
v_received_4126_ = v___x_4167_;
goto v___jp_4124_;
}
}
}
}
}
else
{
v___y_4145_ = v_a_4148_;
goto v___jp_4144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0___boxed(lean_object* v_context_4200_, lean_object* v_d_4201_, lean_object* v_a_4202_){
_start:
{
lean_object* v_res_4203_; 
v_res_4203_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(v_context_4200_, v_d_4201_);
lean_dec_ref(v_context_4200_);
return v_res_4203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(lean_object* v_b_4204_, lean_object* v_args_4205_, uint8_t v_await_4206_){
_start:
{
uint64_t v___y_4209_; uint64_t v___y_4210_; uint64_t v___x_4253_; uint64_t v___y_4255_; 
v___x_4253_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4206_ == 0)
{
uint64_t v___x_4260_; 
v___x_4260_ = 0ULL;
v___y_4255_ = v___x_4260_;
goto v___jp_4254_;
}
else
{
uint64_t v___x_4261_; 
v___x_4261_ = 2ULL;
v___y_4255_ = v___x_4261_;
goto v___jp_4254_;
}
v___jp_4208_:
{
uint64_t v_flags_4211_; uint32_t v___x_4212_; lean_object* v___x_4213_; uint32_t v___x_4214_; lean_object* v___x_4215_; 
v_flags_4211_ = lean_uint64_lor(v___y_4209_, v___y_4210_);
v___x_4212_ = 214;
v___x_4213_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4204_, v_args_4205_);
v___x_4214_ = 0;
v___x_4215_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4212_, v_flags_4211_, v___x_4213_, v___x_4214_);
lean_dec(v___x_4213_);
if (lean_obj_tag(v___x_4215_) == 0)
{
if (lean_obj_tag(v___x_4215_) == 0)
{
lean_object* v_a_4216_; lean_object* v___x_4217_; 
v_a_4216_ = lean_ctor_get(v___x_4215_, 0);
lean_inc(v_a_4216_);
lean_dec_ref_known(v___x_4215_, 1);
v___x_4217_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4216_);
lean_dec(v_a_4216_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4218_);
lean_dec_ref_known(v___x_4217_, 1);
v___x_4219_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4204_);
v___x_4220_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(v___x_4219_, v_a_4218_);
lean_dec_ref(v___x_4219_);
return v___x_4220_;
}
else
{
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4228_; 
v_a_4221_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4223_ = v___x_4217_;
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4217_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4226_; 
if (v_isShared_4224_ == 0)
{
v___x_4226_ = v___x_4223_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_a_4221_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
else
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
v_a_4229_ = lean_ctor_get(v___x_4215_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4215_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4231_ = v___x_4215_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___x_4215_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
lean_ctor_set_tag(v___x_4231_, 1);
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4229_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4252_; 
v_a_4237_ = lean_ctor_get(v___x_4215_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v___x_4215_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4239_ = v___x_4215_;
v_isShared_4240_ = v_isSharedCheck_4252_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4215_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4252_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4250_; 
v___x_4241_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4242_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4204_);
v___x_4243_ = lean_string_append(v___x_4241_, v___x_4242_);
lean_dec_ref(v___x_4242_);
v___x_4244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4245_ = lean_string_append(v___x_4243_, v___x_4244_);
v___x_4246_ = lean_io_error_to_string(v_a_4237_);
v___x_4247_ = lean_string_append(v___x_4245_, v___x_4246_);
lean_dec_ref(v___x_4246_);
v___x_4248_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
if (v_isShared_4240_ == 0)
{
lean_ctor_set(v___x_4239_, 0, v___x_4248_);
v___x_4250_ = v___x_4239_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v___x_4248_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
v___jp_4254_:
{
uint8_t v_construct_4256_; uint64_t v___x_4257_; 
v_construct_4256_ = lean_ctor_get_uint8(v_b_4204_, sizeof(void*)*4);
v___x_4257_ = lean_uint64_lor(v___x_4253_, v___y_4255_);
if (v_construct_4256_ == 0)
{
uint64_t v___x_4258_; 
v___x_4258_ = 0ULL;
v___y_4209_ = v___x_4257_;
v___y_4210_ = v___x_4258_;
goto v___jp_4208_;
}
else
{
uint64_t v___x_4259_; 
v___x_4259_ = 4ULL;
v___y_4209_ = v___x_4257_;
v___y_4210_ = v___x_4259_;
goto v___jp_4208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0___boxed(lean_object* v_b_4262_, lean_object* v_args_4263_, lean_object* v_await_4264_, lean_object* v_a_4265_){
_start:
{
uint8_t v_await_boxed_4266_; lean_object* v_res_4267_; 
v_await_boxed_4266_ = lean_unbox(v_await_4264_);
v_res_4267_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(v_b_4262_, v_args_4263_, v_await_boxed_4266_);
lean_dec_ref(v_b_4262_);
return v_res_4267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_memoryUsage(){
_start:
{
uint8_t v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4278_ = 0;
v___x_4279_ = ((lean_object*)(l_Lasm_JS_Deno_memoryUsage___closed__3));
v___x_4280_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(v___x_4279_, v___x_4280_, v___x_4278_);
return v___x_4281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_memoryUsage___boxed(lean_object* v_a_4282_){
_start:
{
lean_object* v_res_4283_; 
v_res_4283_ = l_Lasm_JS_Deno_memoryUsage();
return v_res_4283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_hostname(){
_start:
{
uint8_t v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4293_ = 0;
v___x_4294_ = ((lean_object*)(l_Lasm_JS_Deno_hostname___closed__2));
v___x_4295_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4296_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4294_, v___x_4295_, v___x_4293_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_hostname___boxed(lean_object* v_a_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_Lasm_JS_Deno_hostname();
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(size_t v_sz_4301_, size_t v_i_4302_, lean_object* v_bs_4303_){
_start:
{
uint8_t v___x_4304_; 
v___x_4304_ = lean_usize_dec_lt(v_i_4302_, v_sz_4301_);
if (v___x_4304_ == 0)
{
lean_object* v___x_4305_; 
v___x_4305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4305_, 0, v_bs_4303_);
return v___x_4305_;
}
else
{
lean_object* v_v_4306_; 
v_v_4306_ = lean_array_uget_borrowed(v_bs_4303_, v_i_4302_);
if (lean_obj_tag(v_v_4306_) == 3)
{
double v_n_4307_; lean_object* v___x_4308_; lean_object* v_bs_x27_4309_; size_t v___x_4310_; size_t v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v_n_4307_ = lean_ctor_get_float(v_v_4306_, 0);
v___x_4308_ = lean_unsigned_to_nat(0u);
v_bs_x27_4309_ = lean_array_uset(v_bs_4303_, v_i_4302_, v___x_4308_);
v___x_4310_ = ((size_t)1ULL);
v___x_4311_ = lean_usize_add(v_i_4302_, v___x_4310_);
v___x_4312_ = lean_box_float(v_n_4307_);
v___x_4313_ = lean_array_uset(v_bs_x27_4309_, v_i_4302_, v___x_4312_);
v_i_4302_ = v___x_4311_;
v_bs_4303_ = v___x_4313_;
goto _start;
}
else
{
lean_object* v___x_4315_; 
lean_dec_ref(v_bs_4303_);
v___x_4315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___closed__0));
return v___x_4315_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4316_, lean_object* v_i_4317_, lean_object* v_bs_4318_){
_start:
{
size_t v_sz_boxed_4319_; size_t v_i_boxed_4320_; lean_object* v_res_4321_; 
v_sz_boxed_4319_ = lean_unbox_usize(v_sz_4316_);
lean_dec(v_sz_4316_);
v_i_boxed_4320_ = lean_unbox_usize(v_i_4317_);
lean_dec(v_i_4317_);
v_res_4321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(v_sz_boxed_4319_, v_i_boxed_4320_, v_bs_4318_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(lean_object* v_context_4324_, lean_object* v_d_4325_){
_start:
{
lean_object* v___y_4328_; lean_object* v___y_4329_; lean_object* v___y_4334_; lean_object* v_received_4335_; lean_object* v___y_4354_; lean_object* v_a_4357_; 
if (lean_obj_tag(v_d_4325_) == 7)
{
lean_object* v_items_4381_; size_t v_sz_4382_; size_t v___x_4383_; lean_object* v___x_4384_; 
v_items_4381_ = lean_ctor_get(v_d_4325_, 0);
v_sz_4382_ = lean_array_size(v_items_4381_);
v___x_4383_ = ((size_t)0ULL);
lean_inc_ref(v_items_4381_);
v___x_4384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(v_sz_4382_, v___x_4383_, v_items_4381_);
if (lean_obj_tag(v___x_4384_) == 0)
{
lean_object* v_a_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; uint8_t v___x_4389_; 
v_a_4385_ = lean_ctor_get(v___x_4384_, 0);
lean_inc(v_a_4385_);
lean_dec_ref_known(v___x_4384_, 1);
v___x_4386_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__1));
v___x_4387_ = lean_string_utf8_byte_size(v_a_4385_);
v___x_4388_ = lean_unsigned_to_nat(0u);
v___x_4389_ = lean_nat_dec_eq(v___x_4387_, v___x_4388_);
if (v___x_4389_ == 0)
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4390_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4391_ = lean_string_append(v___x_4390_, v_a_4385_);
lean_dec(v_a_4385_);
v___x_4392_ = lean_string_append(v___x_4386_, v___x_4391_);
lean_dec_ref(v___x_4391_);
v_a_4357_ = v___x_4392_;
goto v___jp_4356_;
}
else
{
lean_dec(v_a_4385_);
v_a_4357_ = v___x_4386_;
goto v___jp_4356_;
}
}
else
{
if (lean_obj_tag(v___x_4384_) == 0)
{
lean_object* v_a_4393_; 
v_a_4393_ = lean_ctor_get(v___x_4384_, 0);
lean_inc(v_a_4393_);
lean_dec_ref_known(v___x_4384_, 1);
v_a_4357_ = v_a_4393_;
goto v___jp_4356_;
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
lean_dec_ref_known(v_d_4325_, 1);
v_a_4394_ = lean_ctor_get(v___x_4384_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4384_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4384_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4384_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
lean_ctor_set_tag(v___x_4396_, 0);
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
else
{
lean_object* v___x_4402_; 
v___x_4402_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v_a_4357_ = v___x_4402_;
goto v___jp_4356_;
}
v___jp_4327_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4330_ = lean_string_append(v___y_4328_, v___y_4329_);
lean_dec_ref(v___y_4329_);
v___x_4331_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4330_);
v___x_4332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4331_);
return v___x_4332_;
}
v___jp_4333_:
{
lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; uint8_t v___x_4347_; 
v___x_4336_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4337_ = lean_string_append(v___x_4336_, v_context_4324_);
v___x_4338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_4339_ = lean_string_append(v___x_4337_, v___x_4338_);
v___x_4340_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__0));
v___x_4341_ = lean_string_append(v___x_4339_, v___x_4340_);
v___x_4342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_4343_ = lean_string_append(v___x_4341_, v___x_4342_);
v___x_4344_ = lean_string_append(v___x_4343_, v_received_4335_);
lean_dec_ref(v_received_4335_);
v___x_4345_ = lean_string_utf8_byte_size(v___y_4334_);
v___x_4346_ = lean_unsigned_to_nat(0u);
v___x_4347_ = lean_nat_dec_eq(v___x_4345_, v___x_4346_);
if (v___x_4347_ == 0)
{
lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_4349_ = lean_string_append(v___x_4348_, v___y_4334_);
lean_dec_ref(v___y_4334_);
v___x_4350_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_4351_ = lean_string_append(v___x_4349_, v___x_4350_);
v___y_4328_ = v___x_4344_;
v___y_4329_ = v___x_4351_;
goto v___jp_4327_;
}
else
{
lean_object* v___x_4352_; 
lean_dec_ref(v___y_4334_);
v___x_4352_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_4328_ = v___x_4344_;
v___y_4329_ = v___x_4352_;
goto v___jp_4327_;
}
}
v___jp_4353_:
{
lean_object* v___x_4355_; 
v___x_4355_ = l_Lasm_JS_Data_describe(v_d_4325_);
v___y_4334_ = v___y_4354_;
v_received_4335_ = v___x_4355_;
goto v___jp_4333_;
}
v___jp_4356_:
{
if (lean_obj_tag(v_d_4325_) == 9)
{
lean_object* v_value_4358_; lean_object* v_description_4359_; lean_object* v___x_4360_; uint8_t v___x_4361_; 
v_value_4358_ = lean_ctor_get(v_d_4325_, 0);
v_description_4359_ = lean_ctor_get(v_d_4325_, 1);
v___x_4360_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4361_ = lean_string_dec_eq(v_description_4359_, v___x_4360_);
if (v___x_4361_ == 0)
{
v___y_4354_ = v_a_4357_;
goto v___jp_4353_;
}
else
{
lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4378_; 
lean_inc(v_value_4358_);
v_isSharedCheck_4378_ = !lean_is_exclusive(v_d_4325_);
if (v_isSharedCheck_4378_ == 0)
{
lean_object* v_unused_4379_; lean_object* v_unused_4380_; 
v_unused_4379_ = lean_ctor_get(v_d_4325_, 1);
lean_dec(v_unused_4379_);
v_unused_4380_ = lean_ctor_get(v_d_4325_, 0);
lean_dec(v_unused_4380_);
v___x_4363_ = v_d_4325_;
v_isShared_4364_ = v_isSharedCheck_4378_;
goto v_resetjp_4362_;
}
else
{
lean_dec(v_d_4325_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4378_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
uint32_t v___x_4365_; uint64_t v___x_4366_; lean_object* v___x_4368_; 
v___x_4365_ = 206;
v___x_4366_ = 0ULL;
lean_inc(v_value_4358_);
if (v_isShared_4364_ == 0)
{
lean_ctor_set(v___x_4363_, 1, v___x_4360_);
v___x_4368_ = v___x_4363_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4377_; 
v_reuseFailAlloc_4377_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4377_, 0, v_value_4358_);
lean_ctor_set(v_reuseFailAlloc_4377_, 1, v___x_4360_);
v___x_4368_ = v_reuseFailAlloc_4377_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
uint32_t v___x_4369_; lean_object* v___x_4370_; 
v___x_4369_ = lasm_js_value_handle(v_value_4358_);
lean_dec(v_value_4358_);
v___x_4370_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4365_, v___x_4366_, v___x_4368_, v___x_4369_);
lean_dec_ref(v___x_4368_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; uint8_t v___x_4372_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
lean_inc(v_a_4371_);
lean_dec_ref_known(v___x_4370_, 1);
v___x_4372_ = lean_string_validate_utf8(v_a_4371_);
if (v___x_4372_ == 0)
{
lean_object* v___x_4373_; lean_object* v___x_4374_; 
lean_dec(v_a_4371_);
v___x_4373_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_4374_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4373_);
v___y_4334_ = v_a_4357_;
v_received_4335_ = v___x_4374_;
goto v___jp_4333_;
}
else
{
lean_object* v___x_4375_; 
v___x_4375_ = lean_string_from_utf8_unchecked(v_a_4371_);
v___y_4334_ = v_a_4357_;
v_received_4335_ = v___x_4375_;
goto v___jp_4333_;
}
}
else
{
lean_object* v___x_4376_; 
lean_dec_ref_known(v___x_4370_, 1);
v___x_4376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_4334_ = v_a_4357_;
v_received_4335_ = v___x_4376_;
goto v___jp_4333_;
}
}
}
}
}
else
{
v___y_4354_ = v_a_4357_;
goto v___jp_4353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___boxed(lean_object* v_context_4403_, lean_object* v_d_4404_, lean_object* v_a_4405_){
_start:
{
lean_object* v_res_4406_; 
v_res_4406_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(v_context_4403_, v_d_4404_);
lean_dec_ref(v_context_4403_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(lean_object* v_b_4407_, lean_object* v_args_4408_, uint8_t v_await_4409_){
_start:
{
uint64_t v___y_4412_; uint64_t v___y_4413_; uint64_t v___x_4456_; uint64_t v___y_4458_; 
v___x_4456_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4409_ == 0)
{
uint64_t v___x_4463_; 
v___x_4463_ = 0ULL;
v___y_4458_ = v___x_4463_;
goto v___jp_4457_;
}
else
{
uint64_t v___x_4464_; 
v___x_4464_ = 2ULL;
v___y_4458_ = v___x_4464_;
goto v___jp_4457_;
}
v___jp_4411_:
{
uint64_t v_flags_4414_; uint32_t v___x_4415_; lean_object* v___x_4416_; uint32_t v___x_4417_; lean_object* v___x_4418_; 
v_flags_4414_ = lean_uint64_lor(v___y_4412_, v___y_4413_);
v___x_4415_ = 214;
v___x_4416_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4407_, v_args_4408_);
v___x_4417_ = 0;
v___x_4418_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4415_, v_flags_4414_, v___x_4416_, v___x_4417_);
lean_dec(v___x_4416_);
if (lean_obj_tag(v___x_4418_) == 0)
{
if (lean_obj_tag(v___x_4418_) == 0)
{
lean_object* v_a_4419_; lean_object* v___x_4420_; 
v_a_4419_ = lean_ctor_get(v___x_4418_, 0);
lean_inc(v_a_4419_);
lean_dec_ref_known(v___x_4418_, 1);
v___x_4420_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4419_);
lean_dec(v_a_4419_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_object* v_a_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v_a_4421_ = lean_ctor_get(v___x_4420_, 0);
lean_inc(v_a_4421_);
lean_dec_ref_known(v___x_4420_, 1);
v___x_4422_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4407_);
v___x_4423_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(v___x_4422_, v_a_4421_);
lean_dec_ref(v___x_4422_);
return v___x_4423_;
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4431_; 
v_a_4424_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4426_ = v___x_4420_;
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_dec(v___x_4420_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4429_; 
if (v_isShared_4427_ == 0)
{
v___x_4429_ = v___x_4426_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_a_4424_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
else
{
lean_object* v_a_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4439_; 
v_a_4432_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4434_ = v___x_4418_;
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_a_4432_);
lean_dec(v___x_4418_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4437_; 
if (v_isShared_4435_ == 0)
{
lean_ctor_set_tag(v___x_4434_, 1);
v___x_4437_ = v___x_4434_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_a_4432_);
v___x_4437_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
return v___x_4437_;
}
}
}
}
else
{
lean_object* v_a_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4455_; 
v_a_4440_ = lean_ctor_get(v___x_4418_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4418_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4442_ = v___x_4418_;
v_isShared_4443_ = v_isSharedCheck_4455_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_a_4440_);
lean_dec(v___x_4418_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4455_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4453_; 
v___x_4444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4445_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4407_);
v___x_4446_ = lean_string_append(v___x_4444_, v___x_4445_);
lean_dec_ref(v___x_4445_);
v___x_4447_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4448_ = lean_string_append(v___x_4446_, v___x_4447_);
v___x_4449_ = lean_io_error_to_string(v_a_4440_);
v___x_4450_ = lean_string_append(v___x_4448_, v___x_4449_);
lean_dec_ref(v___x_4449_);
v___x_4451_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4450_);
if (v_isShared_4443_ == 0)
{
lean_ctor_set(v___x_4442_, 0, v___x_4451_);
v___x_4453_ = v___x_4442_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v___x_4451_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
v___jp_4457_:
{
uint8_t v_construct_4459_; uint64_t v___x_4460_; 
v_construct_4459_ = lean_ctor_get_uint8(v_b_4407_, sizeof(void*)*4);
v___x_4460_ = lean_uint64_lor(v___x_4456_, v___y_4458_);
if (v_construct_4459_ == 0)
{
uint64_t v___x_4461_; 
v___x_4461_ = 0ULL;
v___y_4412_ = v___x_4460_;
v___y_4413_ = v___x_4461_;
goto v___jp_4411_;
}
else
{
uint64_t v___x_4462_; 
v___x_4462_ = 4ULL;
v___y_4412_ = v___x_4460_;
v___y_4413_ = v___x_4462_;
goto v___jp_4411_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0___boxed(lean_object* v_b_4465_, lean_object* v_args_4466_, lean_object* v_await_4467_, lean_object* v_a_4468_){
_start:
{
uint8_t v_await_boxed_4469_; lean_object* v_res_4470_; 
v_await_boxed_4469_ = lean_unbox(v_await_4467_);
v_res_4470_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(v_b_4465_, v_args_4466_, v_await_boxed_4469_);
lean_dec_ref(v_b_4465_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_loadavg(){
_start:
{
uint8_t v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4480_ = 0;
v___x_4481_ = ((lean_object*)(l_Lasm_JS_Deno_loadavg___closed__2));
v___x_4482_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4483_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(v___x_4481_, v___x_4482_, v___x_4480_);
return v___x_4483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_loadavg___boxed(lean_object* v_a_4484_){
_start:
{
lean_object* v_res_4485_; 
v_res_4485_ = l_Lasm_JS_Deno_loadavg();
return v_res_4485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(lean_object* v_context_4486_, lean_object* v_d_4487_){
_start:
{
lean_object* v___y_4490_; lean_object* v___y_4491_; lean_object* v___y_4496_; lean_object* v_received_4497_; lean_object* v___y_4516_; lean_object* v_a_4519_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v___x_4543_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__0));
lean_inc(v_d_4487_);
v___x_4544_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4543_);
if (lean_obj_tag(v___x_4544_) == 0)
{
lean_object* v_a_4545_; 
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_a_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v_a_4519_ = v_a_4545_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v_a_4546_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_a_4546_);
lean_dec_ref_known(v___x_4544_, 1);
v___x_4547_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__1));
lean_inc(v_d_4487_);
v___x_4548_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4547_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; 
lean_dec(v_a_4546_);
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
lean_inc(v_a_4549_);
lean_dec_ref_known(v___x_4548_, 1);
v_a_4519_ = v_a_4549_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; 
v_a_4550_ = lean_ctor_get(v___x_4548_, 0);
lean_inc(v_a_4550_);
lean_dec_ref_known(v___x_4548_, 1);
v___x_4551_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__2));
lean_inc(v_d_4487_);
v___x_4552_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4551_);
if (lean_obj_tag(v___x_4552_) == 0)
{
lean_object* v_a_4553_; 
lean_dec(v_a_4550_);
lean_dec(v_a_4546_);
v_a_4553_ = lean_ctor_get(v___x_4552_, 0);
lean_inc(v_a_4553_);
lean_dec_ref_known(v___x_4552_, 1);
v_a_4519_ = v_a_4553_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v_a_4554_ = lean_ctor_get(v___x_4552_, 0);
lean_inc(v_a_4554_);
lean_dec_ref_known(v___x_4552_, 1);
v___x_4555_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__3));
lean_inc(v_d_4487_);
v___x_4556_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4555_);
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; 
lean_dec(v_a_4554_);
lean_dec(v_a_4550_);
lean_dec(v_a_4546_);
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v___x_4556_, 1);
v_a_4519_ = v_a_4557_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; 
v_a_4558_ = lean_ctor_get(v___x_4556_, 0);
lean_inc(v_a_4558_);
lean_dec_ref_known(v___x_4556_, 1);
v___x_4559_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__4));
lean_inc(v_d_4487_);
v___x_4560_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4559_);
if (lean_obj_tag(v___x_4560_) == 0)
{
lean_object* v_a_4561_; 
lean_dec(v_a_4558_);
lean_dec(v_a_4554_);
lean_dec(v_a_4550_);
lean_dec(v_a_4546_);
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
lean_inc(v_a_4561_);
lean_dec_ref_known(v___x_4560_, 1);
v_a_4519_ = v_a_4561_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v_a_4562_ = lean_ctor_get(v___x_4560_, 0);
lean_inc(v_a_4562_);
lean_dec_ref_known(v___x_4560_, 1);
v___x_4563_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__5));
lean_inc(v_d_4487_);
v___x_4564_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4563_);
if (lean_obj_tag(v___x_4564_) == 0)
{
lean_object* v_a_4565_; 
lean_dec(v_a_4562_);
lean_dec(v_a_4558_);
lean_dec(v_a_4554_);
lean_dec(v_a_4550_);
lean_dec(v_a_4546_);
v_a_4565_ = lean_ctor_get(v___x_4564_, 0);
lean_inc(v_a_4565_);
lean_dec_ref_known(v___x_4564_, 1);
v_a_4519_ = v_a_4565_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; 
v_a_4566_ = lean_ctor_get(v___x_4564_, 0);
lean_inc(v_a_4566_);
lean_dec_ref_known(v___x_4564_, 1);
v___x_4567_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__6));
lean_inc(v_d_4487_);
v___x_4568_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4487_, v___x_4567_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; 
lean_dec(v_a_4566_);
lean_dec(v_a_4562_);
lean_dec(v_a_4558_);
lean_dec(v_a_4554_);
lean_dec(v_a_4550_);
lean_dec(v_a_4546_);
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
lean_inc(v_a_4569_);
lean_dec_ref_known(v___x_4568_, 1);
v_a_4519_ = v_a_4569_;
goto v___jp_4518_;
}
else
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4585_; 
lean_dec(v_d_4487_);
v_a_4570_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4572_ = v___x_4568_;
v_isShared_4573_ = v_isSharedCheck_4585_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v___x_4568_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4585_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4574_; double v___x_4575_; double v___x_4576_; double v___x_4577_; double v___x_4578_; double v___x_4579_; double v___x_4580_; double v___x_4581_; lean_object* v___x_4583_; 
v___x_4574_ = lean_alloc_ctor(0, 0, 56);
v___x_4575_ = lean_unbox_float(v_a_4546_);
lean_dec(v_a_4546_);
lean_ctor_set_float(v___x_4574_, 0, v___x_4575_);
v___x_4576_ = lean_unbox_float(v_a_4550_);
lean_dec(v_a_4550_);
lean_ctor_set_float(v___x_4574_, 8, v___x_4576_);
v___x_4577_ = lean_unbox_float(v_a_4554_);
lean_dec(v_a_4554_);
lean_ctor_set_float(v___x_4574_, 16, v___x_4577_);
v___x_4578_ = lean_unbox_float(v_a_4558_);
lean_dec(v_a_4558_);
lean_ctor_set_float(v___x_4574_, 24, v___x_4578_);
v___x_4579_ = lean_unbox_float(v_a_4562_);
lean_dec(v_a_4562_);
lean_ctor_set_float(v___x_4574_, 32, v___x_4579_);
v___x_4580_ = lean_unbox_float(v_a_4566_);
lean_dec(v_a_4566_);
lean_ctor_set_float(v___x_4574_, 40, v___x_4580_);
v___x_4581_ = lean_unbox_float(v_a_4570_);
lean_dec(v_a_4570_);
lean_ctor_set_float(v___x_4574_, 48, v___x_4581_);
if (v_isShared_4573_ == 0)
{
lean_ctor_set_tag(v___x_4572_, 0);
lean_ctor_set(v___x_4572_, 0, v___x_4574_);
v___x_4583_ = v___x_4572_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v___x_4574_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
}
}
}
}
}
}
v___jp_4489_:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4492_ = lean_string_append(v___y_4490_, v___y_4491_);
lean_dec_ref(v___y_4491_);
v___x_4493_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4492_);
v___x_4494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4493_);
return v___x_4494_;
}
v___jp_4495_:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; uint8_t v___x_4509_; 
v___x_4498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4499_ = lean_string_append(v___x_4498_, v_context_4486_);
v___x_4500_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_4501_ = lean_string_append(v___x_4499_, v___x_4500_);
v___x_4502_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__1));
v___x_4503_ = lean_string_append(v___x_4501_, v___x_4502_);
v___x_4504_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_4505_ = lean_string_append(v___x_4503_, v___x_4504_);
v___x_4506_ = lean_string_append(v___x_4505_, v_received_4497_);
lean_dec_ref(v_received_4497_);
v___x_4507_ = lean_string_utf8_byte_size(v___y_4496_);
v___x_4508_ = lean_unsigned_to_nat(0u);
v___x_4509_ = lean_nat_dec_eq(v___x_4507_, v___x_4508_);
if (v___x_4509_ == 0)
{
lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_4511_ = lean_string_append(v___x_4510_, v___y_4496_);
lean_dec_ref(v___y_4496_);
v___x_4512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_4513_ = lean_string_append(v___x_4511_, v___x_4512_);
v___y_4490_ = v___x_4506_;
v___y_4491_ = v___x_4513_;
goto v___jp_4489_;
}
else
{
lean_object* v___x_4514_; 
lean_dec_ref(v___y_4496_);
v___x_4514_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_4490_ = v___x_4506_;
v___y_4491_ = v___x_4514_;
goto v___jp_4489_;
}
}
v___jp_4515_:
{
lean_object* v___x_4517_; 
v___x_4517_ = l_Lasm_JS_Data_describe(v_d_4487_);
v___y_4496_ = v___y_4516_;
v_received_4497_ = v___x_4517_;
goto v___jp_4495_;
}
v___jp_4518_:
{
if (lean_obj_tag(v_d_4487_) == 9)
{
lean_object* v_value_4520_; lean_object* v_description_4521_; lean_object* v___x_4522_; uint8_t v___x_4523_; 
v_value_4520_ = lean_ctor_get(v_d_4487_, 0);
v_description_4521_ = lean_ctor_get(v_d_4487_, 1);
v___x_4522_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4523_ = lean_string_dec_eq(v_description_4521_, v___x_4522_);
if (v___x_4523_ == 0)
{
v___y_4516_ = v_a_4519_;
goto v___jp_4515_;
}
else
{
lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4540_; 
lean_inc(v_value_4520_);
v_isSharedCheck_4540_ = !lean_is_exclusive(v_d_4487_);
if (v_isSharedCheck_4540_ == 0)
{
lean_object* v_unused_4541_; lean_object* v_unused_4542_; 
v_unused_4541_ = lean_ctor_get(v_d_4487_, 1);
lean_dec(v_unused_4541_);
v_unused_4542_ = lean_ctor_get(v_d_4487_, 0);
lean_dec(v_unused_4542_);
v___x_4525_ = v_d_4487_;
v_isShared_4526_ = v_isSharedCheck_4540_;
goto v_resetjp_4524_;
}
else
{
lean_dec(v_d_4487_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4540_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
uint32_t v___x_4527_; uint64_t v___x_4528_; lean_object* v___x_4530_; 
v___x_4527_ = 206;
v___x_4528_ = 0ULL;
lean_inc(v_value_4520_);
if (v_isShared_4526_ == 0)
{
lean_ctor_set(v___x_4525_, 1, v___x_4522_);
v___x_4530_ = v___x_4525_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v_value_4520_);
lean_ctor_set(v_reuseFailAlloc_4539_, 1, v___x_4522_);
v___x_4530_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
uint32_t v___x_4531_; lean_object* v___x_4532_; 
v___x_4531_ = lasm_js_value_handle(v_value_4520_);
lean_dec(v_value_4520_);
v___x_4532_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4527_, v___x_4528_, v___x_4530_, v___x_4531_);
lean_dec_ref(v___x_4530_);
if (lean_obj_tag(v___x_4532_) == 0)
{
lean_object* v_a_4533_; uint8_t v___x_4534_; 
v_a_4533_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4533_);
lean_dec_ref_known(v___x_4532_, 1);
v___x_4534_ = lean_string_validate_utf8(v_a_4533_);
if (v___x_4534_ == 0)
{
lean_object* v___x_4535_; lean_object* v___x_4536_; 
lean_dec(v_a_4533_);
v___x_4535_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_4536_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4535_);
v___y_4496_ = v_a_4519_;
v_received_4497_ = v___x_4536_;
goto v___jp_4495_;
}
else
{
lean_object* v___x_4537_; 
v___x_4537_ = lean_string_from_utf8_unchecked(v_a_4533_);
v___y_4496_ = v_a_4519_;
v_received_4497_ = v___x_4537_;
goto v___jp_4495_;
}
}
else
{
lean_object* v___x_4538_; 
lean_dec_ref_known(v___x_4532_, 1);
v___x_4538_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_4496_ = v_a_4519_;
v_received_4497_ = v___x_4538_;
goto v___jp_4495_;
}
}
}
}
}
else
{
v___y_4516_ = v_a_4519_;
goto v___jp_4515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0___boxed(lean_object* v_context_4586_, lean_object* v_d_4587_, lean_object* v_a_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(v_context_4586_, v_d_4587_);
lean_dec_ref(v_context_4586_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(lean_object* v_b_4590_, lean_object* v_args_4591_, uint8_t v_await_4592_){
_start:
{
uint64_t v___y_4595_; uint64_t v___y_4596_; uint64_t v___x_4639_; uint64_t v___y_4641_; 
v___x_4639_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4592_ == 0)
{
uint64_t v___x_4646_; 
v___x_4646_ = 0ULL;
v___y_4641_ = v___x_4646_;
goto v___jp_4640_;
}
else
{
uint64_t v___x_4647_; 
v___x_4647_ = 2ULL;
v___y_4641_ = v___x_4647_;
goto v___jp_4640_;
}
v___jp_4594_:
{
uint64_t v_flags_4597_; uint32_t v___x_4598_; lean_object* v___x_4599_; uint32_t v___x_4600_; lean_object* v___x_4601_; 
v_flags_4597_ = lean_uint64_lor(v___y_4595_, v___y_4596_);
v___x_4598_ = 214;
v___x_4599_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4590_, v_args_4591_);
v___x_4600_ = 0;
v___x_4601_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4598_, v_flags_4597_, v___x_4599_, v___x_4600_);
lean_dec(v___x_4599_);
if (lean_obj_tag(v___x_4601_) == 0)
{
if (lean_obj_tag(v___x_4601_) == 0)
{
lean_object* v_a_4602_; lean_object* v___x_4603_; 
v_a_4602_ = lean_ctor_get(v___x_4601_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v___x_4601_, 1);
v___x_4603_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4602_);
lean_dec(v_a_4602_);
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
lean_inc(v_a_4604_);
lean_dec_ref_known(v___x_4603_, 1);
v___x_4605_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4590_);
v___x_4606_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(v___x_4605_, v_a_4604_);
lean_dec_ref(v___x_4605_);
return v___x_4606_;
}
else
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
v_a_4607_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4603_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4603_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
else
{
lean_object* v_a_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4622_; 
v_a_4615_ = lean_ctor_get(v___x_4601_, 0);
v_isSharedCheck_4622_ = !lean_is_exclusive(v___x_4601_);
if (v_isSharedCheck_4622_ == 0)
{
v___x_4617_ = v___x_4601_;
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_a_4615_);
lean_dec(v___x_4601_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4622_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4620_; 
if (v_isShared_4618_ == 0)
{
lean_ctor_set_tag(v___x_4617_, 1);
v___x_4620_ = v___x_4617_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v_a_4615_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
return v___x_4620_;
}
}
}
}
else
{
lean_object* v_a_4623_; lean_object* v___x_4625_; uint8_t v_isShared_4626_; uint8_t v_isSharedCheck_4638_; 
v_a_4623_ = lean_ctor_get(v___x_4601_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4601_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4625_ = v___x_4601_;
v_isShared_4626_ = v_isSharedCheck_4638_;
goto v_resetjp_4624_;
}
else
{
lean_inc(v_a_4623_);
lean_dec(v___x_4601_);
v___x_4625_ = lean_box(0);
v_isShared_4626_ = v_isSharedCheck_4638_;
goto v_resetjp_4624_;
}
v_resetjp_4624_:
{
lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4636_; 
v___x_4627_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4628_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4590_);
v___x_4629_ = lean_string_append(v___x_4627_, v___x_4628_);
lean_dec_ref(v___x_4628_);
v___x_4630_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4631_ = lean_string_append(v___x_4629_, v___x_4630_);
v___x_4632_ = lean_io_error_to_string(v_a_4623_);
v___x_4633_ = lean_string_append(v___x_4631_, v___x_4632_);
lean_dec_ref(v___x_4632_);
v___x_4634_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4633_);
if (v_isShared_4626_ == 0)
{
lean_ctor_set(v___x_4625_, 0, v___x_4634_);
v___x_4636_ = v___x_4625_;
goto v_reusejp_4635_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v___x_4634_);
v___x_4636_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4635_;
}
v_reusejp_4635_:
{
return v___x_4636_;
}
}
}
}
v___jp_4640_:
{
uint8_t v_construct_4642_; uint64_t v___x_4643_; 
v_construct_4642_ = lean_ctor_get_uint8(v_b_4590_, sizeof(void*)*4);
v___x_4643_ = lean_uint64_lor(v___x_4639_, v___y_4641_);
if (v_construct_4642_ == 0)
{
uint64_t v___x_4644_; 
v___x_4644_ = 0ULL;
v___y_4595_ = v___x_4643_;
v___y_4596_ = v___x_4644_;
goto v___jp_4594_;
}
else
{
uint64_t v___x_4645_; 
v___x_4645_ = 4ULL;
v___y_4595_ = v___x_4643_;
v___y_4596_ = v___x_4645_;
goto v___jp_4594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0___boxed(lean_object* v_b_4648_, lean_object* v_args_4649_, lean_object* v_await_4650_, lean_object* v_a_4651_){
_start:
{
uint8_t v_await_boxed_4652_; lean_object* v_res_4653_; 
v_await_boxed_4652_ = lean_unbox(v_await_4650_);
v_res_4653_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(v_b_4648_, v_args_4649_, v_await_boxed_4652_);
lean_dec_ref(v_b_4648_);
return v_res_4653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_systemMemoryInfo(){
_start:
{
uint8_t v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
v___x_4663_ = 0;
v___x_4664_ = ((lean_object*)(l_Lasm_JS_Deno_systemMemoryInfo___closed__2));
v___x_4665_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4666_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(v___x_4664_, v___x_4665_, v___x_4663_);
return v___x_4666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_systemMemoryInfo___boxed(lean_object* v_a_4667_){
_start:
{
lean_object* v_res_4668_; 
v_res_4668_ = l_Lasm_JS_Deno_systemMemoryInfo();
return v_res_4668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osRelease(){
_start:
{
uint8_t v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4678_ = 0;
v___x_4679_ = ((lean_object*)(l_Lasm_JS_Deno_osRelease___closed__2));
v___x_4680_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4681_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4679_, v___x_4680_, v___x_4678_);
return v___x_4681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osRelease___boxed(lean_object* v_a_4682_){
_start:
{
lean_object* v_res_4683_; 
v_res_4683_ = l_Lasm_JS_Deno_osRelease();
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(lean_object* v_b_4684_, lean_object* v_args_4685_, uint8_t v_await_4686_){
_start:
{
uint64_t v___y_4689_; uint64_t v___y_4690_; uint64_t v___x_4733_; uint64_t v___y_4735_; 
v___x_4733_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4686_ == 0)
{
uint64_t v___x_4740_; 
v___x_4740_ = 0ULL;
v___y_4735_ = v___x_4740_;
goto v___jp_4734_;
}
else
{
uint64_t v___x_4741_; 
v___x_4741_ = 2ULL;
v___y_4735_ = v___x_4741_;
goto v___jp_4734_;
}
v___jp_4688_:
{
uint64_t v_flags_4691_; uint32_t v___x_4692_; lean_object* v___x_4693_; uint32_t v___x_4694_; lean_object* v___x_4695_; 
v_flags_4691_ = lean_uint64_lor(v___y_4689_, v___y_4690_);
v___x_4692_ = 214;
v___x_4693_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4684_, v_args_4685_);
v___x_4694_ = 0;
v___x_4695_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4692_, v_flags_4691_, v___x_4693_, v___x_4694_);
lean_dec(v___x_4693_);
if (lean_obj_tag(v___x_4695_) == 0)
{
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; lean_object* v___x_4697_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4696_);
lean_dec_ref_known(v___x_4695_, 1);
v___x_4697_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4696_);
lean_dec(v_a_4696_);
if (lean_obj_tag(v___x_4697_) == 0)
{
lean_object* v_a_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
v_a_4698_ = lean_ctor_get(v___x_4697_, 0);
lean_inc(v_a_4698_);
lean_dec_ref_known(v___x_4697_, 1);
v___x_4699_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4684_);
v___x_4700_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v___x_4699_, v_a_4698_);
lean_dec_ref(v___x_4699_);
return v___x_4700_;
}
else
{
lean_object* v_a_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4708_; 
v_a_4701_ = lean_ctor_get(v___x_4697_, 0);
v_isSharedCheck_4708_ = !lean_is_exclusive(v___x_4697_);
if (v_isSharedCheck_4708_ == 0)
{
v___x_4703_ = v___x_4697_;
v_isShared_4704_ = v_isSharedCheck_4708_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_a_4701_);
lean_dec(v___x_4697_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4708_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v___x_4706_; 
if (v_isShared_4704_ == 0)
{
v___x_4706_ = v___x_4703_;
goto v_reusejp_4705_;
}
else
{
lean_object* v_reuseFailAlloc_4707_; 
v_reuseFailAlloc_4707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4707_, 0, v_a_4701_);
v___x_4706_ = v_reuseFailAlloc_4707_;
goto v_reusejp_4705_;
}
v_reusejp_4705_:
{
return v___x_4706_;
}
}
}
}
else
{
lean_object* v_a_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4716_; 
v_a_4709_ = lean_ctor_get(v___x_4695_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4711_ = v___x_4695_;
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_a_4709_);
lean_dec(v___x_4695_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4716_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4714_; 
if (v_isShared_4712_ == 0)
{
lean_ctor_set_tag(v___x_4711_, 1);
v___x_4714_ = v___x_4711_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v_a_4709_);
v___x_4714_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
return v___x_4714_;
}
}
}
}
else
{
lean_object* v_a_4717_; lean_object* v___x_4719_; uint8_t v_isShared_4720_; uint8_t v_isSharedCheck_4732_; 
v_a_4717_ = lean_ctor_get(v___x_4695_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4719_ = v___x_4695_;
v_isShared_4720_ = v_isSharedCheck_4732_;
goto v_resetjp_4718_;
}
else
{
lean_inc(v_a_4717_);
lean_dec(v___x_4695_);
v___x_4719_ = lean_box(0);
v_isShared_4720_ = v_isSharedCheck_4732_;
goto v_resetjp_4718_;
}
v_resetjp_4718_:
{
lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4730_; 
v___x_4721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4722_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4684_);
v___x_4723_ = lean_string_append(v___x_4721_, v___x_4722_);
lean_dec_ref(v___x_4722_);
v___x_4724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4725_ = lean_string_append(v___x_4723_, v___x_4724_);
v___x_4726_ = lean_io_error_to_string(v_a_4717_);
v___x_4727_ = lean_string_append(v___x_4725_, v___x_4726_);
lean_dec_ref(v___x_4726_);
v___x_4728_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4727_);
if (v_isShared_4720_ == 0)
{
lean_ctor_set(v___x_4719_, 0, v___x_4728_);
v___x_4730_ = v___x_4719_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v___x_4728_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
}
v___jp_4734_:
{
uint8_t v_construct_4736_; uint64_t v___x_4737_; 
v_construct_4736_ = lean_ctor_get_uint8(v_b_4684_, sizeof(void*)*4);
v___x_4737_ = lean_uint64_lor(v___x_4733_, v___y_4735_);
if (v_construct_4736_ == 0)
{
uint64_t v___x_4738_; 
v___x_4738_ = 0ULL;
v___y_4689_ = v___x_4737_;
v___y_4690_ = v___x_4738_;
goto v___jp_4688_;
}
else
{
uint64_t v___x_4739_; 
v___x_4739_ = 4ULL;
v___y_4689_ = v___x_4737_;
v___y_4690_ = v___x_4739_;
goto v___jp_4688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0___boxed(lean_object* v_b_4742_, lean_object* v_args_4743_, lean_object* v_await_4744_, lean_object* v_a_4745_){
_start:
{
uint8_t v_await_boxed_4746_; lean_object* v_res_4747_; 
v_await_boxed_4746_ = lean_unbox(v_await_4744_);
v_res_4747_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v_b_4742_, v_args_4743_, v_await_boxed_4746_);
lean_dec_ref(v_b_4742_);
return v_res_4747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osUptime(){
_start:
{
uint8_t v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4757_ = 0;
v___x_4758_ = ((lean_object*)(l_Lasm_JS_Deno_osUptime___closed__2));
v___x_4759_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4760_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_4758_, v___x_4759_, v___x_4757_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osUptime___boxed(lean_object* v_a_4761_){
_start:
{
lean_object* v_res_4762_; 
v_res_4762_ = l_Lasm_JS_Deno_osUptime();
return v_res_4762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exit(lean_object* v_code_4771_){
_start:
{
uint8_t v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; 
v___x_4773_ = 0;
v___x_4774_ = lean_unsigned_to_nat(1u);
v___x_4775_ = ((lean_object*)(l_Lasm_JS_Deno_exit___closed__2));
v___x_4776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_code_4771_);
v___x_4777_ = lean_mk_empty_array_with_capacity(v___x_4774_);
v___x_4778_ = lean_array_push(v___x_4777_, v___x_4776_);
v___x_4779_ = l_Lasm_JS_Web_Support_args(v___x_4778_);
v___x_4780_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4775_, v___x_4779_, v___x_4773_);
return v___x_4780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exit___boxed(lean_object* v_code_4781_, lean_object* v_a_4782_){
_start:
{
lean_object* v_res_4783_; 
v_res_4783_ = l_Lasm_JS_Deno_exit(v_code_4781_);
lean_dec(v_code_4781_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_execPath(){
_start:
{
uint8_t v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4793_ = 0;
v___x_4794_ = ((lean_object*)(l_Lasm_JS_Deno_execPath___closed__2));
v___x_4795_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4796_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4794_, v___x_4795_, v___x_4793_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_execPath___boxed(lean_object* v_a_4797_){
_start:
{
lean_object* v_res_4798_; 
v_res_4798_ = l_Lasm_JS_Deno_execPath();
return v_res_4798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chdir(lean_object* v_directory_4807_){
_start:
{
uint8_t v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___y_4813_; 
v___x_4809_ = 0;
v___x_4810_ = lean_unsigned_to_nat(1u);
v___x_4811_ = ((lean_object*)(l_Lasm_JS_Deno_chdir___closed__2));
if (lean_obj_tag(v_directory_4807_) == 0)
{
lean_object* v_value_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
v_value_4818_ = lean_ctor_get(v_directory_4807_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v_directory_4807_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v_directory_4807_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_value_4818_);
lean_dec(v_directory_4807_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
lean_ctor_set_tag(v___x_4820_, 4);
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_value_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
v___y_4813_ = v___x_4823_;
goto v___jp_4812_;
}
}
}
else
{
lean_object* v_value_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
v_value_4826_ = lean_ctor_get(v_directory_4807_, 0);
lean_inc(v_value_4826_);
lean_dec_ref_known(v_directory_4807_, 1);
v___x_4827_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4828_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4828_, 0, v_value_4826_);
lean_ctor_set(v___x_4828_, 1, v___x_4827_);
v___y_4813_ = v___x_4828_;
goto v___jp_4812_;
}
v___jp_4812_:
{
lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4814_ = lean_mk_empty_array_with_capacity(v___x_4810_);
v___x_4815_ = lean_array_push(v___x_4814_, v___y_4813_);
v___x_4816_ = l_Lasm_JS_Web_Support_args(v___x_4815_);
v___x_4817_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4811_, v___x_4816_, v___x_4809_);
return v___x_4817_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chdir___boxed(lean_object* v_directory_4829_, lean_object* v_a_4830_){
_start:
{
lean_object* v_res_4831_; 
v_res_4831_ = l_Lasm_JS_Deno_chdir(v_directory_4829_);
return v_res_4831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cwd(){
_start:
{
uint8_t v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4841_ = 0;
v___x_4842_ = ((lean_object*)(l_Lasm_JS_Deno_cwd___closed__2));
v___x_4843_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4844_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4842_, v___x_4843_, v___x_4841_);
return v___x_4844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cwd___boxed(lean_object* v_a_4845_){
_start:
{
lean_object* v_res_4846_; 
v_res_4846_ = l_Lasm_JS_Deno_cwd();
return v_res_4846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_addSignalListener(uint8_t v_signal_4855_, lean_object* v_handler_4856_){
_start:
{
uint8_t v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___y_4862_; 
v___x_4858_ = 0;
v___x_4859_ = lean_unsigned_to_nat(2u);
v___x_4860_ = ((lean_object*)(l_Lasm_JS_Deno_addSignalListener___closed__2));
switch(v_signal_4855_)
{
case 0:
{
lean_object* v___x_4870_; 
v___x_4870_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1));
v___y_4862_ = v___x_4870_;
goto v___jp_4861_;
}
case 1:
{
lean_object* v___x_4871_; 
v___x_4871_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3));
v___y_4862_ = v___x_4871_;
goto v___jp_4861_;
}
case 2:
{
lean_object* v___x_4872_; 
v___x_4872_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5));
v___y_4862_ = v___x_4872_;
goto v___jp_4861_;
}
case 3:
{
lean_object* v___x_4873_; 
v___x_4873_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7));
v___y_4862_ = v___x_4873_;
goto v___jp_4861_;
}
case 4:
{
lean_object* v___x_4874_; 
v___x_4874_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9));
v___y_4862_ = v___x_4874_;
goto v___jp_4861_;
}
case 5:
{
lean_object* v___x_4875_; 
v___x_4875_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11));
v___y_4862_ = v___x_4875_;
goto v___jp_4861_;
}
case 6:
{
lean_object* v___x_4876_; 
v___x_4876_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13));
v___y_4862_ = v___x_4876_;
goto v___jp_4861_;
}
case 7:
{
lean_object* v___x_4877_; 
v___x_4877_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15));
v___y_4862_ = v___x_4877_;
goto v___jp_4861_;
}
case 8:
{
lean_object* v___x_4878_; 
v___x_4878_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17));
v___y_4862_ = v___x_4878_;
goto v___jp_4861_;
}
case 9:
{
lean_object* v___x_4879_; 
v___x_4879_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19));
v___y_4862_ = v___x_4879_;
goto v___jp_4861_;
}
case 10:
{
lean_object* v___x_4880_; 
v___x_4880_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21));
v___y_4862_ = v___x_4880_;
goto v___jp_4861_;
}
case 11:
{
lean_object* v___x_4881_; 
v___x_4881_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23));
v___y_4862_ = v___x_4881_;
goto v___jp_4861_;
}
case 12:
{
lean_object* v___x_4882_; 
v___x_4882_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25));
v___y_4862_ = v___x_4882_;
goto v___jp_4861_;
}
case 13:
{
lean_object* v___x_4883_; 
v___x_4883_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27));
v___y_4862_ = v___x_4883_;
goto v___jp_4861_;
}
case 14:
{
lean_object* v___x_4884_; 
v___x_4884_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29));
v___y_4862_ = v___x_4884_;
goto v___jp_4861_;
}
case 15:
{
lean_object* v___x_4885_; 
v___x_4885_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31));
v___y_4862_ = v___x_4885_;
goto v___jp_4861_;
}
case 16:
{
lean_object* v___x_4886_; 
v___x_4886_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33));
v___y_4862_ = v___x_4886_;
goto v___jp_4861_;
}
case 17:
{
lean_object* v___x_4887_; 
v___x_4887_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35));
v___y_4862_ = v___x_4887_;
goto v___jp_4861_;
}
case 18:
{
lean_object* v___x_4888_; 
v___x_4888_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37));
v___y_4862_ = v___x_4888_;
goto v___jp_4861_;
}
case 19:
{
lean_object* v___x_4889_; 
v___x_4889_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39));
v___y_4862_ = v___x_4889_;
goto v___jp_4861_;
}
case 20:
{
lean_object* v___x_4890_; 
v___x_4890_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41));
v___y_4862_ = v___x_4890_;
goto v___jp_4861_;
}
case 21:
{
lean_object* v___x_4891_; 
v___x_4891_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43));
v___y_4862_ = v___x_4891_;
goto v___jp_4861_;
}
case 22:
{
lean_object* v___x_4892_; 
v___x_4892_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45));
v___y_4862_ = v___x_4892_;
goto v___jp_4861_;
}
case 23:
{
lean_object* v___x_4893_; 
v___x_4893_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47));
v___y_4862_ = v___x_4893_;
goto v___jp_4861_;
}
case 24:
{
lean_object* v___x_4894_; 
v___x_4894_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49));
v___y_4862_ = v___x_4894_;
goto v___jp_4861_;
}
case 25:
{
lean_object* v___x_4895_; 
v___x_4895_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51));
v___y_4862_ = v___x_4895_;
goto v___jp_4861_;
}
case 26:
{
lean_object* v___x_4896_; 
v___x_4896_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53));
v___y_4862_ = v___x_4896_;
goto v___jp_4861_;
}
case 27:
{
lean_object* v___x_4897_; 
v___x_4897_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55));
v___y_4862_ = v___x_4897_;
goto v___jp_4861_;
}
case 28:
{
lean_object* v___x_4898_; 
v___x_4898_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57));
v___y_4862_ = v___x_4898_;
goto v___jp_4861_;
}
case 29:
{
lean_object* v___x_4899_; 
v___x_4899_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59));
v___y_4862_ = v___x_4899_;
goto v___jp_4861_;
}
case 30:
{
lean_object* v___x_4900_; 
v___x_4900_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61));
v___y_4862_ = v___x_4900_;
goto v___jp_4861_;
}
case 31:
{
lean_object* v___x_4901_; 
v___x_4901_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63));
v___y_4862_ = v___x_4901_;
goto v___jp_4861_;
}
case 32:
{
lean_object* v___x_4902_; 
v___x_4902_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65));
v___y_4862_ = v___x_4902_;
goto v___jp_4861_;
}
case 33:
{
lean_object* v___x_4903_; 
v___x_4903_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67));
v___y_4862_ = v___x_4903_;
goto v___jp_4861_;
}
case 34:
{
lean_object* v___x_4904_; 
v___x_4904_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69));
v___y_4862_ = v___x_4904_;
goto v___jp_4861_;
}
default: 
{
lean_object* v___x_4905_; 
v___x_4905_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71));
v___y_4862_ = v___x_4905_;
goto v___jp_4861_;
}
}
v___jp_4861_:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4863_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4864_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4864_, 0, v_handler_4856_);
lean_ctor_set(v___x_4864_, 1, v___x_4863_);
v___x_4865_ = lean_mk_empty_array_with_capacity(v___x_4859_);
lean_inc(v___y_4862_);
v___x_4866_ = lean_array_push(v___x_4865_, v___y_4862_);
v___x_4867_ = lean_array_push(v___x_4866_, v___x_4864_);
v___x_4868_ = l_Lasm_JS_Web_Support_args(v___x_4867_);
v___x_4869_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4860_, v___x_4868_, v___x_4858_);
return v___x_4869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_addSignalListener___boxed(lean_object* v_signal_4906_, lean_object* v_handler_4907_, lean_object* v_a_4908_){
_start:
{
uint8_t v_signal_boxed_4909_; lean_object* v_res_4910_; 
v_signal_boxed_4909_ = lean_unbox(v_signal_4906_);
v_res_4910_ = l_Lasm_JS_Deno_addSignalListener(v_signal_boxed_4909_, v_handler_4907_);
return v_res_4910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSignalListener(uint8_t v_signal_4919_, lean_object* v_handler_4920_){
_start:
{
uint8_t v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___y_4926_; 
v___x_4922_ = 0;
v___x_4923_ = lean_unsigned_to_nat(2u);
v___x_4924_ = ((lean_object*)(l_Lasm_JS_Deno_removeSignalListener___closed__2));
switch(v_signal_4919_)
{
case 0:
{
lean_object* v___x_4934_; 
v___x_4934_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1));
v___y_4926_ = v___x_4934_;
goto v___jp_4925_;
}
case 1:
{
lean_object* v___x_4935_; 
v___x_4935_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3));
v___y_4926_ = v___x_4935_;
goto v___jp_4925_;
}
case 2:
{
lean_object* v___x_4936_; 
v___x_4936_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5));
v___y_4926_ = v___x_4936_;
goto v___jp_4925_;
}
case 3:
{
lean_object* v___x_4937_; 
v___x_4937_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7));
v___y_4926_ = v___x_4937_;
goto v___jp_4925_;
}
case 4:
{
lean_object* v___x_4938_; 
v___x_4938_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9));
v___y_4926_ = v___x_4938_;
goto v___jp_4925_;
}
case 5:
{
lean_object* v___x_4939_; 
v___x_4939_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11));
v___y_4926_ = v___x_4939_;
goto v___jp_4925_;
}
case 6:
{
lean_object* v___x_4940_; 
v___x_4940_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13));
v___y_4926_ = v___x_4940_;
goto v___jp_4925_;
}
case 7:
{
lean_object* v___x_4941_; 
v___x_4941_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15));
v___y_4926_ = v___x_4941_;
goto v___jp_4925_;
}
case 8:
{
lean_object* v___x_4942_; 
v___x_4942_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17));
v___y_4926_ = v___x_4942_;
goto v___jp_4925_;
}
case 9:
{
lean_object* v___x_4943_; 
v___x_4943_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19));
v___y_4926_ = v___x_4943_;
goto v___jp_4925_;
}
case 10:
{
lean_object* v___x_4944_; 
v___x_4944_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21));
v___y_4926_ = v___x_4944_;
goto v___jp_4925_;
}
case 11:
{
lean_object* v___x_4945_; 
v___x_4945_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23));
v___y_4926_ = v___x_4945_;
goto v___jp_4925_;
}
case 12:
{
lean_object* v___x_4946_; 
v___x_4946_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25));
v___y_4926_ = v___x_4946_;
goto v___jp_4925_;
}
case 13:
{
lean_object* v___x_4947_; 
v___x_4947_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27));
v___y_4926_ = v___x_4947_;
goto v___jp_4925_;
}
case 14:
{
lean_object* v___x_4948_; 
v___x_4948_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29));
v___y_4926_ = v___x_4948_;
goto v___jp_4925_;
}
case 15:
{
lean_object* v___x_4949_; 
v___x_4949_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31));
v___y_4926_ = v___x_4949_;
goto v___jp_4925_;
}
case 16:
{
lean_object* v___x_4950_; 
v___x_4950_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33));
v___y_4926_ = v___x_4950_;
goto v___jp_4925_;
}
case 17:
{
lean_object* v___x_4951_; 
v___x_4951_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35));
v___y_4926_ = v___x_4951_;
goto v___jp_4925_;
}
case 18:
{
lean_object* v___x_4952_; 
v___x_4952_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37));
v___y_4926_ = v___x_4952_;
goto v___jp_4925_;
}
case 19:
{
lean_object* v___x_4953_; 
v___x_4953_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39));
v___y_4926_ = v___x_4953_;
goto v___jp_4925_;
}
case 20:
{
lean_object* v___x_4954_; 
v___x_4954_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41));
v___y_4926_ = v___x_4954_;
goto v___jp_4925_;
}
case 21:
{
lean_object* v___x_4955_; 
v___x_4955_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43));
v___y_4926_ = v___x_4955_;
goto v___jp_4925_;
}
case 22:
{
lean_object* v___x_4956_; 
v___x_4956_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45));
v___y_4926_ = v___x_4956_;
goto v___jp_4925_;
}
case 23:
{
lean_object* v___x_4957_; 
v___x_4957_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47));
v___y_4926_ = v___x_4957_;
goto v___jp_4925_;
}
case 24:
{
lean_object* v___x_4958_; 
v___x_4958_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49));
v___y_4926_ = v___x_4958_;
goto v___jp_4925_;
}
case 25:
{
lean_object* v___x_4959_; 
v___x_4959_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51));
v___y_4926_ = v___x_4959_;
goto v___jp_4925_;
}
case 26:
{
lean_object* v___x_4960_; 
v___x_4960_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53));
v___y_4926_ = v___x_4960_;
goto v___jp_4925_;
}
case 27:
{
lean_object* v___x_4961_; 
v___x_4961_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55));
v___y_4926_ = v___x_4961_;
goto v___jp_4925_;
}
case 28:
{
lean_object* v___x_4962_; 
v___x_4962_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57));
v___y_4926_ = v___x_4962_;
goto v___jp_4925_;
}
case 29:
{
lean_object* v___x_4963_; 
v___x_4963_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59));
v___y_4926_ = v___x_4963_;
goto v___jp_4925_;
}
case 30:
{
lean_object* v___x_4964_; 
v___x_4964_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61));
v___y_4926_ = v___x_4964_;
goto v___jp_4925_;
}
case 31:
{
lean_object* v___x_4965_; 
v___x_4965_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63));
v___y_4926_ = v___x_4965_;
goto v___jp_4925_;
}
case 32:
{
lean_object* v___x_4966_; 
v___x_4966_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65));
v___y_4926_ = v___x_4966_;
goto v___jp_4925_;
}
case 33:
{
lean_object* v___x_4967_; 
v___x_4967_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67));
v___y_4926_ = v___x_4967_;
goto v___jp_4925_;
}
case 34:
{
lean_object* v___x_4968_; 
v___x_4968_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69));
v___y_4926_ = v___x_4968_;
goto v___jp_4925_;
}
default: 
{
lean_object* v___x_4969_; 
v___x_4969_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71));
v___y_4926_ = v___x_4969_;
goto v___jp_4925_;
}
}
v___jp_4925_:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; 
v___x_4927_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4928_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4928_, 0, v_handler_4920_);
lean_ctor_set(v___x_4928_, 1, v___x_4927_);
v___x_4929_ = lean_mk_empty_array_with_capacity(v___x_4923_);
lean_inc(v___y_4926_);
v___x_4930_ = lean_array_push(v___x_4929_, v___y_4926_);
v___x_4931_ = lean_array_push(v___x_4930_, v___x_4928_);
v___x_4932_ = l_Lasm_JS_Web_Support_args(v___x_4931_);
v___x_4933_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4924_, v___x_4932_, v___x_4922_);
return v___x_4933_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSignalListener___boxed(lean_object* v_signal_4970_, lean_object* v_handler_4971_, lean_object* v_a_4972_){
_start:
{
uint8_t v_signal_boxed_4973_; lean_object* v_res_4974_; 
v_signal_boxed_4973_ = lean_unbox(v_signal_4970_);
v_res_4974_ = l_Lasm_JS_Deno_removeSignalListener(v_signal_boxed_4973_, v_handler_4971_);
return v_res_4974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_refTimer(lean_object* v_id_4983_){
_start:
{
uint8_t v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___y_4989_; 
v___x_4985_ = 0;
v___x_4986_ = lean_unsigned_to_nat(1u);
v___x_4987_ = ((lean_object*)(l_Lasm_JS_Deno_refTimer___closed__2));
if (lean_obj_tag(v_id_4983_) == 0)
{
double v_value_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5001_; 
v_value_4994_ = lean_ctor_get_float(v_id_4983_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v_id_4983_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4996_ = v_id_4983_;
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
else
{
lean_dec(v_id_4983_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4999_; 
if (v_isShared_4997_ == 0)
{
lean_ctor_set_tag(v___x_4996_, 3);
v___x_4999_ = v___x_4996_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_5000_, 0, v_value_4994_);
v___x_4999_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
v___y_4989_ = v___x_4999_;
goto v___jp_4988_;
}
}
}
else
{
lean_object* v_value_5002_; 
v_value_5002_ = lean_ctor_get(v_id_4983_, 0);
lean_inc(v_value_5002_);
lean_dec_ref_known(v_id_4983_, 1);
v___y_4989_ = v_value_5002_;
goto v___jp_4988_;
}
v___jp_4988_:
{
lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4990_ = lean_mk_empty_array_with_capacity(v___x_4986_);
v___x_4991_ = lean_array_push(v___x_4990_, v___y_4989_);
v___x_4992_ = l_Lasm_JS_Web_Support_args(v___x_4991_);
v___x_4993_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4987_, v___x_4992_, v___x_4985_);
return v___x_4993_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_refTimer___boxed(lean_object* v_id_5003_, lean_object* v_a_5004_){
_start:
{
lean_object* v_res_5005_; 
v_res_5005_ = l_Lasm_JS_Deno_refTimer(v_id_5003_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_unrefTimer(lean_object* v_id_5014_){
_start:
{
uint8_t v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___y_5020_; 
v___x_5016_ = 0;
v___x_5017_ = lean_unsigned_to_nat(1u);
v___x_5018_ = ((lean_object*)(l_Lasm_JS_Deno_unrefTimer___closed__2));
if (lean_obj_tag(v_id_5014_) == 0)
{
double v_value_5025_; lean_object* v___x_5027_; uint8_t v_isShared_5028_; uint8_t v_isSharedCheck_5032_; 
v_value_5025_ = lean_ctor_get_float(v_id_5014_, 0);
v_isSharedCheck_5032_ = !lean_is_exclusive(v_id_5014_);
if (v_isSharedCheck_5032_ == 0)
{
v___x_5027_ = v_id_5014_;
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
else
{
lean_dec(v_id_5014_);
v___x_5027_ = lean_box(0);
v_isShared_5028_ = v_isSharedCheck_5032_;
goto v_resetjp_5026_;
}
v_resetjp_5026_:
{
lean_object* v___x_5030_; 
if (v_isShared_5028_ == 0)
{
lean_ctor_set_tag(v___x_5027_, 3);
v___x_5030_ = v___x_5027_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5031_; 
v_reuseFailAlloc_5031_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_5031_, 0, v_value_5025_);
v___x_5030_ = v_reuseFailAlloc_5031_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
v___y_5020_ = v___x_5030_;
goto v___jp_5019_;
}
}
}
else
{
lean_object* v_value_5033_; 
v_value_5033_ = lean_ctor_get(v_id_5014_, 0);
lean_inc(v_value_5033_);
lean_dec_ref_known(v_id_5014_, 1);
v___y_5020_ = v_value_5033_;
goto v___jp_5019_;
}
v___jp_5019_:
{
lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5021_ = lean_mk_empty_array_with_capacity(v___x_5017_);
v___x_5022_ = lean_array_push(v___x_5021_, v___y_5020_);
v___x_5023_ = l_Lasm_JS_Web_Support_args(v___x_5022_);
v___x_5024_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_5018_, v___x_5023_, v___x_5016_);
return v___x_5024_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_unrefTimer___boxed(lean_object* v_id_5034_, lean_object* v_a_5035_){
_start:
{
lean_object* v_res_5036_; 
v_res_5036_ = l_Lasm_JS_Deno_unrefTimer(v_id_5034_);
return v_res_5036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(lean_object* v_b_5037_, lean_object* v_args_5038_, uint8_t v_await_5039_){
_start:
{
uint64_t v___y_5042_; uint64_t v___y_5043_; uint64_t v___x_5086_; uint64_t v___y_5088_; 
v___x_5086_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_5039_ == 0)
{
uint64_t v___x_5093_; 
v___x_5093_ = 0ULL;
v___y_5088_ = v___x_5093_;
goto v___jp_5087_;
}
else
{
uint64_t v___x_5094_; 
v___x_5094_ = 2ULL;
v___y_5088_ = v___x_5094_;
goto v___jp_5087_;
}
v___jp_5041_:
{
uint64_t v_flags_5044_; uint32_t v___x_5045_; lean_object* v___x_5046_; uint32_t v___x_5047_; lean_object* v___x_5048_; 
v_flags_5044_ = lean_uint64_lor(v___y_5042_, v___y_5043_);
v___x_5045_ = 214;
v___x_5046_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5037_, v_args_5038_);
v___x_5047_ = 0;
v___x_5048_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5045_, v_flags_5044_, v___x_5046_, v___x_5047_);
lean_dec(v___x_5046_);
if (lean_obj_tag(v___x_5048_) == 0)
{
if (lean_obj_tag(v___x_5048_) == 0)
{
lean_object* v_a_5049_; lean_object* v___x_5050_; 
v_a_5049_ = lean_ctor_get(v___x_5048_, 0);
lean_inc(v_a_5049_);
lean_dec_ref_known(v___x_5048_, 1);
v___x_5050_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5049_);
lean_dec(v_a_5049_);
if (lean_obj_tag(v___x_5050_) == 0)
{
lean_object* v_a_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; 
v_a_5051_ = lean_ctor_get(v___x_5050_, 0);
lean_inc(v_a_5051_);
lean_dec_ref_known(v___x_5050_, 1);
v___x_5052_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5037_);
v___x_5053_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v___x_5052_, v_a_5051_);
lean_dec_ref(v___x_5052_);
return v___x_5053_;
}
else
{
lean_object* v_a_5054_; lean_object* v___x_5056_; uint8_t v_isShared_5057_; uint8_t v_isSharedCheck_5061_; 
v_a_5054_ = lean_ctor_get(v___x_5050_, 0);
v_isSharedCheck_5061_ = !lean_is_exclusive(v___x_5050_);
if (v_isSharedCheck_5061_ == 0)
{
v___x_5056_ = v___x_5050_;
v_isShared_5057_ = v_isSharedCheck_5061_;
goto v_resetjp_5055_;
}
else
{
lean_inc(v_a_5054_);
lean_dec(v___x_5050_);
v___x_5056_ = lean_box(0);
v_isShared_5057_ = v_isSharedCheck_5061_;
goto v_resetjp_5055_;
}
v_resetjp_5055_:
{
lean_object* v___x_5059_; 
if (v_isShared_5057_ == 0)
{
v___x_5059_ = v___x_5056_;
goto v_reusejp_5058_;
}
else
{
lean_object* v_reuseFailAlloc_5060_; 
v_reuseFailAlloc_5060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5060_, 0, v_a_5054_);
v___x_5059_ = v_reuseFailAlloc_5060_;
goto v_reusejp_5058_;
}
v_reusejp_5058_:
{
return v___x_5059_;
}
}
}
}
else
{
lean_object* v_a_5062_; lean_object* v___x_5064_; uint8_t v_isShared_5065_; uint8_t v_isSharedCheck_5069_; 
v_a_5062_ = lean_ctor_get(v___x_5048_, 0);
v_isSharedCheck_5069_ = !lean_is_exclusive(v___x_5048_);
if (v_isSharedCheck_5069_ == 0)
{
v___x_5064_ = v___x_5048_;
v_isShared_5065_ = v_isSharedCheck_5069_;
goto v_resetjp_5063_;
}
else
{
lean_inc(v_a_5062_);
lean_dec(v___x_5048_);
v___x_5064_ = lean_box(0);
v_isShared_5065_ = v_isSharedCheck_5069_;
goto v_resetjp_5063_;
}
v_resetjp_5063_:
{
lean_object* v___x_5067_; 
if (v_isShared_5065_ == 0)
{
lean_ctor_set_tag(v___x_5064_, 1);
v___x_5067_ = v___x_5064_;
goto v_reusejp_5066_;
}
else
{
lean_object* v_reuseFailAlloc_5068_; 
v_reuseFailAlloc_5068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5068_, 0, v_a_5062_);
v___x_5067_ = v_reuseFailAlloc_5068_;
goto v_reusejp_5066_;
}
v_reusejp_5066_:
{
return v___x_5067_;
}
}
}
}
else
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5085_; 
v_a_5070_ = lean_ctor_get(v___x_5048_, 0);
v_isSharedCheck_5085_ = !lean_is_exclusive(v___x_5048_);
if (v_isSharedCheck_5085_ == 0)
{
v___x_5072_ = v___x_5048_;
v_isShared_5073_ = v_isSharedCheck_5085_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5048_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5085_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5083_; 
v___x_5074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_5075_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5037_);
v___x_5076_ = lean_string_append(v___x_5074_, v___x_5075_);
lean_dec_ref(v___x_5075_);
v___x_5077_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_5078_ = lean_string_append(v___x_5076_, v___x_5077_);
v___x_5079_ = lean_io_error_to_string(v_a_5070_);
v___x_5080_ = lean_string_append(v___x_5078_, v___x_5079_);
lean_dec_ref(v___x_5079_);
v___x_5081_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5081_, 0, v___x_5080_);
if (v_isShared_5073_ == 0)
{
lean_ctor_set(v___x_5072_, 0, v___x_5081_);
v___x_5083_ = v___x_5072_;
goto v_reusejp_5082_;
}
else
{
lean_object* v_reuseFailAlloc_5084_; 
v_reuseFailAlloc_5084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5084_, 0, v___x_5081_);
v___x_5083_ = v_reuseFailAlloc_5084_;
goto v_reusejp_5082_;
}
v_reusejp_5082_:
{
return v___x_5083_;
}
}
}
}
v___jp_5087_:
{
uint8_t v_construct_5089_; uint64_t v___x_5090_; 
v_construct_5089_ = lean_ctor_get_uint8(v_b_5037_, sizeof(void*)*4);
v___x_5090_ = lean_uint64_lor(v___x_5086_, v___y_5088_);
if (v_construct_5089_ == 0)
{
uint64_t v___x_5091_; 
v___x_5091_ = 0ULL;
v___y_5042_ = v___x_5090_;
v___y_5043_ = v___x_5091_;
goto v___jp_5041_;
}
else
{
uint64_t v___x_5092_; 
v___x_5092_ = 4ULL;
v___y_5042_ = v___x_5090_;
v___y_5043_ = v___x_5092_;
goto v___jp_5041_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0___boxed(lean_object* v_b_5095_, lean_object* v_args_5096_, lean_object* v_await_5097_, lean_object* v_a_5098_){
_start:
{
uint8_t v_await_boxed_5099_; lean_object* v_res_5100_; 
v_await_boxed_5099_ = lean_unbox(v_await_5097_);
v_res_5100_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(v_b_5095_, v_args_5096_, v_await_boxed_5099_);
lean_dec_ref(v_b_5095_);
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_uid(){
_start:
{
uint8_t v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
v___x_5110_ = 0;
v___x_5111_ = ((lean_object*)(l_Lasm_JS_Deno_uid___closed__2));
v___x_5112_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_5113_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(v___x_5111_, v___x_5112_, v___x_5110_);
return v___x_5113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_uid___boxed(lean_object* v_a_5114_){
_start:
{
lean_object* v_res_5115_; 
v_res_5115_ = l_Lasm_JS_Deno_uid();
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_gid(){
_start:
{
uint8_t v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; 
v___x_5125_ = 0;
v___x_5126_ = ((lean_object*)(l_Lasm_JS_Deno_gid___closed__2));
v___x_5127_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_5128_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(v___x_5126_, v___x_5127_, v___x_5125_);
return v___x_5128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_gid___boxed(lean_object* v_a_5129_){
_start:
{
lean_object* v_res_5130_; 
v_res_5130_ = l_Lasm_JS_Deno_gid();
return v_res_5130_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Url(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Runtime(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instInhabitedSignal_default = _init_l_Lasm_JS_Deno_instInhabitedSignal_default();
l_Lasm_JS_Deno_instInhabitedSignal = _init_l_Lasm_JS_Deno_instInhabitedSignal();
l_Lasm_JS_Deno_instInhabitedBuildArch_default = _init_l_Lasm_JS_Deno_instInhabitedBuildArch_default();
l_Lasm_JS_Deno_instInhabitedBuildArch = _init_l_Lasm_JS_Deno_instInhabitedBuildArch();
l_Lasm_JS_Deno_instInhabitedBuildOs_default = _init_l_Lasm_JS_Deno_instInhabitedBuildOs_default();
l_Lasm_JS_Deno_instInhabitedBuildOs = _init_l_Lasm_JS_Deno_instInhabitedBuildOs();
l_Lasm_JS_Deno_instFromJSMemoryUsage = _init_l_Lasm_JS_Deno_instFromJSMemoryUsage();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSMemoryUsage);
l_Lasm_JS_Deno_instFromJSSystemMemoryInfo = _init_l_Lasm_JS_Deno_instFromJSSystemMemoryInfo();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo);
l_Lasm_JS_Deno_instFromJSBuild = _init_l_Lasm_JS_Deno_instFromJSBuild();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSBuild);
l_Lasm_JS_Deno_instFromJSVersion = _init_l_Lasm_JS_Deno_instFromJSVersion();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSVersion);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
