# Full upstream Lean conformance work

This harness registers the complete pinned Lean 4.32.0 CTest suite, including
compiler, kernel, elaborator, Lake, runtime, and interactive tests. The older
`scripts/upstream-tests.mjs` runtime adapter is a separate, narrower experiment.

## Resource protection on the maintainer desktop

Heavy work must run one workload at a time through `run-bounded.mjs`. Full
builds, suite preparation/execution, artifact freezing, native-C preparation,
export generation, and compiler probes apply it automatically. The lightweight
campaign supervisors stay outside and guard each child workload separately.
Use an explicit wrapper for other experimental commands:

```sh
node scripts/full-lean/run-bounded.mjs -- COMMAND ARGUMENTS
```

The Linux systemd/cgroup-v2 runner includes every descendant in one 10 GiB
kernel memory cap, stops the workload proactively at 8 GiB, and stops on low
host headroom or rising memory pressure. Smaller hosts/budgets receive a lower
cap. A fixed service name prevents overlapping workloads in this checkout.
CTest defaults to one job; builds and Binaryen default to two. Keep those
settings on this host, including when a test itself starts several compilers.
Missing cgroup support fails closed; this is a Linux maintainer tool, not an
application runtime installation requirement.

Do **not** use `MemoryHigh` throttling or deliberately induce OOM to verify this
guard. The desktop's ancestor `systemd-oomd` policy killed ChatGPT during the
first throttled guard probe despite roughly 27 GiB remaining available. The
corrected guard leaves `MemoryHigh=infinity` and samples usage/pressure every
200 ms. `probe-resource-limits.mjs` verifies proactive termination using an
allocation below the kernel cap, mutual exclusion, cleanup, and reuse. Its
verified run recorded zero OOM and throttling events.

Full compiler links on this host also use process-local base pages. Two links
stopped on allocation pressure at 1.80 and 2.26 GiB despite ample host headroom.
Disabling transparent huge pages for the build and its descendants allowed both
compiler variants and their frozen snapshots to finish at 6.95 GiB, with no
measured compaction/allocation stalls or resource events. Keep one build and
Binaryen worker for these links:

```sh
node scripts/full-lean/run-bounded.mjs -- python3 scripts/full-lean/base-pages.py env BINARYEN_CORES=1 cmake --build .work/lean-full/wasm64 --target lean -j 1
```

The wrapper requires an active guard, verifies the Linux process flag, and
executes the supplied command directly. The flag is inherited across exec;
system-wide huge-page settings and all memory/pressure limits remain unchanged.
This is a maintainer build adjustment, not an application runtime requirement.

Resource reports and systemd exit evidence live in `.work/resource-runs/` (or an
explicit `--report` path). Exit 125 denotes a resource stop or interruption,
not a Lean conformance failure. `execution-started.json` links suite runs to
their resource report even if the run is interrupted. Preserve incomplete logs;
do not count their unfinished registrations as passes. See
[the crash diagnosis](../../docs/RESOURCE_FAILURES.md).

For a long suite, use the checkpointed supervisor directly (it guards each test):

```sh
node scripts/full-lean/run-campaign.mjs --suite .work/full-suite-node --output .work/full-campaign-node
```

