# Feasibility assessment

As of 2026-09-17, the project is technically credible, but the original discussion
understates the runtime port and overstates several dependencies. The successful
experiments validate the compilation route and two async mechanisms. They do not
yet establish a complete Lean runtime, standard library, or production package.

## Local evidence

Environment: Linux x86-64; Lean 4.32.0; Node 24.13.1/V8 13.6; Zig 0.16.0;
Binaryen 108. Inputs and checksums are in
[toolchains.json](../experiments/feasibility/toolchains.json).

Run instructions are in [the experiment README](../experiments/feasibility/README.md).

| Probe | Observed result | Boundary of the evidence |
| --- | --- | --- |
| Lean → C → Zig → Wasm → Node | 98 comparisons against native Lean evaluation passed; zero imports; 186-byte stripped module | Only two scalar functions. Runtime-dependent code and module initialization were discarded. |
| Lean's bundled Clang/LLD → Wasm → Node | The same 98 comparisons passed; zero imports; 126-byte module | Used Zig's Wasm libc headers. Does not establish a complete sysroot or all-platform tool availability. |
| Lean `Nat` multiplication without runtime | Linker rejected missing `lean_nat_big_mul`, `lean_nat_overflow_mul`, and reference-counting support | Intentional negative control showing why scalar success is insufficient. |
| Custom import + malloc/free | One `lasm.double` import; allocation/write/free of 4,096 bytes succeeded | A small C program, not Lean's object allocator or a long-term leak test. |
| libc `puts` | Four `wasi_snapshot_preview1` imports; instantiation with `{}` failed | WASI imports can appear through dependencies even with a custom application ABI. |
| JSPI async file reads | Three calls returned 2, 44, and 68, with six actual host reads | Required `--experimental-wasm-jspi` on this Node version. C-only, not Lean IO. |
| Standalone Asyncify async file reads | Same results with no Node flag; 232-byte input became 612 bytes | Tiny illustrative size measurement, not a representative Lean overhead benchmark. |
| Built-in bignum/object sources | `mpz.cpp`, `mpn.cpp`, and `object.cpp` compiled for wasm32 without GMP or multithreading | Object compilation only; unresolved link dependencies and initialization remain. |
| Unmodified Lean IO source | Compile errors exposed mmap, signal, and libuv-header dependencies | The missing header is not proof libuv is impossible to port; the unit cannot simply be compiled unchanged with this setup. |

Saved machine-readable snapshots:
[compilation and async results](evidence/2026-09-17-feasibility.json) and
[runtime compilation results](evidence/2026-09-17-runtime-compile.json).
Generated code, diagnostics, and exact compiler arguments remain under ignored
`.work/feasibility/` and `.work/runtime-compile/`.

## Corrections that affect the architecture

### GMP is optional; preserve real arbitrary-precision semantics

