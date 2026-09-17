# Feasibility experiments

These experiments test individual architectural claims. They do **not** implement
Lasm's compiler, Lean runtime port, JavaScript value marshalling, or filesystem API.

## Run

Tested on Linux x86-64 with Node 24.13.1, Lean 4.32.0, Zig 0.16.0, and Binaryen
`wasm-opt` 108. The project `lean-toolchain` selects Lean without changing the
user's global elan default. No npm dependencies need to be installed.

```sh
npm run probe
npm run probe:runtime
```

The first command requires Lean, Zig, and `wasm-opt`. The second additionally
requires the matching Lean source tree. Both write only to `.work/` and `.cache/`.
The default Zig/source paths correspond to the downloads below. To use other
locations, set `ZIG` to an absolute executable path and `LEAN_SOURCE` to the source
directory. `LEAN` and `WASM_OPT` can override the respective commands. The
bundled-Clang experiment expects the Zig installation's `lib/` beside its binary.

The commands were run through a sandbox that interfered with nested Node
subprocess output. The full `probe` run succeeded outside that sandbox. This is
an execution-environment limitation, not a requirement to run Lasm privileged.

## Obtain the pinned experiment inputs

Node, Lean, and Binaryen were already installed on the research machine. If Lean
4.32.0 is missing, install it with `elan toolchain install leanprover/lean4:v4.32.0`.
Binaryen 108 was used for this small probe; it is not a recommended production pin.

These Linux commands fetch official Zig and Lean source archives. The Zig digest
comes from the official download index. Lean's digest records the downloaded
archive's identity; it is not an independent signature verification.

```sh
mkdir -p .cache/downloads
curl -fL https://ziglang.org/download/0.16.0/zig-x86_64-linux-0.16.0.tar.xz -o .cache/downloads/zig-x86_64-linux-0.16.0.tar.xz
printf '%s  %s\n' 70e49664a74374b48b51e6f3fdfbf437f6395d42509050588bd49abe52ba3d00 .cache/downloads/zig-x86_64-linux-0.16.0.tar.xz | sha256sum --check
tar -xJf .cache/downloads/zig-x86_64-linux-0.16.0.tar.xz -C .cache
curl -fL https://codeload.github.com/leanprover/lean4/tar.gz/refs/tags/v4.32.0 -o .cache/downloads/lean4-v4.32.0.tar.gz
printf '%s  %s\n' f39c6d87a9b4e9253bef15ffae460d2652b668e619688e4c01e59bbd2cd3b002 .cache/downloads/lean4-v4.32.0.tar.gz | sha256sum --check
tar -xzf .cache/downloads/lean4-v4.32.0.tar.gz -C .cache
```

For another OS/architecture, choose the corresponding official Zig archive and
digest and set `ZIG`. That platform has not been tested here.

## What the checks establish

- `Pure.lean`: two exported scalar functions match 98 native Lean evaluations,
  including unsigned wraparound. Module initialization and all heap-using Lean
  code are discarded by the linker. This deliberately narrow success is also
  checked with Lean's bundled Clang/LLD when available, borrowing Zig's headers.
- `BigNat.lean`: linking without Lean's runtime must fail with
  `lean_nat_big_mul` unresolved. Missing runtime functions are not silently
  imported or replaced with stubs.
- `custom.c`: a custom JS import plus actual allocation/free works without WASI
  imports in this particular module.
- `wasi.c`: `puts` pulls in Preview 1 imports, and instantiation without them
  fails. This probe does not execute a WASI filesystem implementation.
- `async.c`: two suspension points per call preserve local state across real
  asynchronous file reads. Three sequential calls run under both JSPI (with a
  Node flag) and standalone Asyncify (without a flag). This C-only probe does not
  exercise Lean closures, HTTP, cancellation, concurrent calls, or recovery after
  host errors. Its small Asyncify driver and fixed stack are not production code.
- `runtime-compile.mjs`: unmodified `mpz.cpp`, `mpn.cpp`, and `object.cpp` compile
  as Wasm objects with GMP, mimalloc, and multithreading disabled in the probe
  configuration. `io.cpp` exposes mmap, signal, and libuv dependencies. Successful
  compilation of a translation unit is not successful runtime linking/execution.

`report.json` records results and `commands.json` records exact process arguments
under each experiment's `.work/` directory. Committed result snapshots and the
interpretation are in [the feasibility report](../../docs/FEASIBILITY.md).
