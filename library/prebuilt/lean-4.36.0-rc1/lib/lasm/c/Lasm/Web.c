// Lean compiler output
// Module: Lasm.Web
// Imports: public import Init public meta import Init public import Lasm.Web.Types public import Lasm.Web.Dom public import Lasm.Web.Events public import Lasm.Web.Timers public import Lasm.Web.Fetch public import Lasm.Web.Url public import Lasm.Web.Storage public import Lasm.Web.History public import Lasm.Web.WebSocket public import Lasm.Web.Crypto public import Lasm.Web.Console public import Lasm.Web.Canvas public import Lasm.Web.App
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
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
lean_object* initialize_Lasm_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_Web_Events(uint8_t builtin);
lean_object* initialize_Lasm_Web_Timers(uint8_t builtin);
lean_object* initialize_Lasm_Web_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_Web_Url(uint8_t builtin);
lean_object* initialize_Lasm_Web_Storage(uint8_t builtin);
lean_object* initialize_Lasm_Web_History(uint8_t builtin);
lean_object* initialize_Lasm_Web_WebSocket(uint8_t builtin);
lean_object* initialize_Lasm_Web_Crypto(uint8_t builtin);
lean_object* initialize_Lasm_Web_Console(uint8_t builtin);
lean_object* initialize_Lasm_Web_Canvas(uint8_t builtin);
lean_object* initialize_Lasm_Web_App(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web(uint8_t builtin) {
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
res = initialize_Lasm_Web_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Timers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Storage(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_History(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_WebSocket(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Crypto(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Console(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Canvas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
