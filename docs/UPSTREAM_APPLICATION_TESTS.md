# Lean 4.35.0 Server MVP baseline (2026-10-17)

A fresh [4.35.0 inventory](evidence/lean-4.35.0-upstream-application-inventory.json)
records 4,219 registrations and 8,044 verified files. Server-relevant results for
installed `.54` on Linux x64 are in [SERVER_MVP.md](SERVER_MVP.md): all 22 eval-io
inputs pass. The new runtime adapter (`integration/application-upstream-runtime-adapter.mjs`)
re-checks `#guard`, `#guard_msgs`+`#eval` and bare `#eval` assertions at run time,
and 1,255 of its actions pass. These are parallel runtime checks, not upstream
suite passes.

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
passes both natively and through installed `.25` in Node on Linux
x64. The parallel adapter maps only its exact C compiler invocation to the
installed application linker. Original assertions remain active; unexpected
arguments fail. Relocated executions with sources hidden and PATH empty also
match native output and status. Broader 4.34.1 suite campaigns remain pending.

[Twelve upstream HTTP IO inputs now pass in Node](evidence/lean-4.34.1-upstream-http-io-expanded-three-engines-2026-09-25.json):
12 comparisons, with all 148 original actions executed. The inputs cover bodies, request headers, dispatch,
expectations, incremental/fuzz parsing, keep-alive, replayable bodies, request
lines, response framing and trailers.

Each unchanged original native elaboration driver passes first. A reviewed
parallel adapter uses Lean's parser to replace only unwrapped `#eval` tokens,
preserving every expression, assertion and timeout byte. Its ordinary `main`
executes every action at runtime. Interpreted-native, C-compiled-native and
installed `.25` source-hidden deployments have identical exits/stdout/stderr;
PATH is empty. Five integrity controls enforce Unicode/comment preservation,
valid contexts/ranges/names and exact release/source review binding. All guards
release without OOM, swap or resource stops; maximum memory is 4.58 GiB.

The [initial three-input results](evidence/lean-4.34.1-upstream-http-io-three-engines-2026-09-25.json)
and [expanded Node checkpoint](evidence/lean-4.34.1-upstream-http-io-expanded-node-2026-09-25.json)
remain intact. Original registrations retain their native-build-time category;
parallel runtime checks add deployed API observations.

[Ten additional original inputs now pass in Node](evidence/lean-4.34.1-upstream-io-stress-network-complete-2026-09-25.json):
ten comparisons covering temporary files, TCP, UDP,
cancellation reasons, serial HTTP fuzzing, size limits and hang regressions.
Combined with the twelve preceding HTTP inputs, these are 22 comparisons. Eight integrity controls enforce exact source and sidecar
hashes, supported syntax contexts and upstream serial-execution requirements.
All original assertions and deadlines remain unchanged. The additional campaign
peaked at 3.47 GiB, retained at least 5.22 GiB free disk, and released every
guard without resource events. Successful generated outputs follow the existing
suite cleanup policy: sources, results and hashes remain; these are not retained
binary archives, apart from the Node temporary-file case.

The `async_tcp_half` input executes only its original `listenClose` check; its
unused `acceptClose` definition does not establish half-close coverage.
Guarded/scoped evaluations, full declaration coverage and other native platforms
remain unfinished. These checks do not establish full `Std.Http` or complete
latest-release upstream-suite acceptance.

The [later successful-output retirement](evidence/lean-4.34.1-successful-output-retention-2026-09-25.json)
reclaims 4.85 GiB from the preceding HTTP comparisons and supplementary
filesystem/console comparisons. Sources, results, diagnostics and generated
output hashes remain intact. Their earlier archive receipts are preserved, but
the reproducible binaries have now been retired under the existing suite
retention policy. Failed and interrupted outputs remain untouched.

The parallel application harness now [reclaims redundant module data before
execution](evidence/lean-4.34.1-upstream-metadata-reclamation-2026-09-25.json).
After the installed build finishes, it checks the metadata manifest against the
recorded build identity and hashes every file in both generated copies. Only
the identical cached copy is removed; the deployment stays complete. The
unchanged `compile/expr.lean` native driver and Node deployment pass with 12,596
metadata files and 2.06 GiB of duplication reclaimed. All 7,673 original entries
and harness hashes remain unchanged; peak guarded memory is 5.12 GiB.
Six focused controls cover retained source/deployment data, mismatched copies,
cache links, standalone/Lake cache selection, build-identity mismatch and builds
without module data. This is a resource adaptation in the parallel suite, not a
shipping builder change or a complete-suite pass.

The first full 4.34.1 Node application campaign recorded 30 deployed passes,
three upstream-disabled registrations, one failure and 67 unfinished cases.
Its separate disk guard stopped the next build; no OOM event occurred. Every
original source and frozen harness file remained unchanged. The failure exposed
missing `.ir.sig` companion files in automatic module-data packaging: current
Lean skips interpreter IR when those signatures are absent.

