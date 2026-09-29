# Lasm current implementation plan

Agreed 2026-09-25; scope extended 2026-09-26. The immediate milestone is an excellent installation,
compilation, CLI, packaging, and deployment experience for a basic ordinary Lean
program running in Node. Complete language and standard-library compatibility
will follow in separate chunks; it is not a prerequisite for this milestone.

This plan supersedes earlier instructions to pursue all engines and complete API
parity before delivering the basic workflow. The previous plan is preserved in
[OLD PLAN — archived 2026-09-25](PLAN_OLD_2026-09-25.md) for reference only.
Updating this document does not itself start, stop, or interrupt running work.

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

- [ ] Make cache verification independent of locale; add bounded retries,
  connection/idle/overall deadlines, authenticated range resume and useful errors.
- [ ] Coordinate artifact installs across processes with OS-owned locks; recover
  abandoned staging for downloads, derivations and Windows execution prefixes.
  Preserve successful publication when temporary cleanup fails.
- [ ] Bundle the locked installer dependency graph and verify offline npm install.
- [ ] Add proxy/CA and storage diagnostics, cancellation, and explicit safe cache
  repair with tests that preserve active installs and unrelated files.
- [ ] Run deterministic native fault tests automatically on relevant pushes/PRs
  across all six targets. Replace cache-only runtime handoff with a durable,
  authenticated input and validate a new single packed candidate on all six.
- [ ] Schedule live distribution checks; retain all attempts and bounded evidence.
  Track three cold repetitions per target over at least two days as an additional
  release-confidence gate, without claiming a statistical reliability guarantee.

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
- Node is the only engine in this milestone. No Deno, Bun, browser, or Cloudflare
  Workers acceptance work is required now. Lambda and Netlify adapters are later
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
| Windows | Passed | Passed |

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

## Deferred chunks

The native macOS and Windows extensions are complete. Future work should expand
the same installed CLI and CI pipeline one separately scoped chunk at a time:

1. Broader core language and data-type behavior, with native-versus-Node tests.
2. Complete ordinary `IO.FS` support and the supporting IO APIs it requires.
3. Complete the selected Lean release's `Std.Http` support for all-Lean services,
   including the async/concurrency, streaming, cancellation, and cleanup it needs.
4. Broader concurrency and other standard-library/runtime APIs, followed by
   separately scoped serverless deployment adapters and additional engines.

Runtime Lean compilation, elaboration, dynamic module loading/evaluation and
executable plugin loading are now explicitly unavailable in deployed applications.
They must fail during the build; the removed fallback is not a release option.
Broader native extensions,
subprocess/signal/terminal parity, extreme stack/memory benchmarks, full upstream
suite campaigns, callable-library expansion, and compiler-in-Wasm research are
not first-milestone gates. Pause investigations whose only purpose is those
deferred goals, including Deno/Bun module-loading work. Preserve their source,
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
Lean-on-Node workflow on Linux, macOS and Windows, each on x86-64 and ARM64.
They do not establish complete Lean language/library parity or production
acceptance of every application.
