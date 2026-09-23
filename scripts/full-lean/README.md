# Full upstream Lean conformance work

This harness registers the complete pinned Lean 4.32.0 CTest suite, including
compiler, kernel, elaborator, Lake, runtime, and interactive tests. The older
`scripts/upstream-tests.mjs` runtime adapter is a separate, narrower experiment.
The 3,891 upstream CTest registrations omit seven inputs marked `.no_test` in
the benchmark directories. These use a separate validation campaign; adding the
five flaky tests with `--include-excluded` produces 3,896 registrations and does
not add those benchmark-only inputs. See
[the source/driver inventory](../../docs/evidence/upstream-benchmark-only-inventory-2026-09-22.json).
All seven now pass their original benchmark drivers in native Lean, Node, Deno
and local rebuilt Bun on Linux x64, with matching output after explicit timing
normalization. See [the separate benchmark results](../../docs/evidence/benchmark-inputs-all-engines-2026-09-22.json).

Source verification covers 7,267 original regular-file hashes and the six
original symlink targets, including shared benchmark drivers. The link inventory
is pinned to the release commit and verified source archive. Changing a link's
target or replacing it with a regular file fails verification even if its bytes
match. Each run records these checks before and after execution; older result
files without `symlinks` record only the regular-file checks.

`audit-campaign.py CAMPAIGN` independently checks the saved counts, input
identity, and each completed test's final attempt against its resource,
execution, progress and JUnit records. It rejects passing results with skips,
missing executions, changed source/driver hashes, memory events or lost resource
monitoring. Pending attempts are excluded; aborted workloads retain their own
category. Earlier attempt descriptors are retained, and first-attempt passes
are counted separately. The audit reads evidence only and starts no workload.

For a completed campaign, require every registered test to pass and stream-hash
the current original sources, symlinks, harness and frozen runtime inputs:

```sh
python3 -B scripts/full-lean/audit-campaign.py CAMPAIGN --require-all-passed --verify-inputs --output NEW_AUDIT.json
```

An active supervisor lock prevents this completion check. A passing filtered
subset cannot satisfy the full-suite gate, and an existing output is never
overwritten. The small evidence-only regression controls run with
`python3 -B scripts/full-lean/test-audit-campaign.py`; they do not start compilers
or acquire the guarded workload slot. Live audits can report checkpoints while
the sole heavy campaign continues. They validate local evidence consistency,
not untested APIs, engine/platform combinations, or third-party attestations.

`prepare-suite.mjs --include-benchmark-inputs` adds the seven benchmark inputs
to a fresh parallel suite, preserving their original `.no_test` markers,
benchmark drivers, companion files and arguments. Use a separate campaign filtered
to the names in `extraBenchmarkRegistrations`; these supplementary checks are
not part of the upstream CTest count. With both optional groups enabled, the
parallel suite contains 3,903 entries. The active 3,896-entry campaign is not
changed by this option.
These are benchmark execution checks, without expected-output assertions.
`--benchmark-without-perf` selects a separate measurement adapter when the host
does not permit performance counters. It preserves each command's arguments,
stdout/stderr and exit status, and records actual wall time, child CPU time and
max RSS; hardware instruction/cycle counts are omitted. Original sources and
drivers remain intact, and the adapter is hashed before and after execution.

## Resource protection on the maintainer desktop

Heavy work must run one workload at a time through `run-bounded.mjs`. Full
builds, suite preparation/execution, artifact freezing, native-C preparation,
export generation, and compiler probes apply it automatically. The lightweight
campaign supervisors stay outside and guard each child workload separately.
Use an explicit wrapper for other experimental commands:

```sh
node scripts/full-lean/run-bounded.mjs -- COMMAND ARGUMENTS
```

`probe-environment-bytes.py NEW_OUTPUT FROZEN_FACADE` is a supplementary Linux
comparison of ordinary Lean environment reads, mutation and child inheritance
against the pinned native toolchain. Run it through `run-bounded.mjs` and
`base-pages.py`, with one engine per guard and a fresh output directory. It
records only dedicated test variables, retains raw outputs and frozen hashes,
and stops the workload on a timeout. Its eight cases do not add upstream CTest
registrations. The corresponding packaged test is
`test/node-environment-bytes.test.mjs`; native environment-name and concurrency
coverage remains separate from the tested malformed-value cases.

