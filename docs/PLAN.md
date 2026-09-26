# Lasm current implementation plan

Agreed 2026-09-25. The immediate milestone is an excellent installation,
compilation, CLI, packaging, and deployment experience for a basic ordinary Lean
program running in Node. Complete language and standard-library compatibility
will follow in separate chunks; it is not a prerequisite for this milestone.

This plan supersedes earlier instructions to pursue all engines and complete API
parity before delivering the basic workflow. The previous plan is preserved in
[OLD PLAN — archived 2026-09-25](PLAN_OLD_2026-09-25.md) for reference only.
Updating this document does not itself start, stop, or interrupt running work.

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

These commands describe the required release experience, not a claim that the
milestone or npm publication is already complete. Until publication is explicitly
authorized, install and validate the packed release candidate locally and in CI.

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
- Do not remove Lean language features to manufacture a restricted dialect.
  Narrow the tested and documented support contract for this release. The fixture
  must execute real compiled Lean computation and IO, with no stubs or hardcoded
  output substituted for program behavior.

## Required native Linux platform matrix

Start with the two most common Linux architectures. Both must pass the complete
installed-package workflow:

| Operating system | x86-64 | ARM64 |
| --- | --- | --- |
| Linux | Required | Required |

Here, x86-64 means 64-bit x86 (also called x64 or AMD64), not 32-bit x86.
macOS and Windows on both architectures are deferred until after this Linux
milestone. Preserve their existing implementation and evidence.

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

- [ ] Pack a reproducible npm release candidate with its required files and
  redistribution notices, and install it into a fresh project outside the repo.
- [ ] Provision pinned, matching Lean/Lake, compiler/linker, libraries, sysroot,
  optimizer, and any host helpers automatically. No manual Lean, SDK, Python,
  Git, C compiler, or global system configuration is required.
- [ ] Verify downloads and cache contents; record checksums and resolved versions.
- [ ] Recover cleanly from interrupted downloads and incomplete or damaged cache
  entries. Give actionable errors for unavailable downloads and unsupported hosts.
- [ ] Explain first-run network access, download sizes, cache location, and how
  provisioned tools are reused. Validate cached use without further downloads.

### 2. CLI and basic compiled execution

- [ ] `npx lasm Main.lean` compiles and runs the basic fixture successfully, with
  exact output and successful exit matching native Lean.
- [ ] Validate argument forwarding after `--`, exit codes, and reporting of Lean
  compilation errors with small additional fixtures.
- [ ] Validate a tiny ordinary Lake project with a local build-time import.
- [ ] Reuse unchanged builds and invalidate them when relevant source, toolchain,
  or runtime inputs change.
- [ ] Work in paths containing spaces and Unicode on every supported platform.
- [ ] Provide concise, actionable diagnostics without requiring developers to
  understand the underlying compiler, Wasm engine, or cache implementation.

### 3. Independent deployment

- [ ] `npx lasm build Main.lean` creates the complete deployment in `dist/` without
  running the application.
- [ ] Copy `dist/` to a separate deployment environment and execute it with plain
  `node dist/main.mjs`, with no source checkout, Lean, build tools, development
  cache, or absolute build-machine paths available.
- [ ] Package every runtime dependency needed by the selected backend. Deployment
  needs stock Node and the complete output directory, not manual helper setup.
- [ ] Record package/download/deployment sizes and installation, first-run,
  cached-run, startup, and peak-memory measurements. Use these measurements to
  improve the developer experience; do not claim unmeasured performance.

### 4. CI/CD release-candidate proof

- [ ] Run the Linux x86-64 and Linux ARM64 native matrix through GitHub Actions.
- [ ] In each matrix job, install the packed npm candidate into a fresh project,
  exercise cold provisioning and cached execution, and run the deployment check.
  Testing only the source checkout is insufficient.
- [ ] Prove the Node/npm-only prerequisite: prevent preinstalled runner compilers,
  Lean, Python, Git, and other development tools from silently satisfying product
  dependencies. Keep CI orchestration tools separate from the environment made
  available to the installed package under test.
- [ ] Associate passes with exact package hashes, source revisions, versions, and
  platform identities. Preserve failure evidence and report unverified platforms.
- [ ] Produce a tested release candidate and concise acceptance report. Do not
  publish to npm without an explicit publication request.

### 5. README and release support contract

- [ ] Make the README irreducibly simple for a human or AI agent starting from a
  fresh supported machine: purpose, prerequisites, one complete `Main.lean`, and
  the exact install, run, build, and deployment commands.
- [ ] State exact validated OS/architecture and Node/Lean constraints, required
  network access, automatically managed dependencies, and cache behavior.
- [ ] State the exact language/library support and known limitations. Distinguish
  tested support from incidental success and work planned for later milestones.
- [ ] Include only essential troubleshooting and links to deeper documentation;
  keep backend research and historical implementation details out of quick start.
- [ ] Exercise the documented commands against the same release candidate used
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

After the first milestone, expand the same installed CLI and CI pipeline one
chunk at a time:

1. Native macOS and Windows installation/build/deployment support, each on
   x86-64 and ARM64, through separately scoped platform milestones.
2. Broader core language and data-type behavior, with native-versus-Node tests.
3. Complete ordinary `IO.FS` support and the supporting IO APIs it requires.
4. Complete the selected Lean release's `Std.Http` support for all-Lean services,
   including the async/concurrency, streaming, cancellation, and cleanup it needs.
5. Broader concurrency and other standard-library/runtime APIs, followed by
   separately scoped serverless deployment adapters and additional engines.

No permanent language cuts are decided here. Runtime Lean compilation,
elaboration, dynamic module loading/evaluation, arbitrary native extensions,
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

Completion of this milestone means a verified basic Lean-on-Node product workflow
on Linux x86-64 and Linux ARM64. It does not mean complete Lean language/library parity or
production acceptance of every application.
