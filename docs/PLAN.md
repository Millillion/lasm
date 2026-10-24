# Lasm current implementation plan

Agreed 2026-09-25; scope extended 2026-09-26. The immediate milestone is an excellent installation,
compilation, CLI, packaging, and deployment experience for a basic ordinary Lean
program running in Node. Complete language and standard-library compatibility
will follow in separate chunks; it is not a prerequisite for this milestone.

This plan supersedes earlier instructions to pursue all engines and complete API
parity before delivering the basic workflow. The previous plan is preserved in
[OLD PLAN — archived 2026-09-25](PLAN_OLD_2026-09-25.md) for reference only.
Updating this document does not itself start, stop, or interrupt running work.

**Windows ARM64 support removed — 2026-10-16:** user decision; no upstream
Lean/Emscripten prebuilts. Lasm now targets five platforms: Linux x86-64, Linux
ARM64, macOS x86-64, macOS ARM64 and Windows x86-64. Windows ARM64 required
Lasm to build and maintain both toolchains from source, Windows on Arm is a small
share of developers, and that work slowed the MVP. On a Windows ARM64 host Lasm
stops early with an explicit unsupported-platform message. Do not add Windows
ARM64 back without upstream Lean and Emscripten prebuilts. Historical statements
below about six-target passes remain accurate records of what was tested then.

**First milestone completed 2026-09-26:** native Linux x86-64 and ARM64 passed
the same packed candidate. See [the acceptance report](NODE_ACCEPTANCE.md) for
exact hashes, versions, scope and measurements. The candidate is unpublished to
npm; deferred chunks below remain future work.

**Platform extension completed — 2026-09-28:** one retained `.46` archive passed
native installed-package and copied-deployment checks on Linux, macOS and Windows,
each on x86-64 and ARM64. Runtime restrictions, managed dependencies, Unicode
paths, local Lake imports, offline reuse and independent deployments passed.
The [acceptance report](NODE_ACCEPTANCE.md) identifies exact OS/tool versions,
artifact hashes and all six native jobs. Earlier Unicode and CI reference-tool
failures remain preserved. No npm publication occurred; broader compatibility
work remains deferred.

## Current ordered work, authorized 2026-09-26

1. Remove the multi-gigabyte runtime-compiler fallback. Reject reachable runtime
   Lean compilation/evaluation, module-data access, compiler/kernel state and
   dynamic executable plugins during the build. Preserve native build-time
   imports, macros, tactics, deriving and proofs. Reject incompatible deployment
   capability records at startup. Test both positive and negative controls and
   document the exact boundary in README.md.
2. Extend the same managed, installed Node package to native macOS x86-64 and
   ARM64. Validate each on no-cost standard GitHub-hosted runners with bounded
   workloads; distinguish process-tree monitoring from kernel-enforced limits.
3. After both macOS targets pass, extend to Windows x86-64 and ARM64. Resolve
   missing native tool distributions with validated, redistributable artifacts;
   do not call emulated execution a native ARM64 pass.
   Track the current implementation and distribution evidence in
   [Windows toolchains](WINDOWS_TOOLCHAINS.md).

All three ordered items above are complete for the scoped installed workflow.

## Installation hardening, authorized 2026-09-28

Implement the recommendations in [the dated robustness audit](TOOLCHAIN_ROBUSTNESS.md).
Preserve candidate `.46` and its evidence unchanged. Changes below require a new
packed candidate before extending the accepted support claim.

- [x] Make cache verification independent of locale; add bounded retries,
  connection/idle/overall deadlines, authenticated range resume and useful errors.
- [x] Coordinate artifact installs across processes with OS-owned locks; recover
  abandoned staging for downloads, derivations and Windows execution prefixes.
  Preserve successful publication when temporary cleanup fails.
- [x] Bundle the locked installer dependency graph and verify offline npm install.
- [x] Add proxy/CA and storage diagnostics, cancellation, and explicit safe cache
  repair with tests that preserve active installs and unrelated files.
- [x] Run deterministic native fault tests automatically on relevant pushes/PRs
  across all six targets. Replace cache-only runtime handoff with a durable,
  authenticated input.
- [x] Validate the new single packed candidate on all six targets, including
  the full CLI/Lake private-CA and authenticated-proxy control.
- [x] Schedule live distribution checks; retain all attempts and bounded evidence.
- [x] Observe three consecutive cold repetitions per target as an additional
  release-confidence gate, without claiming a statistical reliability guarantee.
  The user removed the earlier two-day/24-hour requirement on 2026-10-16.

The deterministic native matrix and the hardened candidate's complete installed,
offline npm, deployment and CLI/Lake network gates have passed all six targets.
The [hardening report](INSTALLATION_HARDENING.md) retains the original failures
and exact archive/job identities. Daily reporting selects this immutable archive;
the additional gate requires three consecutive cold passes per target, which may
run back to back. This gate passed on 2026-10-16 (runs 38847047512,
38850143704 and 38850152012).

Continue direct commits to `main`; automatic checks observe those commits.
Do not add a mandatory PR workflow or publish to npm. Windows 11 x64 and broader
language/API acceptance remain deferred.
Every implementation commit must review README.md for simplicity and current
accuracy: complete quick start, every CLI command/option with examples, exact
environment support, and exact unavailable Lean capabilities. Historical candidate
evidence does not establish acceptance of a changed package. Publish no npm release.

## First milestone: install and run with only Node/npm

A developer with only a supported stock Node/npm installation can install Lasm,
compile an ordinary `Main.lean`, and execute the compiled program inside Node.
Lasm supplies all additional build dependencies automatically. The developer
writes a complete Lean program whose primary entry point is Lean `main`.

```sh
npm install @lasm/compiler
npx lasm Main.lean
```

The initial README example and acceptance fixture should be this simple:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

Build and deploy through the same pipeline:

```sh
npx lasm build Main.lean
node dist/main.mjs
```

This workflow is validated with the packed release candidate. Registry installation
still requires an explicitly authorized npm publication; until then, install the
candidate archive described in the README.

## Scope and architecture

- Compile ordinary Lean ahead of time with managed native Lean/Lake and matching
  compilation tools, producing application Wasm, JavaScript loaders, and any
  required packaged host support. The deployed application executes in Node;
  running a native Lean executable instead is not acceptance of this pipeline.
- Node is the only supported engine. No browser or Cloudflare Workers acceptance
  work is required now. Lambda and Netlify adapters are later
  deployment work, not part of this first milestone.
- Keep the primary interface centered on Lean `main`. Do not require user-written
  JavaScript handlers, Lasm-specific Lean syntax, APIs, or annotations.
- Reuse verified implementation work. Choose the backend needed to deliver this
  workflow; integrating every experimental helper or port is not an independent
  prerequisite. Preserve existing implementations and evidence.
