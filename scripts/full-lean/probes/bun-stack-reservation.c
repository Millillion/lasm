#define _GNU_SOURCE
#include <pthread.h>
#include <dlfcn.h>
#include <stdlib.h>

// Linux diagnostic only, loaded into the selected child process by the probe.
// Bun 1.4.2 reserves 4 MiB for its workers independently of JSC's stack budget.
// This is not installed system-wide or used by the stock Bun conformance suite.
static int (*original_setstacksize)(pthread_attr_t *, size_t);
static pthread_once_t once = PTHREAD_ONCE_INIT;

static void resolve_original(void) {
    original_setstacksize = dlsym(RTLD_NEXT, "pthread_attr_setstacksize");
    if (!original_setstacksize) abort();
}

int pthread_attr_setstacksize(pthread_attr_t *attr, size_t size) {
    pthread_once(&once, resolve_original);
    if (size == 4 * 1024 * 1024) size = 64 * 1024 * 1024;
    return original_setstacksize(attr, size);
}
