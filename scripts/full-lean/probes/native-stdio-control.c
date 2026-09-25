#define _GNU_SOURCE
#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <pthread.h>
#include <signal.h>
#include <stdatomic.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

static unsigned char bytes[16384];
static size_t length = 5;
static ssize_t written;
static int error_number;
static atomic_bool settled;
static void *write_thread(void *unused) {
    (void)unused;
    written = write(1, bytes, length);
    error_number = written < 0 ? errno : 0;
    atomic_store(&settled, 1);
    return NULL;
}
int main(int argc, char **argv) {
    assert(argc == 2);
    const char *mode = argv[1];
    signal(SIGPIPE, SIG_IGN);
    int reader = -1;
    if (!strcmp(mode, "closed")) assert(close(1) == 0);
    else if (!strcmp(mode, "full") || !strcmp(mode, "readonly")) {
        int fd = open(!strcmp(mode, "full") ? "/dev/full" : "/dev/null", !strcmp(mode, "full") ? O_WRONLY : O_RDONLY);
        assert(fd >= 0 && dup2(fd, 1) == 1); close(fd);
    } else if (!strcmp(mode, "partial") || !strcmp(mode, "broken") || !strcmp(mode, "blocked")) {
        int fds[2]; assert(pipe(fds) == 0);
        assert(fcntl(fds[1], F_SETPIPE_SZ, 4096) == 4096);
        assert(dup2(fds[1], 1) == 1); close(fds[1]); reader = fds[0];
        if (!strcmp(mode, "partial")) { assert(fcntl(1, F_SETFL, O_NONBLOCK) == 0); length = sizeof(bytes); }
        if (!strcmp(mode, "broken")) { close(reader); reader = -1; }
        if (!strcmp(mode, "blocked")) assert(write(1, bytes, 4096) == 4096);
    } else assert(!strcmp(mode, "bytes") || !strcmp(mode, "buffered") || !strcmp(mode, "forced"));
    if (length == 5) { const unsigned char input[] = {0, 255, 0xce, 0xbb, 10}; memcpy(bytes, input, sizeof(input)); }
    else memset(bytes, 0xa5, length);
    if (!strcmp(mode, "buffered") || !strcmp(mode, "forced")) {
        FILE *file = fopen("buffered.bin", "w"); assert(file);
        assert(fwrite(bytes, 1, length, file) == length);
        fprintf(stderr, "{\"errno\":0,\"written\":%zu}\n", length);
        if (!strcmp(mode, "forced")) _exit(0);
        return 0; // Deliberately retain the live FILE for normal CRT shutdown.
    }
    int blocked = !strcmp(mode, "blocked");
    if (blocked) {
        pthread_t worker; assert(!pthread_create(&worker, NULL, write_thread, NULL));
        struct timespec delay = { .tv_nsec = 50000000 }; nanosleep(&delay, NULL);
        assert(!atomic_load(&settled));
        unsigned char fill[4096]; assert(read(reader, fill, sizeof(fill)) == (ssize_t)sizeof(fill));
        assert(!pthread_join(worker, NULL));
    } else write_thread(NULL);
    int wasi_error = 0;
    if (error_number == EBADF) wasi_error = 8;
    else if (error_number == ENOSPC) wasi_error = 51;
    else if (error_number == EPIPE) wasi_error = 64;
    else assert(error_number == 0);
    if (written < 0) written = 0;
    fprintf(stderr, "{\"errno\":%d,\"written\":%zd", wasi_error, written);
    if (reader >= 0) {
        unsigned char received[16384]; ssize_t count = read(reader, received, written ? (size_t)written : 1);
        assert(count == written && !memcmp(received, bytes, (size_t)count));
        fprintf(stderr, ",\"received\":%zd", count); close(reader);
    }
    if (blocked) fputs(",\"hostTurnWhileBlocked\":true", stderr);
    fputs("}\n", stderr);
    return 0;
}
