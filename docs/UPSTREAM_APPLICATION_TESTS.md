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
- [ ] Run native build-time checks with the managed tools.
- [ ] Run application cases and compiled drivers through the shipping AOT path.
- [ ] Finish per-driver classification of mixed shell/Lake/package tests.
- [ ] Execute separately identified upstream exclusions without changing tests.
- [ ] Audit all shipped APIs and add native-versus-target coverage where missing.
- [ ] Complete stock Node/Deno/Bun and native six-platform acceptance.

Resource aborts, cold-build deadlines, behavior failures, unsupported inputs and
unexecuted cases must stay distinct in reports. No broad campaign should start
until it uses the shipping application path and obeys the resource guard.