The [signature packaging repair](evidence/lean-4.34.1-ir-signatures-2026-09-25.json)
passes seven integrity tests, an unchanged-code failure/success diagnostic,
and fresh installed `.26` executions of the original `incr_cli_snapshot` and
`incr_header_mismatch` tests. Both deployed clients invoke native Lean children;
their compiler actions remain native evidence. Each deployment includes 15,114
metadata files. All 7,673 original entries stay unchanged; peak guarded memory
is 5.49 GiB with no resource events. CTest now stops at the first failure so
retained failed deployments cannot accumulate before another build. Remaining
registrations required a fresh campaign, recorded below.

The same receipts preserve the interrupted campaign's generated files in
verified gzip archives. An additional 10.57 GiB was recovered by losslessly
archiving 126 unused SDK executables from paused compiler-in-Wasm snapshots.
Current managed tools, original source/tests and result logs stay intact.
Restore archived executable paths using their recorded hashes, modes and times
before resuming a historical SDK; shared gzip archives must remain immutable.

The [complete fresh Node campaign](evidence/lean-4.34.1-upstream-applications-node-2026-09-25.json)
now covers all 101 compiled-application registrations through installed `.27`:
97 deployed passes and four original compilation-disabled registrations. Both
incremental regressions pass within this complete campaign. All 7,673 original
entries and the frozen harness remain unchanged. Peak guarded memory is
5.43 GiB, without OOM, swap, memory pressure stops or disk stops. Original
assertions, arguments, sidecars and exclusions remain active. Six fixtures invoke
native Lean children; those compiler actions remain native evidence. This is one
category on Linux x64. Other latest-release category/platform campaigns
and full API parity remain unfinished.

The [four compilation-disabled inputs now pass separate AOT controls in
installed Node](evidence/lean-4.34.1-compile-disabled-2026-09-25.json):
four deployed comparisons, each following the unchanged original driver and
an additional native AOT control. The original compilation-disabled markers stay
active in the full category campaigns. All 7,673 source entries and each frozen
harness remain unchanged throughout their runs; peak memory is 5.17 GiB with
no resource events.

`identifier_completion` launches a native Lean language server. Its first Node
deployment failed because that child inherited the application's deployed
`LEAN_SYSROOT`, then looked for a native worker under `dist/lean/bin/lean`.
The parallel shim now restores the original native driver's `LEAN_SYSROOT` and
`LEAN_PATH` for compiler children. A fresh Node case passes
the original assertions. The failure, output and resource receipts remain
recorded separately; these compiler/server actions remain native coverage.

The results and checked items below retain their original **4.34.0** scope.

The [product plan](PLAN.md) calls for ordinary native compilation followed by
execution in stock Node. This inventory records every default
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
| Compiled drivers using a native compiler | 155 | Run Lean drivers in Node; record their native compiler/LSP subprocesses separately |
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
- [ ] Complete stock Node and native six-platform acceptance.

Resource aborts, cold-build deadlines, behavior failures, unsupported inputs and
unexecuted cases must stay distinct in reports. No broad campaign should start
until it uses the shipping application path and obeys the resource guard.

The separate [excluded-concurrency controls](evidence/upstream-excluded-concurrency-2026-09-24.json)
run the unchanged `async_select_channel` and `sync_mutex` elaboration drivers,
then import their original definitions into a supplementary ordinary main.
Installed `.19` matches native compiled behavior in three repetitions in
Node on Linux x64, covering eight channel-capacity assertions plus
mutex, try-lock and condition-variable checks. Peak memory
is 3.59 GiB without resource events. These are extra controls for upstream
exclusions, not additional default-suite passes or proof against all races.

The [four compilation-disabled Node controls](evidence/upstream-compile-disabled-node-2026-09-24.json)
now pass through installed `.19`: `compactor_chain`, `dep_regions`,
`dep_regions_miss` and `identifier_completion`. Original drivers and markers
run first, followed by explicitly separate native AOT and deployed AOT checks
with the original assertions. All 7,669 originals and harness hashes remain
unchanged. Native Lean subprocess arguments are recorded, including the three
language-server launches in the completion benchmark. The 3.50 GiB peak caused
no resource events. Other native platforms remain pending; these
extra runs do not alter upstream's default compilation-disabled status.

The new [application harness](../scripts/application-tests/README.md) now drives
the installed npm candidate. The first five Node cases exercised filesystem read
bounds, Unicode paths, dedicated tasks, exception reporting and cross-process
closure serialization. Four passed immediately; serialization exposed a real
self-launch failure because `IO.appPath` names the portable JavaScript entry.
The host now relaunches that exact application through Node,
preserving ordinary child-process handling. The repaired installed candidate
passes the original closure test in Node. Eight loader,
child-process and shutdown controls also pass. The
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
in Node or establish the remaining platform results.

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
resource events. This is targeted Node/Linux x64 evidence; full repaired-package
and platform campaigns remain required.

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
does not imply other-platform passes for this category.

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