- Keep basic Lake project discovery and ordinary build-time imports working.
  A tiny local multi-module project is enough to validate that plumbing here;
  broad third-party library compatibility is later work.
- Preserve ordinary Lean syntax and build-time language features. The user has
  now authorized the runtime restrictions above to avoid the compiler fallback.
  Narrow the tested and documented support contract for this release. The fixture
  must execute real compiled Lean computation and IO, with no stubs or hardcoded
  output substituted for program behavior.

## Required native platform matrix

The initial Linux milestone and authorized macOS/Windows extensions use the
same complete installed-package workflow:

| Operating system | x86-64 | ARM64 |
| --- | --- | --- |
| Linux | Passed | Passed |
| macOS | Passed | Passed |
| Windows | Passed | Passed historically; unsupported since 2026-10-16 |

Here, x86-64 means 64-bit x86 (also called x64 or AMD64), not 32-bit x86.
Both the Linux milestone and subsequent macOS/Windows extensions are complete.
The acceptance report limits these passes to the exact tested OS and tool versions.

Use native execution for acceptance. Cross-compilation or emulation can assist
implementation but does not establish a native platform pass. Record exact OS
versions, architectures, Node/npm versions, Lean versions, and tool identities.
Document minimum OS/runtime requirements, including applicable system-library
requirements, rather than claiming compatibility with every OS release.

Building on a supported platform must work with only Node/npm installed by the
user. Cross-compiling deployments to a different platform is not required for
this milestone. State whether deployment files are platform-specific and reject
incompatible deployments clearly.

## Ordered acceptance checklist

Complete these through the actual installed CLI and package, beginning with
Linux x86-64, then finishing Linux ARM64. Existing evidence
may be reused only where its versions, artifacts, and scope match these gates.

### 1. Managed installation and dependencies

- [x] Pack a reproducible npm release candidate with its required files and
  redistribution notices, and install it into a fresh project outside the repo.
- [x] Provision pinned, matching Lean/Lake, compiler/linker, libraries, sysroot,
  optimizer, and any host helpers automatically. No manual Lean, SDK, Python,
  Git, C compiler, or global system configuration is required.
- [x] Verify downloads and cache contents; record checksums and resolved versions.
- [x] Recover cleanly from interrupted downloads and incomplete or damaged cache
  entries. Give actionable errors for unavailable downloads and unsupported hosts.
- [x] Explain first-run network access, download sizes, cache location, and how
  provisioned tools are reused. Validate cached use without further downloads.

### 2. CLI and basic compiled execution

- [x] `npx lasm Main.lean` compiles and runs the basic fixture successfully, with
  exact output and successful exit matching native Lean.
- [x] Validate argument forwarding after `--`, exit codes, and reporting of Lean
  compilation errors with small additional fixtures.
- [x] Validate a tiny ordinary Lake project with a local build-time import.
- [x] Reuse unchanged builds and invalidate them when relevant source, toolchain,
  or runtime inputs change.
- [x] Work in paths containing spaces and Unicode on every supported platform.
- [x] Provide concise, actionable diagnostics without requiring developers to
  understand the underlying compiler, Wasm engine, or cache implementation.

### 3. Independent deployment

- [x] `npx lasm build Main.lean` creates the complete deployment in `dist/` without
  running the application.
- [x] Copy `dist/` to a separate deployment environment and execute it with plain
  `node dist/main.mjs`, with no source checkout, Lean, build tools, development
  cache, or absolute build-machine paths available.
- [x] Package every runtime dependency needed by the selected backend. Deployment
  needs stock Node and the complete output directory, not manual helper setup.
- [x] Record package/download/deployment sizes and installation, first-run,
  cached-run, startup, and peak-memory measurements. Use these measurements to
  improve the developer experience; do not claim unmeasured performance.

### 4. CI/CD release-candidate proof

- [x] Run the Linux x86-64 and Linux ARM64 native matrix through GitHub Actions.
- [x] In each matrix job, install the packed npm candidate into a fresh project,
  exercise cold provisioning and cached execution, and run the deployment check.
  Testing only the source checkout is insufficient.
- [x] Prove the Node/npm-only prerequisite: prevent preinstalled runner compilers,
  Lean, Python, Git, and other development tools from silently satisfying product
  dependencies. Keep CI orchestration tools separate from the environment made
  available to the installed package under test.
- [x] Associate passes with exact package hashes, source revisions, versions, and
  platform identities. Preserve failure evidence and report unverified platforms.
- [x] Produce a tested release candidate and concise acceptance report. Do not
  publish to npm without an explicit publication request.

### 5. README and release support contract

- [x] Make the README irreducibly simple for a human or AI agent starting from a
  fresh supported machine: purpose, prerequisites, one complete `Main.lean`, and
  the exact install, run, build, and deployment commands.
- [x] State exact validated OS/architecture and Node/Lean constraints, required
  network access, automatically managed dependencies, and cache behavior.
- [x] State the exact language/library support and known limitations. Distinguish
  tested support from incidental success and work planned for later milestones.
- [x] Include only essential troubleshooting and links to deeper documentation;
  keep backend research and historical implementation details out of quick start.
- [x] Exercise the documented commands against the same release candidate used
  by CI. The milestone is complete only when both Linux architectures pass and the
  README accurately describes those results.

## Version policy

Check official sources for the latest stable published Node and Lean versions
when beginning an acceptance campaign, excluding prereleases and patched engines.
For Node, begin with the latest Current release. Pin exact versions throughout
that campaign and preserve older evidence under its original versions.

Keep Lean selection through the ordinary `lean-toolchain` file. Manage matching
compiler/runtime artifacts for each supported version, use a documented validated
default when no pin exists, and reject unsupported pins clearly. Do not silently
change a project's version. Additional version ranges require their own evidence;
they must not delay the initial pinned-version milestone.

Use the user's installed supported Node. Do not add a Node version manager or
require engine-specific flags in the documented deployment command. Keep internal
build tools and their versions managed by Lasm and included in cache identities.

## Toolchain slimming, authorized 2026-10-16

The user approved shrinking the first-build download while keeping Node.js and
npm as the only prerequisites. Follow [the slimming design](TOOLCHAIN_SLIMMING.md):

- [x] Phase 1: tiered trimmed Lean (per-platform binaries, shared core and
  extended module data), assembled into one prefix on demand. Accepted for Lean
  4.34.1 in candidate `.38930715033` (five-platform acceptance run 38930715033;
  cold-installation gate passed 2026-10-16).
- [x] Phase 2: Node link driver replacing `emcc` and Python, byte-identical to
  current output on existing fixtures. Accepted in the same candidate on Lean
  4.34.1 / Node 26.10.0.
