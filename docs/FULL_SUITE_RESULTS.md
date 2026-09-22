# Full upstream Lean suite

Pinned Lean: **4.32.0**, commit
`8c9756b28d64dab099da31a4c09229a9e6a2ef35`.

The v144 Node campaign's latest saved checkpoint records **102 passes, zero
failures or resource aborts, and 3,794 pending registrations**. All 3,896 tests
remain selected; 3,004 previously unpassed names run first, without importing
earlier results. Quicksort, four red-black-map variants, server startup, the
dependent-pair iterator, tree maps, union-find, server watchdog and workspace
symbols pass. The first 91 documentation-parser registrations pass too.
Every completed attempt preserves all 7,267 original source hashes and the
compiled-driver/harness hashes. The active unfinished attempt is excluded from
the saved results. This campaign uses base pages, one build worker and the
separate final-link profile described below. See
[the 102-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint102-2026-09-22.json).
The [54-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint54-2026-09-22.json)
and [initial ten-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint10-2026-09-22.json)
remain unchanged.

The v144 standalone final-link profile passes **nineteen unchanged upstream
registrations**: eleven in Node and four each in Deno and the local rebuilt Bun.
Coverage includes channel/parser benchmarks, native FFI and reverse FFI,
cross-process closure serialization, compiler/Lake imports, filesystem overflow,
ordinary IO and HTTP hang regressions. All 7,267 source hashes match throughout.
The compiler Wasm is identical to v142. Generated C retains its original flags;
eligible standalone applications compile C separately and use `-O1` for the final
WebAssembly link. Custom FFI links retain their original build path. This is an
explicit maintainer option, not a package default or a complete-suite result.

With one build worker, the original Node parser registration takes 38.89 seconds
versus 714 seconds in the preceding default-link campaign. These are individual
profile measurements, not a general benchmark. The targeted validation peaks at
4.56 GiB without resource aborts, OOM, hard-limit, throttling or swap events.
All 35 focused selector/option tests pass. A synthetic child/grandchild control
also verifies the guard's new one-worker defaults and immutable campaign resume.
An initial preparation missing two archive inventory entries, a two-worker
smoke run, and a manually stopped two-worker regression attempt remain recorded.
Neither incomplete attempt is counted as a conformance failure. Cross-platform,
released-Bun full-compiler and complete-suite validation remain open. See
[the standalone optimization evidence](evidence/standalone-link-optimization-2026-09-22.json).

The same Node profile also passes **four unchanged language-server cancellation
registrations** with the original upstream test driver compiled ahead of time.
The driver uses the standalone split-link option; compiler/server children still
use four Lean workers. All original and harness hashes match. Preparation peaks
at 2.96 GiB and execution at 6.53 GiB, without resource aborts, memory-limit events,
OOM, throttling or swap. These targeted results are recorded separately from
the new full campaign. See
[the server-driver validation](evidence/standalone-link-server-driver-2026-09-22.json).

The v142 private file-worker repair passes **eighteen unchanged registrations**:
ordinary IO, HTTP hang regressions, line reads, file locking, directory reads,
and real paths in each engine. All 7,267 original source hashes remain intact.
Previously, a three-byte result or EOF cloned the entire requested backing
buffer, observed at 1, 16, and 64 MiB in every engine. The worker now transfers
only returned bytes for partial/pooled views and preserves direct transfers for
full allocations. Four maintained host tests, twenty-four before/after native
and full-engine controls, and nine packaged released-engine controls pass.
The full compiler Wasm is byte-identical to v141; only the private worker changes.

Individual 64 MiB short-read runs peak at 1.89→1.63 GiB in Node,
2.16→1.84 GiB in Deno, and 2.40→1.90 GiB in local rebuilt Bun. No resource
abort, OOM, memory-limit, throttling, or swap event occurs. Native read capacity
and the remaining C++/Lean copies still need broader analysis. A supplementary
package harness initially failed while scanning unrelated permission-denied
experiment directories; its isolated byte-identical fixture retry passes.
Full-suite and native cross-platform coverage remain open. See
[the allocation evidence](evidence/short-read-allocation-2026-09-22.json).

The separate v141 clock validation passes **twelve unchanged registrations**:
`timeIO`, `timeNegative`, HTTP hang regressions, and file locking in each engine.
All 7,267 original source hashes match before and after execution. Ordinary
`Timestamp.now` now retains native Lean's observed Linux microsecond precision,
and an injected clock error reaches its ordinary `IO.Error` handler instead of
being interpreted as a timestamp. Released Node, Deno, and Bun also pass six
packaged precision/error controls. Ten focused host tests, both new package
tests, and the six existing ordinary-IO/main tests pass. Full Bun compiler tests
use the disclosed local memory64-capacity build; native macOS, Windows, and
ARM64 comparisons remain pending.

The evidence retains an initial supplementary fixture error, a private harness
setup failure, and an unsuccessful header-copy build. No upstream test was
edited. The successful combined validation peaks at 4.46 GiB, with no resource
abort, OOM, memory-limit, throttling, or swap events. These targeted passes are
not imported into the broad campaign. See
[the clock evidence](evidence/wall-clock-2026-09-22.json).

The v139 Node campaign stopped with **33 passes, zero conformance failures,
one resource abort, one harness failure, and 3,861 pending registrations**.
The synchronous-channel benchmark reached the proactive 8 GiB budget at an
8.06 GiB peak. The parser registration passed CTest, but its final cgroup read
reported `ENODEV` during unit collection, so the conservative supervisor recorded
a harness failure and stopped. All original and harness hashes remain intact;
there were no OOM, hard-limit, throttling, or swap events. The complete
[stopped checkpoint](evidence/node-broad-v139-stopped35-2026-09-22.json) remains
unchanged. Retrying or repairing these cases does not rewrite that campaign.

The unchanged channel test passes with the same frozen compiler and four Lean
workers when application linking uses the ordinary standalone path: **3.40 GiB**
peak, with the test's original dedicated-thread requests retained. This is a
resource-profile difference, not an established Lean behavior failure or a
fundamental limit. See [the isolated comparison](evidence/channel-standalone-2026-09-22.json).
The monitor now recognizes removal only when its complete final capture for the
same cgroup is already written. Four unit controls, replay of the actual capture,
and small guarded campaign controls pass; the unchanged parser retry passes at
2.94 GiB. Limits are unchanged. See
[the monitor repair](evidence/cgroup-retirement-2026-09-22.json).

The v142 standalone Node campaign is gracefully paused at **three passes, zero
failures or resource aborts, and 3,893 pending registrations**. Channel, parser
and persistent-hash-map benchmarks pass with all source and harness hashes
intact. The maximum peak is 5.08 GiB, with no OOM, memory-limit, throttling or
swap events. This profile includes the clock and file-worker fixes. The parser
and map tests each spend roughly twelve minutes in the original build path;
the pause allows a separate final-link optimization experiment. No passes are
imported into a different profile. See
[the standalone checkpoint](evidence/node-broad-v142-standalone-checkpoint3-2026-09-22.json).

The preceding saved checkpoint records 20 passes and 3,876 pending registrations.
It uses shared application linking, the separately compiled standalone server
driver, four Lean workers, base pages, and one build worker. The 3,040 test names
not attempted in earlier Node campaigns run first; no earlier passes are imported.
The initial group covers further persistent-map, sorting, reuse, thunk, trie,
integer, and Unicode-path regressions. All source and harness hashes match;
the maximum peak is 2.92 GiB with no memory-limit, OOM, or swap events. See
[the new campaign checkpoint](evidence/node-broad-v139-shared-checkpoint20-2026-09-22.json).
Its continuation after the separate clock/allocation checks produced the stopped
checkpoint above. The subsequent v142 standalone checkpoint is recorded above.

The v127 Node campaign with base pages and one build worker is gracefully paused at
**twenty-seven passes, zero failures or resource aborts, and 3,869 pending registrations**.
The unchanged cross-process closure serialization test passes, followed by
compactor-chain, dependent-region, expression, escape-analysis, and floating-point
controls. The original filesystem read-overflow test also returns its expected
structured `resourceExhausted` error. All 3,896 registrations remain selected;
no earlier results are imported. Every completed
attempt preserves all 7,267 source and nine harness hashes, with no memory-limit
or swap events and a 5.10 GiB maximum peak. Its last attempt completed and
released the guard; see [the twenty-seven-test base-page checkpoint](evidence/node-broad-v127-base-pages-checkpoint27-2026-09-22.json).
Both incremental snapshot controls pass: command-granular reuse takes 756.91
seconds, and fallback after a changed import header takes 760.64 seconds. Two
initialization regressions pass afterward. A separate compiled API-dependency
inventory ran during a graceful campaign pause; the identical frozen campaign
then resumed. Those audit runs are not counted as upstream tests. See
[the dependency audit](compatibility/API_DEPENDENCIES.md).
The large-closure and Lake-linking regressions also pass, in 762.98 and 750.25
seconds respectively. The same checkpoint includes passing lazy-list, shared-list,
compile-time-only import, natural-number shift, and overflow controls.
Further overflow, partial-function, and persistent-hash-map controls pass too;
`compile/phashmap2.lean` takes 740.69 seconds and `compile/phashmap3.lean`
takes 730.31 seconds. The campaign pauses here for a
separate experiment in reusing the frozen Wasm runtime for AOT
applications. The existing compiler, campaign, and original sources remain
unchanged. The [twenty-one-test checkpoint](evidence/node-broad-v127-base-pages-checkpoint21-2026-09-22.json)
preserves the preceding results.
The [fourteen-test checkpoint](evidence/node-broad-v127-base-pages-checkpoint14-2026-09-22.json)
preserves the earlier snapshot results.
The [ten-test checkpoint](evidence/node-broad-v127-base-pages-checkpoint10-2026-09-22.json)
and [initial five-test checkpoint](evidence/node-broad-v127-base-pages-checkpoint5-2026-09-22.json)
remain intact.

During this pause, a shared-runtime AOT experiment passes **30 native comparisons**:
ten each in Node, Deno, and the local rebuilt Bun profile. The checks cover ordinary
CLI execution, literal arguments, an unchanged expression test, cross-process
closure serialization, console/file buffering, normal return, exit, and force-exit.
Each engine also rejects a missing application module explicitly. These are
supplementary controls, not new upstream CTest passes. The profile uses one Lean
worker and one precreated pthread; peaks are 6.27 GiB in Node, 5.33 GiB in Deno,
and 5.54 GiB in local Bun, with no memory-limit, OOM, or swap events. Original
fixture hashes match. Stock Bun, cross-platform execution, shared-library search
paths, C embedding, and broad-suite use remain separate validation gates.

The experiment exposed a large function-table metadata cost. The maintained
loader now stores export ordinals instead of repeating long symbol names, while
retaining address-identity checks and complete-scan fallback. On the same Wasm,
the generated JavaScript drops from 31.68 to 9.71 MiB. A direct two-control Node
comparison with unchanged four-worker settings peaks at 4.32 GiB before and
3.93 GiB after the representation change; the separately adjusted one-worker
profile peaks at 2.82 GiB. These are individual measurements, not a general
performance guarantee. All 25 focused loader tests pass, as does an independent
artifact-derivation check that preserves a preexisting source index.

The retained experiments include initial entry-symbol and missing-export failures,
an intentional resource precaution stop, and restoration of an experimental
script's overwritten linker metadata from its verified snapshot. No compiler
bytes or upstream tests changed in that bookkeeping incident; the original
untracked linker log was lost and is not used as evidence. Shared-runtime linking
also retains warnings for unresolved libuv internals. See the complete
[shared-runtime and compact-index evidence](evidence/shared-program-runtime-2026-09-22.json).

The maintained shared-application adapter subsequently passes **five unchanged
Node CTest registrations with four Lean workers**: cross-process closure
serialization, expressions, filesystem read overflow, Lake linking, and the
HTTP hang regressions. Peaks range from 2.08 to 6.30 GiB, with no resource aborts,
memory-limit events, OOMs, or swap. The original source hashes match throughout.
The three selected large compilation tests take 50.41, 37.69, and 29.46 seconds,
compared with 740.85, 773.32, and 750.25 seconds in earlier standalone runs.
These individual timings measure the recorded profiles, not a general benchmark.
The maintained build recipe reproduces the prototype's exact Wasm SHA-256, and
15 focused link-selection tests pass. Custom objects/libraries, explicit runtime
search paths, and C embedding retain the existing standalone Wasm link path.

