// Lean compiler output
// Module: Lasm.Fastly
// Imports: public import Init public meta import Init public import Lasm.Fastly.Types public import Lasm.Fastly.Cache public import Lasm.Fastly.ConfigStore public import Lasm.Fastly.HttpCache public import Lasm.Fastly.Shielding public import Lasm.Fastly.Abi public import Lasm.Fastly.Uap public import Lasm.Fastly.HttpBody public import Lasm.Fastly.Log public import Lasm.Fastly.HttpReq public import Lasm.Fastly.HttpDownstream public import Lasm.Fastly.HttpResp public import Lasm.Fastly.Dictionary public import Lasm.Fastly.Geo public import Lasm.Fastly.DeviceDetection public import Lasm.Fastly.Erl public import Lasm.Fastly.ObjectStore public import Lasm.Fastly.ImageOptimizer public import Lasm.Fastly.KvStore public import Lasm.Fastly.SecretStore public import Lasm.Fastly.Backend public import Lasm.Fastly.AsyncIo public import Lasm.Fastly.Purge public import Lasm.Fastly.ComputeRuntime public import Lasm.Fastly.Acl
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
lean_object* initialize_Lasm_Fastly_Types(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Cache(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_ConfigStore(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_HttpCache(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Shielding(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Abi(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Uap(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_HttpBody(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Log(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_HttpReq(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_HttpDownstream(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_HttpResp(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Dictionary(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Geo(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_DeviceDetection(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Erl(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_ObjectStore(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_ImageOptimizer(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_KvStore(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_SecretStore(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Backend(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_AsyncIo(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Purge(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_ComputeRuntime(uint8_t builtin);
lean_object* initialize_Lasm_Fastly_Acl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Fastly(uint8_t builtin) {
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
res = initialize_Lasm_Fastly_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_ConfigStore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_HttpCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Shielding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Abi(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Uap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_HttpBody(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_HttpReq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_HttpDownstream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_HttpResp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Dictionary(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Geo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_DeviceDetection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Erl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_ObjectStore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_ImageOptimizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_KvStore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_SecretStore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Backend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_AsyncIo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Purge(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_ComputeRuntime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Fastly_Acl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
