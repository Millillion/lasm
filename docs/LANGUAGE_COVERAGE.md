# Language coverage

Scope and phase gates: [PLAN.md, "Language coverage phases, approved 2026-10-19"](PLAN.md#language-coverage-phases-approved-2026-10-19).
Each phase ends with a review stop. Phases were renumbered on 2026-10-20 to match
the actual order; older evidence and code comments use the original labels
(L1 = Phase 1, L2/L3 = Phase 2, L6 = Phase 3, L5 = Phase 4, L4 = Phase 5, L7 = Phase 6).

## Phase 2: core and I/O completion (2026-10-20)

**Status: complete, awaiting review.** Order and exit criteria: [PLAN.md, option C](PLAN.md#language-coverage-phases-approved-2026-10-19).
Evidence: [five-platform results](evidence/lean-4.35.0-language-coverage-l23-2026-10-20.json),
[fixes and probes](evidence/lean-4.35.0-language-coverage-l23-fixes-2026-10-20.json).
Candidates (runtime `7aa5028c…`, each passing five-platform installed acceptance):
`.39458561103` (source `cdcfd05`), `.39489327335` (`d41aa03`: Windows DNS, C entry) and
`.39500947696` (`0c89de9`: Windows link scratch path; SHA-256 `741d4c38…aaed`, release
`node-linux-candidate-39500947696`, the phase candidate). Each harness's run is listed in
the evidence. Linux and Windows eval-io/apps and the Linux adapter ran on `.39458561103`
(the later fixes are Windows-only or affect only C entry points); projects everywhere, the
Windows adapter and all macOS harnesses ran on `.39489327335`; Windows projects on
`.39500947696`. Native Lean 4.35.0 in Node 26.12.0 on
standard runners. Parallel runtime re-checks of upstream
tests; the upstream registrations remain native build-time tests.

### Lasm fixes (product, all in the final candidate)

| Fix | Cause | Evidence |
| --- | --- | --- |
| `LEAN_ABORT_ON_NONLINEAR` honored (`076f9e5`, runtime `7aa5028c…`) | Phase 1's diagnosis was wrong: the C runtime already sees the environment (Emscripten `NODE_HOST_ENV`; `LEAN_ABORT_ON_PANIC` aborts as native). Lean 4.35 added `should_abort_on_nonlinearity()` behind `#ifdef LEAN_EMSCRIPTEN return false`, which the 4.32-era `thread-runtime` patch could not cover. New patch `lean-4.35.0-nonlinear-environment.patch`. | 7 `*_mark_linear_panic` apps pass on all five targets. The cold rebuild (run 39437915868) left every library archive byte-identical; only `object.cpp.o` in `libleanrt.a` changed, in exactly the four nonlinear functions, so the reviewed selective initialization still applies. |
| Exact-case standard roots (`076f9e5`) | `lean --src-deps` searches the source directory first; on case-insensitive macOS/Windows volumes `init.lean` answered for `Init` (`Cyclic Lean module imports …/Init.lean`). Lasm now applies Linux's exact-case rule on every OS. | 85 `tests/compile` builds per macOS target and on Windows now pass; `test/application-paths.test.mjs` runs on Linux, macOS and Windows. |
| Windows CRT errno (`a0cf255`) | koffi's `errno()` does not report ucrtbase's errno: a write to a read-only handle gave `otherError 0`, native gives EBADF. Lasm now reads ucrtbase `_errno()` on the calling thread. | Probe `handle-errors` (runs 39459435026, 39468463470): native and Lasm identical for read, write and `getLine` misuse. |
| Windows piped `IO.Process.spawn` (`cdcfd05`) | Every piped spawn failed with EBADF: Node resolved the ucrtbase `_pipe` descriptor in its own CRT. The child end is now duplicated into Node's CRT through node.exe's `uv_open_osfhandle`. | Probes `spawn-stdin`, `windows-pipe` (runs 39457072715, 39457965597); `test/node-process-pipes.test.mjs`; `pkg/float`, `elab/Process` on Windows. |
| Windows deep project paths (`cdcfd05`, `0c89de9`) | Node's `mkdtemp`, unlike its other fs calls, does not add the long-path prefix (ENAMETOOLONG in `packageOverrides`); then Binaryen, which opens files with 260-character (MAX_PATH) paths, failed on a 278-character link scratch file. Scratch files now live in the system temporary directory. **Remaining limit:** a project whose delivered `dist\program.wasm` path exceeds 260 characters still fails on Windows. | Windows `packageOverrides` passes. |
| Windows DNS (`d41aa03`) | `ws2_32.dll` exports `inet_pton`; `InetPtonA` is a header macro, so every DNS operation failed on Windows. | Probe `ws2-binding`; `elab/async_dns`, `elab/networkInterfaces` on Windows. |
| C `main(void)` entry (`d41aa03`) | Since Phase 1's LeanExport re-pin, `libLeanExport.a` contains upstream's tool root `main`; a C program with `main(void)` resolved its exported `main` there and pulled the compiler (`misc_dir/rc_sticky` rejected). Lasm now defines `__main_argc_argv` as Emscripten's libc does. Lean programs are unaffected. | `rc_sticky` passes on all five targets. |

### Harness completion (maintainer side)

- **Setup sidecars and `#exit`**: [`runtime-adapter-l23.json`](../scripts/language-coverage/runtime-adapter-l23.json)
  (generator `make-sidecar-review.mjs`) binds each of the 10 set-aside tests to exact hashes
  and a reviewed, platform-independent meaning applied to every parallel phase: `before.sh`
  removal of literal names, `init.sh` literal environment, input files/directories; a
  `#exit` test gets its entry point before the `#exit`. No script is interpreted beyond
  that grammar; the original driver still runs the unchanged scripts with Bash first.
- **Differential actions**: Phase 1 counted a bare `#eval` as passed when it did not throw. Its
  displayed value is its assertion, so it now passes only when the deployed value equals
  native's. This is why Phase 1 reported `elab/Process.lean` passing on Windows although every
  piped spawn failed there (its output showed `error: … bad file descriptor`).
- **Lake-project drivers (all 33 with a deployed phase, including the 26 Phase 1 could not run)**:
  [`application-upstream-lake-drivers.mjs`](../integration/application-upstream-lake-drivers.mjs)
  runs each unchanged driver twice in verified copies. In the deployed copy a `lake` stand-in
  ([`lake-shim.mjs`](../scripts/language-coverage/lake-shim.mjs)) keeps every native command,
  then compiles each built `lean_exe` from its configured root (listed by Lake itself,
  [`LakeExes.lean`](../scripts/language-coverage/LakeExes.lean)) through the installed CLI and
  puts a launcher of that deployment at the executable path; `lake exe`, `lake lean … --run`
  and `lake env lean --run` run deployments. Lake never sees a launcher during its own
  commands. A driver passes only if native passed, every executable built through Lasm and
  the driver actually ran deployments.
- **Compiled applications on Windows** (Git Bash, PATH delimiter, execution prefix, Windows
  tar with verified materialized links) and the `rc_sticky` C adapter on macOS/Windows.
- **Probe workflow** [`language-coverage-probe.yml`](../.github/workflows/language-coverage-probe.yml):
  reviewed `probe-*.mjs` scripts against an exact candidate (native versus Lasm).
- **macOS guard**: a resource stop could crash the guard with EPERM (zombie process group)
  and leave its lock, failing later workloads; now recorded and survived (`f05086f`).
- Windows deployments get Git's POSIX tools (`sh`, `printenv`) on PATH like the native
  runs; varying native output (timings, random bytes, per-phase directory) is harness.

### Results per platform (native vs Lasm)

Adapter = runtime adapter for `#eval`/`#guard`/`#guard_msgs` (Linux: all 535 reviewed tests;
other platforms: the 321 outside Lean-as-a-library); apps = compiled applications (118);
projects = mixed Lake/package drivers with a deployed phase (33). docparse 202 and LSP 158
inputs (Linux only) are rejected by the AOT policy, as in Phase 1 (Lean-as-a-library, Phase 4).

| Platform | Adapter: pass (+harness excl.) / build-time / AOT / harness / resource | eval-io | Apps: pass / disabled / AOT | Projects: pass / disabled / by design / harness / resource | Lasm-caused |
| --- | --- | --- | --- | --- | ---: |
| linux-x64 | 300 (+8) / 146 / 50 / 31 / 0 (3,648 actions pass) | 22/22 | 104 / 4 / 10 | 23 / 2 / 8 / 0 / 0 | **0** |
| linux-arm64 | 285 (+8) / 10 / 0 / 18 / 0 | 22/22 | 104 / 4 / 10 | 23 / 2 / 8 / 0 / 0 | **0** |
| darwin-arm64 | 285 (+8) / 9 / 0 / 18 / 1 | 13/22, 9 resource stops | 104 / 4 / 10 | 23 / 2 / 7 / 0 / 1 | **0** |
| darwin-x64 | 285 (+8) / 10 / 0 / 18 / 0 | 22/22 | 104 / 4 / 10 | 23 / 2 / 8 / 0 / 0 | **0** |
| win32-x64 | 284 (+8) / 10 / 0 / 19 / 0 | 22/22 | 104 / 4 / 10 | 21 / 2 / 8 / 2 / 0 | **0** |

Against Phase 1: the 7 nonlinear apps now pass everywhere; macOS went from 24 to 104 app passes
(`init.lean` shadowing); Windows apps ran for the first time (104 pass); the 26 unmapped
Lake drivers run (projects 6 → 23 passes); the 10 sidecar/`#exit` tests run on all five (8 pass; `nat_size_limit` build-time only, `Reformat` harness).

### Classification

| Class | Tests (where) | Notes |
| --- | --- | --- |
| Lasm-caused | **0** on every platform outside Lean-as-a-library | Seven Lasm bugs were found and fixed during the phase (table above). |
| Unsupported by design: AOT policy (Phase 4) | Linux adapter 50, apps 10 everywhere, docparse 202, LSP 158; projects `frontend`, `user_attr_app`, `user_plugin`, `exe_private_lean_import`, `linkLake`, `toml` | Runtime environment/compiler or kernel C++ data; `toml` and `linkLake` reach it through Lake's modules. |
| Unsupported by design: native FFI (Phase 3 decision) | `externLib`, `reverse-ffi` | `extern_lib` C code is not compiled to Wasm (currently a raw `undefined symbol` link error); a C host embedding Lean is not a Lasm product. |
| Build-time only | Linux adapter 146 (9–10 elsewhere, from the selection outside Phase 4) | No action elaborates as a runtime `IO` action. |
| Upstream disabled | apps 4 (`compile_disabled`), projects `lake/examples/ffi` (exits 0 before any command), `llvm-bitcode-gen` (no LLVM backend in the release) | Unchanged upstream gates. |
| Harness | adapter 18–19 per platform, 31 on Linux (incl. Phase 4 tests) | Native adapter not faithful (`lex`, `15427`, `trace_synth`, …), test defines `main` or needs `src/` (`Reformat`, `parsePrelude`, …), native interpreter stops (`intrinsicVerification`, `issue3770`), displayed value varies between native runs (`646` timing, `currentDir`, `evalInit`, `ioRandomBytes`, Windows `realPath`), deployment has no `lean` on PATH (`Process` action 7). None is a Lasm result. |
| Harness, OS-inherent (Windows) | projects `cacheTransfer`, `driver` | Lake itself runs these executables (CURL mock, test/lint drivers) with CreateProcess, which cannot run a script launcher; their native phases pass. On the other four platforms they pass. |
| Resource stop (darwin-arm64 runner) | eval-io 9 (`async_http_*`, `async_tcp_*`, `async_udp_sockets`, `tempfile`), adapter `nat_size_limit`, projects `frontend` | The guard's proactive stop on the 7 GiB macos-15 runner is 2.80 GiB; these builds peak near 3 GiB. All pass on darwin-x64 (or are AOT/build-time elsewhere). Limits unchanged. |
| Upstream flake | 0 | Every native repeat agreed in status; differing displayed values are counted as harness above. |

### Notes for later phases

- Phase 3: native FFI (`extern_lib` C code, `reverse-ffi`, plugins) fails today with a raw linker
  error (`undefined symbol: my_add`); the FFI decision should also produce a clear message.
- Phase 3/Phase 4: `lake/tests/toml` (460 TOML checks) and `linkLake` are rejected only because Lake's
  modules reach the C++ environment; good first Phase 4 targets.
- Lasm strips `LEAN_*` from its managed build environment, so a build-time setting such as
  `LEAN_NAT_MAX_SIZE` (`elab/nat_size_limit`) does not reach elaboration; native Lean honors it.

## Phase 1: baseline and quick fixes (2026-10-20)

**Status: complete, reviewed (option C).** Correction from Phase 2: the environment
failures below were not caused by an unseeded `ENV`; see the Phase 2 fix table. Evidence:
[inventory](evidence/lean-4.35.0-language-coverage-inventory.json),
[baseline](evidence/lean-4.35.0-language-coverage-baseline-2026-10-20.json),
[4.35.0 mixed-driver review](evidence/lean-4.35.0-mixed-driver-classification.json).
Every Lasm result is the exact retained candidate `0.1.0-experimental.39310029213`
(SHA-256 `a976ec4e…72a3`, release `node-package-39310029213`, source `8829c9a`) in
stock Node 26.12.0, compared with native Lean 4.35.0 (`leanc -O2` and the
interpreter). These are parallel runtime re-checks of upstream tests: the upstream
registrations stay native build-time tests and none of this is an upstream suite pass.

### Quick fixes

1. **`LeanExport` now links** (source `249ecac`; runtime rebuild below). Lean 4.35
   added a top-level `LeanExport` library (upstream lakefile `globs = ["LeanExport.*"]`,
   also imported by Lake). The Wasm runtime only had Init/Std/Lean/Lake archives,
   and standalone imports from the toolchain's `src/lean` are treated as
   runtime-provided, so `import LeanExport.Parse` failed with an undefined
   `initialize_LeanExport_Parse`. `build-application-runtime.mjs` and
   `package-application-runtime.mjs` now build and package `libLeanExport.a` for
   Lean ≥ 4.35. CI build [39373118465](https://github.com/Millillion/lasm/actions/runs/39373118465)
   produced runtime `d1b1394c…` (handoff `fb3c0fe8…`): compared with the pinned
   `84934c27…`, only `lib/libLeanExport.a` (byte-identical to a local build) and its
   `target.json` entries are new; every other archive, header, `exports.json` and the
   symbol registry are byte-identical. The build's release step failed with HTTP 403
   (GitHub now refuses a non-tip commit as a release target; fixed in `8678a8b`), so
   the bytes were recovered from its exact cache key by
   [39386092923](https://github.com/Millillion/lasm/actions/runs/39386092923) and
   retained as draft release `node-runtime-inputs-39373118465`. The re-pin
   (`node-runtime-source.json`, `application-runtimes.json`, reviewed
   `canSpecializeInitialization` entry) shipped in `bd390b6`; it is in source, not
   yet in a candidate, so the baseline below still shows the link failure.
   With it, a `LeanExport.Json` program builds and prints exactly native's output.
   `leanExportParse` itself is then rejected by the ahead-of-time policy, not by the
   linker: `LeanExport.parseStream` builds `Lean.Expr`/`Level` values whose
   constructors call C++ `lean_expr_mk_data`/`lean_level_mk_data` (a Phase 4 item).
2. **Rejections explain themselves** (source `7d5a8b0`). The probe link records
   `wasm-ld --why-extract`; on a rejection only, Lasm resolves each member exactly
   (by defined/undefined symbols, since many members share a basename like
   `Basic.o`) and prints the chain from the program to the compiler code. When a
   broad import is the cause it lists the narrower modules the program uses:

   ```text
   Required by: your code → import Lean → import Lean.Compiler → import Lean.Compiler.Main → … → lean_expr_abstract_range → abstract.cpp (Lean C++ compiler/kernel)
   Your code reuses `IO.println` as specialized inside Lean's compiler, because the imported compiler modules provide that specialization.
   `import Lean` brings Lean's compiler and kernel into your program, even if you only use its data types.
   Replace it with the modules your code uses:
     import Lean.Data.Json.Basic
     import Lean.Data.Json.Printer
   ```

   The suggested imports build and run (`{"a":1,"b":"two"}`). A direct call is
   reported as such (`Your code calls LeanExport.parseStream … narrower imports
   cannot remove it`). Every rejection ends with a README pointer.
   Tests: `test/application-diagnosis.test.mjs`.

### Method

- **Inventory** (`scripts/language-coverage/inventory.mjs`, CI
  [39373289596](https://github.com/Millillion/lasm/actions/runs/39373289596)): all
  4,219 registrations. Each elaboration test is parsed against its own imports with
  `RuntimeCommandSurvey.lean`; 370 tests that define their own notations or macros
  are surveyed with the new `--elaborate` mode (declarations elaborated, test
  actions never run). Only 2 parse failures remain, both expected-error tests.
- **Harnesses**, one test per resource-guarded workload, sharded on standard runners
  (`.github/workflows/language-coverage-baseline.yml`, `run-shard.mjs`,
  `assemble.mjs`): eval-io (22), the reversible runtime adapter for `#eval`,
  `#guard` and `#guard_msgs`+`#eval` (525, structural review
  `scripts/language-coverage/runtime-adapter-l1.json`), compiled applications (118),
  the shared docparse and LSP client drivers (202 + 158) and the per-project
  adapters for 7 mixed registrations. Native interpreted, native compiled and a
  native repeat run first; the deployment then runs relocated with sources hidden.
- **Harness fixes made during Phase 1** (maintainer side): deployed adapter runs get
  `/usr/bin:/bin` instead of an empty `PATH` (subprocess tests); the adapter picks its
  review by test name (the guard does not forward the environment); the
  per-project adapters accept Lean 4.35.0 and the full native Lean; the `rc_sticky`
  adapter uses the shipping link toolchain and records the policy for its launcher;
  macOS uses GNU tar; Windows checkouts keep LF and `leanc` gets a plain sysroot.
- Peak memory per test ≤ 3.73 GiB (Linux CI). No resource stops; no upstream flake
  (the native repeat agreed in every completed test).

### Registrations

| Execution class | Registrations |
| --- | ---: |
| Runtime adapter candidates (`#eval`/`#guard`/`#guard_msgs`) | 525 |
| Reviewed eval-io inputs | 22 |
| Compiled applications | 118 |
| Compiled docparse driver inputs | 202 |
| LSP clients with native server children | 158 |
| Mixed Lake/package drivers with a deployed phase | 33 (7 run, 26 need Lake-project adapters) |
| Native build-time only: no runtime-checkable command | 2,718 |
| Native build-time only: expected-error (`elab_fail`) | 314 |
| Native build-time only: mixed drivers, docs examples, source lint | 110 + 1 disabled, 7, 1 |
| Separate review: `before.sh`/`init.sh`/`input`/`dir` sidecars, `#exit` | 9, 1 |

### Results on Linux x64 (native vs Lasm)

"Native ok" counts tests whose native runs succeed; actions are adapter actions.
The 360 docparse/LSP inputs share one compiled driver, which the policy rejects
before any input runs (their native drivers passed in the 4.34.1 campaign).

| Area | Tests | Native ok | Lasm pass | AOT policy | Lasm bug | Build-time only¹ | Harness | Actions native → Lasm |
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | --- |
| Core data types and control (Phase 2) | 279 | 257 | 251 | 0 | 6 | 6 | 12 + 4 disabled | 1,356 → 1,356 |
| Numerics / Float (Phase 2) | 55 | 51 | 51 | 0 | 0 | 2 | 2 | 440 → 440 |
| Strings / Unicode (Phase 2) | 22 | 22 | 21 | 0 | 1 | 0 | 0 | 328 → 328 |
| IO.FS (Phase 2) | 9 | 9 | 9 | 0 | 0 | 0 | 0 | 39 → 39 |
| Processes, signals, terminal (Phase 2) | 5 | 4 | 4 | 0 | 0 | 1 | 0 | 14 → 14 |
| Concurrency (Phase 5) | 26 | 26 | 26 | 0 | 0 | 0 | 0 | 108 → 108 |
| Server, network, time | 51 | 51 | 51 | 0 | 0 | 0 | 0 | 1,095 → 1,095 |
| Lean as a library (Phase 4) | 585 | 436 | 15 | 420 | 1 | 136 | 13 | 517 → 223 |
| **Total** | **1,032** | | **428** | **420** | **8** | **145** | **27 + 4 disabled** | **3,897 → 3,603** |

¹ No action elaborates as a runtime `IO` action (they need `MetaM`/`CommandElabM`);
133 of these 145 also import `Lean` broadly and are rejected.

By harness: eval-io 22/22 (219 actions); adapter 303 pass (6 with harness-only
exclusions), 145 build-time only, 49 policy, 27 harness, 1 Lasm bug (`leanExportParse`,
fixed in source); compiled applications 97 pass, 4 upstream-disabled, 10 policy,
7 Lasm bugs; per-project 6 pass (`float` 1.75 M checks, `ofScientific`, `debug`
release+debug, `def_clash`, `path with spaces`, `rc_sticky`), 1 policy
(`exe_private_lean_import`); docparse 202 and LSP 158 policy.

### Other platforms (representative)

The same 62 adapter tests (1,668 actions, chosen across every area) and all 118
compiled applications ([platform evidence](evidence/lean-4.35.0-language-coverage-platforms-2026-10-20.json)). Every adapter action matches native on every target:

| Platform | Adapter subset | Compiled applications |
| --- | --- | --- |
| linux-arm64 | 62/62 | 97 pass, 4 disabled, 10 policy, 7 Lasm bug (identical to x64) |
| darwin-arm64 | 62/62 | 24 pass, 4 disabled, 5 policy, 85 Lasm bug (`init.lean` shadowing, every `tests/compile` build) |
| darwin-x64 | 62/62 | 24 pass, 4 disabled, 5 policy, 85 Lasm bug (`init.lean` shadowing, every `tests/compile` build) |
| win32-x64 | 62/62 | not run: the application harness is not yet ported to Windows |

### Classification of every non-pass

| Class | Count (Linux) | Representative repro | Notes |
| --- | ---: | --- | --- |
| Lasm bug: C runtime does not see the process environment | 7 compiled apps (+ same on arm64) | `LEAN_ABORT_ON_NONLINEAR=1` with `(List.replicate 5 (0 : UInt8)).toByteArray.markLinear` then `set!` on a shared copy: native panics, Lasm prints `10`; `IO.getEnv` sees the variable | Emscripten's `ENV` is not seeded from `process.env`, so every runtime `std::getenv` (`LEAN_ABORT_ON_NONLINEAR`, `LEAN_ABORT_ON_PANIC`, `LEAN_NUM_THREADS`, `LEAN_STACK_SIZE_KB`, `LEAN_MAIN_USE_THREAD`, `LEAN_BACKTRACE*`) reads defaults |
| Lasm bug, macOS/Windows: case-insensitive `init.lean` shadows `Init` | 85 per macOS target (every `tests/compile` build) | a directory with `init.lean` next to `Main.lean`: `Cyclic Lean module imports …/Init.lean` (or `lstat …/Init` ENOENT) | `applicationSources` resolves imports with `LEAN_SRC_PATH` = the source directory first; the standard roots must win |
| Lasm bug (fixed in source): `LeanExport` not packaged | 1 (13 actions) | `import LeanExport.Parse` | now an AOT-policy rejection (Phase 4) |
| Unsupported by design: broad `import Lean` | 29 adapter + `json`, `newdo`, … | `import Lean` + `Json.compress` | the new message names the narrow imports |
| Unsupported by design today, Phase 4 candidates: pure kernel data in C++ | LSP 158 + 4, `ilean_roundtrip`, `server_startup`, `watchdogRss`, `level`, `lvl1`, `abst`, `inst`, `expr1`, `expr_maps`, `hidden_proj`, `leanExportParse`, `exe_private_lean_import` | `import Lean.Data.Lsp` + `toJson Position` → `expr`/`formatter`/`level`/`print.cpp.o` | object-level reachability rejects pure `Expr`/`Level`/`Format` helpers |
| Unsupported by design: runtime environment, parser or compiler | docparse 202 (`mkEmptyEnvironment` + parser), `parser`, `workspaceSymbolsNewRanges`, `expr`, `large_closure_bug`, `link_lake`, `compact_closure*` (module data) | `import Lean.DocString.Parser` driver | 4.34.1 (pre-policy `.10`/`.14`) ran these in Node |
| Build-time only | 145 | `#eval show MetaM Unit from …` | not runtime-capable; counted |
| Harness | 27 adapter | test defines `main` (6), `dbg_trace`/elaboration-time messages not reproducible at run time (29 actions), docstring/`#check` state commands (6), native `leanc` rejects the C emitted for `casesOnCases`/`inlineIssue` (both interpreters pass; upstream EmitC candidate), `parsePrelude` needs `src/` | none is a Lasm result |
| Upstream disabled | 4 | `compile_disabled` markers | unchanged |
| Not run | 26 mixed Lake drivers, 10 separate-review tests | `lake exe` workflows, `before.sh` IO tests (`IO_test`, `handleLocking`, `readDir`, `stdio`, …) | need adapters (Phase 2 and Phase 3) |
| Upstream flake / resource stop | 0 / 0 | | |

### Ranked fix list (sizes Phases 2–5)

| # | Fix | Area / phase | Unblocks | Effort | Risk |
| --- | --- | --- | --- | --- | --- |
| 1 | Seed Emscripten `ENV` from the host environment at startup (and keep it in sync with `IO.setEnv`) | Phase 2 (runtime env) | 7 compiled apps on every target; every `LEAN_*` runtime switch | S | Low: host JS only, no runtime re-pin |
| 2 | Resolve standard roots before the source directory in standalone imports (case-insensitive file systems) | Phase 2 platform | 85 builds per macOS target; any project with `init.lean`/`std.lean`/`lean.lean` on macOS/Windows | S | Low |
| 3 | Cut a candidate with the LeanExport runtime (source `bd390b6`) | Phase 1 follow-up | `LeanExport.Json`, Lake's imports | S | Low |
| 4 | Audit pure C++ kernel data functions (`lean_expr_mk_data`, `lean_level_mk_data`, hashing, `Format`/`print`) as initialization-free, or link them separately from kernel state | Phase 4 | 158 LSP + 4 server clients, 3 compiled apps, 9 adapter tests, `leanExportParse`, `exe_private_lean_import` | M–L | Medium: policy soundness, size |
| 5 | Decide whether an empty `Environment` plus the parser (no elaboration, no module data) is allowed at run time | Phase 4 (user decision) | 202 docparse inputs, `parser` | L | High: needs C++ environment state |
| 6 | Sidecar-aware adapter (`before.sh`, `init.sh`, `input`, `dir`) and Lake-project adapters | Phase 2 / Phase 3 harness | 10 IO tests, 26 Lake drivers | M | Low |
| 7 | Windows/macOS application harness (Bash/CTest drivers off Linux) | Phase 2 harness | per-OS compiled-app baselines | M | Low |
| 8 | Concurrency stress/soak beyond upstream (all 26 upstream tests already pass) | Phase 5 | — | M | Medium |

### Recommendation at the Phase 1 review (original labels)

_Written before renumbering: L2/L3 are now Phase 2, L4 Phase 5, L5 Phase 4. The user chose option C._


The upstream suite finds almost nothing wrong in core data types, numerics,
strings, IO.FS, processes or concurrency: outside Lean-as-a-library, all 3,380
native-passing actions and 413 of 420 native-passing tests also pass in Node, and
the 7 failures are one environment bug. The upstream suite exercises little runtime
IO (14 tests), so L3 must be driven by Lasm's own differential fixtures and the 10
sidecar IO tests rather than by this baseline. Lean-as-a-library is where the
failures are (420 policy rejections).

Recommend: **merge L2 and L3** into one short phase (fixes 1, 2, 6, 7, per-OS
compiled-application baselines, Lasm IO fixtures on five targets), **keep L4** as a
stress/soak phase, and **bring L5 forward** to follow the merged phase, with the
user deciding fix 5's policy question at its start.