An earlier one-worker integration experiment passed four compilation controls
and five of six IO/FFI controls, but all 22 HTTP hang-regression cases timed out.
The unchanged test also fails all 22 cases in native Lean with one worker and
passes with four. Node passes with four both directly and through CTest, without
changing the test's internal deadlines. General compiler/application defaults
therefore remain four workers. The earlier failure remains recorded; these
targeted results do not add passes to the paused broad campaign. Full-suite,
broader language-server, cross-engine facade, and packaged integration remain separate
gates. See [the adapter and worker-profile evidence](evidence/shared-application-adapter-2026-09-22.json).

A shared version of the unchanged language-server test driver passes the
cancellation control, but its 7.97 GiB peak leaves little headroom. The new
`--standalone-link` driver option retains the original standalone Wasm linking
path while ordinary application links can reuse the shared runtime. All seven
subsequent Node controls pass: four cancellation cases, server output, an
expression application, and HTTP hang regressions. The cancellation control
falls to a 6.50 GiB peak; the complete group peaks at 6.84 GiB, with no resource
aborts, memory-limit events, OOMs, or swap. All 7,267 source hashes and the
recorded driver/harness hashes remain intact. Four Lean workers are retained,
and 17 link-selection tests pass. See [the driver comparison](evidence/standalone-server-driver-2026-09-22.json).

The v127 Node campaign stopped at **54 passes, zero conformance failures, one
resource abort, and 3,841 pending registrations**. The guard interrupted
`compile/compact_closure.lean` on a 5.17% memory-pressure signal at a 2.15 GiB peak,
while more than 21 GiB of host memory remained available. There were no OOM,
hard-limit, throttling, or swap events. All 7,267 original source and nine harness
hashes were independently verified after the interruption. The incomplete test
is not counted as a pass or conformance failure; see
[the stopped-campaign evidence](evidence/node-broad-v127-stopped55-2026-09-22.json).
A separate base-page retry passes that unchanged test in **485.68 seconds**, at
a 5.07 GiB peak. All original source and harness hashes match. Sampled descendants
report huge pages disabled; recorded kernel allocation-stall, compaction,
huge-page, and OOM counters did not increase. The original abort and successful
retry remain separate. Six synthetic campaign controls verify resource-policy
inheritance, immutable resume, and existing ordering behavior. New campaigns
use `--base-pages --build-jobs 1`, with guard thresholds and tests unchanged; see
[the retry and harness evidence](evidence/compact-closure-base-pages-2026-09-22.json).

The v127 Node campaign's earlier live checkpoint records **28 passes, zero failures
or resource aborts, and 3,868 pending registrations**. Its prioritized Lake group,
the upstream lint registration, and the first documentation example pass. All 3,896
registrations remain selected; 3,241 names unattempted in earlier Node broad
campaigns run first, without importing their results. Every completed attempt
preserves all 7,267 source and nine harness hashes. Peak memory was 5.59 GiB, with
no memory-limit events; the active attempt is excluded. The harness retains the
documented 1,800-second deadline and unchanged internal test timings. See
[the 28-test live checkpoint](evidence/node-broad-v127-checkpoint28-2026-09-22.json).
The [earlier 11-test checkpoint](evidence/node-broad-v127-checkpoint11-2026-09-22.json)
remains intact.

The full compiler now preserves native Linux argument ordering when `--run`
follows file operands. This repairs the unchanged Lake `lean/test.sh` failure
retained below. The original Node compiler differed in seven of fourteen
supplementary cases; the first repair passed fifteen of sixteen expanded cases
but still mishandled a lone `-`. Both attempts remain recorded. The revised
v127 native-memory64 / v126 lowered compilers pass **all 64 argument comparisons**
and **24 unchanged upstream controls** across Node, Deno, local Bun, and released
Bun's separate lowered profile. Every upstream attempt preserves all 7,267
original source hashes. Peak workload memory was 5.05 GiB, with no resource or
OOM event. These targeted results do not complete the broad suites or establish
other-OS CLI parity. See [the argument-ordering evidence](evidence/shell-arguments-2026-09-22.json).

The full-runtime message transport now avoids a large Deno allocation cost.
The same ordinary-Lean 64 MiB read drops from **5.23 GiB to 1.99 GiB** peak memory
and from 26.5 to 5.9 seconds. The before/after Wasm binaries are identical;
messages now carry ArrayBuffers with numeric view bounds. Native Lean and all
three engines pass the 1/16/64 MiB comparisons and subsequent 256 MiB reads.
The larger engine runs peak at 2.62–2.92 GiB, with no resource event. These
single-run controls do not establish multi-GiB payload or complete-suite parity.
All 43 selected unchanged upstream controls pass again: eleven each in Node,
Deno, and the local Bun native-memory64 profile, and ten in released Bun's
lowered profile. All original source hashes remain intact, with no resource abort.
See [the transport comparison](evidence/deno-message-envelope-2026-09-22.json).

The full-runtime host transfer ABI now preserves lengths across the 2 GiB and
4 GiB boundaries. All **72 synthetic checks** pass after reproducing 36 failures
in the original ABI. On the rebuilt v121 native-memory64 compiler, Node, Deno,
and the local 8 GiB Bun each pass **11 unchanged upstream controls**, including
`instances`; released Bun passes ten controls in the separate v120 lowered
profile. These selected results do not complete the broad campaigns. See
[the transfer repair evidence](evidence/host-transfer-width-2026-09-22.json).

The local Bun/WebKit 8 GiB experiment now passes **five unchanged upstream
controls**, including the previously failing `elab/instances.lean`. All original
source hashes match; test peak memory was 5.91 GiB with no resource event.
This uses a separately rebuilt engine and the explicit Linux stack adjustment,
not stock Bun or a package default. The complete suites remain unfinished; see
[the capacity experiment](evidence/bun-memory64-capacity-2026-09-22.json).

The v123 Node campaign is paused at **14 passes, one failure, zero resource
aborts, and 3,881 pending registrations**. The unchanged Lake `lean/test.sh`
exposes a shell argument-ordering difference: an operand before `--run` appears
as an extra application argument. All 7,267 original source and nine harness
hashes match before and after every completed test. The original failed attempt
is retained in [the 15-test checkpoint](evidence/node-broad-v123-checkpoint15-2026-09-22.json).

The v123 Node campaign's first live checkpoint records **eight passes, zero
failures or resource aborts, and 3,888 pending registrations**. The active test
is excluded from completed results. All 3,896 registrations remain selected;
3,256 names unattempted in earlier Node broad campaigns run first, without
importing any previous passes. Every completed test preserves all 7,267 source
and nine harness hashes. The parallel harness uses a 1,800-second deadline,
based on the separately verified long-lint result below; upstream sources and
internal timing assertions remain unchanged. See
[the eight-test live checkpoint](evidence/node-broad-v123-checkpoint8-2026-09-22.json).

The recorded v119 Node campaign has **14 passes, one harness timeout,
zero resource aborts, and 3,881 pending registrations**. It includes the host-platform and mixed
C-input repairs. All 3,896 registrations remain selected; previously pending
v114 names run first, and no previous passes are imported. Every source and
harness hash matched before and after each test; the largest workload peak was
5.45 GiB with no memory-limit events. The unchanged
`tests/lake/tests/builtin-lint/test.sh` reached its final lint-driver cases but
exceeded the 900-second parallel-harness deadline. Its timeout is retained as a
failure. A separate 1,800-second harness now passes that exact original test in
953.88 seconds, peaking at 5.46 GiB. All 7,267 source and nine harness hashes match,
with no OOM, limit, throttling, or swap event. The longer deadline is the only
changed timing setting, and this result is not imported into the broad count.
See [the successful longer run](evidence/node-long-lint-2026-09-22.json) and
[the 15-attempt checkpoint](evidence/node-broad-v119-checkpoint15-2026-09-22.json).
The unchanged Lake cache test passes in 694.09 seconds at a 3.86 GiB peak.
The [prior 14-attempt checkpoint](evidence/node-broad-v119-checkpoint14-2026-09-21.json)
remains intact.
The [earlier ten-pass checkpoint](evidence/node-broad-v119-checkpoint10-2026-09-21.json)
remains intact.
Its separately compiled original server driver also passes the unchanged
`server_interactive/cancellation.lean` test at 6.38 GiB, with all integrity checks
intact and no resource abort. That control is not part of the broad count; see
[the v119 driver evidence](evidence/node-v119-server-driver-2026-09-21.json).

The preceding frozen v114 Node campaign has **200 passes, zero failures or resource
aborts, and 3,696 pending registrations**. It includes the repaired ordinary-exit
path, captured SDK, and unchanged server-test driver compiled ahead of time.
All three tests that crashed in v113 pass again. Every original source and
harness artifact matched before and after each test; peak memory was 3.82 GiB,
with no OOM, hard-limit, throttling, or swap events. All 3,896 registrations remain
selected, with no passes imported from older campaigns. See
[the 200-test checkpoint](evidence/node-broad-v114-checkpoint200-2026-09-21.json).
The [earlier 100-test checkpoint](evidence/node-broad-v114-2026-09-21.json)
remains intact. The continued run ends at `elab/Miller1.lean`.
The newly compiled original server driver also passes a separate unchanged
`server_interactive/cancellation.lean` control, peaking at 6.52 GiB with all
source/harness checks intact and no resource abort or memory event. That result
is not imported into the broad campaign's counts. See
[the driver control](evidence/node-v114-server-driver-2026-09-21.json).

Earlier checkpoints on 2026-09-21: the v89 Node campaign has **153 passes,
zero failures/resource aborts, and 3,743 pending registrations**. It uses the
unchanged server-test driver compiled ahead of time, and prioritizes previously
unattempted elaboration tests. Its [separate checkpoint](evidence/node-broad-v89-2026-09-21.json)
verifies every original source and driver artifact before and after each test.
Peak memory was 3.63 GiB with no OOM, throttling, or swap events. This frozen
runtime includes the file-read state repair; subsequent console and table-growth
repairs are separate. The checkpoint ends at `elab/4064.lean`.

The older frozen v78 Node campaign has
**213 passes, zero failures/resource aborts, and 3,683 pending registrations**.
The separate v52 campaign with the compiled server driver reached **34 passes,
zero failures/resource aborts, and 3,862 pending registrations**. No earlier
passes were imported or combined across these campaigns. Deno's full
suite remains incomplete. Bun now passes **five selected server controls** with
the unchanged driver compiled ahead of time and the existing 900-second harness
deadline. A separate cancellation run also passes with the original interpreted
driver. The earlier timeout and 3,600-second experiment remain recorded; see
[the current server evidence](evidence/bun-server-current-2026-09-21.json).
These checkpoints are not
complete JavaScript-engine suite results. The sections below retain the earlier
attempts and the scope of each targeted comparison.

The [213-test Node checkpoint](evidence/node-broad-v78-2026-09-21.json) includes
every original hash check before and after each attempt. Peak workload memory
was 3.40 GiB, with no OOM, throttling, or swap events. In particular,
`elab/12676.lean` now passes in the full compiler: its ten-million-element list
calculation used 2.24 GiB. The packaged Wasm32 runtime still fails that test;
this result does not establish packaged-runtime equivalence. The campaign is
paused after `elab/1921.lean` while targeted runtime repairs are validated.

The complete registered native control suite passed **3,891 / 3,891 tests** on
Linux x64 on 2026-09-19 UTC. The clean run took 2,341.39 seconds with two CTest
workers. All **7,267 original test and documentation-example files** matched their
recorded hashes before and after execution. See the
[machine-readable evidence](evidence/full-native-2026-09-19.json).

The parallel harness supplies a 600-second deadline, source-search paths pointing
to the isolated matching Lean source tree, and an override for the release's
embedded private archive-tool path. Tests, upstream drivers, and expected-output
files are unchanged. The first run's six environment failures, the successful
six-test rerun, and the subsequent clean full run are retained separately under
`.work/full-suite-native`.

