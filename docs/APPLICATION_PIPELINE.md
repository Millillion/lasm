# Application pipeline implementation status

The [current product plan](PLAN.md) governs this work. The older packaged
Wasm32/cooperative compiler remains available while the full application pipeline
is integrated; it does not acquire the separate compiler-in-Wasm suite results.
Neither pipeline is yet a complete implementation of the current product plan.

## Managed native tools

`src/managed-lean.mjs` finds the nearest ordinary `lean-toolchain`, chooses the
matching versioned catalog entry, and supplies Lean/Lake in a private cache. The
initial catalog selects Lean 4.34.0. Unsupported pins fail without modifying the
project. The primary application CLI now uses this module.

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
The next native run compiled the C fixture on Linux/macOS, then caught Python
bytecode written by recursive SDK entry points. Windows x64 instead exposed
the native command-line length limit while building libc. Recursive SDK tools
now use the private Python directly with bytecode disabled; long Windows Clang
commands use ordinary LLVM response files. Cache verification remains strict.
The corrected Linux x64 clean download, C-to-Wasm compile, execution and
whole-cache reuse all pass, peaking at 2.63 GiB without resource events. See the
[Linux SDK evidence](evidence/managed-sdk-linux-2026-09-23.json). The Windows
response-file change now passes on Windows x64. The
[corrected native SDK matrix](evidence/managed-sdk-native-ci-2026-09-23.json)
also passes Linux x64/ARM64 and macOS ARM64. macOS x64 reached its first libc
build but exceeded the smoke harness's three-minute compiler deadline. A
separate run raised that cold-build deadline to fifteen minutes with the same
fixture, assertions and one worker, and passed (135.44 seconds in its compiler
phase). Managed SDK installation, C-to-Wasm execution and verified immutable
cache reuse now pass natively on all five hosts with upstream SDK bundles.
Windows ARM64 still needs its native SDK.

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

The ordinary three-module Lean 4.34 HTTP application now uses Lake C generation
and the full threaded runtime, including the compiler/reflection symbol registry.
Lean 4.34's package-qualified symbols are included in that registry. All three
stock engines pass the twenty-check parallel Vitest suite (ten deployed HTTP
checks and ten corresponding native checks per engine), covering persistence,
concurrent writes, validation, streaming, cancellation and shutdown. The
[HTTP evidence](evidence/application-http-three-engines-2026-09-23.json) records
exact artifacts, tests, deadlines and resources.

Reusing the verified function-table index and bulk allocation optimization cut
stock Bun's first server startup from 36.32 seconds to about two seconds with
unchanged Wasm. The initial timeout runs remain preserved separately. This is
Linux x64 maintainer-build evidence; primary CLI packaging, callable libraries,
full API coverage, long-duration cleanup and the six-platform application matrix
remain unfinished.

The command parser covers the planned direct-file/run/build forms, options
before or after the filename, target selection, output directories, and the
application-argument separator. Nineteen parser checks pass. The primary CLI now
uses the parser and the managed full-runtime application builder. JSON binding
configurations still select the preserved older callable-library implementation.

The source-tree `lasm-node.js`, `lasm-deno.js` and `lasm-bun.js` compatibility
filenames now call that same managed application pipeline. They preserve the
earlier `[--rebuild] [--verbose] Main.lean [--] arguments…` syntax. Running a
wrapper under Deno/Bun invokes Node for compilation and then the exact original
engine executable for the application; Node must be on PATH. Node can also run
any of the three wrapper files, with the selected deployment engine on PATH.
Help and usage errors perform no tool downloads. The 23 parser/launcher controls
now pass on all six native platforms; see the
[launcher evidence](evidence/application-launchers-2026-09-23.json).
Real installed-candidate launcher acceptance now passes on Linux x64 in all
three engines, as recorded below. The
earlier 4.32 implementation and its regression fixtures remain explicitly legacy.
Run commands now check that the selected engine starts before creating a build
cache or downloading tools. Build-only commands still require only Node/npm.
The added missing-engine check passes on all six hosts; the evidence also
retains the earlier 22-check run.

The full-runtime output helper packages host adapters and native support and
generates a relative `main.mjs` launcher. Three loader checks cover relocation,
argument forwarding, working directory and engine mismatch handling. These are
loader-level controls; the separate acceptance records above use real Wasm.

## Managed application integration

`src/application-build.mjs` now uses native Lean/Lake from the managed cache,
the repaired managed SDK, and a catalog-pinned application runtime bundle.
The 363,644,361-byte bundle contains all compiled library archives, headers,
runtime ABI exports, and a precompiled standard-symbol registry. Its manifest
and every file are checked before use. Applications supply a separate lookup
table generated from their actual object symbols and C declarations; initialized
data remains distinct from function-table addresses.