`probe-temporary-path-bytes.py NEW_OUTPUT FROZEN_FACADE` uses the same guarded
invocation for six Linux temporary-directory byte cases. It compares unchanged
ordinary Lean output and independently inspects raw and decoy directory entries,
permissions and contents. Only random leaf names in those external observations
are excluded from comparison. The shared fixture also drives
`test/node-temporary-path-bytes.test.mjs`; original upstream tests are untouched.

`probe-system-directories.py NEW_OUTPUT FROZEN_FACADE` compares fifteen Linux
home/temporary-directory cases in the same guarded slot. `--startup` runs the
preserved original conditions, including oversized `HOME` values that prevent
Deno/Bun startup. The default parallel probe sets those three boundary values
using ordinary Lean `osSetenv` after startup. Packaged tests use a compact
every-byte check for the long ASCII result because the preserved verbose version
exposes a separate packaged-stack failure. Neither failure is counted as a pass;
see [the fixture explanations](../../test/fixtures/system-directories/README.md).

The Linux systemd/cgroup-v2 runner includes every descendant in one 10 GiB
kernel memory cap, stops the workload proactively at 8 GiB, and stops on low
host headroom or rising memory pressure. Smaller hosts/budgets receive a lower
cap. A fixed service name prevents overlapping workloads in this checkout.
CTest, builds, Emscripten cache builds and Binaryen default to one job. Keep those
settings on this host, including when a test itself starts several compilers.
Missing cgroup support fails closed; this is a Linux maintainer tool, not an
application runtime installation requirement.

Before advancing, the campaign supervisor also requires a finished resource
report, confirmed unit cleanup, complete final counters, and zero hard-limit,
OOM, throttling and swap events. A zero CTest exit cannot override missing
monitoring. A contained proactive budget stop remains a separate
`resource-aborted` outcome; pressure and monitor failures stop for review.
The predicate has 29 small report-only controls and accepts all 3,896 completed
Node reports, the 109 Deno reports available at validation, and the retained
safe budget-stop record. No allocation-pressure test was used; see
[the completion-check evidence](../../docs/evidence/campaign-resource-completion-2026-09-23.json).

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
Binaryen worker for these links, including Emscripten's internal cache builds:

