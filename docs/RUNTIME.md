# Experimental runtime and callable modules

Original core evidence recorded on 2026-09-17; Node application runtime added
on 2026-09-18. Tested locally on Linux x64, Node 24.13.1, Lean
4.32.0 (`8c9756b28d64dab099da31a4c09229a9e6a2ef35`), Zig 0.16.0.

## Verified behavior

The basic example links 92 generated Lean modules with Lean's real object,
reference counting, closure, string, array, and non-GMP bignum code. Its stripped
Wasm is about 325 KiB. No unresolved symbols are silently converted to imports.

`npm test` compares 67 results against a separately compiled native Lean/C
executable, including integer boundaries around 30/31/64 bits, numbers up to
512 bits, negative integers, Unicode, embedded NUL, arrays, custom inductive
values, captured closures, and a heap constant initialized in an imported module.
Generated C is checked to retain an actual indirect closure call.

Additional tests cover byte buffers, unsigned wraparound, argument validation,
6,120 repeated calls, separate instances, disposal, and a Lean panic. After warm-up
the repeated-call workload stays at 2 MiB of linear memory. This establishes a
bounded workload result, not a general leak proof. Panic discards the failed
instance; a second instance continues to work.

The latest local report is `.work/evidence/runtime.json`; committed snapshots are
under `docs/evidence`. Build reports include dependencies, imports, bytes, and
elapsed build time. Cached builds still regenerate local Lean modules.

## Build and dependency behavior

The reference build uses Zig's wasm32-wasi libc/libc++ sysroot and a reactor
module. The runtime configuration excludes GMP, mimalloc, Lean's small allocator,
and multithreading. Allocation uses upstream malloc/free paths. Target headers
are isolated from the native installation.

Lean emits C from source with eager compilation enabled. `leanir` cannot regenerate
the complete standard library from the installed eagerly compiled artifacts;
using it produced initializer-only output for Prelude. Matching source generation
avoids relying on potentially mismatched bootstrap C.

For local imports the compiler asks Lean for source dependencies, builds their
artifacts, and type-checks generated export wrappers. The Wasm dependency walk
follows calls in generated runtime initializers. This parser is deliberately tied
to Lean 4.32.0's C format and fails if a required initializer cannot be resolved.
The compiler supports ASCII module/declaration names. Lake projects use Lake's
own generated C, dependency graph, source directories, compiler options, and host
metaprograms. The standalone source mode remains available. Foreign executable
code still requires explicit Wasm implementations. See
[DEVELOPER_WORKFLOW.md](DEVELOPER_WORKFLOW.md).

Caches include source, compiler version, flags, and runtime/header fingerprints.
The source build checks the host compiler commit and the project's Lean toolchain.
`npm run setup` verifies pinned download SHA-256 hashes before extracting them.

## Platform adaptations

These are explicit changes applied to cached upstream sources, not success-returning
stubs for missing native facilities:

1. Guard `thread.cpp`'s native signal/stack-overflow header behind
   `LEAN_MULTI_THREAD`; its use is already in the threaded branch.
2. Replace the runtime's C++ unreachable exception with a Wasm trap. Zig's current
   WASI C++ library does not provide the exception ABI, even when the compiler
   accepts `-fwasm-exceptions`. Runtime C++ is compiled with exceptions disabled.
3. Turn the native interrupt/heartbeat exception paths into fatal traps and omit
   an unused native exception helper include from `interrupt.cpp`. These are
   fatal instance failures, not recoverable Lean IO errors.
4. Implement stack queries using wasm-ld's stack-bound symbols, with a trapping
   `check_stack`. The base linear stack is 1 MiB; async fibers have separate 256 KiB C
   and Asyncify stacks, with active bounds supplied by the scheduler. Maximum
   memory is 1 GiB (grown on demand). This does not promise protection against every unchecked C stack
   overflow or a time limit for nonterminating Lean code.
5. Initialize the supported alloc/object/thread runtime directly. Native process,
   signal, mmap and libuv initialization is excluded. Panic's stderr primitive
   writes through libc and fails fatally if the write fails. Its symbol is renamed
   in `object.cpp` to avoid colliding with Lean's full `IO.eprintln` implementation.
6. Extract the unchanged initialization-state and `ST.Ref` primitives from the
   pinned upstream `io.cpp`, without its unrelated native OS/libuv dependencies.
   Source boundaries are checked during the build. The JS loader marks the end of
   initialization after all module initializers succeed. This supports Lean's JSON
   library and `IO.Ref`; tests verify initialization state and independent mutable
   references in separate instances on both Asyncify and JSPI.
