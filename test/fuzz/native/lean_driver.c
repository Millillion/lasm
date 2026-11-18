/*
 * libFuzzer driver for the Lean entry points of LasmFuzz.lean (built by
 * test/fuzz/native/build.mjs with -DLASM_FUZZ_ENTRY=<exported name>). The
 * entry returns "" or the property it broke; a non-empty answer exits with status 77,
 * and a Lean panic exits too (lean_set_exit_on_panic): libFuzzer saves the input.
 */
#include <lean/lean.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lean_initialize(void);
lean_object *initialize_LasmFuzz(uint8_t builtin, lean_object *world);
lean_object *LASM_FUZZ_ENTRY(lean_object *input);

int LLVMFuzzerInitialize(int *argc, char ***argv) {
    (void)argc; (void)argv;
    lean_initialize();
    lean_set_exit_on_panic(true);
    lean_set_panic_messages(true);
    lean_object *res = initialize_LasmFuzz(1, lean_io_mk_world());
    if (!lean_io_result_is_ok(res)) { lean_io_result_show_error(res); abort(); }
    lean_dec_ref(res);
    lean_io_mark_end_initialization();
    return 0;
}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    lean_object *input = lean_alloc_sarray(1, size, size);
    if (size) memcpy(lean_sarray_cptr(input), data, size);
    lean_object *answer = LASM_FUZZ_ENTRY(input);
    if (lean_string_size(answer) > 1) {
        fprintf(stderr, "\nLasm fuzz property failed: %s\n", lean_string_cstr(answer));
        exit(77); /* libFuzzer saves the input of a target that exits (an abort's ASan report can fail inside Lean's runtime) */
    }
    lean_dec(answer);
    return 0;
}