```sh
node scripts/full-lean/run-bounded.mjs -- python3 scripts/full-lean/base-pages.py env BINARYEN_CORES=1 EMCC_CORES=1 cmake --build .work/lean-full/wasm64 --target lean -j 1
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
If a final cgroup read returns `ENODEV` or `ENOENT`, the monitor recognizes
teardown only when this workload's complete `ExecStopPost` capture already
exists for the same cgroup. Incomplete captures and unrelated IO errors retain
the existing failure path. This prevents a completed parser test from becoming
a spurious harness failure; it does not raise a limit or discard resource events.
See [the guarded retry and controls](../../docs/evidence/cgroup-retirement-2026-09-22.json).

The guard defaults Emscripten cache builds to one job using `EMCC_CORES`; suite
children retain that setting. CMake and Binaryen limits alone do not constrain
Emscripten's internally generated Ninja builds. Keep the explicit one-worker
campaign setting too: it records that policy in the immutable campaign identity.
When preparing a frozen compiler, its recorded SDK takes precedence over the
builder's inherited `LASM_EMSDK`. The development SDK setting still applies to
an unfrozen build.

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

For campaigns that compile full Wasm applications on this Linux host, add
`--base-pages --build-jobs 1`. The first option runs the guarded suite through
`base-pages.py`; the second sets CMake, Emscripten, and Binaryen worker limits
inside the guard. Original tests, timeout settings, the one-CTest-job limit,
and memory/pressure thresholds remain unchanged. Both adjustments and the
page-policy wrapper's SHA-256 become part of the campaign identity, so switching
policies requires a new output directory. The wrapper is checked before each
attempt. This resource profile does not change application runtime defaults.
`probe-campaign-resources.mjs NEW_OUTPUT` verifies effective settings in a CTest
child and grandchild, immutable resume, and rejection of changed settings.

For an explicitly separate language-server harness, the original two-line Lean
test driver can be compiled ahead of time in the selected engine:

```sh
node scripts/full-lean/build-server-driver.mjs .work/full-toolchains/node-v52-process-cwd .work/server-driver-node
node scripts/full-lean/prepare-suite.mjs --prefix .work/full-toolchains/node-v52-process-cwd --backend node --output .work/suite-node-compiled-driver --include-excluded --timeout 900 --compiled-server-driver .work/server-driver-node/driver.json
node scripts/full-lean/run-campaign.mjs --suite .work/suite-node-compiled-driver --output .work/campaign-node-compiled-driver
```

The builder and suite preparation apply the resource guard automatically. Use
fresh output directories. This opt-in mode replaces only the exact
`lean -Dlinter.all=false --run run_test.lean TEST` call in `server_interactive`
and the corresponding `--run run_test.lean -p FILE` call in
`misc_dir/server_project`. Both upstream entry-point files must have the same
verified hash as the compiled driver; their arguments are forwarded unchanged.
The original driver source is compiled without edits; server/compiler children,
test files, and expected outputs remain unchanged. The driver uses the same
four Lean workers and 64 MiB stack default as the ordinary full-engine facade.
The selected toolchain must match the recorded driver build, and driver files
and generated wrappers are checked before and after each run. Keep its results
separate from the interpreted-driver campaigns. A passing compiled-driver run
does not erase an original-driver memory stop or establish full conformance.
The server-project and cancellation controls pass with this harness in native
Lean, Node, Deno and the local rebuilt Bun, preserving every original and
harness hash. Node's server-project run peaks at 7.54 GiB below the unchanged
8 GiB proactive budget; the earlier interpreted-driver stop remains recorded.
See [the separate comparison](../../docs/evidence/server-project-driver-2026-09-22.json).
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

For a facade with shared application linking enabled, the driver builder also
accepts `--standalone-link`. It compiles the same original driver through the
ordinary standalone Wasm path and records the explicit link decision in its
manifest. Compiler/server children keep the selected toolchain and four-worker
defaults. This reduces memory retained by the driver while those children run;
the shared driver passed a cancellation control but peaked at 7.97 GiB, close
to the unchanged 8 GiB proactive stop threshold. The private build-only
`LASM_FULL_APPLICATION_LINK=standalone` setting can request the same choice
from the compiler adapter; unknown values fail explicitly. Use a new driver
and suite directory when changing this profile.

Use ordinary standalone application linking for broad-suite execution on this
host. The opt-in shared runtime exceeded the 8 GiB proactive budget in the
unchanged synchronous-channel benchmark. The same compiler and four-worker
settings pass that test with standalone linking at 3.40 GiB, retaining the
original dedicated-thread requests. The compiler/source tests are unchanged;
the shared path remains an experimental optimization with a substantial memory
cost for this workload. See
[the comparison](../../docs/evidence/channel-standalone-2026-09-22.json).

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

The subsequent startup trace isolated 13,985 individual table-growth calls per
main/worker. `derive-table-growth.mjs FROZEN_SOURCE NEW_OUTPUT` preserves the
Wasm, worker count, and host while reserving exactly those missing initial-main
function slots in one growth. Existing free slots, function-pointer order,
aliases, later side modules, and incremental table-limit failures retain their
original behavior. Future `freeze-build.mjs` snapshots apply this optimization.
The eight-worker Bun startup smoke now takes 4.42 seconds; the same ordinary
console fixture fell from 70.09 to 4.77 seconds. These are individual Linux x64
executions with the disclosed Bun stack helper, not portable timing guarantees.
The [retained evidence](../../docs/evidence/table-growth-2026-09-21.json) includes
28 loader controls, 47 passing upstream registrations, and the pre-existing Bun
module-root failure reproduced on both old and optimized runtimes.

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

Index format 2 stores export-property ordinals in the generated JavaScript,
instead of repeating long Lean symbol names in every worker. The audit JSON
retains names, table slots, and ordinals. The loader checks the export count and
each function's identity at its recorded slot; JavaScript's integer-key ordering
is accounted for. Existing format-1 snapshots keep their original loader; new
indices use format 2. This derivation still requires unindexed input glue. It keeps its
new index file separate from source symlinks and verifies source hashes afterward.
`probe-index-derivation.mjs NEW_DIRECTORY` checks that behavior with a preexisting
source index and an independently validated synthetic Wasm module.

Compiled Lean plugins also need functions intentionally omitted from the
JavaScript export surface. `generate-exports.mjs` exports the existing in-Wasm
registry, and `lean-symbol-loader.mjs` connects Emscripten's global resolver to
it after normal symbol lookup. All Lean data remain explicit Wasm exports,
preserving their Global type; only missing compiled functions use table entries
from the registry. Unknown symbols and weak imports retain their ordinary
loader behavior. Build and freeze entry points apply the connection, rejecting
unexpected loader changes. `probe-lean-symbol-loader.mjs NEW_OUTPUT FROZEN_SDK`
checks real native/Wasm plugins with direct calls, function pointers, shared
data, weak imports and worker loading, under the resource guard.

For standalone applications, `prepare-toolchain.mjs --standalone-link-optimization 1`
separates C compilation from final WebAssembly linking. Generated Lean C retains
its original compiler flags, including `-O3 -DNDEBUG` when supplied by the
upstream suite. The final link uses `-O1`, avoiding the pinned SDK's expensive
whole-runtime Binaryen optimization. The default build path remains unchanged.
This option changes the final optimization profile, so use a new facade, suite,
and campaign; do not combine its results with an earlier profile.

The option requires a frozen adapter that implements it. To reuse an older
compiler without recompiling its Wasm:

```sh
node scripts/full-lean/run-bounded.mjs -- python3 scripts/full-lean/base-pages.py node scripts/full-lean/derive-cc-driver.mjs FROZEN_COMPILER .work/compiler-with-split-link
node scripts/full-lean/prepare-toolchain.mjs --engine node --build .work/compiler-with-split-link --output .work/split-link-toolchain --standalone-link-optimization 1 --lean-threads 4 --lake-threads 1
```

Only one generated Lean C source with verified runtime libraries qualifies.
Custom source, object, archive or library inputs, runtime search paths, LTO,
instrumentation and auxiliary compiler outputs keep the original build path.
`OUTPUT.lasm-optimization.json` records the decision and, for split builds,
both actual commands, exit statuses and elapsed times. The adapter removes its
temporary object after linking. The option cannot be combined with shared
application linking. This is a maintainer suite option; package integration
and full-suite parity remain unfinished.

An opt-in shared application runtime avoids relinking the entire Lean runtime
for each generated application. Build it from a frozen native-memory64 compiler,
then derive a composite artifact and prepare a fresh toolchain facade:

```sh
node scripts/full-lean/run-bounded.mjs -- python3 scripts/full-lean/base-pages.py python3 scripts/full-lean/build-shared-runtime.py FROZEN_COMPILER .work/shared-runtime
node scripts/full-lean/derive-application-runtime.mjs FROZEN_COMPILER .work/shared-runtime .work/compiler-with-shared-runtime
node scripts/full-lean/prepare-toolchain.mjs --engine node --build .work/compiler-with-shared-runtime --output .work/shared-toolchain --shared-applications --lean-threads 4 --lake-threads 1
```

Use new output directories. The builder uses one build/Binaryen worker and one
precreated pthread; ordinary Lean execution still defaults to four workers.
The original generated C `main` runs through a private loader before compiler
initialization. No public Lean API or syntax changes, and no native Lean fallback
is involved. The ordinary compiler retains its smaller export set. The composite
snapshot records the complete application runtime, so campaign integrity checks
cover both artifacts. Source snapshots are verified before and after derivation.

Shared linking requires generated Lean C and verified runtime library inputs.
Runtime archives are recognized by content hash and size, and library search
directories must resolve to the recorded compiler libraries. Custom sources,
objects, libraries, runtime search paths, and additional linker semantics keep
standalone Wasm linking. Each application records its decision in
`OUTPUT.lasm-link.json`. This is maintainer infrastructure, not yet the packaged
application path. Retained full-export link warnings for libuv internals remain
an open validation issue.

Five original Node registrations pass with four Lean workers, including HTTP
hang regressions and cross-process closure serialization. One worker is not a
general replacement: the HTTP regression times out in all 22 cases with one
worker even in native Lean. Keep the earlier one-worker experiments separate
from four-worker results. The maintained builder reproduces the tested prototype's
exact Wasm, and 15 selector tests cover shared linking and conservative fallback.
See [the retained evidence](../../docs/evidence/shared-application-adapter-2026-09-22.json).

New `freeze-build.mjs` snapshots apply function-table indexing and record
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

`probe-temporary-files.mjs NEW_OUTPUT FULL_TOOLCHAIN...` compares ordinary Lean
temporary paths, environment precedence, contents and structured errors against
native Lean. Ten cases require identical fixture output. A separate missing-
directory case records the pinned native ENOENT-decoder crash and checks Lasm's
safe error against native's valid empty-directory error path. This is explicitly
a safety check, not a parity pass. Linux x64 checks pass in packaged and full
Node, Deno and Bun; full Bun uses the local engine build and stack helper. See
[the temporary-file evidence](../../docs/evidence/temporary-files-2026-09-22.json).

`probe-realpath.mjs NEW_OUTPUT FULL_TOOLCHAIN...` compares 17 ordinary Lean
path cases against native Lean, including symlink/parent traversal, missing and
non-directory components, empty paths, permissions, and malformed filename
bytes. The fixture checks both printed paths and the resulting UTF-8 bytes.
It preserves a source copy and its hash, verifies frozen inputs, and records
every engine result. This POSIX comparison does not establish Windows behavior.

`probe-getline-state.mjs NEW_OUTPUT FULL_TOOLCHAIN...` compares an unchanged
supplementary ordinary-Lean program with the pinned native runtime and each
selected full compiler. It covers reading appended data after a final partial
line, newline and empty-file controls, mixed line/byte reads, repeated EOF, and
a long partial line. Source copies, hashes, outputs, and resource reports remain
separate from upstream-suite results. `test/getline-native-state.test.mjs` adds
an independent C control for nonblocking partial errors, retained FILE errors,
consumed bytes, and EOF/error ordering. Run it through the resource guard; it
executes serially in each installed engine. `test/node-getline-state.test.mjs`
checks the packaged ordinary-Lean path.

`probe-console-buffering.mjs NEW_OUTPUT FULL_TOOLCHAIN...` compares ordinary
Lean stdout/stderr buffering, explicit flushes, inherited-child ordering, and
normal shutdown against the pinned native compiler. It preserves the executed
source and records hashes and complete output; it does not modify upstream
tests. `test/node-console-buffering.test.mjs` checks the packaged path, while
`test/stdio-backpressure.test.mjs` fills a small Linux pipe and verifies that
flush/disposal let a delayed JavaScript reader run. `test/worker-stdio.test.mjs`
checks diagnostic forwarding and natural exit after `Worker.unref()` on Node.
Run these through `run-bounded.mjs`, sequentially with other compiler work.

`derive-host-prelude.mjs FROZEN_SOURCE NEW_OUTPUT` updates only the embedded
private host prelude and its link-time copy, retaining the Wasm and Lean inputs.
Like `derive-worker-cwd.mjs` for the worker prelude and `derive-host-files.mjs`
for host modules, it verifies the parent snapshot and requires a fresh output.
Never modify a frozen snapshot or carry passes into a different campaign identity.

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
An empty selection fails explicitly via CTest's `--no-tests=error`; a misspelled
filter must never be recorded as a successful run. The guarded
`probe-suite-selection.mjs SUITE NEW_OUTPUT TEST_NAME` exercises that rejection
and one existing registration, preserving both executions and integrity checks.
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

`probe-shell-arguments.mjs NEW_OUTPUT TOOLCHAIN...` compares sixteen actual
compiler invocations with native Lean: `--run` after file operands, short option
groups, option values, empty and lone-dash operands, literal application
arguments, ordinary compilation, and `POSIXLY_CORRECT` controls. The full-build
shell patch consumes operands in order, retaining them for compilation and
discarding preceding operands when parsing stops at `--run`. This avoids musl's
eager permutation, which otherwise adds an extra filename to Lake's `lean --run`
application arguments. The probe preserves mismatches and verifies frozen
compiler inputs; it is separate from unchanged upstream tests. Its native
reference is Linux glibc, so these comparisons do not establish other-OS parity.

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
status. Deno's Linux child now starts through `native/process-launcher.c`, a small
bundled executable that does not query cwd during bootstrap. The maintainer-only
`scripts/build-process-launcher.mjs` builds glibc and static-musl variants for x64
and ARM64 with pinned Zig under the resource guard and a two-CPU affinity. End
users do not compile this helper. Source, binary hashes, and third-party notices
are included in the native bundle. Cross-compilation does not establish ARM64 or
complete musl-host conformance.

`probe-cwd-permissions.mjs --removed NEW_OUTPUT TOOLCHAIN...` adds a separate
ordinary-Lean comparison for deleting a cwd after revoking search permission.
It covers inherited/explicit child cwd, failed execution, PATH search, and a
100,000-byte environment. `test/node-cwd-removed-permissions.test.mjs` checks the
same source through generated mains and source launchers. It is a supplementary
fixture, not an edited upstream test.

That comparison also exposed fresh pthread bootstrap failures after cwd deletion.
Node now preloads the existing worker-local JS cwd fallback. Deno starts one
unreferenced private factory while the directory is valid; Linux `unshare(CLONE_FS)`
gives only that factory its own directory context, rooted at `/`. When the real
application cwd is removed, the factory starts new workers with the same stack
limits and relays their messages, transferred ports, and shared memory. Ordinary
workers retain their direct path. The application cwd is never temporarily
changed. Error and shutdown comparisons include each engine's unwrapped worker
control. Sandboxes denying `unshare(CLONE_FS)`, independent instance cwd permission
inheritance, and non-Linux behavior remain open. `derive-worker-cwd.mjs` freezes
this private prelude change without rebuilding or modifying Wasm or Lean inputs.

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
worker-transfer defect, so it is not a working Bun configuration. A separately
downloaded and SHA-verified `1.4.3-canary.1+a2b69f7b0` retains that defect in the
same one-page reproduction; Node and Deno controls pass. This remains an engine
defect, not a proven fundamental restriction. See
[the canary comparison](../../docs/evidence/bun-canary-memory64-2026-09-21.json).

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

The full-runtime host imports now use pointer-sized input/copy lengths and signed
64-bit response lengths. `probe-transfer-width.py` exercises the production C++
declarations and JavaScript imports with length-only RPC responses, so the
2 GiB/4 GiB boundary checks do not allocate large buffers. Run it through the
guard with an explicit memory64-capable Bun executable:

```sh
node scripts/full-lean/run-bounded.mjs --report .work/transfer-width.resources.json -- \
  python3 scripts/full-lean/base-pages.py python3 scripts/full-lean/probe-transfer-width.py \
  .work/transfer-width --bun /absolute/path/to/memory64-capable-bun
