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

The [native Windows ARM64 bootstrap checkpoint](evidence/windows-arm64-bootstrap-checkpoint-2026-09-24.json)
reached its 260-minute guard deadline while compiling stage1 Lean modules, with
a 1.90 GiB committed-memory peak. Completed compiler-cache entries were verified
and saved as a 228 MB archive within the included repository allowance. A rerun
of the same recipe reused 6,923 compiler results and completed 3,445 additional
compilations without compiler errors. That [second checkpoint](evidence/windows-arm64-bootstrap-checkpoint-2-2026-09-24.json)
reached the same deadline while linking the stage1 Lean shared library, with a
1.90 GiB peak. Its verified cache archive is 360 MB; both retained checkpoints
occupy 588 MB within the existing included-storage bound. A third attempt is
running from that checkpoint. The build remains incomplete, and the final CI
assertion correctly fails until the native Lean, Lake and compiled-main checks
finish; a checkpoint is not a platform pass.

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
Windows ARM64's separately built SDK now passes local archive provisioning and
C++ application checks below; a hosted managed distribution is still required.

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

Installed candidate `0.1.0-experimental.10` also accepts ordinary Lake scripts
outside the configured library/executable targets. Lake supplies imports, package
compiler options and build-time setup through its standard `lake lean` command.
The script is re-elaborated to observe setup changes; unchanged generated inputs
still reuse the final compiled application. All three stock engines pass the
same dependency, symlink, cache, asset and relocation checks, including a
compile-time assertion that the package's `maxRecDepth` option is honored. The
sequential campaign peaked at 5.03 GiB with no resource events. See the
[installed script evidence](evidence/installed-lake-scripts-three-engines-2026-09-24.json).
A preparatory native probe was safely stopped for memory pressure before adding
the required base-page wrapper; it remains a separate resource result.

## Native CI

The [Lean 4.34 IO error comparison](evidence/lean-4.34-io-errors-2026-09-24.json)
found and repaired a release-specific mismatch: the newer runtime uses libuv
messages for CRT failures and positive numbers for libuv errors. The private
application prelude now selects the matching Lean error policy; the retained
Lean 4.32 path keeps its earlier ABI. All 221 native-library decoder cases match
in Node, Deno and Bun on Linux x64, including otherwise-unrepresentable errno
values. Explicit Lean messages, such as NUL-path errors, remain intact.

The installed filesystem differential then caught Deno's general removal
operation behind its Node-compatible `unlink`. The POSIX host now calls the
native `unlink` primitive, so file removal preserves directories and native
errors. Candidate `0.1.0-experimental.12` passes the unchanged ordinary Lean
filesystem fixture in all three engines against interpreted and native-compiled
controls, with relocated output, hidden build sources and empty PATH. Separate
unlink controls pass in each engine and 17 focused Node regressions pass. The
final guarded campaign peaked at 5.66 GiB without resource events. Earlier
failures remain recorded; complete API and native-platform coverage are open.

`io-error-decoder.yml` adds a narrow native-library ABI comparison on guarded
Linux x64/ARM64 and Windows x64 runners. It uploads no caches or artifacts and
does not replace full application acceptance. macOS needs a suitable process-tree
guard for this harness, and Windows ARM64 still needs its native Lean artifact.
The first Linux CI attempts hit their deliberately smaller 2 GiB cold-install
profile while populating file cache, before the comparisons. Both guards stopped
proactively without OOM or pressure events. These are
[resource results](evidence/io-error-ci-resource-stops-2026-09-24.json), not API
failures. The Linux request is now 6 GiB within the existing half-RAM cap,
8 GiB host reserve and proactive-stop policy; Windows keeps 2 GiB. The local
guard configuration is unchanged.

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
ARM64 `leantar` packaging still need verification. The first long run reached
stage1 shared-library linking and was cancelled at the 330-minute job deadline.
Its last resource sample was 1.89 GiB; it has no completed guard receipt. See the
[preserved deadline evidence](evidence/windows-arm64-lean-deadline-2026-09-24.json).
The workflow now uses an earlier guarded deadline and a checksum-verified cache
of completed C/C++ compilations, within the [included storage policy](CI_STORAGE.md).
Fresh source/build trees avoid reusing partially written compiler outputs.
Successful small native cache/deadline controls do not yet prove the full
resumable Lean bootstrap or end-user packaging.

