# Full upstream Lean conformance work

This harness registers the complete pinned Lean 4.32.0 CTest suite, including
compiler, kernel, elaborator, Lake, runtime, and interactive tests. The older
`scripts/upstream-tests.mjs` runtime adapter is a separate, narrower experiment.

## Unchanged tests and the native control

```sh
node scripts/full-lean/prepare-suite.mjs --output .work/full-suite-native --backend native --timeout 600
node scripts/full-lean/run-suite.mjs --suite .work/full-suite-native --jobs 2
```

Preparation verifies the pinned source archive, extracts an isolated source tree,
hashes every original test and documentation example, and asks upstream CMake for
its registrations. There are 3,891 registrations in this configuration. The
generated parallel CTest file changes toolchain environment paths and supplies an
explicit 600-second per-test timeout. Original tests, drivers, and expected-output
files are not edited. Generated CMake environment wrappers are copied and adjusted
outside the original test directory. Upstream test commands run in their original
working directories. The runner verifies original bytes before and after execution
and records any files the upstream drivers themselves change.

`parallel-suite.json` preserves every command and the selected backend;
`results.xml`, `execution.log`, and `execution.json` preserve results and source
integrity checks. No test is filtered unless `--filter` is supplied explicitly.
`--rerun-failed` is for investigation after a complete first run, not a replacement
for the final clean conformance run. Native control results do not count as Lean
execution inside a JavaScript engine.

The clean native control passed all 3,891 tests with all 7,267 original hashes
unchanged. `LEAN_SRC_PATH` points to the isolated matching source tree so LSP
locations normalize as upstream expects. `MAKEFLAGS` supplies the selected
`llvm-ar` instead of the release builder's private path embedded in `lean.mk`.
Neither adjustment edits a test or an expected result. See
[the full-suite results](../../docs/FULL_SUITE_RESULTS.md).

## Full WebAssembly compiler build (in progress)

The application compiler previously compiled Lean to C using native Lean and
linked selected runtime externs. To execute unchanged compiler tests, the compiler
and kernel also need to run inside the selected JavaScript engine. The current
experiment uses Lean's Emscripten configuration with Emscripten 6.0.9, a native
32-bit stage0 bootstrap, and a wasm32 stage1 compiler. The bootstrap pointer width
must match the serialized object format consumed by the Wasm compiler.

Build source is isolated in `.work/lean-full/lean4-4.32.0`. The original verified
archive remains unchanged. `patches/lean-4.32.0-wasm-build.patch` records:

1. The verified Lean commit identity, preventing CMake from mistaking the enclosing
   Lasm repository's commit for Lean's commit.
2. Correct two-word static 64-bit scalar literals on every 32-bit target, including
   the native bootstrap.
3. Correct C declarations for two incomplete Emscripten libuv stubs. These repairs
   permit compilation; they do not implement those unsupported APIs.
4. Correct `UInt32` result decoding on 32-bit targets, including successful CLI
   exits and compiler dependency generation.
5. Generate the Leanc library source for the Emscripten build too.
6. Use the host filesystem and environment through Emscripten's `NODERAWFS` and
   remove the older partial filesystem mounts and broken environment workaround.
7. Export the symbols required for interpreter extern lookup, retain ordinary
   definitions through IR, and run `main` on a pthread so the host can create
   further workers without blocking its own event loop.

These are implementation gaps, not established fundamental limitations. The full
compiler path must not be advertised as compatible until it has executed the full
suite and the failures have been resolved or independently characterized.

The current Linux x64 maintainer build uses GCC multilib and locally extracted
i386 libstdc++, libuv, and OpenSSL development packages. Those are build-machine
dependencies for this experiment, not new application installation requirements.
The SDK and dependencies live under `.cache`; no system packages are replaced.

With those local prerequisites present:

```sh
node scripts/full-lean/build.mjs --stage prepare
node scripts/full-lean/build.mjs --stage native32 --jobs 8
node scripts/full-lean/build.mjs --stage wasm --jobs 8
node scripts/full-lean/probe-engines.mjs
```

`LASM_EMSDK` and `LASM_LEAN32_DEPS` override the cached SDK and dependency roots.
The bootstrap recipe uses GCC 13 multilib headers, i386 libuv 1.48.0, and i386
OpenSSL 3.0.13. Building core modules with `-j2 -s8192` and
`LEAN_STACK_SIZE_KB=8192` avoids exhausting the native bootstrap's 32-bit virtual
address space through large thread-stack reservations. A traced failure compiling
`Std.Data.DTreeMap.Internal.Model` was an `mmap2` `ENOMEM` after 81 thread creations;
the same unchanged module compiled successfully with the 8 MiB setting. This is a
build configuration adjustment, not an upstream test edit or a conformance pass.

The engine probe checks actual Wasm threads, exceptions, binary host filesystem
operations, and empty environment values in Node, Deno, and Bun. It includes the
Bun worker-message adapter in `emscripten-pre.js`. Passing the probe is only a
prerequisite for the full compiler and test suite.

The application-engine integration checks are maintained separately in
`integration/engines.test.mjs`; see [the engine report](../../docs/JS_ENGINES.md).