Lake's own `transImports`, `c`, and `lean` facets discover dependencies and
generate application inputs. Standalone files use Lean's `--src-deps` parser.
Lake projects now provision [managed native Git](MANAGED_GIT.md) automatically;
its transport tests and end-to-end dependency checks are recorded
separately from the already installed application candidates.
Build identities include the native compiler, SDK catalog and repairs, complete
runtime manifest, application C and source hashes, target, and shipped host code.
Successful deployments have content inventories checked on reuse. Cached builds
do not execute the compiler SDK, so its full immutable cache is verified only
when compilation needs it; native Lean/Lake still rechecks project inputs.

Rebuilding into an existing deployment now preserves added files and empty asset
directories. Modified generated files, asset collisions, malformed receipts and
symbolic links cause a descriptive refusal before replacement. Five filesystem
controls verify preservation, restoration of missing generated files and removal
of obsolete generated support. They now pass in the source tree on all six
native platforms as part of the managed Git matrix. This repair is included in
installed candidate `experimental.9`; the earlier `experimental.5` upstream
campaign keeps its original package identity.

Native file/descriptor checks exposed incorrect fixed-arity bindings for POSIX
`open` and `fcntl` on macOS ARM64. The repaired variadic bindings pass file
creation, permissions, reopen, append, exclusive-create and descriptor checks
in stock Node 26.10.0, Deno 2.9.7 and Bun 1.4.2 on all six native platforms.
The two POSIX-only pipe/socket checks explicitly do not apply to Windows.
These [host-adapter results](evidence/native-file-abi-2026-09-23.json) do not
establish full filesystem or compiled-application parity on those hosts.

Source generation and application caching are now serialized per project with
OS file locks; output delivery has a separate destination lock for builds from
different projects. Locks release when their owning process exits, including
abrupt termination. Empty lock files remain to prevent separate lock identities
for existing waiters. Three small controls cover concurrent updates, interrupted
owners and exception cleanup. These controls pass on all six native platforms;
full concurrent CLI builds remain a separate acceptance check. The running installed-package
campaign still uses its original code.

The first real primary-CLI Node check passes ordinary console/filesystem/tasks,
Unicode and empty arguments, large naturals, exception output, and exit codes
against native Lean. Rebuilding unchanged source reuses the exact deployment.
Only Node was on the build's PATH, with previously verified tools in the managed
cache. The first SDK Wasm64 system-library build was included and peaked at
5.49 GiB without OOM or resource aborts. This is a warm-tool-cache check, not a
clean npm installation claim. The ordinary Lake HTTP project also passes all
20 differential checks through the primary CLI, peaking at 3.19 GiB.

Stock Deno 2.9.7 and Bun 1.4.2 now pass the same managed-build controls and
the direct-file CLI with application arguments after `--`. The latest cached
Bun build took 15.27 seconds, mostly native tool integrity checks; faster repeat
startup remains work. The [managed CLI evidence](evidence/managed-application-cli-2026-09-23.json)
keeps exact build inputs, native comparisons, cache timings and guarded resource
reports. These passes used preprovisioned verified tool caches and a maintainer
runtime-bundle path, so package installation remains a separate gate.

The local `0.1.0-experimental.4` npm candidate now passes a cold Linux x64
installation with only Node/npm on PATH and kernel-enforced denial of checkout,
global tool and previously cached tool contents. It automatically downloads and
verifies Lean, private Python and the SDK, then compiles and runs the ordinary
main. The cold build took 497.65 seconds; the unchanged direct run took 18.62
seconds. Its compressed package is 124,725,186 bytes. No npm publication occurred.

A separately copied deployment and Node executable also pass with source,
compiler tools, checkout and original output contents denied, matching native
output and exit status for normal execution and an exception. The first
deployment harness incorrectly nested its working directory under a denied
parent `package.json`; Node's worker preloader tried to read that package scope.
Relocating the deployment outside the checkout fixes the harness without
changing the package, application or expected results. Linux Landlock restricts
contents and execution, but not metadata-only `stat` or network access. See the
[installed-package evidence](evidence/installed-application-2026-09-23.json).

The cold run peaked at 7.94 GiB, including tool-download filesystem cache; the
separate deployment check peaked at 1.52 GiB. Both retained the proactive 8 GiB
guard and 10 GiB hard cap, with no OOM, throttling or resource aborts. Further
checks reuse the installed tools instead of repeating the cold downloads.
Additional ordinary dependency layouts, concurrent cache users, full upstream/API
coverage, and the six native platform matrix remain acceptance gates. The package
assembler preserves the older callable-library target with its original Lean
4.32 requirements.

