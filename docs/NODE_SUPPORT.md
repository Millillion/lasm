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
system libraries, and other Node/npm/Lean versions are unverified.
Linux requires glibc 2.39 or newer; musl-based distributions
such as Alpine are unsupported. Linux builds require the standard OS shell, loader, libc and system
libraries supplied by Ubuntu; no separately installed developer tools are required.
See the [current acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md)
for exact artifact hashes, native CI results and measurements.

The installed package contains the Lean Wasm runtime, standard-library archives,
and host adapters. On the first build candidate `.46` downloads pinned native
Lean/Lake, Python and the Emscripten/LLVM/Binaryen SDK; Lake projects also provision Git.
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
([`lean-4.35.0-tiers-v1`](https://github.com/Millillion/lasm/releases/tag/lean-4.35.0-tiers-v1)),
its first-build downloads for an ordinary program are 269,699,059 bytes on Linux
x86-64, 268,890,803 on Linux ARM64, 256,541,533 on Intel Mac, 247,041,001 on Apple
Silicon and 249,048,232 on Windows x86-64; a Lake project or a program importing
`Lean`/`Lake` downloads 592,151,416, 549,297,286, 579,860,731, 566,573,126 and
553,351,191 bytes including Git (catalog sizes; the Lean 4.34.1 tiers measured
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
If a completed tool cache is damaged or incomplete, Lasm refuses to execute it.
Use repair with a newer candidate, or remove the named directory with `.46`,
then retry to download a verified replacement. If a packaged runtime fails its
integrity check, reinstall the candidate. An unavailable download must be restored
before a cold build can succeed; retries never substitute an unverified tool.
The [dated robustness review](https://github.com/Millillion/lasm/blob/main/docs/TOOLCHAIN_ROBUSTNESS.md) records the baseline recovery gaps;
the six-platform pass does not establish a measured
installation failure rate.

`lasm build Main.lean` writes `dist/` and does not run `main`. Deploy all of `dist/`
including host support and notices. Deployment files are specific to the build
OS/architecture and pinned Node version; the launcher diagnoses mismatches before
loading native code. Source and build caches are unnecessary on the destination.
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