7. Read Windows/macOS flags from the private Node host import so ordinary
   `System.FilePath` uses the host's separators and drive rules. Pointer width
   stays 32 bits for Wasm. Portable browser/Worker instances use Unix-style paths.
   Windows UTC lookup is implemented for standard HTTP dates; other Windows
   named time zones remain explicitly unsupported.
8. Select the upstream two-slot static scalar layout for every 32-bit target,
   including WASI. Lean's installed header selects that layout only for
   Emscripten; using its default layout truncated static 64-bit fields such as
   cached name hashes. The native differential expression fixture covers the fix.
9. Extract the three unchanged pure `Lean.Expr`/`Lean.Level` metadata primitives
   from the pinned kernel sources. This enables ordinary expression data without
   claiming that the kernel, elaborator or compiler itself is ported.

The linked libc WASI allowlist is `fd_close`, `fd_fdstat_get`, `fd_read`,
`fd_seek`, `fd_write`, `environ_get`, `environ_sizes_get`, `clock_time_get`, and
`proc_exit`. All hosts now use the portable adapter; Node defaults diagnostics
to its standard streams. Files/network/environment are handled through separate
private Node runtime imports, not WASI filesystem preopens.

The standard Node runtime adds file/console/context primitives and the TCP,
timer, and synchronization primitives needed by unmodified `Std.Http.Server`.
It replaces native task management with cooperative execution using Lean's actual
task/promise objects. Dropped pure-task registrations are removed; IO tasks keep
running to completion. Each suspended invocation owns its own stacks and response
buffer. Scheduler batches yield to the Node event loop, including when every
Promise is already resolved. No OS threads or native task priorities are emulated.
See [NODE_APPS.md](NODE_APPS.md), [IO.md](IO.md), and the unchecked
[remaining limitations](../IO_LIMITATIONS.md).

## ABI and lifecycle

`createModule()` returns a fresh initialized instance. `Nat` and `Int` require JS
`bigint`; numbers are not implicitly rounded or coerced. Strings require valid
Unicode, preserving embedded NUL. Byte arrays are copied in and out. There is a
16 MiB input transfer limit. Raw Lean pointers never appear in the public API.

Generated wrappers make Lean check each declared signature. Inputs are validated
before allocation, then ownership transfers to Lean. Results are decoded and
released. Memory views are reacquired after allocations because memory can grow.
The core bridge uses Lean's constructors and refcount operations.

Invalid JS input throws without poisoning the instance. A guest trap/panic or
failed result conversion discards it: trying to recover partially transferred
references would be unsafe. `dispose()` is idempotent and drops all instance and
WASI references, allowing JS garbage collection to reclaim persistent globals.
It does not synchronously force the JS garbage collector. Further calls fail.

## Installation and portable hosts

- Real Lean IO, cancellation, rejection, sequential calls, repeated resource use,
  Asyncify and JSPI are now implemented and tested; see [IO.md](IO.md).
- A copied generated module runs in a separate Node project with no compiler on
  PATH. Local tarball installation, multi-module Lake builds, paths containing
  spaces, and offline reinstalls pass with npm, pnpm, and Yarn. The compiler remains
  unpublished. See [RELEASE.md](RELEASE.md).
- The recorded installed Lean Clang/LLD experiment compiled the then-current 14 runtime translation units
  and the 92-module core example. It passes 27 comparisons with the Zig artifact,
  including large integers, captured closures, Unicode, bytes, and imported
  initialization. See `docs/evidence/2026-09-17-bundled-runtime.json`.
  The later JSON/Express work adds a fifteenth unit for the upstream reference and
  initialization primitives. Local release packages now include all 17 units (including Node IO and async primitives),
  standard-library archives, C/C++ headers, and the six startup/library inputs.
  Installed packages compile and link real Lean IO with Lean's Clang/LLD and the
  packaged sysroot; Zig is used only by the maintainer reference build.
- Real Chrome and local workerd execute the Asyncify artifact using the portable
  WASI adapter and explicit byte-storage/fetch capabilities; see [HOSTS.md](HOSTS.md).

Other build platforms, arbitrary native Lean libraries, more browser engines,
and live cloud deployment have not been validated.

The package remains private. There is no remote or publication step in this work.

After `npm test`, reproduce the full bundled-toolchain comparison with
`npm run probe:bundled-runtime`. It discovers Zig's actual link inputs from a
fresh verbose reference link rather than hard-coding cache directory hashes.