This native result establishes the reference behavior. It is **not a full-suite
pass inside Node, Deno, or Bun**. The full WebAssembly compiler now starts in all
three engines. Node also elaborates a theorem with `omega`, evaluates large
natural numbers and 64-bit `USize`, runs an ordinary main with tasks, and generates
C and serialized modules using the full compiler. An initial full Node suite
attempt was interrupted after collecting repeated defects in the superseded
build; it is not a completed suite run. Its
[partial evidence](evidence/full-node-initial-attempt-2026-09-19.json) is retained,
including a tracked `produced.out` file overwritten by an upstream Lake test
driver during that failed attempt. No upstream source or expected output was
edited to obtain a pass. The separate application
runtime checks and earlier selected runtime audit retain their original scope.

Forty-eight prerequisite executions pass (including ten shutdown stress repetitions per engine): Wasm32 threads, 64-bit values with lowered memory
accesses, asynchronous host calls from four concurrent Wasm threads, pthread stacks plus host memory writes above 2 GiB, detached-thread shutdown without spurious stderr,
side-module data/function-pointer relocation, and shared-memory growth observed by a blocked worker, each in
Node 24.13.1, Deno 2.9.7, and Bun 1.4.2. These are build prerequisites, not upstream
test-suite passes. See [the prerequisite evidence](evidence/full-engine-prerequisites-2026-09-19.json).

The repaired frozen Node build passes **6/6 unchanged upstream IO tests**:
`IO_test`, `tempfile`, `sync_shared_mutex`, `async_select_timer`,
`async_tcp_server_client`, and `async_udp_sockets`. All 7,267 original file hashes
remain unchanged for that run. See [the IO smoke evidence](evidence/full-node-io-smoke-2026-09-19.json).
This verifies the actual Lean scheduler and ordinary TCP/UDP/timer APIs in Node;
it is still only a subset. The real compiled Lake entry point now starts in all three engines. The Node
compiler and Leanc also generate and execute an ordinary Lean program through
the Wasm C toolchain without spurious runtime or compiler diagnostics. These
checks do not establish broader tool compatibility. A new complete Node run uses
frozen build `wasm64-v6`, three CTest workers, and a documented 900-second deadline.
The initial registration error in the generated harness is retained separately;
no test ran during that error.

Further full-runtime work adds DNS, system information/environment, signals, and
actual OS thread IDs. Seven focused JavaScript regression tests pass; direct host
checks cover all three engines. The unchanged DNS and system-information tests
also passed in Node build v8. These host checks are not a full Lean suite result.

The first eight-test Deno run on frozen v11 passed only system information:
seven tests failed because a blocked worker's JavaScript memory view lagged
behind shared Wasm memory growth. A debug copy recorded an 835,057,472-byte
destination against a stale 779,747,328-byte view; refreshing the memory exposed
882,638,848 bytes and allowed the original DNS test to finish. The v12 build uses
Emscripten's optional growable-buffer mode, with its fallback for engines without
that API. Full test reruns are required; the small growth probe alone also passed
with the old setting and is not a complete reproduction of the compiler failure.

The v11 FFI example compiled and linked its original C and C++ libraries, then
failed because startup library lookup missed Lake's `LD_LIBRARY_PATH`. The new
prelude honors the host library search path during early loading; the subsequent
v15 run advanced to a separate C++ ABI failure described below. The earlier `depRenaming` thread-cleanup failure did not recur in
v11, but a single rerun is not evidence that the intermittent defect is resolved.
The broader v11 Node IO/HTTP run finished at **46/49**: FFI, DNS, and HTTP early
streaming failed. The full v6 Node run remains in progress. Internal
DNS deadlines and long Lake-script harness deadlines have also failed; none is
classified as fundamental.

Upstream excludes five additional tests as flaky/nondeterministic. An opt-in
parallel harness registers their unchanged drivers separately. The first native
control passed four and failed `pkg/test_extern`: inherited shell `pipefail`
exited on its intentional failing build before its expected-output comparison.
A documented parallel wrapper lets that original comparison run; the clean
adjusted native control passed **5/5**, with all 7,267 original hashes unchanged.
See [the extra-test evidence](evidence/native-excluded-2026-09-19.json). Results from
these extra tests are separate from the standard 3,891 registrations.

The subsequent v12 Deno run passed **6/8** (DNS, timers, system information,
TCP, UDP, and shared mutexes). The memory-copy failure is absent from that run.
`IO_test` and `tempfile` instead exposed Node-compatibility differences in directory
enumeration. The host now uses asynchronous POSIX `scandir` without sorting and
copies raw filename bytes; direct native-order/invalid-UTF-8 checks pass in all
three engines, along with six other filesystem/lock regressions. Full Lean reruns
of those two files subsequently passed **2/2 in Deno and 2/2 in Bun** on v13.
The Bun v12 eight-test run also passed the other six tests. These are split
subset results, not clean full-suite passes. Broader runs also exposed HTTP timing and
completion failures; their source tests remain unchanged.

The additional v12 Node tests passed **3/5**: dedicated signal handling,
`sync_mutex`, and `user_ext` passed; channel selection exhausted the engine's
worker stack and `test_extern` timed out during dynamic loading. The v15 repair
run passed the original Lake `ltar` test and DNS; FFI advanced to a C++ exception
tag import failure, and the HTTP early-streaming deadline failed again. See
[the recorded subset results](evidence/full-runtime-subsets-2026-09-19.json).

The archive failure came from generic-allocator constructor sizes: the compactor
reserved aligned space but recorded an unaligned size in serialized headers.
The reviewed runtime patch records the actual padded extent. Supplementary
probes now pass in all three engines: network-interface records/order match
native Lean, serialized objects with small scalar fields and large naturals
survive a byte-identical `leantar` round trip, and native Lean imports those
Wasm-generated modules. See [the differential evidence](evidence/interface-compact-parity-2026-09-19.json).
An initial synthetic trace-format error and a 300-second timeout under contention
are retained as failed probe attempts; neither changed an upstream test.

The v17 Node runtime regression passed **5/8** unchanged upstream tests:
`compile/534`, `compile/wait_dedicated`, `elab/grind_11081`, the normally excluded
`elab/async_select_channel`, and `pkg/test_extern`. Restoring native task-manager
joins fixes dedicated-task shutdown. Waiting through Emscripten's futex API
instead of raw `Atomics.wait` allows its pthread mailbox to synchronize loaded
libraries even while a Lean worker awaits host IO. A minimized old-build probe
waited 1,949 ms for unrelated two-second IO; the repaired probe progresses before
that IO completes in all three engines.

Both original stack-overflow diagnostic tests then passed on Node v19. The
interpreter's `const_fold` run still exhausted its configured 16 MiB C stack;
raising only `LEAN_STACK_SIZE_KB` does not enlarge the compiler's main pthread.
The v20 build therefore makes the main reservation configurable and defaults to
64 MiB. The unchanged `const_fold` driver now passes in Node, including both AOT
and interpreted execution. Deno also needs `--v8-flags=--stack-size=61440`:
its worker option raises the OS reservation without raising V8's separate budget.
That flag makes the exact generated benchmark executable pass. Its complete
upstream rerun remains pending. Bun uses a fixed 4 MiB Linux worker stack in the
pinned source and still fails this benchmark; alternative execution/compilation
strategies have not been exhausted. None of these stack settings edits a test.

The maintained prerequisite suite now passes **54/54 executions** across all three
engines, including the concurrent host-IO/dynamic-loading reproduction and C++
exceptions thrown by a dynamically loaded library and caught by its caller.
The compiler retains the C/C++ runtime ABI, arithmetic helpers, and exception tag
for plugins loaded after startup. Optional profiling archive members are not
rooted in uninstrumented programs. See [the ABI and RPC evidence](evidence/full-engine-abi-rpc-2026-09-19.json).
The v19 original FFI run passed precompilation, but failed C++ FFI on `__multi3`
and reverse FFI on empty CMake shared-library placeholders. The v23 rerun passed
the unchanged C/C++ FFI example and `pkg/test_extern` (**2/3**). Reverse FFI now
links but fails at startup because the Wasm loader ignored its embedded `rpath`.
The executable adapter now records those paths and expands `$ORIGIN`, `${ORIGIN}`,
and macOS loader-path tokens. Linux prerequisite comparisons pass **24/24**:
six native controls and eighteen Node/Deno/Bun executions, including Unicode
paths and environment-path precedence. The unchanged original reverse-FFI driver
then passed on Node v24 in 225.10 seconds. The same two-test run still failed
HTTP streaming; all 7,267 original hashes remained unchanged.
See [the loader evidence](evidence/runtime-loader-paths-2026-09-19.json).

Application linking now retains its actual entry point and linked shared-library
imports instead of the entire compiler's export set. The unchanged `compile/534`
program produces a 1.5 MiB Wasm executable and passes its upstream driver. The
old build unnecessarily linked approximately 185 MiB into each application.

The v20 Node regression passed **8/11**. HTTP early streaming and `instances`
still fail. `pkg/test_extern` regressed because Leanc forwarded the larger main
stack setting into a side-module link; v23 explicitly uses no private side-module
stack. The v20 Deno regression passed **3/8**, with four engine-stack failures
and that same side-module link error. All 7,267 original hashes remained unchanged
in each run. The traced streaming derivative (kept separately under `.work`) still
missed early response bytes; enlarging the preinitialized worker pool alone did
not resolve it. Native `instances` used approximately 3.44 GiB RSS and passed;
the full Wasm build's memory failure remains under investigation.

Full-suite Deno and Bun campaigns on frozen v23 cover **3,896 registrations each**
(the standard 3,891 plus five explicitly identified exclusions). They use one
CTest worker per engine, a 1,800-second harness deadline, and a shared file lock
for unchanged fixed-port TCP/UDP tests. They have not completed. The earlier full
Node v6 baseline also remains in progress; fixes in later snapshots do not alter
its results retroactively.

The v24 allocator experiment passed **10/12** selected original Node tests,
including both stack diagnostics, AOT/interpreted `const_fold`, filesystem,
channel selection, and dedicated-task shutdown. Replacing the system allocator
with the SDK's mimalloc did not fix `instances`. Forcing only two Lean compiler
workers also regressed the HTTP test: all 22 cases timed out. A native control
with `-j2` likewise fails 21 cases, whereas the unchanged file passes with both
`-j4` and `-j8`. New facades therefore use four workers and explicit ordinary
`-j`/`-s` shell options; later user options retain precedence. The next compiler
build also preinitializes eight pthread workers. These are harness resource
settings, not test edits or evidence of a fundamental scheduling difference.

The six packaged application integration tests passed again in all three engines,
this time using the bundled JavaScript optimizer (**6/6**, 1,416.46 seconds).
They cover source launchers, Unicode/empty arguments, filesystem round trips,
tasks/errors, warm caches, concurrent HTTP persistence, binary bodies, streaming,
and shutdown. This remains a separate application-runtime result.

The v25 native-memory64 experiment failed both selected original Node tests:
HTTP passed its first 21 cases but timed out on early streaming; `instances`
stalled until the 1,800-second harness deadline. Its original-source hashes were
unchanged. A minimized reproduction isolated the latter stall to the host bridge:
Node 24.13.1 truncates a cloned shared typed array's byte offset above 4 GiB.
An independent `structuredClone` control reproduces this without Lean or
Emscripten; Deno 2.9.7 preserves the same offset correctly. Sending the numeric
offset and reconstructing the view in the receiving
thread repairs the bridge. Synchronous requests, response copies, and asynchronous
completion from several threads pass **5/5** checks: above 2 GiB in all three
engines, and above 4 GiB in Node and Deno. The original `instances` rerun passed
in Node in **190.81 seconds**, with all 7,267 original hashes unchanged. This
uses a separate, recorded JavaScript-only derivative of frozen v25; the Wasm
compiler bytes are identical. Deno's corresponding rerun also passed
(199.27 seconds), with all original hashes unchanged.
The **54/54** ABI/thread/dynamic-loading prerequisite checks also pass after this
bridge repair; earlier and repaired runs are both retained.
See [the host-memory evidence](evidence/host-rpc-highmemory-2026-09-19.json).

The lower-memory Lean allocator experiment also exposed a build-cache defect:
upstream `leanmake` did not rebuild generated C after changing the runtime headers.
The build now tracks those headers and compiler inputs as an explicit prerequisite.
A regression using the actual generated make rules verifies both rebuilding after
a header change and retaining the cached object when inputs are unchanged.
The full allocator rebuild completed, including 2,432 generated C objects, and
its Node version smoke test passed. Frozen v26's allocator behavior still needs
the targeted memory and serialization checks. See
[the cache evidence](evidence/build-cache-2026-09-19.json).

