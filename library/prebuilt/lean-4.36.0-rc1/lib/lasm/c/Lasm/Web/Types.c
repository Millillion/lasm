// Lean compiler output
// Module: Lasm.Web.Types
// Imports: public import Init public meta import Init public import Lasm.JS.Core
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
static const lean_string_object l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Web_handleFromJS___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_handleFromJS___redArg___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_handleFromJS___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_handleFromJS___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_handleFromJS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_handleFromJS(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_Web_instToJSEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSEventTarget___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSEventTarget = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instFromJSEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instFromJSEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instFromJSEventTarget___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSEventTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.Web.EventTarget"};
static const lean_object* l_Lasm_Web_instFromJSEventTarget___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSEventTarget___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSEventTarget___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSEventTarget___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventTarget;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSNode = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSNode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSNode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instFromJSNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instFromJSNode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instFromJSNode___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSNode___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.Web.Node"};
static const lean_object* l_Lasm_Web_instFromJSNode___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSNode___closed__1_value;
static lean_once_cell_t l_Lasm_Web_instFromJSNode___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSNode___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSNode;
LEAN_EXPORT lean_object* l_Lasm_Web_instCoeNodeEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instCoeNodeEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instCoeNodeEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instCoeNodeEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instCoeNodeEventTarget___closed__0 = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeNodeEventTarget = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSElement = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Element"};
static const lean_object* l_Lasm_Web_instFromJSElement___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSElement___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSElement___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSElement___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSElement;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeElementNode = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSText = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.Web.Text"};
static const lean_object* l_Lasm_Web_instFromJSText___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSText___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSText___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSText___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSText;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeTextNode = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSFragment = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSFragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Fragment"};
static const lean_object* l_Lasm_Web_instFromJSFragment___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSFragment___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSFragment___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSFragment___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSFragment;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeFragmentNode = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSDocument = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSDocument___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Document"};
static const lean_object* l_Lasm_Web_instFromJSDocument___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSDocument___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSDocument___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSDocument___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSDocument;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeDocumentNode = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSWindow = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSWindow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lasm.Web.Window"};
static const lean_object* l_Lasm_Web_instFromJSWindow___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSWindow___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSWindow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSWindow___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSWindow;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeWindowEventTarget = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSEvent = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lasm.Web.Event"};
static const lean_object* l_Lasm_Web_instFromJSEvent___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSEvent___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSEvent___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSEvent___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEvent;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSListener = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Listener"};
static const lean_object* l_Lasm_Web_instFromJSListener___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSListener___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSListener___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSListener___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSListener;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSResponse = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSResponse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Response"};
static const lean_object* l_Lasm_Web_instFromJSResponse___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSResponse___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSResponse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSResponse___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponse;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSAbortController = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSAbortController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.Web.AbortController"};
static const lean_object* l_Lasm_Web_instFromJSAbortController___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSAbortController___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSAbortController___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSAbortController___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSAbortController;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSAbortSignal = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSAbortSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.Web.AbortSignal"};
static const lean_object* l_Lasm_Web_instFromJSAbortSignal___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSAbortSignal___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSAbortSignal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSAbortSignal___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSAbortSignal;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSFormData = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSFormData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.FormData"};
static const lean_object* l_Lasm_Web_instFromJSFormData___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSFormData___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSFormData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSFormData___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSFormData;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSSearchParams = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSSearchParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.Web.SearchParams"};
static const lean_object* l_Lasm_Web_instFromJSSearchParams___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSSearchParams___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSSearchParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSSearchParams___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSSearchParams;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSStorage = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Storage"};
static const lean_object* l_Lasm_Web_instFromJSStorage___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSStorage___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSStorage___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSStorage___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSStorage;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSWebSocket = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSWebSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.WebSocket"};
static const lean_object* l_Lasm_Web_instFromJSWebSocket___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSWebSocket___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSWebSocket___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSWebSocket___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSWebSocket;
LEAN_EXPORT const lean_object* l_Lasm_Web_instCoeWebSocketEventTarget = (const lean_object*)&l_Lasm_Web_instCoeNodeEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSContext2D = (const lean_object*)&l_Lasm_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSContext2D___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.Context2D"};
static const lean_object* l_Lasm_Web_instFromJSContext2D___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSContext2D___closed__0_value;
static lean_once_cell_t l_Lasm_Web_instFromJSContext2D___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSContext2D___closed__1;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSContext2D;
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSTimerId___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSTimerId___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instToJSTimerId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSTimerId___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSTimerId___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSTimerId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSTimerId = (const lean_object*)&l_Lasm_Web_instToJSTimerId___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instFromJSTimerId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instFromJSTimerId___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSTimerId___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTimerId___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTimerId___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_instFromJSTimerId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instFromJSTimerId___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instFromJSTimerId___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSTimerId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.TimerId"};
static const lean_object* l_Lasm_Web_instFromJSTimerId___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instFromJSTimerId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__0_value),((lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instFromJSTimerId___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instFromJSTimerId = (const lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSFrameId = (const lean_object*)&l_Lasm_Web_instToJSTimerId___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSFrameId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.FrameId"};
static const lean_object* l_Lasm_Web_instFromJSFrameId___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSFrameId___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instFromJSFrameId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSTimerId___closed__0_value),((lean_object*)&l_Lasm_Web_instFromJSFrameId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instFromJSFrameId___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSFrameId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instFromJSFrameId = (const lean_object*)&l_Lasm_Web_instFromJSFrameId___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_callback___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_callback___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_callback(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_callback___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_background___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "console"};
static const lean_object* l_Lasm_Web_background___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_background___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_background___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_Web_background___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_background___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_background___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.Web.background: "};
static const lean_object* l_Lasm_Web_background___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_background___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_background___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_background___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_background___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_background___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_background___closed__0 = (const lean_object*)&l_Lasm_Web_background___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_background(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_background___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_handleFromJS___redArg___lam__0(lean_object* v_mk_4_, lean_object* v_d_5_){
_start:
{
if (lean_obj_tag(v_d_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v_value_6_ = lean_ctor_get(v_d_5_, 0);
lean_inc(v_value_6_);
lean_dec_ref_known(v_d_5_, 2);
v___x_7_ = lean_apply_1(v_mk_4_, v_value_6_);
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; 
lean_dec(v_d_5_);
lean_dec(v_mk_4_);
v___x_9_ = ((lean_object*)(l_Lasm_Web_handleFromJS___redArg___lam__0___closed__1));
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_handleFromJS___redArg(lean_object* v_name_10_, lean_object* v_mk_11_){
_start:
{
lean_object* v___f_12_; uint8_t v___x_13_; lean_object* v___x_14_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_Web_handleFromJS___redArg___lam__0), 2, 1);
lean_closure_set(v___f_12_, 0, v_mk_11_);
v___x_13_ = 1;
v___x_14_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_14_, 0, v___f_12_);
lean_ctor_set(v___x_14_, 1, v_name_10_);
lean_ctor_set_uint8(v___x_14_, sizeof(void*)*2, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_handleFromJS(lean_object* v_00_u03b1_15_, lean_object* v_name_16_, lean_object* v_mk_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_Web_handleFromJS___redArg(v_name_16_, v_mk_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSEventTarget___lam__0(lean_object* v_t_19_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0));
v___x_21_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_21_, 0, v_t_19_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventTarget___lam__0(lean_object* v_x_24_){
_start:
{
lean_inc(v_x_24_);
return v_x_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSEventTarget___lam__0___boxed(lean_object* v_x_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lasm_Web_instFromJSEventTarget___lam__0(v_x_25_);
lean_dec(v_x_25_);
return v_res_26_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventTarget___closed__2(void){
_start:
{
lean_object* v___f_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___f_29_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_30_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__1));
v___x_31_ = l_Lasm_Web_handleFromJS___redArg(v___x_30_, v___f_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEventTarget(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&l_Lasm_Web_instFromJSEventTarget___closed__2, &l_Lasm_Web_instFromJSEventTarget___closed__2_once, _init_l_Lasm_Web_instFromJSEventTarget___closed__2);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSNode___lam__0(lean_object* v_v_34_){
_start:
{
lean_inc(v_v_34_);
return v_v_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSNode___lam__0___boxed(lean_object* v_v_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lasm_Web_instFromJSNode___lam__0(v_v_35_);
lean_dec(v_v_35_);
return v_res_36_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSNode___closed__2(void){
_start:
{
lean_object* v___f_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___f_39_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_40_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__1));
v___x_41_ = l_Lasm_Web_handleFromJS___redArg(v___x_40_, v___f_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSNode(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_obj_once(&l_Lasm_Web_instFromJSNode___closed__2, &l_Lasm_Web_instFromJSNode___closed__2_once, _init_l_Lasm_Web_instFromJSNode___closed__2);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instCoeNodeEventTarget___lam__0(lean_object* v_self_43_){
_start:
{
lean_inc(v_self_43_);
return v_self_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instCoeNodeEventTarget___lam__0___boxed(lean_object* v_self_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lasm_Web_instCoeNodeEventTarget___lam__0(v_self_44_);
lean_dec(v_self_44_);
return v_res_45_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSElement___closed__1(void){
_start:
{
lean_object* v___f_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___f_50_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_51_ = ((lean_object*)(l_Lasm_Web_instFromJSElement___closed__0));
v___x_52_ = l_Lasm_Web_handleFromJS___redArg(v___x_51_, v___f_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSElement(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&l_Lasm_Web_instFromJSElement___closed__1, &l_Lasm_Web_instFromJSElement___closed__1_once, _init_l_Lasm_Web_instFromJSElement___closed__1);
return v___x_53_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSText___closed__1(void){
_start:
{
lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___f_57_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_58_ = ((lean_object*)(l_Lasm_Web_instFromJSText___closed__0));
v___x_59_ = l_Lasm_Web_handleFromJS___redArg(v___x_58_, v___f_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSText(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = lean_obj_once(&l_Lasm_Web_instFromJSText___closed__1, &l_Lasm_Web_instFromJSText___closed__1_once, _init_l_Lasm_Web_instFromJSText___closed__1);
return v___x_60_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSFragment___closed__1(void){
_start:
{
lean_object* v___f_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___f_64_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_65_ = ((lean_object*)(l_Lasm_Web_instFromJSFragment___closed__0));
v___x_66_ = l_Lasm_Web_handleFromJS___redArg(v___x_65_, v___f_64_);
return v___x_66_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSFragment(void){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_obj_once(&l_Lasm_Web_instFromJSFragment___closed__1, &l_Lasm_Web_instFromJSFragment___closed__1_once, _init_l_Lasm_Web_instFromJSFragment___closed__1);
return v___x_67_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSDocument___closed__1(void){
_start:
{
lean_object* v___f_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___f_71_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_72_ = ((lean_object*)(l_Lasm_Web_instFromJSDocument___closed__0));
v___x_73_ = l_Lasm_Web_handleFromJS___redArg(v___x_72_, v___f_71_);
return v___x_73_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSDocument(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Lasm_Web_instFromJSDocument___closed__1, &l_Lasm_Web_instFromJSDocument___closed__1_once, _init_l_Lasm_Web_instFromJSDocument___closed__1);
return v___x_74_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSWindow___closed__1(void){
_start:
{
lean_object* v___f_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___f_78_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_79_ = ((lean_object*)(l_Lasm_Web_instFromJSWindow___closed__0));
v___x_80_ = l_Lasm_Web_handleFromJS___redArg(v___x_79_, v___f_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSWindow(void){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_obj_once(&l_Lasm_Web_instFromJSWindow___closed__1, &l_Lasm_Web_instFromJSWindow___closed__1_once, _init_l_Lasm_Web_instFromJSWindow___closed__1);
return v___x_81_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEvent___closed__1(void){
_start:
{
lean_object* v___f_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___f_85_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_86_ = ((lean_object*)(l_Lasm_Web_instFromJSEvent___closed__0));
v___x_87_ = l_Lasm_Web_handleFromJS___redArg(v___x_86_, v___f_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSEvent(void){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_once(&l_Lasm_Web_instFromJSEvent___closed__1, &l_Lasm_Web_instFromJSEvent___closed__1_once, _init_l_Lasm_Web_instFromJSEvent___closed__1);
return v___x_88_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSListener___closed__1(void){
_start:
{
lean_object* v___f_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___f_91_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_92_ = ((lean_object*)(l_Lasm_Web_instFromJSListener___closed__0));
v___x_93_ = l_Lasm_Web_handleFromJS___redArg(v___x_92_, v___f_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSListener(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_obj_once(&l_Lasm_Web_instFromJSListener___closed__1, &l_Lasm_Web_instFromJSListener___closed__1_once, _init_l_Lasm_Web_instFromJSListener___closed__1);
return v___x_94_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponse___closed__1(void){
_start:
{
lean_object* v___f_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_97_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_98_ = ((lean_object*)(l_Lasm_Web_instFromJSResponse___closed__0));
v___x_99_ = l_Lasm_Web_handleFromJS___redArg(v___x_98_, v___f_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponse(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lasm_Web_instFromJSResponse___closed__1, &l_Lasm_Web_instFromJSResponse___closed__1_once, _init_l_Lasm_Web_instFromJSResponse___closed__1);
return v___x_100_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSAbortController___closed__1(void){
_start:
{
lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___f_103_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_104_ = ((lean_object*)(l_Lasm_Web_instFromJSAbortController___closed__0));
v___x_105_ = l_Lasm_Web_handleFromJS___redArg(v___x_104_, v___f_103_);
return v___x_105_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSAbortController(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lasm_Web_instFromJSAbortController___closed__1, &l_Lasm_Web_instFromJSAbortController___closed__1_once, _init_l_Lasm_Web_instFromJSAbortController___closed__1);
return v___x_106_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSAbortSignal___closed__1(void){
_start:
{
lean_object* v___f_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___f_109_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_110_ = ((lean_object*)(l_Lasm_Web_instFromJSAbortSignal___closed__0));
v___x_111_ = l_Lasm_Web_handleFromJS___redArg(v___x_110_, v___f_109_);
return v___x_111_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSAbortSignal(void){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lean_obj_once(&l_Lasm_Web_instFromJSAbortSignal___closed__1, &l_Lasm_Web_instFromJSAbortSignal___closed__1_once, _init_l_Lasm_Web_instFromJSAbortSignal___closed__1);
return v___x_112_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSFormData___closed__1(void){
_start:
{
lean_object* v___f_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___f_115_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_116_ = ((lean_object*)(l_Lasm_Web_instFromJSFormData___closed__0));
v___x_117_ = l_Lasm_Web_handleFromJS___redArg(v___x_116_, v___f_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSFormData(void){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_obj_once(&l_Lasm_Web_instFromJSFormData___closed__1, &l_Lasm_Web_instFromJSFormData___closed__1_once, _init_l_Lasm_Web_instFromJSFormData___closed__1);
return v___x_118_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSSearchParams___closed__1(void){
_start:
{
lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___f_121_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_122_ = ((lean_object*)(l_Lasm_Web_instFromJSSearchParams___closed__0));
v___x_123_ = l_Lasm_Web_handleFromJS___redArg(v___x_122_, v___f_121_);
return v___x_123_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSSearchParams(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_obj_once(&l_Lasm_Web_instFromJSSearchParams___closed__1, &l_Lasm_Web_instFromJSSearchParams___closed__1_once, _init_l_Lasm_Web_instFromJSSearchParams___closed__1);
return v___x_124_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSStorage___closed__1(void){
_start:
{
lean_object* v___f_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___f_127_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_128_ = ((lean_object*)(l_Lasm_Web_instFromJSStorage___closed__0));
v___x_129_ = l_Lasm_Web_handleFromJS___redArg(v___x_128_, v___f_127_);
return v___x_129_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSStorage(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lasm_Web_instFromJSStorage___closed__1, &l_Lasm_Web_instFromJSStorage___closed__1_once, _init_l_Lasm_Web_instFromJSStorage___closed__1);
return v___x_130_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSWebSocket___closed__1(void){
_start:
{
lean_object* v___f_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___f_133_ = ((lean_object*)(l_Lasm_Web_instFromJSNode___closed__0));
v___x_134_ = ((lean_object*)(l_Lasm_Web_instFromJSWebSocket___closed__0));
v___x_135_ = l_Lasm_Web_handleFromJS___redArg(v___x_134_, v___f_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSWebSocket(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_obj_once(&l_Lasm_Web_instFromJSWebSocket___closed__1, &l_Lasm_Web_instFromJSWebSocket___closed__1_once, _init_l_Lasm_Web_instFromJSWebSocket___closed__1);
return v___x_136_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSContext2D___closed__1(void){
_start:
{
lean_object* v___f_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___f_140_ = ((lean_object*)(l_Lasm_Web_instFromJSEventTarget___closed__0));
v___x_141_ = ((lean_object*)(l_Lasm_Web_instFromJSContext2D___closed__0));
v___x_142_ = l_Lasm_Web_handleFromJS___redArg(v___x_141_, v___f_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSContext2D(void){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Lasm_Web_instFromJSContext2D___closed__1, &l_Lasm_Web_instFromJSContext2D___closed__1_once, _init_l_Lasm_Web_instFromJSContext2D___closed__1);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSTimerId___lam__0(double v_t_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_145_, 0, v_t_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSTimerId___lam__0___boxed(lean_object* v_t_146_){
_start:
{
double v_t_boxed_147_; lean_object* v_res_148_; 
v_t_boxed_147_ = lean_unbox_float(v_t_146_);
lean_dec_ref(v_t_146_);
v_res_148_ = l_Lasm_Web_instToJSTimerId___lam__0(v_t_boxed_147_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTimerId___lam__0(lean_object* v_d_153_){
_start:
{
if (lean_obj_tag(v_d_153_) == 3)
{
double v_n_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_n_154_ = lean_ctor_get_float(v_d_153_, 0);
v___x_155_ = lean_box_float(v_n_154_);
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l_Lasm_Web_instFromJSTimerId___lam__0___closed__0));
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSTimerId___lam__0___boxed(lean_object* v_d_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lasm_Web_instFromJSTimerId___lam__0(v_d_158_);
lean_dec(v_d_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_callback___lam__0(lean_object* v_f_174_, lean_object* v_args_175_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_apply_2(v_f_174_, v_args_175_, lean_box(0));
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_185_ == 0)
{
lean_object* v_unused_186_; 
v_unused_186_ = lean_ctor_get(v___x_177_, 0);
lean_dec(v_unused_186_);
v___x_179_ = v___x_177_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_dec(v___x_177_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_181_ = lean_box(0);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___x_181_);
v___x_183_ = v___x_179_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_177_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_177_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_callback___lam__0___boxed(lean_object* v_f_195_, lean_object* v_args_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lasm_Web_callback___lam__0(v_f_195_, v_args_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_callback(lean_object* v_f_199_){
_start:
{
lean_object* v___f_201_; lean_object* v___x_202_; 
v___f_201_ = lean_alloc_closure((void*)(l_Lasm_Web_callback___lam__0___boxed), 3, 1);
lean_closure_set(v___f_201_, 0, v_f_199_);
v___x_202_ = l_Lasm_JS_Function_ofSyncFn(v___f_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_callback___boxed(lean_object* v_f_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lasm_Web_callback(v_f_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_box(0);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2(lean_object* v_context_211_, lean_object* v_bytes_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lasm_JS_Wire_decode(v_bytes_212_);
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v___x_215_; 
lean_dec_ref_known(v___x_214_, 1);
v___x_215_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_215_;
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
v_a_216_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_214_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_214_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2___boxed(lean_object* v_context_224_, lean_object* v_bytes_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2(v_context_224_, v_bytes_225_);
lean_dec_ref(v_bytes_225_);
lean_dec_ref(v_context_224_);
return v_res_227_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___closed__0(void){
_start:
{
uint8_t v___x_228_; uint64_t v___x_229_; 
v___x_228_ = 0;
v___x_229_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1(uint8_t v_await_230_, uint64_t v_extra_231_){
_start:
{
uint64_t v___x_232_; uint64_t v___y_234_; 
v___x_232_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___closed__0);
if (v_await_230_ == 0)
{
uint64_t v___x_237_; 
v___x_237_ = 0ULL;
v___y_234_ = v___x_237_;
goto v___jp_233_;
}
else
{
uint64_t v___x_238_; 
v___x_238_ = 2ULL;
v___y_234_ = v___x_238_;
goto v___jp_233_;
}
v___jp_233_:
{
uint64_t v___x_235_; uint64_t v___x_236_; 
v___x_235_ = lean_uint64_lor(v___x_232_, v___y_234_);
v___x_236_ = lean_uint64_lor(v___x_235_, v_extra_231_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1___boxed(lean_object* v_await_239_, lean_object* v_extra_240_){
_start:
{
uint8_t v_await_boxed_241_; uint64_t v_extra_boxed_242_; uint64_t v_res_243_; lean_object* v_r_244_; 
v_await_boxed_241_ = lean_unbox(v_await_239_);
v_extra_boxed_242_ = lean_unbox_uint64(v_extra_240_);
lean_dec_ref(v_extra_240_);
v_res_243_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1(v_await_boxed_241_, v_extra_boxed_242_);
v_r_244_ = lean_box_uint64(v_res_243_);
return v_r_244_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__0(void){
_start:
{
uint64_t v___x_245_; uint8_t v___x_246_; uint64_t v___x_247_; 
v___x_245_ = 8ULL;
v___x_246_ = 0;
v___x_247_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__1(v___x_246_, v___x_245_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object* v_o_249_, lean_object* v_name_250_, lean_object* v_args_251_){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint64_t v___x_256_; lean_object* v___x_257_; 
v___x_253_ = ((lean_object*)(l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0));
v___x_254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_254_, 0, v_o_249_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
lean_inc_ref(v_name_250_);
v___x_255_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_255_, 0, v_name_250_);
v___x_256_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__0);
v___x_257_ = l_Lasm_JS_Value_invokeRaw(v___x_254_, v___x_255_, v_args_251_, v___x_256_);
if (lean_obj_tag(v___x_257_) == 0)
{
lean_object* v_a_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_a_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc(v_a_258_);
lean_dec_ref_known(v___x_257_, 1);
v___x_259_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___closed__1));
v___x_260_ = lean_string_append(v___x_259_, v_name_250_);
lean_dec_ref(v_name_250_);
v___x_261_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2(v___x_260_, v_a_258_);
lean_dec(v_a_258_);
lean_dec_ref(v___x_260_);
return v___x_261_;
}
else
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
lean_dec_ref(v_name_250_);
v_a_262_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___x_257_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_257_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_262_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1___boxed(lean_object* v_o_270_, lean_object* v_name_271_, lean_object* v_args_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_o_270_, v_name_271_, v_args_272_);
return v_res_274_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__0(void){
_start:
{
uint8_t v___x_275_; uint64_t v___x_276_; 
v___x_275_ = 1;
v___x_276_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(lean_object* v_o_278_, lean_object* v_key_279_){
_start:
{
uint32_t v___x_281_; uint32_t v___x_282_; uint64_t v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_281_ = 203;
v___x_282_ = lasm_js_value_handle(v_o_278_);
v___x_283_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__0);
lean_inc_ref(v_key_279_);
v___x_284_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_284_, 0, v_key_279_);
v___x_285_ = l_Lasm_JS_Wire_encode(v___x_284_);
v___x_286_ = ((lean_object*)(l_Lasm_Web_handleFromJS___redArg___lam__0___closed__0));
v___x_287_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_287_, 0, v_o_278_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lasm_js_call(v___x_281_, v___x_282_, v___x_283_, v___x_285_, v___x_287_);
lean_dec_ref_known(v___x_287_, 2);
lean_dec_ref(v___x_285_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_a_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_289_);
lean_dec_ref_known(v___x_288_, 1);
v___x_290_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___closed__1));
v___x_291_ = l_String_quote(v_key_279_);
v___x_292_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
v___x_293_ = lean_unsigned_to_nat(120u);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = l_Std_Format_pretty(v___x_292_, v___x_293_, v___x_294_, v___x_294_);
v___x_296_ = lean_string_append(v___x_290_, v___x_295_);
lean_dec_ref(v___x_295_);
v___x_297_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_296_, v_a_289_);
lean_dec(v_a_289_);
lean_dec_ref(v___x_296_);
return v___x_297_;
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec_ref(v_key_279_);
v_a_298_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_288_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_288_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0___boxed(lean_object* v_o_306_, lean_object* v_key_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(v_o_306_, v_key_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_background___lam__0(lean_object* v_a_313_){
_start:
{
lean_object* v_a_316_; lean_object* v_a_319_; 
if (lean_obj_tag(v_a_313_) == 0)
{
lean_object* v_a_321_; lean_object* v___x_322_; 
v_a_321_ = lean_ctor_get(v_a_313_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v_a_313_, 1);
v___x_322_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_a_323_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_323_);
lean_dec_ref_known(v___x_322_, 1);
v___x_324_ = ((lean_object*)(l_Lasm_Web_background___lam__0___closed__0));
v___x_325_ = l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(v_a_323_, v___x_324_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_343_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_343_ == 0)
{
v___x_328_ = v___x_325_;
v_isShared_329_ = v_isSharedCheck_343_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_343_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_330_ = ((lean_object*)(l_Lasm_Web_background___lam__0___closed__1));
v___x_331_ = ((lean_object*)(l_Lasm_Web_background___lam__0___closed__2));
v___x_332_ = lean_io_error_to_string(v_a_321_);
v___x_333_ = lean_string_append(v___x_331_, v___x_332_);
lean_dec_ref(v___x_332_);
if (v_isShared_329_ == 0)
{
lean_ctor_set_tag(v___x_328_, 4);
lean_ctor_set(v___x_328_, 0, v___x_333_);
v___x_335_ = v___x_328_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_333_);
v___x_335_ = v_reuseFailAlloc_342_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_mk_empty_array_with_capacity(v___x_336_);
v___x_338_ = lean_array_push(v___x_337_, v___x_335_);
v___x_339_ = lean_box(0);
v___x_340_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_a_326_, v___x_330_, v___x_338_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_dec_ref_known(v___x_340_, 1);
v_a_316_ = v___x_339_;
goto v___jp_315_;
}
else
{
lean_object* v_a_341_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
v_a_319_ = v_a_341_;
goto v___jp_318_;
}
}
}
}
else
{
lean_object* v_a_344_; 
lean_dec(v_a_321_);
v_a_344_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_325_, 1);
v_a_319_ = v_a_344_;
goto v___jp_318_;
}
}
else
{
lean_object* v_a_345_; 
lean_dec(v_a_321_);
v_a_345_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_345_);
lean_dec_ref_known(v___x_322_, 1);
v_a_319_ = v_a_345_;
goto v___jp_318_;
}
}
else
{
lean_object* v___x_346_; 
lean_dec_ref_known(v_a_313_, 1);
v___x_346_ = lean_box(0);
v_a_316_ = v___x_346_;
goto v___jp_315_;
}
v___jp_315_:
{
lean_object* v___x_317_; 
v___x_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_317_, 0, v_a_316_);
return v___x_317_;
}
v___jp_318_:
{
lean_object* v___x_320_; 
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v_a_319_);
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_background___lam__0___boxed(lean_object* v_a_347_, lean_object* v___y_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lasm_Web_background___lam__0(v_a_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_background(lean_object* v_work_351_){
_start:
{
lean_object* v___f_353_; lean_object* v_a_355_; lean_object* v___x_361_; 
v___f_353_ = ((lean_object*)(l_Lasm_Web_background___closed__0));
v___x_361_ = lean_apply_1(v_work_351_, lean_box(0));
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_363_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_a_362_);
lean_dec_ref_known(v___x_361_, 1);
v___x_363_ = lean_task_pure(v_a_362_);
v_a_355_ = v___x_363_;
goto v___jp_354_;
}
else
{
lean_object* v_a_364_; 
v_a_364_ = lean_ctor_get(v___x_361_, 0);
lean_inc_ref(v_a_364_);
lean_dec_ref_known(v___x_361_, 1);
v_a_355_ = v_a_364_;
goto v___jp_354_;
}
v___jp_354_:
{
lean_object* v___x_356_; uint8_t v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = 0;
v___x_358_ = lean_box(0);
v___x_359_ = lean_io_map_task(v___f_353_, v_a_355_, v___x_356_, v___x_357_);
lean_dec_ref(v___x_359_);
v___x_360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_358_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_background___boxed(lean_object* v_work_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lasm_Web_background(v_work_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3(lean_object* v_context_368_, lean_object* v_d_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___boxed(lean_object* v_context_372_, lean_object* v_d_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3(v_context_372_, v_d_373_);
lean_dec(v_d_373_);
lean_dec_ref(v_context_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___redArg(lean_object* v_inst_376_, lean_object* v_context_377_, lean_object* v_args_378_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = lean_array_get_size(v_args_378_);
v___x_382_ = lean_nat_dec_lt(v___x_380_, v___x_381_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_box(0);
v___x_384_ = l_Lasm_JS_decodeAs___redArg(v_inst_376_, v_context_377_, v___x_383_);
return v___x_384_;
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_array_fget_borrowed(v_args_378_, v___x_380_);
lean_inc(v___x_385_);
v___x_386_ = l_Lasm_JS_decodeAs___redArg(v_inst_376_, v_context_377_, v___x_385_);
return v___x_386_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___redArg___boxed(lean_object* v_inst_387_, lean_object* v_context_388_, lean_object* v_args_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lasm_Web_argument___redArg(v_inst_387_, v_context_388_, v_args_389_);
lean_dec_ref(v_args_389_);
lean_dec_ref(v_context_388_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument(lean_object* v_00_u03b1_392_, lean_object* v_inst_393_, lean_object* v_context_394_, lean_object* v_args_395_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lasm_Web_argument___redArg(v_inst_393_, v_context_394_, v_args_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___boxed(lean_object* v_00_u03b1_398_, lean_object* v_inst_399_, lean_object* v_context_400_, lean_object* v_args_401_, lean_object* v_a_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lasm_Web_argument(v_00_u03b1_398_, v_inst_399_, v_context_400_, v_args_401_);
lean_dec_ref(v_args_401_);
lean_dec_ref(v_context_400_);
return v_res_403_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Types(uint8_t builtin) {
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
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_Web_instFromJSEventTarget = _init_l_Lasm_Web_instFromJSEventTarget();
lean_mark_persistent(l_Lasm_Web_instFromJSEventTarget);
l_Lasm_Web_instFromJSNode = _init_l_Lasm_Web_instFromJSNode();
lean_mark_persistent(l_Lasm_Web_instFromJSNode);
l_Lasm_Web_instFromJSElement = _init_l_Lasm_Web_instFromJSElement();
lean_mark_persistent(l_Lasm_Web_instFromJSElement);
l_Lasm_Web_instFromJSText = _init_l_Lasm_Web_instFromJSText();
lean_mark_persistent(l_Lasm_Web_instFromJSText);
l_Lasm_Web_instFromJSFragment = _init_l_Lasm_Web_instFromJSFragment();
lean_mark_persistent(l_Lasm_Web_instFromJSFragment);
l_Lasm_Web_instFromJSDocument = _init_l_Lasm_Web_instFromJSDocument();
lean_mark_persistent(l_Lasm_Web_instFromJSDocument);
l_Lasm_Web_instFromJSWindow = _init_l_Lasm_Web_instFromJSWindow();
lean_mark_persistent(l_Lasm_Web_instFromJSWindow);
l_Lasm_Web_instFromJSEvent = _init_l_Lasm_Web_instFromJSEvent();
lean_mark_persistent(l_Lasm_Web_instFromJSEvent);
l_Lasm_Web_instFromJSListener = _init_l_Lasm_Web_instFromJSListener();
lean_mark_persistent(l_Lasm_Web_instFromJSListener);
l_Lasm_Web_instFromJSResponse = _init_l_Lasm_Web_instFromJSResponse();
lean_mark_persistent(l_Lasm_Web_instFromJSResponse);
l_Lasm_Web_instFromJSAbortController = _init_l_Lasm_Web_instFromJSAbortController();
lean_mark_persistent(l_Lasm_Web_instFromJSAbortController);
l_Lasm_Web_instFromJSAbortSignal = _init_l_Lasm_Web_instFromJSAbortSignal();
lean_mark_persistent(l_Lasm_Web_instFromJSAbortSignal);
l_Lasm_Web_instFromJSFormData = _init_l_Lasm_Web_instFromJSFormData();
lean_mark_persistent(l_Lasm_Web_instFromJSFormData);
l_Lasm_Web_instFromJSSearchParams = _init_l_Lasm_Web_instFromJSSearchParams();
lean_mark_persistent(l_Lasm_Web_instFromJSSearchParams);
l_Lasm_Web_instFromJSStorage = _init_l_Lasm_Web_instFromJSStorage();
lean_mark_persistent(l_Lasm_Web_instFromJSStorage);
l_Lasm_Web_instFromJSWebSocket = _init_l_Lasm_Web_instFromJSWebSocket();
lean_mark_persistent(l_Lasm_Web_instFromJSWebSocket);
l_Lasm_Web_instFromJSContext2D = _init_l_Lasm_Web_instFromJSContext2D();
lean_mark_persistent(l_Lasm_Web_instFromJSContext2D);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
