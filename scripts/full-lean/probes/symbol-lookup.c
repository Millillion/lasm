// Check dlsym-created function pointers across already-running pthreads.
#include <assert.h>
#include <dlfcn.h>
#include <pthread.h>
#include <stdio.h>

typedef int (*function)(int);
int exported_value = 37;
int exported_add(int value) { return value + exported_value; }
int exported_subtract(int value) { return value - exported_value; }
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t condition = PTHREAD_COND_INITIALIZER;
static int ready, proceed;
static function from_main, from_worker;

static void missing(void) {
    dlerror();
    assert(dlsym(RTLD_DEFAULT, "lasm_nonexistent_symbol") == NULL);
    assert(dlerror() != NULL);
    assert(dlerror() == NULL);
}
static void *worker(void *unused) {
    (void)unused;
    pthread_mutex_lock(&mutex);
    ready = 1;
    pthread_cond_signal(&condition);
    while (!proceed) pthread_cond_wait(&condition, &mutex);
    pthread_mutex_unlock(&mutex);
    assert(from_main(5) == 42);
    missing();
    from_worker = (function)dlsym(RTLD_DEFAULT, "exported_subtract");
    assert(from_worker && from_worker(42) == 5);
    return NULL;
}
int main(void) {
    pthread_t thread;
    assert(pthread_create(&thread, NULL, worker, NULL) == 0);
    pthread_mutex_lock(&mutex);
    while (!ready) pthread_cond_wait(&condition, &mutex);
    pthread_mutex_unlock(&mutex);
    missing();
    int *value = dlsym(RTLD_DEFAULT, "exported_value");
    assert(value && *value == 37);
    from_main = (function)dlsym(RTLD_DEFAULT, "exported_add");
    assert(from_main && from_main(5) == 42);
    assert((function)dlsym(RTLD_DEFAULT, "exported_add") == from_main);
    pthread_mutex_lock(&mutex);
    proceed = 1;
    pthread_cond_signal(&condition);
    pthread_mutex_unlock(&mutex);
    assert(pthread_join(thread, NULL) == 0);
    assert(from_worker(42) == 5);
    puts("symbol lookup and cross-thread function pointers passed");
}
