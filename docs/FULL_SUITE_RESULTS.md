# Full upstream Lean suite

These are preserved **compiler-in-Wasm research** results. The current
[product plan](PLAN.md) requires separate application-pipeline acceptance on
Lean 4.34.0 and stock latest Node. Earlier passes below do not satisfy that
new version or product scope. Broad research campaigns are now paused.

Pinned Lean: **4.32.0**, commit
`8c9756b28d64dab099da31a4c09229a9e6a2ef35`.

The frozen v147 Node campaign is **complete: 3,896/3,896 passed**, including
all 3,891 ordinary upstream registrations and all five opt-in registrations
excluded by upstream as flaky. Every registration passed on its first attempt,
with one passing, unskipped JUnit result. No earlier or other-profile passes were
imported. All 854 previously unpassed names were prioritized only to change the
execution order. There are **zero failures, resource aborts, harness failures,
and pending registrations**. See
[the complete Node result and final audit](evidence/node-broad-v147-temporary-files-checkpoint3896-2026-09-23.json).

| Group | Passed |
| --- | ---: |
| Lake | 56 |
| Compiler regressions / compiled benchmarks | 69 / 27 |
| Elaborator / elaborator benchmarks / expected-error elaborator | 2,995 / 40 / 315 |
| Documentation parser / documentation examples | 197 / 8 |
| Server / interactive server | 4 / 142 |
| Packages | 34 |
| Lint / miscellaneous / miscellaneous directories / additional benchmark | 1 / 5 / 2 / 1 |
| **Total** | **3,896** |

Every attempt verifies all 7,267 original regular-file hashes, six symlink targets,
and ten parallel-harness hashes before and after execution. The final read-only
audit rehashed all 201 frozen runtime inputs after the supervisor and its guarded
children exited. All hashes remain intact. Original tests, expected output and
test timing assertions are unchanged; the documented parallel harness compiles
the original server driver, uses the selected full Node compiler, and supplies
its separate CTest timeout and resource controls.

The maintained `audit-campaign.py` independently confirms all 3,896 final passing
attempts and repeats the live source, symlink, harness and frozen-runtime checks.
Its 19 evidence-only controls reject inconsistent results, skipped JUnit cases,
incomplete selections and unsafe resource records. The read-only Node audit
uses 57.8 MiB peak RSS; see [the audit validation](evidence/campaign-audit-2026-09-23.json)
and [the reproducible command](../scripts/full-lean/README.md).

Each test ran alone with base pages, one CTest job, one build/Binaryen worker and
four Lean workers under the unchanged 8 GiB proactive / 10 GiB hard memory limits.
The largest peak is **7.78 GiB**, from `pkg/frontend`; it builds and runs a compiler
frontend and checks shared module initializers through executable and interpreter
paths. The server-project test peaks at 7.56 GiB. There are no recorded OOM,
hard-limit, throttling, swap, pressure-stop or monitor events. The longer
incremental-tactic server test also passes unchanged in about 108 seconds at
6.16 GiB. Lean's checker package passes its valid-module, invalid-module and
fresh-check assertions.

All 20 `async_http` and all 35 `async_` registrations pass, including the final
opt-in async-channel selection test. The mutex and signal opt-in checks pass too.
The suite covers ordinary filesystem reads, stream redirection and restoration,
file locking, temporary-file creation, DNS, TCP/UDP, HTTP bodies, framing,
headers, dispatch, fuzzing, keepalive, cancellation and task behavior. All three
earlier plugin failures now pass in this campaign. Stack-overflow handling and
the expected file-read `resourceExhausted` error also pass without OOM events.

This establishes the pinned suite result for the **experimental full Node runtime
on Linux x64**, not complete behavioral equivalence for every IO API. The packaged
Wasm32 cooperative runtime is separate and has not gained this result. The later
v149-v151 host repairs have their own targeted evidence above; their passes are
not imported into this frozen v147 result. Native other-OS/ARM64 validation,
untested API gaps and packaged full-runtime integration remain open.

Earlier checkpoints, including the
[854-test snapshot](evidence/node-broad-v147-temporary-files-checkpoint854-2026-09-23.json),
remain preserved separately. Both original server-driver controls also passed
before this campaign, peaking at 7.59 GiB without resource events; see
[the v147 server controls](evidence/server-project-v147-temporary-files-2026-09-22.json).

The separate v151 repair makes POSIX home/temporary-directory queries preserve
empty values, environment precedence, raw bytes and Lean's buffer-limit errors.
Temporary creation shares the same selection routine. Fifteen ordinary Lean API
cases match native in the full Node engine. Eighteen raw temporary-path
regressions and nine unchanged upstream IO registrations also pass; all 7,267
original hashes and six symlinks remain intact. Full validation peaks at 3.77 GiB,
with no resource/OOM/throttling/swap or monitor event.

The initial probes retain a separate failure: the packaged Node runtime
overflows its stack while formatting a 4,095-element byte list.
The original verbose program and failing output remain preserved. A compact
packaged probe checks every returned byte and its length: every comparison
plus the parent test passes in released Node. The existing
packaged temporary-file/path and system checks also pass. These results do not
turn the stack failure into a pass, and the issue is not classified
as fundamental. See
[the directory-query evidence and retained attempts](evidence/system-directories-2026-09-23.json)
and [the parallel-probe explanations](../test/fixtures/system-directories/README.md).

The separate v150 host repair retains raw POSIX temporary-directory bytes through
creation, cwd anchoring and worker replies. Six ordinary Lean cases match native
output and independently checked file locations in the full Node engine;
v149 differed on four. Node previously created entries in
replacement-character directories in two cases. The packaged checks pass
in released Node, and nine unchanged upstream IO
registrations pass with all 7,267 original hashes and six symlinks intact.
The older full-runtime controls also retain ten native matches and one safe-error
check for a known native crash. The largest validation peak is
3.74 GiB, with no resource/OOM/throttling/swap or monitor event. Native Lean's
returned FilePath itself is lossy for malformed bytes; the repair preserves that
behavior while creating the object in the correct raw directory. Native
cross-platform and near-limit relative-path validation remain open. See
[the raw temporary-path evidence](evidence/temporary-path-bytes-2026-09-23.json).

