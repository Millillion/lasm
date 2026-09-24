# Lean 4.34 upstream application acceptance

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
[per-case evidence](evidence/upstream-lsp-node-2026-09-24.json); other engines
and native platforms remain pending for this category.

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
