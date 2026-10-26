/* Lasm WASI host (src/wasi/lasm_wasi.c): the wasi_snapshot_preview1 imports
   with their standard 32-bit signatures. The program is wasm64 code whose
   memory is lowered to 32 bits, so P() converts a pointer exactly. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define P(x) ((uint32_t)(uintptr_t)(x))
#define WASI(name) __attribute__((import_module("wasi_snapshot_preview1"), import_name(#name)))

typedef struct { uint32_t buf, len; } wiovec;
WASI(fd_write) uint32_t w_fd_write(uint32_t fd, uint32_t iovs, uint32_t count, uint32_t nwritten);
WASI(fd_read) uint32_t w_fd_read(uint32_t fd, uint32_t iovs, uint32_t count, uint32_t nread);
WASI(fd_close) uint32_t w_fd_close(uint32_t fd);
WASI(fd_seek) uint32_t w_fd_seek(uint32_t fd, int64_t offset, uint32_t whence, uint32_t newoffset);
WASI(fd_fdstat_get) uint32_t w_fd_fdstat_get(uint32_t fd, uint32_t stat);
WASI(fd_filestat_get) uint32_t w_fd_filestat_get(uint32_t fd, uint32_t stat);
WASI(fd_filestat_set_size) uint32_t w_fd_filestat_set_size(uint32_t fd, uint64_t size);
WASI(fd_prestat_get) uint32_t w_fd_prestat_get(uint32_t fd, uint32_t prestat);
WASI(fd_prestat_dir_name) uint32_t w_fd_prestat_dir_name(uint32_t fd, uint32_t path, uint32_t length);
WASI(fd_readdir) uint32_t w_fd_readdir(uint32_t fd, uint32_t buf, uint32_t length, uint64_t cookie, uint32_t used);
WASI(path_open) uint32_t w_path_open(uint32_t dirfd, uint32_t lookup, uint32_t path, uint32_t length, uint32_t oflags,
    uint64_t rights, uint64_t inheriting, uint32_t fdflags, uint32_t fd);
WASI(path_filestat_get) uint32_t w_path_filestat_get(uint32_t fd, uint32_t lookup, uint32_t path, uint32_t length, uint32_t stat);
WASI(path_create_directory) uint32_t w_path_create_directory(uint32_t fd, uint32_t path, uint32_t length);
WASI(path_remove_directory) uint32_t w_path_remove_directory(uint32_t fd, uint32_t path, uint32_t length);
WASI(path_unlink_file) uint32_t w_path_unlink_file(uint32_t fd, uint32_t path, uint32_t length);
WASI(path_rename) uint32_t w_path_rename(uint32_t fd, uint32_t path, uint32_t length, uint32_t newfd, uint32_t newpath, uint32_t newlength);
WASI(path_link) uint32_t w_path_link(uint32_t fd, uint32_t lookup, uint32_t path, uint32_t length, uint32_t newfd, uint32_t newpath, uint32_t newlength);
WASI(clock_time_get) uint32_t w_clock_time_get(uint32_t id, uint64_t precision, uint32_t time);
WASI(random_get) uint32_t w_random_get(uint32_t buf, uint32_t length);
WASI(args_sizes_get) uint32_t w_args_sizes_get(uint32_t count, uint32_t size);
WASI(args_get) uint32_t w_args_get(uint32_t argv, uint32_t buf);
WASI(environ_sizes_get) uint32_t w_environ_sizes_get(uint32_t count, uint32_t size);
WASI(environ_get) uint32_t w_environ_get(uint32_t environ, uint32_t buf);
WASI(poll_oneoff) uint32_t w_poll_oneoff(uint32_t in, uint32_t out, uint32_t count, uint32_t nevents);
WASI(proc_exit) _Noreturn void w_proc_exit(uint32_t code);