Lean's `USE_GMP` build option selects between GMP and its own implementation in
`mpz.cpp`/`mpn.cpp`. The fallback is already present in the pinned release and its
sources compile in the probe. We should neither implement a new `mpz_*` subset nor
cap `Nat`/`Int` values to simplify v1. Runtime execution and differential tests for
large numbers are still required. Sources:
[pinned build configuration](https://github.com/leanprover/lean4/blob/v4.32.0/src/CMakeLists.txt),
[bignum representation](https://github.com/leanprover/lean4/blob/v4.32.0/src/runtime/mpz.h).

### The link includes more than the user's C file and runtime

Generated C contains references to imported Lean functions and module
initializers. The runtime is C/C++; `Init`, `Std`, and other executed imported
modules supply additional generated code. Native archives from an installed
Lean toolchain cannot be linked into wasm32. We need version-matched target
archives or a mechanism to generate and compile the relevant dependency code.
The prototype's discarded initializer is not a general solution. The prior
[lean2wasm implementation](https://raw.githubusercontent.com/T-Brick/lean2wasm/main/Lean2Wasm.lean)
also traverses imports and links several Lean libraries.

### Modern IO is broader than a thin file shim

The pinned runtime includes `io.cpp`, `process.cpp`, thread and mutex support,
multiple libuv units, and OpenSSL integration. Lean's `Std.Async` and `Std.Http`
also exist in this release. Supporting a host `fetch` API does not automatically
port Lean's existing socket, event-loop, process, or HTTP-server APIs. Sources:
[runtime object list](https://github.com/leanprover/lean4/blob/v4.32.0/src/runtime/CMakeLists.txt),
[Std.Async IO](https://github.com/leanprover/lean4/blob/v4.32.0/src/Std/Async/IO.lean),
[Std.Http](https://github.com/leanprover/lean4/blob/v4.32.0/src/Std/Http.lean).

Lean also already has a single-thread configuration; investigate that before
writing a new scheduler. It still needs behavioral testing for the supported
`Task`/promise operations. Disabling parallel threads is not the same as making
every asynchronous operation safe to execute synchronously. Source:
[thread abstraction](https://github.com/leanprover/lean4/blob/v4.32.0/src/runtime/thread.h).

### WASI versus custom imports is not an exclusive choice

Our Zig target generated Preview 1 imports when stdio was linked. Allocation alone
did not. The imports of the final module, not its target triple or top-level API,
determine what the host must provide. A hybrid of WASI compatibility functions
and custom high-level imports is possible.

The thread's description of Preview 2 as lacking an HTTP interface is incorrect:
[wasi-http defines HTTP interfaces](https://github.com/WebAssembly/wasi-http).
However, [Node's built-in WASI API](https://nodejs.org/api/wasi.html) documents
`unstable` and `preview1`, not a built-in Preview 2 component runtime. For this
Node-first project, custom `fetch` integration can still be the simpler choice.
That is an implementation tradeoff, not evidence that WASI has no value.

### Zig does not provide the complete asynchronous solution

An ordinary Wasm numeric import cannot just return a JavaScript Promise and
cause the caller to await it. JSPI or a transformed continuation mechanism must
handle suspension. Our standalone Binaryen experiment shows that Asyncify can
be used without Emscripten, but it adds a tool and a JS runtime responsibility.

Asyncify instruments functions on paths that can suspend, including relevant
callers and indirect calls. Restricting instrumentation to the leaf IO functions
would be wrong. Closures and other indirect calls in actual Lean code therefore
need a realistic test before optimization. The initial stack buffer and driver
are intentionally limited. Source:
[Emscripten's Asyncify/JSPI documentation](https://emscripten.org/docs/porting/asyncify.html).

### A simple install can still be a substantial download

The official Linux Zig 0.16.0 archive is 55,478,392 bytes (52.9 MiB). The unpacked
tree contains about 341 MiB of apparent data on this machine, before build caches.
It contains both executables and support libraries. Bundling only the `zig`
executable is insufficient for the proposed C/C++ use. Source:
[official download metadata](https://ziglang.org/download/index.json).

This particular Lean release already ships usable Wasm-capable Clang and LLD.
That suggests a smaller alternative: reuse those tools and distribute only the
target headers/libraries and postprocessor. This is a promising inference from
the successful local scalar test; cross-platform availability, target runtime
linking, linker behavior, and toolchain-version support remain unverified.

The optional platform-package idea is sound in principle, but we need to test
`os`/`cpu` filtering, omitted optional dependencies, supported package managers,
offline installs, and executable permissions. No claim that this exactly
duplicates esbuild's implementation is necessary. Source:
[npm package metadata documentation](https://docs.npmjs.com/cli/v11/configuring-npm/package-json/).

### Earlier work already includes filesystem support

`lean2wasm` explicitly uses Emscripten filesystem options, including a Node raw
filesystem mode. The project's README also discusses instance lifecycle. Its
existence supports the C-backend route; it contradicts the blanket claim that
earlier attempts only handled pure computation. Sources:
[repository](https://github.com/T-Brick/lean2wasm) and
[implementation](https://raw.githubusercontent.com/T-Brick/lean2wasm/main/Lean2Wasm.lean).
[lean2zkvm](https://github.com/argumentcomputer/lean2zkvm) targets a different use
case and is another relevant implementation to inspect before reusing code.

## What remains unproven

- Linking and initializing a complete usable Lean runtime and required libraries.
- Heap allocation, reference counting, closures, strings, arrays, and real large
  `Nat`/`Int` operations executing correctly under wasm32.
- Panic, exception, and stack-overflow behavior. The tested generated C does not
  establish the thread's claim that ordinary Lean IO requires setjmp/longjmp;
  Zig's WASI headers actually note the absence of setjmp. Audit actual call paths.
- Cross-compiling multi-module Lake projects and external native dependencies.
- Node filesystem and HTTP operations called from Lean, including failures,
  Unicode paths, ownership, repeated calls, cancellation, and instance isolation.
- Asyncify through Lean closures, reentrancy, rejection recovery, and useful
  performance/size limits. JSPI and Asyncify will be separate artifacts/loaders.
- Browser/cloud compatibility, every Node release, and every developer platform.
- Published-package installation behavior. Nothing has been published or pushed.

These are implementation gates in [the plan](PLAN.md), not reasons to abandon the
project. The next gate should exercise the real runtime before expanding the CLI.
