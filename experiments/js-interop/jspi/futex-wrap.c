/* Configuration B (JSPI) prototype: the main runtime thread's futex waits
   suspend on Atomics.waitAsync (jspi-library.js) instead of blocking Node's
   event loop. Linked with -Wl,--wrap=emscripten_futex_wait. */
#include <stdint.h>
#include <pthread.h>
#ifdef __cplusplus
extern "C" {
#endif
int __real_emscripten_futex_wait(volatile void *address, uint32_t value, double milliseconds);
int lasm_jspi_futex_wait(volatile void *address, uint32_t value, double milliseconds);
pthread_t emscripten_main_runtime_thread_id(void);
void lasm_jspi_futex_trace(volatile void *address, uint32_t value, double milliseconds);
int __wrap_emscripten_futex_wait(volatile void *address, uint32_t value, double milliseconds) {
    /* Only Node's main thread may suspend. A Suspending import must not even
       be called on other threads: with JavaScript frames on the stack (e.g.
       a proxied pthread_create) V8 throws SuspendError before calling it. */
    if (pthread_self() == emscripten_main_runtime_thread_id()) {
        int result = lasm_jspi_futex_wait(address, value, milliseconds);
        if (result != -1000) return result;
    }
    lasm_jspi_futex_trace(address, value, milliseconds);
    return __real_emscripten_futex_wait(address, value, milliseconds);
}
#ifdef __cplusplus
}
#endif
