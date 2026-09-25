#define _GNU_SOURCE
#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/prctl.h>
#include <sys/resource.h>

int lasm_lean_prepare_process(char *error, size_t capacity);

int main(void) {
    struct rlimit before, after;
    assert(getrlimit(RLIMIT_CORE, &before) == 0);
    // A setup-only child: no Wasm, engine, cache or large allocation is created
    // while this flag is clear. The parent guard and its limits stay unchanged.
    assert(prctl(PR_SET_THP_DISABLE, 0, 0, 0, 0) == 0);
    assert(prctl(PR_GET_THP_DISABLE, 0, 0, 0, 0) == 0);
    char error[512] = {0};
    for (int repeat = 0; repeat < 2; repeat++) {
        if (lasm_lean_prepare_process(error, sizeof(error))) {
            fprintf(stderr, "%s\n", error);
            return 1;
        }
        assert(prctl(PR_GET_THP_DISABLE, 0, 0, 0, 0) == 1);
        assert(getrlimit(RLIMIT_CORE, &after) == 0);
        assert(before.rlim_cur == after.rlim_cur && before.rlim_max == after.rlim_max);
    }
    puts("base pages prepared without inherited setup; resource limits preserved");
    return 0;
}
