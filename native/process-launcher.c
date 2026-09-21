// Private Linux child entry point. posix_spawn has already replaced the engine:
// libc and allocation run in this single-threaded process, never after a fork
// inside a JavaScript engine. No cwd query is needed to bootstrap this program.
#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void diagnostic(const char *text) {
    size_t remaining = strlen(text);
    while (remaining) {
        ssize_t count = write(2, text, remaining);
        if (count < 0 && errno == EINTR) continue;
        if (count <= 0) return;
        text += count;
        remaining -= (size_t)count;
    }
}

static void fail(const char *message) {
    diagnostic("Lasm process launcher: ");
    diagnostic(message);
    diagnostic("\n");
    _exit(125);
}

static void read_exact(void *data, size_t size) {
    char *bytes = data;
    while (size) {
        ssize_t count = read(3, bytes, size);
        if (count < 0 && errno == EINTR) continue;
        if (count <= 0) fail("incomplete configuration");
        bytes += count;
        size -= (size_t)count;
    }
}

static uint32_t number(void) {
    unsigned char bytes[4];
    read_exact(bytes, sizeof(bytes));
    return (uint32_t)bytes[0] | (uint32_t)bytes[1] << 8
        | (uint32_t)bytes[2] << 16 | (uint32_t)bytes[3] << 24;
}

static char *string(int optional) {
    uint32_t length = number();
    if (optional && length == UINT32_MAX) return NULL;
    char *value = malloc((size_t)length + 1);
    if (!value) fail("allocation failed");
    read_exact(value, length);
    if (memchr(value, 0, length)) fail("NUL in configuration");
    value[length] = 0;
    return value;
}

static void change_directory(const char *path) {
    if (path && chdir(path) < 0) {
        diagnostic("could not change directory to ");
        diagnostic(path);
        diagnostic("\n");
        _exit(255);
    }
}

int main(void) {
    char magic[8];
    read_exact(magic, sizeof(magic));
    if (memcmp(magic, "LASMEX01", sizeof(magic))) fail("unknown configuration version");
    if (fcntl(3, F_SETFD, FD_CLOEXEC) < 0) fail("exec acknowledgement setup failed");
    uint32_t flags = number(), stdio_flags[3];
    if (flags & ~7u) fail("unknown configuration flags");
    for (int fd = 0; fd < 3; fd++) stdio_flags[fd] = number();
    char *directory = string(1), *requested = string(1);
    uint32_t argc = number();
    if (!argc) fail("missing command");
    char **args = calloc((size_t)argc + 1, sizeof(char *));
    if (!args) fail("allocation failed");
    for (uint32_t i = 0; i < argc; i++) args[i] = string(0);
    if (clearenv() < 0) fail("environment reset failed");
    uint32_t envc = number();
    for (uint32_t i = 0; i < envc; i++) {
        char *key = string(0), *value = string(0);
        // Native Lean ignores setenv failures, including invalid names.
        setenv(key, value, 1);
        free(key);
        free(value);
    }
    char extra;
    ssize_t end;
    do { end = read(3, &extra, 1); } while (end < 0 && errno == EINTR);
    if (end != 0) fail("unexpected configuration data");
    for (int fd = 0; fd < 3; fd++) {
        if (fcntl(fd, F_SETFD, 0) < 0) fail("stdio setup failed");
        if (fcntl(fd, F_SETFL, (int)stdio_flags[fd]) < 0) fail("stdio flags restore failed");
    }
    int absolute = requested && requested[0] == '/';
    if (flags & 1u) {
        if (!absolute && !(flags & 2u) && fchdir(4) < 0) fail("inherited cwd setup failed");
        close(4);
    } else if (!absolute) change_directory(directory);
    change_directory(requested);
    if ((flags & 4u) && setsid() < 0) fail("setsid failed");
    execvp(args[0], args);
    diagnostic("could not execute external process '");
    diagnostic(args[0]);
    diagnostic("'\n");
    _exit(255);
}