- [x] Phase 3: npm platform packages via `optionalDependencies`, validated with
  a local registry on all five native targets (run 38963750452). The npm artifact
  source is in accepted candidate `.54`. Publication stays a user decision; on
  2026-10-16 the user chose to broaden language coverage before publishing.

**Lean 4.35.0 / Node 26.12.0 upgrade — accepted 2026-10-16** in candidate `.54`
(five-platform acceptance 38986393273; three consecutive cold-installation
campaigns passed). Approved as the step after the
slimmed installer was validated on Lean 4.34.1. Current source pins Lean 4.35.0
(default; a package carries one Lean release and its runtime) and Node 26.12.0
with npm 11.20.0. Tiered archives: [`lean-4.35.0-tiers-v1`](TOOLCHAIN_SLIMMING.md#lean-4350-tiers-2026-10-16).
The Wasm runtime build needed three of Lasm's Lean build patches ported to 4.35
(`scripts/full-lean/patches/lean-4.35.0-*.patch`: Lean now compiles mimalloc into
its runtime; Lasm keeps linking Emscripten's mimalloc). Remaining before
acceptance: the retained CI runtime, a packed candidate, the five-platform
native acceptance and the three-run cold-installation gate.

## Server MVP, authorized 2026-10-17

Goal: developers run Lean on the server in Node runtimes, platform by platform,
building robustness at each step. Use Lean's own `Std.Http`; add no Lasm-specific
application API.

1. **Plain Node server** (VPS, Docker, Fly, Render — anything running `node`). **Gate passed 2026-10-20** on candidate `0.1.0-experimental.39310029213` (see docs/SERVER_MVP.md).
   Developers write ordinary Lean with `Std.Http.Server` handlers, `Lean.Data.Json`,
   environment variables, `Std.Time` and async tasks. Done means:
   - Lean's upstream `Std.Http` (and related async/time/JSON) tests pass under
     Lasm as they do natively;
   - example servers (routing, JSON APIs, streaming bodies, keep-alive) serve real
     clients on all five targets in CI;
   - load (sustained concurrency, no errors; throughput/latency vs native Lean),
     soak (flat memory over long runs) and fault tests (handler exceptions,
     malformed requests, slow/disconnecting clients, oversized bodies fail one
     request, never the server);
   - acceptance plus three consecutive clean runs.
   Outbound HTTP is deferred: Lean has no HTTP client or TLS; revisit with usage.
   **Performance (user decision 2026-10-17):** the profile (docs/SERVER_MVP.md)
   shows the host RPC bridge dominates: 58 Lean→Node calls per request at ~50–65 µs
   of main-thread CPU each, saturating Node's main thread at ~330 req/s while Lean
   threads idle. Before the step 1 gate, in order: (a) cheap wins — stop re-reading
   zoneinfo for every `Date` header, read clocks inside the worker; (b) merge the
   async promise protocol into fewer calls; (c) a cheaper RPC transport (shared
   memory, no reply cloning, no stack traces on routine cancellation); then (d)
   gate targets: at least 50% of native throughput and p99 latency within 3× of
   native on the robustness fixture, with RPCs per request and main-thread
   utilization tracked as regression metrics.
   **Platform scope of the targets (user decision 2026-10-19):** the throughput
   and p99 targets apply to Linux (x86-64 and ARM64), where production servers
   run; they are met there (53–89% of native, p99 1.1–1.75×; run 39302965569).
   macOS and Windows must pass correctness, faults and the soak (no leaks), with
   performance measured and reported but not gating (currently 20–31% of native).
   The step 1 gate is: the candidate's five-platform acceptance, three
   consecutive clean cold-installation campaigns, and three consecutive clean
   five-platform robustness runs on the exact candidate.
   Progress and evidence: [SERVER_MVP.md](SERVER_MVP.md). The Lean 4.35.0 Linux x64
   baseline (2026-10-17): 22/22 eval-io inputs and 1,255 runtime-adapter actions
   pass in Node with no deployed failures. The remaining non-passes are classified there.
   Robustness (2026-10-17): Lasm load and fault behaviour matches native on all five
   targets, but candidate `.54` leaks per request; two leak fixes await review, after
   which Windows passes and Linux/macOS still grow about 1 KiB per request.
2. Node serverless (Netlify Functions first, then Lambda/Vercel): the same
   `Std.Http` handler fed platform requests by Lasm-internal glue; Node 22/24/26,
   no glibc 2.39 floor, cold start and warm reuse.
3. Cloudflare Workers: single-threaded, no native add-ons, no filesystem, 128 MB.

npm publication follows language coverage (user decision 2026-10-17).

## Language coverage phases, approved 2026-10-19

The user chose to build broader Lean language support on full Node.js first,
then go platform by platform to serverless, in phases. **Stop at the end of
each phase for the user's review before starting the next.** Oracle: upstream
Lean tests and real programs must match native Lean; every non-pass is
classified; five-platform CI validation and a candidate gate end each phase.
Runtime compilation/elaboration and dynamic plugins stay unsupported by design
and are documented as such.

Phase numbers follow the actual order (renumbered 2026-10-20; JS/npm interop inserted as Phase 4 on 2026-10-22, shifting later phases by one). Older code
comments and committed evidence use the original labels: L1 = Phase 1,
L2 and L3 = Phase 2, L6 = Phase 3, L5 = Phase 4, L4 = Phase 5, L7 = Phase 6.

- **Phase 1 — Baseline and quick fixes (was L1):** fix the LeanExport link
  failure; give `import Lean` rejections a clear message naming narrow imports;
  run every runtime-capable upstream registration (not only the server subset)
  on Node. Exit: complete classified baseline and a ranked fix list.
  **Complete and reviewed** (2026-10-20; the user chose option C, which this numbering
  follows): [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#phase-1-baseline-and-quick-fixes-2026-10-20).
- **Phase 2 — Core and I/O completion (was L2 + L3, merged at the Phase 1
  review):** core language and data types (numerics, big Nat/Int, fixed-width
  overflow, Float, String/Char/Unicode, arrays/byte arrays, hash/tree maps and
  sets, recursion forms, exceptions) and complete I/O (IO.FS directories,
  metadata, symlinks, permissions, locking, temp files; processes, signals,
  stdio/terminal, time zones, random). Concretely: fix the C runtime's view of
  the environment (IO.getEnv sees variables, runtime getenv does not), the
  macOS/Windows case-insensitive shadowing of standard libraries by project
  files (e.g. `init.lean` vs `Init`), and make every upstream test type run on
  all five targets (setup-script sidecars, Lake-project drivers,
  compiled-application harness on macOS and Windows). Exit: zero Lasm-caused
  failures outside Lean-as-a-library on all five targets, plus a candidate gate.
  Results (2026-10-20, awaiting review): [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#phase-2-core-and-io-completion-2026-10-20);
  zero Lasm-caused failures on all five targets with candidate `.39500947696`;
  its cold-installation gate passed 2026-10-21 (runs 39537968104,
  39537979004, 39537992042).
- **Phase 3 — Ecosystem (was L6, moved before Lean-as-a-library; scope
  approved 2026-10-21):** targets chosen from adoption data
  ([package research](research/lean-package-adoption-2026-10-21.md),
  [HTTP client research](research/lean-http-clients-2026-10-21.md)).
  - Tier A (must work): Batteries, Cli, LSpec, Plausible; Aesop and Qq
    elaborate at build time and stay out of the Wasm link when unreachable at
    run time; Lake resolves Mathlib's standard dependency set (ProofWidgets4,
    import-graph, LeanSearchClient); `import Lean.Data.Json` works at run time
    (pulled forward from Phase 4 by user decision 2026-10-21).
  - Tier B (runtime libraries): leansqlite (flagship for compiling a package's
    bundled C sources with Lasm's Emscripten toolchain), UnicodeBasic, MD4Lean,
    lean-zip, lean4-parser, lean-regex, and one pure-Lean web stack (leanio or
    lean-redis) end to end.
  - Outbound HTTP: our own fetch-style client, [Millillion/fetch](https://github.com/Millillion/fetch)
    (standalone public repo, `import Fetch`), using `Std.Http` types, with a
    Lasm/Node `fetch` backend and a native backend (libcurl loaded at run time,
    `curl` CLI fallback). Existing code that runs the `curl` command keeps
    working where curl is installed. Option (b′), emulating an existing
    client's native functions, is dropped: no client has real adoption.
  - Tier C (measured experiments): Mathlib subset imports (build time, olean
    volume, Wasm size); build-time native tactic libraries (lean-smt,
    LeanCopilot) still elaborate in Lasm builds.
  - Prebuilt native libraries (libcurl, OpenSSL, libpq, hiredis, BLAS) get a
    clear error naming the library. Node-backed replacements for crypto,
    Postgres and Redis, and Rust-based packages, are follow-up candidates.
  Exit: published compatibility list with per-package status on all five
  targets, plus a candidate gate.
  Status (2026-10-22): complete, awaiting review. Candidate `.39677808414`
  passed five-platform acceptance (run 39677808414) and the cold-installation
  gate (report in run 39749093869); zero Lasm-caused failures. Results in
  [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#phase-3-ecosystem-2026-10-21) and
  [COMPATIBILITY.md](COMPATIBILITY.md).
  **Phase 3 review (user decisions 2026-10-22):**
  - Accepted: the Node pin moves to 26.12.1; initializer pruning (an unused
    module's initializers do not run, as with `meta import`).
  - **Phase 3 wrap-up, approved; items 1 and 2 done (2026-10-22), item 3 superseded**
    (keeps the "only Node.js/npm" promise for packages with C):
    1. [x] When Lasm runs Lake, the default C compiler `cc` (used by
       `buildO`/`compileO`) is the clang that ships in Lean's release (`bin/cc`
       of the C tier, first on PATH). No system C compiler is needed on any of
       the five targets; Linux was verified with every system compiler and
       C header package purged. macOS still needs the Xcode Command Line Tools
       SDK for C library headers (Apple's SDK may not be redistributed);
       Windows needs nothing (the C tier's MinGW-w64 headers are clang's own
       sysroot, a host MinGW is not read).
    2. [x] A "C tier" per platform (release `lean-4.35.0-c-v1`, 39–52 MB
       compressed, 176–314 MB unpacked; [NODE_SUPPORT.md](NODE_SUPPORT.md)):
       Lean's clang, linker, archiver, headers and link libraries, clang's
       resource headers and C library headers. Projects with bundled C no
       longer download the full ~600 MB release.
    3. Millillion/fetch: its CI (native, five platforms, green) and planned
       gaps were added; then the user dropped the library (2026-10-22). The
       repository is archived and was never released; Node's own `fetch`
       through JS/npm interop is planned for Phase 4.
    Candidate `.39815056197` (source `7eb24a3`) passed five-platform acceptance,
    the ecosystem re-check ([COMPATIBILITY.md](COMPATIBILITY.md)) and the
    cold-installation gate (runs 39839405077, 39839429124, 39839453609); see
    [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#phase-3-wrap-up-2026-10-22).
  - Follow-ups recorded:
    - macOS ARM64 memory: 11 eval-io programs peak at ~2.8 GiB, at the CI
      guard limit on 7 GiB runners. Investigate why small programs peak that
      high (product work, not a guard change); folded into Phase 6 (concurrency stress/soak).
    - LeanCopilot: dropped; documenting the limitation is enough (deploying an
      AI proof tactic to Node is not a real use case).
    - Native-library replacements: libcurl is covered by fetch; Redis by
      lean-redis (pure Lean). Build our own libraries where none is
      established, as with fetch: crypto (Node `crypto` under Lasm, OpenSSL
      loaded at run time natively) and a pure-Lean Postgres driver over
      `Std.Async` TCP. Proposed as a new phase after Phase 4 and before the
      concurrency soak; its scope comes from a catalog of the most-used,
      vital server packages (requested by the user 2026-10-22, to be
      discussed before approval).
- **Next-phase discussion (2026-10-22; decided, see Phase 4 below):** the
  [server package catalog](research/server-package-catalog-2026-10-22.md) ranked
  vital server libraries (Tier 1: web framework, encoding, crypto, env, log,
  tls, postgres, jwt). User feedback: a web framework is not needed from us
  (`Std.Http` server + fetch already cover incoming and outgoing HTTP; routing
  can come from the community), and rather than writing many packages, Lasm
  programs could use npm packages. Proposal: replace the "server libraries"
  phase with a **JS/npm interop phase** placed after Phase 4: a `Lasm.JS` API
  (dynamic `JS.Value` handles, `JS.require`, `@[js "module" "export"]` typed
  bindings, automatic conversion of strings/numbers/booleans/bytes/JSON, JS
  promises as awaitable Lean tasks, built on the existing host-call transport
  and handle table), `package.json` next to the lakefile with `lasm build`
  resolving and bundling from `node_modules`; later, bindings generated from
  `.d.ts` files and JS-to-Lean callbacks. Exit: a "hello CRUD API" (Std.Http +
  npm `pg` + `jose`) on all five targets. Trade-offs: programs using interop
  run only under Lasm (pure logic stays natively testable); no type checking
  at the boundary without typed bindings; each call costs a thread crossing.
  Our own pure-Lean packages only where they add value (like fetch). Catalog
  answers recommended to the user: standardize on core `Lean.Json`; secret-key
  crypto never in pure Lean for production; serverless adapters belong to
  Lasm's serverless phases; mapping TCP/TLS onto Workers `connect()` belongs to
  the Workers phase; proposing a WebSocket upgrade hook and base64 to Lean core
  is the user's call.
- **Phase 4 — JS/npm interop (user decision 2026-10-22; runs before
  Lean-as-a-library, which becomes Phase 5):** Lasm programs use existing npm
  packages and Node built-ins (including Node's own `fetch`) instead of new
  Lean libraries. Decisions: bindings are written by hand or by AI agents (no
  `.d.ts` generator); no `js!` syntax for now (revisit only if real use shows a
  need); programs that use interop run only under Lasm (pure logic stays
  natively testable). Millillion/fetch is superseded and archived unreleased.
  Work, in order:
  1. Threading prototype: message passing between the Lean pthread and Node's
     main thread versus JS Promise Integration (Lean on the main thread);
     measure call and callback cost, check wasm64 + pthreads compatibility and
     Lean blocking operations; choose the architecture.
     Status (2026-10-22): measured, **awaiting the user's review**; see
     [JS_INTEROP.md](JS_INTEROP.md). Recommendation: message passing (A).
     Lean→JS call ~16 µs (JSPI ~1 µs), but Node `http` with queued Lean callbacks
     reaches 37k req/s at c=16 (plain Node 43k, JSPI 15k, current `Std.Http` 1.3k)
     and Lean's tasks, blocking IO, `Std.Async` and 64 MiB stacks are unchanged;
     JSPI needed main-thread futex rewriting and V8 stack flags and cannot make
     host calls under synchronous callbacks.
  2. Core: dynamic `JS.Value` handles (`JS.require`, `JS.global`, get, set,
     call, new, await); `ToJS`/`FromJS` conversions (String, numbers, Bool,
     ByteArray, Array, Option, `Lean.Json`, `deriving` for structures); typed
     one-line bindings `@[js "module" "export"] opaque f : … → IO …` with the
     conversion glue generated from the Lean type; JS promises as awaitable
     Lean tasks; Lean functions as JS callbacks (async first; synchronous
     callbacks documented with their cost).
  3. `package.json` next to the lakefile: `lasm build` resolves from
     `node_modules` and the deployable output includes the dependencies.
  4. Agent-friendly binding: a binding guide written for AI agents with
     complete examples; runtime type-mismatch errors that name the binding, the
     expected Lean type and the JS value received; a binding check (declared
     exports exist and accept the declared arity); worked examples for
     Express, `pg` and `jose`.
  Status (2026-10-23): steps 2–4 implemented in current source
  ([JS_BINDINGS.md](JS_BINDINGS.md), implementation notes in
  [JS_INTEROP.md](JS_INTEROP.md#implementation-steps-24-current-source)). The library
  ships with Lasm and is compiled into the managed Lean prefix (no Lake dependency).
  The interop fixture runs in the five-platform installed acceptance. The Express and
  Hono example with `pg` and `jose` and the `fetch` example run on all five targets in
  the `js-interop-examples` workflow: Postgres comes from a service container on Linux,
  embedded-postgres on macOS and the image's PostgreSQL service on Windows.
  Candidate `.39891445495` (source `3aa1bf1`, SHA-256 `64b1d5ce…c2d7`) passed
  five-platform installed acceptance with these checks in run 39891445495. Windows was
  rerun once after a timeout in the pre-product isolation control. The cold-installation
  gate **passed on 2026-10-23**: the report of run 39954662109 shows 4 consecutive clean
  installations on Linux and macOS and 3 on Windows.
  - Earlier campaigns failed only outside Lasm's code:
    - GitHub HTTP 502 responses while downloading the extended tier (darwin-arm64);
    - a missing guard monitor in a macOS pre-product control (darwin-x64);
    - Windows isolation controls that timed out while the setup walked Program Files
      (now a separate discovery step, `88bf953`).
  - The gate report now retries GitHub API 5xx answers (`e579cb0`).
  - **Phase 4 is complete and awaits review.**
  Exit: a Lean app on Express with `pg` (Postgres) and `jose` (JWT), and the
  same app on Hono (`@hono/node-server`; added by the user 2026-10-22 as an
  important test library, since Hono also targets the planned serverless
  platforms), on all five targets, using hand- or AI-written bindings, plus a
  candidate gate. Architecture (user approval 2026-10-22): option A, message
  passing with Lean on its own pthread ([JS_INTEROP.md](JS_INTEROP.md)); JSPI is
  revisited only if real bindings prove chatty and the V8/Emscripten stack
  issues are fixed. Node `http`/Express/Hono with Lean handlers becomes the
  recommended fast path for HTTP servers (prototype: 37k vs 1.3k req/s for
  `Std.Http` under Lasm); `Std.Http` stays supported.
- **Order after Phase 4 (user decision 2026-10-23; final roadmap below):** publish to npm before
  serverless. Planned order: production hardening on Node (interop soak, memory
  incl. the macOS ARM64 finding, startup and bundle size, the role of
  `Std.Http` given interop is ~28x faster); developer experience (`lasm init`
  templates) plus the full-suite release gate, then `@lasm/cli` 0.1 on npm
  (publication needs explicit approval); Node-based serverless (Lambda,
  Netlify, Vercel); Cloudflare Workers last (needs a single-threaded runtime).
  Lean as a runtime library is parked and picked up when packages need it.
  The user wants launch very soon and an explicit supported-platform list
  (like Hono's) decided now; a platform deep dive is in progress. Found
  2026-10-23: built apps pin the exact Node version (26.12.0; the same app ran
  on Node 24 with the check removed), the build platform (koffi native add-on),
  and glibc >= 2.39 (AWS Lambda's Amazon Linux 2023 has 2.34) — launch
  blockers for most hosting platforms.
### Roadmap after Phase 4 (user decision 2026-10-23)

Every phase and sub-phase ends with a **review stop**: report to the user.
Working mode (user instruction 2026-10-23, to launch quickly): never sit idle
on long CI runs — verify enough locally to build on the work, start CI, and
keep moving to the next sub-phase while it runs; reviews are reported as each
sub-phase completes rather than blocking work (the user can stop or redirect
at any time). npm publication still waits for explicit approval. Platform support is tested only in
our own CI with official local runtimes, emulators and images, never with real
accounts or deployments (user decision 2026-10-23); support claims say which
local runtime backs them. Bun and Deno as runtimes stay dropped. Research:
[platform analysis](research/platform-support-analysis-2026-10-23.md).
Earlier labels: the old Phase 5 (Lean as a runtime library) is parked below;
the old Phase 6 (concurrency soak) and Phase 7 (full-suite release gate) are
folded into Phases 5.2/5.3 and 7.

- **Phase 5 — Launch on Node (npm 0.1).**
  - **5.1 Portability fixes and launch-platform CI.** Built apps and the
    compiler accept Node >= 24 instead of an exact version (verify the compiler
    on Node 24); drop the app glibc check or lower it to 2.28 (Node's own floor);
    include the linux-x64 and linux-arm64 native pieces (koffi, helpers) in every
    build so a Mac build deploys to Linux, and check "native bundle present for
    this host" instead of an exact host; stop shipping the unused
    `native-pthread-factory.cjs`; templates listen on `0.0.0.0`/`$PORT`; document
    >= 512 MB memory and `libatomic1` for Node 26 on minimal images; production
    `node_modules` only. CI: built apps on Node 24.0/24.x/26.x (22.x gives a
    clean error); Debian 11/12, Ubuntu 22.04/24.04 and Amazon Linux 2023
    containers; read-only filesystem and 512 MB cap; build on macOS and Linux,
    run on the other; AWS Lambda container image with its Runtime Interface
    Emulator and the Lambda Web Adapter (x64 and arm64).
    *Status (2026-10-23, complete): candidate `.39988013618` (source `d8484c4`) passed
    five-platform acceptance and the platform matrix (run 39988013618); the
    cold-installation gate passed (runs 39994918847, 39994938810,
    39994957491). Phase 5.1 complete; review stop. It also lengthens managed-download retries to exponential
    backoff over about 2-3 minutes (every 5xx, 408/429, resets).*
    Apps check Node >= 24.0.0, "native pieces for this host" and
    glibc >= 2.28; the compiler checks Node >= 24 and glibc >= 2.34 (measured:
    managed Git needs GLIBC_2.34, Lean's LLVM 2.30, everything else <= 2.27).
    Production `node_modules` was already the deployed closure (no change). The
    Lambda recipe uses the managed image's exec wrapper so the image's own
    entry point and emulator work unchanged ([DEPLOYMENT.md](DEPLOYMENT.md),
    `deploy/`, `platform-support.yml`, which gates candidate retention). By
    design a Linux build refuses macOS/Windows (CI checks the message); the
    other direction is supported.
  - **5.2 Launch essentials.** `lasm init` templates (plain program, Express,
    Hono, Dockerfile, Lambda container); getting-started guide and a deployment
    recipe per launch platform; a short interop soak (Express and Hono with Lean
    handlers under load for hours: handle/callback leaks, memory growth, error
    paths); published startup time, bundle size and memory numbers; decide and
    document the role of `Std.Http` (interop is ~28x faster under Lasm).
    *Status (2026-10-23):* `lasm init` (templates `plain`, `express`, `hono`,
    `std-http`), docs/GETTING_STARTED.md, docs/deploy/ and the interop soak
    (scripts/interop-soak, `interop-soak.yml`) are in current source; template CI
    (`templates.yml`) runs with every candidate. Startup, bundle size and memory
    numbers are published by 5.2b (docs/BENCHMARKS.md). `Std.Http` position
    (decided 2026-10-23, SERVER_MVP.md#launch-position-2026-10-23): Express/Hono
    with Lean handlers for production HTTP; `Std.Http` supported for pure-Lean
    portability (28.8 host calls per request against 4.4; no cheap fix beyond
    the optional `generateDate := false`; deeper work in Phase 7).
    Interop server path: `Function.ofFnReply` (reply with a method call) and
    one-call request reads in the templates cut host calls per request from
    4.3–4.4 to 2.3–3.4 (+16–30 % locally); the rest is Phase 7.
    Interop soak passed (docs/INTEROP_SOAK.md): 2 h per app on Linux x64 and
    15 min elsewhere, 0 errors, no handle/callback/memory growth. Finding: waiting
    handlers were bounded by Lean's worker threads (about one per CPU).
    *Note (2026-10-23, pre-launch fix, current source; candidate `.58`, source
    `a9c5a9d`, passed five-platform acceptance (run 40012750099) and the interop
    soak (runs 40013948843, 40021909538)):* handlers and promise-returning bindings now run in `Async`
    (Std.Async): `Function.ofFn`/`ofFnReply` take `Async` functions, and
    `callAwait`/`callMethodAwait`/`Value.await` and `Async R` bindings await
    without holding a Lean thread (the host resolves a Lean promise, the
    computation continues from it). Locally, 1,000 concurrent requests awaiting
    a 100 ms timer finish in 0.27–0.30 s pinned to 2 CPUs (8.7 s before), with
    no thread growth; the soak now runs this probe first. `IO` awaits keep their
    blocking behaviour for scripts. Templates, examples and guides use `Async`.
  - **5.2b Release benchmarks (user request 2026-10-23).** An irreducible set
    of benchmarks recorded automatically on every release candidate and
    committed to the repo (machine-readable history plus a readable
    BENCHMARKS page), so users see exactly what they get and we have a
    baseline to optimize against: cold start (process start to ready and to
    first HTTP response), bundle size (dist total, `program.wasm`, compressed),
    memory (idle and under-load RSS), HTTP throughput and p99 (Express/Hono
    with Lean handlers, `Std.Http`, plain Node on the same runner as the
    reference ratio), interop call latency, and build time (cold and
    incremental) plus `@lasm/cli` install size. Record runner, OS, CPU and
    Node for every number; compare by ratio to the same-runner Node baseline.
    Implemented 2026-10-23: fixtures and harness in `bench/`, workflow
    `release-benchmarks.yml` (called by `node-linux-acceptance.yml` after a
    candidate is retained; also manual), results committed to
    `docs/benchmarks/history/<version>.json` and [BENCHMARKS.md](BENCHMARKS.md)
    with the set's rationale and method. Regressions are flagged, not gating.
  - **5.3 Release gate.** Full runtime-capable upstream suite on five targets,
    ecosystem and interop examples, performance/robustness regression check,
    five-platform acceptance and the cold-installation gate.
    *Status (2026-10-23): final pass running on candidate `.58` (run 40012750099,
    source `a9c5a9d`: Phases 4, 5.1 and 5.2 with non-blocking JS awaits in
    `Async`; runtime `7aa5028c…` unchanged), which passed five-platform
    acceptance, the interop examples, the templates on all five targets and the
    platform matrix. Dispatched on it: the upstream suite (every Phase 3 harness
    and shard count, five targets), the ecosystem re-check (five targets, Linux
    without a system C compiler, Tier C), server robustness, release benchmarks on
    all five, the npm distribution through a loopback registry (`@lasm/cli` 0.1.0,
    MIT, new `init` scenario) and three cold-installation runs. Early pass on
    `.40000056579`: robustness passed on all five (run 40008269718; the obsolete
    `full` overlay is now off by default), benchmarks on all five (run
    40008254876), 39 ecosystem projects green before cancellation, no regression in
    264 finished linux-x64 adapter tests; the loopback npm run (40008240082) passed
    on macOS/Windows and hit the guard's page-cache budget on Linux in the new init
    scenario (fixed, `920718f`). Readiness review: README Known limitations,
    Licenses, environment variables, platform claims tied to CI jobs. Draft publish
    plan: [release/0.1.0-draft.md](release/0.1.0-draft.md).*
  - **Publication decisions (user, 2026-10-23), in progress:** (1) `Async`
    handlers by default in `Lasm.JS` (breaking, pre-launch) — accepted;
    (2) `@lasm/cli` is MIT, copyright Jordan Last; (3) package set: the CLI plus
    the platform tool packages, and the C tier is also published as
    `@lasm/lean-c-<platform>` (`4.35.0-lasm.1`, on demand) — packaged in
    `ee06055`/`be64a89`; the name stays `@lasm/cli`; `create-lasm` (for
    `npm create lasm`, lockstep with the CLI, MIT) — approved and packaged
    (`packages/create-lasm`): 28 packages; local-registry rehearsal scenarios
    `c-tier` and `create` added to npm-dist.yml; (4) Git and (5) GMP wait for a full license-compliance audit
    (docs/LICENSE_AUDIT.md, in progress; items with legal weight go to a
    lawyer's review); (6) Lasm's MIT notice in built apps and the `--help`
    fixes are folded into the audit fixes.
  - **Decision 4 (user, 2026-10-23): no bundled Git.** Lasm uses the system
    `git`; when Lake needs Git and none is installed, Lasm stops with a clear,
    per-OS install message. The `@lasm/git-*` packages and dugite downloads are
    removed. Licensing (user instruction 2026-10-23): resolve every compliance
    question ourselves, choosing the over-complying reading; no items are
    deferred to a lawyer.
  - **Decision 5 (user, 2026-10-24): build Lean's Wasm runtime without GMP**
    (Lean's own big-number code), so apps built with Lasm contain no copyleft
    code. Proven by the full upstream suite on five targets plus big-number
    performance measurements; fallback is GMP as a separate, replaceable Wasm
    side module. GMP stays only in the compiler's native Lean binaries and the
    C tier, covered by notices and mirrored sources. The final release
    candidate and gate run after this rebuild.
    *Status (2026-10-24, current source):* runtime `8b3e33e0…` (CI build
    40066905228, source `c328a40`, handoff `6c985e0a…`) is built with
    `-DUSE_GMP=OFF` and pinned; it has no `libgmp.a`, and apps' notices no longer
    list GNU MP. USE_GMP changes only Lean's C++ runtime (libleanrt's mpz,
    object, compact, sharecommon; six libleancpp objects): lean.h and the
    generated C do not depend on it, so the build reused the previous runtime's
    standard-library archives and symbol registry after header, patch, hash,
    symbol-set and 60 byte-identical recompiled-module checks
    (`node-linux-runtime.yml` input `reuse-standard-libraries`). Initialization
    review: no initialization path changed (`canSpecializeInitialization`).
    Correctness: the differential test (integration/bignum-differential.mjs)
    matches native Lean on 22,849 checked lines; the smoke test compares
    multi-limb results on CI. Speed: equal up to a few hundred digits, then
    slower than GMP (10,000 digits: multiplication 5×, `Nat.gcd` 60×; 100,000
    digits: multiplication 23×), [BENCHMARKS.md](BENCHMARKS.md#big-numbers-without-gmp).
    Next: candidate, five-platform acceptance and the full upstream suite on
    five targets against Phase 3.
  - **Release process (user decision 2026-10-24):** releases are version
    bumps. A release PR changes `package.json` `version` and adds
    `docs/release/<version>-notes.md`; CI runs the candidate checks; on merge to
    `main`, `release.yml` publishes new packages via npm trusted publishing
    (OIDC, provenance), verifies `npm create lasm@<version>`, tags and creates
    the GitHub release. One-time bootstrap by the user: `npm login`, 0.0.0
    placeholders (deprecated afterwards) and `npm trust github` per package.
    The agent merges release PRs once green; 0.1.0 waits for the user's go.
    Implemented: [RELEASING.md](RELEASING.md) (`release-checks.yml`, `release.yml`,
    `scripts/release/`).
  - **CI test policy (user decision 2026-10-24):**
    - every release PR: release checks (candidate build, five-platform
      installed acceptance, platform matrix, templates, interop examples, npm
      rehearsal), about 2-3 h;
    - runtime re-pin or compiler-internals change: release checks plus the full
      upstream suite on Linux x64 and arm64;
    - toolchain upgrade (Lean, Emscripten or Node major): the full gate on all
      five targets;
    - nightly, when `main` changed: the full five-target upstream suite on its
      own schedule; it never blocks a release, and regressions are reported.
      Implemented: `nightly.yml` ([LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#nightly)).
    - 0.1.0 itself gets the full launch gate on all five targets (user choice).
  - **5.4 Publish `@lasm/cli` 0.1 to npm** — only with the user's explicit
    approval at that point.
  - Launch support list: Node 24+ on Linux (x64/arm64) and macOS (Windows as
    accepted today); Docker/Kubernetes; Google Cloud Run, Fly.io, Railway,
    Render, Heroku (container recipes); AWS Lambda via container image.
- **Phase 6 — Node-based serverless fast-follow.**
  - 6.1 AWS Lambda zip (`nodejs24.x`, x64/arm64) and Lambda@Edge (CloudFront
    event shape, x86_64, 50 MB).
  - 6.2 Vercel Functions and Netlify Functions (local `vercel`/`netlify`
    tooling; if Vercel's local tools need an account, test its function shape
    in the Lambda image instead).
  - 6.3 Azure Functions (Core Tools), Google Cloud Functions (Functions
    Framework), DigitalOcean App Platform (gVisor), Alpine/musl images.
- **Reordering (user decision 2026-10-24):** Phase 6 (serverless functions) is
  merged into 0.1.0. Edge isolates move up to Phase 7, Fastly becomes Phase 8,
  and production hardening moves last as Phase 9 (pieces the edge build needs,
  such as lower startup memory and faster startup, are pulled forward into 7.1).
  The entries below keep their earlier numbers for history: "Phase 8 — Isolate
  build" is now Phase 7, "Phase 9 — Fastly" is now Phase 8, and "Phase 7 —
  Production hardening" is now Phase 9.
- **Phase 7 (now) — Edge isolates, scope (user decision 2026-10-24):** 7.1
  prototype and decision (single-threaded runtime, JSPI vs Asyncify, wasm32,
  pure-JS host; measured under `wrangler dev`/workerd for size, memory, startup
  and CPU per request); 7.2 Cloudflare Workers (target the free plan's limits,
  publish paid-plan numbers too); 7.3 Vercel Edge and Netlify Edge; 7.4 Deno
  Deploy and **Supabase Edge Functions** (Supabase Edge Runtime), evaluated for
  cost and built if light; they can be removed later. Deno is allowed only as
  an edge *host* target, tested locally with the Deno CLI and
  `supabase functions serve` (Docker); the Node build stays Node-only. The edge
  build ships as a separate target (`--target workers`, etc.) beside Node.
  **7.5 Bun and Deno, end to end (user decision 2026-10-24, option B):** the
  compiler runs under Bun and Deno on all five targets (`bunx`/`deno run
  npm:@lasm/cli`, `bun install`/`deno install`, `bun create lasm`); on-demand
  tool packages download straight from the registry when no `npm` exists, with
  the same checksums; `lasm init` templates get Bun and Deno scripts; built apps
  run on Bun and Deno with the portable (edge) profile; all tested in CI. The
  full profile (threads, files, koffi, wasm64) stays Node-only. 7.1's JSPI vs
  Asyncify choice must keep Bun working (verify Bun's JSPI support).
- **Phase 7 — Production hardening on Node.** Long soak and concurrency stress
  (tasks, channels, Std.Sync/Std.Async, cancellation, many threads incl.
  Windows stack commit), startup memory tuning (initial memory, 64 MiB worker
  stacks, Wasm reservation), CI memory headroom on macOS ARM64 builds,
  `Std.Http` performance if it stays a recommended path.
- **Phase 8 — Isolate build (edge platforms).** One build unlocks every V8
  isolate platform: no threads, no native add-ons, ~128 MB memory.
  - 8.1 Prototype and decision: single-threaded Lean runtime, 32-bit Wasm,
    pure-JS host instead of koffi, JSPI for awaiting promises; measure size,
    memory and startup against platform limits.
  - 8.2 Cloudflare Workers (tested with `wrangler dev` / workerd), including
    Hono.
  - 8.3 Vercel Edge, Netlify Edge (Deno-based, `netlify dev`) and Deno Deploy
    as an edge host.
- **Phase 9 — Fastly Compute:** a standard WASI Wasm backend (tested with
  Viceroy).
- **Parked — Lean as a runtime library** (old Phase 5): pure `Lean.*` code at
  run time beyond what already works (JSON, `import Lean`, LSP types); runtime
  parser/elaboration policy decided by the user if a real package needs it.

<details><summary>Superseded phase entries (kept for history)</summary>

- **Phase 5 — Lean as a runtime library (was L5; Phase 4 until 2026-10-22), scoped to what real packages
  need:** pure `Lean.*` code at runtime (Json via `import Lean`, Lean.Data.*,
  LSP types) through finer-grained reachability; runtime elaboration/evaluation
  stays unsupported. The runtime-parser-over-an-empty-environment policy is
  decided by the user at its start. Exit: common libraries that import Lean for
  data structures build and run.
- **Phase 6 — Concurrency stress/soak (was L4; Phase 5 until 2026-10-22):** tasks, channels,
  mutex/condition variables, Std.Sync, full Std.Async, cancellation,
  many-thread stress (incl. Windows per-thread stack commit). All 26 upstream
  concurrency tests already pass. Exit: stress/soak without hangs or leaks.
- **Phase 7 — Full-suite release gate (was L7; Phase 6 until 2026-10-22):** complete runtime-capable
  upstream suite on five targets plus performance/robustness regression check.
  Then revisit npm publication and serverless platforms.


</details>

## Deferred chunks

The native macOS and Windows extensions are complete. Future work should expand
the same installed CLI and CI pipeline one separately scoped chunk at a time:

1. Broader core language and data-type behavior, with native-versus-Node tests.
2. Complete ordinary `IO.FS` support and the supporting IO APIs it requires.
3. Complete the selected Lean release's `Std.Http` support for all-Lean services,
   including the async/concurrency, streaming, cancellation, and cleanup it needs.
4. Broader concurrency and other standard-library/runtime APIs, followed by
   separately scoped serverless deployment adapters.

**Deno and Bun support removed — 2026-10-16:** by the user's decision, Deno and
Bun support was removed from Lasm. Lasm targets Node only.

Runtime Lean compilation, elaboration, dynamic module loading/evaluation and
executable plugin loading are now explicitly unavailable in deployed applications.
They must fail during the build; the removed fallback is not a release option.
Broader native extensions,
subprocess/signal/terminal parity, extreme stack/memory benchmarks, full upstream
suite campaigns, callable-library expansion, and compiler-in-Wasm research are
not first-milestone gates. Pause investigations whose only purpose is those
deferred goals. Preserve their source,
artifacts, tests, results, and unresolved failures for later use.

When the implementation task adopts this plan, safely checkpoint the current
bounded operation and prioritize this milestone. Do not weaken upstream tests,
relabel previous failures, or describe deferral as a fundamental limitation.

## Safety, costs, and delivery discipline

- Continue all existing resource safeguards: one heavy local workload at a time
  through `scripts/full-lean/run-bounded.mjs`, one CTest job, and at most two build
  jobs. Full Wasm linking uses `base-pages.py` with one build/Binaryen worker.
  Preserve the proactive memory stop below the 10 GiB cap, no swap or
  `MemoryHigh` experiments, host/disk reserves, and separate resource-abort records.
- Keep downloaded tools, third-party trees, caches, and generated experiments in
  ignored `.cache/` or `.work/` directories. Do not risk another host OOM.
- GitHub Actions work remains authorized only within the existing plan/public
  repository allowances and with no additional cost. Verify runner/feature
  eligibility, bound artifacts/cache storage and retention, and use no-cost
  alternatives when necessary. Paid runners, upgrades, services, and overages
  remain unauthorized.
- Stay on `main`, make meaningful unsigned commits with signing disabled, and
  synchronize with the authorized `origin` at `git@github.com:Millillion/lasm.git`.
  Never force-push or discard remote work. Attempt a push at least once after
  every commit. If it fails, retain the commit locally, continue work, and try
  again after the next commit, as requested in the latest user instruction.
- Include an under-150-word `docs/PROGRESS.md` snapshot at implementation commits:
  verified change/evidence, remaining milestone gates, and an evidence-based ETA
  or "not yet estimable." Report this milestone separately from the broader
  compatibility program. Do not transfer the former full-program completion
  percentage to this smaller milestone or call a scope reduction technical progress.

The original Linux milestone and platform extensions now establish the basic
Lean-on-Node workflow on Linux, macOS and Windows, each on x86-64 and ARM64
(Windows ARM64 has since been removed; see the 2026-10-16 note above).
They do not establish complete Lean language/library parity or production
acceptance of every application.
