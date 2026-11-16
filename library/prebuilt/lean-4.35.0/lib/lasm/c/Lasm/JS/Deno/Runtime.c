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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0(lean_object* v___x_2639_, lean_object* v___x_2640_, lean_object* v___x_2641_, lean_object* v___x_2642_, lean_object* v___x_2643_, lean_object* v_d_2644_){
_start:
{
lean_object* v___x_2645_; lean_object* v___x_2646_; 
v___x_2645_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0));
lean_inc_ref(v___x_2639_);
v___x_2646_ = l_Lasm_JS_readField___redArg(v___x_2639_, v_d_2644_, v___x_2645_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2654_; 
lean_dec_ref(v___x_2643_);
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2641_);
lean_dec_ref(v___x_2640_);
lean_dec_ref(v___x_2639_);
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2649_ = v___x_2646_;
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_a_2647_);
lean_dec(v___x_2646_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2654_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2652_; 
if (v_isShared_2650_ == 0)
{
v___x_2652_ = v___x_2649_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_a_2647_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
else
{
lean_object* v_a_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v_a_2655_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2646_, 1);
v___x_2656_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1));
v___x_2657_ = l_Lasm_JS_readField___redArg(v___x_2640_, v_d_2644_, v___x_2656_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
lean_dec(v_a_2655_);
lean_dec_ref(v___x_2643_);
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2641_);
lean_dec_ref(v___x_2639_);
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2657_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2657_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v_a_2666_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2666_);
lean_dec_ref_known(v___x_2657_, 1);
v___x_2667_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2));
v___x_2668_ = l_Lasm_JS_readField___redArg(v___x_2641_, v_d_2644_, v___x_2667_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
lean_dec(v_a_2666_);
lean_dec(v_a_2655_);
lean_dec_ref(v___x_2643_);
lean_dec_ref(v___x_2642_);
lean_dec_ref(v___x_2639_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2668_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2668_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v_a_2677_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2677_);
lean_dec_ref_known(v___x_2668_, 1);
v___x_2678_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3));
v___x_2679_ = l_Lasm_JS_readField___redArg(v___x_2642_, v_d_2644_, v___x_2678_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec(v_a_2677_);
lean_dec(v_a_2666_);
lean_dec(v_a_2655_);
lean_dec_ref(v___x_2643_);
lean_dec_ref(v___x_2639_);
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v_a_2688_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v___x_2679_, 1);
v___x_2689_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4));
v___x_2690_ = l_Lasm_JS_readField___redArg(v___x_2639_, v_d_2644_, v___x_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec(v_a_2688_);
lean_dec(v_a_2677_);
lean_dec(v_a_2666_);
lean_dec(v_a_2655_);
lean_dec_ref(v___x_2643_);
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v_a_2699_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2699_);
lean_dec_ref_known(v___x_2690_, 1);
v___x_2700_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5));
v___x_2701_ = l_Lasm_JS_readField___redArg(v___x_2643_, v_d_2644_, v___x_2700_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
lean_dec(v_a_2699_);
lean_dec(v_a_2688_);
lean_dec(v_a_2677_);
lean_dec(v_a_2666_);
lean_dec(v_a_2655_);
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2721_; 
v_a_2710_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2712_ = v___x_2701_;
v_isShared_2713_ = v_isSharedCheck_2721_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2701_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2721_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; uint8_t v___x_2715_; uint8_t v___x_2716_; uint8_t v___x_2717_; lean_object* v___x_2719_; 
v___x_2714_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_2714_, 0, v_a_2655_);
lean_ctor_set(v___x_2714_, 1, v_a_2699_);
lean_ctor_set(v___x_2714_, 2, v_a_2710_);
v___x_2715_ = lean_unbox(v_a_2666_);
lean_dec(v_a_2666_);
lean_ctor_set_uint8(v___x_2714_, sizeof(void*)*3, v___x_2715_);
v___x_2716_ = lean_unbox(v_a_2677_);
lean_dec(v_a_2677_);
lean_ctor_set_uint8(v___x_2714_, sizeof(void*)*3 + 1, v___x_2716_);
v___x_2717_ = lean_unbox(v_a_2688_);
lean_dec(v_a_2688_);
lean_ctor_set_uint8(v___x_2714_, sizeof(void*)*3 + 2, v___x_2717_);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2714_);
v___x_2719_ = v___x_2712_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSBuild___lam__0___boxed(lean_object* v___x_2722_, lean_object* v___x_2723_, lean_object* v___x_2724_, lean_object* v___x_2725_, lean_object* v___x_2726_, lean_object* v_d_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lasm_JS_Deno_instFromJSBuild___lam__0(v___x_2722_, v___x_2723_, v___x_2724_, v___x_2725_, v___x_2726_, v_d_2727_);
lean_dec(v_d_2727_);
return v_res_2728_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild___closed__0(void){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = l_Lasm_JS_instFromJSString;
v___x_2730_ = l_Lasm_JS_instFromJSOption___redArg(v___x_2729_);
return v___x_2730_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild___closed__1(void){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___f_2736_; 
v___x_2731_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSBuild___closed__0, &l_Lasm_JS_Deno_instFromJSBuild___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSBuild___closed__0);
v___x_2732_ = l_Lasm_JS_instFromJSBool;
v___x_2733_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs));
v___x_2734_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch));
v___x_2735_ = l_Lasm_JS_instFromJSString;
v___f_2736_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2736_, 0, v___x_2735_);
lean_closure_set(v___f_2736_, 1, v___x_2734_);
lean_closure_set(v___f_2736_, 2, v___x_2733_);
lean_closure_set(v___f_2736_, 3, v___x_2732_);
lean_closure_set(v___f_2736_, 4, v___x_2731_);
return v___f_2736_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild___closed__3(void){
_start:
{
uint8_t v___x_2738_; lean_object* v___x_2739_; lean_object* v___f_2740_; lean_object* v___x_2741_; 
v___x_2738_ = 0;
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___closed__2));
v___f_2740_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSBuild___closed__1, &l_Lasm_JS_Deno_instFromJSBuild___closed__1_once, _init_l_Lasm_JS_Deno_instFromJSBuild___closed__1);
v___x_2741_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2741_, 0, v___f_2740_);
lean_ctor_set(v___x_2741_, 1, v___x_2739_);
lean_ctor_set_uint8(v___x_2741_, sizeof(void*)*2, v___x_2738_);
return v___x_2741_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSBuild(void){
_start:
{
lean_object* v___x_2742_; 
v___x_2742_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSBuild___closed__3, &l_Lasm_JS_Deno_instFromJSBuild___closed__3_once, _init_l_Lasm_JS_Deno_instFromJSBuild___closed__3);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0(lean_object* v___x_2746_, lean_object* v_d_2747_){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2748_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0));
lean_inc_ref(v___x_2746_);
v___x_2749_ = l_Lasm_JS_readField___redArg(v___x_2746_, v_d_2747_, v___x_2748_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
lean_dec_ref(v___x_2746_);
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
v___x_2759_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1));
lean_inc_ref(v___x_2746_);
v___x_2760_ = l_Lasm_JS_readField___redArg(v___x_2746_, v_d_2747_, v___x_2759_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2768_; 
lean_dec(v_a_2758_);
lean_dec_ref(v___x_2746_);
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
lean_object* v_a_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v_a_2769_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2769_);
lean_dec_ref_known(v___x_2760_, 1);
v___x_2770_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2));
v___x_2771_ = l_Lasm_JS_readField___redArg(v___x_2746_, v_d_2747_, v___x_2770_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec(v_a_2769_);
lean_dec(v_a_2758_);
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2771_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2771_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2788_; 
v_a_2780_ = lean_ctor_get(v___x_2771_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2782_ = v___x_2771_;
v_isShared_2783_ = v_isSharedCheck_2788_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2771_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2788_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2786_; 
v___x_2784_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2784_, 0, v_a_2758_);
lean_ctor_set(v___x_2784_, 1, v_a_2769_);
lean_ctor_set(v___x_2784_, 2, v_a_2780_);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2784_);
v___x_2786_ = v___x_2782_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___x_2784_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSVersion___lam__0___boxed(lean_object* v___x_2789_, lean_object* v_d_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Lasm_JS_Deno_instFromJSVersion___lam__0(v___x_2789_, v_d_2790_);
lean_dec(v_d_2790_);
return v_res_2791_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSVersion___closed__0(void){
_start:
{
lean_object* v___x_2792_; lean_object* v___f_2793_; 
v___x_2792_ = l_Lasm_JS_instFromJSString;
v___f_2793_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2793_, 0, v___x_2792_);
return v___f_2793_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSVersion___closed__2(void){
_start:
{
uint8_t v___x_2795_; lean_object* v___x_2796_; lean_object* v___f_2797_; lean_object* v___x_2798_; 
v___x_2795_ = 0;
v___x_2796_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___closed__1));
v___f_2797_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSVersion___closed__0, &l_Lasm_JS_Deno_instFromJSVersion___closed__0_once, _init_l_Lasm_JS_Deno_instFromJSVersion___closed__0);
v___x_2798_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2798_, 0, v___f_2797_);
lean_ctor_set(v___x_2798_, 1, v___x_2796_);
lean_ctor_set_uint8(v___x_2798_, sizeof(void*)*2, v___x_2795_);
return v___x_2798_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSVersion(void){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_obj_once(&l_Lasm_JS_Deno_instFromJSVersion___closed__2, &l_Lasm_JS_Deno_instFromJSVersion___closed__2_once, _init_l_Lasm_JS_Deno_instFromJSVersion___closed__2);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_get(lean_object* v_self_2801_, lean_object* v_key_2802_){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2804_ = ((lean_object*)(l_Lasm_JS_Deno_Env_get___closed__0));
v___x_2805_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2805_, 0, v_key_2802_);
v___x_2806_ = lean_unsigned_to_nat(1u);
v___x_2807_ = lean_mk_empty_array_with_capacity(v___x_2806_);
v___x_2808_ = lean_array_push(v___x_2807_, v___x_2805_);
v___x_2809_ = l_Lasm_JS_Web_Support_args(v___x_2808_);
v___x_2810_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0(v_self_2801_, v___x_2804_, v___x_2809_);
return v___x_2810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_get___boxed(lean_object* v_self_2811_, lean_object* v_key_2812_, lean_object* v_a_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_Lasm_JS_Deno_Env_get(v_self_2811_, v_key_2812_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_set(lean_object* v_self_2816_, lean_object* v_key_2817_, lean_object* v_value_2818_){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2820_ = ((lean_object*)(l_Lasm_JS_Deno_Env_set___closed__0));
v___x_2821_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2821_, 0, v_key_2817_);
v___x_2822_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2822_, 0, v_value_2818_);
v___x_2823_ = lean_unsigned_to_nat(2u);
v___x_2824_ = lean_mk_empty_array_with_capacity(v___x_2823_);
v___x_2825_ = lean_array_push(v___x_2824_, v___x_2821_);
v___x_2826_ = lean_array_push(v___x_2825_, v___x_2822_);
v___x_2827_ = l_Lasm_JS_Web_Support_args(v___x_2826_);
v___x_2828_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2816_, v___x_2820_, v___x_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_set___boxed(lean_object* v_self_2829_, lean_object* v_key_2830_, lean_object* v_value_2831_, lean_object* v_a_2832_){
_start:
{
lean_object* v_res_2833_; 
v_res_2833_ = l_Lasm_JS_Deno_Env_set(v_self_2829_, v_key_2830_, v_value_2831_);
return v_res_2833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_delete(lean_object* v_self_2835_, lean_object* v_key_2836_){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2838_ = ((lean_object*)(l_Lasm_JS_Deno_Env_delete___closed__0));
v___x_2839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2839_, 0, v_key_2836_);
v___x_2840_ = lean_unsigned_to_nat(1u);
v___x_2841_ = lean_mk_empty_array_with_capacity(v___x_2840_);
v___x_2842_ = lean_array_push(v___x_2841_, v___x_2839_);
v___x_2843_ = l_Lasm_JS_Web_Support_args(v___x_2842_);
v___x_2844_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2835_, v___x_2838_, v___x_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_delete___boxed(lean_object* v_self_2845_, lean_object* v_key_2846_, lean_object* v_a_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lasm_JS_Deno_Env_delete(v_self_2845_, v_key_2846_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_has(lean_object* v_self_2850_, lean_object* v_key_2851_){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Deno_Env_has___closed__0));
v___x_2854_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2854_, 0, v_key_2851_);
v___x_2855_ = lean_unsigned_to_nat(1u);
v___x_2856_ = lean_mk_empty_array_with_capacity(v___x_2855_);
v___x_2857_ = lean_array_push(v___x_2856_, v___x_2854_);
v___x_2858_ = l_Lasm_JS_Web_Support_args(v___x_2857_);
v___x_2859_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_2850_, v___x_2853_, v___x_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_has___boxed(lean_object* v_self_2860_, lean_object* v_key_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_Lasm_JS_Deno_Env_has(v_self_2860_, v_key_2861_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2866_, size_t v_i_2867_, lean_object* v_bs_2868_){
_start:
{
uint8_t v___x_2869_; 
v___x_2869_ = lean_usize_dec_lt(v_i_2867_, v_sz_2866_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2870_, 0, v_bs_2868_);
return v___x_2870_;
}
else
{
lean_object* v_v_2871_; lean_object* v_snd_2872_; 
v_v_2871_ = lean_array_uget(v_bs_2868_, v_i_2867_);
v_snd_2872_ = lean_ctor_get(v_v_2871_, 1);
if (lean_obj_tag(v_snd_2872_) == 4)
{
lean_object* v_fst_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2887_; 
lean_inc_ref(v_snd_2872_);
v_fst_2873_ = lean_ctor_get(v_v_2871_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_v_2871_);
if (v_isSharedCheck_2887_ == 0)
{
lean_object* v_unused_2888_; 
v_unused_2888_ = lean_ctor_get(v_v_2871_, 1);
lean_dec(v_unused_2888_);
v___x_2875_ = v_v_2871_;
v_isShared_2876_ = v_isSharedCheck_2887_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_fst_2873_);
lean_dec(v_v_2871_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2887_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v_s_2877_; lean_object* v___x_2878_; lean_object* v_bs_x27_2879_; lean_object* v___x_2881_; 
v_s_2877_ = lean_ctor_get(v_snd_2872_, 0);
lean_inc_ref(v_s_2877_);
lean_dec_ref_known(v_snd_2872_, 1);
v___x_2878_ = lean_unsigned_to_nat(0u);
v_bs_x27_2879_ = lean_array_uset(v_bs_2868_, v_i_2867_, v___x_2878_);
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 1, v_s_2877_);
v___x_2881_ = v___x_2875_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_fst_2873_);
lean_ctor_set(v_reuseFailAlloc_2886_, 1, v_s_2877_);
v___x_2881_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
size_t v___x_2882_; size_t v___x_2883_; lean_object* v___x_2884_; 
v___x_2882_ = ((size_t)1ULL);
v___x_2883_ = lean_usize_add(v_i_2867_, v___x_2882_);
v___x_2884_ = lean_array_uset(v_bs_x27_2879_, v_i_2867_, v___x_2881_);
v_i_2867_ = v___x_2883_;
v_bs_2868_ = v___x_2884_;
goto _start;
}
}
}
else
{
lean_object* v_fst_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
lean_dec_ref(v_bs_2868_);
v_fst_2889_ = lean_ctor_get(v_v_2871_, 0);
lean_inc(v_fst_2889_);
lean_dec(v_v_2871_);
v___x_2890_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2891_ = lean_string_append(v___x_2890_, v_fst_2889_);
lean_dec(v_fst_2889_);
v___x_2892_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2893_ = lean_string_append(v___x_2891_, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2895_, lean_object* v_i_2896_, lean_object* v_bs_2897_){
_start:
{
size_t v_sz_boxed_2898_; size_t v_i_boxed_2899_; lean_object* v_res_2900_; 
v_sz_boxed_2898_ = lean_unbox_usize(v_sz_2895_);
lean_dec(v_sz_2895_);
v_i_boxed_2899_ = lean_unbox_usize(v_i_2896_);
lean_dec(v_i_2896_);
v_res_2900_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2898_, v_i_boxed_2899_, v_bs_2897_);
return v_res_2900_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__8));
v___x_2911_ = lean_unsigned_to_nat(46u);
v___x_2912_ = lean_unsigned_to_nat(193u);
v___x_2913_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__7));
v___x_2914_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__6));
v___x_2915_ = l_mkPanicMessageWithDecl(v___x_2914_, v___x_2913_, v___x_2912_, v___x_2911_, v___x_2910_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(lean_object* v_context_2917_, lean_object* v_d_2918_){
_start:
{
lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2927_; lean_object* v_received_2928_; lean_object* v___y_2947_; lean_object* v_a_2950_; 
if (lean_obj_tag(v_d_2918_) == 8)
{
lean_object* v_fields_2974_; size_t v_sz_2975_; size_t v___x_2976_; lean_object* v___x_2977_; 
v_fields_2974_ = lean_ctor_get(v_d_2918_, 0);
v_sz_2975_ = lean_array_size(v_fields_2974_);
v___x_2976_ = ((size_t)0ULL);
lean_inc_ref(v_fields_2974_);
v___x_2977_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3(v_sz_2975_, v___x_2976_, v_fields_2974_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v___x_2977_, 1);
v_a_2950_ = v_a_2978_;
goto v___jp_2949_;
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2986_; 
lean_dec_ref_known(v_d_2918_, 1);
v_a_2979_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2981_ = v___x_2977_;
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2977_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2986_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2984_; 
if (v_isShared_2982_ == 0)
{
lean_ctor_set_tag(v___x_2981_, 0);
v___x_2984_ = v___x_2981_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_a_2979_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
else
{
lean_object* v___x_2987_; 
v___x_2987_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v_a_2950_ = v___x_2987_;
goto v___jp_2949_;
}
v___jp_2920_:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2923_ = lean_string_append(v___y_2921_, v___y_2922_);
lean_dec_ref(v___y_2922_);
v___x_2924_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2923_);
v___x_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2924_);
return v___x_2925_;
}
v___jp_2926_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v___x_2929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_2930_ = lean_string_append(v___x_2929_, v_context_2917_);
v___x_2931_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_2932_ = lean_string_append(v___x_2930_, v___x_2931_);
v___x_2933_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__2));
v___x_2934_ = lean_string_append(v___x_2932_, v___x_2933_);
v___x_2935_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_2936_ = lean_string_append(v___x_2934_, v___x_2935_);
v___x_2937_ = lean_string_append(v___x_2936_, v_received_2928_);
lean_dec_ref(v_received_2928_);
v___x_2938_ = lean_string_utf8_byte_size(v___y_2927_);
v___x_2939_ = lean_unsigned_to_nat(0u);
v___x_2940_ = lean_nat_dec_eq(v___x_2938_, v___x_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2941_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_2942_ = lean_string_append(v___x_2941_, v___y_2927_);
lean_dec_ref(v___y_2927_);
v___x_2943_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_2944_ = lean_string_append(v___x_2942_, v___x_2943_);
v___y_2921_ = v___x_2937_;
v___y_2922_ = v___x_2944_;
goto v___jp_2920_;
}
else
{
lean_object* v___x_2945_; 
lean_dec_ref(v___y_2927_);
v___x_2945_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_2921_ = v___x_2937_;
v___y_2922_ = v___x_2945_;
goto v___jp_2920_;
}
}
v___jp_2946_:
{
lean_object* v___x_2948_; 
v___x_2948_ = l_Lasm_JS_Data_describe(v_d_2918_);
v___y_2927_ = v___y_2947_;
v_received_2928_ = v___x_2948_;
goto v___jp_2926_;
}
v___jp_2949_:
{
if (lean_obj_tag(v_d_2918_) == 9)
{
lean_object* v_value_2951_; lean_object* v_description_2952_; lean_object* v___x_2953_; uint8_t v___x_2954_; 
v_value_2951_ = lean_ctor_get(v_d_2918_, 0);
v_description_2952_ = lean_ctor_get(v_d_2918_, 1);
v___x_2953_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_2954_ = lean_string_dec_eq(v_description_2952_, v___x_2953_);
if (v___x_2954_ == 0)
{
v___y_2947_ = v_a_2950_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2971_; 
lean_inc(v_value_2951_);
v_isSharedCheck_2971_ = !lean_is_exclusive(v_d_2918_);
if (v_isSharedCheck_2971_ == 0)
{
lean_object* v_unused_2972_; lean_object* v_unused_2973_; 
v_unused_2972_ = lean_ctor_get(v_d_2918_, 1);
lean_dec(v_unused_2972_);
v_unused_2973_ = lean_ctor_get(v_d_2918_, 0);
lean_dec(v_unused_2973_);
v___x_2956_ = v_d_2918_;
v_isShared_2957_ = v_isSharedCheck_2971_;
goto v_resetjp_2955_;
}
else
{
lean_dec(v_d_2918_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2971_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
uint32_t v___x_2958_; uint64_t v___x_2959_; lean_object* v___x_2961_; 
v___x_2958_ = 206;
v___x_2959_ = 0ULL;
lean_inc(v_value_2951_);
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 1, v___x_2953_);
v___x_2961_ = v___x_2956_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_value_2951_);
lean_ctor_set(v_reuseFailAlloc_2970_, 1, v___x_2953_);
v___x_2961_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
uint32_t v___x_2962_; lean_object* v___x_2963_; 
v___x_2962_ = lasm_js_value_handle(v_value_2951_);
lean_dec(v_value_2951_);
v___x_2963_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2958_, v___x_2959_, v___x_2961_, v___x_2962_);
lean_dec_ref(v___x_2961_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; uint8_t v___x_2965_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2963_, 1);
v___x_2965_ = lean_string_validate_utf8(v_a_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
lean_dec(v_a_2964_);
v___x_2966_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_2967_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2966_);
v___y_2927_ = v_a_2950_;
v_received_2928_ = v___x_2967_;
goto v___jp_2926_;
}
else
{
lean_object* v___x_2968_; 
v___x_2968_ = lean_string_from_utf8_unchecked(v_a_2964_);
v___y_2927_ = v_a_2950_;
v_received_2928_ = v___x_2968_;
goto v___jp_2926_;
}
}
else
{
lean_object* v___x_2969_; 
lean_dec_ref_known(v___x_2963_, 1);
v___x_2969_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_2927_ = v_a_2950_;
v_received_2928_ = v___x_2969_;
goto v___jp_2926_;
}
}
}
}
}
else
{
v___y_2947_ = v_a_2950_;
goto v___jp_2946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2988_, lean_object* v_d_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(v_context_2988_, v_d_2989_);
lean_dec_ref(v_context_2988_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(lean_object* v_context_2992_, lean_object* v_bytes_2993_){
_start:
{
lean_object* v___x_2995_; 
v___x_2995_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2993_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v___x_2997_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2996_);
lean_dec_ref_known(v___x_2995_, 1);
v___x_2997_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2(v_context_2992_, v_a_2996_);
return v___x_2997_;
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
v_a_2998_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2995_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2995_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1___boxed(lean_object* v_context_3006_, lean_object* v_bytes_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(v_context_3006_, v_bytes_3007_);
lean_dec_ref(v_bytes_3007_);
lean_dec_ref(v_context_3006_);
return v_res_3009_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_3010_; uint64_t v___x_3011_; 
v___x_3010_ = 0;
v___x_3011_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3010_);
return v___x_3011_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(uint8_t v_await_3012_, uint64_t v_extra_3013_){
_start:
{
uint64_t v___x_3014_; uint64_t v___y_3016_; 
v___x_3014_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_3012_ == 0)
{
uint64_t v___x_3019_; 
v___x_3019_ = 0ULL;
v___y_3016_ = v___x_3019_;
goto v___jp_3015_;
}
else
{
uint64_t v___x_3020_; 
v___x_3020_ = 2ULL;
v___y_3016_ = v___x_3020_;
goto v___jp_3015_;
}
v___jp_3015_:
{
uint64_t v___x_3017_; uint64_t v___x_3018_; 
v___x_3017_ = lean_uint64_lor(v___x_3014_, v___y_3016_);
v___x_3018_ = lean_uint64_lor(v___x_3017_, v_extra_3013_);
return v___x_3018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___boxed(lean_object* v_await_3021_, lean_object* v_extra_3022_){
_start:
{
uint8_t v_await_boxed_3023_; uint64_t v_extra_boxed_3024_; uint64_t v_res_3025_; lean_object* v_r_3026_; 
v_await_boxed_3023_ = lean_unbox(v_await_3021_);
v_extra_boxed_3024_ = lean_unbox_uint64(v_extra_3022_);
lean_dec_ref(v_extra_3022_);
v_res_3025_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(v_await_boxed_3023_, v_extra_boxed_3024_);
v_r_3026_ = lean_box_uint64(v_res_3025_);
return v_r_3026_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3027_; uint8_t v___x_3028_; uint64_t v___x_3029_; 
v___x_3027_ = 8ULL;
v___x_3028_ = 0;
v___x_3029_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0(v___x_3028_, v___x_3027_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(lean_object* v_o_3031_, lean_object* v_name_3032_, lean_object* v_args_3033_){
_start:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; uint64_t v___x_3038_; lean_object* v___x_3039_; 
v___x_3035_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3036_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3036_, 0, v_o_3031_);
lean_ctor_set(v___x_3036_, 1, v___x_3035_);
lean_inc_ref(v_name_3032_);
v___x_3037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_name_3032_);
v___x_3038_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__0);
v___x_3039_ = l_Lasm_JS_Value_invokeRaw(v___x_3036_, v___x_3037_, v_args_3033_, v___x_3038_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3039_, 1);
v___x_3041_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___closed__1));
v___x_3042_ = lean_string_append(v___x_3041_, v_name_3032_);
lean_dec_ref(v_name_3032_);
v___x_3043_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1(v___x_3042_, v_a_3040_);
lean_dec(v_a_3040_);
lean_dec_ref(v___x_3042_);
return v___x_3043_;
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
lean_dec_ref(v_name_3032_);
v_a_3044_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_3039_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_3039_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0___boxed(lean_object* v_o_3052_, lean_object* v_name_3053_, lean_object* v_args_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(v_o_3052_, v_name_3053_, v_args_3054_);
return v_res_3056_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_Env_toObject___closed__2(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l_Lasm_JS_Deno_Env_toObject___closed__1));
v___x_3061_ = l_Lasm_JS_Web_Support_args(v___x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_toObject(lean_object* v_self_3062_){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = ((lean_object*)(l_Lasm_JS_Deno_Env_toObject___closed__0));
v___x_3065_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_3066_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0(v_self_3062_, v___x_3064_, v___x_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_Env_toObject___boxed(lean_object* v_self_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Lasm_JS_Deno_Env_toObject(v_self_3067_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(lean_object* v_o_3073_, lean_object* v_a_3074_){
_start:
{
if (lean_obj_tag(v_a_3074_) == 0)
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
lean_dec(v_o_3073_);
v___x_3076_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
return v___x_3077_;
}
else
{
lean_object* v_tail_3078_; 
v_tail_3078_ = lean_ctor_get(v_a_3074_, 1);
if (lean_obj_tag(v_tail_3078_) == 0)
{
lean_object* v_head_3079_; lean_object* v___x_3080_; 
v_head_3079_ = lean_ctor_get(v_a_3074_, 0);
lean_inc(v_head_3079_);
lean_dec_ref_known(v_a_3074_, 2);
v___x_3080_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_File_lastModified_spec__0(v_o_3073_, v_head_3079_);
return v___x_3080_;
}
else
{
lean_object* v_head_3081_; lean_object* v___x_3082_; 
lean_inc(v_tail_3078_);
v_head_3081_ = lean_ctor_get(v_a_3074_, 0);
lean_inc(v_head_3081_);
lean_dec_ref_known(v_a_3074_, 2);
v___x_3082_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3073_, v_head_3081_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v_o_3073_ = v_a_3083_;
v_a_3074_ = v_tail_3078_;
goto _start;
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec(v_tail_3078_);
v_a_3085_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3082_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3082_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___boxed(lean_object* v_o_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(v_o_3093_, v_a_3094_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(lean_object* v_path_3097_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3101_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v___x_3101_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0(v_a_3100_, v_path_3097_);
return v___x_3101_;
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec(v_path_3097_);
v_a_3102_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3099_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3099_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0___boxed(lean_object* v_path_3110_, lean_object* v_a_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(v_path_3110_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_pid(){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = ((lean_object*)(l_Lasm_JS_Deno_pid___closed__3));
v___x_3123_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(v___x_3122_);
return v___x_3123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_pid___boxed(lean_object* v_a_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_Lasm_JS_Deno_pid();
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ppid(){
_start:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3134_ = ((lean_object*)(l_Lasm_JS_Deno_ppid___closed__2));
v___x_3135_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0(v___x_3134_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ppid___boxed(lean_object* v_a_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l_Lasm_JS_Deno_ppid();
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(lean_object* v_o_3138_, lean_object* v_a_3139_){
_start:
{
if (lean_obj_tag(v_a_3139_) == 0)
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
lean_dec(v_o_3138_);
v___x_3141_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
else
{
lean_object* v_tail_3143_; 
v_tail_3143_ = lean_ctor_get(v_a_3139_, 1);
if (lean_obj_tag(v_tail_3143_) == 0)
{
lean_object* v_head_3144_; lean_object* v___x_3145_; 
v_head_3144_ = lean_ctor_get(v_a_3139_, 0);
lean_inc(v_head_3144_);
lean_dec_ref_known(v_a_3139_, 2);
v___x_3145_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_o_3138_, v_head_3144_);
return v___x_3145_;
}
else
{
lean_object* v_head_3146_; lean_object* v___x_3147_; 
lean_inc(v_tail_3143_);
v_head_3146_ = lean_ctor_get(v_a_3139_, 0);
lean_inc(v_head_3146_);
lean_dec_ref_known(v_a_3139_, 2);
v___x_3147_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3138_, v_head_3146_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3147_, 1);
v_o_3138_ = v_a_3148_;
v_a_3139_ = v_tail_3143_;
goto _start;
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_dec(v_tail_3143_);
v_a_3150_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3147_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3147_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0___boxed(lean_object* v_o_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(v_o_3158_, v_a_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(lean_object* v_path_3162_){
_start:
{
lean_object* v___x_3164_; 
v___x_3164_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v___x_3166_; 
v_a_3165_ = lean_ctor_get(v___x_3164_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3164_, 1);
v___x_3166_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0_spec__0(v_a_3165_, v_path_3162_);
return v___x_3166_;
}
else
{
lean_object* v_a_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3174_; 
lean_dec(v_path_3162_);
v_a_3167_ = lean_ctor_get(v___x_3164_, 0);
v_isSharedCheck_3174_ = !lean_is_exclusive(v___x_3164_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3169_ = v___x_3164_;
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_a_3167_);
lean_dec(v___x_3164_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3174_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3172_; 
if (v_isShared_3170_ == 0)
{
v___x_3172_ = v___x_3169_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_a_3167_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0___boxed(lean_object* v_path_3175_, lean_object* v_a_3176_){
_start:
{
lean_object* v_res_3177_; 
v_res_3177_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(v_path_3175_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_noColor(){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3186_ = ((lean_object*)(l_Lasm_JS_Deno_noColor___closed__2));
v___x_3187_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_noColor_spec__0(v___x_3186_);
return v___x_3187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_noColor___boxed(lean_object* v_a_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lasm_JS_Deno_noColor();
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(lean_object* v_o_3190_, lean_object* v_a_3191_){
_start:
{
if (lean_obj_tag(v_a_3191_) == 0)
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
lean_dec(v_o_3190_);
v___x_3193_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
else
{
lean_object* v_tail_3195_; 
v_tail_3195_ = lean_ctor_get(v_a_3191_, 1);
if (lean_obj_tag(v_tail_3195_) == 0)
{
lean_object* v_head_3196_; lean_object* v___x_3197_; 
v_head_3196_ = lean_ctor_get(v_a_3191_, 0);
lean_inc(v_head_3196_);
lean_dec_ref_known(v_a_3191_, 2);
v___x_3197_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_o_3190_, v_head_3196_);
return v___x_3197_;
}
else
{
lean_object* v_head_3198_; lean_object* v___x_3199_; 
lean_inc(v_tail_3195_);
v_head_3198_ = lean_ctor_get(v_a_3191_, 0);
lean_inc(v_head_3198_);
lean_dec_ref_known(v_a_3191_, 2);
v___x_3199_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3190_, v_head_3198_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v___x_3199_, 1);
v_o_3190_ = v_a_3200_;
v_a_3191_ = v_tail_3195_;
goto _start;
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v_tail_3195_);
v_a_3202_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3204_ = v___x_3199_;
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3199_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3205_ == 0)
{
v___x_3207_ = v___x_3204_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v_a_3202_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0___boxed(lean_object* v_o_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(v_o_3210_, v_a_3211_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(lean_object* v_path_3214_){
_start:
{
lean_object* v___x_3216_; 
v___x_3216_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3218_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0_spec__0(v_a_3217_, v_path_3214_);
return v___x_3218_;
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3226_; 
lean_dec(v_path_3214_);
v_a_3219_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3221_ = v___x_3216_;
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_a_3219_);
lean_dec(v___x_3216_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3226_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3224_; 
if (v_isShared_3222_ == 0)
{
v___x_3224_ = v___x_3221_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3219_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0___boxed(lean_object* v_path_3227_, lean_object* v_a_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(v_path_3227_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exitCode(){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = ((lean_object*)(l_Lasm_JS_Deno_exitCode___closed__2));
v___x_3239_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_exitCode_spec__0(v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exitCode___boxed(lean_object* v_a_3240_){
_start:
{
lean_object* v_res_3241_; 
v_res_3241_ = l_Lasm_JS_Deno_exitCode();
return v_res_3241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_env(){
_start:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3249_ = ((lean_object*)(l_Lasm_JS_Deno_env___closed__1));
v___x_3250_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_3249_);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3250_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3250_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
v_a_3259_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3250_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3250_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_env___boxed(lean_object* v_a_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_Lasm_JS_Deno_env();
return v_res_3268_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4(void){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3273_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3274_ = lean_string_utf8_byte_size(v___x_3273_);
return v___x_3274_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5(void){
_start:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; uint8_t v___x_3277_; 
v___x_3275_ = lean_unsigned_to_nat(0u);
v___x_3276_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4);
v___x_3277_ = lean_nat_dec_eq(v___x_3276_, v___x_3275_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_3282_, lean_object* v_key_3283_){
_start:
{
if (lean_obj_tag(v_d_3282_) == 8)
{
lean_object* v___x_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3315_; 
v___x_3284_ = l_Lasm_JS_Data_field(v_d_3282_, v_key_3283_);
v_isSharedCheck_3315_ = !lean_is_exclusive(v_d_3282_);
if (v_isSharedCheck_3315_ == 0)
{
lean_object* v_unused_3316_; 
v_unused_3316_ = lean_ctor_get(v_d_3282_, 0);
lean_dec(v_unused_3316_);
v___x_3286_ = v_d_3282_;
v_isShared_3287_ = v_isSharedCheck_3315_;
goto v_resetjp_3285_;
}
else
{
lean_dec(v_d_3282_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3315_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
if (lean_obj_tag(v___x_3284_) == 4)
{
lean_object* v_s_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
lean_del_object(v___x_3286_);
v_s_3288_ = lean_ctor_get(v___x_3284_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3284_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_s_3288_);
lean_dec(v___x_3284_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
lean_ctor_set_tag(v___x_3290_, 1);
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_s_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
else
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; uint8_t v___x_3306_; 
v___x_3296_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3297_ = lean_string_append(v___x_3296_, v_key_3283_);
v___x_3298_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3299_ = lean_string_append(v___x_3297_, v___x_3298_);
v___x_3300_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_3301_ = lean_string_append(v___x_3299_, v___x_3300_);
v___x_3302_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3303_ = lean_string_append(v___x_3301_, v___x_3302_);
v___x_3304_ = l_Lasm_JS_Data_describe(v___x_3284_);
v___x_3305_ = lean_string_append(v___x_3303_, v___x_3304_);
lean_dec_ref(v___x_3304_);
v___x_3306_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_3306_ == 0)
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3310_; 
v___x_3307_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_3308_ = lean_string_append(v___x_3305_, v___x_3307_);
if (v_isShared_3287_ == 0)
{
lean_ctor_set_tag(v___x_3286_, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3308_);
v___x_3310_ = v___x_3286_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v___x_3308_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
else
{
lean_object* v___x_3313_; 
if (v_isShared_3287_ == 0)
{
lean_ctor_set_tag(v___x_3286_, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3305_);
v___x_3313_ = v___x_3286_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v___x_3305_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
}
}
}
else
{
lean_object* v___x_3317_; 
lean_dec(v_d_3282_);
v___x_3317_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
return v___x_3317_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_3318_, lean_object* v_key_3319_){
_start:
{
lean_object* v_res_3320_; 
v_res_3320_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3318_, v_key_3319_);
lean_dec_ref(v_key_3319_);
return v_res_3320_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSignal___lam__0___closed__0));
v___x_3322_ = lean_string_utf8_byte_size(v___x_3321_);
return v___x_3322_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; uint8_t v___x_3325_; 
v___x_3323_ = lean_unsigned_to_nat(0u);
v___x_3324_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__0);
v___x_3325_ = lean_nat_dec_eq(v___x_3324_, v___x_3323_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(lean_object* v_d_3329_, lean_object* v_key_3330_){
_start:
{
if (lean_obj_tag(v_d_3329_) == 8)
{
lean_object* v___x_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3383_; 
v___x_3331_ = l_Lasm_JS_Data_field(v_d_3329_, v_key_3330_);
v_isSharedCheck_3383_ = !lean_is_exclusive(v_d_3329_);
if (v_isSharedCheck_3383_ == 0)
{
lean_object* v_unused_3384_; 
v_unused_3384_ = lean_ctor_get(v_d_3329_, 0);
lean_dec(v_unused_3384_);
v___x_3333_ = v_d_3329_;
v_isShared_3334_ = v_isSharedCheck_3383_;
goto v_resetjp_3332_;
}
else
{
lean_dec(v_d_3329_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3383_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
if (lean_obj_tag(v___x_3331_) == 4)
{
lean_object* v_s_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; 
v_s_3355_ = lean_ctor_get(v___x_3331_, 0);
lean_inc_ref(v_s_3355_);
v___x_3356_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__0));
v___x_3357_ = lean_string_dec_eq(v_s_3355_, v___x_3356_);
if (v___x_3357_ == 0)
{
lean_object* v___x_3358_; uint8_t v___x_3359_; 
v___x_3358_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__2));
v___x_3359_ = lean_string_dec_eq(v_s_3355_, v___x_3358_);
if (v___x_3359_ == 0)
{
lean_object* v___x_3360_; uint8_t v___x_3361_; 
v___x_3360_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__4));
v___x_3361_ = lean_string_dec_eq(v_s_3355_, v___x_3360_);
if (v___x_3361_ == 0)
{
lean_object* v___x_3362_; uint8_t v___x_3363_; 
v___x_3362_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__6));
v___x_3363_ = lean_string_dec_eq(v_s_3355_, v___x_3362_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; uint8_t v___x_3365_; 
v___x_3364_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__8));
v___x_3365_ = lean_string_dec_eq(v_s_3355_, v___x_3364_);
if (v___x_3365_ == 0)
{
lean_object* v___x_3366_; uint8_t v___x_3367_; 
v___x_3366_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__10));
v___x_3367_ = lean_string_dec_eq(v_s_3355_, v___x_3366_);
if (v___x_3367_ == 0)
{
lean_object* v___x_3368_; uint8_t v___x_3369_; 
v___x_3368_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__12));
v___x_3369_ = lean_string_dec_eq(v_s_3355_, v___x_3368_);
if (v___x_3369_ == 0)
{
lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3370_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__14));
v___x_3371_ = lean_string_dec_eq(v_s_3355_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_object* v___x_3372_; uint8_t v___x_3373_; 
v___x_3372_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildOs___lam__0___closed__16));
v___x_3373_ = lean_string_dec_eq(v_s_3355_, v___x_3372_);
lean_dec_ref(v_s_3355_);
if (v___x_3373_ == 0)
{
goto v___jp_3335_;
}
else
{
lean_object* v___x_3374_; 
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3374_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__1));
return v___x_3374_;
}
}
else
{
lean_object* v___x_3375_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3375_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__2));
return v___x_3375_;
}
}
else
{
lean_object* v___x_3376_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3376_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__3));
return v___x_3376_;
}
}
else
{
lean_object* v___x_3377_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3377_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__4));
return v___x_3377_;
}
}
else
{
lean_object* v___x_3378_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3378_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__5));
return v___x_3378_;
}
}
else
{
lean_object* v___x_3379_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3379_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__6));
return v___x_3379_;
}
}
else
{
lean_object* v___x_3380_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3380_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__7));
return v___x_3380_;
}
}
else
{
lean_object* v___x_3381_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3381_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__8));
return v___x_3381_;
}
}
else
{
lean_object* v___x_3382_; 
lean_dec_ref(v_s_3355_);
lean_dec_ref_known(v___x_3331_, 1);
lean_del_object(v___x_3333_);
v___x_3382_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___lam__0___closed__9));
return v___x_3382_;
}
}
else
{
goto v___jp_3335_;
}
v___jp_3335_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; uint8_t v___x_3346_; 
v___x_3336_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3337_ = lean_string_append(v___x_3336_, v_key_3330_);
v___x_3338_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3339_ = lean_string_append(v___x_3337_, v___x_3338_);
v___x_3340_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildOs___closed__1));
v___x_3341_ = lean_string_append(v___x_3339_, v___x_3340_);
v___x_3342_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
v___x_3344_ = l_Lasm_JS_Data_describe(v___x_3331_);
v___x_3345_ = lean_string_append(v___x_3343_, v___x_3344_);
lean_dec_ref(v___x_3344_);
v___x_3346_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1);
if (v___x_3346_ == 0)
{
lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3350_; 
v___x_3347_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2));
v___x_3348_ = lean_string_append(v___x_3345_, v___x_3347_);
if (v_isShared_3334_ == 0)
{
lean_ctor_set_tag(v___x_3333_, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3348_);
v___x_3350_ = v___x_3333_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3348_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
else
{
lean_object* v___x_3353_; 
if (v_isShared_3334_ == 0)
{
lean_ctor_set_tag(v___x_3333_, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3345_);
v___x_3353_ = v___x_3333_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3345_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
}
else
{
lean_object* v___x_3385_; 
lean_dec(v_d_3329_);
v___x_3385_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__3));
return v___x_3385_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_d_3386_, lean_object* v_key_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(v_d_3386_, v_key_3387_);
lean_dec_ref(v_key_3387_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_3391_, lean_object* v_key_3392_){
_start:
{
if (lean_obj_tag(v_d_3391_) == 8)
{
lean_object* v___x_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3424_; 
v___x_3393_ = l_Lasm_JS_Data_field(v_d_3391_, v_key_3392_);
v_isSharedCheck_3424_ = !lean_is_exclusive(v_d_3391_);
if (v_isSharedCheck_3424_ == 0)
{
lean_object* v_unused_3425_; 
v_unused_3425_ = lean_ctor_get(v_d_3391_, 0);
lean_dec(v_unused_3425_);
v___x_3395_ = v_d_3391_;
v_isShared_3396_ = v_isSharedCheck_3424_;
goto v_resetjp_3394_;
}
else
{
lean_dec(v_d_3391_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3424_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
if (lean_obj_tag(v___x_3393_) == 4)
{
lean_object* v_s_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; 
v_s_3417_ = lean_ctor_get(v___x_3393_, 0);
lean_inc_ref(v_s_3417_);
v___x_3418_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__0));
v___x_3419_ = lean_string_dec_eq(v_s_3417_, v___x_3418_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3420_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBuildArch___lam__0___closed__2));
v___x_3421_ = lean_string_dec_eq(v_s_3417_, v___x_3420_);
lean_dec_ref(v_s_3417_);
if (v___x_3421_ == 0)
{
goto v___jp_3397_;
}
else
{
lean_object* v___x_3422_; 
lean_dec_ref_known(v___x_3393_, 1);
lean_del_object(v___x_3395_);
v___x_3422_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__1));
return v___x_3422_;
}
}
else
{
lean_object* v___x_3423_; 
lean_dec_ref(v_s_3417_);
lean_dec_ref_known(v___x_3393_, 1);
lean_del_object(v___x_3395_);
v___x_3423_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___lam__0___closed__2));
return v___x_3423_;
}
}
else
{
goto v___jp_3397_;
}
v___jp_3397_:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; uint8_t v___x_3408_; 
v___x_3398_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3399_ = lean_string_append(v___x_3398_, v_key_3392_);
v___x_3400_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3401_ = lean_string_append(v___x_3399_, v___x_3400_);
v___x_3402_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuildArch___closed__1));
v___x_3403_ = lean_string_append(v___x_3401_, v___x_3402_);
v___x_3404_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3405_ = lean_string_append(v___x_3403_, v___x_3404_);
v___x_3406_ = l_Lasm_JS_Data_describe(v___x_3393_);
v___x_3407_ = lean_string_append(v___x_3405_, v___x_3406_);
lean_dec_ref(v___x_3406_);
v___x_3408_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__1);
if (v___x_3408_ == 0)
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3412_; 
v___x_3409_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6___closed__2));
v___x_3410_ = lean_string_append(v___x_3407_, v___x_3409_);
if (v_isShared_3396_ == 0)
{
lean_ctor_set_tag(v___x_3395_, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3410_);
v___x_3412_ = v___x_3395_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3410_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
else
{
lean_object* v___x_3415_; 
if (v_isShared_3396_ == 0)
{
lean_ctor_set_tag(v___x_3395_, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3407_);
v___x_3415_ = v___x_3395_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3407_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
}
else
{
lean_object* v___x_3426_; 
lean_dec(v_d_3391_);
v___x_3426_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___closed__0));
return v___x_3426_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_3427_, lean_object* v_key_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(v_d_3427_, v_key_3428_);
lean_dec_ref(v_key_3428_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(lean_object* v_d_3433_, lean_object* v_key_3434_){
_start:
{
if (lean_obj_tag(v_d_3433_) == 8)
{
lean_object* v___x_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3463_; 
v___x_3435_ = l_Lasm_JS_Data_field(v_d_3433_, v_key_3434_);
v_isSharedCheck_3463_ = !lean_is_exclusive(v_d_3433_);
if (v_isSharedCheck_3463_ == 0)
{
lean_object* v_unused_3464_; 
v_unused_3464_ = lean_ctor_get(v_d_3433_, 0);
lean_dec(v_unused_3464_);
v___x_3437_ = v_d_3433_;
v_isShared_3438_ = v_isSharedCheck_3463_;
goto v_resetjp_3436_;
}
else
{
lean_dec(v_d_3433_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3463_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
if (lean_obj_tag(v___x_3435_) == 2)
{
uint8_t v_b_3439_; lean_object* v___x_3440_; lean_object* v___x_3442_; 
v_b_3439_ = lean_ctor_get_uint8(v___x_3435_, 0);
lean_dec_ref_known(v___x_3435_, 0);
v___x_3440_ = lean_box(v_b_3439_);
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 1);
lean_ctor_set(v___x_3437_, 0, v___x_3440_);
v___x_3442_ = v___x_3437_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
else
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; 
v___x_3444_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_3445_ = lean_string_append(v___x_3444_, v_key_3434_);
v___x_3446_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_3447_ = lean_string_append(v___x_3445_, v___x_3446_);
v___x_3448_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__0));
v___x_3449_ = lean_string_append(v___x_3447_, v___x_3448_);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_3451_ = lean_string_append(v___x_3449_, v___x_3450_);
v___x_3452_ = l_Lasm_JS_Data_describe(v___x_3435_);
v___x_3453_ = lean_string_append(v___x_3451_, v___x_3452_);
lean_dec_ref(v___x_3452_);
v___x_3454_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_3454_ == 0)
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3458_; 
v___x_3455_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_3456_ = lean_string_append(v___x_3453_, v___x_3455_);
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3456_);
v___x_3458_ = v___x_3437_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3456_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
else
{
lean_object* v___x_3461_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3453_);
v___x_3461_ = v___x_3437_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3453_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
}
}
else
{
lean_object* v___x_3465_; 
lean_dec(v_d_3433_);
v___x_3465_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___closed__1));
return v___x_3465_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7___boxed(lean_object* v_d_3466_, lean_object* v_key_3467_){
_start:
{
lean_object* v_res_3468_; 
v_res_3468_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3466_, v_key_3467_);
lean_dec_ref(v_key_3467_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_3469_, lean_object* v_d_3470_){
_start:
{
lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3479_; lean_object* v_received_3480_; lean_object* v___y_3499_; lean_object* v_a_3502_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3526_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__0));
lean_inc(v_d_3470_);
v___x_3527_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3470_, v___x_3526_);
if (lean_obj_tag(v___x_3527_) == 0)
{
lean_object* v_a_3528_; 
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v___x_3527_, 1);
v_a_3502_ = v_a_3528_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v_a_3529_ = lean_ctor_get(v___x_3527_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3527_, 1);
v___x_3530_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__1));
lean_inc(v_d_3470_);
v___x_3531_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__5(v_d_3470_, v___x_3530_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; 
lean_dec(v_a_3529_);
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_a_3532_);
lean_dec_ref_known(v___x_3531_, 1);
v_a_3502_ = v_a_3532_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v_a_3533_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_a_3533_);
lean_dec_ref_known(v___x_3531_, 1);
v___x_3534_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__2));
lean_inc(v_d_3470_);
v___x_3535_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__6(v_d_3470_, v___x_3534_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v_a_3536_; 
lean_dec(v_a_3533_);
lean_dec(v_a_3529_);
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_a_3536_);
lean_dec_ref_known(v___x_3535_, 1);
v_a_3502_ = v_a_3536_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v_a_3537_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_a_3537_);
lean_dec_ref_known(v___x_3535_, 1);
v___x_3538_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__3));
lean_inc(v_d_3470_);
v___x_3539_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__7(v_d_3470_, v___x_3538_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; 
lean_dec(v_a_3537_);
lean_dec(v_a_3533_);
lean_dec(v_a_3529_);
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_a_3540_);
lean_dec_ref_known(v___x_3539_, 1);
v_a_3502_ = v_a_3540_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v_a_3541_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_a_3541_);
lean_dec_ref_known(v___x_3539_, 1);
v___x_3542_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__4));
lean_inc(v_d_3470_);
v___x_3543_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3470_, v___x_3542_);
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v_a_3544_; 
lean_dec(v_a_3541_);
lean_dec(v_a_3537_);
lean_dec(v_a_3533_);
lean_dec(v_a_3529_);
v_a_3544_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3544_);
lean_dec_ref_known(v___x_3543_, 1);
v_a_3502_ = v_a_3544_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v_a_3545_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3545_);
lean_dec_ref_known(v___x_3543_, 1);
v___x_3546_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___lam__0___closed__5));
lean_inc(v_d_3470_);
v___x_3547_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3470_, v___x_3546_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; 
lean_dec(v_a_3545_);
lean_dec(v_a_3541_);
lean_dec(v_a_3537_);
lean_dec(v_a_3533_);
lean_dec(v_a_3529_);
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v___x_3547_, 1);
v_a_3502_ = v_a_3548_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3560_; 
lean_dec(v_d_3470_);
v_a_3549_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3551_ = v___x_3547_;
v_isShared_3552_ = v_isSharedCheck_3560_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3547_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3560_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3553_; uint8_t v___x_3554_; uint8_t v___x_3555_; uint8_t v___x_3556_; lean_object* v___x_3558_; 
v___x_3553_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3553_, 0, v_a_3529_);
lean_ctor_set(v___x_3553_, 1, v_a_3545_);
lean_ctor_set(v___x_3553_, 2, v_a_3549_);
v___x_3554_ = lean_unbox(v_a_3533_);
lean_dec(v_a_3533_);
lean_ctor_set_uint8(v___x_3553_, sizeof(void*)*3, v___x_3554_);
v___x_3555_ = lean_unbox(v_a_3537_);
lean_dec(v_a_3537_);
lean_ctor_set_uint8(v___x_3553_, sizeof(void*)*3 + 1, v___x_3555_);
v___x_3556_ = lean_unbox(v_a_3541_);
lean_dec(v_a_3541_);
lean_ctor_set_uint8(v___x_3553_, sizeof(void*)*3 + 2, v___x_3556_);
if (v_isShared_3552_ == 0)
{
lean_ctor_set_tag(v___x_3551_, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3553_);
v___x_3558_ = v___x_3551_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v___x_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
}
}
}
}
v___jp_3472_:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v___x_3475_ = lean_string_append(v___y_3473_, v___y_3474_);
lean_dec_ref(v___y_3474_);
v___x_3476_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
v___x_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
return v___x_3477_;
}
v___jp_3478_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; 
v___x_3481_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_3482_ = lean_string_append(v___x_3481_, v_context_3469_);
v___x_3483_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_3484_ = lean_string_append(v___x_3482_, v___x_3483_);
v___x_3485_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSBuild___closed__2));
v___x_3486_ = lean_string_append(v___x_3484_, v___x_3485_);
v___x_3487_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_3488_ = lean_string_append(v___x_3486_, v___x_3487_);
v___x_3489_ = lean_string_append(v___x_3488_, v_received_3480_);
lean_dec_ref(v_received_3480_);
v___x_3490_ = lean_string_utf8_byte_size(v___y_3479_);
v___x_3491_ = lean_unsigned_to_nat(0u);
v___x_3492_ = lean_nat_dec_eq(v___x_3490_, v___x_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_3494_ = lean_string_append(v___x_3493_, v___y_3479_);
lean_dec_ref(v___y_3479_);
v___x_3495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_3496_ = lean_string_append(v___x_3494_, v___x_3495_);
v___y_3473_ = v___x_3489_;
v___y_3474_ = v___x_3496_;
goto v___jp_3472_;
}
else
{
lean_object* v___x_3497_; 
lean_dec_ref(v___y_3479_);
v___x_3497_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_3473_ = v___x_3489_;
v___y_3474_ = v___x_3497_;
goto v___jp_3472_;
}
}
v___jp_3498_:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Lasm_JS_Data_describe(v_d_3470_);
v___y_3479_ = v___y_3499_;
v_received_3480_ = v___x_3500_;
goto v___jp_3478_;
}
v___jp_3501_:
{
if (lean_obj_tag(v_d_3470_) == 9)
{
lean_object* v_value_3503_; lean_object* v_description_3504_; lean_object* v___x_3505_; uint8_t v___x_3506_; 
v_value_3503_ = lean_ctor_get(v_d_3470_, 0);
v_description_3504_ = lean_ctor_get(v_d_3470_, 1);
v___x_3505_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3506_ = lean_string_dec_eq(v_description_3504_, v___x_3505_);
if (v___x_3506_ == 0)
{
v___y_3499_ = v_a_3502_;
goto v___jp_3498_;
}
else
{
lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3523_; 
lean_inc(v_value_3503_);
v_isSharedCheck_3523_ = !lean_is_exclusive(v_d_3470_);
if (v_isSharedCheck_3523_ == 0)
{
lean_object* v_unused_3524_; lean_object* v_unused_3525_; 
v_unused_3524_ = lean_ctor_get(v_d_3470_, 1);
lean_dec(v_unused_3524_);
v_unused_3525_ = lean_ctor_get(v_d_3470_, 0);
lean_dec(v_unused_3525_);
v___x_3508_ = v_d_3470_;
v_isShared_3509_ = v_isSharedCheck_3523_;
goto v_resetjp_3507_;
}
else
{
lean_dec(v_d_3470_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3523_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
uint32_t v___x_3510_; uint64_t v___x_3511_; lean_object* v___x_3513_; 
v___x_3510_ = 206;
v___x_3511_ = 0ULL;
lean_inc(v_value_3503_);
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 1, v___x_3505_);
v___x_3513_ = v___x_3508_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_value_3503_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v___x_3505_);
v___x_3513_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
uint32_t v___x_3514_; lean_object* v___x_3515_; 
v___x_3514_ = lasm_js_value_handle(v_value_3503_);
lean_dec(v_value_3503_);
v___x_3515_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3510_, v___x_3511_, v___x_3513_, v___x_3514_);
lean_dec_ref(v___x_3513_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_a_3516_; uint8_t v___x_3517_; 
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_a_3516_);
lean_dec_ref_known(v___x_3515_, 1);
v___x_3517_ = lean_string_validate_utf8(v_a_3516_);
if (v___x_3517_ == 0)
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
lean_dec(v_a_3516_);
v___x_3518_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_3519_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3518_);
v___y_3479_ = v_a_3502_;
v_received_3480_ = v___x_3519_;
goto v___jp_3478_;
}
else
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_string_from_utf8_unchecked(v_a_3516_);
v___y_3479_ = v_a_3502_;
v_received_3480_ = v___x_3520_;
goto v___jp_3478_;
}
}
else
{
lean_object* v___x_3521_; 
lean_dec_ref_known(v___x_3515_, 1);
v___x_3521_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_3479_ = v_a_3502_;
v_received_3480_ = v___x_3521_;
goto v___jp_3478_;
}
}
}
}
}
else
{
v___y_3499_ = v_a_3502_;
goto v___jp_3498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_3561_, lean_object* v_d_3562_, lean_object* v_a_3563_){
_start:
{
lean_object* v_res_3564_; 
v_res_3564_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3561_, v_d_3562_);
lean_dec_ref(v_context_3561_);
return v_res_3564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_3565_, lean_object* v_bytes_3566_){
_start:
{
lean_object* v___x_3568_; 
v___x_3568_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3566_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3570_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
v___x_3570_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3565_, v_a_3569_);
return v___x_3570_;
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
v_a_3571_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3568_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3568_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3579_, lean_object* v_bytes_3580_, lean_object* v_a_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(v_context_3579_, v_bytes_3580_);
lean_dec_ref(v_bytes_3580_);
lean_dec_ref(v_context_3579_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(lean_object* v_o_3584_, lean_object* v_key_3585_){
_start:
{
lean_object* v_k_3587_; lean_object* v___x_3588_; 
v_k_3587_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3587_, 0, v_key_3585_);
v___x_3588_ = l_Lasm_JS_Wire_encodeIO(v_k_3587_);
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v_a_3589_; uint32_t v___x_3590_; uint32_t v___x_3591_; uint64_t v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v_a_3589_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_a_3589_);
lean_dec_ref_known(v___x_3588_, 1);
v___x_3590_ = 203;
v___x_3591_ = lasm_js_value_handle(v_o_3584_);
v___x_3592_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
v___x_3593_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3594_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3594_, 0, v_o_3584_);
lean_ctor_set(v___x_3594_, 1, v___x_3593_);
v___x_3595_ = lean_unsigned_to_nat(2u);
v___x_3596_ = lean_mk_empty_array_with_capacity(v___x_3595_);
lean_inc_ref(v_k_3587_);
v___x_3597_ = lean_array_push(v___x_3596_, v_k_3587_);
v___x_3598_ = lean_array_push(v___x_3597_, v___x_3594_);
v___x_3599_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3598_);
v___x_3600_ = lasm_js_call(v___x_3590_, v___x_3591_, v___x_3592_, v_a_3589_, v___x_3599_);
lean_dec_ref_known(v___x_3599_, 1);
lean_dec(v_a_3589_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref_known(v___x_3600_, 1);
v___x_3602_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0));
v___x_3603_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3587_);
v___x_3604_ = lean_string_append(v___x_3602_, v___x_3603_);
lean_dec_ref(v___x_3603_);
v___x_3605_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2(v___x_3604_, v_a_3601_);
lean_dec(v_a_3601_);
lean_dec_ref(v___x_3604_);
return v___x_3605_;
}
else
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3613_; 
lean_dec_ref_known(v_k_3587_, 1);
v_a_3606_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3608_ = v___x_3600_;
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3600_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3613_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3611_; 
if (v_isShared_3609_ == 0)
{
v___x_3611_ = v___x_3608_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v_a_3606_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
}
else
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3621_; 
lean_dec_ref_known(v_k_3587_, 1);
lean_dec(v_o_3584_);
v_a_3614_ = lean_ctor_get(v___x_3588_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3616_ = v___x_3588_;
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3588_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3619_; 
if (v_isShared_3617_ == 0)
{
v___x_3619_ = v___x_3616_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3614_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___boxed(lean_object* v_o_3622_, lean_object* v_key_3623_, lean_object* v_a_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(v_o_3622_, v_key_3623_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(lean_object* v_o_3626_, lean_object* v_a_3627_){
_start:
{
if (lean_obj_tag(v_a_3627_) == 0)
{
lean_object* v___x_3629_; lean_object* v___x_3630_; 
lean_dec(v_o_3626_);
v___x_3629_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
return v___x_3630_;
}
else
{
lean_object* v_tail_3631_; 
v_tail_3631_ = lean_ctor_get(v_a_3627_, 1);
if (lean_obj_tag(v_tail_3631_) == 0)
{
lean_object* v_head_3632_; lean_object* v___x_3633_; 
v_head_3632_ = lean_ctor_get(v_a_3627_, 0);
lean_inc(v_head_3632_);
lean_dec_ref_known(v_a_3627_, 2);
v___x_3633_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1(v_o_3626_, v_head_3632_);
return v___x_3633_;
}
else
{
lean_object* v_head_3634_; lean_object* v___x_3635_; 
lean_inc(v_tail_3631_);
v_head_3634_ = lean_ctor_get(v_a_3627_, 0);
lean_inc(v_head_3634_);
lean_dec_ref_known(v_a_3627_, 2);
v___x_3635_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3626_, v_head_3634_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v_a_3636_; 
v_a_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3636_);
lean_dec_ref_known(v___x_3635_, 1);
v_o_3626_ = v_a_3636_;
v_a_3627_ = v_tail_3631_;
goto _start;
}
else
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3645_; 
lean_dec(v_tail_3631_);
v_a_3638_ = lean_ctor_get(v___x_3635_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3635_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3640_ = v___x_3635_;
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3635_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
if (v_isShared_3641_ == 0)
{
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3638_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0___boxed(lean_object* v_o_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(v_o_3646_, v_a_3647_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(lean_object* v_path_3650_){
_start:
{
lean_object* v___x_3652_; 
v___x_3652_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; lean_object* v___x_3654_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
lean_inc(v_a_3653_);
lean_dec_ref_known(v___x_3652_, 1);
v___x_3654_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0(v_a_3653_, v_path_3650_);
return v___x_3654_;
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_dec(v_path_3650_);
v_a_3655_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3652_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3652_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0___boxed(lean_object* v_path_3663_, lean_object* v_a_3664_){
_start:
{
lean_object* v_res_3665_; 
v_res_3665_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(v_path_3663_);
return v_res_3665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_build(){
_start:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3674_ = ((lean_object*)(l_Lasm_JS_Deno_build___closed__2));
v___x_3675_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0(v___x_3674_);
return v___x_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_build___boxed(lean_object* v_a_3676_){
_start:
{
lean_object* v_res_3677_; 
v_res_3677_ = l_Lasm_JS_Deno_build();
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_3678_, lean_object* v_d_3679_){
_start:
{
lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3688_; lean_object* v_received_3689_; lean_object* v___y_3708_; lean_object* v_a_3711_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3735_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__0));
lean_inc(v_d_3679_);
v___x_3736_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3679_, v___x_3735_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
v_a_3711_ = v_a_3737_;
goto v___jp_3710_;
}
else
{
lean_object* v_a_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v_a_3738_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3738_);
lean_dec_ref_known(v___x_3736_, 1);
v___x_3739_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__1));
lean_inc(v_d_3679_);
v___x_3740_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3679_, v___x_3739_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; 
lean_dec(v_a_3738_);
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v___x_3740_, 1);
v_a_3711_ = v_a_3741_;
goto v___jp_3710_;
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v_a_3742_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3740_, 1);
v___x_3743_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___lam__0___closed__2));
lean_inc(v_d_3679_);
v___x_3744_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_d_3679_, v___x_3743_);
if (lean_obj_tag(v___x_3744_) == 0)
{
lean_object* v_a_3745_; 
lean_dec(v_a_3742_);
lean_dec(v_a_3738_);
v_a_3745_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v___x_3744_, 1);
v_a_3711_ = v_a_3745_;
goto v___jp_3710_;
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3754_; 
lean_dec(v_d_3679_);
v_a_3746_ = lean_ctor_get(v___x_3744_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3744_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3748_ = v___x_3744_;
v_isShared_3749_ = v_isSharedCheck_3754_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3744_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3754_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; lean_object* v___x_3752_; 
v___x_3750_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3750_, 0, v_a_3738_);
lean_ctor_set(v___x_3750_, 1, v_a_3742_);
lean_ctor_set(v___x_3750_, 2, v_a_3746_);
if (v_isShared_3749_ == 0)
{
lean_ctor_set_tag(v___x_3748_, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3750_);
v___x_3752_ = v___x_3748_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v___x_3750_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
}
}
v___jp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = lean_string_append(v___y_3682_, v___y_3683_);
lean_dec_ref(v___y_3683_);
v___x_3685_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3684_);
v___x_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3685_);
return v___x_3686_;
}
v___jp_3687_:
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; uint8_t v___x_3701_; 
v___x_3690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_3691_ = lean_string_append(v___x_3690_, v_context_3678_);
v___x_3692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_3693_ = lean_string_append(v___x_3691_, v___x_3692_);
v___x_3694_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSVersion___closed__1));
v___x_3695_ = lean_string_append(v___x_3693_, v___x_3694_);
v___x_3696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_3697_ = lean_string_append(v___x_3695_, v___x_3696_);
v___x_3698_ = lean_string_append(v___x_3697_, v_received_3689_);
lean_dec_ref(v_received_3689_);
v___x_3699_ = lean_string_utf8_byte_size(v___y_3688_);
v___x_3700_ = lean_unsigned_to_nat(0u);
v___x_3701_ = lean_nat_dec_eq(v___x_3699_, v___x_3700_);
if (v___x_3701_ == 0)
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v___x_3702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_3703_ = lean_string_append(v___x_3702_, v___y_3688_);
lean_dec_ref(v___y_3688_);
v___x_3704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_3705_ = lean_string_append(v___x_3703_, v___x_3704_);
v___y_3682_ = v___x_3698_;
v___y_3683_ = v___x_3705_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3706_; 
lean_dec_ref(v___y_3688_);
v___x_3706_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_3682_ = v___x_3698_;
v___y_3683_ = v___x_3706_;
goto v___jp_3681_;
}
}
v___jp_3707_:
{
lean_object* v___x_3709_; 
v___x_3709_ = l_Lasm_JS_Data_describe(v_d_3679_);
v___y_3688_ = v___y_3708_;
v_received_3689_ = v___x_3709_;
goto v___jp_3687_;
}
v___jp_3710_:
{
if (lean_obj_tag(v_d_3679_) == 9)
{
lean_object* v_value_3712_; lean_object* v_description_3713_; lean_object* v___x_3714_; uint8_t v___x_3715_; 
v_value_3712_ = lean_ctor_get(v_d_3679_, 0);
v_description_3713_ = lean_ctor_get(v_d_3679_, 1);
v___x_3714_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3715_ = lean_string_dec_eq(v_description_3713_, v___x_3714_);
if (v___x_3715_ == 0)
{
v___y_3708_ = v_a_3711_;
goto v___jp_3707_;
}
else
{
lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3732_; 
lean_inc(v_value_3712_);
v_isSharedCheck_3732_ = !lean_is_exclusive(v_d_3679_);
if (v_isSharedCheck_3732_ == 0)
{
lean_object* v_unused_3733_; lean_object* v_unused_3734_; 
v_unused_3733_ = lean_ctor_get(v_d_3679_, 1);
lean_dec(v_unused_3733_);
v_unused_3734_ = lean_ctor_get(v_d_3679_, 0);
lean_dec(v_unused_3734_);
v___x_3717_ = v_d_3679_;
v_isShared_3718_ = v_isSharedCheck_3732_;
goto v_resetjp_3716_;
}
else
{
lean_dec(v_d_3679_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3732_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
uint32_t v___x_3719_; uint64_t v___x_3720_; lean_object* v___x_3722_; 
v___x_3719_ = 206;
v___x_3720_ = 0ULL;
lean_inc(v_value_3712_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 1, v___x_3714_);
v___x_3722_ = v___x_3717_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_value_3712_);
lean_ctor_set(v_reuseFailAlloc_3731_, 1, v___x_3714_);
v___x_3722_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
uint32_t v___x_3723_; lean_object* v___x_3724_; 
v___x_3723_ = lasm_js_value_handle(v_value_3712_);
lean_dec(v_value_3712_);
v___x_3724_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3719_, v___x_3720_, v___x_3722_, v___x_3723_);
lean_dec_ref(v___x_3722_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v_a_3725_; uint8_t v___x_3726_; 
v_a_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3724_, 1);
v___x_3726_ = lean_string_validate_utf8(v_a_3725_);
if (v___x_3726_ == 0)
{
lean_object* v___x_3727_; lean_object* v___x_3728_; 
lean_dec(v_a_3725_);
v___x_3727_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_3728_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3727_);
v___y_3688_ = v_a_3711_;
v_received_3689_ = v___x_3728_;
goto v___jp_3687_;
}
else
{
lean_object* v___x_3729_; 
v___x_3729_ = lean_string_from_utf8_unchecked(v_a_3725_);
v___y_3688_ = v_a_3711_;
v_received_3689_ = v___x_3729_;
goto v___jp_3687_;
}
}
else
{
lean_object* v___x_3730_; 
lean_dec_ref_known(v___x_3724_, 1);
v___x_3730_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_3688_ = v_a_3711_;
v_received_3689_ = v___x_3730_;
goto v___jp_3687_;
}
}
}
}
}
else
{
v___y_3708_ = v_a_3711_;
goto v___jp_3707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_3755_, lean_object* v_d_3756_, lean_object* v_a_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3755_, v_d_3756_);
lean_dec_ref(v_context_3755_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_3759_, lean_object* v_bytes_3760_){
_start:
{
lean_object* v___x_3762_; 
v___x_3762_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3760_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v___x_3764_; 
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
lean_inc(v_a_3763_);
lean_dec_ref_known(v___x_3762_, 1);
v___x_3764_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_3759_, v_a_3763_);
return v___x_3764_;
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
v_a_3765_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3762_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3762_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3773_, lean_object* v_bytes_3774_, lean_object* v_a_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(v_context_3773_, v_bytes_3774_);
lean_dec_ref(v_bytes_3774_);
lean_dec_ref(v_context_3773_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(lean_object* v_o_3777_, lean_object* v_key_3778_){
_start:
{
lean_object* v_k_3780_; lean_object* v___x_3781_; 
v_k_3780_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3780_, 0, v_key_3778_);
v___x_3781_ = l_Lasm_JS_Wire_encodeIO(v_k_3780_);
if (lean_obj_tag(v___x_3781_) == 0)
{
lean_object* v_a_3782_; uint32_t v___x_3783_; uint32_t v___x_3784_; uint64_t v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v_a_3782_ = lean_ctor_get(v___x_3781_, 0);
lean_inc(v_a_3782_);
lean_dec_ref_known(v___x_3781_, 1);
v___x_3783_ = 203;
v___x_3784_ = lasm_js_value_handle(v_o_3777_);
v___x_3785_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
v___x_3786_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3787_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3787_, 0, v_o_3777_);
lean_ctor_set(v___x_3787_, 1, v___x_3786_);
v___x_3788_ = lean_unsigned_to_nat(2u);
v___x_3789_ = lean_mk_empty_array_with_capacity(v___x_3788_);
lean_inc_ref(v_k_3780_);
v___x_3790_ = lean_array_push(v___x_3789_, v_k_3780_);
v___x_3791_ = lean_array_push(v___x_3790_, v___x_3787_);
v___x_3792_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3791_);
v___x_3793_ = lasm_js_call(v___x_3783_, v___x_3784_, v___x_3785_, v_a_3782_, v___x_3792_);
lean_dec_ref_known(v___x_3792_, 1);
lean_dec(v_a_3782_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
lean_dec_ref_known(v___x_3793_, 1);
v___x_3795_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0));
v___x_3796_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3780_);
v___x_3797_ = lean_string_append(v___x_3795_, v___x_3796_);
lean_dec_ref(v___x_3796_);
v___x_3798_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1_spec__2(v___x_3797_, v_a_3794_);
lean_dec(v_a_3794_);
lean_dec_ref(v___x_3797_);
return v___x_3798_;
}
else
{
lean_object* v_a_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3806_; 
lean_dec_ref_known(v_k_3780_, 1);
v_a_3799_ = lean_ctor_get(v___x_3793_, 0);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3801_ = v___x_3793_;
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_a_3799_);
lean_dec(v___x_3793_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3806_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3804_; 
if (v_isShared_3802_ == 0)
{
v___x_3804_ = v___x_3801_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3799_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
return v___x_3804_;
}
}
}
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3814_; 
lean_dec_ref_known(v_k_3780_, 1);
lean_dec(v_o_3777_);
v_a_3807_ = lean_ctor_get(v___x_3781_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3781_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3809_ = v___x_3781_;
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3781_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3812_; 
if (v_isShared_3810_ == 0)
{
v___x_3812_ = v___x_3809_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_a_3807_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1___boxed(lean_object* v_o_3815_, lean_object* v_key_3816_, lean_object* v_a_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(v_o_3815_, v_key_3816_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(lean_object* v_o_3819_, lean_object* v_a_3820_){
_start:
{
if (lean_obj_tag(v_a_3820_) == 0)
{
lean_object* v___x_3822_; lean_object* v___x_3823_; 
lean_dec(v_o_3819_);
v___x_3822_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
return v___x_3823_;
}
else
{
lean_object* v_tail_3824_; 
v_tail_3824_ = lean_ctor_get(v_a_3820_, 1);
if (lean_obj_tag(v_tail_3824_) == 0)
{
lean_object* v_head_3825_; lean_object* v___x_3826_; 
v_head_3825_ = lean_ctor_get(v_a_3820_, 0);
lean_inc(v_head_3825_);
lean_dec_ref_known(v_a_3820_, 2);
v___x_3826_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0_spec__1(v_o_3819_, v_head_3825_);
return v___x_3826_;
}
else
{
lean_object* v_head_3827_; lean_object* v___x_3828_; 
lean_inc(v_tail_3824_);
v_head_3827_ = lean_ctor_get(v_a_3820_, 0);
lean_inc(v_head_3827_);
lean_dec_ref_known(v_a_3820_, 2);
v___x_3828_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3819_, v_head_3827_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc(v_a_3829_);
lean_dec_ref_known(v___x_3828_, 1);
v_o_3819_ = v_a_3829_;
v_a_3820_ = v_tail_3824_;
goto _start;
}
else
{
lean_object* v_a_3831_; lean_object* v___x_3833_; uint8_t v_isShared_3834_; uint8_t v_isSharedCheck_3838_; 
lean_dec(v_tail_3824_);
v_a_3831_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3833_ = v___x_3828_;
v_isShared_3834_ = v_isSharedCheck_3838_;
goto v_resetjp_3832_;
}
else
{
lean_inc(v_a_3831_);
lean_dec(v___x_3828_);
v___x_3833_ = lean_box(0);
v_isShared_3834_ = v_isSharedCheck_3838_;
goto v_resetjp_3832_;
}
v_resetjp_3832_:
{
lean_object* v___x_3836_; 
if (v_isShared_3834_ == 0)
{
v___x_3836_ = v___x_3833_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_a_3831_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0___boxed(lean_object* v_o_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(v_o_3839_, v_a_3840_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(lean_object* v_path_3843_){
_start:
{
lean_object* v___x_3845_; 
v___x_3845_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v_a_3846_; lean_object* v___x_3847_; 
v_a_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3846_);
lean_dec_ref_known(v___x_3845_, 1);
v___x_3847_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0_spec__0(v_a_3846_, v_path_3843_);
return v___x_3847_;
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v_path_3843_);
v_a_3848_ = lean_ctor_get(v___x_3845_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3845_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3845_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3845_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0___boxed(lean_object* v_path_3856_, lean_object* v_a_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(v_path_3856_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_version(){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3867_ = ((lean_object*)(l_Lasm_JS_Deno_version___closed__2));
v___x_3868_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_version_spec__0(v___x_3867_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_version___boxed(lean_object* v_a_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l_Lasm_JS_Deno_version();
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(lean_object* v_o_3871_, lean_object* v_key_3872_){
_start:
{
lean_object* v_k_3874_; lean_object* v___x_3875_; 
v_k_3874_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3874_, 0, v_key_3872_);
v___x_3875_ = l_Lasm_JS_Wire_encodeIO(v_k_3874_);
if (lean_obj_tag(v___x_3875_) == 0)
{
lean_object* v_a_3876_; uint32_t v___x_3877_; uint32_t v___x_3878_; uint64_t v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; 
v_a_3876_ = lean_ctor_get(v___x_3875_, 0);
lean_inc(v_a_3876_);
lean_dec_ref_known(v___x_3875_, 1);
v___x_3877_ = 203;
v___x_3878_ = lasm_js_value_handle(v_o_3871_);
v___x_3879_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
v___x_3880_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_3881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3881_, 0, v_o_3871_);
lean_ctor_set(v___x_3881_, 1, v___x_3880_);
v___x_3882_ = lean_unsigned_to_nat(2u);
v___x_3883_ = lean_mk_empty_array_with_capacity(v___x_3882_);
lean_inc_ref(v_k_3874_);
v___x_3884_ = lean_array_push(v___x_3883_, v_k_3874_);
v___x_3885_ = lean_array_push(v___x_3884_, v___x_3881_);
v___x_3886_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3885_);
v___x_3887_ = lasm_js_call(v___x_3877_, v___x_3878_, v___x_3879_, v_a_3876_, v___x_3886_);
lean_dec_ref_known(v___x_3886_, 1);
lean_dec(v_a_3876_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v_a_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v_a_3888_ = lean_ctor_get(v___x_3887_, 0);
lean_inc(v_a_3888_);
lean_dec_ref_known(v___x_3887_, 1);
v___x_3889_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1___closed__0));
v___x_3890_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3874_);
v___x_3891_ = lean_string_append(v___x_3889_, v___x_3890_);
lean_dec_ref(v___x_3890_);
v___x_3892_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1(v___x_3891_, v_a_3888_);
lean_dec(v_a_3888_);
lean_dec_ref(v___x_3891_);
return v___x_3892_;
}
else
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3900_; 
lean_dec_ref_known(v_k_3874_, 1);
v_a_3893_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3895_ = v___x_3887_;
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3887_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
}
else
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3908_; 
lean_dec_ref_known(v_k_3874_, 1);
lean_dec(v_o_3871_);
v_a_3901_ = lean_ctor_get(v___x_3875_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___x_3875_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3903_ = v___x_3875_;
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v___x_3875_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3906_; 
if (v_isShared_3904_ == 0)
{
v___x_3906_ = v___x_3903_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_a_3901_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
return v___x_3906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1___boxed(lean_object* v_o_3909_, lean_object* v_key_3910_, lean_object* v_a_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(v_o_3909_, v_key_3910_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(lean_object* v_o_3913_, lean_object* v_a_3914_){
_start:
{
if (lean_obj_tag(v_a_3914_) == 0)
{
lean_object* v___x_3916_; lean_object* v___x_3917_; 
lean_dec(v_o_3913_);
v___x_3916_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3916_);
return v___x_3917_;
}
else
{
lean_object* v_tail_3918_; 
v_tail_3918_ = lean_ctor_get(v_a_3914_, 1);
if (lean_obj_tag(v_tail_3918_) == 0)
{
lean_object* v_head_3919_; lean_object* v___x_3920_; 
v_head_3919_ = lean_ctor_get(v_a_3914_, 0);
lean_inc(v_head_3919_);
lean_dec_ref_known(v_a_3914_, 2);
v___x_3920_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0_spec__1(v_o_3913_, v_head_3919_);
return v___x_3920_;
}
else
{
lean_object* v_head_3921_; lean_object* v___x_3922_; 
lean_inc(v_tail_3918_);
v_head_3921_ = lean_ctor_get(v_a_3914_, 0);
lean_inc(v_head_3921_);
lean_dec_ref_known(v_a_3914_, 2);
v___x_3922_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3913_, v_head_3921_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
lean_dec_ref_known(v___x_3922_, 1);
v_o_3913_ = v_a_3923_;
v_a_3914_ = v_tail_3918_;
goto _start;
}
else
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
lean_dec(v_tail_3918_);
v_a_3925_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3927_ = v___x_3922_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3922_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_a_3925_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0___boxed(lean_object* v_o_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(v_o_3933_, v_a_3934_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(lean_object* v_path_3937_){
_start:
{
lean_object* v___x_3939_; 
v___x_3939_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3941_; 
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3939_, 1);
v___x_3941_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0_spec__0(v_a_3940_, v_path_3937_);
return v___x_3941_;
}
else
{
lean_object* v_a_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3949_; 
lean_dec(v_path_3937_);
v_a_3942_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3944_ = v___x_3939_;
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_a_3942_);
lean_dec(v___x_3939_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3949_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3947_; 
if (v_isShared_3945_ == 0)
{
v___x_3947_ = v___x_3944_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3942_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0___boxed(lean_object* v_path_3950_, lean_object* v_a_3951_){
_start:
{
lean_object* v_res_3952_; 
v_res_3952_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(v_path_3950_);
return v_res_3952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_args(){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = ((lean_object*)(l_Lasm_JS_Deno_args___closed__2));
v___x_3962_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_args_spec__0(v___x_3961_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_args___boxed(lean_object* v_a_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_Lasm_JS_Deno_args();
return v_res_3964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(lean_object* v_o_3965_, lean_object* v_a_3966_){
_start:
{
if (lean_obj_tag(v_a_3966_) == 0)
{
lean_object* v___x_3968_; lean_object* v___x_3969_; 
lean_dec(v_o_3965_);
v___x_3968_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_pid_spec__0_spec__0___closed__1));
v___x_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
return v___x_3969_;
}
else
{
lean_object* v_tail_3970_; 
v_tail_3970_ = lean_ctor_get(v_a_3966_, 1);
if (lean_obj_tag(v_tail_3970_) == 0)
{
lean_object* v_head_3971_; lean_object* v___x_3972_; 
v_head_3971_ = lean_ctor_get(v_a_3966_, 0);
lean_inc(v_head_3971_);
lean_dec_ref_known(v_a_3966_, 2);
v___x_3972_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_o_3965_, v_head_3971_);
return v___x_3972_;
}
else
{
lean_object* v_head_3973_; lean_object* v___x_3974_; 
lean_inc(v_tail_3970_);
v_head_3973_ = lean_ctor_get(v_a_3966_, 0);
lean_inc(v_head_3973_);
lean_dec_ref_known(v_a_3966_, 2);
v___x_3974_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_3965_, v_head_3973_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref_known(v___x_3974_, 1);
v_o_3965_ = v_a_3975_;
v_a_3966_ = v_tail_3970_;
goto _start;
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec(v_tail_3970_);
v_a_3977_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3974_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3974_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0___boxed(lean_object* v_o_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(v_o_3985_, v_a_3986_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(lean_object* v_path_3989_){
_start:
{
lean_object* v___x_3991_; 
v___x_3991_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3993_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3991_, 1);
v___x_3993_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0_spec__0(v_a_3992_, v_path_3989_);
return v___x_3993_;
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec(v_path_3989_);
v_a_3994_ = lean_ctor_get(v___x_3991_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3991_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3991_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3991_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0___boxed(lean_object* v_path_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v_res_4004_; 
v_res_4004_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(v_path_4002_);
return v_res_4004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mainModule(){
_start:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4013_ = ((lean_object*)(l_Lasm_JS_Deno_mainModule___closed__2));
v___x_4014_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_mainModule_spec__0(v___x_4013_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_mainModule___boxed(lean_object* v_a_4015_){
_start:
{
lean_object* v_res_4016_; 
v_res_4016_ = l_Lasm_JS_Deno_mainModule();
return v_res_4016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(lean_object* v_d_4020_, lean_object* v_key_4021_){
_start:
{
if (lean_obj_tag(v_d_4020_) == 8)
{
lean_object* v___x_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4050_; 
v___x_4022_ = l_Lasm_JS_Data_field(v_d_4020_, v_key_4021_);
v_isSharedCheck_4050_ = !lean_is_exclusive(v_d_4020_);
if (v_isSharedCheck_4050_ == 0)
{
lean_object* v_unused_4051_; 
v_unused_4051_ = lean_ctor_get(v_d_4020_, 0);
lean_dec(v_unused_4051_);
v___x_4024_ = v_d_4020_;
v_isShared_4025_ = v_isSharedCheck_4050_;
goto v_resetjp_4023_;
}
else
{
lean_dec(v_d_4020_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4050_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
if (lean_obj_tag(v___x_4022_) == 3)
{
double v_n_4026_; lean_object* v___x_4027_; lean_object* v___x_4029_; 
v_n_4026_ = lean_ctor_get_float(v___x_4022_, 0);
lean_dec_ref_known(v___x_4022_, 0);
v___x_4027_ = lean_box_float(v_n_4026_);
if (v_isShared_4025_ == 0)
{
lean_ctor_set_tag(v___x_4024_, 1);
lean_ctor_set(v___x_4024_, 0, v___x_4027_);
v___x_4029_ = v___x_4024_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v___x_4027_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
return v___x_4029_;
}
}
else
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; uint8_t v___x_4041_; 
v___x_4031_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_4032_ = lean_string_append(v___x_4031_, v_key_4021_);
v___x_4033_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_4034_ = lean_string_append(v___x_4032_, v___x_4033_);
v___x_4035_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__0));
v___x_4036_ = lean_string_append(v___x_4034_, v___x_4035_);
v___x_4037_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_4038_ = lean_string_append(v___x_4036_, v___x_4037_);
v___x_4039_ = l_Lasm_JS_Data_describe(v___x_4022_);
v___x_4040_ = lean_string_append(v___x_4038_, v___x_4039_);
lean_dec_ref(v___x_4039_);
v___x_4041_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_4041_ == 0)
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4045_; 
v___x_4042_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Deno_build_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_4043_ = lean_string_append(v___x_4040_, v___x_4042_);
if (v_isShared_4025_ == 0)
{
lean_ctor_set_tag(v___x_4024_, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4043_);
v___x_4045_ = v___x_4024_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v___x_4043_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
else
{
lean_object* v___x_4048_; 
if (v_isShared_4025_ == 0)
{
lean_ctor_set_tag(v___x_4024_, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4040_);
v___x_4048_ = v___x_4024_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v___x_4040_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
}
else
{
lean_object* v___x_4052_; 
lean_dec(v_d_4020_);
v___x_4052_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___closed__1));
return v___x_4052_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1___boxed(lean_object* v_d_4053_, lean_object* v_key_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4053_, v_key_4054_);
lean_dec_ref(v_key_4054_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(lean_object* v_context_4056_, lean_object* v_d_4057_){
_start:
{
lean_object* v___y_4060_; lean_object* v___y_4061_; lean_object* v___y_4066_; lean_object* v_received_4067_; lean_object* v___y_4086_; lean_object* v_a_4089_; lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4113_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__0));
lean_inc(v_d_4057_);
v___x_4114_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4057_, v___x_4113_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_a_4115_; 
v_a_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4115_);
lean_dec_ref_known(v___x_4114_, 1);
v_a_4089_ = v_a_4115_;
goto v___jp_4088_;
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v_a_4116_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4116_);
lean_dec_ref_known(v___x_4114_, 1);
v___x_4117_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__1));
lean_inc(v_d_4057_);
v___x_4118_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4057_, v___x_4117_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; 
lean_dec(v_a_4116_);
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4119_);
lean_dec_ref_known(v___x_4118_, 1);
v_a_4089_ = v_a_4119_;
goto v___jp_4088_;
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; 
v_a_4120_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4120_);
lean_dec_ref_known(v___x_4118_, 1);
v___x_4121_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__2));
lean_inc(v_d_4057_);
v___x_4122_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4057_, v___x_4121_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v_a_4123_; 
lean_dec(v_a_4120_);
lean_dec(v_a_4116_);
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4123_);
lean_dec_ref_known(v___x_4122_, 1);
v_a_4089_ = v_a_4123_;
goto v___jp_4088_;
}
else
{
lean_object* v_a_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v_a_4124_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4124_);
lean_dec_ref_known(v___x_4122_, 1);
v___x_4125_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___lam__0___closed__3));
lean_inc(v_d_4057_);
v___x_4126_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4057_, v___x_4125_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v_a_4127_; 
lean_dec(v_a_4124_);
lean_dec(v_a_4120_);
lean_dec(v_a_4116_);
v_a_4127_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4126_, 1);
v_a_4089_ = v_a_4127_;
goto v___jp_4088_;
}
else
{
lean_object* v_a_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4140_; 
lean_dec(v_d_4057_);
v_a_4128_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4130_ = v___x_4126_;
v_isShared_4131_ = v_isSharedCheck_4140_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_a_4128_);
lean_dec(v___x_4126_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4140_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4132_; double v___x_4133_; double v___x_4134_; double v___x_4135_; double v___x_4136_; lean_object* v___x_4138_; 
v___x_4132_ = lean_alloc_ctor(0, 0, 32);
v___x_4133_ = lean_unbox_float(v_a_4116_);
lean_dec(v_a_4116_);
lean_ctor_set_float(v___x_4132_, 0, v___x_4133_);
v___x_4134_ = lean_unbox_float(v_a_4120_);
lean_dec(v_a_4120_);
lean_ctor_set_float(v___x_4132_, 8, v___x_4134_);
v___x_4135_ = lean_unbox_float(v_a_4124_);
lean_dec(v_a_4124_);
lean_ctor_set_float(v___x_4132_, 16, v___x_4135_);
v___x_4136_ = lean_unbox_float(v_a_4128_);
lean_dec(v_a_4128_);
lean_ctor_set_float(v___x_4132_, 24, v___x_4136_);
if (v_isShared_4131_ == 0)
{
lean_ctor_set_tag(v___x_4130_, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4132_);
v___x_4138_ = v___x_4130_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4132_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
}
}
v___jp_4059_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; 
v___x_4062_ = lean_string_append(v___y_4060_, v___y_4061_);
lean_dec_ref(v___y_4061_);
v___x_4063_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
v___x_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4063_);
return v___x_4064_;
}
v___jp_4065_:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; 
v___x_4068_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4069_ = lean_string_append(v___x_4068_, v_context_4056_);
v___x_4070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_4071_ = lean_string_append(v___x_4069_, v___x_4070_);
v___x_4072_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSMemoryUsage___closed__1));
v___x_4073_ = lean_string_append(v___x_4071_, v___x_4072_);
v___x_4074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_4075_ = lean_string_append(v___x_4073_, v___x_4074_);
v___x_4076_ = lean_string_append(v___x_4075_, v_received_4067_);
lean_dec_ref(v_received_4067_);
v___x_4077_ = lean_string_utf8_byte_size(v___y_4066_);
v___x_4078_ = lean_unsigned_to_nat(0u);
v___x_4079_ = lean_nat_dec_eq(v___x_4077_, v___x_4078_);
if (v___x_4079_ == 0)
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
v___x_4080_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_4081_ = lean_string_append(v___x_4080_, v___y_4066_);
lean_dec_ref(v___y_4066_);
v___x_4082_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_4083_ = lean_string_append(v___x_4081_, v___x_4082_);
v___y_4060_ = v___x_4076_;
v___y_4061_ = v___x_4083_;
goto v___jp_4059_;
}
else
{
lean_object* v___x_4084_; 
lean_dec_ref(v___y_4066_);
v___x_4084_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_4060_ = v___x_4076_;
v___y_4061_ = v___x_4084_;
goto v___jp_4059_;
}
}
v___jp_4085_:
{
lean_object* v___x_4087_; 
v___x_4087_ = l_Lasm_JS_Data_describe(v_d_4057_);
v___y_4066_ = v___y_4086_;
v_received_4067_ = v___x_4087_;
goto v___jp_4065_;
}
v___jp_4088_:
{
if (lean_obj_tag(v_d_4057_) == 9)
{
lean_object* v_value_4090_; lean_object* v_description_4091_; lean_object* v___x_4092_; uint8_t v___x_4093_; 
v_value_4090_ = lean_ctor_get(v_d_4057_, 0);
v_description_4091_ = lean_ctor_get(v_d_4057_, 1);
v___x_4092_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4093_ = lean_string_dec_eq(v_description_4091_, v___x_4092_);
if (v___x_4093_ == 0)
{
v___y_4086_ = v_a_4089_;
goto v___jp_4085_;
}
else
{
lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4110_; 
lean_inc(v_value_4090_);
v_isSharedCheck_4110_ = !lean_is_exclusive(v_d_4057_);
if (v_isSharedCheck_4110_ == 0)
{
lean_object* v_unused_4111_; lean_object* v_unused_4112_; 
v_unused_4111_ = lean_ctor_get(v_d_4057_, 1);
lean_dec(v_unused_4111_);
v_unused_4112_ = lean_ctor_get(v_d_4057_, 0);
lean_dec(v_unused_4112_);
v___x_4095_ = v_d_4057_;
v_isShared_4096_ = v_isSharedCheck_4110_;
goto v_resetjp_4094_;
}
else
{
lean_dec(v_d_4057_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4110_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
uint32_t v___x_4097_; uint64_t v___x_4098_; lean_object* v___x_4100_; 
v___x_4097_ = 206;
v___x_4098_ = 0ULL;
lean_inc(v_value_4090_);
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 1, v___x_4092_);
v___x_4100_ = v___x_4095_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_value_4090_);
lean_ctor_set(v_reuseFailAlloc_4109_, 1, v___x_4092_);
v___x_4100_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
uint32_t v___x_4101_; lean_object* v___x_4102_; 
v___x_4101_ = lasm_js_value_handle(v_value_4090_);
lean_dec(v_value_4090_);
v___x_4102_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4097_, v___x_4098_, v___x_4100_, v___x_4101_);
lean_dec_ref(v___x_4100_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; uint8_t v___x_4104_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
v___x_4104_ = lean_string_validate_utf8(v_a_4103_);
if (v___x_4104_ == 0)
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
lean_dec(v_a_4103_);
v___x_4105_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_4106_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4105_);
v___y_4066_ = v_a_4089_;
v_received_4067_ = v___x_4106_;
goto v___jp_4065_;
}
else
{
lean_object* v___x_4107_; 
v___x_4107_ = lean_string_from_utf8_unchecked(v_a_4103_);
v___y_4066_ = v_a_4089_;
v_received_4067_ = v___x_4107_;
goto v___jp_4065_;
}
}
else
{
lean_object* v___x_4108_; 
lean_dec_ref_known(v___x_4102_, 1);
v___x_4108_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_4066_ = v_a_4089_;
v_received_4067_ = v___x_4108_;
goto v___jp_4065_;
}
}
}
}
}
else
{
v___y_4086_ = v_a_4089_;
goto v___jp_4085_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0___boxed(lean_object* v_context_4141_, lean_object* v_d_4142_, lean_object* v_a_4143_){
_start:
{
lean_object* v_res_4144_; 
v_res_4144_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(v_context_4141_, v_d_4142_);
lean_dec_ref(v_context_4141_);
return v_res_4144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(lean_object* v_b_4145_, lean_object* v_args_4146_, uint8_t v_await_4147_){
_start:
{
uint64_t v___y_4150_; uint64_t v___y_4151_; uint64_t v___x_4194_; uint64_t v___y_4196_; 
v___x_4194_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4147_ == 0)
{
uint64_t v___x_4201_; 
v___x_4201_ = 0ULL;
v___y_4196_ = v___x_4201_;
goto v___jp_4195_;
}
else
{
uint64_t v___x_4202_; 
v___x_4202_ = 2ULL;
v___y_4196_ = v___x_4202_;
goto v___jp_4195_;
}
v___jp_4149_:
{
uint64_t v_flags_4152_; uint32_t v___x_4153_; lean_object* v___x_4154_; uint32_t v___x_4155_; lean_object* v___x_4156_; 
v_flags_4152_ = lean_uint64_lor(v___y_4150_, v___y_4151_);
v___x_4153_ = 214;
v___x_4154_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4145_, v_args_4146_);
v___x_4155_ = 0;
v___x_4156_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4153_, v_flags_4152_, v___x_4154_, v___x_4155_);
lean_dec(v___x_4154_);
if (lean_obj_tag(v___x_4156_) == 0)
{
if (lean_obj_tag(v___x_4156_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4158_; 
v_a_4157_ = lean_ctor_get(v___x_4156_, 0);
lean_inc(v_a_4157_);
lean_dec_ref_known(v___x_4156_, 1);
v___x_4158_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4157_);
lean_dec(v_a_4157_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
v___x_4160_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4145_);
v___x_4161_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0(v___x_4160_, v_a_4159_);
lean_dec_ref(v___x_4160_);
return v___x_4161_;
}
else
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4169_; 
v_a_4162_ = lean_ctor_get(v___x_4158_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4164_ = v___x_4158_;
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v___x_4158_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4169_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
lean_object* v___x_4167_; 
if (v_isShared_4165_ == 0)
{
v___x_4167_ = v___x_4164_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4162_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
}
}
else
{
lean_object* v_a_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4177_; 
v_a_4170_ = lean_ctor_get(v___x_4156_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4156_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4172_ = v___x_4156_;
v_isShared_4173_ = v_isSharedCheck_4177_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_a_4170_);
lean_dec(v___x_4156_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4177_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
lean_object* v___x_4175_; 
if (v_isShared_4173_ == 0)
{
lean_ctor_set_tag(v___x_4172_, 1);
v___x_4175_ = v___x_4172_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v_a_4170_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4193_; 
v_a_4178_ = lean_ctor_get(v___x_4156_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4156_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4180_ = v___x_4156_;
v_isShared_4181_ = v_isSharedCheck_4193_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4156_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4193_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4191_; 
v___x_4182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4183_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4145_);
v___x_4184_ = lean_string_append(v___x_4182_, v___x_4183_);
lean_dec_ref(v___x_4183_);
v___x_4185_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4186_ = lean_string_append(v___x_4184_, v___x_4185_);
v___x_4187_ = lean_io_error_to_string(v_a_4178_);
v___x_4188_ = lean_string_append(v___x_4186_, v___x_4187_);
lean_dec_ref(v___x_4187_);
v___x_4189_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4189_);
v___x_4191_ = v___x_4180_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v___x_4189_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
v___jp_4195_:
{
uint8_t v_construct_4197_; uint64_t v___x_4198_; 
v_construct_4197_ = lean_ctor_get_uint8(v_b_4145_, sizeof(void*)*4);
v___x_4198_ = lean_uint64_lor(v___x_4194_, v___y_4196_);
if (v_construct_4197_ == 0)
{
uint64_t v___x_4199_; 
v___x_4199_ = 0ULL;
v___y_4150_ = v___x_4198_;
v___y_4151_ = v___x_4199_;
goto v___jp_4149_;
}
else
{
uint64_t v___x_4200_; 
v___x_4200_ = 4ULL;
v___y_4150_ = v___x_4198_;
v___y_4151_ = v___x_4200_;
goto v___jp_4149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0___boxed(lean_object* v_b_4203_, lean_object* v_args_4204_, lean_object* v_await_4205_, lean_object* v_a_4206_){
_start:
{
uint8_t v_await_boxed_4207_; lean_object* v_res_4208_; 
v_await_boxed_4207_ = lean_unbox(v_await_4205_);
v_res_4208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(v_b_4203_, v_args_4204_, v_await_boxed_4207_);
lean_dec_ref(v_b_4203_);
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_memoryUsage(){
_start:
{
uint8_t v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; 
v___x_4219_ = 0;
v___x_4220_ = ((lean_object*)(l_Lasm_JS_Deno_memoryUsage___closed__3));
v___x_4221_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4222_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0(v___x_4220_, v___x_4221_, v___x_4219_);
return v___x_4222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_memoryUsage___boxed(lean_object* v_a_4223_){
_start:
{
lean_object* v_res_4224_; 
v_res_4224_ = l_Lasm_JS_Deno_memoryUsage();
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_hostname(){
_start:
{
uint8_t v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4234_ = 0;
v___x_4235_ = ((lean_object*)(l_Lasm_JS_Deno_hostname___closed__2));
v___x_4236_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4237_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4235_, v___x_4236_, v___x_4234_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_hostname___boxed(lean_object* v_a_4238_){
_start:
{
lean_object* v_res_4239_; 
v_res_4239_ = l_Lasm_JS_Deno_hostname();
return v_res_4239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(size_t v_sz_4242_, size_t v_i_4243_, lean_object* v_bs_4244_){
_start:
{
uint8_t v___x_4245_; 
v___x_4245_ = lean_usize_dec_lt(v_i_4243_, v_sz_4242_);
if (v___x_4245_ == 0)
{
lean_object* v___x_4246_; 
v___x_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4246_, 0, v_bs_4244_);
return v___x_4246_;
}
else
{
lean_object* v_v_4247_; 
v_v_4247_ = lean_array_uget_borrowed(v_bs_4244_, v_i_4243_);
if (lean_obj_tag(v_v_4247_) == 3)
{
double v_n_4248_; lean_object* v___x_4249_; lean_object* v_bs_x27_4250_; size_t v___x_4251_; size_t v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; 
v_n_4248_ = lean_ctor_get_float(v_v_4247_, 0);
v___x_4249_ = lean_unsigned_to_nat(0u);
v_bs_x27_4250_ = lean_array_uset(v_bs_4244_, v_i_4243_, v___x_4249_);
v___x_4251_ = ((size_t)1ULL);
v___x_4252_ = lean_usize_add(v_i_4243_, v___x_4251_);
v___x_4253_ = lean_box_float(v_n_4248_);
v___x_4254_ = lean_array_uset(v_bs_x27_4250_, v_i_4243_, v___x_4253_);
v_i_4243_ = v___x_4252_;
v_bs_4244_ = v___x_4254_;
goto _start;
}
else
{
lean_object* v___x_4256_; 
lean_dec_ref(v_bs_4244_);
v___x_4256_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___closed__0));
return v___x_4256_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_4257_, lean_object* v_i_4258_, lean_object* v_bs_4259_){
_start:
{
size_t v_sz_boxed_4260_; size_t v_i_boxed_4261_; lean_object* v_res_4262_; 
v_sz_boxed_4260_ = lean_unbox_usize(v_sz_4257_);
lean_dec(v_sz_4257_);
v_i_boxed_4261_ = lean_unbox_usize(v_i_4258_);
lean_dec(v_i_4258_);
v_res_4262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(v_sz_boxed_4260_, v_i_boxed_4261_, v_bs_4259_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(lean_object* v_context_4265_, lean_object* v_d_4266_){
_start:
{
lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4275_; lean_object* v_received_4276_; lean_object* v___y_4295_; lean_object* v_a_4298_; 
if (lean_obj_tag(v_d_4266_) == 7)
{
lean_object* v_items_4322_; size_t v_sz_4323_; size_t v___x_4324_; lean_object* v___x_4325_; 
v_items_4322_ = lean_ctor_get(v_d_4266_, 0);
v_sz_4323_ = lean_array_size(v_items_4322_);
v___x_4324_ = ((size_t)0ULL);
lean_inc_ref(v_items_4322_);
v___x_4325_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0_spec__1(v_sz_4323_, v___x_4324_, v_items_4322_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; uint8_t v___x_4330_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4326_);
lean_dec_ref_known(v___x_4325_, 1);
v___x_4327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__1));
v___x_4328_ = lean_string_utf8_byte_size(v_a_4326_);
v___x_4329_ = lean_unsigned_to_nat(0u);
v___x_4330_ = lean_nat_dec_eq(v___x_4328_, v___x_4329_);
if (v___x_4330_ == 0)
{
lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; 
v___x_4331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4332_ = lean_string_append(v___x_4331_, v_a_4326_);
lean_dec(v_a_4326_);
v___x_4333_ = lean_string_append(v___x_4327_, v___x_4332_);
lean_dec_ref(v___x_4332_);
v_a_4298_ = v___x_4333_;
goto v___jp_4297_;
}
else
{
lean_dec(v_a_4326_);
v_a_4298_ = v___x_4327_;
goto v___jp_4297_;
}
}
else
{
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4334_; 
v_a_4334_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4334_);
lean_dec_ref_known(v___x_4325_, 1);
v_a_4298_ = v_a_4334_;
goto v___jp_4297_;
}
else
{
lean_object* v_a_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4342_; 
lean_dec_ref_known(v_d_4266_, 1);
v_a_4335_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4337_ = v___x_4325_;
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_a_4335_);
lean_dec(v___x_4325_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4340_; 
if (v_isShared_4338_ == 0)
{
lean_ctor_set_tag(v___x_4337_, 0);
v___x_4340_ = v___x_4337_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v_a_4335_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
}
}
}
else
{
lean_object* v___x_4343_; 
v___x_4343_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v_a_4298_ = v___x_4343_;
goto v___jp_4297_;
}
v___jp_4268_:
{
lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; 
v___x_4271_ = lean_string_append(v___y_4269_, v___y_4270_);
lean_dec_ref(v___y_4270_);
v___x_4272_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4271_);
v___x_4273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4273_, 0, v___x_4272_);
return v___x_4273_;
}
v___jp_4274_:
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; uint8_t v___x_4288_; 
v___x_4277_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4278_ = lean_string_append(v___x_4277_, v_context_4265_);
v___x_4279_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_4280_ = lean_string_append(v___x_4278_, v___x_4279_);
v___x_4281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___closed__0));
v___x_4282_ = lean_string_append(v___x_4280_, v___x_4281_);
v___x_4283_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_4284_ = lean_string_append(v___x_4282_, v___x_4283_);
v___x_4285_ = lean_string_append(v___x_4284_, v_received_4276_);
lean_dec_ref(v_received_4276_);
v___x_4286_ = lean_string_utf8_byte_size(v___y_4275_);
v___x_4287_ = lean_unsigned_to_nat(0u);
v___x_4288_ = lean_nat_dec_eq(v___x_4286_, v___x_4287_);
if (v___x_4288_ == 0)
{
lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4289_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_4290_ = lean_string_append(v___x_4289_, v___y_4275_);
lean_dec_ref(v___y_4275_);
v___x_4291_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_4292_ = lean_string_append(v___x_4290_, v___x_4291_);
v___y_4269_ = v___x_4285_;
v___y_4270_ = v___x_4292_;
goto v___jp_4268_;
}
else
{
lean_object* v___x_4293_; 
lean_dec_ref(v___y_4275_);
v___x_4293_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_4269_ = v___x_4285_;
v___y_4270_ = v___x_4293_;
goto v___jp_4268_;
}
}
v___jp_4294_:
{
lean_object* v___x_4296_; 
v___x_4296_ = l_Lasm_JS_Data_describe(v_d_4266_);
v___y_4275_ = v___y_4295_;
v_received_4276_ = v___x_4296_;
goto v___jp_4274_;
}
v___jp_4297_:
{
if (lean_obj_tag(v_d_4266_) == 9)
{
lean_object* v_value_4299_; lean_object* v_description_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; 
v_value_4299_ = lean_ctor_get(v_d_4266_, 0);
v_description_4300_ = lean_ctor_get(v_d_4266_, 1);
v___x_4301_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4302_ = lean_string_dec_eq(v_description_4300_, v___x_4301_);
if (v___x_4302_ == 0)
{
v___y_4295_ = v_a_4298_;
goto v___jp_4294_;
}
else
{
lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4319_; 
lean_inc(v_value_4299_);
v_isSharedCheck_4319_ = !lean_is_exclusive(v_d_4266_);
if (v_isSharedCheck_4319_ == 0)
{
lean_object* v_unused_4320_; lean_object* v_unused_4321_; 
v_unused_4320_ = lean_ctor_get(v_d_4266_, 1);
lean_dec(v_unused_4320_);
v_unused_4321_ = lean_ctor_get(v_d_4266_, 0);
lean_dec(v_unused_4321_);
v___x_4304_ = v_d_4266_;
v_isShared_4305_ = v_isSharedCheck_4319_;
goto v_resetjp_4303_;
}
else
{
lean_dec(v_d_4266_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4319_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
uint32_t v___x_4306_; uint64_t v___x_4307_; lean_object* v___x_4309_; 
v___x_4306_ = 206;
v___x_4307_ = 0ULL;
lean_inc(v_value_4299_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 1, v___x_4301_);
v___x_4309_ = v___x_4304_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_value_4299_);
lean_ctor_set(v_reuseFailAlloc_4318_, 1, v___x_4301_);
v___x_4309_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
uint32_t v___x_4310_; lean_object* v___x_4311_; 
v___x_4310_ = lasm_js_value_handle(v_value_4299_);
lean_dec(v_value_4299_);
v___x_4311_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4306_, v___x_4307_, v___x_4309_, v___x_4310_);
lean_dec_ref(v___x_4309_);
if (lean_obj_tag(v___x_4311_) == 0)
{
lean_object* v_a_4312_; uint8_t v___x_4313_; 
v_a_4312_ = lean_ctor_get(v___x_4311_, 0);
lean_inc(v_a_4312_);
lean_dec_ref_known(v___x_4311_, 1);
v___x_4313_ = lean_string_validate_utf8(v_a_4312_);
if (v___x_4313_ == 0)
{
lean_object* v___x_4314_; lean_object* v___x_4315_; 
lean_dec(v_a_4312_);
v___x_4314_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_4315_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4314_);
v___y_4275_ = v_a_4298_;
v_received_4276_ = v___x_4315_;
goto v___jp_4274_;
}
else
{
lean_object* v___x_4316_; 
v___x_4316_ = lean_string_from_utf8_unchecked(v_a_4312_);
v___y_4275_ = v_a_4298_;
v_received_4276_ = v___x_4316_;
goto v___jp_4274_;
}
}
else
{
lean_object* v___x_4317_; 
lean_dec_ref_known(v___x_4311_, 1);
v___x_4317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_4275_ = v_a_4298_;
v_received_4276_ = v___x_4317_;
goto v___jp_4274_;
}
}
}
}
}
else
{
v___y_4295_ = v_a_4298_;
goto v___jp_4294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0___boxed(lean_object* v_context_4344_, lean_object* v_d_4345_, lean_object* v_a_4346_){
_start:
{
lean_object* v_res_4347_; 
v_res_4347_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(v_context_4344_, v_d_4345_);
lean_dec_ref(v_context_4344_);
return v_res_4347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(lean_object* v_b_4348_, lean_object* v_args_4349_, uint8_t v_await_4350_){
_start:
{
uint64_t v___y_4353_; uint64_t v___y_4354_; uint64_t v___x_4397_; uint64_t v___y_4399_; 
v___x_4397_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4350_ == 0)
{
uint64_t v___x_4404_; 
v___x_4404_ = 0ULL;
v___y_4399_ = v___x_4404_;
goto v___jp_4398_;
}
else
{
uint64_t v___x_4405_; 
v___x_4405_ = 2ULL;
v___y_4399_ = v___x_4405_;
goto v___jp_4398_;
}
v___jp_4352_:
{
uint64_t v_flags_4355_; uint32_t v___x_4356_; lean_object* v___x_4357_; uint32_t v___x_4358_; lean_object* v___x_4359_; 
v_flags_4355_ = lean_uint64_lor(v___y_4353_, v___y_4354_);
v___x_4356_ = 214;
v___x_4357_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4348_, v_args_4349_);
v___x_4358_ = 0;
v___x_4359_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4356_, v_flags_4355_, v___x_4357_, v___x_4358_);
lean_dec(v___x_4357_);
if (lean_obj_tag(v___x_4359_) == 0)
{
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v_a_4360_; lean_object* v___x_4361_; 
v_a_4360_ = lean_ctor_get(v___x_4359_, 0);
lean_inc(v_a_4360_);
lean_dec_ref_known(v___x_4359_, 1);
v___x_4361_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4360_);
lean_dec(v_a_4360_);
if (lean_obj_tag(v___x_4361_) == 0)
{
lean_object* v_a_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v_a_4362_ = lean_ctor_get(v___x_4361_, 0);
lean_inc(v_a_4362_);
lean_dec_ref_known(v___x_4361_, 1);
v___x_4363_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4348_);
v___x_4364_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0_spec__0(v___x_4363_, v_a_4362_);
lean_dec_ref(v___x_4363_);
return v___x_4364_;
}
else
{
lean_object* v_a_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4372_; 
v_a_4365_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4372_ == 0)
{
v___x_4367_ = v___x_4361_;
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_a_4365_);
lean_dec(v___x_4361_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_a_4365_);
v___x_4370_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
return v___x_4370_;
}
}
}
}
else
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4380_; 
v_a_4373_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4375_ = v___x_4359_;
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4359_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4378_; 
if (v_isShared_4376_ == 0)
{
lean_ctor_set_tag(v___x_4375_, 1);
v___x_4378_ = v___x_4375_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_a_4373_);
v___x_4378_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
return v___x_4378_;
}
}
}
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4396_; 
v_a_4381_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4396_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4396_ == 0)
{
v___x_4383_ = v___x_4359_;
v_isShared_4384_ = v_isSharedCheck_4396_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4359_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4396_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4394_; 
v___x_4385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4386_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4348_);
v___x_4387_ = lean_string_append(v___x_4385_, v___x_4386_);
lean_dec_ref(v___x_4386_);
v___x_4388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4389_ = lean_string_append(v___x_4387_, v___x_4388_);
v___x_4390_ = lean_io_error_to_string(v_a_4381_);
v___x_4391_ = lean_string_append(v___x_4389_, v___x_4390_);
lean_dec_ref(v___x_4390_);
v___x_4392_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4391_);
if (v_isShared_4384_ == 0)
{
lean_ctor_set(v___x_4383_, 0, v___x_4392_);
v___x_4394_ = v___x_4383_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v___x_4392_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
}
v___jp_4398_:
{
uint8_t v_construct_4400_; uint64_t v___x_4401_; 
v_construct_4400_ = lean_ctor_get_uint8(v_b_4348_, sizeof(void*)*4);
v___x_4401_ = lean_uint64_lor(v___x_4397_, v___y_4399_);
if (v_construct_4400_ == 0)
{
uint64_t v___x_4402_; 
v___x_4402_ = 0ULL;
v___y_4353_ = v___x_4401_;
v___y_4354_ = v___x_4402_;
goto v___jp_4352_;
}
else
{
uint64_t v___x_4403_; 
v___x_4403_ = 4ULL;
v___y_4353_ = v___x_4401_;
v___y_4354_ = v___x_4403_;
goto v___jp_4352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0___boxed(lean_object* v_b_4406_, lean_object* v_args_4407_, lean_object* v_await_4408_, lean_object* v_a_4409_){
_start:
{
uint8_t v_await_boxed_4410_; lean_object* v_res_4411_; 
v_await_boxed_4410_ = lean_unbox(v_await_4408_);
v_res_4411_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(v_b_4406_, v_args_4407_, v_await_boxed_4410_);
lean_dec_ref(v_b_4406_);
return v_res_4411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_loadavg(){
_start:
{
uint8_t v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4421_ = 0;
v___x_4422_ = ((lean_object*)(l_Lasm_JS_Deno_loadavg___closed__2));
v___x_4423_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4424_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_loadavg_spec__0(v___x_4422_, v___x_4423_, v___x_4421_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_loadavg___boxed(lean_object* v_a_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lasm_JS_Deno_loadavg();
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(lean_object* v_context_4427_, lean_object* v_d_4428_){
_start:
{
lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4437_; lean_object* v_received_4438_; lean_object* v___y_4457_; lean_object* v_a_4460_; lean_object* v___x_4484_; lean_object* v___x_4485_; 
v___x_4484_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__0));
lean_inc(v_d_4428_);
v___x_4485_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4484_);
if (lean_obj_tag(v___x_4485_) == 0)
{
lean_object* v_a_4486_; 
v_a_4486_ = lean_ctor_get(v___x_4485_, 0);
lean_inc(v_a_4486_);
lean_dec_ref_known(v___x_4485_, 1);
v_a_4460_ = v_a_4486_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; 
v_a_4487_ = lean_ctor_get(v___x_4485_, 0);
lean_inc(v_a_4487_);
lean_dec_ref_known(v___x_4485_, 1);
v___x_4488_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__1));
lean_inc(v_d_4428_);
v___x_4489_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4488_);
if (lean_obj_tag(v___x_4489_) == 0)
{
lean_object* v_a_4490_; 
lean_dec(v_a_4487_);
v_a_4490_ = lean_ctor_get(v___x_4489_, 0);
lean_inc(v_a_4490_);
lean_dec_ref_known(v___x_4489_, 1);
v_a_4460_ = v_a_4490_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v_a_4491_ = lean_ctor_get(v___x_4489_, 0);
lean_inc(v_a_4491_);
lean_dec_ref_known(v___x_4489_, 1);
v___x_4492_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__2));
lean_inc(v_d_4428_);
v___x_4493_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4492_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v_a_4494_; 
lean_dec(v_a_4491_);
lean_dec(v_a_4487_);
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_a_4494_);
lean_dec_ref_known(v___x_4493_, 1);
v_a_4460_ = v_a_4494_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v_a_4495_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_a_4495_);
lean_dec_ref_known(v___x_4493_, 1);
v___x_4496_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__3));
lean_inc(v_d_4428_);
v___x_4497_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4496_);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v_a_4498_; 
lean_dec(v_a_4495_);
lean_dec(v_a_4491_);
lean_dec(v_a_4487_);
v_a_4498_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_a_4498_);
lean_dec_ref_known(v___x_4497_, 1);
v_a_4460_ = v_a_4498_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v_a_4499_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_a_4499_);
lean_dec_ref_known(v___x_4497_, 1);
v___x_4500_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__4));
lean_inc(v_d_4428_);
v___x_4501_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4500_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; 
lean_dec(v_a_4499_);
lean_dec(v_a_4495_);
lean_dec(v_a_4491_);
lean_dec(v_a_4487_);
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref_known(v___x_4501_, 1);
v_a_4460_ = v_a_4502_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v_a_4503_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4503_);
lean_dec_ref_known(v___x_4501_, 1);
v___x_4504_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__5));
lean_inc(v_d_4428_);
v___x_4505_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4504_);
if (lean_obj_tag(v___x_4505_) == 0)
{
lean_object* v_a_4506_; 
lean_dec(v_a_4503_);
lean_dec(v_a_4499_);
lean_dec(v_a_4495_);
lean_dec(v_a_4491_);
lean_dec(v_a_4487_);
v_a_4506_ = lean_ctor_get(v___x_4505_, 0);
lean_inc(v_a_4506_);
lean_dec_ref_known(v___x_4505_, 1);
v_a_4460_ = v_a_4506_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
v_a_4507_ = lean_ctor_get(v___x_4505_, 0);
lean_inc(v_a_4507_);
lean_dec_ref_known(v___x_4505_, 1);
v___x_4508_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___lam__0___closed__6));
lean_inc(v_d_4428_);
v___x_4509_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_memoryUsage_spec__0_spec__0_spec__1(v_d_4428_, v___x_4508_);
if (lean_obj_tag(v___x_4509_) == 0)
{
lean_object* v_a_4510_; 
lean_dec(v_a_4507_);
lean_dec(v_a_4503_);
lean_dec(v_a_4499_);
lean_dec(v_a_4495_);
lean_dec(v_a_4491_);
lean_dec(v_a_4487_);
v_a_4510_ = lean_ctor_get(v___x_4509_, 0);
lean_inc(v_a_4510_);
lean_dec_ref_known(v___x_4509_, 1);
v_a_4460_ = v_a_4510_;
goto v___jp_4459_;
}
else
{
lean_object* v_a_4511_; lean_object* v___x_4513_; uint8_t v_isShared_4514_; uint8_t v_isSharedCheck_4526_; 
lean_dec(v_d_4428_);
v_a_4511_ = lean_ctor_get(v___x_4509_, 0);
v_isSharedCheck_4526_ = !lean_is_exclusive(v___x_4509_);
if (v_isSharedCheck_4526_ == 0)
{
v___x_4513_ = v___x_4509_;
v_isShared_4514_ = v_isSharedCheck_4526_;
goto v_resetjp_4512_;
}
else
{
lean_inc(v_a_4511_);
lean_dec(v___x_4509_);
v___x_4513_ = lean_box(0);
v_isShared_4514_ = v_isSharedCheck_4526_;
goto v_resetjp_4512_;
}
v_resetjp_4512_:
{
lean_object* v___x_4515_; double v___x_4516_; double v___x_4517_; double v___x_4518_; double v___x_4519_; double v___x_4520_; double v___x_4521_; double v___x_4522_; lean_object* v___x_4524_; 
v___x_4515_ = lean_alloc_ctor(0, 0, 56);
v___x_4516_ = lean_unbox_float(v_a_4487_);
lean_dec(v_a_4487_);
lean_ctor_set_float(v___x_4515_, 0, v___x_4516_);
v___x_4517_ = lean_unbox_float(v_a_4491_);
lean_dec(v_a_4491_);
lean_ctor_set_float(v___x_4515_, 8, v___x_4517_);
v___x_4518_ = lean_unbox_float(v_a_4495_);
lean_dec(v_a_4495_);
lean_ctor_set_float(v___x_4515_, 16, v___x_4518_);
v___x_4519_ = lean_unbox_float(v_a_4499_);
lean_dec(v_a_4499_);
lean_ctor_set_float(v___x_4515_, 24, v___x_4519_);
v___x_4520_ = lean_unbox_float(v_a_4503_);
lean_dec(v_a_4503_);
lean_ctor_set_float(v___x_4515_, 32, v___x_4520_);
v___x_4521_ = lean_unbox_float(v_a_4507_);
lean_dec(v_a_4507_);
lean_ctor_set_float(v___x_4515_, 40, v___x_4521_);
v___x_4522_ = lean_unbox_float(v_a_4511_);
lean_dec(v_a_4511_);
lean_ctor_set_float(v___x_4515_, 48, v___x_4522_);
if (v_isShared_4514_ == 0)
{
lean_ctor_set_tag(v___x_4513_, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4515_);
v___x_4524_ = v___x_4513_;
goto v_reusejp_4523_;
}
else
{
lean_object* v_reuseFailAlloc_4525_; 
v_reuseFailAlloc_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4525_, 0, v___x_4515_);
v___x_4524_ = v_reuseFailAlloc_4525_;
goto v_reusejp_4523_;
}
v_reusejp_4523_:
{
return v___x_4524_;
}
}
}
}
}
}
}
}
}
v___jp_4430_:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4433_ = lean_string_append(v___y_4431_, v___y_4432_);
lean_dec_ref(v___y_4432_);
v___x_4434_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4433_);
v___x_4435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4434_);
return v___x_4435_;
}
v___jp_4436_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; uint8_t v___x_4450_; 
v___x_4439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4440_ = lean_string_append(v___x_4439_, v_context_4427_);
v___x_4441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__1));
v___x_4442_ = lean_string_append(v___x_4440_, v___x_4441_);
v___x_4443_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSSystemMemoryInfo___closed__1));
v___x_4444_ = lean_string_append(v___x_4442_, v___x_4443_);
v___x_4445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__3));
v___x_4446_ = lean_string_append(v___x_4444_, v___x_4445_);
v___x_4447_ = lean_string_append(v___x_4446_, v_received_4438_);
lean_dec_ref(v_received_4438_);
v___x_4448_ = lean_string_utf8_byte_size(v___y_4437_);
v___x_4449_ = lean_unsigned_to_nat(0u);
v___x_4450_ = lean_nat_dec_eq(v___x_4448_, v___x_4449_);
if (v___x_4450_ == 0)
{
lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; 
v___x_4451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__4));
v___x_4452_ = lean_string_append(v___x_4451_, v___y_4437_);
lean_dec_ref(v___y_4437_);
v___x_4453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__5));
v___x_4454_ = lean_string_append(v___x_4452_, v___x_4453_);
v___y_4431_ = v___x_4447_;
v___y_4432_ = v___x_4454_;
goto v___jp_4430_;
}
else
{
lean_object* v___x_4455_; 
lean_dec_ref(v___y_4437_);
v___x_4455_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___y_4431_ = v___x_4447_;
v___y_4432_ = v___x_4455_;
goto v___jp_4430_;
}
}
v___jp_4456_:
{
lean_object* v___x_4458_; 
v___x_4458_ = l_Lasm_JS_Data_describe(v_d_4428_);
v___y_4437_ = v___y_4457_;
v_received_4438_ = v___x_4458_;
goto v___jp_4436_;
}
v___jp_4459_:
{
if (lean_obj_tag(v_d_4428_) == 9)
{
lean_object* v_value_4461_; lean_object* v_description_4462_; lean_object* v___x_4463_; uint8_t v___x_4464_; 
v_value_4461_ = lean_ctor_get(v_d_4428_, 0);
v_description_4462_ = lean_ctor_get(v_d_4428_, 1);
v___x_4463_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4464_ = lean_string_dec_eq(v_description_4462_, v___x_4463_);
if (v___x_4464_ == 0)
{
v___y_4457_ = v_a_4460_;
goto v___jp_4456_;
}
else
{
lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4481_; 
lean_inc(v_value_4461_);
v_isSharedCheck_4481_ = !lean_is_exclusive(v_d_4428_);
if (v_isSharedCheck_4481_ == 0)
{
lean_object* v_unused_4482_; lean_object* v_unused_4483_; 
v_unused_4482_ = lean_ctor_get(v_d_4428_, 1);
lean_dec(v_unused_4482_);
v_unused_4483_ = lean_ctor_get(v_d_4428_, 0);
lean_dec(v_unused_4483_);
v___x_4466_ = v_d_4428_;
v_isShared_4467_ = v_isSharedCheck_4481_;
goto v_resetjp_4465_;
}
else
{
lean_dec(v_d_4428_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4481_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
uint32_t v___x_4468_; uint64_t v___x_4469_; lean_object* v___x_4471_; 
v___x_4468_ = 206;
v___x_4469_ = 0ULL;
lean_inc(v_value_4461_);
if (v_isShared_4467_ == 0)
{
lean_ctor_set(v___x_4466_, 1, v___x_4463_);
v___x_4471_ = v___x_4466_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4480_; 
v_reuseFailAlloc_4480_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4480_, 0, v_value_4461_);
lean_ctor_set(v_reuseFailAlloc_4480_, 1, v___x_4463_);
v___x_4471_ = v_reuseFailAlloc_4480_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
uint32_t v___x_4472_; lean_object* v___x_4473_; 
v___x_4472_ = lasm_js_value_handle(v_value_4461_);
lean_dec(v_value_4461_);
v___x_4473_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4468_, v___x_4469_, v___x_4471_, v___x_4472_);
lean_dec_ref(v___x_4471_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; uint8_t v___x_4475_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4474_);
lean_dec_ref_known(v___x_4473_, 1);
v___x_4475_ = lean_string_validate_utf8(v_a_4474_);
if (v___x_4475_ == 0)
{
lean_object* v___x_4476_; lean_object* v___x_4477_; 
lean_dec(v_a_4474_);
v___x_4476_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__9);
v___x_4477_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4476_);
v___y_4437_ = v_a_4460_;
v_received_4438_ = v___x_4477_;
goto v___jp_4436_;
}
else
{
lean_object* v___x_4478_; 
v___x_4478_ = lean_string_from_utf8_unchecked(v_a_4474_);
v___y_4437_ = v_a_4460_;
v_received_4438_ = v___x_4478_;
goto v___jp_4436_;
}
}
else
{
lean_object* v___x_4479_; 
lean_dec_ref_known(v___x_4473_, 1);
v___x_4479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__10));
v___y_4437_ = v_a_4460_;
v_received_4438_ = v___x_4479_;
goto v___jp_4436_;
}
}
}
}
}
else
{
v___y_4457_ = v_a_4460_;
goto v___jp_4456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0___boxed(lean_object* v_context_4527_, lean_object* v_d_4528_, lean_object* v_a_4529_){
_start:
{
lean_object* v_res_4530_; 
v_res_4530_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(v_context_4527_, v_d_4528_);
lean_dec_ref(v_context_4527_);
return v_res_4530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(lean_object* v_b_4531_, lean_object* v_args_4532_, uint8_t v_await_4533_){
_start:
{
uint64_t v___y_4536_; uint64_t v___y_4537_; uint64_t v___x_4580_; uint64_t v___y_4582_; 
v___x_4580_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4533_ == 0)
{
uint64_t v___x_4587_; 
v___x_4587_ = 0ULL;
v___y_4582_ = v___x_4587_;
goto v___jp_4581_;
}
else
{
uint64_t v___x_4588_; 
v___x_4588_ = 2ULL;
v___y_4582_ = v___x_4588_;
goto v___jp_4581_;
}
v___jp_4535_:
{
uint64_t v_flags_4538_; uint32_t v___x_4539_; lean_object* v___x_4540_; uint32_t v___x_4541_; lean_object* v___x_4542_; 
v_flags_4538_ = lean_uint64_lor(v___y_4536_, v___y_4537_);
v___x_4539_ = 214;
v___x_4540_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4531_, v_args_4532_);
v___x_4541_ = 0;
v___x_4542_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4539_, v_flags_4538_, v___x_4540_, v___x_4541_);
lean_dec(v___x_4540_);
if (lean_obj_tag(v___x_4542_) == 0)
{
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4544_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4542_, 1);
v___x_4544_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4543_);
lean_dec(v_a_4543_);
if (lean_obj_tag(v___x_4544_) == 0)
{
lean_object* v_a_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; 
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_a_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v___x_4546_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4531_);
v___x_4547_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0_spec__0(v___x_4546_, v_a_4545_);
lean_dec_ref(v___x_4546_);
return v___x_4547_;
}
else
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
v_a_4548_ = lean_ctor_get(v___x_4544_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4544_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4544_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
return v___x_4553_;
}
}
}
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
v_a_4556_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4558_ = v___x_4542_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4542_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
lean_ctor_set_tag(v___x_4558_, 1);
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
else
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4579_; 
v_a_4564_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4566_ = v___x_4542_;
v_isShared_4567_ = v_isSharedCheck_4579_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v___x_4542_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4579_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4577_; 
v___x_4568_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4569_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4531_);
v___x_4570_ = lean_string_append(v___x_4568_, v___x_4569_);
lean_dec_ref(v___x_4569_);
v___x_4571_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4572_ = lean_string_append(v___x_4570_, v___x_4571_);
v___x_4573_ = lean_io_error_to_string(v_a_4564_);
v___x_4574_ = lean_string_append(v___x_4572_, v___x_4573_);
lean_dec_ref(v___x_4573_);
v___x_4575_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4575_, 0, v___x_4574_);
if (v_isShared_4567_ == 0)
{
lean_ctor_set(v___x_4566_, 0, v___x_4575_);
v___x_4577_ = v___x_4566_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v___x_4575_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
v___jp_4581_:
{
uint8_t v_construct_4583_; uint64_t v___x_4584_; 
v_construct_4583_ = lean_ctor_get_uint8(v_b_4531_, sizeof(void*)*4);
v___x_4584_ = lean_uint64_lor(v___x_4580_, v___y_4582_);
if (v_construct_4583_ == 0)
{
uint64_t v___x_4585_; 
v___x_4585_ = 0ULL;
v___y_4536_ = v___x_4584_;
v___y_4537_ = v___x_4585_;
goto v___jp_4535_;
}
else
{
uint64_t v___x_4586_; 
v___x_4586_ = 4ULL;
v___y_4536_ = v___x_4584_;
v___y_4537_ = v___x_4586_;
goto v___jp_4535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0___boxed(lean_object* v_b_4589_, lean_object* v_args_4590_, lean_object* v_await_4591_, lean_object* v_a_4592_){
_start:
{
uint8_t v_await_boxed_4593_; lean_object* v_res_4594_; 
v_await_boxed_4593_ = lean_unbox(v_await_4591_);
v_res_4594_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(v_b_4589_, v_args_4590_, v_await_boxed_4593_);
lean_dec_ref(v_b_4589_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_systemMemoryInfo(){
_start:
{
uint8_t v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; 
v___x_4604_ = 0;
v___x_4605_ = ((lean_object*)(l_Lasm_JS_Deno_systemMemoryInfo___closed__2));
v___x_4606_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4607_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_systemMemoryInfo_spec__0(v___x_4605_, v___x_4606_, v___x_4604_);
return v___x_4607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_systemMemoryInfo___boxed(lean_object* v_a_4608_){
_start:
{
lean_object* v_res_4609_; 
v_res_4609_ = l_Lasm_JS_Deno_systemMemoryInfo();
return v_res_4609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osRelease(){
_start:
{
uint8_t v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; 
v___x_4619_ = 0;
v___x_4620_ = ((lean_object*)(l_Lasm_JS_Deno_osRelease___closed__2));
v___x_4621_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4622_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4620_, v___x_4621_, v___x_4619_);
return v___x_4622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osRelease___boxed(lean_object* v_a_4623_){
_start:
{
lean_object* v_res_4624_; 
v_res_4624_ = l_Lasm_JS_Deno_osRelease();
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(lean_object* v_b_4625_, lean_object* v_args_4626_, uint8_t v_await_4627_){
_start:
{
uint64_t v___y_4630_; uint64_t v___y_4631_; uint64_t v___x_4674_; uint64_t v___y_4676_; 
v___x_4674_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4627_ == 0)
{
uint64_t v___x_4681_; 
v___x_4681_ = 0ULL;
v___y_4676_ = v___x_4681_;
goto v___jp_4675_;
}
else
{
uint64_t v___x_4682_; 
v___x_4682_ = 2ULL;
v___y_4676_ = v___x_4682_;
goto v___jp_4675_;
}
v___jp_4629_:
{
uint64_t v_flags_4632_; uint32_t v___x_4633_; lean_object* v___x_4634_; uint32_t v___x_4635_; lean_object* v___x_4636_; 
v_flags_4632_ = lean_uint64_lor(v___y_4630_, v___y_4631_);
v___x_4633_ = 214;
v___x_4634_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4625_, v_args_4626_);
v___x_4635_ = 0;
v___x_4636_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4633_, v_flags_4632_, v___x_4634_, v___x_4635_);
lean_dec(v___x_4634_);
if (lean_obj_tag(v___x_4636_) == 0)
{
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v_a_4637_; lean_object* v___x_4638_; 
v_a_4637_ = lean_ctor_get(v___x_4636_, 0);
lean_inc(v_a_4637_);
lean_dec_ref_known(v___x_4636_, 1);
v___x_4638_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4637_);
lean_dec(v_a_4637_);
if (lean_obj_tag(v___x_4638_) == 0)
{
lean_object* v_a_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; 
v_a_4639_ = lean_ctor_get(v___x_4638_, 0);
lean_inc(v_a_4639_);
lean_dec_ref_known(v___x_4638_, 1);
v___x_4640_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4625_);
v___x_4641_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v___x_4640_, v_a_4639_);
lean_dec_ref(v___x_4640_);
return v___x_4641_;
}
else
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4649_; 
v_a_4642_ = lean_ctor_get(v___x_4638_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___x_4638_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4644_ = v___x_4638_;
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4638_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
return v___x_4647_;
}
}
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
v_a_4650_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4636_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4636_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v___x_4655_; 
if (v_isShared_4653_ == 0)
{
lean_ctor_set_tag(v___x_4652_, 1);
v___x_4655_ = v___x_4652_;
goto v_reusejp_4654_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4650_);
v___x_4655_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4654_;
}
v_reusejp_4654_:
{
return v___x_4655_;
}
}
}
}
else
{
lean_object* v_a_4658_; lean_object* v___x_4660_; uint8_t v_isShared_4661_; uint8_t v_isSharedCheck_4673_; 
v_a_4658_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4673_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4673_ == 0)
{
v___x_4660_ = v___x_4636_;
v_isShared_4661_ = v_isSharedCheck_4673_;
goto v_resetjp_4659_;
}
else
{
lean_inc(v_a_4658_);
lean_dec(v___x_4636_);
v___x_4660_ = lean_box(0);
v_isShared_4661_ = v_isSharedCheck_4673_;
goto v_resetjp_4659_;
}
v_resetjp_4659_:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4671_; 
v___x_4662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4663_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4625_);
v___x_4664_ = lean_string_append(v___x_4662_, v___x_4663_);
lean_dec_ref(v___x_4663_);
v___x_4665_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4666_ = lean_string_append(v___x_4664_, v___x_4665_);
v___x_4667_ = lean_io_error_to_string(v_a_4658_);
v___x_4668_ = lean_string_append(v___x_4666_, v___x_4667_);
lean_dec_ref(v___x_4667_);
v___x_4669_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4668_);
if (v_isShared_4661_ == 0)
{
lean_ctor_set(v___x_4660_, 0, v___x_4669_);
v___x_4671_ = v___x_4660_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4672_; 
v_reuseFailAlloc_4672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4672_, 0, v___x_4669_);
v___x_4671_ = v_reuseFailAlloc_4672_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
return v___x_4671_;
}
}
}
}
v___jp_4675_:
{
uint8_t v_construct_4677_; uint64_t v___x_4678_; 
v_construct_4677_ = lean_ctor_get_uint8(v_b_4625_, sizeof(void*)*4);
v___x_4678_ = lean_uint64_lor(v___x_4674_, v___y_4676_);
if (v_construct_4677_ == 0)
{
uint64_t v___x_4679_; 
v___x_4679_ = 0ULL;
v___y_4630_ = v___x_4678_;
v___y_4631_ = v___x_4679_;
goto v___jp_4629_;
}
else
{
uint64_t v___x_4680_; 
v___x_4680_ = 4ULL;
v___y_4630_ = v___x_4678_;
v___y_4631_ = v___x_4680_;
goto v___jp_4629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0___boxed(lean_object* v_b_4683_, lean_object* v_args_4684_, lean_object* v_await_4685_, lean_object* v_a_4686_){
_start:
{
uint8_t v_await_boxed_4687_; lean_object* v_res_4688_; 
v_await_boxed_4687_ = lean_unbox(v_await_4685_);
v_res_4688_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v_b_4683_, v_args_4684_, v_await_boxed_4687_);
lean_dec_ref(v_b_4683_);
return v_res_4688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osUptime(){
_start:
{
uint8_t v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
v___x_4698_ = 0;
v___x_4699_ = ((lean_object*)(l_Lasm_JS_Deno_osUptime___closed__2));
v___x_4700_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4701_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_osUptime_spec__0(v___x_4699_, v___x_4700_, v___x_4698_);
return v___x_4701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_osUptime___boxed(lean_object* v_a_4702_){
_start:
{
lean_object* v_res_4703_; 
v_res_4703_ = l_Lasm_JS_Deno_osUptime();
return v_res_4703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exit(lean_object* v_code_4712_){
_start:
{
uint8_t v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4714_ = 0;
v___x_4715_ = lean_unsigned_to_nat(1u);
v___x_4716_ = ((lean_object*)(l_Lasm_JS_Deno_exit___closed__2));
v___x_4717_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_code_4712_);
v___x_4718_ = lean_mk_empty_array_with_capacity(v___x_4715_);
v___x_4719_ = lean_array_push(v___x_4718_, v___x_4717_);
v___x_4720_ = l_Lasm_JS_Web_Support_args(v___x_4719_);
v___x_4721_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4716_, v___x_4720_, v___x_4714_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_exit___boxed(lean_object* v_code_4722_, lean_object* v_a_4723_){
_start:
{
lean_object* v_res_4724_; 
v_res_4724_ = l_Lasm_JS_Deno_exit(v_code_4722_);
lean_dec(v_code_4722_);
return v_res_4724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_execPath(){
_start:
{
uint8_t v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; 
v___x_4734_ = 0;
v___x_4735_ = ((lean_object*)(l_Lasm_JS_Deno_execPath___closed__2));
v___x_4736_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4737_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4735_, v___x_4736_, v___x_4734_);
return v___x_4737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_execPath___boxed(lean_object* v_a_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l_Lasm_JS_Deno_execPath();
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chdir(lean_object* v_directory_4748_){
_start:
{
uint8_t v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___y_4754_; 
v___x_4750_ = 0;
v___x_4751_ = lean_unsigned_to_nat(1u);
v___x_4752_ = ((lean_object*)(l_Lasm_JS_Deno_chdir___closed__2));
if (lean_obj_tag(v_directory_4748_) == 0)
{
lean_object* v_value_4759_; lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4766_; 
v_value_4759_ = lean_ctor_get(v_directory_4748_, 0);
v_isSharedCheck_4766_ = !lean_is_exclusive(v_directory_4748_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4761_ = v_directory_4748_;
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
else
{
lean_inc(v_value_4759_);
lean_dec(v_directory_4748_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
lean_ctor_set_tag(v___x_4761_, 4);
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_value_4759_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
v___y_4754_ = v___x_4764_;
goto v___jp_4753_;
}
}
}
else
{
lean_object* v_value_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v_value_4767_ = lean_ctor_get(v_directory_4748_, 0);
lean_inc(v_value_4767_);
lean_dec_ref_known(v_directory_4748_, 1);
v___x_4768_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4769_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4769_, 0, v_value_4767_);
lean_ctor_set(v___x_4769_, 1, v___x_4768_);
v___y_4754_ = v___x_4769_;
goto v___jp_4753_;
}
v___jp_4753_:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; 
v___x_4755_ = lean_mk_empty_array_with_capacity(v___x_4751_);
v___x_4756_ = lean_array_push(v___x_4755_, v___y_4754_);
v___x_4757_ = l_Lasm_JS_Web_Support_args(v___x_4756_);
v___x_4758_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4752_, v___x_4757_, v___x_4750_);
return v___x_4758_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_chdir___boxed(lean_object* v_directory_4770_, lean_object* v_a_4771_){
_start:
{
lean_object* v_res_4772_; 
v_res_4772_ = l_Lasm_JS_Deno_chdir(v_directory_4770_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cwd(){
_start:
{
uint8_t v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; 
v___x_4782_ = 0;
v___x_4783_ = ((lean_object*)(l_Lasm_JS_Deno_cwd___closed__2));
v___x_4784_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_4785_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_4783_, v___x_4784_, v___x_4782_);
return v___x_4785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_cwd___boxed(lean_object* v_a_4786_){
_start:
{
lean_object* v_res_4787_; 
v_res_4787_ = l_Lasm_JS_Deno_cwd();
return v_res_4787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_addSignalListener(uint8_t v_signal_4796_, lean_object* v_handler_4797_){
_start:
{
uint8_t v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___y_4803_; 
v___x_4799_ = 0;
v___x_4800_ = lean_unsigned_to_nat(2u);
v___x_4801_ = ((lean_object*)(l_Lasm_JS_Deno_addSignalListener___closed__2));
switch(v_signal_4796_)
{
case 0:
{
lean_object* v___x_4811_; 
v___x_4811_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1));
v___y_4803_ = v___x_4811_;
goto v___jp_4802_;
}
case 1:
{
lean_object* v___x_4812_; 
v___x_4812_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3));
v___y_4803_ = v___x_4812_;
goto v___jp_4802_;
}
case 2:
{
lean_object* v___x_4813_; 
v___x_4813_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5));
v___y_4803_ = v___x_4813_;
goto v___jp_4802_;
}
case 3:
{
lean_object* v___x_4814_; 
v___x_4814_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7));
v___y_4803_ = v___x_4814_;
goto v___jp_4802_;
}
case 4:
{
lean_object* v___x_4815_; 
v___x_4815_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9));
v___y_4803_ = v___x_4815_;
goto v___jp_4802_;
}
case 5:
{
lean_object* v___x_4816_; 
v___x_4816_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11));
v___y_4803_ = v___x_4816_;
goto v___jp_4802_;
}
case 6:
{
lean_object* v___x_4817_; 
v___x_4817_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13));
v___y_4803_ = v___x_4817_;
goto v___jp_4802_;
}
case 7:
{
lean_object* v___x_4818_; 
v___x_4818_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15));
v___y_4803_ = v___x_4818_;
goto v___jp_4802_;
}
case 8:
{
lean_object* v___x_4819_; 
v___x_4819_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17));
v___y_4803_ = v___x_4819_;
goto v___jp_4802_;
}
case 9:
{
lean_object* v___x_4820_; 
v___x_4820_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19));
v___y_4803_ = v___x_4820_;
goto v___jp_4802_;
}
case 10:
{
lean_object* v___x_4821_; 
v___x_4821_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21));
v___y_4803_ = v___x_4821_;
goto v___jp_4802_;
}
case 11:
{
lean_object* v___x_4822_; 
v___x_4822_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23));
v___y_4803_ = v___x_4822_;
goto v___jp_4802_;
}
case 12:
{
lean_object* v___x_4823_; 
v___x_4823_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25));
v___y_4803_ = v___x_4823_;
goto v___jp_4802_;
}
case 13:
{
lean_object* v___x_4824_; 
v___x_4824_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27));
v___y_4803_ = v___x_4824_;
goto v___jp_4802_;
}
case 14:
{
lean_object* v___x_4825_; 
v___x_4825_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29));
v___y_4803_ = v___x_4825_;
goto v___jp_4802_;
}
case 15:
{
lean_object* v___x_4826_; 
v___x_4826_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31));
v___y_4803_ = v___x_4826_;
goto v___jp_4802_;
}
case 16:
{
lean_object* v___x_4827_; 
v___x_4827_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33));
v___y_4803_ = v___x_4827_;
goto v___jp_4802_;
}
case 17:
{
lean_object* v___x_4828_; 
v___x_4828_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35));
v___y_4803_ = v___x_4828_;
goto v___jp_4802_;
}
case 18:
{
lean_object* v___x_4829_; 
v___x_4829_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37));
v___y_4803_ = v___x_4829_;
goto v___jp_4802_;
}
case 19:
{
lean_object* v___x_4830_; 
v___x_4830_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39));
v___y_4803_ = v___x_4830_;
goto v___jp_4802_;
}
case 20:
{
lean_object* v___x_4831_; 
v___x_4831_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41));
v___y_4803_ = v___x_4831_;
goto v___jp_4802_;
}
case 21:
{
lean_object* v___x_4832_; 
v___x_4832_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43));
v___y_4803_ = v___x_4832_;
goto v___jp_4802_;
}
case 22:
{
lean_object* v___x_4833_; 
v___x_4833_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45));
v___y_4803_ = v___x_4833_;
goto v___jp_4802_;
}
case 23:
{
lean_object* v___x_4834_; 
v___x_4834_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47));
v___y_4803_ = v___x_4834_;
goto v___jp_4802_;
}
case 24:
{
lean_object* v___x_4835_; 
v___x_4835_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49));
v___y_4803_ = v___x_4835_;
goto v___jp_4802_;
}
case 25:
{
lean_object* v___x_4836_; 
v___x_4836_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51));
v___y_4803_ = v___x_4836_;
goto v___jp_4802_;
}
case 26:
{
lean_object* v___x_4837_; 
v___x_4837_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53));
v___y_4803_ = v___x_4837_;
goto v___jp_4802_;
}
case 27:
{
lean_object* v___x_4838_; 
v___x_4838_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55));
v___y_4803_ = v___x_4838_;
goto v___jp_4802_;
}
case 28:
{
lean_object* v___x_4839_; 
v___x_4839_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57));
v___y_4803_ = v___x_4839_;
goto v___jp_4802_;
}
case 29:
{
lean_object* v___x_4840_; 
v___x_4840_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59));
v___y_4803_ = v___x_4840_;
goto v___jp_4802_;
}
case 30:
{
lean_object* v___x_4841_; 
v___x_4841_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61));
v___y_4803_ = v___x_4841_;
goto v___jp_4802_;
}
case 31:
{
lean_object* v___x_4842_; 
v___x_4842_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63));
v___y_4803_ = v___x_4842_;
goto v___jp_4802_;
}
case 32:
{
lean_object* v___x_4843_; 
v___x_4843_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65));
v___y_4803_ = v___x_4843_;
goto v___jp_4802_;
}
case 33:
{
lean_object* v___x_4844_; 
v___x_4844_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67));
v___y_4803_ = v___x_4844_;
goto v___jp_4802_;
}
case 34:
{
lean_object* v___x_4845_; 
v___x_4845_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69));
v___y_4803_ = v___x_4845_;
goto v___jp_4802_;
}
default: 
{
lean_object* v___x_4846_; 
v___x_4846_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71));
v___y_4803_ = v___x_4846_;
goto v___jp_4802_;
}
}
v___jp_4802_:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v___x_4804_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4805_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4805_, 0, v_handler_4797_);
lean_ctor_set(v___x_4805_, 1, v___x_4804_);
v___x_4806_ = lean_mk_empty_array_with_capacity(v___x_4800_);
lean_inc(v___y_4803_);
v___x_4807_ = lean_array_push(v___x_4806_, v___y_4803_);
v___x_4808_ = lean_array_push(v___x_4807_, v___x_4805_);
v___x_4809_ = l_Lasm_JS_Web_Support_args(v___x_4808_);
v___x_4810_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4801_, v___x_4809_, v___x_4799_);
return v___x_4810_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_addSignalListener___boxed(lean_object* v_signal_4847_, lean_object* v_handler_4848_, lean_object* v_a_4849_){
_start:
{
uint8_t v_signal_boxed_4850_; lean_object* v_res_4851_; 
v_signal_boxed_4850_ = lean_unbox(v_signal_4847_);
v_res_4851_ = l_Lasm_JS_Deno_addSignalListener(v_signal_boxed_4850_, v_handler_4848_);
return v_res_4851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSignalListener(uint8_t v_signal_4860_, lean_object* v_handler_4861_){
_start:
{
uint8_t v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___y_4867_; 
v___x_4863_ = 0;
v___x_4864_ = lean_unsigned_to_nat(2u);
v___x_4865_ = ((lean_object*)(l_Lasm_JS_Deno_removeSignalListener___closed__2));
switch(v_signal_4860_)
{
case 0:
{
lean_object* v___x_4875_; 
v___x_4875_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__1));
v___y_4867_ = v___x_4875_;
goto v___jp_4866_;
}
case 1:
{
lean_object* v___x_4876_; 
v___x_4876_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__3));
v___y_4867_ = v___x_4876_;
goto v___jp_4866_;
}
case 2:
{
lean_object* v___x_4877_; 
v___x_4877_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__5));
v___y_4867_ = v___x_4877_;
goto v___jp_4866_;
}
case 3:
{
lean_object* v___x_4878_; 
v___x_4878_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__7));
v___y_4867_ = v___x_4878_;
goto v___jp_4866_;
}
case 4:
{
lean_object* v___x_4879_; 
v___x_4879_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__9));
v___y_4867_ = v___x_4879_;
goto v___jp_4866_;
}
case 5:
{
lean_object* v___x_4880_; 
v___x_4880_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__11));
v___y_4867_ = v___x_4880_;
goto v___jp_4866_;
}
case 6:
{
lean_object* v___x_4881_; 
v___x_4881_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__13));
v___y_4867_ = v___x_4881_;
goto v___jp_4866_;
}
case 7:
{
lean_object* v___x_4882_; 
v___x_4882_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__15));
v___y_4867_ = v___x_4882_;
goto v___jp_4866_;
}
case 8:
{
lean_object* v___x_4883_; 
v___x_4883_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__17));
v___y_4867_ = v___x_4883_;
goto v___jp_4866_;
}
case 9:
{
lean_object* v___x_4884_; 
v___x_4884_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__19));
v___y_4867_ = v___x_4884_;
goto v___jp_4866_;
}
case 10:
{
lean_object* v___x_4885_; 
v___x_4885_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__21));
v___y_4867_ = v___x_4885_;
goto v___jp_4866_;
}
case 11:
{
lean_object* v___x_4886_; 
v___x_4886_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__23));
v___y_4867_ = v___x_4886_;
goto v___jp_4866_;
}
case 12:
{
lean_object* v___x_4887_; 
v___x_4887_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__25));
v___y_4867_ = v___x_4887_;
goto v___jp_4866_;
}
case 13:
{
lean_object* v___x_4888_; 
v___x_4888_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__27));
v___y_4867_ = v___x_4888_;
goto v___jp_4866_;
}
case 14:
{
lean_object* v___x_4889_; 
v___x_4889_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__29));
v___y_4867_ = v___x_4889_;
goto v___jp_4866_;
}
case 15:
{
lean_object* v___x_4890_; 
v___x_4890_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__31));
v___y_4867_ = v___x_4890_;
goto v___jp_4866_;
}
case 16:
{
lean_object* v___x_4891_; 
v___x_4891_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__33));
v___y_4867_ = v___x_4891_;
goto v___jp_4866_;
}
case 17:
{
lean_object* v___x_4892_; 
v___x_4892_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__35));
v___y_4867_ = v___x_4892_;
goto v___jp_4866_;
}
case 18:
{
lean_object* v___x_4893_; 
v___x_4893_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__37));
v___y_4867_ = v___x_4893_;
goto v___jp_4866_;
}
case 19:
{
lean_object* v___x_4894_; 
v___x_4894_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__39));
v___y_4867_ = v___x_4894_;
goto v___jp_4866_;
}
case 20:
{
lean_object* v___x_4895_; 
v___x_4895_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__41));
v___y_4867_ = v___x_4895_;
goto v___jp_4866_;
}
case 21:
{
lean_object* v___x_4896_; 
v___x_4896_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__43));
v___y_4867_ = v___x_4896_;
goto v___jp_4866_;
}
case 22:
{
lean_object* v___x_4897_; 
v___x_4897_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__45));
v___y_4867_ = v___x_4897_;
goto v___jp_4866_;
}
case 23:
{
lean_object* v___x_4898_; 
v___x_4898_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__47));
v___y_4867_ = v___x_4898_;
goto v___jp_4866_;
}
case 24:
{
lean_object* v___x_4899_; 
v___x_4899_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__49));
v___y_4867_ = v___x_4899_;
goto v___jp_4866_;
}
case 25:
{
lean_object* v___x_4900_; 
v___x_4900_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__51));
v___y_4867_ = v___x_4900_;
goto v___jp_4866_;
}
case 26:
{
lean_object* v___x_4901_; 
v___x_4901_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__53));
v___y_4867_ = v___x_4901_;
goto v___jp_4866_;
}
case 27:
{
lean_object* v___x_4902_; 
v___x_4902_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__55));
v___y_4867_ = v___x_4902_;
goto v___jp_4866_;
}
case 28:
{
lean_object* v___x_4903_; 
v___x_4903_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__57));
v___y_4867_ = v___x_4903_;
goto v___jp_4866_;
}
case 29:
{
lean_object* v___x_4904_; 
v___x_4904_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__59));
v___y_4867_ = v___x_4904_;
goto v___jp_4866_;
}
case 30:
{
lean_object* v___x_4905_; 
v___x_4905_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__61));
v___y_4867_ = v___x_4905_;
goto v___jp_4866_;
}
case 31:
{
lean_object* v___x_4906_; 
v___x_4906_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__63));
v___y_4867_ = v___x_4906_;
goto v___jp_4866_;
}
case 32:
{
lean_object* v___x_4907_; 
v___x_4907_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__65));
v___y_4867_ = v___x_4907_;
goto v___jp_4866_;
}
case 33:
{
lean_object* v___x_4908_; 
v___x_4908_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__67));
v___y_4867_ = v___x_4908_;
goto v___jp_4866_;
}
case 34:
{
lean_object* v___x_4909_; 
v___x_4909_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__69));
v___y_4867_ = v___x_4909_;
goto v___jp_4866_;
}
default: 
{
lean_object* v___x_4910_; 
v___x_4910_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSSignal___lam__0___closed__71));
v___y_4867_ = v___x_4910_;
goto v___jp_4866_;
}
}
v___jp_4866_:
{
lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; 
v___x_4868_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSEnv___lam__0___closed__0));
v___x_4869_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4869_, 0, v_handler_4861_);
lean_ctor_set(v___x_4869_, 1, v___x_4868_);
v___x_4870_ = lean_mk_empty_array_with_capacity(v___x_4864_);
lean_inc(v___y_4867_);
v___x_4871_ = lean_array_push(v___x_4870_, v___y_4867_);
v___x_4872_ = lean_array_push(v___x_4871_, v___x_4869_);
v___x_4873_ = l_Lasm_JS_Web_Support_args(v___x_4872_);
v___x_4874_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4865_, v___x_4873_, v___x_4863_);
return v___x_4874_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_removeSignalListener___boxed(lean_object* v_signal_4911_, lean_object* v_handler_4912_, lean_object* v_a_4913_){
_start:
{
uint8_t v_signal_boxed_4914_; lean_object* v_res_4915_; 
v_signal_boxed_4914_ = lean_unbox(v_signal_4911_);
v_res_4915_ = l_Lasm_JS_Deno_removeSignalListener(v_signal_boxed_4914_, v_handler_4912_);
return v_res_4915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_refTimer(lean_object* v_id_4924_){
_start:
{
uint8_t v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; 
v___x_4926_ = 0;
v___x_4927_ = lean_unsigned_to_nat(1u);
v___x_4928_ = ((lean_object*)(l_Lasm_JS_Deno_refTimer___closed__2));
v___x_4929_ = lean_mk_empty_array_with_capacity(v___x_4927_);
v___x_4930_ = lean_array_push(v___x_4929_, v_id_4924_);
v___x_4931_ = l_Lasm_JS_Web_Support_args(v___x_4930_);
v___x_4932_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4928_, v___x_4931_, v___x_4926_);
return v___x_4932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_refTimer___boxed(lean_object* v_id_4933_, lean_object* v_a_4934_){
_start:
{
lean_object* v_res_4935_; 
v_res_4935_ = l_Lasm_JS_Deno_refTimer(v_id_4933_);
return v_res_4935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_unrefTimer(lean_object* v_id_4944_){
_start:
{
uint8_t v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; 
v___x_4946_ = 0;
v___x_4947_ = lean_unsigned_to_nat(1u);
v___x_4948_ = ((lean_object*)(l_Lasm_JS_Deno_unrefTimer___closed__2));
v___x_4949_ = lean_mk_empty_array_with_capacity(v___x_4947_);
v___x_4950_ = lean_array_push(v___x_4949_, v_id_4944_);
v___x_4951_ = l_Lasm_JS_Web_Support_args(v___x_4950_);
v___x_4952_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_revokeObjectURL_spec__0(v___x_4948_, v___x_4951_, v___x_4946_);
return v___x_4952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_unrefTimer___boxed(lean_object* v_id_4953_, lean_object* v_a_4954_){
_start:
{
lean_object* v_res_4955_; 
v_res_4955_ = l_Lasm_JS_Deno_unrefTimer(v_id_4953_);
return v_res_4955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(lean_object* v_b_4956_, lean_object* v_args_4957_, uint8_t v_await_4958_){
_start:
{
uint64_t v___y_4961_; uint64_t v___y_4962_; uint64_t v___x_5005_; uint64_t v___y_5007_; 
v___x_5005_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__0___closed__0);
if (v_await_4958_ == 0)
{
uint64_t v___x_5012_; 
v___x_5012_ = 0ULL;
v___y_5007_ = v___x_5012_;
goto v___jp_5006_;
}
else
{
uint64_t v___x_5013_; 
v___x_5013_ = 2ULL;
v___y_5007_ = v___x_5013_;
goto v___jp_5006_;
}
v___jp_4960_:
{
uint64_t v_flags_4963_; uint32_t v___x_4964_; lean_object* v___x_4965_; uint32_t v___x_4966_; lean_object* v___x_4967_; 
v_flags_4963_ = lean_uint64_lor(v___y_4961_, v___y_4962_);
v___x_4964_ = 214;
v___x_4965_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4956_, v_args_4957_);
v___x_4966_ = 0;
v___x_4967_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4964_, v_flags_4963_, v___x_4965_, v___x_4966_);
lean_dec(v___x_4965_);
if (lean_obj_tag(v___x_4967_) == 0)
{
if (lean_obj_tag(v___x_4967_) == 0)
{
lean_object* v_a_4968_; lean_object* v___x_4969_; 
v_a_4968_ = lean_ctor_get(v___x_4967_, 0);
lean_inc(v_a_4968_);
lean_dec_ref_known(v___x_4967_, 1);
v___x_4969_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4968_);
lean_dec(v_a_4968_);
if (lean_obj_tag(v___x_4969_) == 0)
{
lean_object* v_a_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; 
v_a_4970_ = lean_ctor_get(v___x_4969_, 0);
lean_inc(v_a_4970_);
lean_dec_ref_known(v___x_4969_, 1);
v___x_4971_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4956_);
v___x_4972_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v___x_4971_, v_a_4970_);
lean_dec_ref(v___x_4971_);
return v___x_4972_;
}
else
{
lean_object* v_a_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_4980_; 
v_a_4973_ = lean_ctor_get(v___x_4969_, 0);
v_isSharedCheck_4980_ = !lean_is_exclusive(v___x_4969_);
if (v_isSharedCheck_4980_ == 0)
{
v___x_4975_ = v___x_4969_;
v_isShared_4976_ = v_isSharedCheck_4980_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_a_4973_);
lean_dec(v___x_4969_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_4980_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v___x_4978_; 
if (v_isShared_4976_ == 0)
{
v___x_4978_ = v___x_4975_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v_a_4973_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
return v___x_4978_;
}
}
}
}
else
{
lean_object* v_a_4981_; lean_object* v___x_4983_; uint8_t v_isShared_4984_; uint8_t v_isSharedCheck_4988_; 
v_a_4981_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_4988_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4983_ = v___x_4967_;
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
else
{
lean_inc(v_a_4981_);
lean_dec(v___x_4967_);
v___x_4983_ = lean_box(0);
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
v_resetjp_4982_:
{
lean_object* v___x_4986_; 
if (v_isShared_4984_ == 0)
{
lean_ctor_set_tag(v___x_4983_, 1);
v___x_4986_ = v___x_4983_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v_a_4981_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
return v___x_4986_;
}
}
}
}
else
{
lean_object* v_a_4989_; lean_object* v___x_4991_; uint8_t v_isShared_4992_; uint8_t v_isSharedCheck_5004_; 
v_a_4989_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4991_ = v___x_4967_;
v_isShared_4992_ = v_isSharedCheck_5004_;
goto v_resetjp_4990_;
}
else
{
lean_inc(v_a_4989_);
lean_dec(v___x_4967_);
v___x_4991_ = lean_box(0);
v_isShared_4992_ = v_isSharedCheck_5004_;
goto v_resetjp_4990_;
}
v_resetjp_4990_:
{
lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5002_; 
v___x_4993_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2___closed__0));
v___x_4994_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4956_);
v___x_4995_ = lean_string_append(v___x_4993_, v___x_4994_);
lean_dec_ref(v___x_4994_);
v___x_4996_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_Env_toObject_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_4997_ = lean_string_append(v___x_4995_, v___x_4996_);
v___x_4998_ = lean_io_error_to_string(v_a_4989_);
v___x_4999_ = lean_string_append(v___x_4997_, v___x_4998_);
lean_dec_ref(v___x_4998_);
v___x_5000_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5000_, 0, v___x_4999_);
if (v_isShared_4992_ == 0)
{
lean_ctor_set(v___x_4991_, 0, v___x_5000_);
v___x_5002_ = v___x_4991_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v___x_5000_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
}
}
v___jp_5006_:
{
uint8_t v_construct_5008_; uint64_t v___x_5009_; 
v_construct_5008_ = lean_ctor_get_uint8(v_b_4956_, sizeof(void*)*4);
v___x_5009_ = lean_uint64_lor(v___x_5005_, v___y_5007_);
if (v_construct_5008_ == 0)
{
uint64_t v___x_5010_; 
v___x_5010_ = 0ULL;
v___y_4961_ = v___x_5009_;
v___y_4962_ = v___x_5010_;
goto v___jp_4960_;
}
else
{
uint64_t v___x_5011_; 
v___x_5011_ = 4ULL;
v___y_4961_ = v___x_5009_;
v___y_4962_ = v___x_5011_;
goto v___jp_4960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0___boxed(lean_object* v_b_5014_, lean_object* v_args_5015_, lean_object* v_await_5016_, lean_object* v_a_5017_){
_start:
{
uint8_t v_await_boxed_5018_; lean_object* v_res_5019_; 
v_await_boxed_5018_ = lean_unbox(v_await_5016_);
v_res_5019_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(v_b_5014_, v_args_5015_, v_await_boxed_5018_);
lean_dec_ref(v_b_5014_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_uid(){
_start:
{
uint8_t v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; 
v___x_5029_ = 0;
v___x_5030_ = ((lean_object*)(l_Lasm_JS_Deno_uid___closed__2));
v___x_5031_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_5032_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(v___x_5030_, v___x_5031_, v___x_5029_);
return v___x_5032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_uid___boxed(lean_object* v_a_5033_){
_start:
{
lean_object* v_res_5034_; 
v_res_5034_ = l_Lasm_JS_Deno_uid();
return v_res_5034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_gid(){
_start:
{
uint8_t v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
v___x_5044_ = 0;
v___x_5045_ = ((lean_object*)(l_Lasm_JS_Deno_gid___closed__2));
v___x_5046_ = lean_obj_once(&l_Lasm_JS_Deno_Env_toObject___closed__2, &l_Lasm_JS_Deno_Env_toObject___closed__2_once, _init_l_Lasm_JS_Deno_Env_toObject___closed__2);
v___x_5047_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Deno_uid_spec__0(v___x_5045_, v___x_5046_, v___x_5044_);
return v___x_5047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_gid___boxed(lean_object* v_a_5048_){
_start:
{
lean_object* v_res_5049_; 
v_res_5049_ = l_Lasm_JS_Deno_gid();
return v_res_5049_;
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
