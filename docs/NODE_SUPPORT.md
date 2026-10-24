# Node candidate support contract

The first release contract is ordinary Lean `main`, console output, arguments,
exit status, compilation diagnostics, and a tiny Lake project with local imports.
The compiler uses ordinary Lean syntax. Current source builds restrict deployed
code to ahead-of-time execution; build-time language features remain available.
The exact [runtime exclusions are in the README](../README.md#lean-support-and-restrictions).
Full standard-library compatibility is not claimed.

The validated targets are Ubuntu 24.04.5 LTS (glibc 2.39) on native x86-64 and ARM64,
plus macOS 15.7.9 (24G830) on native x86-64 and ARM64, Windows Server 2025
Datacenter 10.0.26100.33438 (`windows-2025`) on native x86-64. Candidate `.46`
passed all five supported targets. All use Node 26.10.0 with npm 11.19.1 and Lean 4.34.1.
Current source, not yet in an accepted candidate, pins Node 26.12.0 with npm 11.20.0
and Lean 4.35.0 (a package carries one Lean release; projects pinning another one,
including 4.34.1, get `Unsupported Lean toolchain …`).
**Windows ARM64 is not supported** (removed 2026-10-16: neither Lean nor
Emscripten publishes Windows ARM64 prebuilts). Candidate `.46` also passed on
Windows 11 Enterprise 10.0.26200.9457 (`windows-11-arm`) historically; current
source stops there with `Lasm supports Linux and macOS on x86-64 and ARM64, and
Windows on x86-64. Windows ARM64 is not supported.`
Use stock Node without special flags. Other OS versions/distributions, older
system libraries, and other Node/npm/Lean versions are unverified as build machines.
**Current source (Phase 5.1)** accepts Node 24 or newer for the compiler (tested on
Node 24.22.1 and 26.12.1; `bin/lasm.mjs` refuses older Node before loading anything:
`Lasm requires Node 24 or newer; you are running Node 22.23.4. Install Node 24 or
newer and retry.`) and lowers the compiler's Linux floor to glibc 2.34. That floor
came from the formerly bundled Git; the remaining managed tools need 2.30 (Lean's
LLVM), and a lower floor is untested, so 2.34 stays.
Candidates up to Phase 4 require their exact Node release and glibc 2.39.
On Linux musl-based distributions
such as Alpine are unsupported. Linux builds require the standard OS shell, loader, libc and system
libraries supplied by Ubuntu; no separately installed developer tools are required.
See the [current acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md)
for exact artifact hashes, native CI results and measurements.

The installed package contains the Lean Wasm runtime, standard-library archives,
and host adapters. On the first build candidate `.46` downloads pinned native
Lean/Lake, Python and the Emscripten/LLVM/Binaryen SDK; Lake projects also provision Git.
Current source ships and downloads no Git: Lake projects with Git or Reservoir
dependencies use the system `git` (Git is needed only for them; without it the build
stops before Lake runs, with the install command for each OS), and dependency-free
Lake projects and programs need none. The Git download sizes below are those
candidates'.
HTTPS access to GitHub releases, Emscripten's Google Storage downloads and the npm
registry is needed (current source, below, needs no Google Storage download).
Downloads, sizes and SHA-256 checksums are pinned in the
package's `src/*tools.json`, `src/link-toolchain.json` (current source) and `src/toolchains.json`. No global configuration or
administrator access is required.

Pinned compressed tool downloads, including Git for a Lake project, total
979,054,712 bytes on Linux x86-64, 910,904,894 on Linux ARM64,
919,472,748 on Intel Mac, 925,010,880 on Apple Silicon and 1,312,233,267 on
Windows x86-64. A standalone file skips
the Git download. These totals exclude the npm package and generated build files;
unpacked tools and build caches occupy several GB. The acceptance report records
observed disk usage, build times and deployment sizes separately. These are
measurements of the identified candidate, not performance guarantees for other machines.
Current source, not yet in an accepted candidate, replaces the complete Lean
archive with [tiered archives](TOOLCHAIN_SLIMMING.md#phase-1-status-2026-10-16),
and the Emscripten SDK and Python with a
[minimal compiler toolchain](TOOLCHAIN_SLIMMING.md#phase-2-milestone-d-2026-10-16-minimal-toolchain-node-driver-by-default)
(clang, wasm-ld and Binaryen per platform, plus one shared archive with Emscripten's
JavaScript compiler and a prebuilt system library tree, from this repository's
GitHub releases). It never downloads or runs Python. With Lean 4.35.0
([`lean-4.35.0-tiers-v2`](https://github.com/Millillion/lasm/releases/tag/lean-4.35.0-tiers-v2),
which also mirrors the corresponding sources of its (L)GPL contents),
its first-build downloads for an ordinary program are 269,709,784 bytes on Linux
x86-64, 268,899,276 on Linux ARM64, 256,540,284 on Intel Mac, 247,047,545 on Apple
Silicon and 249,052,231 on Windows x86-64; a Lake project or a program importing
`Lean`/`Lake` downloads 526,892,922, 526,082,414, 513,723,422, 504,230,683 and
506,235,369 bytes (no Git; catalog sizes; the Lean 4.34.1 tiers measured
273,804,773 bytes for an ordinary program on Linux x86-64).
The current builder removes unreachable code and includes only the deployment
architecture's native helpers. Current source builds reject runtime compiler,
interpreter, module-data and plugin dependencies; they never package the large
fallback. The retained historical `.34` archive predates this restriction. See the
[size report](https://github.com/Millillion/lasm/blob/main/docs/BUNDLE_SIZE.md).

Tools default to `${XDG_CACHE_HOME:-$HOME/.cache}/lasm` on Linux,
`$HOME/Library/Caches/lasm` on macOS, and `%LOCALAPPDATA%\lasm\Cache` on Windows.
Candidate `.46` is retained and passed the complete installed/deployment checks
on all six accepted targets. Set
`LASM_TOOLCHAIN_CACHE` to choose another directory. Compiled application caches
live under the source project's `.lake/lasm/`. Hash checks detect changes to
sources, tool descriptions, runtime inputs and generated outputs; an unchanged
application reuses its build. Cached builds need no downloads. Deleting these
caches is safe when no build is running, but the next build downloads or compiles
again. Allow generous disk space: exact cold-build usage is recorded in the
acceptance report.

Windows also keeps short execution directories under Node's temporary directory,
in `lasm-tools/`. They contain verified hard links or copies and junctions to the
main cache. Removing the main tool cache does not remove these directories;
both can be removed when no build is running. See [Windows cache details](https://github.com/Millillion/lasm/blob/main/docs/WINDOWS_TOOLCHAINS.md).

Downloads publish only after checksum verification and extraction. Accepted
candidate `.46` makes one attempt per invocation: rerun its command after an
interruption. Newer source candidates add bounded retries, validated range resume,
crash recovery, OS locks, and `npx lasm cache repair`. Repair is explicit and
offline; it keeps verified tools and unrelated files, and refuses active builds.
Stop older CLI versions or orphaned compiler processes before repair. Use a
writable local filesystem with executable files and OS lock support; network
filesystems and no-exec mounts are unsupported. See the
[hardening settings and verification status](https://github.com/Millillion/lasm/blob/main/docs/INSTALLATION_HARDENING.md).

**Lake packages with C code (current source, Phase 3):** a project whose packages
use `extern_lib`, `precompileModules`, `moreLinkObjs`, `moreLinkLibs` or
`moreLinkArgs` adds the C tier to the extended tiers, because Lake builds that C
natively before Lasm recompiles it for Wasm. The C tier
([release `lean-4.35.0-tiers-v2`](https://github.com/Millillion/lasm/releases/tag/lean-4.35.0-tiers-v2), earlier `lean-4.35.0-c-v1`,
built by the tier workflow from the pinned Lean archives and
[`c-tier-sources.json`](../scripts/lean-dist/c-tier-sources.json)) holds Lean's clang,
installed as `bin/cc` so that Lake's default compiler (`buildO`, `compileO`) is Lean's
clang, its linker and archiver, Lean's and clang's complete headers, the link
libraries, and C library headers. An npm installation fetches it on first use with
your own npm from the exact-pinned `@lasm/lean-c-<platform>` package (`4.35.0-lasm.1`,
the same archive byte for byte, with its licence notices in `licenses/`), as it does
the Lake data tiers and Git, and falls back to the GitHub release under
`LASM_ARTIFACT_SOURCE=auto`; `npm` forbids that fallback and `https` (or a source
checkout) always downloads from the release. The archive's SHA-256 and size are
checked either way (current source, not yet in a candidate; rehearsed against a
local registry, [npm-dist.yml](../.github/workflows/npm-dist.yml) scenario `c-tier`):

| Host | Download (unpacked) | C library headers | Needed from the OS |
| --- | --- | --- | --- |
| linux-x64 | 45.1 MB (200 MB) | glibc 2.35 + Linux 5.15 UAPI (Ubuntu 22.04 packages), searched before the system's | nothing |
| linux-arm64 | 43.9 MB (193 MB) | as linux-x64 | nothing |
| darwin-x64 | 41.0 MB (185 MB) | — | the macOS SDK of the Xcode Command Line Tools (`xcode-select --install`): Apple's SDK may not be redistributed; Lasm sets `SDKROOT` from `xcrun` and stops with that instruction when it is missing |
| darwin-arm64 | 39.3 MB (176 MB) | — | as darwin-x64 |
| win32-x64 | 51.8 MB (314 MB) | MinGW-w64 13 + winpthreads (MSYS2 clang64), the compiler's own sysroot | nothing (a MinGW installation on `PATH` is not read) |

Previously such projects downloaded the complete release (560–620 MB compressed) and
needed a system `cc`. Lake's own Lean-C and link steps use Lean's flags (freestanding
headers, Lean's sysroot) as natively. The tier workflow checks every C tier natively:
`cc` is Lean's clang, a probe using the C library, OS APIs and compiler intrinsics reads
headers only from the prefix (or the macOS SDK), `llvm-ar` archives it, and a shared
library and an executable link and run. Per-package results: [COMPATIBILITY.md](COMPATIBILITY.md).

**JS/npm interop (current source, Phase 4):** a program that imports `Lasm.JS`
uses the extended tier (like Lake projects). When Lasm assembles that Lean prefix,
it compiles its own library into it (a few seconds, once per prefix, nothing extra to
download). With a `package.json` next to the lakefile or the main source, `lasm build`
copies the production dependencies (not `devDependencies`, never Lasm itself) from the
project's `node_modules` into `dist/node_modules`. Install them with npm first; the
build reports any missing package. Lasm's own package is never deployed, whether npm
recorded it as a dependency or a devDependency. Deployments need only Node: the copied
`dist/` contains the packages. Guide and exact limitations: [JS_BINDINGS.md](JS_BINDINGS.md).

**Known limitation (Lean 4.35.0 Lake):** Lake now fetches Git dependencies with a
tree-filtered `git fetch`. Against a Git server that only offers "dumb" HTTP
(static files, no `git http-backend`), Git then fetches missing objects one at a
time and can spawn hundreds of nested processes and gigabytes of memory. This is
upstream Lake/Git behavior and also affects native Lake. Hosts such as GitHub,
GitLab and Bitbucket use smart HTTP and are unaffected; serve private dependencies
over smart HTTP or SSH.
If a completed tool cache is damaged or incomplete, Lasm refuses to execute it.
Use repair with a newer candidate, or remove the named directory with `.46`,
then retry to download a verified replacement. If a packaged runtime fails its
integrity check, reinstall the candidate. An unavailable download must be restored
before a cold build can succeed; retries never substitute an unverified tool.
The [dated robustness review](https://github.com/Millillion/lasm/blob/main/docs/TOOLCHAIN_ROBUSTNESS.md) records the baseline recovery gaps;
the six-platform pass does not establish a measured
installation failure rate.

`lasm build Main.lean` writes `dist/` and does not run `main`. Deploy all of `dist/`
including host support and notices. In candidates up to Phase 4, deployment files
are specific to the build OS/architecture and pinned Node version. Current source
(Phase 5.1) deploys to **Node 24 or newer** on **Linux x64 and arm64 with glibc
2.28 or newer** from any build machine, and to the build machine's own platform:
every `dist/host/native` carries koffi and the helpers for both Linux
architectures (glibc) plus the build host's (2.5 MB for a Linux build). The launcher
checks, before loading native code, in this order: the Node version (`This
application requires Node 24.0.0 or newer; …`), that the deployment carries native
pieces for this platform (`This application includes native support for
linux-x64, linux-arm64, darwin-arm64; it is running on win32-x64. …`), and glibc
2.28 on Linux (musl is named). Requirements per platform, memory (512 MB or more),
`libatomic1` for Node 26 on minimal images, and the CI matrix:
[DEPLOYMENT.md](DEPLOYMENT.md). Source and build caches are unnecessary on the destination.
External application assets are the application's responsibility.

To diagnose a compilation error, start with the Lean filename and line printed by
the CLI. Use `--verbose` for build details or `--rebuild` to force a fresh link.
The current source CLI announces that first-time tool setup can take a few
minutes and shows the cache location, downloaded bytes and percentages,
extraction, verification, compilation, linking and completion. Long phases emit
elapsed-time updates every ten seconds, including while the compiler is busy.
Download waits report when no new bytes have arrived. Status goes to stderr, so
the application's stdout remains usable in pipes. These logging improvements
are checked in installed-package acceptance. The historical `.32` archive
predates these improvements and remains unchanged.
The package is a private experimental candidate, not an npm publication or a
claim that every Lean program works. Linux, macOS and Windows passed on both
architectures through the installed package and copied deployment. HTTP/filesystem
parity and broad third-party packages remain separate milestones.
