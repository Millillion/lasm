# Lean 4.34 upstream application acceptance

The latest-release target is now **4.34.1**. Its
[fresh inventory](evidence/lean-4.34.1-upstream-inventory-2026-09-25.json) verifies
7,673 original files and links and records 4,069 registrations. The two added
BitVec cases are native build-time checks; the new `rc_sticky` C regression
requires both native and deployed runtime execution. There are now 3,499 native
build-time registrations and 111 reviewed mixed drivers; all other category
counts and upstream exclusions are unchanged. The
[full registrations](evidence/lean-4.34.1-upstream-application-inventory.json),
[source manifest](evidence/lean-4.34.1-upstream-source-files.json) and
[mixed-driver review](evidence/lean-4.34.1-mixed-driver-classification.json)
remain separate from earlier evidence. Five focused checks verify release
isolation, shard coverage and CI argument forwarding. Harness support and this
inventory do not establish new suite passes. The full runtime rebuild now
passes, and the [unchanged `rc_sticky` driver](evidence/lean-4.34.1-installed-main-2026-09-25.json)
passes both natively and through installed `.25` in Node, Deno and Bun on Linux
x64. The parallel adapter maps only its exact C compiler invocation to the
installed application linker. Original assertions remain active; unexpected
arguments fail. Relocated executions with sources hidden and PATH empty also
match native output and status. Broader 4.34.1 suite campaigns remain pending.

[Three additional HTTP IO comparisons pass on Node](evidence/lean-4.34.1-upstream-http-io-node-2026-09-25.json):
69 body actions, twelve body-framing groups and four request-header groups.
Each unchanged original native elaboration driver passes first. A reviewed
parallel adapter uses Lean's parser to replace only unwrapped `#eval` tokens,
preserving every expression, assertion and timeout byte. Its ordinary `main`
executes all 85 actions at runtime, with exact interpreted-native,
C-compiled-native and installed `.25` deployed output. Four integrity controls
cover Unicode/comment preservation and rejected contexts/ranges/collisions.
Source-hidden relocation uses empty PATH. These registrations retain their
native-build-time classification; additional deployed API comparisons are
recorded separately. Deno/Bun counterparts are still pending at this checkpoint.

The [complete three-engine continuation](evidence/lean-4.34.1-upstream-http-io-three-engines-2026-09-25.json)
now passes all nine comparisons: all 85 original actions execute in each stock
engine, for 255 deployed actions. Every unchanged native driver and both native
parallel execution modes pass, and all deployed exits/stdout/stderr match exactly.
All guards release successfully, with no memory-limit, OOM or swap events.
The scope remains three reviewed HTTP inputs on Linux x64, with the original
registration categories and broader suite/API gaps unchanged.

The [expanded Node continuation](evidence/lean-4.34.1-upstream-http-io-expanded-node-2026-09-25.json)
now passes twelve original HTTP IO inputs and all 148 actions. The nine new
inputs cover dispatch, expectations, incremental parsing, parser fuzzing,
keep-alive, replayable bodies, request lines, response framing and trailers.
An explicit review ledger pins each input's release, source hash and action
count. Five integrity controls pass; a new release or changed source cannot
silently reuse an earlier review. All original native drivers, both native
parallel modes and source-hidden installed Node deployments match, with no
changed assertions/deadlines or resource stops. Deno/Bun runs of the nine new
inputs continue separately; serial fuzz/hang tests and other contexts remain
outside this adapter's verified scope.

The results and checked items below retain their original **4.34.0** scope.

The [product plan](PLAN.md) calls for ordinary native compilation followed by
execution in stock Node, Deno or Bun. This inventory records every default
upstream CTest registration at Lean commit
`293d5d0c0c3f3dded4688b3ccd6a33939ac5102b`. **Inventory is not a test pass.**
The earlier Lean 4.32 compiler-in-Wasm results remain separate.

`scripts/inventory-upstream-applications.py` streams the pinned source archive,
verifies 7,669 original test/example/helper files and links against the extracted
tree, and asks CTest for its real registrations. No upstream test, sidecar or
expected output is edited. The [full inventory](evidence/lean-4.34-upstream-application-inventory.json)
contains all 4,066 cases, source hashes, compile/interpreter controls, sidecars
and pending status. The [source manifest](evidence/lean-4.34-upstream-source-files.json)
also covers expected outputs and helper scripts.