The same npm-installed candidate now compiles the ordinary three-module Lake
HTTP server for Node, Deno and stock Bun. Each engine passes all 20 Vitest checks
(ten deployed tests and ten native controls), with no failures or skips. These
cover routing, validation, binary bodies, concurrent persisted mutations,
streaming/cancellation and graceful restart. All three runs use the candidate's
packaged runtime and host support, with no maintainer runtime override; managed
tools are reused from the cold installation. Peaks were 3.20, 4.05 and 3.88 GiB,
respectively, with no resource events. See the
[installed HTTP evidence](evidence/installed-http-three-engines-2026-09-23.json).
This closes the Linux installed-package HTTP example check; the broader API,
callable/Express, dependency and platform requirements remain open.

The next candidate, `0.1.0-experimental.5`, repairs application self-launching:
ordinary `IO.Process` calls using `IO.appPath` start the selected engine with
the deployed entry point. The original cross-process closure-save/load test now
passes through that installed package in all three engines. Host controls also
verify Unicode/empty arguments, explicit cwd, pipes, PID/exit status and an empty
PATH with environment inheritance disabled. Deno's automatic Node PATH shim is
temporarily disabled during this child startup; original visible values are
restored before the application starts. See the
[repair evidence](evidence/application-self-launch-2026-09-23.json). This exact
self-path mapping still needs broader alias/other-deployment/platform coverage.

Installed candidate `0.1.0-experimental.9` now passes an ordinary three-module
Lake project with a pinned local Git dependency in stock Node, Deno and Bun on
Linux x64. Each run verifies non-default source roots, a symlinked entry source,
exact cache reuse, dependency-source invalidation, preservation of added assets,
the engine-specific compatibility launcher, and relocated deployment with an
empty PATH. Output, errors and exit status match the native Lake executable.
Arguments include Unicode, empty strings, spaces, the literal engine path and
option-like data. The sequential guarded campaign peaked at 4.85 GiB without
resource events. See the [installed Lake evidence](evidence/installed-lake-three-engines-2026-09-23.json).

Two real failures led to these repairs. Lake's file query resolves symlinks before
looking up the module, which loses a configured entry whose destination is outside
`srcDir`. A private build-time Lean helper now asks the evaluated Lake workspace
for the configured module, checking its resolved file. Deno's child-process shim
also rewrote a literal Deno executable path inside application arguments. The
private Node build bridge now receives one JSON payload, preserving those strings.
Earlier failures remain recorded. Other native platforms, remote Lake transports,
and concurrent full CLI builds still require end-to-end validation.

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

The separate [Windows ARM64 SDK bootstrap](evidence/windows-arm64-sdk-bootstrap-2026-09-23.json)
now passes on that native runner. Clang/LLD 24 and Binaryen 132 have verified
ARM64 PE headers; both Wasm32 and Wasm64 compilation, linking, optimization and
execution pass under stock Node 26.10.0. The one-worker source build took 107
minutes and peaked at 0.91 GiB committed memory within its Windows Job Object.
This establishes that the native compiler tools can be built and run. Relocatable
DLL packaging, Emscripten sysroot integration, managed downloads and full Lean
application validation are still required. The workflow uploaded no artifacts
or Actions caches.

The repository was verified public and runner eligibility was checked against
[GitHub's standard-runner reference](https://docs.github.com/en/actions/reference/runners/github-hosted-runners)
and [billing rules](https://docs.github.com/en/billing/concepts/product-billing/github-actions)
on 2026-09-23. This workflow uses no paid runners, artifact uploads or Actions
caches; reports stay in logs and job summaries. Actions are pinned to immutable
commits and the acceptance Node version is fixed at 26.10.0.

## Outstanding product work

- [x] Wire managed compiler/linker/runtime artifacts into the primary CLI.
- [x] Build matching Lean 4.34 application libraries and pass the first three-engine
  differential main probe; full API validation remains required below.
- [ ] Produce portable `dist/main.mjs` output and callable bindings for stock
  Node, Deno and Bun; preserve full threading/IO semantics.
- [ ] Supply and validate the Windows ARM64 native compiler distribution.
- [ ] Verify the entire native OS/architecture matrix and source-free deployment.
- [ ] Classify unchanged upstream tests for the application pipeline, and add
  native differential coverage for standard APIs beyond the upstream suite.

The initial [upstream application inventory](UPSTREAM_APPLICATION_TESTS.md) now
records all 4,066 default CTest registrations and separately identifies upstream
exclusions and unregistered drivers. All 7,669 original test/example/helper
files and links match the pinned archive. This is an inventory milestone;
All 3,497 managed native build-time registrations pass on Linux x64, with
unchanged upstream files and assertions; the
[combined native evidence](evidence/upstream-native-build-time-complete-2026-09-23.json)
keeps those compiler checks separate from deployed behavior. Application-suite
execution and complete API differential coverage remain unfinished.

These are implementation milestones, not replacements for any acceptance
requirement in the plan. Broader compiler-in-Wasm research is checkpointed and
paused while this product work proceeds.