The separate [Windows ARM64 SDK bootstrap](evidence/windows-arm64-sdk-bootstrap-2026-09-23.json)
now passes on that native runner. Clang/LLD 24 and Binaryen 132 have verified
ARM64 PE headers; both Wasm32 and Wasm64 compilation, linking, optimization and
execution pass under stock Node 26.10.0. The one-worker source build took 107
minutes and peaked at 0.91 GiB committed memory within its Windows Job Object.
This establishes that the native compiler tools can be built and run. Relocatable
DLL packaging, Emscripten sysroot integration, managed downloads and full Lean
application validation are still required. The workflow uploaded no artifacts
or Actions caches.

The [next native SDK run](evidence/windows-arm64-sdk-package-2026-09-24.json)
also passes relocatable DLL packaging, managed archive extraction, Emscripten
sysroot integration and verified cache reuse. Its 174.8 MB local archive includes
native ARM64 compiler tools and their non-system DLL dependencies. After hiding
the original build directories, both Wasm32 and Wasm64 C++ applications using
threads and exceptions compile and run in stock Node with empty PATH. The
guarded build and package phase took 113.18 minutes, peaking at 0.91 GiB. The
archive stayed on the ephemeral CI runner; no hosted SDK download, full Lean
application pass or complete Node/npm-only installation is claimed.