| Initial category | Cases | Execution work |
| --- | ---: | --- |
| Compiled applications | 101 | Managed native C generation; native and deployed application runs |
| Compiled test drivers | 202 | Compile unchanged docstring-parser driver and run every original input |
| Compiled drivers using a native compiler | 155 | Run Lean drivers in the target engine; record their native compiler/LSP subprocesses separately |
| Native build-time checks | 3,497 | Test the managed compiler; add deployed API cases for compile-time IO/evaluation |
| Mixed scripts requiring review | 110 | Identify build, plugin, interpreter and application phases in each original driver |
| Source lint | 1 | Run the upstream source checker |

These categories guide implementation; none authorize dropping tests or shrinking
the complete API goal. In particular, an `#eval` filesystem check passing in the
native compiler does not prove deployed filesystem behavior. The API audit must
supply runtime differential coverage for those calls.

Fifteen explicit upstream omissions remain listed separately: seven benchmark
inputs with `.no_test`, five flaky/nondeterministic CMake exclusions, and three
Lake bootstrap/toolchain/online drivers. Four registered compile-pile cases have
compilation disabled by upstream markers; the inventory retains that fact and
their interpreter settings. These cases require an explained parallel harness
where appropriate; they are neither successes nor fundamental Lasm limitations.

- [x] Record unchanged default registrations, exclusions and source integrity.
- [x] Run all native build-time registrations with the managed tools on Linux x64.
- [x] Run the original source-lint registration against the complete pinned archive.
- [ ] Run application cases and compiled drivers through the shipping AOT path.
- [x] Finish per-driver classification of mixed shell/Lake/package tests.
- [ ] Execute separately identified upstream exclusions without changing tests.
- [ ] Audit all shipped APIs and add native-versus-target coverage where missing.
- [ ] Complete stock Node/Deno/Bun and native six-platform acceptance.

Resource aborts, cold-build deadlines, behavior failures, unsupported inputs and
unexecuted cases must stay distinct in reports. No broad campaign should start
until it uses the shipping application path and obeys the resource guard.

The separate [excluded-concurrency controls](evidence/upstream-excluded-concurrency-2026-09-24.json)
run the unchanged `async_select_channel` and `sync_mutex` elaboration drivers,
then import their original definitions into a supplementary ordinary main.
Installed `.19` matches native compiled behavior in three repetitions each in
Node and Deno on Linux x64, covering eight channel-capacity assertions plus
mutex, try-lock and condition-variable checks. Bun fails its first deployed
repetition with stack overflow. A preserved Linux diagnostic passes after
raising both its OS worker reservation and engine execution budget; the engine
budget alone fails. Bundled startup integration remains pending. Peak memory
is 3.59 GiB without resource events. These are extra controls for upstream
exclusions, not additional default-suite passes or proof against all races.

Installed `.20` now [bundles the Linux Bun startup repair](evidence/bun-stack-startup-installed-2026-09-24.json)
and passes the same three concurrency repetitions with sources hidden and an
empty PATH. No caller flag or engine patch is required. Fourteen startup and
deployment controls also pass, covering raw environment bytes, descriptors,
same-PID signals and preservation of preload effects. Peak installed-build/run
memory is 3.45 GiB without resource events. Other platforms and transparent
deep-stack embedding remain open; the Linux ARM64 helper is cross-compiled,
and its native source-control workflow is prepared separately.

The [four compilation-disabled Node controls](evidence/upstream-compile-disabled-node-2026-09-24.json)
now pass through installed `.19`: `compactor_chain`, `dep_regions`,
`dep_regions_miss` and `identifier_completion`. Original drivers and markers
run first, followed by explicitly separate native AOT and deployed AOT checks
with the original assertions. All 7,669 originals and harness hashes remain
unchanged. Native Lean subprocess arguments are recorded, including the three
language-server launches in the completion benchmark. The 3.50 GiB peak caused
no resource events. Deno/Bun and other native platforms remain pending; these
extra runs do not alter upstream's default compilation-disabled status.

The [Deno and Bun follow-ups](evidence/upstream-compile-disabled-all-engines-2026-09-24.json)
also pass all four extra AOT controls, giving twelve passes across the three
engines on Linux x64. Node used `.19`; Deno and Bun used `.20`. All 7,669
originals and harness hashes remain intact in every campaign. Each completion
benchmark records its three native language-server invocations separately.
The largest peak is 3.89 GiB without resource events. Default markers, broader
repaired-package campaigns and other native platform obligations are unchanged.