The separate v149 host repair preserves POSIX environment bytes for `IO.getEnv`,
UV environment queries and inherited child processes. The same eight ordinary
Lean cases now match native output in full Node;
the v147 baseline differed on six cases. The final adapter
synchronizes Lean updates with libc and honors subsequent JavaScript edits.
The packaged/host checks pass in released Node, including
native-output comparisons. Nine unchanged upstream IO/process/temporary-file
registrations pass with all 7,267 original hashes and six symlinks intact.
Eight further packaged checks retain native environment overrides, NUL handling,
PATH and executable-text behavior. The full comparisons peak at 2.01 GiB and
the unchanged upstream controls at 3.77 GiB, with no resource/OOM/throttling/swap
or monitoring event.
These results remain separate from the frozen v147 broad campaign below.
Unusual environment names, concurrent native mutation
and native cross-platform validation remain open. See
[the environment-byte comparison and retained attempts](evidence/environment-bytes-2026-09-23.json).

The v147 host repair preserves temporary-path spelling and symlink traversal,
uses POSIX atomic creation with the upstream filename template, and matches
Lean's environment precedence and libuv errors. The full Wasm compiler binary
is unchanged. Ten ordinary Lean cases match native output in **Node**; each
also passes a safe-error check where native Lean
crashes. The same cases pass in packaged mains using released Node, alongside an instance-cwd/permissions control. All six unchanged
upstream IO regressions pass with 7,267 regular hashes and six original symlinks
intact. No resource/OOM/throttling/swap event occurred. Native Windows/macOS
validation and broader edge cases remain open. See
[the temporary-file repair evidence](evidence/temporary-files-2026-09-22.json).

The preserved v146 Node campaign selects **all 3,896 original registrations**,
prioritizing 877 names not passed in the earlier v144/v145 runs. It imports no
passes from other profiles or targeted validations. Its latest saved checkpoint
has **23 Lake registrations passing**, including initialization, external libraries,
module rebuilds, dependency requirements, overrides, post-update hooks and
precompiled linking, with no failures or
resource aborts and all original and harness hashes intact. This is a checkpoint, not a
completed suite. Each test uses its own guard, base pages, one CTest job and
one build worker. See
[the 23-test v146 checkpoint](evidence/node-broad-v146-lean-symbol-loader-checkpoint23-2026-09-22.json).

The registration count comprises 3,891 upstream CTest tests and five opt-in
tests that upstream explicitly excludes as flaky. Seven additional benchmark
inputs carry upstream `.no_test` markers and are outside that count. Their
sources are inventoried separately. All seven now complete in **native Lean
and Node** using their unchanged upstream benchmark
drivers, without resource events. Node
matches native output exactly after normalizing only the seven printed
evaluator/kernel timing pairs in the System F benchmark. Raw output remains in
the evidence, including the native benchmark's `sorry` warning.

Maximum peaks are 1.69 GiB native and 4.49 GiB Node.
All 7,267 original file hashes, six symlink targets and both measurement-harness
hashes remain intact before and after every execution. The separate measurement
adapter records actual wall/CPU time and max RSS because this host denies `perf`
counters; hardware counts are omitted. These benchmark checks do not add passes
to the broad 3,896-test campaign. The initial diagnostic with an expected-output
test driver remains recorded: a benchmark printed output but had no expected
file. See [the complete benchmark comparison](evidence/benchmark-inputs-all-engines-2026-09-22.json),
[the initial native control](evidence/benchmark-inputs-native-2026-09-22.json)
and [the source inventory](evidence/upstream-benchmark-only-inventory-2026-09-22.json).

Source integrity checks now also verify the six symlink targets from the
verified original release archive. Two focused controls cover equal-byte
retargeting, link replacement, missing links, and archive/revision mismatches.
The completed v147 Node campaign's execution records include these checks before and
after each test, alongside all 7,267 regular-file hashes. Older attempts without
the `symlinks` field retain their original, narrower verification scope.

The optional compiled-server harness now covers the exact
`misc_dir/server_project` invocation as well as `server_interactive`. Both
upstream driver files are byte-identical; the harness verifies their hashes
and forwards the original arguments, including `-p FILE`, unchanged. The
server-project and cancellation controls pass in **native Lean and Node**,
with all source and driver/harness hashes intact and no resource, OOM, throttling, or swap event.
Node's server-project check peaks at 7.54 GiB under the unchanged 8 GiB proactive
budget. The earlier v145 interpreted-driver abort remains recorded separately;
the passing v146 controls also include the plugin-loader repair. See
[the server-driver evidence](evidence/server-project-driver-2026-09-22.json).

The v146 compiler repair passes **six original regressions each in native Lean
and Node**, including all three plugin failures
found below. Late-loaded
plugins can now resolve compiled Lean functions through the same in-Wasm
registry used by the interpreter. Ordinary global-symbol precedence, explicit
data exports, and weak-import misses are preserved. Four focused resolver
tests pass. A small real plugin control also passes natively and in Node,
using both native and lowered Memory64.

The combined validation completed all native and Node tests. The compiler
relink itself peaked at 3.05 GiB; all 7,267 original source hashes remain
intact. See [the Node repair](evidence/lean-plugin-symbols-node-2026-09-22.json).
These targeted groups do not complete any JavaScript engine's entire upstream suite.

The v145 broad Node run is paused at **1,390 passes, three conformance failures,
one resource abort, and 2,502 pending registrations**. All 3,896 registrations
remain selected, without importing other profiles' passes. The failures are
`bench/mvcgen/sym`, `misc_dir/plugin`, and `pkg/user_plugin`; their compiled
plugins cannot resolve some internal Lean functions through the JavaScript
loader. The separate v146 repair results are recorded above.

`misc_dir/server_project` reached the proactive memory budget at 8.01 GiB;
the guard stopped it before the 10 GiB kernel limit. Several compiler processes
were resident together. There were no recorded OOM, hard-limit, throttling,
swap, or monitor failures. This is a resource abort, not a conformance result.
All 7,267 original source hashes and ten harness/driver hashes remain intact.
See [the preserved 1,394-attempt checkpoint](evidence/node-broad-v145-runtime-metadata-checkpoint1394-2026-09-22.json)
and [the initial 21-test checkpoint](evidence/node-broad-v145-runtime-metadata-checkpoint21-2026-09-22.json).

The v145 runtime-library metadata repair passes **seven unchanged upstream
registrations** in Node. The full
compiler retains upstream's `lean_libuv_version` implementation, which reports
zero for Emscripten. The packaged WASI runtime also reports zero for absent
native libuv/OpenSSL libraries; adding the missing OpenSSL metadata primitive
fixes ordinary `Lean.Runtime` imports that previously failed to link.

