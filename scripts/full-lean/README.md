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

## Native value layout and full host integration

The newer `wasm64` experiment uses Emscripten `MEMORY64=2`: C/C++ pointers and
Lean's `USize` have 64-bit layout, while Binaryen lowers linear-memory accesses
for engines supporting Wasm32 memory. This allows the compiler to read the pinned
installed Lean's 64-bit serialized modules. Physical linear memory remains limited
to 4 GiB in this variant; this is not evidence that the limit is inherent to Lean
or all JavaScript engines.

`prepare-native64.mjs` checks every reused C module against the installed pinned
Lean source hash and commit. Missing C modules are generated by that same native
compiler as a build prerequisite. The resulting compiler and kernel execute as
Wasm, with no native Lean execution fallback. Individual symlinks provide immutable
installed `.olean`, `.ir`, and related compiler data without replacing any native
toolchain files.

This build needs GMP 6.3.0 compiled with `-sMEMORY64=2 -pthread`, assembly disabled,
and static libraries enabled. The source archive SHA-256 is
`a3c2b80201b89e68616f4ad30bc66aee4927c3ce50e33929ca819d5c43538898`.
Use `.cache/gmp-wasm64` or set `LASM_GMP_WASM64` to its install prefix. The current
recipe uses Emscripten's `emconfigure`, `--host=none --disable-assembly
--disable-shared --enable-cxx`, and `-O2 -sMEMORY64=2 -pthread` for C and C++.

```sh
node scripts/full-lean/build.mjs --stage wasm64 --jobs 6 --link-opt -O1
LEAN_STACK_SIZE_KB=8192 node scripts/full-lean/run-compiler.mjs --prefix .work/lean-full/wasm64 --version
node scripts/full-lean/prepare-toolchain.mjs --engine node
node scripts/full-lean/prepare-suite.mjs --output .work/full-suite-node --backend node --prefix .work/full-toolchains/node
node scripts/full-lean/run-suite.mjs --suite .work/full-suite-node --jobs 4
```

`prepare-toolchain.mjs` also accepts `--engine deno` and `--engine bun`. Its Lean,
Lake, LeanIR, Leanc, and LeanChecker entry points all run Lean in that engine.
They do not substitute native Lean tools on failure. External C compilation,
archive, and SAT tools remain explicit subprocess dependencies, as in upstream.
Full suites must run against frozen compiler builds; do not rebuild the selected
artifact during a run. The facade defaults to two Lean workers and 64 MiB application thread
stacks unless explicitly overridden. `build.mjs --stack-mb` controls the compiler's
main pthread reservation (default 64 MiB); changing `LEAN_STACK_SIZE_KB` alone
does not resize that main stack. Node and Deno's separate engine worker stacks
reserve 64 MiB through `LASM_VM_STACK_MB`. Deno additionally receives
`--v8-flags=--stack-size=61440` to raise its separate V8 budget while leaving
native stack headroom. Bun currently ignores the Node
worker resource-limit option, so the shim does not pass it there. These resource settings belong to the parallel
harness, not upstream tests. Run complete suites in sequence when their fixed-port
network tests could otherwise collide, or pass the same `--network-lock` path to
`prepare-suite.mjs` for each engine. That Linux harness option serializes the
original fixed-port TCP/UDP drivers with `flock`; it does not rewrite their ports.

The host bridge transfers requests from Wasm pthreads to the JavaScript main
thread through message ports. Waiting pthreads use Emscripten's futex API, which
services dynamic-loader synchronization mailboxes while the main event
loop continues serving asynchronous operations. `configure-host.mjs` records each
replaced runtime definition and keeps Lean's native scheduler, mutexes, and
thread-local finalizer ordering. This is still experimental: full-suite results,
not symbol counts or the presence of a wrapper, determine compatibility.

The maintained build patch also fixes C++/Lean ABI declaration mismatches exposed
by strict Wasm validation, retains initialized constants needed by the interpreter,
and links Emscripten's C++ runtime while preserving C source semantics. The engine probes use the same dynamic-module/thread settings, include exceptions,
and check both value layouts plus concurrent asynchronous host calls and heap
accesses above 2 GiB. The SDK patch enables unsigned JavaScript heap indexing for
lowered memory64 and preserves BigInt conversion for dynamically loaded symbols.
The regression allocates a high-address pthread stack and calls the host clock
with a high-address output buffer in all three engines. It does not change a Lean
test or raise a test's expected limits.

The maintained engine probes also load a library while another pthread waits on
host IO, and throw/catch C++ exceptions across a dynamically loaded module
boundary. Runtime ABI exports and the exception tag must remain available for
plugins unknown at compiler link time. These checks distinguish ABI support from
merely compiling a side module successfully.

The compiler's generated C declarations also supply a sorted symbol-address table
inside Wasm. This lets the interpreter find compiled Lean functions without
exporting hundreds of thousands of functions into JavaScript. Missing generated
declarations fail the build instead of silently dropping symbols. The private
asynchronous bridge completes promises on a dedicated Lean thread, outside the
ordinary task pool, so pending socket reads cannot consume every task worker.

`freeze-build.mjs` snapshots compiler artifacts, runtime support scripts, and host
modules before a suite run. Prepare a new toolchain output directory for each
revision. Prior binaries and logs remain available for investigation.


The full compiler includes the actual generated `LakeMain`, `Leanc`, `LeanIR`, and
`LeanChecker` entry points. Each initializes its own runtime modules through its
original compiled main. The tool facade selects an entry point with a private
host environment value; no tool is replaced with native Lean. Reinterpreting the
Lake entry source had exposed missing runtime initialization; the real compiled
entry point starts correctly in all three engines.

The SDK patch also ignores only normal cleanup/finished notifications already
queued when a pthread is terminated during process exit. Unexpected late messages
still report an error. A separate build probe repeats detached-thread shutdown ten
times in each engine and requires exactly empty stderr. The application C adapter
uses the C input driver with C++ runtime linking, avoiding accidental C++ treatment
of Lean's generated C. SDK notices about the chosen experimental link configuration
are disabled in this adapter; source diagnostics remain enabled.

Executable link dependencies include host archives, tool entry archives, generated
exports, JavaScript libraries, configured make rules, and the reviewed SDK patch
identity. A change to those inputs now actually relinks the compiler.

The v6 complete Node run has a 900-second CTest deadline to allow for full Wasm
compiler startup and C linking. The parallel harness tags each run/test in its
environment and reaps leftover processes only after that exact test has finished.
It does not change process lifecycle behavior inside a running test. This avoids
failed LSP drivers exhausting memory through orphaned servers.

New snapshots also copy the selected Emscripten SDK, with its reviewed patches,
and record its source in `build-provenance.json`. Use `LASM_EMSDK` to select a
development SDK; changing it causes a fresh CMake configuration so cached compiler
paths cannot silently retain the old SDK. Neither a running snapshot's host
modules nor its compiler sources should be edited during a conformance run.

The full runtime and executable adapter enable `GROWABLE_ARRAYBUFFERS=1`: use
growable memory views when supported, with Emscripten's fixed-view fallback for
other engines. This addresses an observed stale shared-memory view in Deno's
full compiler. The library prelude also searches the host's library-path variable
when loading a shared dependency before Emscripten's libc loader is initialized.

`prepare-suite.mjs --include-excluded` adds the five tests that upstream explicitly
excludes as flaky/nondeterministic: `async_select_channel`, `sync_mutex`, `signal`,
`test_extern`, and `user_ext`. Their original files remain hashed and unchanged.
The generated `test-extern-driver.sh` disables inherited `pipefail` and sources
the original driver in its original directory, allowing its intentional failing
Lake build to reach its unchanged expected-output comparison. The unadjusted
native failure and an initial generated-wrapper cwd error are retained separately.
Run these extra tests separately and do not add them to the standard registration
count without identifying the harness adjustment.