The new [application harness](../scripts/application-tests/README.md) now drives
the installed npm candidate. The first five Node cases exercised filesystem read
bounds, Unicode paths, dedicated tasks, exception reporting and cross-process
closure serialization. Four passed immediately; serialization exposed a real
self-launch failure because `IO.appPath` names the portable JavaScript entry.
The host now relaunches that exact application through the current engine,
preserving ordinary child-process handling. The repaired installed candidate
passes the original closure test in Node, Deno and stock Bun. Eight loader,
three-engine child-process and shutdown controls also pass. The
[self-launch evidence](evidence/application-self-launch-2026-09-23.json) records
the original failure, both package identities, repaired runs and resource use.
Every original test/helper file and symlink remains unchanged.

The initial harness-only attempt encountered upstream's relative stage-directory
toolchain pin. The parallel suite now supplies a nearer generated release pin,
retaining the original pin and all 7,669 original entries. This is an explicit
harness adaptation, not a changed test or expected result. Broader registrations,
native compiler coverage and all-API differential coverage remain open.

All **3,497 native build-time registrations now pass** with managed Lean 4.34.0
on a standard Linux x64 CI runner. The broad run passed 3,495; the two symlink
inputs then passed after correcting the parallel harness's expected-content
lookup. Both runs verify all 7,669 original files/links before and after, and
preserve the original drivers, outputs and assertions. The
[combined evidence](evidence/upstream-native-build-time-complete-2026-09-23.json)
retains the earlier guarded resource stop and both harness defects. The completed
broad run peaked at 2.32 GiB without resource events. This result covers native
compilation and evaluation; it does not validate those same APIs when deployed
in JavaScript engines or establish the remaining platform results.

The first complete installed-application Node campaign finished all 101
registrations: **96 passed, four retained upstream's compilation-disabled
markers, and one failed**. `compile_bench/const_fold.lean` hit an
Emscripten worker-mailbox exception (`wait.value.then is not a function`); its
native output and initial failing deployment are preserved. All original
files/links and harness hashes remained unchanged. The 4.10 GiB peak caused no
OOM, throttling or proactive stop. The
[per-case record](evidence/upstream-applications-node-r1-2026-09-23.json) is the
authoritative count; earlier progress updates missed that failure. It also
identifies the six compiled fixtures that deliberately launch native Lean child
processes, keeping those compiler operations separate from deployed behavior.

The [large-stack investigation and repair](evidence/application-large-stack-node-2026-09-23.json)
now reproduce that failure with the original `LEAN_STACK_SIZE_KB=4194304`
sidecar setting. Emscripten's backing allocator retained 32-bit limits and masks,
and pthread creation used its null allocation. Pointer-width bookkeeping and
proper allocation rejection fix that cause. An additional repeated-thread check
exposed asynchronous reclamation after joining; joined threads now reclaim their
storage before returning, while detached self-cleanup retains its asynchronous
path. The tentative mailbox retry was removed.

Installed candidate `0.1.0-experimental.7` passes thirty unchanged benchmark
repetitions against native compiled/interpreted controls, and the original suite
driver passes separately with all 7,669 original entries intact. Fourteen
unchanged SDK allocator/thread controls pass in Wasm32 and Wasm64. Sparse
large-allocation controls retain a failing original-allocator comparison. Peaks
were 1.05 GiB for the sparse controls, 0.85 GiB for SDK regressions, 3.40 GiB for
the installed repetitions and 3.55 GiB for the suite-driver rerun, without
resource events. This is targeted Node/Linux x64 evidence; full repaired-package,
other-engine and platform campaigns remain required.

The unchanged `const_fold` deployment still fails in Deno 2.9.7 with a stack
overflow after both native controls pass. A small independent Wasm recursion
control distinguishes the worker's OS stack reservation from its engine stack
limit: Node succeeds with the same 64 MiB worker option; Deno fails despite that
reservation. Deno's runtime stack flag setter has no effect, and promise-wrapped
Wasm calls also overflow at their default budget. The
[Deno stack evidence](evidence/application-deno-stack-2026-09-23.json) preserves
the failed application, the successful shallow controls and the guarded
differential. This is unresolved implementation work, not a fundamental limit.

