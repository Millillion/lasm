// Lasm's build of Emscripten's mimalloc (issues #246 and #247), linked in place
// of Emscripten's prebuilt libmimalloc by the WASI link (src/wasi/wasi-link.mjs)
// and the edge link (src/edge/edge-link.mjs, every edge target and the browser).
//
// emscripten/ holds Emscripten 6.0.9's copy of mimalloc 3.4.1
// (system/lib/mimalloc, MIT, emscripten/LICENSE), unchanged. lasm_mimalloc.c is
// mimalloc's single-file build of it; prim.c is compiled on its own, as
// Emscripten does (see lasm_mimalloc.c). emmalloc and sbrk, which prim.c calls,
// still come from the edge runtime's libmimalloc.a: the two objects define
// every other symbol of that archive's mimalloc members, so no other member is
// linked.
//
// Why: WebAssembly cannot reserve memory without growing into it, so mimalloc
// commits each arena whole and the memory grows an arena at a time. With
// Emscripten's libmimalloc (32 KiB slices, a page map for wasm64's 48 address
// bits) every program started with a 16 MiB arena and an 8 MiB page-map table
// and grew 16 MiB at a time. With 8 KiB slices an object of more than one slice
// chunk (128 slices, 1 MiB) is huge, so the smallest arena is 2 MiB; mimalloc
// doubles the arena size every 8 arenas.
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const here = dirname(fileURLToPath(import.meta.url));
const vendored = join(here, 'emscripten');

/** The slice size (mimalloc's smallest page) and arena size, part of each
 * linking target's settings and so of its programs' cache identity. */
export const mimallocSettings = Object.freeze({ sliceKiB: 8, arenaMiB: 2 });

/** Emscripten 6.0.9's mimalloc sources, the ones lasm_mimalloc.c and prim.c include, and its licence. */
export const mimallocVendored = Object.freeze(['LICENSE', 'include/mimalloc.h', 'include/mimalloc-stats.h',
  ...['atomic', 'bits', 'internal', 'prim', 'track', 'types'].map(name => `include/mimalloc/${name}.h`),
  ...['alloc', 'alloc-aligned', 'alloc-override', 'alloc-posix', 'arena', 'arena-meta', 'bitmap', 'free', 'heap', 'init', 'libc', 'options',
    'os', 'page', 'page-map', 'page-queue', 'random', 'stats', 'theap', 'threadlocal'].map(name => `src/${name}.c`),
  'src/bitmap.h', 'src/prim/prim.c', 'src/prim/emscripten/prim.c'].map(file => `emscripten/${file}`));

/** Every file of the build, relative to src/mimalloc: part of the cache identity of the programs that link it. */
export const mimallocSources = Object.freeze(['mimalloc.mjs', 'lasm_mimalloc.c', ...mimallocVendored]);

/** The code generation flags emcc passes clang (`emcc -v`) for these files. */
export const mimallocCodegenFlags = Object.freeze(['-fignore-exceptions', '-mllvm', '-combiner-global-alias-analysis=false', '-mllvm', '-disable-lsr']);

/** Emscripten's flags for its libmimalloc (tools/system_libs.py: Library and
 * libmimalloc cflags, without -g and -Werror), with the settings' slice size
 * and arena reserve (mimalloc divides it by 4 on WebAssembly), and a page map
 * for 32-bit addresses. */
export function mimallocLibraryFlags({ sliceKiB, arenaMiB }) {
  return ['-O2', '-Wall', '-fno-unroll-loops', '-fno-builtin', '-Wno-unused-function', '-Wno-unused-but-set-variable', '-Wno-unused-variable',
    '-Wno-deprecated-pragma', '-DEMMALLOC_NO_STD_EXPORTS', '-DMI_ENABLE_LARGE_PAGES=0', `-DMI_ARENA_SLICE_SHIFT=${Math.log2(sliceKiB * 1024)}`,
    '-DMI_MAX_ALIGN_SIZE=8', `-DMI_DEFAULT_ARENA_RESERVE=${arenaMiB * 4 * 1024}`, '-DMI_MALLOC_OVERRIDE', '-DMI_DEBUG=0', '-DNDEBUG', '-DMI_LIBC_MUSL',
    '-DMI_USE_BUILTIN_THREAD_POINTER',
    // The page map covers 32-bit addresses (wasm-opt and emcc's MEMORY64=2 lower the memory to 32 bits; at most 2 GiB),
    // not wasm64's 48: its top level, allocated whole as WebAssembly cannot reserve memory, is 512 bytes instead of
    // 8 MiB (32 KiB slices) or 32 MiB (8 KiB). Two-level as on wasm64 (a flat map is the default below 41 bits).
    '-DMI_DEFAULT_VIRTUAL_ADDRESS_BITS=32', '-DMI_PAGE_MAP_FLAT=0'];
}

/** clang's flags for mimalloc: emcc's code generation flags and the library's. */
export function mimallocFlags(settings) {
  return [...mimallocCodegenFlags, ...mimallocLibraryFlags(settings)];
}

/** clang's wasm64 Emscripten target, given a sysroot with Emscripten's headers (a link toolchain's cache). */
export function mimallocClangArguments({ sysroot, settings, source, object }) {
  return ['-target', 'wasm64-unknown-emscripten', `--sysroot=${sysroot}`, '-Xclang', '-iwithsysroot/include/compat',
    ...mimallocFlags(settings), ...mimallocIncludeArguments(), '-c', source, '-o', object];
}

/** The paths every compile of the build passes. */
export function mimallocIncludeArguments() {
  return ['-ffile-prefix-map=' + here + '=lasm/mimalloc', '-I', join(vendored, 'include'), '-I', join(vendored, 'src')];
}

/** The build's two translation units and their object names. */
export const mimallocUnits = Object.freeze([[join(here, 'lasm_mimalloc.c'), 'lasm_mimalloc.o'], [join(vendored, 'src/prim/prim.c'), 'lasm_mimalloc_prim.o']]);
