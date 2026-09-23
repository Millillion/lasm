# Application pipeline implementation status

The [current product plan](PLAN.md) governs this work. The older packaged
Wasm32/cooperative compiler remains available while the full application pipeline
is integrated; it does not acquire the separate compiler-in-Wasm suite results.
Neither pipeline is yet a complete implementation of the current product plan.

## Managed native tools

`src/managed-lean.mjs` finds the nearest ordinary `lean-toolchain`, chooses the
matching versioned catalog entry, and supplies Lean/Lake in a private cache. The
initial catalog selects Lean 4.34.0. Unsupported pins fail without modifying the
project. This module is not yet wired into the primary application CLI.

Downloads use upstream-published SHA256 digests and exact compressed sizes. Both
downloads and extraction stream their data. Installation stages privately and
publishes only a complete tree. Subsequent use hashes every recorded file and
checks links, executable bits, missing files and unexpected additions. Notices
are retained. No Elan installation, global configuration or system SDK is changed.
`LASM_TOOLCHAIN_CACHE` can relocate the cache.

On Linux x64, stock Node 26.10.0 successfully provisions native Lean 4.34.0 and
runs both a Lean main and Lake with global Lean/SDK paths excluded. Verified cache
reuse passes. The real release archive exposed a chained-symlink extraction bug;
the regression and deferred-link fix pass. The final guarded run peaks at
3.78 GiB with no OOM, pressure-stop, swap or monitoring events. See the
[provisioning evidence](evidence/managed-lean-provisioning-2026-09-23.json).

The official Lean release has native downloads for Linux and macOS on x64/ARM64,
and Windows x64. **A native Windows ARM64 distribution remains missing.** The
installer reports that gap and does not substitute an emulated x64 compiler.
That missing artifact is an engineering gap, not a fundamental limitation.