The new packaged metadata test and six existing IO/main tests pass. Released
Node runs the repaired packaged main successfully. Native and
old/new full-engine observations retain the actual target-dependent values.
All 7,267 original source hashes remain intact. Validation peaks at 4.45 GiB,
with no resource abort, OOM, hard-limit, throttling or swap event. The initial
package link failure and the earlier broad-campaign failure remain recorded.
These checks do not complete the full suites, native cross-platform validation,
or UV loop configuration/aliveness. See
[the metadata repair evidence](evidence/runtime-library-metadata-2026-09-22.json).

The v145 original compiled server driver also passes
`server_interactive/cancellation_empty_by.lean`, with all original and harness
hashes intact. Preparation and execution peak at 6.26 GiB without resource
events. An initial misspelled filter selected zero tests and returned success;
that attempt is retained and is not counted as a pass. The suite runner now
rejects empty selections explicitly, verified with an actual CTest negative
control and the passing original registration. See
[the server and selection evidence](evidence/runtime-library-metadata-server-2026-09-22.json).

The v144 Node campaign is paused at **1,629 passes, one conformance failure,
zero resource aborts, and 2,266 pending registrations**. The unchanged
`elab/libuv.lean` exposed Lasm's hardcoded native-library version: it reported
1.48.0 although pinned Lean reports zero for its Emscripten build. The failure
peaked at 1.59 GiB and preserved every original/harness hash. The subsequent
repair is recorded separately above. All 3,896 tests were selected; 3,004
previously unpassed names were prioritized, without importing earlier results.
Quicksort, four red-black-map variants, server startup, the
dependent-pair iterator, tree maps, union-find, server watchdog and workspace
symbols pass. All 197 documentation-parser registrations pass, followed by the
monad-control tutorial, ordering and persistent-array iteration controls.
Fourteen further original HTTP registrations pass, covering body/response
framing, dispatch, encoding, Expect handling, incremental parsing, parser fuzzing,
RFC compliance, headers, request lines, quoting, trailers and URIs. Core async
functions, selection, stream mapping, sleep and system-information controls pass
too. These are observed Node results; complete API parity remains
open.
Subsequent passes cover big integers, bit-vector decision procedures and
reflection stress, byte arrays/slices, cancellation tokens/contexts, and
case-analysis regressions.
Evaluation, string splitting, coercions, coinductive predicates, compiler
optimizations and congruence tests pass in the next group.
Further passes include constructor and conversion checks, `native_decide`,
default-instance selection, definitions and delaboration.
The next group includes arithmetic, matching, pattern-inference and product
regressions for `grind`.
Hash maps, diagnostic messages, termination-order inference and debugger
regressions also pass.
Module initialization, induction, inlining, instance synthesis and integer
regressions pass, along with the original filesystem/environment embedded-NUL
and random-byte IO tests.
Later passes include JSON surrogate handling, kernel interruption and heartbeat
limits, compiler control flow, natural-number bitwise operations and local
recursive definitions.
Every completed attempt preserves all 7,267 original source hashes and the
compiled-driver/harness hashes. The paused checkpoint includes only completed
attempts. This campaign uses base pages, one build worker and the
separate final-link profile described below. See
[the 1,630-attempt checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1630-2026-09-22.json).
The [1,605-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1605-2026-09-22.json),
[1,505-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1505-2026-09-22.json),
[1,403-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1403-2026-09-22.json),
[1,307-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1307-2026-09-22.json),
[1,210-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1210-2026-09-22.json),
[1,102-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1102-2026-09-22.json),
[1,002-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint1002-2026-09-22.json),
[903-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint903-2026-09-22.json),
[801-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint801-2026-09-22.json),
[704-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint704-2026-09-22.json),
[602-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint602-2026-09-22.json),
[500-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint500-2026-09-22.json),
[402-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint402-2026-09-22.json),
[296-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint296-2026-09-22.json),
[211-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint211-2026-09-22.json),
[102-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint102-2026-09-22.json),
[54-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint54-2026-09-22.json)
and [initial ten-test checkpoint](evidence/node-broad-v144-split-optimization-checkpoint10-2026-09-22.json)
remain unchanged.

The v144 standalone final-link profile passes **eleven unchanged upstream
registrations** in Node.
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
Neither incomplete attempt is counted as a conformance failure. Cross-platform
and complete-suite validation remain open. See
[the standalone optimization evidence](evidence/standalone-link-optimization-2026-09-22.json).

The same Node profile also passes **four unchanged language-server cancellation
registrations** with the original upstream test driver compiled ahead of time.
The driver uses the standalone split-link option; compiler/server children still
use four Lean workers. All original and harness hashes match. Preparation peaks
at 2.96 GiB and execution at 6.53 GiB, without resource aborts, memory-limit events,
OOM, throttling or swap. These targeted results are recorded separately from
the new full campaign. See
[the server-driver validation](evidence/standalone-link-server-driver-2026-09-22.json).

The v142 private file-worker repair passes **six unchanged registrations**:
ordinary IO, HTTP hang regressions, line reads, file locking, directory reads,
and real paths in Node. All 7,267 original source hashes remain intact.
Previously, a three-byte result or EOF cloned the entire requested backing
buffer, observed at 1, 16, and 64 MiB in Node. The worker now transfers
only returned bytes for partial/pooled views and preserves direct transfers for
full allocations. Four maintained host tests, before/after native
and full-engine controls, and packaged released-Node controls pass.
The full compiler Wasm is byte-identical to v141; only the private worker changes.

Individual 64 MiB short-read runs peak at 1.89→1.63 GiB in Node. No resource
abort, OOM, memory-limit, throttling, or swap event occurs. Native read capacity
and the remaining C++/Lean copies still need broader analysis. A supplementary
package harness initially failed while scanning unrelated permission-denied
experiment directories; its isolated byte-identical fixture retry passes.
Full-suite and native cross-platform coverage remain open. See
[the allocation evidence](evidence/short-read-allocation-2026-09-22.json).

The separate v141 clock validation passes **four unchanged registrations**:
`timeIO`, `timeNegative`, HTTP hang regressions, and file locking in Node.
All 7,267 original source hashes match before and after execution. Ordinary
`Timestamp.now` now retains native Lean's observed Linux microsecond precision,
and an injected clock error reaches its ordinary `IO.Error` handler instead of
being interpreted as a timestamp. Released Node also passes the
packaged precision/error controls. Ten focused host tests, both new package
tests, and the six existing ordinary-IO/main tests pass. Native macOS, Windows, and
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

