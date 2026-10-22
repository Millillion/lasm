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

Phase numbers follow the actual order (renumbered 2026-10-20). Older code
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
  - **Phase 3 wrap-up, approved; items 1 and 2 done (2026-10-22), item 3 on hold**
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
    3. Millillion/fetch: its own CI is in place (native Linux x64/arm64, macOS
       x64/arm64 and Windows, green), the planned gaps (streaming upload, abort
       signal, multipart) are documented, and the under-Lasm job runs on
       dispatch with a token for Lasm's draft candidates (Lasm's ecosystem CI
       runs it under every candidate). **On hold (2026-10-22):** no `v0.1.0` tag
       or release; the user is reconsidering the library in favor of Node's own
       `fetch` through a JS/npm interop layer. Fetch stays unreleased.
    Candidate `.39815056197` (source `7eb24a3`) passed five-platform acceptance
    and the ecosystem re-check ([COMPATIBILITY.md](COMPATIBILITY.md)); the
    cold-installation gate and final acceptance are recorded in
    [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#phase-3-wrap-up-2026-10-22).
  - Follow-ups recorded:
    - macOS ARM64 memory: 11 eval-io programs peak at ~2.8 GiB, at the CI
      guard limit on 7 GiB runners. Investigate why small programs peak that
      high (product work, not a guard change); folded into Phase 5.
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
- **Next-phase discussion (2026-10-22, pending user decision):** the
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
- **Phase 4 — Lean as a runtime library (was L5), scoped to what real packages
  need:** pure `Lean.*` code at runtime (Json via `import Lean`, Lean.Data.*,
  LSP types) through finer-grained reachability; runtime elaboration/evaluation
  stays unsupported. The runtime-parser-over-an-empty-environment policy is
  decided by the user at its start. Exit: common libraries that import Lean for
  data structures build and run.
- **Phase 5 — Concurrency stress/soak (was L4):** tasks, channels,
  mutex/condition variables, Std.Sync, full Std.Async, cancellation,
  many-thread stress (incl. Windows per-thread stack commit). All 26 upstream
  concurrency tests already pass. Exit: stress/soak without hangs or leaks.
- **Phase 6 — Full-suite release gate (was L7):** complete runtime-capable
  upstream suite on five targets plus performance/robustness regression check.
  Then revisit npm publication and serverless platforms.

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
