#include <lean/lean.h>
#include <stdint.h>

extern unsigned int uv_version(void);

LEAN_EXPORT lean_obj_res lasm_probe_decode_error(uint32_t code, uint8_t uv, b_lean_obj_arg path) {
    lean_object * filename = lean_string_size(path) == 1 ? NULL : path;
    return uv ? lean_decode_uv_error((int32_t)code, filename)
              : lean_decode_io_error((int32_t)code, filename);
}

LEAN_EXPORT uint32_t lasm_probe_uv_version(lean_obj_arg unit) {
    lean_dec(unit);
    return uv_version();
}