During this pause, a shared-runtime AOT experiment passes **ten native comparisons**
in Node. The checks cover ordinary
CLI execution, literal arguments, an unchanged expression test, cross-process
closure serialization, console/file buffering, normal return, exit, and force-exit.
Node also rejects a missing application module explicitly. These are
supplementary controls, not new upstream CTest passes. The profile uses one Lean
worker and one precreated pthread; Node peaks at 6.27 GiB, with no memory-limit,
OOM, or swap events. Original
fixture hashes match. Cross-platform execution, shared-library search
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
broader language-server and packaged integration remain separate
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
v127 native-memory64 compiler passes the argument comparisons and unchanged
upstream controls in Node. Every upstream attempt preserves all 7,267
original source hashes. Peak workload memory was 5.05 GiB, with no resource or
OOM event. These targeted results do not complete the broad suites or establish
other-OS CLI parity. See [the argument-ordering evidence](evidence/shell-arguments-2026-09-22.json).

The full-runtime host transfer ABI now preserves lengths across the 2 GiB and
4 GiB boundaries. All **72 synthetic checks** pass after reproducing 36 failures
in the original ABI. On the rebuilt v121 native-memory64 compiler, Node passes
**11 unchanged upstream controls**, including `instances`. These selected results do not complete the broad campaigns. See
[the transfer repair evidence](evidence/host-transfer-width-2026-09-22.json).

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
passes were imported or combined across these campaigns. These checkpoints are not
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

The completed `lean4-4.32.0/tests/compile` and `compile_bench` directories are now
retained as adjacent `.tar.gz` archives with per-file restoration manifests.
Every original source hash, generated byte, link, mode and timestamp was verified
before archival. The [storage receipts](evidence/runtime-imports-and-lake-initialization-2026-09-24.json)
record restoration details; earlier failures and execution receipts remain intact.
This storage change adds no new compatibility result.

This native result establishes the reference behavior. It is **not a full-suite
pass inside Node**. The full WebAssembly compiler now starts in Node. Node also elaborates a theorem with `omega`, evaluates large
natural numbers and 64-bit `USize`, runs an ordinary main with tasks, and generates
C and serialized modules using the full compiler. An initial full Node suite
attempt was interrupted after collecting repeated defects in the superseded
build; it is not a completed suite run. Its
[partial evidence](evidence/full-node-initial-attempt-2026-09-19.json) is retained,
including a tracked `produced.out` file overwritten by an upstream Lake test
driver during that failed attempt. No upstream source or expected output was
edited to obtain a pass. The separate application
runtime checks and earlier selected runtime audit retain their original scope.

Prerequisite executions pass (including ten shutdown stress repetitions): Wasm32 threads, 64-bit values with lowered memory
accesses, asynchronous host calls from four concurrent Wasm threads, pthread stacks plus host memory writes above 2 GiB, detached-thread shutdown without spurious stderr,
side-module data/function-pointer relocation, and shared-memory growth observed by a blocked worker, each in
Node 24.13.1. These are build prerequisites, not upstream
test-suite passes. See [the prerequisite evidence](evidence/full-engine-prerequisites-2026-09-19.json).

The repaired frozen Node build passes **6/6 unchanged upstream IO tests**:
`IO_test`, `tempfile`, `sync_shared_mutex`, `async_select_timer`,
`async_tcp_server_client`, and `async_udp_sockets`. All 7,267 original file hashes
remain unchanged for that run. See [the IO smoke evidence](evidence/full-node-io-smoke-2026-09-19.json).
This verifies the actual Lean scheduler and ordinary TCP/UDP/timer APIs in Node;
it is still only a subset. The real compiled Lake entry point now starts in Node. The Node
compiler and Leanc also generate and execute an ordinary Lean program through
the Wasm C toolchain without spurious runtime or compiler diagnostics. These
checks do not establish broader tool compatibility. A new complete Node run uses
frozen build `wasm64-v6`, three CTest workers, and a documented 900-second deadline.
The initial registration error in the generated harness is retained separately;
no test ran during that error.

Further full-runtime work adds DNS, system information/environment, signals, and
actual OS thread IDs. Seven focused JavaScript regression tests pass; direct host
checks cover Node. The unchanged DNS and system-information tests
also passed in Node build v8. These host checks are not a full Lean suite result.

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

For directory enumeration, the host now uses asynchronous POSIX `scandir` without
sorting and copies raw filename bytes; direct native-order/invalid-UTF-8 checks pass
in Node, along with six other filesystem/lock regressions. Broader runs also exposed HTTP timing and
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
probes now pass in Node: network-interface records/order match
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
that IO completes in Node.

Both original stack-overflow diagnostic tests then passed on Node v19. The
interpreter's `const_fold` run still exhausted its configured 16 MiB C stack;
raising only `LEAN_STACK_SIZE_KB` does not enlarge the compiler's main pthread.
The v20 build therefore makes the main reservation configurable and defaults to
64 MiB. The unchanged `const_fold` driver now passes in Node, including both AOT
and interpreted execution. This stack setting does not edit a test.

The maintained prerequisite suite now passes in Node, including the concurrent host-IO/dynamic-loading reproduction and C++
exceptions thrown by a dynamically loaded library and caught by its caller.
The compiler retains the C/C++ runtime ABI, arithmetic helpers, and exception tag
for plugins loaded after startup. Optional profiling archive members are not
rooted in uninstrumented programs. See [the ABI and RPC evidence](evidence/full-engine-abi-rpc-2026-09-19.json).
The v19 original FFI run passed precompilation, but failed C++ FFI on `__multi3`
and reverse FFI on empty CMake shared-library placeholders. The v23 rerun passed
the unchanged C/C++ FFI example and `pkg/test_extern` (**2/3**). Reverse FFI now
links but fails at startup because the Wasm loader ignored its embedded `rpath`.
The executable adapter now records those paths and expands `$ORIGIN`, `${ORIGIN}`,
and macOS loader-path tokens. Linux prerequisite comparisons pass: six native
controls and the corresponding Node executions, including Unicode
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
stack. All 7,267 original hashes remained unchanged. The traced streaming derivative (kept separately under `.work`) still
missed early response bytes; enlarging the preinitialized worker pool alone did
not resolve it. Native `instances` used approximately 3.44 GiB RSS and passed;
the full Wasm build's memory failure remains under investigation.

The earlier full Node v6 baseline also remains in progress; fixes in later snapshots do not alter
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

The six packaged application integration tests passed again in Node,
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
Emscripten. Sending the numeric
offset and reconstructing the view in the receiving
thread repairs the bridge. Synchronous requests, response copies, and asynchronous
completion from several threads pass **5/5** checks above 2 GiB and above
4 GiB in Node. The original `instances` rerun passed
in Node in **190.81 seconds**, with all 7,267 original hashes unchanged. This
uses a separate, recorded JavaScript-only derivative of frozen v25; the Wasm
compiler bytes are identical.
The ABI/thread/dynamic-loading prerequisite checks also pass after this
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