The reviewed native-only mixed campaign now finishes **78 passed and one
upstream-disabled** registration on Linux x64 with managed Lean 4.34.0. Each
unchanged shell/Lake driver starts from its own verified source copy; intentional
fixture mutations are recorded. All 7,669 original reference entries and active
harness hashes remain unchanged. The preparation and execution run took
11 minutes 10 seconds and peaked at 3.62 GiB without resource events. The
[per-case evidence](evidence/upstream-mixed-native-2026-09-24.json) covers native
build-time behavior only. The other 31 mixed registrations retain their ordinary
application or foreign-runtime deployment obligations.

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
vendored vectors in stock Node**, using installed `.14`
on Linux x64. Its original native shell driver and independent native executable
both pass before each application build. Relocated deployments run with hidden
source trees, empty PATH and unchanged datasets; per-file counts, failure counts
and total output match native. All 7,669 reference entries remain unchanged.
The [ofScientific evidence](evidence/upstream-ofscientific-2026-09-24.json) records
the 3.49 GiB maximum peak without resource events. The separate
`integration/application-upstream-packages.mjs` harness drives the reviewed
floating-point project too. Other mixed registrations and native platforms
remain open.

The unchanged `pkg/exe_private_lean_import` project also passes in Node
through installed `.14`, matching its native executable's exact output.
The original stage-directory toolchain pin remains intact. An initial harness
preflight rejected that pin before running the test; the repaired parallel harness
uses an additional release-pinned application copy, verifies every other original
byte, and hides all source copies before deployment. The
[private-import receipts](evidence/upstream-private-import-2026-09-24.json)
preserve the initial preflight failure and the Node pass, including unchanged
original drivers and all 7,669 reference entries. Peak guarded memory was
3.56 GiB without resource events. This is Linux x64 application evidence, not
acceptance for other platforms or all mixed registrations.

The complete `pkg/float` project now passes **1,751,726 original checks in
stock Node** through installed `.14` on Linux x64. This covers
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
four environment controls pass in Node, as does the release executable. Panic location/message, termination, stdout and
uncaught exceptions match native. `LEAN_BACKTRACE=0` matches complete output;
enabled traces require real backend frames while preserving their raw output.
Native ASLR addresses and native/Wasm frame formats differ between executions.
The [debug receipts](evidence/upstream-debug-2026-09-24.json)
retain the passing executable variants, with unchanged
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
CRT. All seven cases
match native exactly in Node on Linux x64: fallback values, real
stderr redirection, IO panic failure, and abort with ordinary, zero, empty and
redirected settings. Sources are hidden and deployments relocated with empty
PATH. The [seven comparisons](evidence/panic-semantics-2026-09-24.json) and nine focused
unit checks pass; maximum build memory was 3.42 GiB without resource events.
These are additional controls, not unchanged upstream test passes. Private
Shell panic controls and native platform parity remain open. Earlier failing
attempts and verified archival receipts are retained.

The unchanged `pkg/path with spaces` and `pkg/def_clash` projects now pass
[two installed `.18` Node project comparisons](evidence/upstream-projects-2026-09-24.json)
on Linux x64. Each original native shell driver runs first. The separate AOT
checks cover cache reuse, relocated executions, and expected
build rejections with the original duplicate-definition diagnostic assertions.
Cross-package private imports retain their distinct definitions. The spaced
deployment also runs after a file appears at its path prefix. All build-source
copies are hidden and deployment PATH is empty; exit status, stdout and stderr
match native exactly. All 7,669 reference entries remain unchanged.

Maximum test memory was 3.45 GiB without resource events. The receipts retain
archives of completed binaries, parser-source trees and all 2,516 audited standard-library
C/object inputs. The current runtime bundles and installed package remain
intact. Archived maintainer C/object inputs can be restored from
`generated-c.tar.gz` into their recorded build directory before rebuilding the
standard libraries or symbol registry. Broader Lake projects, runtime module
data and the other native platforms remain open.

The unchanged `pkg/user_attr_app` now passes through installed `.19` in Node
on Linux x64 with explicit runtime module-data inputs. Its original
driver and compile-time assertions are retained. A separate ordinary Lean main
also verifies the same three attribute tags after importing the module at runtime.
Node matches native Lean for the original import, those added assertions,
and a missing-standard-data error: **three deployed comparisons** in total. All
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
in stock Node on Linux x64. The original native shell driver runs
unchanged; a separate controller then sends its four signals to native and
relocated deployed processes at their original PIDs, retaining the one-second
waits and exact stdout, stderr and termination comparisons. Sources are hidden
and PATH is empty. All 7,669 reference entries remain unchanged. The maximum
build/run peak is 3.45 GiB without resource events. See the
[signal comparisons and retained failure](evidence/upstream-signal-2026-09-24.json).

The subsequent [supplementary signal API campaign](evidence/application-signal-policy-2026-09-24.json)
passes 16 native/deployed comparisons in Node through installed `.22`, after
retaining the original `.21` differences. It covers all 22 names with one-shot
and repeated delivery, plus seven default actions before and after stopping a
waiter. Node debugger activation is repaired at standalone application startup. The same ordinary Lean fixture and assertions
are retained across both attempts; these are 16 supplementary comparisons, not
new upstream suite passes. Sources are hidden, deployment paths contain spaces,
and PATH is empty. Maximum memory is 3.45 GiB without resource events. Forty-five
focused host/startup controls pass; complete signal and platform parity remain
open as detailed in the evidence.
