// Deliver POSIX signals through a pipe, never through a JavaScript callback
// invoked from a signal handler. Used where an engine reserves Lean's signal.
#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <signal.h>
#include <stdatomic.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct subscription {
    int number, read_fd, write_fd;
    struct subscription *next;
} subscription;

static subscription *subscribers[NSIG];
static struct sigaction previous[NSIG];
static atomic_flag gate = ATOMIC_FLAG_INIT;

static void lock(void) {
    while (atomic_flag_test_and_set_explicit(&gate, memory_order_acquire)) { }
}

static void unlock(void) {
    atomic_flag_clear_explicit(&gate, memory_order_release);
}

static void receive_signal(int number) {
    const int saved_errno = errno;
    const unsigned char byte = 1;
    // All signals are masked on this thread during the critical section;
    // another thread can hold the lock only for bounded pointer/pipe operations.
    lock();
    for (subscription *s = subscribers[number]; s; s = s->next) {
        ssize_t written;
        do { written = write(s->write_fd, &byte, sizeof byte); }
        while (written < 0 && errno == EINTR);
        // A full nonblocking pipe already has a pending notification. Ordinary
        // POSIX signals can coalesce, as can the upstream libuv signal path.
    }
    unlock();
    errno = saved_errno;
}

static int enter(sigset_t *saved) {
    sigset_t all;
    sigfillset(&all);
    int result = pthread_sigmask(SIG_BLOCK, &all, saved);
    if (result) { errno = result; return -1; }
    lock();
    return 0;
}

static void leave(const sigset_t *saved) {
    const int saved_errno = errno;
    unlock();
    pthread_sigmask(SIG_SETMASK, saved, NULL);
    errno = saved_errno;
}

void *lasm_signal_open(int number) {
    if (number <= 0 || number >= NSIG || number == SIGKILL || number == SIGSTOP) {
        errno = EINVAL;
        return NULL;
    }
    subscription *s = calloc(1, sizeof *s);
    if (!s) return NULL;
    int fds[2];
#ifdef __linux__
    if (pipe2(fds, O_CLOEXEC)) { free(s); return NULL; }
#else
    if (pipe(fds)) { free(s); return NULL; }
#endif
    s->number = number;
    s->read_fd = fds[0];
    s->write_fd = fds[1];
    if (fcntl(fds[0], F_SETFD, FD_CLOEXEC) < 0 ||
        fcntl(fds[1], F_SETFD, FD_CLOEXEC) < 0 ||
        fcntl(fds[1], F_SETFL, O_NONBLOCK) < 0) goto fail;
    sigset_t saved;
    if (enter(&saved)) goto fail;
    if (!subscribers[number]) {
        struct sigaction action = {0};
        action.sa_handler = receive_signal;
        action.sa_flags = SA_RESTART;
        sigfillset(&action.sa_mask);
        if (sigaction(number, &action, &previous[number])) {
            leave(&saved);
            goto fail;
        }
    }
    s->next = subscribers[number];
    subscribers[number] = s;
    leave(&saved);
    return s;
fail:;
    const int saved_errno = errno;
    close(fds[0]);
    close(fds[1]);
    free(s);
    errno = saved_errno;
    return NULL;
}

// At most one asynchronous reader per subscription. Closing the write side
// wakes that reader; its caller releases the allocation only after it returns.
int lasm_signal_wait(void *pointer) {
    subscription *s = pointer;
    unsigned char bytes[64];
    ssize_t count;
    do { count = read(s->read_fd, bytes, sizeof bytes); }
    while (count < 0 && errno == EINTR);
    return (int)count;
}

int lasm_signal_stop(void *pointer) {
    subscription *s = pointer;
    if (s->write_fd < 0) return 0;
    sigset_t saved;
    if (enter(&saved)) return -1;
    subscription **entry = &subscribers[s->number];
    while (*entry && *entry != s) entry = &(*entry)->next;
    if (*entry != s) { errno = EINVAL; leave(&saved); return -1; }
    if (!s->next && entry == &subscribers[s->number]) {
        struct sigaction current;
        if (sigaction(s->number, NULL, &current) ||
            (current.sa_handler == receive_signal &&
             sigaction(s->number, &previous[s->number], NULL))) {
            leave(&saved);
            return -1;
        }
    }
    *entry = s->next;
    close(s->write_fd);
    s->write_fd = -1;
    leave(&saved);
    return 0;
}

void lasm_signal_free(void *pointer) {
    subscription *s = pointer;
    if (!s || s->write_fd >= 0) return;
    close(s->read_fd);
    free(s);
}
