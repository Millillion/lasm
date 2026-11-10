# Toward an irreducible, verifiable Lasm

Status: **proposal for Jordan, 2026-11-09.** Nothing here has been carried out
yet. Claude may do the removals in §3 (they change no API) once the exit bar
of [TESTING_STRATEGY.md §7](../TESTING_STRATEGY.md#7-exit-bar-rock-solid) is
met. The rewrite (§5, §6) waits for Jordan's choice.

This proposal covers Jordan's direction of 2026-11-09, items 2 to 4:
- reduce the codebase to its irreducible essence, removing code and
  dependencies first;
- then consider a rewrite in Lean (preferred) or Rust, weighing the
  dependencies that cannot be removed;
- by the best incremental path.

## 1. Inventory (main at f7e097c, 0.6.0)

### What ships: `@lasm/cli`

| Part | Files | Lines | What it is for |
| --- | ---: | ---: | --- |
| `src/` JavaScript | 140 | 20,480 | CLI, build (Lean → C → Wasm), link driver, Node host and bridge, edge/browser/WASI glue, function-platform shims, `lasm dev`, installer and tool cache |
| `src/` C and `runtime/`, `native/` | 15 | 4,308 | WASI and Fastly C hosts (`src/wasi/*.c`), the edge Lasm.JS C side, the Node runtime additions (`runtime/node-*.cpp`, `edge.cpp`), the process launcher and signal helper |
| `src/` JSON | 9 | 5,971 | pinned toolchains, link recipes (Emscripten 6.0.9, edge), native signatures, Lean init targets, SDK repairs |
| `src/notices/` | 7 | 924 | third-party licence texts |
| `library/Lasm/` | 62 | 11,310 | the `Lasm.*` libraries and their proofs |
| `library/prebuilt/lean-4.35.0` | 118 | 242,206 (40 MB) | generated `.c`/`.olean` of the libraries, so users need not compile them |
| `templates/`, `packages/create-lasm` | 17 | 723 | `lasm init` and `npm create @lasm` |

### `src/` by area

| Area | Lines | Main modules (lines) |
| --- | ---: | --- |
| top level | 15,454 | `init.mjs` 864, `application-link.mjs` 710, `native-files.mjs` 656, `node-js.mjs` 520, `wasmtime-runtime.mjs` 477, `managed-artifacts.mjs` 471, `dev.mjs` 465, `application-sources.mjs` 441, `node-host.mjs` 437 |
| `link-driver/` | 6,544 | `link.mjs` 516, `glue.mjs` 388, `wasm.mjs` 331, recipes 2,899 (JSON), native signatures 1,790 (JSON) |
| `wasi/` | 3,418 | `lasm_wasi.c` 1,004, `lasm_fetch_wasi.c` 722, `lasm_wasi_http.c` 510, `lower-atomics.mjs` 275 |
| `edge/` | 1,926 | `edge-build.mjs` 507, `edge-js.mjs` 308, `edge-host.mjs` 218, `edge-link.mjs` 204 |
| `lasm-modules/` | 815 | `ui-dom.mjs` 429, `web.mjs` 288 |
| `browser/` | 671 | `browser-build.mjs` 183, `loader.mjs` 149 |
| `serverless/` | 561 | `lasm-server.mjs` 327, `lasm-lambda.mjs` |
| `vite/` | 271 | the `@lasm/cli/vite` export |

### What does not ship

| Part | Files | Lines | What it is for |
| --- | ---: | ---: | --- |
| `scripts/` | 653 | 63,366 | CI harnesses. The largest are `full-lean/` (222 files, 19,851 lines: building Lean's runtime for Wasm, probes), `ci/` 4,710, `language-coverage/` 4,049, `wasi/` 3,727, `server-mvp/` 3,527, `lean-dist/` 3,446 and `link-driver/` 3,072 |
| `test/` | 1,472 | 31,121 | unit tests, fixtures, fuzz corpora and regressions |
| `integration/` | 92 | 7,109 | integration programs, some run by workflows |
| `examples/` | 465 | 64,029 | five flagship apps and small examples |
| `.github/workflows/` | 89 | 11,695 | CI ([CI.md](../CI.md)) |
| `verification/host-bridge` | 16 | 2,260 | the Lean model of the host bridge |
| `experiments/`, `bench/`, `deploy/` | 86 | 5,237 | feasibility probes, benchmarks, the Lambda image |
| `docs/` | 694 | 157 MB | 145 MB of it is `docs/evidence/` (517 files, mostly JSON) |

### npm dependencies

| Package | Kind | Use | Verdict |
| --- | --- | --- | --- |
| `koffi` | runtime (bundled into `@lasm/cli`, not an npm dependency of it) | FFI for posix_spawn, sockets, DNS, signals, clocks and the Windows time zone (20 modules) | Needed while the Node host implements Lean's native I/O from JavaScript. Node has no built-in FFI. |
| `tar` | runtime (the published CLI's only third-party dependency) | Unpacking tool archives (`managed-artifacts.mjs`, `npm-artifacts.mjs`) and packing the WASI component | Replaceable by a small ustar reader and writer (about 150 lines, fuzzed). Tool archives are zstd and tar; `node:zlib` has zstd since Node 23.8. |
| `binaryen` | runtime (repository only) | Only `scripts/full-lean/probe-wasmtime-helper.mjs`. The CLI uses the managed toolchain's `wasm-opt`, and the published `@lasm/cli` does not depend on it | **Removed** 2026-11-09, with the probe step. It was 104 MB in every checkout and CI install. |
| `@yarnpkg/cli-dist` | dev | Nothing (`docs/RELEASE.md` mentioned a yarn test that does not exist) | **Removed** 2026-11-09. |
| `pnpm` | dev | Nothing: `npm-dist.yml` installs its own pnpm | **Removed** 2026-11-09. |
| `miniflare` | dev | Nothing: `examples/folio/test/platforms.mjs` runs `wrangler` from `PATH`, which bundles its own Miniflare | **Removed** 2026-11-09 (no move needed). |
| `@stryker-mutator/core`, `tap-runner`, `c8`, `happy-dom`, `playwright-core`, `vitest` | dev | Mutation, coverage, the DOM tests, browsers. `vitest` is used only by `integration/managed-http.mjs` and one probe | Keep. `vitest` **removed** 2026-11-10 with its two unreferenced users (item 7/8): nothing needed porting. |

### Downloaded toolchains (at a user's first build)

| Toolchain | Size | Used for | Removable? |
| --- | --- | --- | --- |
| Lean 4.35.0, repackaged into tiers (release `lean-4.35.0-tiers-v2`) | `bin` about 40 MB; core tiers 168 MB; extended tiers 257 MB on demand; `c` tier 45 MB | Elaboration, Lean → C, and proofs | No. It is the language. |
| Link toolchain: a subset of Emscripten 6.0.9 (clang, wasm-ld, llvm-nm, llvm-objcopy, wasm-opt, wasm-emscripten-finalize, wasm-metadce) | 42–58 MB per platform, plus a 3.4 MB sysroot archive | C → Wasm, link, optimize | Not now. Its pieces can be narrowed (§3) and validated (§5). |
| Full emsdk 6.0.9 | 264–654 MB | Only `LASM_LINK_DRIVER=emcc` or `node-compile` | **Make it maintainer-only.** Users never need it. |
| Python 3.13.15 (python-build-standalone) | 22–35 MB | Only emsdk provisioning | Goes with emsdk. |
| Edge runtime (`lean-4.35.0-edge-v4`) | 1.3 MB | Lean's runtime prebuilt for the edge and WASI | No. It could be built from source in CI and stay pinned. |
| Wasmtime bundles | none (`wasmtime-bundles.json` is empty) | — | Remove the code that manages them (§3). |

No managed Node, wasi-sdk or Zig is downloaded by the CLI. WASI is linked with
the link toolchain and Emscripten's system libraries. Zig remains only in
`experiments/feasibility/toolchains.json`, which three CI scripts read, and
in `src/notices.mjs`'s reference notices.

## 2. How the removal candidates were found

- **The import graph from `bin/lasm.mjs`.** It reaches 99 modules under `src/`.
- **Name searches.** Many host files are copied into outputs by name, not
  imported, so every file name was searched in `src/`, `bin/`, the workflows,
  `package.json`, the tests and the scripts.
- **The coverage baseline** ([evidence/coverage-baseline.json](../evidence/coverage-baseline.json),
  2026-10-31). Files at 0 % in the unit suite are either run only inside
  built outputs or are unreached.
- **The mutation reports** ([TESTING.md §Mutation testing](../TESTING.md#mutation-testing)).
  Equivalent mutants mark code whose result no input can observe, so it is a
  candidate for deletion.

Each removal is a PR of its own. The test that proves the removal safe is:
- the full PR tier;
- plus the nightly tier on the branch (`ci-nightly.yml` by dispatch, Monday to
  Saturday);
- plus `release-checks` when the removal touches a shipped file.

## 3. Ranked removal list

They are ranked by value (risk removed, bytes and lines removed, attention
saved) over risk.

| # | Remove or merge | Evidence | Saves | Risk |
| ---: | --- | --- | --- | --- |
| 1 | **Done 2026-11-09.** The repository's `binaryen` dependency | Its only use is one probe script; the published CLI does not depend on it | 104 MB in every checkout and CI job | None |
| 2 | **Done 2026-11-09; `vitest` done 2026-11-10.** Dev dependencies `@yarnpkg/cli-dist` and `pnpm`; move `miniflare` to Folio; port `vitest`'s one use | No references. `miniflare` was unused (Folio's wrangler bundles its own). `vitest` stays until item 7/8: its users are `integration/managed-http.mjs` and `scripts/full-lean/check-aot-server.mjs`, both unreferenced, running a 165-line Vitest suite in `examples/lean-server-latest`; delete them together | About 32 MB of `node_modules` in CI | None |
| 3 | **Done 2026-11-09.** `lean/` (the Lean 4.32 `Lasm.IO`) and `runtime/host.cpp`, `core.cpp`, `stack.cpp`, `tasks.inc.cpp` | `lasm_io_request` appears only in these files. The four `.cpp` files are not copied by `configure-host.mjs` | 5 files. The root `lean-toolchain` (left at 4.32.0 for the retired builder) is now `v4.35.0` (2026-11-10): its readers are editors opening `library/` and pin-less fixtures, which need 4.35.0 | None. Update the prose in `IO_LIMITATIONS.md`, `docs/IO.md` and `docs/NODE_APPS.md` |
| 4 | **Done 2026-11-10.** The wasmtime-preview cluster: 13 `src/wasmtime-*.mjs` files, `wasmtime-bundles.json`, `application-metadata*.mjs`, their 8 tests, `integration/wasmtime-standalone.mjs`, `build-wasmtime-fixture.mjs`, `scripts/full-lean/package-wasmtime-*` | The CLI does not reach them, and the bundle list is empty. WASI output is linked by `src/wasi/` instead | About 1,200 shipped lines, the largest 0 % file (`wasmtime-runtime.mjs`) | Low. [WASMTIME_PREVIEW.md](../WASMTIME_PREVIEW.md) becomes history. Removed 18 `src/` files (1,384 shipped lines), 15 tests and their stand-ins, the `scripts/full-lean` wasmtime packaging scripts and probes, `integration/application-module-data*.mjs`, and the three dispatch workflows that only exercised them (`application-module-data.yml`, `application-module-data-files.yml`, `wasmtime-helper-probe.yml`). The `wasmtime` mutation module goes with them |
| 5 | **Done 2026-11-10.** `src/toolchain.mjs` (hard-codes Lean 4.32.0) and `src/native-pthread-factory.cjs` | The CLI never imports them. The factory is asserted *not* shipped. **Not yet removable (checked 2026-11-09):** `toolchain.mjs` is imported by about 40 `scripts/full-lean/` scripts, `scripts/package-application-release.mjs`, and tests that use more than `root` (`toolchain.test.mjs`, `portable.test.mjs`); the factory is listed by `freeze-build.mjs`, `derive-host-files.mjs` and three wasmtime probes, and has its own test (`pthread-cwd.test.mjs`). Remove both after items 4 and 8. After them, `toolchain.mjs`'s live users needed only `root` (computed in place); `generate-exports.mjs` now requires `--native-lean`, which its one caller always passes. Removed with them: the Lean 4.32 builders `scripts/full-lean/build.mjs`, `prepare-native64.mjs`, `prepare-toolchain.mjs`, `cc-driver.mjs`, `run-compiler.mjs`, `standalone-link-optimization.mjs`, `response-args.mjs` (and their two tests), `scripts/upstream/report.mjs`, `test/toolchain.test.mjs`, the factory's two tests. **Left for later:** research scripts whose only reference is their own unit test (`benchmark-measure.py`, `campaign-resource-report.mjs`, `symbol-lookup.mjs`, `server-driver-shim.mjs`, `source-links.mjs` in `scripts/full-lean/`); they are not dead by the name test, and each needs a decision | Two stale shipped files | Low. Move `root` into a test helper |
| 6 | The full emsdk and Python paths become maintainer-only (`LASM_LINK_DRIVER=emcc`/`node-compile`): `managed-sdk.mjs`, `managed-python.mjs`, `sdk-tools.json`, `python-tools.json`, `sdk-repairs.json` move to `scripts/` | Users never select those drivers. The link toolchain is the default on every platform | About 1,000 shipped lines and two download paths a user can never need | Medium: the release suites must not use them. Check with `release-checks` |
| 7 | **Done 2026-11-10.** Unreferenced `integration/` programs (22) and `experiments/edge`, `experiments/js-interop` | No workflow, test or script runs them | About 4,000 lines of maintenance surface | None. History is in git. Removed: 21 programs and 11 of their fixtures, `managed-http.mjs` with `examples/lean-server-latest` (a historical harness built only by removed scripts), all of `experiments/edge` and `experiments/js-interop` (EDGE.md and JS_INTEROP.md point to them at `590a923f`). **Kept** although no code runs them, because a current document gives them as the way to reproduce a result: `application-bundle-size.mjs` (BUNDLE_SIZE.md), `bignum-throughput.mjs` (BENCHMARKS.md), `managed-lake-dependency.mjs` (MANAGED_GIT.md). The wasmtime-related ones went with item 4 |
| 8 | **Done 2026-11-10.** Unreferenced scripts: 57 in `scripts/full-lean/` (probes, `derive-*`, AOT server), 10 of 13 in `scripts/upstream/`, 6 in `scripts/server-mvp/`, five top-level audits, and the strays listed in the inventory notes | No references. The 4.35.0 patches are loaded by computed name, so they **stay** | About 12,000 lines | Low. Run each workflow that lives in that directory once after removal. Removed 119 files (7,779 lines), found as the closure of files whose name appears in no other file (comments included) and checked for computed names. **Kept:** `scripts/language-coverage/probe-*.mjs` (run by name through `language-coverage-probe.yml`'s `probe` input), `scripts/release/trust-all.mjs` (a RELEASING.md step), `scripts/ui/node-e2e.mjs` and `dom-harness.mjs` (UI.md), `scripts/link-driver/spawn-audit.mjs` (TOOLCHAIN_SLIMMING.md), `scripts/server-mvp/curl-smoke.mjs` and `http-position.mjs` (SERVER_MVP.md), `scripts/language-coverage/make-sidecar-review.mjs` (LANGUAGE_COVERAGE.md), `scripts/inventory-upstream-applications.py` (UPSTREAM_APPLICATION_TESTS.md) |
| 9 | One Lasm.JS wire codec in JavaScript instead of two (`node-js.mjs` and `edge/edge-js.mjs` match line for line except Buffer vs DataView) | The 2026-11-07 decision kept both (a shared file would add a file to every host output) | About 250 lines and one place to keep in step with `Lasm/JS/Proofs/Wire.lean` | Medium. Revisit it with the bundler: inline the shared module at build time, so outputs still get one file |
| 10 | Duplicate licence texts (`src/wasi/component/LICENSE` = `notices/wasmtime-LICENSE.txt`; `notices/LASM-LICENSE.txt` = `LICENSE`; libuv's extra text twice) | Identical md5 | Small | Low. The notices test checks what ships |
| 11 | **Unreferenced part done 2026-11-10** (101 files, 70 MB, including 27 checkpoint files: every evidence file whose name no remaining file mentions). The rest is open. `docs/evidence/`: the 71 `node-broad-*checkpoint*` files (102 MB) and the 112 unreferenced files (71 MB); `docs/compatibility/` (Lean 4.32–4.34 data) | Only about 39 evidence paths are read by code | Over half of the repository's size | Low. Keep them in a GitHub release asset or the git history, and link the release |
| 12 | Dispatch-only diagnosis workflows (13 "controls"; CI.md's inventory) | They answered questions that are closed | Fewer workflows to keep green on runner image changes | Low. Keep the ones whose question can come back (Windows path, signals) |
| 13 | Historical documents: `NEXT_STEPS.md`, `docs/PLAN_OLD_2026-09-25.md`, the four `NODE_ACCEPTANCE_*_2026-09-2x.md`, `PROGRESS.md` | They are marked historical | Clarity | None. Move them to `docs/history/` |
| 14 | `tar` (runtime) replaced by an in-repo ustar reader/writer | Three uses | One runtime dependency, and its transitive ones (`minipass`, `chownr`, `yallist`, …) | Medium. Fuzz the reader (claim 5) before switching |
| 15 | `library/prebuilt` (40 MB in git) generated in CI and shipped from the package, not committed | `library-prebuilt.yml` regenerates it, and a test checks it is fresh | 40 MB of repository, and every library change's diff noise | Medium. Kept for now ([REVIEW.md](../REVIEW.md) §1), because a committed copy makes the npm tarball reproducible from the commit alone |
| 16 | **Deferred by Jordan (2026-11-10), not planned** ([REVIEW.md §1, MAJOR](../REVIEW.md#major-where-the-lasm-libraries-live-deferred-by-jordan-2026-11-10)). Keep everything inside `@lasm/cli` for now (the current setup). Jordan favours option D: platform-coupled code (`Lasm.JS` core, the generated standard bindings, the `Lasm.Fetch` server, platform glue) in the CLI; opinionated frameworks (`Lasm.UI`, `Lasm.RPC`, probably `Lasm.KV`) as separate lockstep-versioned `@lasm/*` npm packages from the same repository. He defers the decision until the `Lasm.*` rewrite is complete and the final APIs are decided and finished. The original proposal: Split the libraries: keep bundled only what is tied to the compiler (`Lasm.JS`, a minimal `Lasm.Fetch` core with the WASI, Fastly and wasi-http C glue); the pure-Lean layers (`Lasm.Web`, `Lasm.UI`, `Lasm.RPC`, `Lasm.KV`, `Lasm.Fastly`, `Lasm.Fetch.Assets`) become separate opt-in Lake packages, or some are deleted | Everything stays inside `@lasm/cli` until the `Lasm.*` rewrite is complete and its final APIs are decided and finished | A smaller CLI and trusted base; libraries versioned independently | Lake builds against the managed Lean; first-build time (prebuilt caching); new repositories need Jordan's OK. Not part of M1–M7 unless Jordan decides it |
| 17 | **After the `Lasm.JS.*` tiers land** (Jordan's 2026-11-09 bindings decision), and only for what a generated binding fully replaces: <ul><li>**Done 2026-11-10:** all of `Lasm.Web` and `src/lasm-modules/web.mjs`. The generated browser tier `Lasm.JS.Web.Browser` covers it in full, document and DOM, Canvas and History included; `Lasm.Web.App`'s mount glue moved to `Lasm.UI.Mount`.</li><li>Not `Lasm.Fetch`: it is the portable HTTP server (Node, the edge, Bun and Deno, Fastly host calls, WASI CGI) and the pure-Lean `Request`/`Response` with proofs. Only its outgoing client (`fetch`, `get`, `post`) overlaps; on JavaScript targets it may become a thin layer over `Lasm.JS.Web`, with no API change.</li><li>`Lasm.KV`'s Deno and Workers backends. The `Store` abstraction and the memory and Fastly backends remain, pending Jordan's KV review.</li><li>The example apps' hand bindings (Porter, Ledger), replaced by `Lasm.JS.Cloudflare`.</li></ul> `Lasm.UI` and `Lasm.RPC` switch their browser side to `Lasm.JS.Web`, with no API change | Only where a generated binding covers the same API in full, spec-faithful | The replaced parts of the hand-written binding layers and their JavaScript host glue | Medium: breaking renames, in a minor release; the apps migrate first |

Not removable, and why:
- `koffi`: the Node host's native I/O.
- The link recipes: each one describes a real link.
- `src/lean-init-targets-4.35.0.json`: generated and read at build time.
- The C hosts: WASI and Fastly have no JavaScript.

## 4. What remains after reduction

After items 1 to 13, the shipped compiler is about 18,000 lines of
JavaScript, about 4,000 lines of C, the recipes, and the `Lasm.*` libraries.
It bundles `koffi` and has one third-party npm dependency (`tar`), none after item 14. Its
trusted base for a deployed program is:

| Layer | What it is | Who wrote it |
| --- | --- | --- |
| Lean's front end and kernel | Elaboration, proofs | Lean FRO (trusted, and checked by independent kernels for proofs) |
| Lean's compiler: LCNF → IR → C | Code generation | Lean FRO |
| Lean's runtime (C/C++) and Lasm's runtime additions | Objects, RC, threads, I/O | Lean FRO plus `runtime/` |
| clang/LLVM (wasm64 backend) | C → Wasm objects | LLVM |
| wasm-ld | Linking | LLVM |
| Binaryen (`wasm-opt`, `wasm-emscripten-finalize`, `wasm-metadce`) | Lowering (memory64, JSPI/Asyncify, EH) and optimization | Binaryen |
| Emscripten's system libraries (musl, libc++, compiler-rt) | libc | Emscripten, musl, LLVM |
| Lasm's link driver and glue (JavaScript) | Recipes, initialization plan, host imports | Lasm |
| The host: Node, V8, workerd, Deno, Bun, browsers, wasmtime | Running the Wasm and the glue | Engines |

## 5. Verification path for each layer

The tool status below was checked on 2026-11-09. Dates are the latest seen,
and anything not confirmed at its source is marked so.

### Tools available

- **Lean 4.**
  - Proofs: Lasm already uses Lean for them.
  - Compiler: Lean's LCNF backend is complete as of 4.30 (2026-05). There is no
    mechanized semantics of LCNF or IR, and no verified Lean compiler. λpure
    and λRC have a paper semantics ("Counting Immutable Beans") and a verified
    RC insertion (a 2019 thesis).
  - FRO roadmap: Year 4's (Sep 2026 to Feb 2027) is about codegen
    performance, not compiler correctness.
  - WebAssembly in Lean: early efforts only. A SpecTec Lean 4 backend (PR,
    merge unconfirmed), Talos (an executable semantics, work in progress,
    2026-06), a Utrecht thesis and a Chalmers interpreter. Nothing is mature.
- **WebAssembly specifications.**
  - Wasm 3.0 was finished on 2025-09-17. SpecTec, adopted in 2025, generates
    the reference interpreter and Rocq and Isabelle definitions.
  - WasmCert-Coq (Rocq) covers Wasm 2.0 and has an extracted interpreter that
    passes the 2.0 suite. WasmCert-Isabelle covers 2.0 (2025-10), and
    WasmRef-Isabelle is a verified interpreter already used as a fuzzing oracle
    for Wasmtime.
  - Iris-Wasm (separation logic, Wasm 1.0) models the core of the JS–Wasm
    interface.
  - **Gap for Lasm:** memory64, exception handling and JSPI, which Lasm uses,
    are Wasm 3.0 or later, and nothing mechanizes them yet.
- **Verified compilers.**
  - CompCert 3.17 (2026-02) has no Wasm backend.
  - CakeML has no Wasm backend that could be confirmed.
  - Vellvm is a Rocq semantics of LLVM IR 14, not a verified LLVM.
  - Alive2 validates LLVM IR passes, but not the Wasm backend or wasm-ld.
  - Binaryen has only a minimal proof-of-concept translation-validation
    branch (z3). It relies on fuzzing and validation.
- **Rust.**
  - **Verus:** SMT-based functional correctness. Active, with nightly
    releases (vstd 2026-11-08), and used at Microsoft and, reportedly, Amazon.
  - **Kani:** bounded model checking, 0.68.0 (2026-09).
  - **Prusti:** 0.3.3 (2026-10), still a prototype. WaVe, a verified WASI
    runtime, was built with it.
  - **Creusot:** Why3, 0.8.0 (2025-12).
  - **Charon and Aeneas:** Rust to pure Lean 4. Active, and used for the Linux
    Binder deserializer (2026-08) and for crypto.
  - verify-rust-std: about 4 % of core's unsafe functions are verified.
- **libc and JavaScript.**
  - No verified musl or Emscripten libc exists.
  - JavaScript semantics (JSCert, KJS, JaVerT/Gillian) are ES5-era and
    dormant.
  - Node, V8 and the other engines stay trusted.

### How hard each layer is to trust

| Layer | Approach | Difficulty |
| --- | --- | --- |
| Lasm's JavaScript glue and C hosts | Specify each module in Lean and prove its propositions (done for serverless, the UI decoder and the Lasm.JS wire). Model differential in CI. Then **rewrite the pure parts in Lean**, so they are compiled by the same path as the program | Low to medium, and in progress |
| The link driver and recipes | They are data plus a planner. A Lean model of the plan ("every import is satisfied; the initialization order respects dependencies") checked against each real link's map file. That is translation validation of the plan, not of wasm-ld | Medium |
| Binaryen passes | **Translation validation** per pass Lasm uses: before/after modules checked for equivalence on our programs. Start bounded (an SMT check per function, or differential execution on a spec interpreter such as WasmCert's extracted one or the SpecTec reference interpreter), for the lowering passes first (memory64 → 32, atomics lowering, which `lower-atomics.mjs` already does itself) | Medium per pass. JSPI and Asyncify are hard (whole-program control-flow transforms) |
| wasm-ld | Validate the output: every symbol resolved as the map file says, and relocations applied. Checkable from the inputs and the output with a Wasm parser | Medium |
| clang/LLVM wasm backend | Not verifiable at our scale. Keep testing it (the `-O0`/`-O2` differential, engine differentials). Long term, **remove it from the path**: emit Wasm from Lean's IR directly (§6, M7) | Very hard to verify, hard to remove |
| Lean's compiler (LCNF → C) | Not ours. Differential testing against `lean --run` catches disagreements. A verified IR → Wasm path (M7) would need a semantics of Lean's IR, which does not exist yet: the largest research item | Very hard, research |
| Lean's runtime (C) | Trusted, and tested by the upstream suite. Lasm's additions (`runtime/node-*.cpp`) can shrink as the host moves to Lean | Hard |
| libc (musl in Emscripten) | Trusted. Shrink what is linked (wasm-ld's `--why-extract` already reports it); fuzz the pieces Lean uses | Hard to verify, easy to narrow |
| Engines and hosts | Trusted. Target equivalence across four engine families is the defence: a bug must appear in V8, JavaScriptCore, SpiderMonkey and wasmtime alike to pass unseen | Not feasible to verify |

### Lean or Rust for the rewrite

**Recommendation: Lean.** The rewrite candidates are Lasm's own code: the CLI's
planner, the link plan, the glue and the C hosts.
- Lean code is proved in the same language as the user's proofs, checked by
  the same kernel, and compiled by the same pipeline Lasm already validates.
- Lasm's propositions are already in Lean (§4 of the strategy). A Lean rewrite
  turns each "the JavaScript implements the model" gap into nothing, because
  the model becomes the code.
- Rust would add a second toolchain to every user's install. Verus, Kani and
  Creusot are each a separate trusted verifier, and the proofs would live
  apart from Lean's.
- Where Rust is the better tool (a native helper that must be fast and
  unsafe), Aeneas translates it to Lean, so the proofs stay in Lean.

The CLI itself stays JavaScript as long as `npm install` is the only
prerequisite (Node). Only the pure planning logic inside it moves to Lean,
compiled to Wasm by Lasm itself. The CLI then runs its own output, the
strongest dogfooding there is.

## 6. Recommended incremental path

Each milestone is useful by itself and is a PR series. Nothing changes a
public API without Jordan.

| Milestone | Content | Exit check |
| --- | --- | --- |
| **M0** | The testing strategy's exit bar ([TESTING_STRATEGY.md §7](../TESTING_STRATEGY.md#7-exit-bar-rock-solid)) | All 8 items green |
| **M1** | Removals 1–8 and 10 of §3 (dependencies, dead code, unused scripts) | PR and nightly tiers green; `release-checks` green; tarball smaller |
| **M2** | Removals 11–13 (evidence, workflows, history) and the emsdk path made maintainer-only (6) | Repository under 60 MB; no user download path unused |
| **M3** | Merges 9, 14, 15 (one wire codec, no `tar`, prebuilt generated) | Mutation scores held; fuzzing of the ustar reader for one nightly week |
| **M4** | Transferable propositions for what remains: a `Candidates.lean` per library, a Lean model per remaining glue module (Lasm.JS host operations, UI applier ops, edge request mapping, WASI CGI), each with a model differential in CI | Every JS/C module that ships has a Lean model or a stated reason |
| **M5** | Translation validation: wasm-ld output checked against its map; then Binaryen's lowering passes, on every differential program, by differential execution on a spec interpreter (weekly) | One validated pass per month; any failure is a bug report upstream |
| **M6** | Move the pure glue into Lean, compiled by Lasm (wire codecs, request mapping, the link and initialization plans). Delete the JavaScript copies | Each move removes a model differential, because the model is the code |
| **M7 (research)** | A direct Lean IR → Wasm backend in Lean, removing clang/LLVM, wasm-ld and most of Binaryen from the path for Lean code (the runtime would still be C at first). It needs a semantics of Lean's IR and of Wasm 3.0 in Lean, so it starts by contributing to those (SpecTec's Lean backend) | A prototype passes the differential suite on Node; then decide |

The order matters: M1 to M3 reduce what M4 must specify, M4's models are
what M6 moves, and M5 is independent and can run alongside.
