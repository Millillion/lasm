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
- [ ] Finish per-driver classification of mixed shell/Lake/package tests.
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
