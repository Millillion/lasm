#include <lean/lean.h>
#include <curl/curl.h>
LEAN_EXPORT lean_obj_res shim_curl_version(lean_obj_arg unit) { (void)unit; return lean_mk_string(curl_version()); }
