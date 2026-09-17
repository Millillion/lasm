# Experimental runtime and callable modules

Implemented and tested locally on 2026-09-17, Linux x64, Node 24.13.1, Lean
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
The source compiler supports ASCII module/declaration names and a single source
root. Arbitrary Lake packages, plugins, custom compiler options, and foreign
libraries need further integration.

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
   `check_stack`. The linear stack is configured to 1 MiB and maximum memory to
   256 MiB. This does not promise protection against every unchecked C stack
   overflow or a time limit for nonterminating Lean code.
5. Initialize the supported alloc/object/thread runtime directly. Native process,
   signal, mmap and libuv initialization is excluded. Panic's stderr primitive
   writes through libc and fails fatally if the write fails. Its symbol is renamed
   in `object.cpp` to avoid colliding with Lean's full `IO.eprintln` implementation.

The linked WASI imports are exactly `fd_close`, `fd_fdstat_get`, `fd_read`,
`fd_seek`, `fd_write`, `environ_get`, `environ_sizes_get`, `clock_time_get`, and
`proc_exit`. Node's WASI adapter receives no environment variables or preopened
directories, and uses `returnOnExit` so guest exit cannot terminate the Node
process. This is internal libc compatibility, not a supported `IO.FS` API.

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

## Remaining gates

- Real Lean IO, cancellation, rejection, sequential calls, repeated resource use,
  Asyncify and JSPI are now implemented and tested; see [IO.md](IO.md).
- A copied generated module runs in a separate Node project with no compiler on
  PATH, including a build in a directory containing spaces. Published-package
  installation and package-manager support still need validation.
- Lake dependency resolution and supported-platform release packaging.
- The installed Lean Clang/LLD route now compiles all 14 runtime translation units
  and the 92-module core example. It passes 27 comparisons with the Zig artifact,
  including large integers, captured closures, Unicode, bytes, and imported
  initialization. See `docs/evidence/2026-09-17-bundled-runtime.json`.
- That experiment still uses Zig's C/C++ headers and six startup/library link
  inputs. It establishes a viable compiler path, not a finished distributable
  sysroot. Measure and package the required headers/libraries and target archives
  before changing the default reference toolchain.
- Browser/cloud loading and explicit host capabilities.

The package remains private. There is no remote or publication step in this work.

After `npm test`, reproduce the full bundled-toolchain comparison with
`npm run probe:bundled-runtime`. It discovers Zig's actual link inputs from a
fresh verbose reference link rather than hard-coding cache directory hashes.