The v27 unchanged HTTP rerun still fails case 22's early-streaming window. A
parallel derivative multiplies every millisecond interval by ten, including the
producer delay, consumer polling interval, connection timeouts, and watchdog
polling cadence. All request/response bytes, functional assertions, polling
counts, and relative timing ratios are unchanged; its 36 changed lines and input
hash are recorded. That derivative passes all 22 cases in native Lean and Node.
A factor-50 native control passes; its engine
comparisons are pending. These runs overlapped other work before resource
isolation was added, so fresh low-contention comparisons remain necessary.
It is **not** counted as a pass of the original timing-sensitive file, and does
not establish that every HTTP scheduling difference is resolved. See
[the timing evidence](evidence/http-scaled-timing-2026-09-19.json).

The old full Node v6 run was interrupted by desktop OOM
failures. Earlier references to it being in progress are historical; it is
not still running and has no complete result. Node retains 7,266 of the
7,267 original hashes; its Lake `kinds` driver overwrote the
original `dynlib\n` scratch output with an empty file. That alteration is
recorded and preserved, not silently repaired. New runs use one workload at a time,
one CTest job, and the proactive resource guard. Resource-aborted runs are
reported separately from Lean failures. See [the diagnosis](RESOURCE_FAILURES.md)
and [the recorded partial results](evidence/resource-protection-2026-09-19.json).

The first guarded v26 `instances` retry stopped at the proactive memory budget;
it is not a conformance result. A separate eight-worker derivative retained the
same Wasm bytes and completed the original test at **5.55 GiB** peak, but failed
with an unexpected `_private` module lookup. Both attempts preserved all original
test hashes. The reduced-worker native-allocator build then passed its
primitive/control executions in native Lean and Node: interface
enumeration, small scalar fields, large naturals, archive round trips, and native
imports of Wasm-produced modules. Its guarded sequence peaked at **6.46 GiB**;
no OOM, swap, or memory-throttling event occurred. These checks narrow the
allocator investigation but do not establish full compatibility. See
[the allocator and resource evidence](evidence/reduced-worker-allocator-2026-09-20.json).

A bounded engine investigation narrows the remaining memory work: native Wasm
memory64 supports sparse pthread stacks and host access above 4 GiB in Node. See
[the memory64 evidence](evidence/native-memory64-2026-09-19.json).

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
memory was 3.24 GiB. The run preserved all upstream hashes with zero OOM or
throttling events. These are subset results and one successful Node timing run,
not proof of timing stability or full parity. See [the guarded regressions](evidence/guarded-runtime-regressions-2026-09-20.json).

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
fixture then passed in Node. Seventeen related
host/application checks passed. These are additional differential checks, not upstream-suite passes;
the packaged cooperative path was addressed separately afterward. See
[the original and fixed comparisons](evidence/fifo-finalizer-2026-09-20.json).
The unchanged upstream `file_read_overflow`, `IO_test`, and `tempfile` tests then
passed in fixed Node: **3/3** executions, all 7,267 source hashes intact
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

A separate filesystem comparison found a shared-worker-pool deadlock: four
blocking reads could prevent their dependent writes from starting in the Node
host adapter. Native Lean completed the same small control.
The first full-Lean fixture lacked a task-readiness barrier and passed on the
old runtime; those results are retained. Adding ordinary `IO.Promise` readiness
barriers exposed the old full Node runtime's timeout while native Lean passed.

Blocking file operations now lease independent host workers, with at most two
idle workers retained briefly. The synchronized ordinary-Lean fixture passes
in full Node, which still passes the
buffered-finalizer regression. Nineteen host/application checks and a separate
open-handle lifetime check passed. The full differential run peaked at 3.38 GiB
with no OOM, throttling, or swap use. Frozen v36 contains these host changes and
the handle-ID fix while preserving the exact v35 Wasm and embedded dispatch.
The paused v35 campaign remains a separate older-runtime result. See
[the retained comparisons](evidence/fifo-workers-2026-09-20.json).
The unchanged `file_read_overflow`, `IO_test`, and `tempfile` registrations also
pass on v36 in Node: **3/3**, with all 7,267 original hashes intact. Their
combined preparation/run peaked at 5.56 GiB with zero OOM, throttling, or swap.

The memory guard's initial CPU-priority setting caused an independent harness
failure in `async_systems_info`: native Lean itself could not change priority
from 5 to 3 without elevated privileges. Preserving normal priority fixes that
control and the unchanged test passes in v36 Node. All 7,267 source hashes remained intact. The memory cap and stop
thresholds are unchanged; the engine comparison peaked at 3.44 GiB with no OOM,
throttling, or swap. See [the priority evidence](evidence/guard-priority-2026-09-20.json).

The packaged application path now finalizes buffered files asynchronously as
well. Its original FIFO regression timed out in stock Node.
Adding a suspending finalizer exposed a separate scheduler defect: rewind reset
the C stack to its empty top instead of preserving the live frames' stack
pointer. The subsequent allocator call overwrote Lean's reference-count cleanup
list. Saving and restoring the suspended pointer fixes the trap. Task-local
stream destruction now runs as its own resumable entry and detaches its stream
references before yielding.

Freshly built applications pass both the dropped-handle and task-local stdout
fixtures in stock Node on Linux x64, matching both native controls.
The combined build/comparison peaked at
0.41 GiB with no OOM, throttling, or swap use. These are additional differential
regressions, not new upstream-suite passes or proof of fatal-teardown parity.
See [the retained failures and fixed comparisons](evidence/cooperative-finalizers-2026-09-21.json).

The TCP host now binds a real POSIX socket immediately and preserves its
descriptor through listening or connecting. A new ordinary-Lean fixture matches
native output in the packaged Node application and the full compiler
facade on Linux x64. It covers queries before listening, ephemeral ports,
deferred address-in-use errors, keepalive, repeated listen calls, bound clients,
readiness checks, small reads, and replies after half-close. The same application
Wasm fails with the previous host module in Node.

The unchanged `async_tcp_fname_errors`, `async_tcp_half`,
`async_tcp_server_client`, and `async_http_hang_regressions` registrations pass
in Node (**4/4**), with all 7,267 original source hashes
intact, using frozen v38. Repeated host checks also
release 100 bound/failed-bind sockets and ten client/server pairs
without OS descriptor growth. Fresh application and full-runtime comparisons
peaked at 3.00–3.11 GiB.