```

Use a new output directory to retain previous attempts. The probe snapshots its
inputs and hashes the engines before and after all 72 checks. These synthetic
counts and the separate high-address bridge checks do not establish safe
multi-GiB payload allocation. The packaged Wasm32 ABI remains unchanged; see
[the repair evidence](../../docs/evidence/host-transfer-width-2026-09-22.json).

The private transport carries ArrayBuffers and explicit view bounds, reconstructing
typed arrays after receipt. [Deno 2.9.7's synchronous port adapter](https://github.com/denoland/deno/blob/v2.9.7/ext/node/polyfills/worker_threads.ts#L2120)
recursively enumerates typed-array indices; the ArrayBuffer envelope avoids that traversal.
Fresh request copies transfer their backing stores. Responses preserve cloning
because the host may retain aliases. `probes/message-buffer.cjs` compares the
small-buffer forms without a compiler build:

```sh
node scripts/full-lean/run-bounded.mjs --report .work/message-buffer.resources.json -- \
  python3 scripts/full-lean/base-pages.py node scripts/full-lean/probes/message-buffer.cjs \
  arraybuffer transfer 8388608
```

Use `buffer`, `uint8`, or `arraybuffer`, and `clone` or `transfer`. Repeat with
`deno run -A` and Bun in separate guarded workloads. The probe caps payloads at
8 MiB, verifies received length and sampled bytes, and reports elapsed time and
RSS without a timing-based pass threshold. Larger ordinary-Lean reads and their
remaining copy costs are recorded in
[the transport evidence](../../docs/evidence/deno-message-envelope-2026-09-22.json).

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

### Exit and buffered-file comparison

`node scripts/full-lean/probe-process-exit.mjs NEW_OUTPUT TOOLCHAIN_PREFIX...`
runs a supplementary ordinary Lean program against the pinned native compiler
and each selected frozen full compiler. It compares normal return,
`IO.Process.exit`, and `IO.Process.forceExit`, including exit status, stdout,
stderr, and an open buffered file. The source and every frozen input are
verified; upstream tests and expectations are unchanged. The resource guard
applies automatically. Packaged runners and embedded host lifetime are covered
separately by `test/node-process-exit.test.mjs`.

### Shared memory address and zero-capacity control

`node scripts/full-lean/probes/shared-memory-address.cjs i64 0 2 workerData`
checks transferred and freshly constructed modules, the memory address type,
growth, maximum enforcement, shared atomic writes, and a return transfer.
Use `i32`/`i64`, initial/maximum pairs `0 0`, `0 2`, `1 2`, and transports
`workerData`, `postMessage`, `messageChannel`. Run these probes through the
resource guard. Bun also needs `BUN_JSC_useWasmMemory64=true` inside the guard;
Deno uses `deno run -A`.

Node and Deno pass all 18 variants. Stable Bun and the tested canary each pass
six; zero-capacity variants crash, and the remaining memory64 variants lose
the address type across worker transfer. These tiny engine cases allocate at
most two 64 KiB pages. Stock Bun remains unchanged. See
[the complete matrix](../../docs/evidence/bun-shared-memory-matrix-2026-09-21.json).

The local [Bun 1.4.2 patch](patches/bun-1.4.2-shared-memory-address.patch)
preserves the address type alongside the shared-memory handle and avoids
dereferencing a null handle for zero-capacity memory. It applies to commit
`744846f844374847c902b5e7fd59b4342a51ef99`. A Linux x64 debug build with ASAN
passes all 18 added checks, 15 existing neighboring worker-transfer tests, and
the original four-check one-page memory64 probe. The added tests first reproduce
all 12 expected failures on the released binary. This is an opt-in engine repair;
full Lean validation and other platforms remain separate gates.

Use Bun's ordinary `bun bd` build-then-exec workflow in an ignored source tree,
inside `run-bounded.mjs` and `base-pages.py`, with one build job on this host.
Keep its build cache inside this repository's ignored cache. For the ASAN debug
binary, `ASAN_OPTIONS=allow_user_segv_handler=1` is required for shared Wasm,
as in Bun's own test harness; this does not disable sanitizer checks. The full
compile stopped safely at the proactive budget during linking; an unchanged
incremental link completed under the same guard. Preserve those attempts
separately. See [the patch, validation, and resource evidence](../../docs/evidence/bun-memory64-local-fix-2026-09-21.json).

A separate local `build:release` build passes the same 18 + 15 + 4 engine controls
and starts the full Lean compiler in 2.51 seconds. Four unchanged IO, cancellation,
and HTTP registrations pass. `instances` still reports an internal allocation
failure because Bun's fork retains a separate 4 GiB ArrayBuffer/Wasm capacity
limit. Its source explains that some Bun buffer paths still use 32-bit lengths.
Do not remove that limit without addressing and validating those paths.

`probes/memory64-capacity.cjs` queries exposed resizable capacity with just one
initial 64 KiB page per memory and no positive growth. Run it inside the resource
guard, using `BUN_JSC_useWasmMemory64=true` for Bun and `deno run -A` for Deno.
Patched Bun reports 4 GiB for an 8 GiB declaration; Deno reports 8 GiB. The pinned
Node lacks this query, which is recorded explicitly. This is an engine diagnosis,
not an upstream test or a fundamental-limit claim. The release build and all five
Lean outcomes are preserved in [the release evidence](../../docs/evidence/bun-memory64-release-2026-09-21.json).

## Host platform comparisons

`build.mjs` applies `patches/lean-4.32.0-host-platform.patch` so the ordinary
Windows/macOS platform queries use the private JavaScript host import. It also
sets the compilation-target string explicitly: native and lowered memory64 both
use the Wasm64 ABI. This changes no public Lean API.

`probe-host-platform.mjs NEW_OUTPUT PREFIX...` compares the original and patched
platform object using the same frozen runtime archives. Supply native-memory64
prefixes sharing one frozen compiler and run under `run-bounded.mjs` with
`base-pages.py`. The supplementary ordinary Lean fixture runs against native
Lean and controlled Linux/Windows/macOS host values in each selected engine.
The production mapping body is retained; only its host input is controlled.
Nine repaired comparisons pass, while the original fails all six non-Linux
cases. Actual rebuilt compiler checks and six unchanged upstream registrations
per engine also pass on Linux x64. These are separate from native cross-OS
validation; see [the retained evidence](../../docs/evidence/host-platform-2026-09-21.json).

## External C compiler inputs

The compiler adapter leaves source-language selection to the chosen Emscripten
driver. It links the C++ runtime without injecting `-x c`/`-x none` around C
inputs. Those injected flags made the pinned SDK try to compile an existing
object file when linking a command such as `clang main.c helper.o -o app`.

`probe-cc-inputs.mjs NEW_OUTPUT PREFIX...` checks mixed C/C++ sources, objects,
archives, the C++ driver's treatment of a `.c` input, and quoted response files
containing paths with spaces. Run it through `run-bounded.mjs` with
`base-pages.py`, supplying one frozen toolchain prefix per engine. Three native
controls and all fifteen engine cases pass on Linux x64. The small fixture
rejects accidental C++ compilation of its C source and verifies the linked
program's result.

`derive-cc-driver.mjs FROZEN_SOURCE NEW_OUTPUT` freezes only the revised external
compiler adapter. It verifies the parent hashes and its helper dependencies,
retains the Wasm compiler, SDK, and host runtime, and requires a fresh output.
This allows an isolated adapter regression without rebuilding or mutating the
parent compiler snapshot.

The unchanged Lake FFI and reverse-FFI examples, dedicated-thread compilation,
and external boxing also pass in each engine, twelve registrations total. See
[the original failure and full validation](../../docs/evidence/cc-inputs-2026-09-21.json).

`probes/buffer-width.cjs` checks 40 buffer operations using a three-byte input
and boundary offsets, including values above 4 GiB. It allocates no large
buffer. Run inside the guard with Node, `deno run -A`, or Bun and compare the
recorded results. Node and Deno agree; released and locally patched Bun differ
on three `StringDecoder.text` cases. These engine findings inform the separate
large-buffer audit and are not Lean suite failures. See
[the offset comparisons](../../docs/evidence/buffer-width-2026-09-21.json).

The subsequent `patches/bun-1.4.2-string-decoder-width.patch` retains `size_t`
decoder lengths and follows Node's public `text` slicing/reset behavior. Apply
it to the same pinned Bun source after the shared-memory patch, then use Bun's
official build-then-execute workflow inside `run-bounded.mjs` with one build job.
Separate frozen release and ASAN artifacts are recorded in
[the decoder evidence](../../docs/evidence/bun-decoder-width-2026-09-21.json).
The patch adds 22 tests without changing existing test bodies.

`probes/decoder-width.cjs` checks a 4 GiB buffer's final byte and rejection of
oversized hex output. Run it only inside the guard: although the probe explicitly
writes one byte, the native Node baseline peaked at about 4.03 GiB for the guarded
run. `probes/decoder-text-negative.cjs` preserves the input of Bun's existing
negative-offset test and checks Node's `ERR_STRING_TOO_LONG` result. The original
Bun test remains a recorded failure because it expects an empty string. Both
repaired profiles pass the separate comparison and all six width checks.

The default ASAN run records a timeout for the 1,000 forced-GC case. A parallel
run supplies `bun test --timeout 90000`; the test source and its other explicit
deadlines remain unchanged. Both release and that debug profile pass 119 of 120
decoder cases, with only the documented Node-semantics disagreement remaining.
All 18 cloning controls, 15 neighboring worker tests, and four original memory
checks pass again. The WebKit capacity constant is unchanged at 4 GiB; these
engine checks are neither a capacity repair nor full Lean-suite results.

The later `patches/webkit-2e2aa2290fac856d-bun-8g-capacity.patch` is an opt-in
experiment against WebKit commit `2e2aa2290fac856d6f451ceacb58f7f5b44dd057`.
Apply it in a separate source checkout, retain both Bun patches, and use Bun's
supported `BUN_WEBKIT_PATH` / `--webkit=local` build path in a new build directory.
Rebuild the matching static libraries and Bun; changing downloaded headers alone
does not change their compiled capacity. Keep the one-job build inside the guard.
The recorded Linux build uses host ICU 74.2 instead of bundled ICU 78.3.

`probes/memory64-boundary-jsc.js` checks the JSC shell first. Its arguments are
`shared|unshared PAGES observe-tier|require-final-tier "$LASM_RESOURCE_UNIT"`;
use `--useWasmMemory64=true`, start at two pages, and only then use 65,537 pages.
The explicit guard token prevents accidental unguarded large allocations.
The optional final-tier assertion tests optimizer coverage, not just semantics.
It remains a recorded failure for the large mixed-offset loop; a separate profile
keeps all correctness assertions while recording actual observed tiers.

`probes/memory64-buffer-boundaries.cjs` and `probes/buffer-high-offsets.cjs` take
`shared|unshared [PAGES]`. Run them only inside the guard, starting at two pages.
The default 65,537-page case requests 4 GiB plus 64 KiB; low physical usage in one
engine does not guarantee low commitment elsewhere. They test Wasm/typed-array
access, Buffer operations, filesystem offsets, and shared worker views. The latter
probe isolates each operation and retains failures instead of stopping at the
first one. It also checks Lasm's typed-array copy and numeric-offset reconstruction
paths against known Node/Deno high-offset Buffer/cloning differences.

The frozen local 8 GiB engine passes all five selected unchanged Lean controls,
including `instances`; the earlier capacity failure remains preserved. Stock Bun,
ASAN coverage of the new WebKit build, the full Lean suite, package integration,
and other operating systems/architectures remain separate gates. See
[the full capacity evidence](../../docs/evidence/bun-memory64-capacity-2026-09-22.json).
