/* mimalloc for the WASI targets (issue #246; src/wasi/wasi-link.mjs).
 *
 * The sources in mimalloc/ are Emscripten 6.0.9's copy of mimalloc 3.4.1
 * (system/lib/mimalloc, MIT, mimalloc/LICENSE), unchanged. The WASI link
 * compiles them with the flags Emscripten builds its libmimalloc with
 * (tools/system_libs.py), except for 8 KiB arena slices instead of 32 KiB and
 * a smaller arena reserve, so that an arena is 2 MiB instead of 16 MiB: on
 * WebAssembly an arena is committed whole, so the memory started 16 MiB above
 * what the program used and grew 16 MiB at a time.
 *
 * This is mimalloc's own single-file build (src/static.c) without its
 * prim/prim.c, which is compiled on its own as Emscripten does: included
 * after mimalloc/internal.h (which defines __wasi__ for Emscripten) it would
 * take the WASI sbrk layer instead of Emscripten's emmalloc one. emmalloc and
 * sbrk come from the edge runtime's libmimalloc.a. */
#ifndef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE
#endif
#include "mimalloc.h"
#include "mimalloc/internal.h"

#include "alloc.c"          // includes alloc-override.c and free.c
#include "alloc-aligned.c"
#include "alloc-posix.c"
#include "arena.c"
#include "arena-meta.c"
#include "bitmap.c"
#include "heap.c"
#include "init.c"
#include "libc.c"
#include "options.c"
#include "os.c"
#include "page.c"           // includes page-queue.c
#include "page-map.c"
#include "random.c"
#include "stats.c"
#include "theap.c"
#include "threadlocal.c"