The compiler-support bootstrap also has a six-platform catalog for native Python
3.13.15 from the pinned
[20260901 standalone release](https://github.com/astral-sh/python-build-standalone/releases/tag/20260901).
Node's streaming gzip decoder installs it without an existing Python or archive
utility. The launcher checks version and native architecture, isolates it from
global Python configuration, and disables bytecode writes to the verified cache.
The small-archive regression passes. Real native Python installation, version,
architecture, cache-reuse and notice checks pass on all six runners. An overly
narrow acceptance check initially looked only for top-level license files; Unix
Python places its license under the standard-library directory. The corrected
run records the actual notice paths. See the
[six-platform tool evidence](evidence/managed-native-tools-2026-09-23.json), which
also verifies native Lean C compilation on the five available Lean platforms.
This supplies one SDK dependency, not the complete managed linker distribution.

`src/managed-sdk.mjs` provisions the pinned Emscripten 6.0.9 native tools for the
five upstream-supported hosts. SHA256/size pins were computed by streaming the
exact official emsdk download URLs. XZ and ZIP use the private Python as a
streaming decoder; the existing installer still validates every extracted entry
and the complete immutable cache. Generated compiler caches/configuration live
in a separate directory. Executable headers are checked for a matching native
ELF, Mach-O or PE architecture before use. Six decoder regressions and three
executable-header checks pass locally. The new SDK CI matrix is pending.

The SDK module now applies the recorded Emscripten runtime repairs to a separate
verified copy of the source driver. Whole-file before/after digests detect drift;
no external `patch` executable is needed and the upstream download stays intact.
Two repair/cache regressions pass. Real native CI of the repaired driver and
coupling it to verified application-library bundles remains unfinished. The first
SDK matrix uses the preceding pristine-driver revision; its C-to-Wasm smoke is
separate from full Lean application acceptance. Native Windows ARM64 LLVM/Binaryen
is another missing upstream artifact, not a fundamental limitation.

The first real SDK matrix passed extraction and native executable-header checks
on those five hosts, then exposed emsdk's install-time version normalization:
the pinned release archive contains `6.0.9-git`, and the official installer writes
`"6.0.9"`. Lasm now records and verifies both exact forms and performs that rewrite
in the derived driver, leaving the download intact. All three runtime repair
input hashes were independently checked against the downloaded official archive.
The corrected native compilation run remains pending.

## CLI and deployment foundations

The maintainer application-runtime build compiles **2,516 Lean 4.34 modules**:
649 Init, 489 Std, 1,218 Lean and 160 Lake modules, alongside the real threaded
C++ runtime and existing host adapters. This builds application libraries, not
a Wasm Lean compiler executable. The guarded build peaked at 2.17 GiB with no
OOM or pressure stops.

A compiled ordinary Lean main now matches native Lean on **stock Node 26.10.0,
Deno 2.9.7 and Bun 1.4.2** on Linux x64. Checks cover console output, filesystem
round trips and missing-file errors, tasks and sleep, Unicode/empty arguments,
large natural numbers, ordinary exceptions and exit codes. Each complete output
directory was relocated and run from a separate working directory with an empty
PATH and no Lean toolchain environment. Host support and notices are bundled.
Each probe peaked below 0.5 GiB. See the
[application evidence](evidence/application-aot-three-engines-2026-09-23.json).

Node/Deno use native Wasm64 addressing. Stock Bun uses Emscripten's lowered
memory mode while retaining Lean's 64-bit layout; its current 4 GiB linear-memory
ceiling and large-memory behavior remain open work. These small application
passes do not establish full API compatibility, a finished managed CLI, or the
other native platform results.

The command parser now covers the planned direct-file/run/build forms, options
before or after the filename, target selection, output directories, and the
application-argument separator. Nineteen parser checks pass. It remains separate
from the primary CLI until full-runtime application compilation is integrated.

The full-runtime output helper packages host adapters and native support and
generates a relative `main.mjs` launcher. Three loader checks cover relocation,
argument forwarding, working directory and engine mismatch handling. These are
loader-level controls; actual deployed Wasm applications still need acceptance.

## Native CI

`managed-tools.yml` tests provisioning on the six required standard native runner
types. Windows ARM64 remains a failing acceptance row until its distribution is
implemented. CI provisioning results do not constitute Wasm application passes.

The [first native matrix result](evidence/managed-lean-native-ci-2026-09-23.json)
verifies automatic downloads, whole-cache integrity, ordinary Lean execution and
Lake execution on **Linux x64/ARM64, macOS x64/ARM64 and Windows x64**, with Node
26.10.0 and Lean 4.34.0. Windows ARM64 fails at the documented missing artifact.
The [next native matrix run](https://github.com/Millillion/lasm/actions/runs/35889527229)
also passes C generation, native compilation and linking with the same restricted
PATH on all five platforms. Windows ARM64 remains the sole failing row because
Lean's upstream archive is missing. Those additional checks are not imported
into the earlier evidence file.

The separate Windows ARM64 bootstrap workflow builds native Lean from the pinned
source on `windows-11-arm`. It first validates a Windows Job Object guard using
small allocations in a parent and child. The build has one worker, a hard memory
cap no larger than half the runner's RAM, and a proactive stop at 80% of that cap.
MSYS2's Clang tools target native ARM64; its POSIX shell/make utilities are x64
helpers. This experiment is **not** an all-native managed distribution pass.
The native Lean compiler, its generated executable, dependencies and missing
ARM64 `leantar` packaging still need verification. No CI artifacts or caches are
uploaded by this workflow.

The repository was verified public and runner eligibility was checked against
[GitHub's standard-runner reference](https://docs.github.com/en/actions/reference/runners/github-hosted-runners)
and [billing rules](https://docs.github.com/en/billing/concepts/product-billing/github-actions)
on 2026-09-23. This workflow uses no paid runners, artifact uploads or Actions
caches; reports stay in logs and job summaries. Actions are pinned to immutable
commits and the acceptance Node version is fixed at 26.10.0.

## Outstanding product work

- [ ] Wire managed compiler/linker/runtime artifacts into the primary CLI.
- [x] Build matching Lean 4.34 application libraries and pass the first three-engine
  differential main probe; full API validation remains required below.
- [ ] Produce portable `dist/main.mjs` output and callable bindings for stock
  Node, Deno and Bun; preserve full threading/IO semantics.
- [ ] Supply and validate the Windows ARM64 native compiler distribution.
- [ ] Verify the entire native OS/architecture matrix and source-free deployment.
- [ ] Classify unchanged upstream tests for the application pipeline, and add
  native differential coverage for standard APIs beyond the upstream suite.

These are implementation milestones, not replacements for any acceptance
requirement in the plan. Broader compiler-in-Wasm research is checkpointed and
paused while this product work proceeds.