The original `tests/lint.py` also passes with managed Python and Git on Linux
x64. Its parallel harness recreates a Git index for all 13,319 files from the
complete official archive, because the unchanged checker uses `git ls-files`.
It verifies all 7,669 recorded test/helper files and links before and after and
confirms the extracted tree is unchanged. The guarded run peaked at 0.98 GiB
without resource events. This is a native source-only check, not a deployed
application result; see the [source-lint evidence](evidence/upstream-source-lint-2026-09-23.json).

All **202 documentation-parser inputs pass in stock Node 26.10.0** through
installed candidate `0.1.0-experimental.9` on Linux x64. The unchanged
`tests/docparse/run_test.lean` is compiled once through the shipping application
CLI. Each input runs first through the original native driver, then through that
same driver with its exact `lean --run` invocation mapped to the deployed main.
Original assertions and expected outputs remain in force. All 7,669 source entries
and the active harness hashes are unchanged before and after execution. The test
phase took 663.02 seconds; preparation and execution peaked at 3.40 GiB with no
resource events. The [per-case evidence](evidence/upstream-docparse-node-2026-09-23.json)
does not imply Deno, Bun or other-platform passes for this category.

The follow-up [Deno/Bun campaigns](evidence/upstream-docparse-other-engines-2026-09-24.json)
now pass **all 202 inputs in each engine**, using installed candidate
`0.1.0-experimental.10`, stock Deno 2.9.7 and Bun 1.4.2 on Linux x64. Original
drivers, assertions, all 7,669 source entries and harness hashes remain unchanged.
The sequential campaigns took 976.54 and 819.41 seconds in their test phases;
preparation and execution peaked at 3.99 GiB without resource events. This
completes this category across the three engines locally, but the earlier Node
result used candidate `.9`; a complete same-package platform campaign is still
required.

The [mixed-driver review](evidence/lean-4.34-mixed-driver-classification.json)
now assigns execution obligations to all 110 shell registrations: 78 native
build-time checks, 27 with additional ordinary compiled-application phases,
four with foreign-library/runtime-loading phases, and one upstream-disabled
lock test. This is source review, not execution evidence. Every shell file is
checked against the original inventory checksum. Lake DSL scripts, compiler
plugins and library test drivers remain native build-time coverage; executable
test drivers and `lean --run` clients require deployed application checks too.
Some original scripts intentionally edit fixtures, so their future harness must
retain a pristine reference tree and run byte-identical independent copies.

All **155 LSP client registrations pass in stock Node 26.10.0** with installed
candidate `0.1.0-experimental.10` on Linux x64: four standalone clients, one
project client and 150 interactive inputs. The original native driver runs first,
followed by the same driver running the compiled Lean client. Exact native
Lean/Lake server invocations are recorded separately. The project adapter retains
its original stage-directory pin and compiles a byte-identical client copy in a
separate release-pinned directory. This verifies deployed client behavior, not a
Wasm-hosted Lean compiler. All 7,669 original entries and active harness hashes
remain unchanged. The sequential preparation/execution run took 25 minutes
49 seconds and peaked at 3.95 GiB with no resource events. See the
[per-case evidence](evidence/upstream-lsp-node-2026-09-24.json).

The [installed `.18` Deno campaign](evidence/upstream-lsp-deno-2026-09-24.json)
now passes **all 155 registrations in stock Deno 2.9.7** on Linux x64, using
the same unchanged native and deployed-client drivers. Each selection verifies
all 7,669 original source entries and its active harness before and after.
Native Lean/Lake server commands remain recorded separately from compiled-client
behavior. The maximum guarded peak was 3.56 GiB without resource events.

The first wrapper completed the four clients and project case, then stopped at
its disk-headroom preflight before creating the interactive campaign. After
verified lossless archival, the 150 interactive cases passed in a fresh guarded
run. That safety stop remains separate from test results. Completed source trees,
including generated files, are now retained as archives verified against every
file, symlink and permission; restoration manifests accompany them. The other
native platforms remain pending for this category.

The [installed `.18` Bun campaign](evidence/upstream-lsp-bun-2026-09-24.json)
also passes **all 155 registrations in stock Bun 1.4.2** on Linux x64. All three
engines now have complete results for this client category, with their exact
package versions retained above. The Bun run preserved all 7,669 source entries
and active harness hashes, took 25 minutes 4 seconds including preparation,
and peaked at 4.16 GiB without resource events. Native Lean/Lake subprocesses
remain separately recorded. Completed source trees and shared driver binaries
were losslessly archived only after the workload released its guard. These
client passes do not close other application, API or native-platform gates.