Windows still uses deferred binding, and the POSIX implementation requires
native macOS validation. See
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
hashes remain intact. Five focused lookup controls and all existing ABI,
threading, dynamic-loading, and exception checks also pass in Node. The
maintained implementation is now frozen as v46. Broader upstream validation
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
control in packaged Node and the full Node compiler; ten related
application/host tests pass. The full snapshot is v48, with unchanged Wasm
bytes. The unchanged upstream process, environment, and
parallel-cancellation regressions pass 3/3 in Node. All original hashes
remain intact, with no OOM, throttling, or swap use. Broader upstream validation
remains in progress; see
[the retained comparisons](evidence/process-lifetime-2026-09-21.json).

A separate ordinary Lean comparison caught child working-directory paths being
normalized before the OS could follow a symlink and subsequent `..`. Preserving
those components fixes Node. Native Lean, stock packaged Node, and the full
Node compiler now pass absolute and relative cwd controls. The full comparison peaked at 2.43 GiB with no resource abort,
OOM, throttling, or swap. Its Node snapshot is v52, with unchanged Wasm. These are supplemental Linux path checks, not full-suite
passes or proof of spawn-error/race parity; see
[the before/after evidence](evidence/process-cwd-2026-09-21.json).

Another ordinary Lean fixture exposed incorrect `IO.Process.setCurrentDir`
error numbers/messages and missing search-permission validation for virtual
working directories. Native Linux and packaged and full Node now match exactly on seven path/error cases. The application run peaked
at 0.41 GiB and the full comparison at 2.46 GiB, with no OOM, throttling, or swap.
Full snapshots v55/v56 preserve the previous Wasm bytes. Cwd rename/removal,
embedded-NUL behavior, and non-Linux validation remain open; see
[the before/after comparison](evidence/cwd-errors-2026-09-21.json).
The independently checkpointed v52 Node campaign continues on its original
snapshot; these focused new passes are not imported into that campaign.

That original-driver campaign is now checkpointed at **27 passes, one resource
abort, and 3,868 pending registrations**. `docstringLinksExamples` reached the
8.01 GiB proactive budget. An optional parallel harness compiles the unchanged
two-line `run_test.lean` driver ahead of time in Node. Only its
exact invocation is replaced; the full server/compiler children and all original
tests and expected outputs remain unchanged. This preparation reduces the
driver's interpretation overhead without changing the memory limits.

The five original cancellation/documentation/hover controls pass **5/5 in native
Lean and 5/5 in Node**, with Node peaks of 6.20–7.31 GiB.

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

The expanded ordinary Lean fixture matches native Linux in packaged and full
Node. It includes ten child-error cases,
environment keys such as `__proto__`, and an absolute child cwd after removal of
the parent's directory. That last case exposed a separate Node worker-startup
failure. Private worker bootstrap handling now preserves the OS cwd and permits
file operations there. The final full
comparison peaked at 2.48 GiB, with zero OOM, throttling, or swap.

Eleven native-file checks pass, including four blocked FIFO readers followed by
their dependent writes after cwd removal in Node. The larger process
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
in Node: 3/3 runs, with all 7,267 original file hashes unchanged before
and after every run. Their largest observed peak was 4.74 GiB, with zero OOM,
throttling, or swap.
The maintained full probe executes and verifies an immutable fixture copy. The actual worker failures and their passing reruns are retained separately.
Unflushed fork-buffer duplication, concurrent cwd changes, and native non-Linux
validation remain open. The launcher adds startup overhead; these comparisons
do not establish complete process or full-suite conformance. See
[the retained process and worker evidence](evidence/process-spawn-2026-09-21.json).

A separate ordinary Lean fixture verifies embedded-NUL behavior. The native
runtime passes POSIX process strings and `setCurrentDir` directly to C interfaces,
returns `none` for NUL-containing `getEnv` names, and rejects NULs in filesystem
paths. Lasm had rejected process strings too and Node truncated environment
lookup names. The private host now preserves these API-specific behaviors.
Comparisons match native Lean in the full Node compiler,
including environment key collisions/removal and structured directory errors.
Filesystem read, metadata, and both rename-operand controls retain their errors
and leave the sentinel contents unchanged. This final full comparison peaked
at 2.70 GiB with zero OOM, throttling, or swap. The same immutable fixture was
used for the retained failing baseline and passing rerun; no upstream test was
changed. Packaged Node checks also pass: the new
fixture plus the existing cwd-error and spawn comparisons. The separate v52
Node campaign is checkpointed at 31 passes, zero failures/resource aborts, and
3,865 pending registrations. Native non-Linux validation and other string-boundary cases remain
open. See [the NUL evidence](evidence/process-nul-2026-09-21.json).

Linux working directories now retain their directory identity across rename and
removal. Relative filesystem operations and child processes use that identity,
and in-flight operations keep their own directory lease across later changes.
The same twelve-control ordinary Lean fixture failed in Node before
this correction and now matches native Lean in the full Node compiler. Seven
direct host checks and 36 packaged regressions pass, including disposal, pending
FIFO operations, instance isolation, and descriptor cleanup. The pinned native
`IO.Process.getCurrentDir` crashes after directory removal; Lasm deliberately
returns structured ENOENT instead. `IO.currentDir` retains the native user error.

The selected unchanged upstream registrations (`IO_test`, `Process`, `tempfile`,
and `async_http_hang_regressions`) pass 4/4 in Node. All 7,267 original file hashes stayed intact.
The successful focused full comparison peaked at 2.54 GiB; the selected upstream
runs peaked at 4.75 GiB, without OOM, throttling, or swap. Two linker attempts were
proactively aborted for memory pressure, separately from test failures. A
process-local base-page linker run completed under the same guard at 6.95 GiB;
the allocation controls and build receipts are retained. Non-Linux directory
identity, permission-change races, and broader suite conformance remain open.
See [the cwd comparison and resource evidence](evidence/cwd-tracking-2026-09-21.json).

The supplementary `Handle.truncate` comparison exposed a smaller filesystem
error discrepancy: Lasm returned the position query's
ESPIPE error for pipes, whereas native Lean proceeds to `ftruncate` and returns
EINVAL. Preserving the native call sequence fixes both pipe directions while
retaining the read-only-file error and buffered read-cursor behavior. The same
immutable fixture now matches native Lean in the full Node compiler; 15
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
passed **3/3 repetitions in Node**, taking 10.15–10.31 seconds; these are
whole-file runtimes.
The native control passed too. Nine focused loader controls pass, including
export mutations and worker synchronization indexes. The maintained SDK patch
also passes a native C control and Node Wasm controls that exchange
newly resolved function pointers between already-running threads.

