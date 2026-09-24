#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <limits.h>
#include <pthread.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// Bun 1.4.2 ignores Worker.resourceLimits.stackSizeMb and explicitly requests
// 4 MiB pthread stacks. Its independent JSC budget cannot enlarge that mapping.
// Loaded only into a Lasm application's process; never installed system-wide.
static size_t reservation;
static int (*next_setstacksize)(pthread_attr_t *, size_t);
static pthread_once_t once = PTHREAD_ONCE_INIT;

__attribute__((constructor)) static void initialize_reservation(void) {
    const char *value = getenv("LASM_BUN_STACK_BYTES");
    char *end = NULL;
    errno = 0;
    unsigned long long bytes = value ? strtoull(value, &end, 10) : 64ULL * 1024 * 1024;
    if (errno || (value && (!*value || *end || *value == '-')) ||
        bytes > SIZE_MAX || bytes < 4ULL * 1024 * 1024) {
        static const char message[] = "Invalid private Bun stack reservation\n";
        size_t offset = 0;
        while (offset < sizeof(message) - 1) {
            ssize_t written = write(2, message + offset, sizeof(message) - 1 - offset);
            if (written < 0 && errno == EINTR) continue;
            if (written <= 0) break;
            offset += (size_t)written;
        }
        _exit(125);
    }
    reservation = (size_t)bytes;
    // The loader consumed /proc/self/fd/N before constructors run. Closing our
    // inherited descriptor here avoids leaking it into Bun or application code.
    const char *descriptor = getenv("LASM_BUN_STACK_FD");
    if (descriptor) {
        errno = 0;
        long fd = strtol(descriptor, &end, 10);
        if (errno || !*descriptor || *end || fd < 3 || fd > INT_MAX) _exit(125);
        if (close((int)fd) != 0) _exit(125);
    }
}

static void resolve_original(void) {
    next_setstacksize = dlsym(RTLD_NEXT, "pthread_attr_setstacksize");
    if (!next_setstacksize) _exit(125);
}

size_t lasm_bun_stack_reservation_bytes(void) { return reservation; }

int pthread_attr_setstacksize(pthread_attr_t *attr, size_t bytes) {
    pthread_once(&once, resolve_original);
    if (bytes == 4 * 1024 * 1024 && reservation > bytes) bytes = reservation;
    return next_setstacksize(attr, bytes);
}