The reviewed native-only mixed campaign now finishes **78 passed and one
upstream-disabled** registration on Linux x64 with managed Lean 4.34.0. Each
unchanged shell/Lake driver starts from its own verified source copy; intentional
fixture mutations are recorded. All 7,669 original reference entries and active
harness hashes remain unchanged. The preparation and execution run took
11 minutes 10 seconds and peaked at 3.62 GiB without resource events. The
[per-case evidence](evidence/upstream-mixed-native-2026-09-24.json) covers native
build-time behavior only. The other 31 mixed registrations retain their ordinary
application or foreign-runtime deployment obligations.

The full installed **Deno 2.9.7 compiled-application campaign now finishes 97
passed and four upstream-compilation-disabled registrations**, with no failed
cases. Candidate `.13` runs all enabled inputs with original arguments, outputs
and assertions, including the formerly failing `const_fold` benchmark and both
HTTP benchmarks. All 7,669 original files/links and active harness hashes remain
unchanged. Peak guarded memory is 4.81 GiB without pressure or OOM events. The
[complete per-case record](evidence/upstream-applications-deno-r1-2026-09-24.json)
identifies the six fixtures that deliberately launch native Lean children; their
compiler behavior remains native evidence. The four disabled inputs require
separate explained probes. Other categories, API gaps, repaired-package Node/Bun
campaigns and the other native platforms remain open.

Completed generated binaries may be stored as verified gzip archives to preserve
the disk reserve. The [archival receipts](evidence/completed-artifact-archives-2026-09-24.json)
record original paths, lengths, checksums, modes and modification times, together
with verified archive checksums and decompression results. Restore and verify a
binary before replaying its historical probe. This affects only the listed
completed experiment binaries, including older standalone test drivers; original
upstream sources, expected outputs, result receipts and failure deployments
remain in place. It does not add or remove compatibility passes.

The [latest IO campaign receipts](evidence/application-io-surface-2026-09-24.json)
also record verified archival of 25 generated symbol-registry C files in the
paused Lean 4.32 compiler research, recovering 2.31 GiB. Their original bytes,
modes and modification times are recoverable. Restore them before rebuilding
those historical snapshots; executable compiler artifacts, original upstream
tests and their result receipts were not changed. Two archive-selection
preflights exited before making changes and are retained separately. Neither
archival nor the safe disk stop counts as an application test failure.

The [additional storage receipts](evidence/completed-artifact-storage-2026-09-24.json)
preserve six earlier successful AOT deployments as verified gzip files, then
share storage for 48 byte-identical archives among 72 completed IO/package
archive paths. Every path and checksum remains valid. These archives are
immutable shared files: restore with `gzip -dc ARCHIVE > ORIGINAL`, verify the
original checksum and apply its recorded mode/time. Do not rewrite an archive
in place. Original upstream inputs, failed deployments and acceptance counts
are unaffected.

The mixed registration `pkg/ofScientific` now passes all **10,047 original
vendored vectors in each of stock Node, Deno and Bun**, using installed `.14`
on Linux x64. Its original native shell driver and independent native executable
both pass before each application build. Relocated deployments run with hidden
source trees, empty PATH and unchanged datasets; per-file counts, failure counts
and total output match native. All 7,669 reference entries remain unchanged.
The [three-engine evidence](evidence/upstream-ofscientific-2026-09-24.json) records
the 3.49 GiB maximum peak without resource events. The separate
`integration/application-upstream-packages.mjs` harness drives the reviewed
floating-point project too. Other mixed registrations and native platforms
remain open.

The unchanged `pkg/exe_private_lean_import` project also passes in all three
engines through installed `.14`, matching its native executable's exact output.
The original stage-directory toolchain pin remains intact. An initial harness
preflight rejected that pin before running the test; the repaired parallel harness
uses an additional release-pinned application copy, verifies every other original
byte, and hides all source copies before deployment. The
[private-import receipts](evidence/upstream-private-import-2026-09-24.json)
preserve the initial preflight failure and all three passes, including unchanged
original drivers and all 7,669 reference entries. Peak guarded memory was
3.56 GiB without resource events. This is Linux x64 application evidence, not
acceptance for other platforms or all mixed registrations.