The repeated HTTP run peaked at 2.37 GiB, and SDK/suite preparation at 2.20 GiB,
with zero OOM, throttling, or swap. Diagnostic instrumentation and profiling
results remain separate from ordinary original-source passes. The broad frozen
v52 Node campaign independently reached 34 passes, zero failures/resource aborts,
and 3,862 pending registrations. Full-suite and broader IO conformance remain
open. See [the loader profile, repair, and controls](evidence/symbol-lookup-2026-09-21.json).

The repaired loader also passes **4/4 selected unchanged upstream registrations**
in Node: reverse FFI, the HTTP hang regressions, timer selection, and module
initialization. Every run verified all 7,267 original file hashes
before and after execution; none changed. The largest process-tree peak was
4.26 GiB, with zero OOM, throttling, cap-hit, or swap events. These are focused
regressions, separate from the broad campaign and its pending registrations.
See [the upstream loader regression evidence](evidence/symbol-lookup-upstream-2026-09-21.json).

A supplementary permission comparison exposed a child-launcher discrepancy:
native Lean inherits its cwd after search permission is revoked, while the old
launcher tried to enter it again and failed. Directory identity checks now avoid
that extra entry. The ordinary Lean fixture now matches native in the full Node
compiler.
Standalone packaged mains and source launchers propagate cwd changes too, while
embedded module instances retain separate directories by default.

All 31 packaged regressions pass, including six built/source-launcher checks and
the unchanged existing process error/lifetime tests. Seventeen direct host checks
pass. The initial fixture preparation error and intermediate dropped-child
failures are retained separately. These runs peaked at 2.21 GiB without OOM,
throttling, cap hits, or swap. The broader v78 Node campaign independently reached
56 passes and 3,840 pending registrations, with all 7,267 original hashes intact
on every completed run and a 3.37 GiB maximum peak. Embedded virtual cwd
permission inheritance, non-Linux behavior, and complete suites remain open. See
[the permission and lifecycle evidence](evidence/cwd-permissions-2026-09-21.json).

The new frozen hosts also pass **4/4 unchanged upstream regressions** in Node:
`IO_test`, `Process`, `async_http_hang_regressions`, and `tempfile`.
All 7,267 original hashes remained intact before and after every registration.
The largest process-tree peak was 3.76 GiB, without OOM, throttling, cap hits,
or swap. See [the upstream cwd regression evidence](evidence/cwd-permissions-upstream-2026-09-21.json).

A new ordinary-Lean fixture exposed fresh pthread bootstrap failures after cwd
deletion in Node. Node now preloads its private worker cwd fallback; the
application's directory is never changed for this operation.

Both named- and deleted-directory fixtures now match native Lean in the full
Node compiler. A clean serial run passes **48/48 packaged and host tests**, and
five worker transport/lifecycle checks also pass. The tests preserve shared
memory, transferred ports, nested exceptions, and Node's native worker
diagnostics. Initial fixture errors, proxy error-field loss, and three
source-launcher timeouts caused by concurrent maintainer edits are retained;
the clean rerun kept sources fixed and used the same deadlines. No upstream test
or expected output changed. Validation peaked at 2.19 GiB including suite
preparation, with zero OOM, cap, throttling, or swap events. See
[the native-launcher and worker evidence](evidence/native-launcher-cwd-2026-09-21.json).

Independent virtual-cwd permission inheritance, non-Linux conformance and the
complete upstream suites remain open. The repaired frozen Node build is v86; its
result is not imported into the older v78 broad campaign.

The repaired hosts pass **8/8 selected unchanged upstream registrations** in Node:
both stack-overflow diagnostics, dedicated-worker shutdown, the ten-million-element
list calculation, `IO_test`, `Process`, HTTP hang regressions, and `tempfile`. Both compiled and interpreted paths ran where the
original driver requests them. All 7,267 original file hashes remained intact
before and after each registration. Peak workload memory was **3.78 GiB**, with
zero OOM, throttling, cap-hit, or swap events. This focused result does not close the complete-suite or
packaged-runtime gates. See [the upstream regression evidence](evidence/native-launcher-upstream-2026-09-21.json).

Supplementary filesystem comparisons exposed further stream-state defects. A final unterminated `Handle.getLine` left EOF set, hiding
appended data on the next read. The optimized reader also mishandled partial
errors and consumed different bytes when a previous error remained set. Finally,
`Handle.read` checked a sticky error before EOF, unlike native Lean. The adapter
now preserves each native operation's check order and uses a character loop when
the optimized reader cannot preserve error-state behavior.

The same six ordinary-Lean cases now match native in the full Node compiler
and packaged Node runtime. Nineteen reported packaged/host regression
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
exposed the mismatch. Both versions of that baseline are retained, and the
final ordinary-Lean comparison matches native in the full Node compiler and
packaged runner.

A small full-pipe control then exposed Node changing shared standard descriptors
to nonblocking mode during Worker setup. Descriptor-backed diagnostic forwarding
avoids both implicit `process.stdout` accesses, including the one inside ordinary
stream piping. A checked private Node stream flag preserves the default behavior
of unreferenced workers. Diagnostics, descriptor ownership, worker shutdown, and
event-loop progress during flush/disposal have passing controls. This adapter is
validated on Node 24.13.1 Linux x64; other Node layouts and operating systems need
validation. Forced-exit semantics and broader terminal behavior remain open.

The frozen v97 Node console snapshot also passes **7/7 unchanged upstream
registrations**: both stack-overflow diagnostics, dedicated-worker shutdown,
`IO_test`, `Process`, HTTP hang regressions, and `tempfile`. All 7,267 original source hashes remain intact before and after every
registration. Peak workload memory was **3.79 GiB**, with zero OOM, throttling,
cap-hit, or swap events. These focused results are separate from the older
v89 broad campaign.
Eight reported packaged controls, fourteen final host/worker controls, and all
22 Lean-server Vitest tests also pass. The record retains both console baselines,
the initial failing full-pipe checks, and the corrected diagnostic-fixture
cleanup; see [the complete console evidence](evidence/console-buffering-2026-09-21.json).

The subsequent filesystem repair replaces POSIX engine `realpath` calls with
asynchronous libc calls and copies the returned bytes before freeing their
storage. Malformed filename bytes had differed: Node produced two replacement
characters where native Lean produced one. The bridge now lets Lean perform its own byte conversion.