The repository was verified public and runner eligibility was checked against
[GitHub's standard-runner reference](https://docs.github.com/en/actions/reference/runners/github-hosted-runners)
and [billing rules](https://docs.github.com/en/billing/concepts/product-billing/github-actions)
on 2026-09-23, with cache billing rechecked on 2026-09-24. These workflows use
standard public runners and no Actions artifact uploads. Only the Lean
bootstrap uses the separately budgeted included compiler cache; reports stay in
logs and job summaries. Actions are pinned to immutable commits and the
acceptance Node version is fixed at 26.10.0.

## Outstanding product work

Installed `.19` [repairs Lake project discovery](evidence/runtime-imports-and-lake-initialization-2026-09-24.json)
for configurations whose defaults require initialized native Lake constants.
The private helper now loads the verified managed Lake library as a Lean plugin,
using Lake's upstream platform-specific library paths. Native Linux discovery
controls and installed application comparisons in all three engines pass. This
does not establish discovery acceptance on the other native hosts. The associated
runtime-import comparisons use explicitly supplied metadata; automatic packaging
of that data remains required for self-contained deployments.

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

The [native IO error comparison](evidence/io-error-ci-passed-2026-09-24.json)
passes on standard native Linux x64, Linux ARM64 and Windows x64 runners with
Lean 4.34.0 and Node 26.10.0. Linux checks 221 error inputs per architecture;
Windows checks 168. Constructors, numeric codes and diagnostic messages match
the original native library. Windows uses libuv 1.52.1; the Linux distributions
link 1.48.0. This validates the host decoder, not all IO operations, deployed
Wasm, other engines on those runners, or the complete six-platform installation
contract. The earlier cold-extraction resource stops and seven Windows failures
remain preserved alongside the passing follow-up.

The [Deno startup adapter](evidence/deno-stack-startup-2026-09-24.json) configures
V8's execution stack before a directly launched POSIX application initializes,
using native exec with the original Deno arguments and permission flags. Seven
Linux x64 source controls pass, including a failing unconfigured recursion
control, same-PID signal delivery, stdio, empty/Unicode arguments, environment
restoration, and explicit network/subprocess denials. A separate prototype runs
the unchanged Lean benchmark five times. Installed-candidate and native macOS
checks remain pending. Windows needs a different implementation. Imported or
preloaded mains keep their caller's engine configuration to avoid replaying user
effects; those embedding cases remain a deep-stack acceptance gap.

Installed candidate `0.1.0-experimental.13` now passes thirty unchanged
`const_fold` repetitions in stock Deno 2.9.7 on Linux x64 with ordinary
`deno run -A`, plus a relocated run with its source hidden and PATH empty.
The original 4 GiB stack setting and native compiled/interpreted controls are
preserved. Packaging, installation and execution peaked at 4.20 GiB without
resource events. See the [installed evidence](evidence/deno-stack-installed-2026-09-24.json).
Seven startup controls also pass on each native macOS architecture. The first
Linux CI jobs were green but skipped four Deno checks because their engine path
was not forwarded through systemd; their logs are preserved and the corrected
workflow requires that engine rather than accepting an implicit skip.

The [corrected Deno startup matrix](evidence/deno-stack-native-ci-2026-09-24.json)
now executes **all seven controls with zero skips on Linux and macOS, each on
x64 and ARM64**. This confirms the adapter's native argument-vector handling
and observed startup behavior on those four platforms. It remains source-level
startup evidence, separate from full deployed Lean application acceptance.

The [bundled Bun startup adapter](evidence/bun-stack-startup-installed-2026-09-24.json)
now configures both Linux worker reservations and Bun's separate JSC execution
budget before a directly launched application starts. A verified private shared
library ships in the output; same-PID exec preserves argument bytes, stdio,
inherited descriptors and both the native and JavaScript environments. Opening
the helper through an inherited descriptor supports deployment paths containing
spaces. Bun itself is the unchanged released binary.

Installed `.20` passes all three repetitions of the previously failing ordinary
Lean channel/mutex application on Linux x64, after relocation with sources hidden
and PATH empty. Fourteen startup/deployment controls pass with zero skips; the
maximum installed-build/run peak is 3.45 GiB without resource events. The earlier
application failure and initial startup-loop defect remain recorded. Native
ARM64/musl acceptance, macOS/Windows implementation and deep-stack embedding or
preload/configuration support remain open. The prepared Linux x64/ARM64 CI
workflow tests a natively compiled helper, separately from shipped-binary checks.

That workflow's [first native attempt](evidence/bun-stack-native-ci-build-failure-2026-09-24.json)
failed before runtime checks: GCC rejects an ignored diagnostic `write` result
under the retained strict warnings. The source now handles short writes and
interruption explicitly; a new malformed-reservation control exercises that
diagnostic. Native follow-up validation remains pending.

The [corrected native run](evidence/bun-stack-native-ci-2026-09-24.json) passes
all **eleven checks with zero skips on Linux x64 and ARM64**. Both source-built
GCC helpers execute the recursion, environment-byte, descriptor, signal and
preload controls. The maximum guarded peak is 65.9 MiB, with no resource events.
Local strict-GCC compilation, rebuilt Zig helpers and fifteen startup/output
controls also pass. These results retain the earlier failed run and do not
establish complete installed application acceptance on ARM64.

Installed `.21` [repairs Deno SIGUSR1 delivery](evidence/upstream-signal-2026-09-24.json)
without starting its debugger. The private native signal helper ships in both
the npm candidate and deployment, requires no user compiler, and adds no Lean
API. The unchanged excluded upstream signal application now matches native
stdout, stderr and termination in Node, Deno and Bun on Linux x64 with sources
hidden and PATH empty. Nine focused controls pass; the largest application
campaign peaks at 3.45 GiB without resource events. Other native platforms,
the complete signal API and Deno-native observer coexistence remain pending.

The [native signal CI follow-up](evidence/signal-native-ci-2026-09-24.json)
executes all nine checks with zero skips on both Linux x64 and ARM64, using
native GCC helpers and all three stock engines. Maximum guarded memory is
59.9 MiB without resource events. Separate Linux x64 host-adapter probes also
pass all 22 signal names per engine. These are source-helper controls, not
complete installed Lean ARM64 or default-signal-behavior acceptance.

Installed `.22` [matches 48 supplementary native Lean signal comparisons](evidence/application-signal-policy-2026-09-24.json)
on Linux x64. Every engine completes one-shot and repeated delivery for all 22
signal names, then matches seven default actions both before and after stopping
a waiter. The generated standalone entry removes the engine-owned SIGUSR1
debugger hooks in Node/Deno and the SIGABRT crash reporter in Bun. Existing
JavaScript listeners, external native handlers and observed ignored dispositions
retain their caller policy. Forty-five focused controls pass without skips;
the installed comparisons peak at 3.45 GiB with no resource events. All four
earlier differences remain recorded. Deno-native observer coexistence, inherited
state altered before JavaScript entry, cancellation races, callable embedding
and other native platforms remain unverified. The native Linux workflow now
includes the expanded controls; its new run is pending.

The [expanded native Linux CI attempt](evidence/signal-policy-native-ci-failure-2026-09-24.json)
passes 43 of 45 controls on each architecture. Bun's two default SIGABRT
termination cases reach the unchanged ten-second deadline; neither guard records
a resource event. A core-collection difference is under investigation: the
workflow's shell limit was outside the systemd service. The guard now applies
the zero core-file limit inside that service, and timeout diagnostics retain
child signal masks and process state. This is a pending investigation, not a
verified repair or a completed native signal gate.

The [diagnostic follow-up](evidence/signal-policy-core-collector-2026-09-24.json)
confirms that both Bun children are already core-dumping at the deadline despite
zero soft and hard core-file limits. The CI runner's piped systemd collector
ignores those limits; ARM64 records a wait in `anon_pipe_write`. The workflow
now temporarily selects a plain core filename on its disposable dedicated
runner so the zero limit is effective, then restores the original pattern.
Application expectations and deadlines are unchanged, and no desktop setting
is modified. Follow-up execution remains pending.

The [corrected native signal run](evidence/signal-policy-native-ci-2026-09-24.json)
passes **all 45 controls without skips on Linux x64 and ARM64**. Child diagnostics
confirm both zero core-file limits and the plain core pattern; both restoration
steps succeed. Every process-tree guard releases without resource events. The
earlier failed runs are retained. These source-helper controls expand Linux
evidence but do not establish complete installed Lean ARM64 or other-platform
signal acceptance.

Automatic module-data packaging is now wired into the application builder,
with [eight passing file/loader unit controls](evidence/application-module-data-units-2026-09-24.json).
Generated Lean/Lake initializer dependencies select applications that need
metaprogramming data. Their output carries the full standard module-data tree
and built project/dependency roots in Lake search order, with hashes included
in cache identity. The entry point derives `LEAN_SYSROOT` and `LEAN_PATH`
defaults from its relocated deployment while preserving explicit values.
Linked build artifacts are copied as files, not deployment links. Real native
Lake/import controls and installed Wasm acceptance are still pending; this
unit-tested implementation is not a completed deployment gate. Unbuilt dynamic
modules and custom foreign consumers need separate coverage, and the full
metadata payload's size is an outstanding deployment tradeoff.

The [first native module-data campaign](evidence/application-module-data-resource-stop-2026-09-24.json)
successfully evaluates the revised Lake helper and builds the native control
on Linux x64 and ARM64, then stops proactively during metadata copying. About
five GiB of cgroup usage is predominantly inactive file cache; neither run
has an OOM or pressure event. These are resource aborts, not import failures.
The workflow now separates cold provisioning and validation into sequential
guarded phases with unchanged limits. Nine local unit controls pass, including
an explicit sysroot with default project search paths. The installed import
harness has a separate bundled-data mode that supplies no Lean path variables
to deployed processes; that campaign remains pending.

The [second native module-data campaign](evidence/application-module-data-native-ci-2026-09-24.json)
passes all nine unit controls and the real Lake/import checks on Linux x64 and
ARM64. Sources are hidden, `PATH` is empty, and the deployment is relocated to a
path containing spaces. Standard, project and dependency modules import
successfully; removing standard data gives the expected import error. All six
guards release without resource events. Cold provisioning peaks at 3.85 GiB;
native copying/import validation peaks at 2.63 GiB. The metadata payload is
2.06 GiB across 12,600 files. Installed Wasm deployment acceptance is still
pending, and native shared-library dependencies are outside this data-layout
control's claim.

The [cold runtime-source workflow](../.github/workflows/application-runtime-source.yml)
now prepares the application libraries from committed patches and pinned public
Lean, GMP, SDK and host-helper inputs on a standard Linux x64 runner. Native
Lean and SDK provisioning, GMP, host helpers, archive groups, bundling and the
relocated Node differential check use sequential resource guards. It uses the
same immutable managed SDK as the product, with generated ABI archives in its
separate mutable cache. Packaging requires a complete Init/Std/Lean/Lake audit.
The libuv source is pinned to its exact existing v1.48.0 commit.
[Local preparation checks](evidence/application-runtime-source-preflight-2026-09-24.json)
pass three SDK/cache controls and syntax checks; full CI execution is pending.
This source-build control preserves reports in logs and uploads no package,
release, cache or artifact. It is separate from clean installed-package and
six-platform acceptance.

The [first cold source-build attempt](evidence/application-runtime-source-download-2026-09-24.json)
passes the three unit controls and both managed tool provisioning phases, then
rejects the source download before extraction: a tag archive was requested with
the commit archive's pinned size and checksum. The URL now selects the exact
commit that is recorded in the original archive's PAX header. Neither checksum
nor size verification is relaxed. All guards released without resource events;
this is a preparation failure, and the runtime build remains unvalidated in CI.
