// Regression for normal pthread completion racing with process shutdown.
// No output may be added by late worker cleanup messages.
#include <atomic>
#include <pthread.h>
#include <cstdio>
#include <sched.h>

static std::atomic<unsigned> completed{0};
static void *run(void *) {
    completed.fetch_add(1, std::memory_order_release);
    return nullptr;
}

int main() {
    pthread_attr_t attributes;
    if (pthread_attr_init(&attributes) ||
        pthread_attr_setdetachstate(&attributes, PTHREAD_CREATE_DETACHED)) return 2;
    for (unsigned i = 0; i < 16; ++i) {
        pthread_t thread;
        if (pthread_create(&thread, &attributes, run, nullptr)) return 3;
    }
    while (completed.load(std::memory_order_acquire) != 16) sched_yield();
    pthread_attr_destroy(&attributes);
    std::puts("thread shutdown passed");
}