The complete `pkg/float` project now passes **1,751,726 original checks in each
of stock Node, Deno and Bun** through installed `.14` on Linux x64. This covers
875,863 vectors in all 48 vendored files, each checked by the original model and
native backends. Native controls, per-file counts, totals and failure counts
match; only elapsed-time text is excluded from comparison. The unchanged program
explicitly executes `gzip`, so the isolated deployment PATH contains that one
recorded dependency. All source copies are hidden and all 7,669 reference entries
remain unchanged. The [floating-point receipts](evidence/upstream-float-2026-09-24.json)
record a 4.97 GiB maximum peak without resource events. Original NaN-class and
exception-flag policies remain unchanged; this is not proof of every possible
floating-point input or other native platforms.

The original `pkg/debug` project exposed missing panic backtraces. Installed
`.15` now captures the actual calling-thread stack: the debug executable and
four environment controls pass in Node and Deno, and the release executable
passes in all three engines. Panic location/message, termination, stdout and
uncaught exceptions match native. `LEAN_BACKTRACE=0` matches complete output;
enabled traces require real backend frames while preserving their raw output.
Native ASLR addresses and native/Wasm frame formats differ between executions.

**Installed `.15` Bun debug diagnostics failed.** Its stack contained `unknown`
Wasm frames. Retaining Wasm names did not repair the default formatter; one
structured CallSite probe crashed the isolated Bun child at about 27 MiB RSS,
without pressure or OOM events. The [debug receipts](evidence/upstream-debug-2026-09-24.json)
retain both failures and all five passing executable variants, with unchanged
original drivers and all 7,669 reference entries. Maximum build memory was
3.46 GiB. Broader panic semantics and native platform coverage remain open.

The [storage receipts](evidence/panic-storage-2026-09-24.json) retain the completed
Wasmtime compilation artifact as verified gzip, share six duplicate float
archives, and remove only npm cache copies matching retained package tarballs.
A stale-cache preflight and a release-campaign disk stop remain separately
recorded; neither changed test results. Restoring archived bytes or reinstalling
the recorded tarball recovers each experiment without modifying its inputs.

Supplementary [ordinary Lean panic controls](../integration/fixtures/PanicSemantics.lean)
exposed another difference: installed `.15` exited through a JavaScript error
instead of native `SIGABRT`. Installed `.16` now routes C abort through the host
CRT. Bun's own crash reporter is removed only immediately before intentional
abort, with a separate native-handler preservation control. All seven cases
match native exactly in each stock engine on Linux x64: fallback values, real
stderr redirection, IO panic failure, and abort with ordinary, zero, empty and
redirected settings. Sources are hidden and deployments relocated with empty
PATH. The [21 comparisons](evidence/panic-semantics-2026-09-24.json) and nine focused
unit checks pass; maximum build memory was 3.42 GiB without resource events.
These are additional controls, not unchanged upstream test passes. Private
Shell panic controls and native platform parity remain open. Earlier failing
attempts and verified archival receipts are retained.

The [installed `.18` follow-up](evidence/bun-backtrace-2026-09-24.json) repairs Bun's
frame identities. The original debug executable and all six parallel controls
pass in each stock engine on Linux x64: 21 comparisons covering enabled, disabled
and raw traces, plus abort with traces enabled and disabled. Stable diagnostics
and termination match native; actual backend frames remain recorded. Every
original driver and all 7,669 reference entries remain unchanged. Three focused
restoration checks pass, and the actual adapter captures 75-frame main/worker
stacks in Node and Bun. Maximum build memory was 3.43 GiB without resource events.

The investigation retains the failed installed `.17` comparison and small
isolated probes. Bun exposes useful `CallSite.toString()` information, but
redefining its stack-hook properties disconnects their internal behavior despite
reported data descriptors. Ordinary assignment preserves those hooks. Reading a
Wasm callee through `getFunction` causes the separate tiny crash; the adapter
avoids that operation. Full symbolization, private runtime controls and native
platform acceptance remain open.