It runs one unchanged CTest registration at a time, gives every attempt a fresh
resource cgroup and result directory, and saves progress after every test. Run
the identical command to resume pending tests. `--max-tests N` bounds a batch;
`--filter REGEX` selects a documented subset and must remain identical when
resuming that campaign. Frozen input hashes are verified before starting.
`--prioritize REGEX` runs matching registrations first while retaining every
selected test and the original relative order within both groups. Keep this
option identical when resuming: it is part of the campaign identity. This lets
new campaigns reach previously unattempted tests sooner without importing passes
from an older runtime. `probe-campaign-order.mjs NEW_DIRECTORY` verifies stable
ordering, complete membership, immutable resume, and rejection of a changed
priority using four tiny guarded CTest controls.
To expand a successful initial prefix to all registrations, use `--filter '.*'
with `--extend-selection`. The existing names must remain the exact beginning
of the expanded sequence, all runtime/source-manifest inputs must match, and
the prior selection is retained in checkpoint history. Completed results and
their evidence are preserved without rerunning them.
Completed failures are retained and require a separate rerun after a fix.

For an explicitly separate language-server harness, the original two-line Lean
test driver can be compiled ahead of time in the selected engine:

```sh
node scripts/full-lean/build-server-driver.mjs .work/full-toolchains/node-v52-process-cwd .work/server-driver-node
node scripts/full-lean/prepare-suite.mjs --prefix .work/full-toolchains/node-v52-process-cwd --backend node --output .work/suite-node-compiled-driver --include-excluded --timeout 900 --compiled-server-driver .work/server-driver-node/driver.json
node scripts/full-lean/run-campaign.mjs --suite .work/suite-node-compiled-driver --output .work/campaign-node-compiled-driver
```

The builder and suite preparation apply the resource guard automatically. Use
fresh output directories. This opt-in mode replaces only the exact
`lean -Dlinter.all=false --run run_test.lean TEST` call in `server_interactive`.
The original driver source is compiled without edits; server/compiler children,
test files, and expected outputs remain unchanged. The driver uses the same
four Lean workers and 64 MiB stack default as the ordinary full-engine facade.
The selected toolchain must match the recorded driver build, and driver files
and generated wrappers are checked before and after each run. Keep its results
separate from the interpreted-driver campaigns. A passing compiled-driver run
does not erase an original-driver memory stop or establish full conformance.
`probe-driver-integrity.mjs NEW_DIRECTORY` checks unchanged inputs and drift
before/during execution using three tiny private CTest controls, each guarded
individually; run that supervisor directly.

For the driver build only, `build-server-driver.mjs PREFIX NEW_OUTPUT
--external-link` lets Leanc print its public C/link flags and exit before the
same external compiler runs. This avoids keeping a full Wasm Leanc process
resident throughout linking. It requires a full-toolchain prefix without
whitespace and records the flags without evaluating shell code. This is a
disclosed preparation adjustment; it does not change how the suite invokes
Leanc or other Lean tools under test.

A proactive workload-budget stop is recorded as `resource-aborted`, never as a
test failure or pass. Host pressure, actual OOM, monitoring failures, and source
drift stop the campaign for investigation. Do not wrap this small supervisor in
another guard: its child test runs each apply the guard. Do not overlap campaigns
with another heavy workload.

Send `SIGUSR2` to the verified supervisor PID in its `supervisor.lock` to request
an orderly pause: the current test finishes and is checkpointed before another
can start. Verify that the PID still belongs to this campaign before signaling
it. `SIGTERM` and `SIGINT` interrupt immediately. `probe-campaign-pause.mjs
NEW_DIRECTORY` validates orderly pause/resume with two tiny guarded CTest cases.

`run-suite.mjs --results NEW_DIRECTORY` preserves a separate result for a subset
or retry. Its `progress.json` is atomically updated on every completed CTest row,
even if a subsequent test stops the run. `probe-campaign.mjs NEW_DIRECTORY` uses
four tiny synthetic CTest controls to check checkpoint/resume, interruption
cleanup, and failure accounting without compiler workloads or intentional
memory exhaustion.

The guard preserves normal CPU priority (`Nice=0`). Lowering it to 5 prevented
even native Lean's unchanged process-priority test from setting priority to 3.
CPU niceness is recorded separately from the unchanged memory protection limits.

`probe-http-timing.mjs --toolchain FROZEN_FACADE --output NEW_DIRECTORY --scale 10
--repetitions 3` guards a native control, repeated original HTTP executions, and
native/engine executions of the uniformly scaled parallel derivative. It keeps
every failure and verifies the original source hash afterward. A derivative
pass never counts as a pass of the original timing-sensitive registration.

`probe-tcp-binding.mjs --output NEW_DIRECTORY --toolchains FACADE[,FACADE]`
compares a supplementary ordinary-Lean fixture against a native control. It
checks unbound/bound address queries, deferred bind errors, keepalive, repeated
listen, bound-client ports, readiness, small reads, and half-close in IPv4/IPv6.
`--application PATH/main.mjs` selects an already built packaged fixture and
uses stock engine flags; otherwise it verifies frozen inputs and runs each full
compiler facade. Each child has an external deadline (default 180 seconds).
The original failures and fixed comparisons are retained separately. This is
additional behavioral coverage, not an upstream-suite pass. The Windows bind
path still needs implementation; the POSIX branch needs native macOS validation.

`probe-bun-startup.mjs --toolchain FROZEN_BUN_FACADE --output NEW_DIRECTORY`
compares four sequential startup smoke runs under one resource guard. It checks
the pinned engine's option dump before executing each variant and retains a
native control. Explicitly enabling IPInt may repeat the default; the recorded
effective options determine whether a variant actually changes anything.
The first comparison found no startup improvement from that setting or from
reducing Wasm compiler threads to two. Its resource peak covers the entire
comparison, so it cannot establish a per-variant memory improvement.
`--profile interpreter` compares normal tiering with IPInt enabled and both Wasm
JIT tiers disabled; `--profile control` runs just the normal-engine control.
The follow-up found disabling the JIT slower (80 versus 72 seconds). A separately
frozen five-worker facade, with identical Wasm bytes, completed the same smoke
in 46 seconds and passed the unchanged dedicated-task, timer, and TCP tests.
These are single-run timings and three regressions, not full Bun conformance.
See [the retained comparison](../../docs/evidence/bun-pool5-2026-09-21.json).
Broader validation subsequently timed out in every case of the unchanged HTTP
hang-regression file with five prestarted workers. Restoring eight workers with
identical Wasm and host code passed that original test in 77 seconds. Keep eight
prestarted workers for full Bun testing; the smaller startup smoke does not
justify adopting five for general workloads. The first combined attempt stopped
safely at its memory budget, and the isolated five-worker retry was a completed
test failure; neither result is erased by the passing eight-worker control.

A later six-worker comparison also fails HTTP's early-streaming assertion and
safely resource-aborts the original parallel-cancellation test at 8.06 GiB.
`derive-bun-gc.mjs FROZEN_SOURCE NEW_OUTPUT` freezes an opt-in alternative with
unchanged Wasm and worker counts. Prepare that snapshot with `--engine bun
--bun-smol` to apply Bun's `--smol` to the main process and `smol:true` to every
Emscripten worker, including generated applications. The flag is rejected for
other engines or snapshots without the matching worker prelude. Ordinary
facades retain their existing GC behavior. The eight-worker GC experiment
passes HTTP but still reaches 8.06 GiB in cancellation, so it remains a
diagnostic, not a solution to that memory gate. See
[the retained results](../../docs/evidence/bun-gc-2026-09-21.json).

`probe-fifo-finalizer.mjs --output NEW_DIRECTORY --toolchains FACADE[,FACADE]`
compares a supplementary ordinary Lean fixture against native Lean and the
selected engines. On Linux it measures a FIFO's capacity, fills it plus a partial
stdio buffer, and checks that a delayed reader can run while the writer's
finalizer flushes. Each child has an external deadline so a blocked host event
loop cannot also disable its timeout. The compiler deadline defaults to 180
seconds to accommodate Bun's measured startup, and can be set with
`--timeout-seconds`; the host-only deadline is five seconds.
`--host-only --host-module MODULE` isolates
the private host adapter. These are additional differential checks, not edited
upstream tests or full-suite passes.

`derive-host-finalizer.mjs FROZEN_SOURCE NEW_OUTPUT` creates an immutable
comparison artifact for this fix. It verifies the original hashes, changes the
embedded finalizer dispatch and matching link-time prelude, freezes the changed
host modules, and retains the exact Wasm bytes. The full-runtime RPC awaits
`fclose` completion while other Lean threads can dispatch host operations. The
packaged cooperative runtime is tested separately. Supply `--application
PATH/main.mjs` to the probe to run a built application with stock engine flags,
and `--source FILE.lean` to select a supplementary native control. Each run copies
the exact fixture and records its hash. `FifoFinalizer.lean` covers a dropped file
handle; `FifoThreadFinalizer.lean` covers the last reference in task-local stdout.
Both now pass natively and in stock Node, Deno, and Bun on Linux x64. The packaged
scheduler preserves its suspended C stack pointer and runs task-local cleanup as
a resumable entry. `test/finalizers.test.mjs` keeps both as application regressions.
See [the evidence](../../docs/evidence/cooperative-finalizers-2026-09-21.json);
these are additional fixtures, not upstream-suite passes.

`probe-fifo-workers.mjs --output NEW_DIRECTORY --toolchains FACADE[,FACADE]`
checks four independent blocking reads followed by their dependent writes. The
ordinary Lean fixture uses readiness promises before the delayed write, avoiding
false passes caused by slow Wasm thread startup. A smaller private-host fixture
isolates the shared native worker pool. Both retain external deadlines and an
explicit `UV_THREADPOOL_SIZE=4`; `--host-only --host-module MODULE` selects a
source adapter. The source fixture is copied into each fresh result directory.
These are supplementary differential checks, not modified upstream tests.

`derive-host-files.mjs FROZEN_SOURCE NEW_OUTPUT` freezes current private host
modules while retaining the exact compiler Wasm, embedded dispatch, and Lean
inputs. It first verifies all parent hashes and rejects changes to the host
prelude or import ABI. This permits testing a host-only fix without recompiling
the toolchain or silently changing an ongoing campaign's inputs.

`derive-function-table.mjs FROZEN_SOURCE NEW_OUTPUT` creates a loader-only
derivative with the same Wasm bytes. The original compiler has 261,062 initial
function-table entries; Emscripten eagerly exposed all of them to JavaScript in
every worker just to look up exported function addresses. The derivative reads
the Wasm export/import/element sections and initializes known addresses from that
metadata. Runtime identity checks verify each exported address. Aliases retain
their canonical index, dynamically loaded tables are incorporated, and unknown
functions still use the original complete scan. Unsupported binary layouts or
changed generated-loader semantics fail explicitly.

New `freeze-build.mjs` snapshots apply this optimization and record
`function-table-index.json`; the input build remains unchanged. Both paths stream
large-file hashes and skip Wasm code/data when reading metadata. Run
`probe-engines.mjs NEW_DIRECTORY --function-table-index` to apply it to all 54
ABI/thread/dynamic-library checks. The ordinary unit controls exercise 32-bit and
64-bit tables, aliases, JavaScript and Wasm imports, table growth, unknown-function
fallback, and mismatched metadata. These checks supplement the unchanged upstream
suite; they do not replace it.

`derive-symbol-lookup.mjs FROZEN_SOURCE NEW_OUTPUT` preserves the compiler Wasm
while removing a separate dynamic-loader bottleneck. Emscripten rebuilt the
export-name list for every `dlsym` call, including missing symbols. The derivative
checks own/enumerable membership directly and computes an enumeration index only
when adding a new table function. Worker synchronization still receives that
exact index. The pinned SDK patch applies the same repair to future builds.

The original HTTP streaming regression passed three repetitions in each engine
after this change, with no timing edits. Nine loader unit controls and native/
Wasm cross-thread pointer controls supplement those runs. Reproduce the latter
with the normal Lasm worker bootstrap and a writable development SDK:

```sh
node scripts/full-lean/run-bounded.mjs -- python3 scripts/full-lean/base-pages.py env BINARYEN_CORES=1 node scripts/full-lean/probe-symbol-lookup.mjs .work/symbol-lookup-sdk .cache/emsdk-6.0.9-dev
```

Use a fresh output directory. The probe records the SDK patch and source hashes;
it does not replace any upstream Lean test. The retained profile and comparisons
are in [the symbol-lookup evidence](../../docs/evidence/symbol-lookup-2026-09-21.json).

## Unchanged tests and the native control

```sh
node scripts/full-lean/prepare-suite.mjs --output .work/full-suite-native --backend native --timeout 600
node scripts/full-lean/run-suite.mjs --suite .work/full-suite-native --jobs 1
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
node scripts/full-lean/build.mjs --stage native32 --jobs 2
node scripts/full-lean/build.mjs --stage wasm --jobs 2
node scripts/full-lean/run-bounded.mjs -- node scripts/full-lean/probe-engines.mjs
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
node scripts/full-lean/build.mjs --stage wasm64 --jobs 2 --link-opt -O1
LEAN_STACK_SIZE_KB=8192 node scripts/full-lean/run-bounded.mjs -- node scripts/full-lean/run-compiler.mjs --prefix .work/lean-full/wasm64 --version
node scripts/full-lean/prepare-toolchain.mjs --engine node
node scripts/full-lean/prepare-suite.mjs --output .work/full-suite-node --backend node --prefix .work/full-toolchains/node
node scripts/full-lean/run-suite.mjs --suite .work/full-suite-node --jobs 1
```

`prepare-toolchain.mjs` also accepts `--engine deno` and `--engine bun`. Its Lean,
Lake, LeanIR, Leanc, and LeanChecker entry points all run Lean in that engine.
They do not substitute native Lean tools on failure. External C compilation,
archive, and SAT tools remain explicit subprocess dependencies, as in upstream.
Full suites must run against frozen compiler builds; do not rebuild the selected
artifact during a run. New facades default to four Lean workers and 64 MiB application thread
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

`prepare-toolchain.mjs --lake-threads 1` creates a separately recorded resource
configuration in which Lake defaults the ordinary `LEAN_NUM_THREADS` variable
to one. Its child processes inherit that setting, as with native Lake. Other
direct tool invocations keep the four-worker default, and an explicit existing
environment value still wins. This is a disclosed parallel-suite resource
adjustment, not a public runtime default or a source-test edit. Native control
examples must accompany comparisons that use it.

`--lean-threads N` independently records the direct-tool default (1–4, default
four). Lowering every server process to one worker stalled a native cancellation
control; two workers timed out in native parallel cancellation. Three passed the
native controls but still exceeded the Node process-tree memory budget. The
function-table optimization allows the original four-worker Node configuration
to pass those tests without raising the memory cap. Keep these failed resource
and concurrency experiments separate from passing conformance results.

`probe-process-lifetime.mjs NEW_OUTPUT TOOLCHAIN...` compares a supplemental
ordinary Lean fixture with the native compiler before running each full engine.
It covers reaped-child errors, an exited child before wait, and process groups
whose leader has exited. It verifies frozen inputs and preserves every result.
`test/node-process.test.mjs` additionally builds ordinary Lean applications for
the installed engines and verifies that a dropped live child does not prevent
the parent from exiting. These Linux controls do not establish Windows or macOS
process parity and are separate from the unchanged upstream suite.

`probe-process-cwd.mjs NEW_OUTPUT TOOLCHAIN...` creates a directory and symlink
fixture and compares ordinary child cwd resolution with native Lean before
running the frozen full compilers. Both absolute and relative `symlink/..` paths
must resolve in the OS. `test/node-process-cwd.test.mjs` runs the same comparison
in packaged engines, also using spaces and Unicode in the fixture directory.
These additional POSIX controls do not validate concurrent directory renames or
native child-side spawn failures.

`probe-spawn-errors.mjs NEW_OUTPUT TOOLCHAIN...` executes an immutable copy of a
supplementary ordinary Lean fixture in native Lean and each frozen full compiler.
It compares child-side exec/chdir failures, real PIDs, literal environment values,
PATH/executable-text handling, and an absolute child cwd after removal of the
parent directory. `test/node-spawn.test.mjs` covers packaged applications.
The fixture flushes parent stdout before failing spawns; native duplication of
unflushed fork buffers is a separate, still-open behavior.

The private POSIX launcher uses the same JS engine and existing native adapter
to call libc `execvp`; it is replaced by the actual requested executable. Its
configuration travels over a private pipe, and target environment settings are
applied after launcher startup. Standard Lean declarations are unchanged.
File workers have separate startup handling for removed working directories:
Node uses a worker-local JS cwd fallback during bootstrap, and Deno can create
a worker with an explicit module URL before Node compatibility initializes.
Both preserve the OS cwd. The Deno fallback retires after one operation because
the Web Worker API lacks `unref`; the normal reusable pool is retained otherwise.
The additional FIFO regression starts four blocked readers from a removed cwd
and then performs their dependent writes. Native macOS/Windows validation and
concurrent rename/removal races remain outside these controls.

`probe-process-nul.mjs NEW_OUTPUT TOOLCHAIN...` compares an immutable ordinary
Lean fixture against native Lean for POSIX process command/argument/cwd strings,
environment entries and lookup, and `setCurrentDir`. It separately checks that
filesystem operations still reject embedded NULs and preserve file contents.
Lean uses different behavior in these APIs: the process C interfaces truncate,
`getEnv` returns `none`, and filesystem primitives return structured errors.
`test/node-process-nul.test.mjs` exercises the packaged application path.

`probe-cwd-permissions.mjs NEW_OUTPUT TOOLCHAIN...` compares the same supplementary
Lean fixture with native Linux and each frozen full compiler. It revokes search
permission after entering a directory, then checks cwd queries, relative files,
inherited children, explicit relative/absolute child cwd, and search-only access.
`test/node-cwd-permissions.test.mjs` covers generated mains and source launchers.
Standalone mains propagate cwd changes; embedded module instances retain their
separate directory by default.

When the saved directory identity matches the process cwd, Linux child launchers
inherit it instead of calling `fchdir` again. Deno uses libc `posix_spawn` for this
path because its [Node-compatible spawn implementation](https://github.com/denoland/deno/blob/v2.9.7/ext/process/lib.rs)
re-enters a named cwd even when no cwd argument was supplied. Only libc runs
between its internal fork/vfork and exec. A private socket transfers configuration;
close-on-exec acknowledgement keeps a dropped child's bootstrap alive until the
requested executable starts or the launcher fails. It does not wait for that
executable to finish. Native spawn controls cover low-numbered descriptors, large
configuration payloads, concurrent engine/native child reapers, and signal exit
status. Deno's deleted-and-revoked cwd case remains an executing TODO; independent
instance cwd permission inheritance and non-Linux behavior remain open.

Lean's C++ shell does not read the generated application main's thread/stack
environment defaults. The facade supplies its ordinary `-j` and `-s` options
before user arguments. Explicit later options win. Two workers are insufficient
for the pinned HTTP regression even in native Lean; four and eight both pass
the native control. `build.mjs --pthread-pool` selects the number of preinitialized
Wasm workers (default eight), independently of the Lean task-pool size.
`derive-worker-pool.mjs FROZEN_SOURCE NEW_OUTPUT WORKERS` creates a separately
recorded JavaScript-only pool adjustment with unchanged Wasm bytes. It reuses
other frozen inputs through symlinks; it never changes the source snapshot.
The facade reads the effective generated pool size for application builds too.

`build.mjs --malloc mimalloc` selects the SDK's multithreaded system allocator;
it does not enable Lean's separate `LEAN_MIMALLOC` object layout. The v24 subset
still fails the memory-intensive `instances` test with this option. The alternative
`--memory64 1 --max-memory-gb 8` selects actual 64-bit Wasm addressing; the default
remains lowered `--memory64 2 --max-memory-gb 4`. These variants need separate
frozen builds and conformance evidence. Native memory64 engine prerequisites pass
in Node and Deno; Bun's experimental flag currently exposes a shared-memory
worker-transfer defect, so it is not a working Bun configuration.

`--lean-allocator mimalloc` is a separate experimental option: it enables Lean's
native mimalloc object layout and uses the SDK's matching allocator/header. It
implies `--malloc mimalloc`. The build fingerprints runtime headers and C compiler
inputs so this ABI change rebuilds generated objects; a link-only allocator flag
is insufficient. Full conformance of this layout is still under investigation.

Additional reproducible probes keep engine diagnostics separate from suite passes:

```sh
node scripts/full-lean/probe-loader.mjs .work/full-toolchains/node-v24/toolchain.json .work/loader-probe
node scripts/full-lean/probe-memory64.mjs .work/memory64-probe
node scripts/full-lean/probes/memory64-worker.cjs
node scripts/full-lean/probe-host-memory.mjs .work/host-memory-probe
node scripts/full-lean/probe-build-cache.mjs .work/build-cache-probe
node scripts/full-lean/probe-stack-diagnostics.mjs .work/stack-diagnostic-probe
node scripts/full-lean/prepare-http-timing-probe.mjs .work/http-timing-probe 10
```

`probe-loader.mjs` compares the native loader with all three engines on Linux.
`probe-memory64.mjs` records stock and flagged Bun results as well as Node/Deno.
`probe-host-memory.mjs` exercises the real synchronous/asynchronous bridge above
2 GiB in all three engines and above 4 GiB in Node/Deno. Requests carry a numeric
wait-signal offset: cloning a shared typed array truncates that offset in the
pinned Node engine; Deno's corresponding control preserves it. `probe-build-cache.mjs` checks the actual generated
make rules after a runtime-header change. `probe-stack-diagnostics.mjs` verifies
the diagnostic and exit status for uncaught engine stack exhaustion.
`prepare-http-timing-probe.mjs` creates a separate HTTP test derivative with
uniformly scaled time intervals. It records every changed line and the original
source hash. Run its generated Lean file with both the native control and the
chosen Wasm facade; report those results separately from the unchanged suite.
`probe-bun-stack.mjs` takes an existing generated `const_fold.lean.out.cjs`, a
frozen host module, and a new output directory. It compiles a Linux-only helper
and preloads it only into diagnostic child processes. This is not part of the
published launcher or the stock Bun conformance run.

For a separate Linux resource-adjusted suite, `prepare-toolchain.mjs --engine bun
--bun-stack-helper <compiled-stack-reservation.so>` copies and hashes that helper
into the new facade, reserves 64 MiB for Bun workers, and sets JSC's budget to
60 MiB. The facade and its generated programs record/use that environment.
Keep these results separate from stock Bun; this option is not a portable
packaged solution and must never be used to relabel an existing run.

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