Bun's uncaught pthread stack errors lose their Wasm frames during error transfer.
The prelude now preserves Lean's stack-overflow diagnostic for that failure path.
A deliberate recursion probe exits with the exact native diagnostic and status
in **3/3 engines**; the original Bun stack tests still need rerunning. See
[the diagnostic evidence](evidence/stack-diagnostics-2026-09-19.json).

The v27 unchanged HTTP rerun still fails case 22's early-streaming window. A
parallel derivative multiplies every millisecond interval by ten, including the
producer delay, consumer polling interval, connection timeouts, and watchdog
polling cadence. All request/response bytes, functional assertions, polling
counts, and relative timing ratios are unchanged; its 36 changed lines and input
hash are recorded. That derivative passes all 22 cases in native Lean and Node.
Deno still fails the early-streaming case; the separate Linux stack-adjusted Bun
run times out on cases 1 and 18. A factor-50 native control passes; its engine
comparisons are pending. These runs overlapped other work before resource
isolation was added, so fresh low-contention comparisons remain necessary.
It is **not** counted as a pass of the original timing-sensitive file, and does
not establish that every HTTP scheduling difference is resolved. See
[the timing evidence](evidence/http-scaled-timing-2026-09-19.json).

The old full Node v6 and Deno/Bun v23 runs were interrupted by desktop OOM
failures. Earlier references to them being in progress are historical; they are
not still running and have no complete result. The Deno/Bun trees retain all
7,267 original hashes. Node retains 7,266; its Lake `kinds` driver overwrote the
original `dynlib\n` scratch output with an empty file. That alteration is
recorded and preserved, not silently repaired. New runs use one workload at a time,
one CTest job, and the proactive resource guard. Resource-aborted runs are
reported separately from Lean failures. See [the diagnosis](RESOURCE_FAILURES.md)
and [the recorded partial results](evidence/resource-protection-2026-09-19.json).

The first guarded v26 `instances` retry stopped at the proactive memory budget;
it is not a conformance result. A separate eight-worker derivative retained the
same Wasm bytes and completed the original test at **5.55 GiB** peak, but failed
with an unexpected `_private` module lookup. Both attempts preserved all original
test hashes. The reduced-worker native-allocator build then passed **17/17**
primitive/control executions across native Lean, Node, Deno, and Bun: interface
enumeration, small scalar fields, large naturals, archive round trips, and native
imports of Wasm-produced modules. Its guarded sequence peaked at **6.46 GiB**;
no OOM, swap, or memory-throttling event occurred. These checks narrow the
allocator investigation but do not establish full compatibility. See
[the allocator and resource evidence](evidence/reduced-worker-allocator-2026-09-20.json).

Two bounded engine investigations narrow the remaining memory/stack work:

- The unchanged generated `const_fold` executable passes in Bun when a Linux-only
  diagnostic helper reserves 64 MiB OS worker stacks **and** JSC's stack budget
  is raised. Stock Bun, a 3 MiB JSC-only setting, and an OS-reservation-only setting
  fail. The helper is not installed globally or used in the stock full-suite run;
  portable integration remains open. See [the stack evidence](evidence/bun-stack-isolation-2026-09-19.json).
- Native Wasm memory64 supports sparse pthread stacks and host access above
  4 GiB in Node and Deno. Stock Bun disables that feature. Enabling its experimental
  flag exposes a worker-transfer defect: the shared memory loses its 64-bit
  address type. A separate 64 KiB reproduction with no Lean or Emscripten passes
  in Node and Deno; in Bun, fresh worker memory works and cloned memory fails.
  This does not establish a fundamental limit. See [the memory64 evidence](evidence/native-memory64-2026-09-19.json).