The unchanged `pkg/path with spaces` and `pkg/def_clash` projects now pass
[six installed `.18` engine/project comparisons](evidence/upstream-projects-2026-09-24.json)
on Linux x64. Each original native shell driver runs first. The separate AOT
checks cover three cache reuses, nine relocated executions, and six expected
build rejections with the original duplicate-definition diagnostic assertions.
Cross-package private imports retain their distinct definitions. The spaced
deployment also runs after a file appears at its path prefix. All build-source
copies are hidden and deployment PATH is empty; exit status, stdout and stderr
match native exactly. All 7,669 reference entries remain unchanged.

Maximum test memory was 3.45 GiB without resource events. A disk preflight
stopped before the final Bun case began; its separate continuation passed after
verified archival restored headroom. The receipts retain that stop and archives
of completed binaries, parser-source trees and all 2,516 audited standard-library
C/object inputs. The current runtime bundles and installed package remain
intact. Archived maintainer C/object inputs can be restored from
`generated-c.tar.gz` into their recorded build directory before rebuilding the
standard libraries or symbol registry. Broader Lake projects, runtime module
data and the other native platforms remain open.

The unchanged `pkg/user_attr_app` now passes through installed `.19` in Node,
Deno and Bun on Linux x64 with explicit runtime module-data inputs. Its original
driver and compile-time assertions are retained. A separate ordinary Lean main
also verifies the same three attribute tags after importing the module at runtime.
Each engine matches native Lean for the original import, those added assertions,
and a missing-standard-data error: **nine deployed comparisons** in total. All
7,669 reference entries, original project files, the supplementary fixture and
copied data remain unchanged. Peak memory was 5.01 GiB without resource events.
See the [comparisons and repair evidence](evidence/runtime-imports-and-lake-initialization-2026-09-24.json).

Installed `.18` failed before linking this project: its private Lake-discovery
helper reached a native interpreter assertion for an uninitialized constant.
Loading the managed Lake library through Lean's ordinary `--plugin` option fixes
the discovery state; four fresh helper controls and the installed comparisons
pass. Importing more Lean modules did not fix the failure. A separate symbol-only
loading probe was stopped by the pressure guard, with no OOM; it remains a
resource result. Candidate assembly and installation succeeded, while a later
cleanup assertion found an already-absent npm cache entry. That wrapper failure,
the original package failure and verified archival receipts remain recorded.

The runtime probes hide source copies and use empty PATH, but explicitly supply
project metadata and the managed prefix's standard metadata through `LEAN_PATH`
and `LEAN_SYSROOT`. Automatic asset packaging and self-contained runtime imports
remain unfinished. The native Lean 4.32 compilation/benchmark directories, the
current maintainer runtime bundle, and completed native controls have lossless
archives with restoration manifests; their original evidence is preserved.

The upstream-excluded `pkg/signal` application now passes through installed `.21`
in all three stock engines on Linux x64. The original native shell driver runs
unchanged; a separate controller then sends its four signals to native and
relocated deployed processes at their original PIDs, retaining the one-second
waits and exact stdout, stderr and termination comparisons. Sources are hidden
and PATH is empty. All 7,669 reference entries remain unchanged. The maximum
build/run peak is 3.45 GiB without resource events. See the
[signal comparisons and retained failure](evidence/upstream-signal-2026-09-24.json).

Installed `.20` delivered SIGUSR1 correctly in Deno but also started its debugger.
The private host repair uses a bundled signal-safe pipe while Lean owns that
signal, then restores the previous handler and releases the pipe after its
pending read returns. No output filtering or upstream test changes are used.
Nine focused controls pass with zero skips. Native ARM64/musl/macOS acceptance,
the full signal set, default-handler behavior and interoperability with Deno's
own `addSignalListener` observers remain open; Node-compatible process listeners
receive the routed event. This separate experiment retains upstream's exclusion.

The subsequent [supplementary signal API campaign](evidence/application-signal-policy-2026-09-24.json)
passes 16 native/deployed comparisons per engine through installed `.22`, after
retaining four original `.21` differences. It covers all 22 names with one-shot
and repeated delivery, plus seven default actions before and after stopping a
waiter. Node/Deno debugger activation and Bun's extra crash report are repaired
at standalone application startup. The same ordinary Lean fixture and assertions
are retained across both attempts; these are 48 supplementary comparisons, not
new upstream suite passes. Sources are hidden, deployment paths contain spaces,
and PATH is empty. Maximum memory is 3.45 GiB without resource events. Forty-five
focused host/startup controls pass; complete signal and platform parity remain
open as detailed in the evidence.