The identical 17-case ordinary Lean fixture now matches native Linux in the
full and packaged Node runtimes. **Twelve packaged checks** pass,
including existing directory-error and renamed/deleted-directory controls.
The final v107 Node snapshot also passes the selected unchanged upstream
registrations, including `externBoxing`, filesystem, module-header,
and private-name controls. All 7,267 original files remain unchanged before and
after every test; applicable compiled-driver artifacts also pass their integrity
checks. Peak memory was **3.70 GiB**, with zero OOM, throttling, cap-hit, or swap
events. The record retains a supplementary-fixture compilation error, the first
adapter's rejected buffer-ownership bug, and a log-name preparation collision.
See [the full realPath comparisons](evidence/realpath-2026-09-21.json).
Native macOS/Windows validation, long paths, races, and complete suite coverage
remain open.

- [x] Complete clean native control run with original-source integrity checks.
- [x] Full compiler startup in Node.
- [ ] Complete unchanged suite inside Node.
- [ ] Resolve all nonfundamental differences and substantiate remaining limits.

No claim that the remaining differences are fundamental has been established.
The current work includes ordinary implementation defects in build settings,
runtime ABI declarations, interpreter symbol retention, and host API coverage.

Reproduction and experimental build details are in
[the full-suite harness documentation](../scripts/full-lean/README.md).

## Standalone exit parity, September 21

Full and packaged Node runners now distinguish ordinary exit
from forced exit. The same ordinary Lean fixture matches native status,
stdout, stderr, and open-file contents for normal return, `IO.Process.exit`,
and `IO.Process.forceExit`. Node previously flushed stdout incorrectly on forced exit. This revision called native C `exit`/`_Exit` before JS cleanup. The later
broad campaign exposed an unsafe ordinary-exit path, repaired below.

The expanded packaged checks passed 51/51, including generated and source
launchers, embedded-host survival, console buffering, worker diagnostics, and
loader controls. Full Node passed the same 12 unchanged upstream
regressions; all 7,267 original file hashes were verified before and after each
test. The build and checks had zero OOM, cap-hit, throttle, or swap events.
These are Linux x64 results. Embedded forced-exit buffer disposal and native
macOS/Windows validation remain open. See
[the baseline, repair, and resource evidence](evidence/process-exit-2026-09-21.json).

The initial exit-repaired facades inherited the builder's `LASM_EMSDK`, so their
external C tools used that development SDK despite the frozen compiler and host.
Their recorded configurations preserve this fact. Follow-up facades now select
the captured SDK first, even with the builder environment still present. Node
passes four unchanged C/FFI controls with these corrected settings,
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

All three unchanged upstream regressions pass in Node: **3/3**. Native
Lean and the full Node runtime match status, stdout, stderr, and open-file
contents for return, ordinary exit, and forced exit. The packaged exit,
console, host, and worker checks pass **33/33**. A small background-compilation
probe passed both old and new implementations, so it is retained as a
non-reproducing control, not proof of the repair.

All 7,267 original hashes remained unchanged. All OOM, cap-hit, throttling,
and swap counters were zero; the largest repaired upstream run peaked at
3.65 GiB. These are Linux x64 results; complete campaigns, embedded forced-exit
disposal, and other platforms remain unfinished. See
[the failures, debugger trace, repaired snapshots, and comparisons](evidence/engine-exit-shutdown-2026-09-21.json).

## Embedded forced-exit cleanup, September 22 UTC

The packaged runtime previously flushed open files while disposing an embedded
guest after `IO.Process.forceExit`. The supplementary native comparison records
that mismatch in Node. Cleanup now retains the exit reason and
purges pending native stream buffers before closing them on Linux/macOS. It waits
for queued file operations, including stdout writes whose stream has not yet been
created, and repeated disposal preserves the original exit mode.

On Linux x64, the native/Node comparison cases now pass, including host
survival in each embedded case. The generated Wasm is byte-identical before and
after the host repair. All 63 file, console, host, and process-exit regressions
pass with zero skips; peak memory across comparison and regression runs is
0.54 GiB with no resource event. These are supplementary application checks,
not upstream-suite registrations. Windows discard remains unimplemented and the
macOS branch still needs native validation. See
[the complete cleanup evidence](evidence/embedded-force-exit-2026-09-22.json).

## Full-runtime host transfer lengths, September 22 UTC

The original full-host ABI used signed 32-bit response sizes and 32-bit input
lengths. The same small synthetic fixture reproduces 12 failures in Node at
the 2 GiB/4 GiB boundaries. Pointer-sized input/copy counts and signed 64-bit
responses now pass all 24 cases in Node, including success, error, synchronous
input, and asynchronous input lengths. It substitutes length-only RPC responses and never allocates those large
payloads. Separate actual bridge controls also pass with small payloads at
low addresses and above 2 GiB/4 GiB.

The first compiler link failed because its generated export list still named the
old private `Reply` constructor. That failed attempt is retained; regenerating
exports and native registries fixed the link. Frozen v120 keeps the lowered
4 GiB profile; v121 uses native memory64 with an 8 GiB maximum. On v121, all
eleven selected unchanged controls pass in Node. All 7,267 original source hashes match before and after
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
matches only three of nine cases; the repaired runtime matches all nine in
Node. These controlled values do not
establish native Windows/macOS filesystem conformance.

The build also now explicitly supplies the correct `wasm64-unknown-emscripten`
compilation target for both memory64 modes. CMake's earlier target query omitted
the memory setting and incorrectly recorded `wasm32`. The rebuilt full compilers
report the correct Linux host, 64-bit width, and Wasm64 target in Node. Six
unchanged upstream registrations pass, **6/6**:
`IO_test`, `currentDir`, `externBoxing`, `filePath`, `readDir`, and `realPath`.
All 7,267 original hashes remain intact before and after every test. The largest
test peak is 2.12 GiB, with no resource abort or memory event.

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

Three native controls and the Node engine controls pass: mixed C/C++ sources,
objects, archives, C++ compilation of a `.c` input, and response files containing
paths with spaces. The full compiler snapshots differ from their platform-fixed
parents only in the external compiler adapter. The unchanged upstream Lake FFI
and reverse-FFI examples, dedicated-thread compilation, and external boxing
then pass in Node, **4/4 registrations**. Every attempt preserves all
7,267 original source hashes. Peak memory is 5.05 GiB, with zero resource aborts,
OOM, hard-limit, throttling, or swap events. These local
results do not establish complete suites or cross-OS conformance. See
[the baseline failure, repaired controls, and upstream results](evidence/cc-inputs-2026-09-21.json).
