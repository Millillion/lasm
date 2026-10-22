# Language coverage

Scope and phase gates: [PLAN.md, "Language coverage phases, approved 2026-10-19"](PLAN.md#language-coverage-phases-approved-2026-10-19).
Each phase ends with a review stop. Phases were renumbered on 2026-10-20 to match
the actual order; older evidence and code comments use the original labels
(L1 = Phase 1, L2/L3 = Phase 2, L6 = Phase 3, L5 = Phase 4, L4 = Phase 5, L7 = Phase 6).

## Phase 3: ecosystem (2026-10-21)

**Status: complete, gate passed, awaiting review.** Scope: [PLAN.md](PLAN.md#language-coverage-phases-approved-2026-10-19).
Candidate `0.1.0-experimental.39677808414` (source `a6a546e`, SHA-256 `12d799e8…36d4`,
release `node-linux-candidate-39677808414`, runtime `7aa5028c…` unchanged from Phase 2):
five-platform installed acceptance passed in run [39677808414](https://github.com/Millillion/lasm/actions/runs/39677808414).
Cold-installation gate: passed 2026-10-22. Runs [39695659334](https://github.com/Millillion/lasm/actions/runs/39695659334), [39695686412](https://github.com/Millillion/lasm/actions/runs/39695686412), [39717868976](https://github.com/Millillion/lasm/actions/runs/39717868976), [39748521087](https://github.com/Millillion/lasm/actions/runs/39748521087) and the scheduled [39749093869](https://github.com/Millillion/lasm/actions/runs/39749093869) succeeded; [39695672707](https://github.com/Millillion/lasm/actions/runs/39695672707) failed only its Windows isolation control's online check (`registry.npmjs.org` timed out after 20 s, infrastructure), which restarted Windows' sequence. Final report (run 39749093869): `passed: true`, 6 consecutive clean cold installs on Linux x64/ARM64 and macOS x64/ARM64, 4 on Windows x64.

### Results

- **Compatibility list:** [COMPATIBILITY.md](COMPATIBILITY.md). Tier A (Batteries, Cli,
  LSpec, Plausible, Aesop + Qq, Mathlib's dependency set) and Tier B (leansqlite,
  UnicodeBasic + lean4-parser, MD4Lean, lean-zip, lean-redis end to end over TCP) and
  Millillion/fetch pass on all five targets wherever the package builds natively; lean-regex
  fails natively on Lean 4.35.0; lean-zip fails natively on Windows (upstream) and reaches the
  macOS arm64 guard. Zero Lasm-caused failures.
- **`import Lean.Data.Json` at run time:** works, including `deriving ToJson, FromJson`, and
  so does `import Lean` with Json (projects `json`, `json-import-lean`), through the runtime
  initialization plan below. No reachability exception was needed: the C++ kernel and
  environment stay out of the link and the unchanged policy still checks the result.
  Runtime elaboration and evaluation remain unavailable.
- **Outbound HTTP (superseded 2026-10-22):** [Millillion/fetch](https://github.com/Millillion/fetch) (MIT; archived, never released):
  `fetch url { method, headers, body, redirect, timeout } : Async (Std.Http.Response Fetch.Body)`
  with `ok`, `status`, `statusText`, `url`, `redirected`, `headers`, `header?`, `text`, `bytes`,
  `json`, streaming `body.stream` and `close`; transports Node `fetch` (Lasm host operations
  190–192, [`src/node-fetch.mjs`](../src/node-fetch.mjs)), libcurl via `dlopen`, and the `curl`
  tool. Its suite passes natively and under Lasm on all five targets, including HTTPS and the
  plain `IO.Process` curl pattern under Lasm.
- **Tier C:** Mathlib `v4.35.0` subset (`Mathlib.Data.Nat.Factors`, `Nat.Prime.Basic`,
  `List.Sort`, `Order.Basic`) on Linux: native build after `lake exe cache get` 115 s (x64) /
  100 s (arm64); module data under `.lake` 5.86 GB (5,858,501,440 bytes of `.olean*`); Lasm build
  373 s / 479 s, `program.wasm` 2,147,893 bytes; 5,815 of 5,820 initializers skipped; output
  identical to native. Build-time native tactics: the `native-tactic` project (an `extern_lib` +
  `precompileModules` elaborator) passes on all five; real LeanCopilot `v4.35.0` elaborates
  with its native library under Lasm on linux-arm64 but its own initializer calls C++ at
  program start, so its deployment is not linkable (classified in COMPATIBILITY.md).
- **Prebuilt libraries:** `prebuilt-library` (`-lcurl`) stops on all five with
  `package app links libcurl (HTTP client) (curl)`; libcurl, OpenSSL, libpq, hiredis, BLAS,
  system SQLite and zlib are recognized by link option or by undefined-symbol prefix.

### Phase 3 wrap-up (2026-10-22)

Approved at the Phase 3 review ([PLAN.md](PLAN.md#language-coverage-phases-approved-2026-10-19)).

- **No system C compiler.** Lake's default `cc` is now Lean's own clang: the new C tier
  installs it as `bin/cc` in the Lean prefix, which Lasm already puts first on Lake's `PATH`.
  Lean's release has no C library headers, so the C tier adds them (Ubuntu 22.04 glibc 2.35 and
  Linux 5.15 UAPI headers on Linux through `C_INCLUDE_PATH`, searched before the system's;
  MinGW-w64 13 and winpthreads on Windows as clang's own sysroot), plus clang's complete resource
  headers from LLVM 23.1.0 (Lean's release ships only a few). Lake's own Lean-C and link steps
  keep Lean's flags (freestanding headers, Lean's sysroot), as natively.
  **What the OS must still provide:** nothing on Linux (verified by purging every package that
  provides `cc`, `gcc`, `clang` or `/usr/include/stdio.h` before the Lasm build) and Windows
  (a MinGW installation on `PATH` is not read); on macOS the C library headers of the Xcode
  Command Line Tools SDK, which may not be redistributed (Lasm sets `SDKROOT` from `xcrun` and
  otherwise stops with `xcode-select --install`).
- **C tier.** `lean-4.35.0-<platform>-c.tar.zst` in release
  [`lean-4.35.0-c-v1`](https://github.com/Millillion/lasm/releases/tag/lean-4.35.0-c-v1), built
  and checked natively by the tier workflow (run [39788040414](https://github.com/Millillion/lasm/actions/runs/39788040414);
  the binaries archive rebuilt alongside is byte-identical to the published one). It holds
  Lean's clang, `ld.lld`/`ld64.lld`, `llvm-ar` and the libraries they load, `include/`,
  `lib/clang`, the link libraries outside `lib/lean`, and the pinned inputs of
  [`c-tier-sources.json`](../scripts/lean-dist/c-tier-sources.json). Sizes (compressed /
  unpacked): linux-x64 45.1 / 200 MB, linux-arm64 43.9 / 193 MB, darwin-x64 41.0 / 185 MB,
  darwin-arm64 39.3 / 176 MB, win32-x64 51.8 / 314 MB, instead of the complete release
  (560–620 MB compressed). The native check compiles C using the C library, OS APIs and
  compiler intrinsics and requires every header to come from the prefix (or the macOS SDK);
  it found and fixed a host MinGW leaking into Windows compiles.
- **Results.** Candidate `0.1.0-experimental.39815056197` (source `7eb24a3`) passed five-platform
  installed acceptance (run [39815056197](https://github.com/Millillion/lasm/actions/runs/39815056197));
  the ecosystem re-check gives the same statuses as above on all five targets, now with the C
  tier ([COMPATIBILITY.md](COMPATIBILITY.md)). Lasm bug found and fixed (`7eb24a3`): Lake reuses
  objects that another Lean built in the same project, and their build records named that
  toolchain's headers, which broke Wasm compiles (fetch, lean-zip, MD4Lean on Windows with the
  first wrap-up candidate `.39790669255`); headers of any Lean installation are now ignored for Wasm.
- **Millillion/fetch:** CI on five platforms (native, green) and the planned gaps were added;
  then the user dropped the library (2026-10-22): the repository is archived and was never
  released. Outbound HTTP today works through the `curl` subprocess pattern; Node's own `fetch`
  through JS/npm interop is planned for Phase 4 ([PLAN.md](PLAN.md)). The ecosystem `fetch`
  project still clones the archived repository and records its Phase 3 behavior.
- **Final candidate and gate:** pending; recorded here when complete.

### Upstream regression check (Phase 2 harnesses on the Phase 3 candidate)

Every Phase 2 harness ran again on the Phase 3 candidate on all five targets
([evidence](evidence/lean-4.35.0-language-coverage-phase3-2026-10-21.json); runs listed per
harness there). No test that passed in Phase 2 fails (three darwin-arm64 guard stops aside,
see below); the initialization plan turns all
LSP clients and several Lean-as-a-library applications and projects into passes.

| Platform | Harness | Phase 2 | Phase 3 candidate |
| --- | --- | --- | --- |
| linux-x64 | runtime-adapter | 300 pass, 146 build-time-only, 50 unsupported-by-design, 31 harness, 8 pass-with-harness-exclusions | 327 pass, 146 build-time-only, 31 harness, 22 unsupported-by-design, 9 pass-with-harness-exclusions |
| linux-x64 | eval-io | 22 pass | 22 pass |
| linux-x64 | compiled-application | 104 pass, 10 unsupported-by-design, 4 upstream-disabled | 110 pass, 4 upstream-disabled, 4 unsupported-by-design |
| linux-x64 | projects | 23 pass, 8 unsupported-by-design, 2 upstream-disabled | 25 pass, 5 unsupported-by-design, 2 upstream-disabled, 1 resource-stop |
| linux-x64 | lsp | 153 unsupported-by-design | 153 pass |
| linux-x64 | lsp-server | 4 unsupported-by-design | 4 pass |
| linux-x64 | lsp-project | 1 unsupported-by-design | 1 pass |
| linux-x64 | docparse | 202 unsupported-by-design | 202 unsupported-by-design |
| linux-arm64 | runtime-adapter | 285 pass, 18 harness, 10 build-time-only, 8 pass-with-harness-exclusions | 285 pass, 18 harness, 10 build-time-only, 8 pass-with-harness-exclusions |
| linux-arm64 | eval-io | 22 pass | 22 pass |
| linux-arm64 | compiled-application | 104 pass, 10 unsupported-by-design, 4 upstream-disabled | 110 pass, 4 upstream-disabled, 4 unsupported-by-design |
| linux-arm64 | projects | 23 pass, 8 unsupported-by-design, 2 upstream-disabled | 25 pass, 5 unsupported-by-design, 2 upstream-disabled, 1 resource-stop |
| darwin-x64 | runtime-adapter | 285 pass, 18 harness, 10 build-time-only, 8 pass-with-harness-exclusions | 285 pass, 18 harness, 10 build-time-only, 8 pass-with-harness-exclusions |
| darwin-x64 | eval-io | 22 pass | 22 pass |
| darwin-x64 | compiled-application | 104 pass, 10 unsupported-by-design, 4 upstream-disabled | 110 pass, 4 upstream-disabled, 4 unsupported-by-design |
| darwin-x64 | projects | 23 pass, 8 unsupported-by-design, 2 upstream-disabled | 25 pass, 6 unsupported-by-design, 2 upstream-disabled |
| darwin-arm64 | runtime-adapter | 285 pass, 18 harness, 9 build-time-only, 8 pass-with-harness-exclusions, 1 resource-stop | 285 pass, 18 harness, 10 build-time-only, 8 pass-with-harness-exclusions |
| darwin-arm64 | eval-io | 13 pass, 9 resource-stop | 11 pass, 11 resource-stop |
| darwin-arm64 | compiled-application | 104 pass, 10 unsupported-by-design, 4 upstream-disabled | 110 pass, 4 upstream-disabled, 4 unsupported-by-design |
| darwin-arm64 | projects | 23 pass, 7 unsupported-by-design, 2 upstream-disabled, 1 resource-stop | 25 pass, 5 unsupported-by-design, 2 upstream-disabled, 1 resource-stop |
| win32-x64 | runtime-adapter | 284 pass, 19 harness, 10 build-time-only, 8 pass-with-harness-exclusions | 284 pass, 19 harness, 10 build-time-only, 8 pass-with-harness-exclusions |
| win32-x64 | eval-io | 22 pass | 22 pass |
| win32-x64 | compiled-application | 104 pass, 10 unsupported-by-design, 4 upstream-disabled | 110 pass, 4 upstream-disabled, 4 unsupported-by-design |
| win32-x64 | projects | 21 pass, 8 unsupported-by-design, 2 upstream-disabled, 2 harness | 23 pass, 6 unsupported-by-design, 2 upstream-disabled, 2 harness |

Non-passes beyond Phase 2's classified set: `pkg/user_attr_app` (runtime attributes; Lean as a
library) now builds further before Lasm rejects it, and on the Linux runners the guard stopped it
first (resource stop; a local run reaches the AOT rejection at a 3.1 GiB peak; unsupported by
design on macOS x64 and Windows); on darwin-arm64, 11 eval-io tests and `pkg/frontend` stopped at the 2.80 GiB guard of the 7 GiB
runner (peaks 2.81–2.86 GiB, the same tests pass on every other platform; Phase 2 had 9 such
stops, and which tests cross the threshold varies by run). The darwin-x64 projects shard 4 failed
while downloading the upstream source archive (infrastructure) and passed on rerun.

### Lasm fixes (all in the candidate)

| Fix | Commit | Cause | Evidence |
| --- | --- | --- | --- |
| Runtime initialization plan | `f69246b` | build-time-only imports kept Lean's compiler | Tier A projects; LSP clients, Lean-as-library apps now pass |
| `___boxed__const__` globals are eager | `cc8a5f2` | treated as lazy closed terms; Std.Time's initializer skipped, a refcount went through a null global ("corrupted its heap memory area (address zero)" at exit) | lean-redis 20/30 → 0/30 failures; upstream `elab/async_http_expect` |
| Windows package C paths | `cc8a5f2` | SQLite prefixes `getcwd()` ("D:\…") with `/`; Lean's include directory under the execution prefix was not mapped | leansqlite passes on win32-x64 (was `unable to open database file`) |
| Package include directories after the C library | `cc8a5f2` | MD4Lean's Windows stand-in `stdio.h` hid the Wasm one | md4lean passes on win32-x64 |
| Lazy failures for native-only package C | `a6a546e` | LeanCopilot's C++ bridge does not compile for Wasm | leancopilot reaches the link and is named |
| Lazy reference graph | `a6a546e` | memory for programs importing all of Lean | `import Lean` + Json peak 1.18 GiB |
| fetch: IO extern ABI | fetch `9fdb671` | Lean 4.35 IO externs take no world argument (natively tolerated, a Wasm signature mismatch trap) | fetch passes under Lasm |



### Runtime initialization plan (reviewed design)

A compiled Lean program calls the initializer of every imported module. Modules
imported only for compilation (Aesop, Qq, `import Lean` for macros, deriving
handlers) register attributes, environment extensions, options and trace classes
there, which kept Lean's C++ compiler and kernel in the Wasm link: Phase 1 and 2
rejected such programs. Lean 4.35 already splits initialization for module-system
files (`initialize_M` = imports + `runtime_initialize_M` + `meta_initialize_M`; a
`module` Main calls only `runtime_initialize_*`, and `meta import`ed modules are
never initialized at run time). Lasm now applies the same idea to every program by
reachability ([`src/application-initialization.mjs`](../src/application-initialization.mjs)):

1. Each initializer function ("unit") is wrapped with `wasm-ld --wrap`. A kept unit's
   wrapper calls the real body; a skipped unit's wrapper only calls, in the original
   order (read from the object's relocations), the initializers the real body calls,
   so every kept module still initializes exactly once and in Lean's import order.
2. A unit is kept when a Lean global it assigns (a nullary constant or an
   `initialize`/`builtin_initialize` result) is live in a link without it; this is
   iterated to a fixpoint with wasm-ld's own map (map-only probe links). Lean 4.35
   initializes closed terms lazily (`lean_once_cell_t`), so they need no unit.
3. A skipped unit must not reach a live `initialize` result (an `IO.Ref` registry
   that another module's initializer fills): one probe link of the skipped bodies
   alone, compared with an empty program, finds such globals; the units reaching
   them (reverse reachability over the objects' reference graph) are kept and the
   plan is recomputed. `initialize` results are identified exactly: from the
   generated C for the program's modules, and for Lean's own libraries from
   [`src/lean-init-targets-4.35.0.json`](../src/lean-init-targets-4.35.0.json)
   (633 symbols, generated by [`scripts/initialization/InitTargets.lean`](../scripts/initialization/InitTargets.lean)).
4. Initializers of the program's own code (packages and user modules, not Lean's
   libraries) that call a console/file/process/environment IO primitive or any C
   function (for example leansqlite registering its external classes) always run.

Remaining semantic difference from native Lean, documented in the README: other
side effects of a skipped initializer that are invisible through Lean globals do not
happen. This is the semantics of upstream `meta import`. Controls:
`scripts/ecosystem/projects/initialize` (a cross-module registry, printing during
initialization and a nullary constant; native and Lasm print the same) and
`test/application-initialization.test.mjs`. The final link is still checked by the
unchanged ahead-of-time policy: a kept unit that needs the C++ compiler is rejected.

### Package C code (reviewed design)

[`src/application-native.mjs`](../src/application-native.mjs). Lake still builds a
package's C natively (precompiled modules load it during elaboration). Lasm asks Lake
for the inputs it would link into a native executable (module `moreLinkObjs` and
`moreLinkLibs`, every package's `extern_lib`; `src/lake-module.lean --link`), reads
each object's compile command and source from Lake 4.35's `.trace` record, and
recompiles the source for Wasm with its preprocessor options only (`-I`, `-D`, `-U`,
`-include`, `-std`; Lean's headers map to the Wasm runtime's). The objects are lazy
link members. `dlopen`/`dlsym`/`dlerror`/`dlclose` in package C are renamed to an
always-failing implementation (Lean's own dynamic loading stays visible to the
policy). Prebuilt libraries (`-l`, shared libraries) and objects without a Lake
compile record are unavailable: a link that needs their symbols stops and names the
library and the package; otherwise they are left out. Projects with native code use
the complete Lean release (Lean's C compiler, headers and libraries).

## Phase 2: core and I/O completion (2026-10-20)

**Status: complete, gate passed, awaiting review.** Exit criteria: [PLAN.md](PLAN.md#language-coverage-phases-approved-2026-10-19).
Candidate gate passed 2026-10-21: three back-to-back cold-installation confidence runs ([39537968104](https://github.com/Millillion/lasm/actions/runs/39537968104), [39537979004](https://github.com/Millillion/lasm/actions/runs/39537979004), [39537992042](https://github.com/Millillion/lasm/actions/runs/39537992042)) on candidate `0.1.0-experimental.39500947696` all succeeded; every platform reports at least 4 consecutive clean cold installs.
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