Inspection of the pinned Bun 1.4.2 source confirms that its worker-message
deserializer recreates shared Wasm memory with a fixed 32-bit address type.
That matches the small reproduction's failure and identifies an engine
implementation gap in the experimental Memory64/pthreads path. See the
[pinned source](https://github.com/oven-sh/bun/blob/744846f844374847c902b5e7fd59b4342a51ef99/src/jsc/bindings/webcore/SerializedScriptValue.cpp#L3807-L3820)
and [source identity](evidence/bun-memory64-source-2026-09-21.json).

The native-allocator capacity comparison now isolates an unchecked allocation:
the same native-memory64 Wasm passes `instances` with an 8 GiB guest limit and
fails with a 4 GiB limit. The module reader used a null `malloc` result as a file
destination, corrupting Wasm address zero. The runtime patch checks that buffer
and the compactor's initial/growing allocations, including capacity overflow.
The checked 4 GiB build now reports `INTERNAL PANIC: out of memory`; this is still
an upstream test failure. The checked native-memory64 8 GiB build passes the
unchanged test in **50.41 seconds**. All four capacity/comparison runs preserve
all 7,267 upstream hashes and record zero host OOM or throttling events. The
largest guarded run, including suite preparation, peaked at **7.16 GiB**. See
[the allocation evidence](evidence/region-allocation-2026-09-20.json). This fixes
one corrupting failure path; it does not establish complete low-memory handling
or remove the lowered-memory64 address-space ceiling.

The checked native-allocator build then passed **11/11** selected unchanged Node
regressions: filesystem, TCP/UDP, timers, network interfaces, HTTP hang/streaming
checks, and four previous stack failures. The complete HTTP file passed in
19.81 seconds, including the previously failing early-streaming case. Peak host
memory was 3.24 GiB. Deno passed **11/12**, including `instances`, but still failed
HTTP early streaming; its run including suite preparation peaked at 7.10 GiB.
Both runs preserved all upstream hashes with zero OOM or throttling events.
These are subset results and one successful Node timing run, not proof of timing
stability or full engine parity. See [the guarded regressions](evidence/guarded-runtime-regressions-2026-09-20.json).

The corresponding Bun campaign passed **11/11**, each test in its own guarded
process tree. This uses lowered memory64 with a 4 GiB guest limit and the explicit
Linux stack adjustment; it is **not a stock Bun result**. Its original HTTP file
passed in 76.60 seconds, including early streaming. All 7,267 hashes stayed
unchanged in each test; peak host usage was 4.05 GiB, with no resource aborts,
OOM, or throttling. The run also exercised the checkpointed supervisor on actual
upstream tests. Bun's native-memory64 transfer defect and portable stack
integration remain open.

A quiet Deno timing comparison subsequently passed **2/3** repetitions of the
original HTTP file; the remaining run again missed only case 22's early window.
Native Lean passed the original control. The factor-10 parallel derivative
passed in both native Lean and Deno, retaining all 22 functional cases and all
relative timing ratios. Peak memory was 3.10 GiB with no OOM or throttling.
This demonstrates intermittent timing sensitivity; it does not establish a
fundamental scheduler limitation or count the derivative as an unchanged-suite
pass. See [the repeated timing evidence](evidence/http-timing-deno-2026-09-20.json)
and `scripts/full-lean/probe-http-timing.mjs` for reproduction.

The fresh 3,896-registration Node campaign stopped near its beginning: the
`deps` and `ffi` Lake examples hit the proactive aggregate memory budget, and
the next launch exposed a transient-unit cleanup race. These are **two resource
aborts and one harness launch failure**, with no Lean conformance result from
those three attempts. All original hashes remained intact and no host OOM
occurred. Guard cleanup is repaired; a separate worker-pool comparison is in
progress. See [the budget evidence](evidence/lake-memory-budget-2026-09-20.json).

The five-worker preinitialization change alone still resource-aborted `deps` and
`ffi`; `hello` passed. Adding an explicit one-thread Lake default then passed
**3/3** native controls and **3/3** unchanged Node examples. Node peaks were
4.98–5.51 GiB, with all original hashes intact and no OOM/throttling events.
Only Lake and its inheriting children use this ordinary environment setting;
direct Lean tests retain four workers. The 3,896-registration Node campaign is
continuing on this recorded resource configuration. Its first three passes are
retained in the same campaign, with the expanded registration selection recorded
in history. This is not yet a completed full-suite result.

A supplementary ordinary-Lean FIFO fixture exposed a full-runtime finalizer
deadlock: native Lean passed, while the frozen Node host and full compiler timed
out. File finalization now waits for asynchronous C `fclose` through the existing
host RPC, allowing another Lean thread's delayed reader to run. The unchanged
fixture then passed in Node, Deno, and Linux stack-adjusted Bun. Seventeen related
host/application checks passed. The first Bun attempt's 60-second deadline was
insufficient; its retained retry passed in 71 seconds with a 180-second external
deadline. These are additional differential checks, not upstream-suite passes;
the packaged cooperative path was addressed separately afterward. See
[the original and fixed comparisons](evidence/fifo-finalizer-2026-09-20.json).
The unchanged upstream `file_read_overflow`, `IO_test`, and `tempfile` tests then
passed in each fixed engine: **9/9** executions, all 7,267 source hashes intact
before and after each run. Their shared guarded process tree peaked at 5.19 GiB
including preparation, with no OOM, throttling, or swap use.

The earlier v34 campaign retained ten unchanged Lake passes before a controlled
interruption. A fresh 3,896-registration Node campaign now uses the frozen v35
finalizer fix and the same one-thread Lake/five-worker-pool configuration. Its
results are separate from v34; earlier passes are not transferred across changed
runtime hashes.

A subsequent private host change recycles resource/request IDs before they
cross the signed i32 import boundary, retaining occupied handles. Seven focused
tests passed, using only three slots near the real boundary rather than billions
of allocations. This later change is not present in the frozen v35 campaign;
see [the separate handle-ID evidence](evidence/handle-ids-2026-09-20.json).

A sequential Bun startup diagnostic passed its native control and four smoke
runs. The engine already enables IPInt by default; explicitly enabling it repeats
the baseline settings. Reducing Wasm compiler threads from eleven to two also
left startup at roughly 70 seconds. No tested setting was adopted. The combined
run peaked at 3.24 GiB with no swap, OOM, or throttling, but does not measure
per-variant peaks or establish full conformance. See
[the startup comparison](evidence/bun-startup-2026-09-20.json).

A separate filesystem comparison found a shared-worker-pool deadlock: four
blocking reads could prevent their dependent writes from starting in the Node
and Bun host adapters. Native Lean and Deno completed the same small control.
The first full-Lean fixture lacked a task-readiness barrier and passed on the
old runtime; those results are retained. Adding ordinary `IO.Promise` readiness
barriers exposed the old full Node runtime's timeout while native Lean passed.

Blocking file operations now lease independent host workers, with at most two
idle workers retained briefly. The synchronized ordinary-Lean fixture passes
in full Node, Deno, and Linux stack-adjusted Bun, and all three still pass the
buffered-finalizer regression. Nineteen host/application checks and a separate
open-handle lifetime check passed. The full differential run peaked at 3.38 GiB
with no OOM, throttling, or swap use. Frozen v36 contains these host changes and
the handle-ID fix while preserving the exact v35 Wasm and embedded dispatch.
The paused v35 campaign remains a separate older-runtime result. See
[the retained comparisons](evidence/fifo-workers-2026-09-20.json).
The unchanged `file_read_overflow`, `IO_test`, and `tempfile` registrations also
pass on v36 in each engine: **9/9**, with all 7,267 original hashes intact. Their
combined preparation/run peaked at 5.56 GiB with zero OOM, throttling, or swap.

The memory guard's initial CPU-priority setting caused an independent harness
failure in `async_systems_info`: native Lean itself could not change priority
from 5 to 3 without elevated privileges. Preserving normal priority fixes that
control and the unchanged test passes in v36 Node, Deno, and Linux stack-adjusted
Bun (**3/3**). All 7,267 source hashes remained intact. The memory cap and stop
thresholds are unchanged; the engine comparison peaked at 3.44 GiB with no OOM,
throttling, or swap. See [the priority evidence](evidence/guard-priority-2026-09-20.json).

The packaged application path now finalizes buffered files asynchronously as
well. Its original FIFO regression timed out in stock Node, Deno, and Bun.
Adding a suspending finalizer exposed a separate scheduler defect: rewind reset
the C stack to its empty top instead of preserving the live frames' stack
pointer. The subsequent allocator call overwrote Lean's reference-count cleanup
list. Saving and restoring the suspended pointer fixes the trap. Task-local
stream destruction now runs as its own resumable entry and detaches its stream
references before yielding.

Freshly built applications pass both the dropped-handle and task-local stdout
fixtures in all three stock engines on Linux x64, matching both native controls
(**6/6 application executions**). The combined build/comparison peaked at
0.41 GiB with no OOM, throttling, or swap use. These are additional differential
regressions, not new upstream-suite passes or proof of fatal-teardown parity.
See [the retained failures and fixed comparisons](evidence/cooperative-finalizers-2026-09-21.json).

A follow-up Bun startup comparison found no improvement from disabling both
Wasm JIT tiers (80 seconds versus the 72-second control). Reducing prestarted
workers from eight to five, without changing Wasm bytes, completed the same
smoke in 46 seconds. This is a single comparison, not a benchmark distribution.
The separately frozen five-worker facade then passed the unchanged
`compile/wait_dedicated`, `elab/async_select_timer`, and
`elab/async_tcp_server_client` registrations (**3/3**). All 7,267 original hashes
remained intact. The regression sequence peaked at 4.10 GiB, with zero OOM,
throttling, or swap. This still uses the explicit Linux Bun stack adjustment;
native Memory64 worker cloning and stock-engine stack limits remain open.
See [the startup and regression evidence](evidence/bun-pool5-2026-09-21.json).

The broader follow-up rejected five workers as the general Bun configuration.
The unchanged `async_http_hang_regressions` registration timed out in all 22
cases on an isolated five-worker run (7.07 GiB peak). A preceding combined run
had stopped at the proactive memory budget, so that attempt remains a separate
resource abort. Restoring eight prestarted workers, with the exact same Wasm
and host files, passed the original registration in 76.82 seconds at a 4.78 GiB
combined preparation/test peak. The test uses Lean's in-memory mock transport;
it does not exercise the new TCP descriptor path. This comparison establishes
the worker-pool configuration difference; it is not evidence of full scheduler
conformance or a diagnosis of every internal timing mechanism. No OOM,
throttling, or swap use occurred in any of these runs.
See [the retained HTTP controls](evidence/bun-pool-http-2026-09-21.json).

The TCP host now binds a real POSIX socket immediately and preserves its
descriptor through listening or connecting. A new ordinary-Lean fixture matches
native output in the packaged Node/Deno/Bun applications and the full compiler
facades on Linux x64. It covers queries before listening, ephemeral ports,
deferred address-in-use errors, keepalive, repeated listen calls, bound clients,
readiness checks, small reads, and replies after half-close. The same application
Wasm fails with the previous host module in all three engines. Deno's imported
streams require an explicit read restart; Bun's descriptor-import path requires
waiting for its connect event. Both adaptations stay inside the private host.

The unchanged `async_tcp_fname_errors`, `async_tcp_half`,
`async_tcp_server_client`, and `async_http_hang_regressions` registrations pass
in all three engines (**12/12 executions**), with all 7,267 original source hashes
intact. Node/Deno use frozen v38; Bun uses v39 with the restored eight-worker
configuration and explicit Linux stack adjustment. Repeated host checks also
release 100 bound/failed-bind sockets and ten client/server pairs per engine
without OS descriptor growth. Fresh application and full-runtime comparisons
peaked at 3.00–3.11 GiB; the separate Bun HTTP control peaked at 4.78 GiB.
The earlier resource abort and five-worker failure remain recorded above.

Windows still uses deferred binding, and the POSIX implementation requires
native macOS validation. The latest Deno HTTP pass does not establish that the
older intermittent early-streaming deadline issue is eliminated. See
[the binding evidence and retained failures](evidence/tcp-binding-2026-09-21.json).

The prioritized v38 Node campaign passed its first nine registrations, including
the three HTTP fuzz files, cancellation, DNS, socket selection, and timers. It
then reached the proactive memory budget in three language-server cancellation
tests. These are resource aborts, not Lean failures. The campaign is checkpointed
with 3,884 registrations still pending; those old results are not transferred
to a changed runtime.

A loader investigation found an eager scan of all 261,062 initial Wasm function
slots in every JavaScript worker. Initializing known exported addresses from
verified binary metadata avoids that scan while preserving a fallback for
unknown functions and handling JavaScript imports, aliases, and loaded libraries.
The compiler probe's peak fell from 3.77 to 3.09 GiB with the exact same Wasm.
The first derivative retained a console-import fallback and saved little memory;
that attempt remains recorded. A V8 size-tuning comparison saved less memory and
was not adopted.

The corrected diagnostic derivative passes all three unchanged server tests
(`cancellation`, `cancellation_empty_by`, and `cancellation_par`) with the original
four Lean workers at 7.18–7.37 GiB per guarded process tree. All 7,267 original
hashes remain intact. Five focused lookup controls and all 54 existing ABI,
threading, dynamic-loading, and exception checks also pass across Node, Deno,
and Bun. The maintained implementation is now frozen as v46 for Node/Deno and
v47 for Bun. Both Deno and Bun pass all four original dedicated-task, filesystem,
HTTP, and TCP regressions on these final snapshots. Bun's full-compiler startup
also passes its native comparison, but remains slow. Broader upstream validation
is continuing. No memory cap was raised, and these comparisons recorded no OOM,
throttling, or swap use. See
[the full comparisons](evidence/function-table-index-2026-09-21.json).

The v46 Node campaign subsequently passed 25 unchanged registrations, including
all four cancellation tests, hover, code actions, and the first completion tests.
It is checkpointed with 3,871 pending, zero test failures, and zero resource
aborts. Its largest process tree reached 7.97 GiB; all 7,267 source hashes stayed
intact and no OOM or throttling occurred. These results belong to that snapshot.

Supplementary process comparisons exposed three host differences: killing a
reaped child silently succeeded, empty-group errors used a signed libuv code
instead of native errno, and a dropped child kept the JavaScript host alive.
The private adapter now preserves the native errors and releases the child's
event-loop reference without terminating it. A live process group can still be
killed after its leader has been reaped. Ordinary Lean fixtures match the native
control in all three packaged engines and all three full compilers; ten related
application/host tests pass. The full snapshots are v48 for Node/Deno and v49 for
Bun, with unchanged Wasm bytes. The unchanged upstream process, environment, and
parallel-cancellation regressions pass 3/3 in Node and 3/3 in Deno. Bun passes
the first two; its parallel-cancellation test stops safely at the 8.13 GiB
process-tree peak before producing a conformance result. All original hashes
remain intact, with no OOM, throttling, or swap use. Broader upstream validation
and Bun server-memory work remain in progress; see
[the retained comparisons](evidence/process-lifetime-2026-09-21.json).

A separate ordinary Lean comparison caught child working-directory paths being
normalized before the OS could follow a symlink and subsequent `..`. Preserving
those components fixes Node and Bun; Deno additionally needs the physical path
because its process launcher normalizes cwd again. Native Lean, all three stock
packaged engines, and all three full compilers now pass absolute and relative
cwd controls. The full comparison peaked at 2.43 GiB with no resource abort,
OOM, throttling, or swap. Its snapshots are v52 for Node/Deno and v53 for Bun,
with unchanged Wasm. These are supplemental Linux path checks, not full-suite
passes or proof of spawn-error/race parity; see
[the before/after evidence](evidence/process-cwd-2026-09-21.json).

The Bun memory follow-ups do not close its cancellation gate. Six prestarted
workers pass the dedicated-task test but fail the early-streaming HTTP assertion
and safely resource-abort cancellation at 8.06 GiB. Eight workers with opt-in
lower-memory GC pass HTTP but also resource-abort cancellation at 8.06 GiB.
Wasm, host, four actual Lean workers, and test bytes are unchanged in these
comparisons. Neither configuration raises a cap or produces an OOM, and no
resource abort is counted as a Lean test failure or a fundamental limitation.
See [the Bun resource evidence](evidence/bun-gc-2026-09-21.json).

An additional three-Lean-worker/six-Bun-worker comparison passed HTTP but
resource-aborted parallel cancellation at 8.09 GiB. Native controls passed both
with three workers. The numeric trace also found no full function-table scans
in the earlier eight-worker attempt. These are retained diagnostics, not a
solution or a fundamental-limit claim; see
[the three-worker comparison](evidence/bun-three-workers-2026-09-21.json) and
[the numeric trace](evidence/bun-memory-trace-2026-09-21.json).

Another ordinary Lean fixture exposed incorrect `IO.Process.setCurrentDir`
error numbers/messages and missing search-permission validation for virtual
working directories. Native Linux and all three packaged and full compiler
engines now match exactly on seven path/error cases. The application run peaked
at 0.41 GiB and the full comparison at 2.46 GiB, with no OOM, throttling, or swap.
Full snapshots v55/v56 preserve the previous Wasm bytes. Cwd rename/removal,
embedded-NUL behavior, and non-Linux validation remain open; see
[the before/after comparison](evidence/cwd-errors-2026-09-21.json).
The independently checkpointed v52 Node campaign continues on its original
snapshot; these focused new passes are not imported into that campaign.

That original-driver campaign is now checkpointed at **27 passes, one resource
abort, and 3,868 pending registrations**. `docstringLinksExamples` reached the
8.01 GiB proactive budget. An optional parallel harness compiles the unchanged
two-line `run_test.lean` driver ahead of time in the selected engine. Only its
exact invocation is replaced; the full server/compiler children and all original
tests and expected outputs remain unchanged. This preparation reduces the
driver's interpretation overhead without changing the memory limits.

The five original cancellation/documentation/hover controls pass **5/5 in native
Lean and 5/5 in Node**, with Node peaks of 6.20–7.31 GiB. Deno passes the two
selected parallel-cancellation/documentation controls at 6.87–7.26 GiB. Bun's
first cancellation control instead reaches the unchanged 900-second deadline
at 6.56 GiB; four controls remain pending. This is a timeout, not a resource
abort or a pass. Its repeated file-worker startup remains slow.

The maintained opt-in builder records source, toolchain, and executable hashes.
The suite checks driver artifacts before and after every registration; three
small private controls confirm that unchanged inputs pass and drift before or
during execution stops as a harness failure. All 7,267 upstream source hashes
remain intact in the completed Lean controls. A fresh 3,896-registration Node
campaign now uses this separate harness and imports no earlier passes. Neither
the subset results nor this harness change closes the original-driver resource
gap or establishes complete conformance. See
[the configurations and retained outcomes](evidence/compiled-server-driver-2026-09-21.json).

Supplementary process comparisons found that the host reported POSIX exec/chdir
failures to the parent, while native Lean returns a real child that prints a
diagnostic and exits 255. A private same-engine launcher now calls libc `execvp`
and is replaced by the requested executable. It preserves the PID, raw cwd,
PATH search, executable-text fallback, and literal environment values without
adding Lean APIs or an installation-time compiler requirement.

The expanded ordinary Lean fixture matches native Linux in all three packaged
engines and all three full compilers. It includes ten child-error cases,
environment keys such as `__proto__`, and an absolute child cwd after removal of
the parent's directory. That last case exposed separate Node/Deno worker-startup
failures. Private worker bootstrap handling now preserves the OS cwd and permits
file operations there. The full compiler must additionally retain Deno's native
Web Worker before Emscripten installs its pthread constructor. The final full
comparison peaked at 2.48 GiB, with zero OOM, throttling, or swap.

Eleven native-file checks pass, including four blocked FIFO readers followed by
their dependent writes after cwd removal in each engine. The larger process
comparison also matches native behavior for stdin EOF, simultaneous 1 MiB output
pipes, and process-group termination. Earlier lifecycle controls remain recorded.
The first unchanged upstream `Process` rerun caught a further launcher regression:
Node startup set stderr nonblocking, truncating a raw shell write at 65,536 bytes.
The host now saves each standard descriptor's status flags before launching and
restores them before `exec`. The expanded supplementary fixture also retains
that raw-shell regression; the earlier 1 MiB check used a Node child whose own
stream implementation handled nonblocking writes and did not expose this defect.
After the correction, the unchanged `elab/Process.lean`,
`elab/emptyEnvVar.lean`, and `compile/wait_dedicated.lean` registrations pass
in each engine: 9/9 runs, with all 7,267 original file hashes unchanged before
and after every run. Their largest observed peak was 4.74 GiB, with zero OOM,
throttling, or swap.
One mixed-fixture diagnostic was excluded: the source was expanded while Bun
was starting. The maintained full probe now executes and verifies an immutable
copy. The actual worker failures and their passing reruns are retained separately.
Unflushed fork-buffer duplication, concurrent cwd changes, and native non-Linux
validation remain open. The launcher adds startup overhead; these comparisons
do not establish complete process or full-suite conformance. See
[the retained process and worker evidence](evidence/process-spawn-2026-09-21.json).

A separate ordinary Lean fixture verifies embedded-NUL behavior. The native
runtime passes POSIX process strings and `setCurrentDir` directly to C interfaces,
returns `none` for NUL-containing `getEnv` names, and rejects NULs in filesystem
paths. Lasm had rejected process strings too and Node truncated environment
lookup names. The private host now preserves these API-specific behaviors.
Sixteen comparisons match native Lean in Node, Deno, and Bun full compilers,
including environment key collisions/removal and structured directory errors.
Filesystem read, metadata, and both rename-operand controls retain their errors
and leave the sentinel contents unchanged. This final full comparison peaked
at 2.70 GiB with zero OOM, throttling, or swap. The same immutable fixture was
used for the retained failing baseline and passing rerun; no upstream test was
changed. Twelve packaged checks also pass across the three engines: the new
fixture plus the existing cwd-error and spawn comparisons. The separate v52
Node campaign is checkpointed at 31 passes, zero failures/resource aborts, and
3,865 pending registrations. Native non-Linux validation and other string-boundary cases remain
open. See [the NUL evidence](evidence/process-nul-2026-09-21.json).

The separate longer-deadline Bun experiment passed the unchanged
`server_interactive/cancellation.lean` control in **2,173.8 seconds**. The produced
output matches the original expected output byte for byte. All 7,267 original
source hashes and all nine compiled-driver artifact hashes remained intact
before and after the run. Peak process-tree memory was **6.94 GiB**, with zero
OOM, memory-throttling, cap-hit, or swap counters. The runtime, driver, worker
counts, stack adjustment, and memory limits are the same as in the original
900-second timeout; the maintained harness additionally checks driver integrity.

Read-only process samples identified repeated serial file-worker and Lake
`setup-file` compiler startup. An intermediate 1,800-second diagnostic was
deliberately interrupted after observing that additional cost; it is neither a
completed test nor a timeout or resource abort. Its partial output and resource
record remain separate. The new 3,600-second campaign checkpoint contains one
pass and four pending controls. This establishes the cancellation result under
the disclosed parallel harness, while the startup-performance problem, original
interpreted-driver resource gap, and full-suite gates remain open. See
[the deadline comparison](evidence/bun-server-deadline-2026-09-21.json).

Linux working directories now retain their directory identity across rename and
removal. Relative filesystem operations and child processes use that identity,
and in-flight operations keep their own directory lease across later changes.
The same twelve-control ordinary Lean fixture failed in all three engines before
this correction and now matches native Lean in all three full compilers. Seven
direct host checks and 36 packaged regressions pass, including disposal, pending
FIFO operations, instance isolation, and descriptor cleanup. The pinned native
`IO.Process.getCurrentDir` crashes after directory removal; Lasm deliberately
returns structured ENOENT instead. `IO.currentDir` retains the native user error.

The selected unchanged upstream registrations (`IO_test`, `Process`, `tempfile`,
and `async_http_hang_regressions`) pass 4/4 in Node, 4/4 in Bun, and 3/4 in Deno.
Deno reproduced the existing case-22 early-streaming timing failure; that result
is retained and remains unresolved. All 7,267 original file hashes stayed intact.
The successful focused full comparison peaked at 2.54 GiB; the selected upstream
runs peaked at 4.75 GiB, without OOM, throttling, or swap. Two linker attempts were
proactively aborted for memory pressure, separately from test failures. A
process-local base-page linker run completed under the same guard at 6.95 GiB;
the allocation controls and build receipts are retained. Non-Linux directory
identity, permission-change races, and broader suite conformance remain open.
See [the cwd comparison and resource evidence](evidence/cwd-tracking-2026-09-21.json).

The supplementary `Handle.truncate` comparison exposed a smaller filesystem
error discrepancy in all three engines: Lasm returned the position query's
ESPIPE error for pipes, whereas native Lean proceeds to `ftruncate` and returns
EINVAL. Preserving the native call sequence fixes both pipe directions while
retaining the read-only-file error and buffered read-cursor behavior. The same
immutable fixture now matches native Lean in all three full compilers; 15
packaged and native file-handle checks also pass. Both the failing baseline and
passing comparison remain recorded. Peak memory stayed below 2.56 GiB, with no
OOM, throttling, or swap. This is Linux evidence, not cross-platform or complete
filesystem conformance. See [the truncate comparison](evidence/truncate-errors-2026-09-21.json).

The HTTP timing investigation identified a concrete loader bottleneck. Diagnostic
traces showed all workers ready before case 22; typical main-thread host-handler
work took fractions of a millisecond, excluding transport and wakeup time. CPU
profile samples instead repeatedly landed in `dlsym` export enumeration during
module initialization and interpreter symbol lookup. Emscripten built and scanned
the full name list even for missing symbols. The repair retains own/enumerable
membership, stub handling, data values, and function behavior, and computes the
enumeration index only when registering a new shared-table function. It does not
cache misses or change any timers.

With unchanged Wasm bytes and the corrected loader, the original HTTP regression
passed **3/3 repetitions in each of Node, Deno, and Bun**. Node took 10.15–10.31
seconds, Deno 10.39–10.65, and Bun 73.61–74.18; these are whole-file runtimes.
The native control passed too. Nine focused loader controls pass, including
export mutations and worker synchronization indexes. The maintained SDK patch
also passes a native C control and five Node/Deno/Bun Wasm controls that exchange
newly resolved function pointers between already-running threads. The first bare
Emscripten attempt omitted Lasm's existing Bun worker bridge and timed out; its
result remains separate from the passing normal-bootstrap configuration.

The repeated HTTP run peaked at 2.37 GiB, and SDK/suite preparation at 2.20 GiB,
with zero OOM, throttling, or swap. Diagnostic instrumentation and profiling
results remain separate from ordinary original-source passes. The broad frozen
v52 Node campaign independently reached 34 passes, zero failures/resource aborts,
and 3,862 pending registrations. Full-suite and broader IO conformance remain
open. See [the loader profile, repair, and controls](evidence/symbol-lookup-2026-09-21.json).

The repaired loader also passes **12/12 selected unchanged upstream registrations**:
reverse FFI, the HTTP hang regressions, timer selection, and module initialization
in each of Node, Deno, and Bun. Every run verified all 7,267 original file hashes
before and after execution; none changed. The largest process-tree peak was
4.26 GiB, with zero OOM, throttling, cap-hit, or swap events. These are focused
regressions, separate from the broad campaign and its pending registrations.
See [the upstream loader regression evidence](evidence/symbol-lookup-upstream-2026-09-21.json).

A supplementary permission comparison exposed a child-launcher discrepancy:
native Lean inherits its cwd after search permission is revoked, while the old
launcher tried to enter it again and failed. Directory identity checks now avoid
that extra entry. Deno uses libc's spawn operation for this case and acknowledges
the private launcher's exec handoff before a dropped child lets the parent exit.
The ordinary Lean fixture now matches native in all three full compilers.
Standalone packaged mains and source launchers propagate cwd changes too, while
embedded module instances retain separate directories by default.

All 31 packaged regressions pass, including six built/source-launcher checks and
the unchanged existing process error/lifetime tests. Seventeen direct host checks
pass; one additional deleted-and-revoked Deno case remains an executing failing
TODO. The initial fixture preparation error and intermediate dropped-child
failures are retained separately. These runs peaked at 2.21 GiB without OOM,
throttling, cap hits, or swap. The broader v78 Node campaign independently reached
56 passes and 3,840 pending registrations, with all 7,267 original hashes intact
on every completed run and a 3.37 GiB maximum peak. Embedded virtual cwd
permission inheritance, non-Linux behavior, and complete suites remain open. See
[the permission and lifecycle evidence](evidence/cwd-permissions-2026-09-21.json).

The new frozen hosts also pass **12/12 unchanged upstream regressions**:
`IO_test`, `Process`, `async_http_hang_regressions`, and `tempfile` in each engine.
All 7,267 original hashes remained intact before and after every registration.
The largest process-tree peak was 3.76 GiB, without OOM, throttling, cap hits,
or swap. See [the upstream cwd regression evidence](evidence/cwd-permissions-upstream-2026-09-21.json).

The remaining deleted-and-revoked Deno cwd failure is now repaired. A small
bundled native Linux launcher avoids Deno CLI bootstrap and preserves the real
child PID, environment, pipes, exec errors, and inherited directory. A new
ordinary-Lean fixture also exposed fresh pthread bootstrap failures after cwd
deletion in Node and Deno. Node preloads its private worker cwd fallback. Deno
uses a private factory with its own Linux filesystem context when a new worker
cannot start from the removed application directory; the application's directory
is never changed for this operation.

Both named- and deleted-directory fixtures now match native Lean in all three
full compilers. A clean serial run passes **48/48 packaged and host tests**, and
five worker transport/lifecycle checks also pass. The tests preserve shared
memory, transferred ports, nested exceptions, and each engine's native worker
diagnostics. Initial fixture errors, proxy error-field loss, and three
source-launcher timeouts caused by concurrent maintainer edits are retained;
the clean rerun kept sources fixed and used the same deadlines. No upstream test
or expected output changed. Validation peaked at 2.19 GiB including suite
preparation, with zero OOM, cap, throttling, or swap events. See
[the native-launcher and worker evidence](evidence/native-launcher-cwd-2026-09-21.json).

Linux x64 launcher behavior is executed locally, including startup/protocol checks
of the static musl executable. ARM64 variants are cross-compiled only; complete
musl-host and non-Linux conformance remain unverified. The Deno worker fallback
also needs `unshare(CLONE_FS)` and remains unavailable where a sandbox denies it.
Independent virtual-cwd permission inheritance and the complete upstream suites
remain open. The repaired frozen Node/Deno build is v86 and Bun is v88; neither
result is imported into the older v78 broad campaign.

The repaired hosts pass **24/24 selected unchanged upstream registrations**:
both stack-overflow diagnostics, dedicated-worker shutdown, the ten-million-element
list calculation, `IO_test`, `Process`, HTTP hang regressions, and `tempfile` in
each of Node, Deno, and Bun. Both compiled and interpreted paths ran where the
original driver requests them. All 7,267 original file hashes remained intact
before and after each registration. Peak workload memory was **3.78 GiB**, with
zero OOM, throttling, cap-hit, or swap events. Bun retains the disclosed Linux
stack adjustment. This focused result does not close the complete-suite or
packaged-runtime gates. See [the upstream regression evidence](evidence/native-launcher-upstream-2026-09-21.json).

Supplementary filesystem comparisons exposed further stream-state defects in
all three engines. A final unterminated `Handle.getLine` left EOF set, hiding
appended data on the next read. The optimized reader also mishandled partial
errors and consumed different bytes when a previous error remained set. Finally,
`Handle.read` checked a sticky error before EOF, unlike native Lean. The adapter
now preserves each native operation's check order and uses a character loop when
the optimized reader cannot preserve error-state behavior.

The same six ordinary-Lean cases now match native in all three full compilers
and all three packaged runtimes. Nineteen reported packaged/host regression
tests pass, including an independent C control for partial reads, retained errors,
byte consumption, and subsequent EOF. Both failing baselines remain recorded;
the refined C fixture isolates the EOF check in a separate pipe. The original
upstream tests and expected outputs are unchanged. Validation peaked at **1.98 GiB**,
without OOM, throttling, cap hits, or swap. Native non-Linux behavior and complete
suites remain open. See [the stream-state evidence](evidence/getline-state-2026-09-21.json).

A supplementary console comparison exposed another native-behavior difference:
the host wrote directly through JavaScript streams instead of preserving FILE
buffering. Default stdout now retains native buffering, stderr is unbuffered,
and normal shutdown flushes console output. The adapter also preserves native
Lean's implicit stdout flush when a child inherits stdin. The first inherited-
stdin control already passed before the repair; adding a null-stdin control
exposed the mismatch in all three engines. Both versions of that baseline are
retained, and the final ordinary-Lean comparison matches native in Node, Deno,
and Bun full compilers and packaged runners.

A small full-pipe control then exposed Node changing shared standard descriptors
to nonblocking mode during Worker setup. Descriptor-backed diagnostic forwarding
avoids both implicit `process.stdout` accesses, including the one inside ordinary
stream piping. A checked private Node stream flag preserves the default behavior
of unreferenced workers. Diagnostics, descriptor ownership, worker shutdown, and
event-loop progress during flush/disposal have passing controls. This adapter is
validated on Node 24.13.1 Linux x64; other Node layouts and operating systems need
validation. Forced-exit semantics and broader terminal behavior remain open.

The frozen v97 Node/Deno and v98 Bun console snapshots also pass **21/21 unchanged
upstream registrations**: both stack-overflow diagnostics, dedicated-worker
shutdown, `IO_test`, `Process`, HTTP hang regressions, and `tempfile` in each
engine. All 7,267 original source hashes remain intact before and after every
registration. Peak workload memory was **3.79 GiB**, with zero OOM, throttling,
cap-hit, or swap events. These focused results are separate from the older
v89 broad campaign, and Bun retains its disclosed Linux stack adjustment.
Eight reported packaged controls, fourteen final host/worker controls, and all
22 Lean-server Vitest tests also pass. The record retains both console baselines,
the initial failing full-pipe checks, and the corrected diagnostic-fixture
cleanup; see [the complete console evidence](evidence/console-buffering-2026-09-21.json).

A startup trace isolated Bun's remaining delay to **13,985 individual
`WebAssembly.Table.grow` calls per main/worker**. Its workers spent 49–60 seconds
in those calls. The loader now reserves exactly the missing initial-main slots
in one growth while preserving free-slot priority, aliases, pointer values,
later side-module behavior, and the original incremental failure path. Wasm,
worker counts, host modules, and SDK inputs are unchanged. Twenty-eight loader
controls pass, including real 32-bit and 64-bit tables and table-limit failures.

The same ordinary console fixture fell from **70.09 to 4.77 seconds** on Bun;
the startup smoke finished in **4.42 seconds**. These are individual Linux x64
executions with the existing Bun stack adjustment, not general benchmarks.
The frozen v103 Node/Deno and v104 Bun snapshots passed **47/48 targeted upstream
registrations**: Node 16/16, Deno 16/16, and Bun 15/16. Coverage includes all five
selected Lake linking cases and both additional extension tests. All 7,267
original source hashes remain intact before and after every registration.
Peak workload memory was **6.10 GiB**, with zero OOM, throttling, cap-hit, or swap
events. Bun's `externBoxing` failure also reproduces on the preceding v98 runtime:
its filesystem adapter resolves a saved-directory path followed by `..`
incorrectly, causing Lean to assign the fallback `_stdin` module name. That
separate filesystem repair and the original Bun server deadline remain pending.
The record also retains the initial table64 transform preparation failure; see
[the startup optimization evidence](evidence/table-growth-2026-09-21.json).

The subsequent filesystem repair replaces POSIX engine `realpath` calls with
asynchronous libc calls and copies the returned bytes before freeing their
storage. Bun had resolved parent segments before symlinks, accepted empty paths,
and ignored missing or non-directory components removed by normalization.
Malformed filename bytes also differed in every engine: Node and Bun produced
two replacement characters where native Lean produced one, while Deno rejected
the filename. The bridge now lets Lean perform its own byte conversion.

The identical 17-case ordinary Lean fixture now matches native Linux in the
full and packaged Node, Deno, and Bun runtimes. **Twelve packaged checks** pass,
including existing directory-error and renamed/deleted-directory controls.
The final v107 Node/Deno and v108 Bun snapshots also pass **24/24 unchanged
upstream registrations**, including `externBoxing`, filesystem, module-header,
and private-name controls. All 7,267 original files remain unchanged before and
after every test; applicable compiled-driver artifacts also pass their integrity
checks. Peak memory was **3.70 GiB**, with zero OOM, throttling, cap-hit, or swap
events. The record retains a supplementary-fixture compilation error, the first
adapter's rejected buffer-ownership bug, and a log-name preparation collision.
See [the full realPath comparisons](evidence/realpath-2026-09-21.json).
Native macOS/Windows validation, long paths, races, and complete suite coverage
remain open.

On v108, Bun now passes all five selected server controls with the unchanged
driver compiled ahead of time: cancellation, empty-proof cancellation, parallel
cancellation, documentation links, and hover. The 900-second harness deadline
is unchanged. Cancellation takes **133.2 seconds**, compared with 2,173.8 seconds
in the earlier 3,600-second experiment; several runtime repairs separate these
snapshots. The original interpreted cancellation driver also passes separately
in **135.8 seconds**, so that result no longer requires the compiled-driver
adjustment. Its other server controls are not established by this comparison.

Peak memory is **7.92 GiB** for the five compiled-driver controls and **7.89 GiB**
for the original-driver cancellation run, close to the unchanged 8 GiB proactive
stop. All memory-event and swap counters are zero. Every run verifies all 7,267
original sources before and after; compiled-driver runs also verify all nine
driver/harness artifacts. These are Linux runs with the disclosed Bun stack
helper, not full-suite or cross-platform conformance. The complete outputs,
timings, driver build and resource records are in
[the current Bun server evidence](evidence/bun-server-current-2026-09-21.json).

- [x] Complete clean native control run with original-source integrity checks.
- [x] Full compiler startup in Node, Deno, and Bun.
- [ ] Complete unchanged suite inside Node.
- [ ] Complete unchanged suite inside Deno.
- [ ] Complete unchanged suite inside Bun.
- [ ] Resolve all nonfundamental differences and substantiate remaining limits.

No claim that the remaining differences are fundamental has been established.
The current work includes ordinary implementation defects in build settings,
runtime ABI declarations, interpreter symbol retention, and host API coverage.

Reproduction and experimental build details are in
[the full-suite harness documentation](../scripts/full-lean/README.md).

## Follow-up Bun worker-pool controls, September 21

After the table-growth and realPath repairs, a separate five-worker Bun
configuration passed three independent runs of the unchanged HTTP regression.
Its broader selection finished with 14 passes and two resource aborts. All three
original-driver cancellation controls passed; `docstringLinksExamples` and
`hover` crossed the existing 8 GiB proactive budget and stopped. These are
resource aborts, not test failures. All original file hashes were unchanged
before and after every attempt, and all OOM, kernel-cap, throttle, and swap
counters remained zero. The smaller pool remains experimental; this does not
close the original-driver memory or full-suite gates. See
[the frozen configuration and every result](evidence/bun-pool5-current-2026-09-21.json).

## Standalone exit parity, September 21

Full and packaged Node, Deno, and Bun runners now distinguish ordinary exit
from forced exit. The same ordinary Lean fixture matches native status,
stdout, stderr, and open-file contents for normal return, `IO.Process.exit`,
and `IO.Process.forceExit`. The previous Bun full-runtime ordinary exit lost
buffered file data, and all three engines incorrectly flushed stdout on forced
exit. This revision called native C `exit`/`_Exit` before JS cleanup. The later
broad campaign exposed an unsafe ordinary-exit path, repaired below.

The expanded packaged checks passed 51/51, including generated and source
launchers, embedded-host survival, console buffering, worker diagnostics, and
loader controls. Each full engine passed the same 12 unchanged upstream
regressions; all 7,267 original file hashes were verified before and after each
test. The build and checks had zero OOM, cap-hit, throttle, or swap events.
These are Linux x64 results. Embedded forced-exit buffer disposal and native
macOS/Windows validation remain open. See
[the baseline, repair, and resource evidence](evidence/process-exit-2026-09-21.json).

The initial exit-repaired facades inherited the builder's `LASM_EMSDK`, so their
external C tools used that development SDK despite the frozen compiler and host.
Their recorded configurations preserve this fact. Follow-up facades now select
the captured SDK first, even with the builder environment still present. All
three engines pass four unchanged C/FFI controls with these corrected settings,
including Lake's FFI and reverse-FFI examples. The guard also explicitly caps
Emscripten's internal cache-build jobs. See
[the separate SDK and job-limit validation](evidence/frozen-sdk-build-jobs-2026-09-21.json).

## Engine shutdown regression repair, September 21

A fresh Node campaign with the frozen SDK passed 59 of its first 62 tests and
failed `elab/445.lean`, `elab/452.lean`, and `elab/4534.lean`. The campaign is
preserved with 3,834 registrations pending. GDB traced `452` to an abort in
Node's `uv_mutex_destroy` during libc exit handlers: directly calling libc
`exit` bypassed the engine's shutdown coordination while worker threads were
still active. This was a Lasm regression from the preceding exit repair.

Ordinary standalone exit now awaits native `fflush(NULL)` and then calls the
engine's `process.exit`. Forced exit retains native `_Exit`, preserving buffer
discard. Two private host modules changed; the derived snapshots retain the
same Wasm, Lean, dispatcher, and frozen SDK inputs.

All three unchanged upstream regressions pass in each engine: **9/9**. Native
Lean and all three full runtimes match status, stdout, stderr, and open-file
contents for return, ordinary exit, and forced exit. The packaged exit,
console, host, and worker checks pass **33/33**. A small background-compilation
probe passed both old and new implementations, so it is retained as a
non-reproducing control, not proof of the repair.

All 7,267 original hashes remained unchanged. All OOM, cap-hit, throttling,
and swap counters were zero; the largest repaired upstream run peaked at
3.65 GiB. These are Linux x64 results; complete campaigns, embedded forced-exit
disposal, and other platforms remain unfinished. See
[the failures, debugger trace, repaired snapshots, and comparisons](evidence/engine-exit-shutdown-2026-09-21.json).

## Expanded Bun shared-memory controls, September 21

An 18-case supplementary engine matrix covers both address types, zero-capacity
and growable memories, three worker-message paths, shared atomic writes, and
round-trip transfer. Node and Deno pass **18/18** each. Stable Bun and the tested
canary pass **6/18** each: six zero-capacity cases crash and six other memory64
cases fail module import with an address-type mismatch. Each case allocates at
most two 64 KiB pages; the entire sequential comparison peaked at 0.20 GiB,
with zero OOM, throttling, cap-hit, or swap events.

The pinned Bun source hardcodes I32 when reconstructing worker memories and
also dereferences null shared-contents handles when accounting for zero-capacity
memory. A local source candidate addresses both; it has not yet been compiled
or validated. These are engine implementation defects, not fundamental limits.
The original Lean suite remains unchanged. See
[the cases, first-probe cleanup correction, and source references](evidence/bun-shared-memory-matrix-2026-09-21.json).

## Local Bun memory64 repair, September 21

The candidate above is now compiled and validated in a local Linux x64 ASAN
debug build. The same added test matrix reproduces **6 passes / 12 failures**
on released Bun, then passes **18/18** on the patched build. Fifteen existing
neighboring worker-transfer tests also pass. The unchanged original one-page
probe with an 8 GiB maximum passes all four checks. ASAN requires Bun's documented
`allow_user_segv_handler=1` setting for shared Wasm; the initial probe without
that setting is retained as a configuration failure. Sanitizers remain enabled.

The patch retains the original memory address type beside its reference-counted
contents, without changing the serialized byte format. Memory accounting now
handles the null contents of a zero-capacity memory. The patch and original
input hashes are retained; no original Lean test changed.

The full compile completed its object files, then stopped at the proactive
8 GiB budget during linking with accumulated filesystem cache. Reusing those
objects, the unchanged incremental link completed at 3.09 GiB under the same
guard. All hard-limit, OOM, throttling, and swap counters remained zero. The
resource abort is separate from conformance results. The frozen patched binary
now starts the full native-memory64 Lean compiler: `--version` exits successfully
after 175.6 seconds, peaking at 1.92 GiB. These startup and engine controls do
not establish full Lean compatibility, released Bun
support, or cross-platform behavior. Package defaults are unchanged. See
[the patch and all controls](evidence/bun-memory64-local-fix-2026-09-21.json).

The same frozen configuration subsequently passed the unchanged upstream
`elab/IO_test.lean`, including file modes, reads, Unicode, rename, directory
removal, symlinks, and hard links. The test took 504.75 seconds on the ASAN debug
engine and peaked at 2.53 GiB. All 7,267 original source hashes and the harness
artifacts remained unchanged; no resource abort, OOM, hard-limit, throttling,
or swap event occurred. This is one full-runtime IO test, not a complete Bun
suite or a practical release configuration. See
[the isolated IO result](evidence/bun-memory64-io-2026-09-21.json).

## Patched Bun release build and remaining capacity limit, September 21

The same engine patch now has a separate Linux x64 release build. Its 18 added
memory-transfer controls, 15 existing neighboring worker tests, and four original
memory64 checks all pass. Building with one job peaked at 6.40 GiB; no resource
abort, hard-limit, OOM, throttling, or swap event occurred. The full Lean startup
control took 2.51 seconds, compared with 175.60 seconds on the ASAN debug build.
These are individual runs, not general performance guarantees.

Five unchanged Lean registrations then produced **four passes and one failure**:

| Registration | Result | Seconds | Workload peak |
| --- | --- | ---: | ---: |
| `elab/IO_test.lean` | Passed | 5.37 | 2.00 GiB |
| `elab/async_cancellation.lean` | Passed | 8.14 | 2.29 GiB |
| `elab/async_cancellation_reasons.lean` | Passed | 6.88 | 2.28 GiB |
| `elab/async_http_hang_regressions.lean` | Passed | 10.92 | 2.40 GiB |
| `elab/instances.lean` | Internal allocation failure | 15.23 | 4.59 GiB |

All 7,267 original source hashes remained unchanged. The failed test was not a
host OOM or resource abort: host available memory stayed above 21 GiB and all
guard counters remained clear. Bun's pinned WebKit fork deliberately limits
ArrayBuffers, and therefore Wasm memory, to 4 GiB because some Bun buffer paths
still use 32-bit lengths. A probe with only one initial 64 KiB page and no positive
growth confirms that patched Bun exposes a 4 GiB growable maximum for an 8 GiB
declaration, for both shared and unshared memory. Deno reports 8 GiB; the pinned
Node lacks this capacity-query API, so that query makes no claim about Node.

The cloning repair is working, but removing Bun's separate capacity restriction
still requires implementation work and validation. Neither limit is being called
fundamental. The patched engine remains opt-in; stock Bun, package defaults,
cross-platform conformance, and full-suite completion remain separate gates. See
[the release build, all five outcomes, and capacity evidence](evidence/bun-memory64-release-2026-09-21.json).

A later local engine patch repairs `StringDecoder` lengths and Node-compatible
offset/reset behavior before further capacity work. Released Bun fails 14 of
22 added small-input cases and four of six 4 GiB boundary checks. The repaired
release and ASAN profiles pass those controls, match all 40 existing small-buffer
comparisons, and retain all 37 worker/memory passes. Native Node independently
passes the 22 small cases and the boundary comparisons.

The complete Bun decoder file yields 119 passes and one retained failure in
release and in a parallel debug run. That existing test expects an empty string
for a negative offset; Node and repaired Bun instead throw `ERR_STRING_TOO_LONG`
on its original input. A separate comparison records that behavior without
editing the existing test. The first ASAN run also timed out after the 1,000
forced-GC case took 50 seconds; the parallel debug harness raises its default
deadline to 90 seconds, preserving the source and original result. No sanitizer,
OOM, hard-limit, throttling, or swap error was observed. All guarded attempts are
retained, including two validation-helper mistakes. These are engine prerequisite
checks, not Lean registrations or removal of the 4 GiB capacity limit. See
[the decoder repair and retained disagreements](evidence/bun-decoder-width-2026-09-21.json).

## Bun capacity experiment, September 22 UTC

A separate source build of the pinned WebKit commit changes its Bun-specific
ArrayBuffer/Wasm maximum from 4 GiB to 8 GiB, together with the previously
validated cloning and decoder repairs. The complete engine build took 50 minutes
48 seconds, peaking at 6.39 GiB. It used one build job, two-CPU affinity, base
pages, and the unchanged 8 GiB proactive/10 GiB hard guard. Completed WebKit
object-file cache was released after JSC linked; file contents and global settings
were unchanged. No OOM, hard-limit, throttling, swap, or resource-abort event occurred.

Twenty JSC configurations pass the memory-growth and byte-value checks, including
shared/unshared memory at 4 GiB plus 64 KiB. An initial run stopped on a separate
FTL-coverage assertion: the large numeric-index loop returned correct values but
did not report final-tier execution. The parallel validation preserves every
correctness assertion and records that coverage gap, retaining the original
failed attempt and its inputs. Small controls demonstrate final-tier execution;
large-index FTL execution remains unverified.

Bun also passes 52 grouped buffer-boundary checks, 40 small-offset comparisons,
six decoder-width checks, two negative-offset controls, and all 37 worker/memory
regressions. Its complete decoder file still has 119 passes and the same one
unchanged test whose expectation disagrees with Node. These are engine controls,
separate from the following full Lean results:

| Unchanged upstream registration | Result | Seconds | Peak workload memory |
| --- | --- | ---: | ---: |
| `elab/instances.lean` | Passed | 42.94 | 5.91 GiB |
| `elab/IO_test.lean` | Passed | 5.54 | 1.91 GiB |
| `elab/async_cancellation.lean` | Passed | 8.33 | 2.30 GiB |
| `elab/async_cancellation_reasons.lean` | Passed | 7.15 | 2.30 GiB |
| `elab/async_http_hang_regressions.lean` | Passed | 10.06 | 2.37 GiB |

All 7,267 original file hashes match before and after every test. These runs use
the v119 full compiler, five pthread-pool slots, four Lean workers, and the existing
Linux stack helper. The frozen engine dynamically links host ICU 74.2; its earlier
prebuilt-WebKit counterpart used ICU 78.3. This is not a comparison with only one
changed dependency, and the new WebKit build has not been tested with ASAN.

Independent wide-buffer controls found other pinned-engine differences. Node
24.13.1 truncates source offsets in `Buffer.copy` above 4 GiB and reproduces the
known shared-view clone truncation. Deno 2.9.7 rejects that copy and truncates high
offsets in `Buffer.toString` and `Buffer.fill`. Smaller independent probes preserve
every failure: Node passes 20/23 large-operation cases, Deno 17/23, and the patched
Bun build 23/23. All 69 small-operation controls pass. The typed-array slice/set
and numeric-offset reconstruction paths used by Lasm pass in all three engines;
these engine findings do not establish a Lasm bridge failure.

Nine subsequent actual host-bridge controls pass in Node, Deno, and patched Bun:
a small control and calls above 2 GiB and 4 GiB in each engine. The unchanged
C++ fixture checks synchronous and asynchronous transfers, response bytes, and
wake-up signals from the main caller and four additional pthreads. Source and
engine hashes match before/after; the guarded workload peaks at 216.58 MiB with
no resource event. These are separate bridge controls, not additional upstream
Lean passes; see [their complete evidence](evidence/host-bridge-capacity-2026-09-22.json).

Stock Bun, packaged full-runtime integration, full-suite completion, broader IO
coverage, and native Windows/macOS/ARM64 validation remain open. See
[all attempts, hashes, dependencies, and resource reports](evidence/bun-memory64-capacity-2026-09-22.json).

## Embedded forced-exit cleanup, September 22 UTC

The packaged runtime previously flushed open files while disposing an embedded
guest after `IO.Process.forceExit`. The supplementary native comparison records
that mismatch in Node, Deno, and Bun. Cleanup now retains the exit reason and
purges pending native stream buffers before closing them on Linux/macOS. It waits
for queued file operations, including stdout writes whose stream has not yet been
created, and repeated disposal preserves the original exit mode.

On Linux x64, all 12 native/engine comparison cases now pass, including host
survival in each embedded case. The generated Wasm is byte-identical before and
after the host repair. All 63 file, console, host, and process-exit regressions
pass with zero skips; peak memory across comparison and regression runs is
0.54 GiB with no resource event. These are supplementary application checks,
not upstream-suite registrations. Windows discard remains unimplemented and the
macOS branch still needs native validation. See
[the complete cleanup evidence](evidence/embedded-force-exit-2026-09-22.json).

## Full-runtime host transfer lengths, September 22 UTC

The original full-host ABI used signed 32-bit response sizes and 32-bit input
lengths. The same small synthetic fixture reproduces 12 failures per engine at
the 2 GiB/4 GiB boundaries. Pointer-sized input/copy counts and signed 64-bit
responses now pass all 24 cases per engine, including success, error, synchronous
input, and asynchronous input lengths. The maintained probe repeats all 72
passes. It substitutes length-only RPC responses and never allocates those large
payloads. Nine separate actual bridge controls also pass with small payloads at
low addresses and above 2 GiB/4 GiB.

The first compiler link failed because its generated export list still named the
old private `Reply` constructor. That failed attempt is retained; regenerating
exports and native registries fixed the link. Frozen v120 keeps the lowered
4 GiB profile; v121 uses native memory64 with an 8 GiB maximum. On v121, all
eleven selected unchanged controls pass in each of Node, Deno, and the local Bun
build. Released Bun passes ten controls on v120; `instances` is covered by the
three 8 GiB profiles. All 7,267 original source hashes match before and after
every test, and the largest test peak is 5.75 GiB with no resource event.

All 38 packaged console, ordinary-IO, process-exit, main-entry, task-shutdown,
and Lake-dependency regressions also pass with zero skips. The shared C++ header
change invalidated the runtime cache and rebuilt the package artifacts. This run
peaked at 0.94 GiB, with no OOM, limit, throttling, or swap event.

Worker-message copies, the temporary C++ response vector, and final Lean data
allocation still require a measured large-payload audit. These results do not
establish multi-GiB IO equivalence, complete suites, or cross-platform conformance.
See [the retained before/after evidence](evidence/host-transfer-width-2026-09-22.json).

## Host platform and compilation target, September 21

The full runtime now answers `System.Platform.isWindows` and `isOSX` using
the JavaScript host. Its previous compile-time branches always answered false
under Emscripten, giving incorrect Windows path behavior. A separate ordinary
Lean fixture exercises those queries, path joining, absolute paths, and parents.
With controlled Linux, Windows, and macOS host values, the original runtime
matches only three of nine cases; the repaired runtime matches all nine across
Node, Deno, and the locally patched Bun release. These controlled values do not
establish native Windows/macOS filesystem conformance.

The build also now explicitly supplies the correct `wasm64-unknown-emscripten`
compilation target for both memory64 modes. CMake's earlier target query omitted
the memory setting and incorrectly recorded `wasm32`. The rebuilt full compilers
report the correct Linux host, 64-bit width, and Wasm64 target in all three
engines. Six unchanged upstream registrations pass per engine, **18/18 total**:
`IO_test`, `currentDir`, `externBoxing`, `filePath`, `readDir`, and `realPath`.
All 7,267 original hashes remain intact before and after every test. The largest
test peak is 2.12 GiB, with no resource abort or memory event. These Bun checks
use its released binary with lowered memory64 and the existing explicit Linux
stack adjustment; they do not use the locally patched engine.

The compiler rebuild completed, but accumulated file cache caused the following
native-memory64 link to stop proactively at 8.04 GiB. A separate retry of that
link succeeded at 3.04 GiB under the same limits. Both attempts recorded zero
OOM, hard-limit, throttling, and swap events. An earlier probe-harness failure
also exposed a mixed C-source/object linker-driver defect; that failure is
retained separately and its repair is separate work. Native Windows/macOS,
ARM64, and the complete JavaScript suites remain open. See
[the platform comparisons, unchanged tests, and resource records](evidence/host-platform-2026-09-21.json).

## Mixed C source and object linking, September 21

The external compiler adapter no longer inserts language-switch flags around
C inputs. With the pinned SDK, those switches caused a command such as
`clang main.c helper.o -o app` to treat the existing object as another source
file and fail inside Emscripten. The retained baseline reproduces that failure;
removing the injected switches fixes it while preserving C input semantics and
linking the required C++ runtime.

Three native controls and **15 engine controls** pass: mixed C/C++ sources,
objects, archives, C++ compilation of a `.c` input, and response files containing
paths with spaces. The full compiler snapshots differ from their platform-fixed
parents only in the external compiler adapter. The unchanged upstream Lake FFI
and reverse-FFI examples, dedicated-thread compilation, and external boxing
then pass in each engine, **12/12 registrations**. Every attempt preserves all
7,267 original source hashes. Peak memory is 5.05 GiB, with zero resource aborts,
OOM, hard-limit, throttling, or swap events. Bun uses the released binary with
lowered memory64 and the existing explicit Linux stack adjustment. These local
results do not establish complete suites or cross-OS conformance. See
[the baseline failure, repaired controls, and upstream results](evidence/cc-inputs-2026-09-21.json).
