# Linux Node candidate support contract

The first release contract is ordinary Lean `main`, console output, arguments,
exit status, compilation diagnostics, and a tiny Lake project with local imports.
The compiler uses ordinary Lean; this is a tested application scope, not a new
restricted language. Full standard-library compatibility is not claimed.

The validated targets are Ubuntu 24.04.5 LTS (glibc 2.39) on native x86-64 and ARM64,
Node 26.10.0 with its npm, and Lean 4.34.1. Use stock Node without special flags.
Other distributions, older system libraries, Node versions and Lean versions are
unverified. This candidate requires glibc 2.39 or newer; musl-based distributions
such as Alpine are unsupported. Linux builds require the standard OS shell, loader, libc and system
libraries supplied by Ubuntu; no separately installed developer tools are required.
See the [current acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md)
for exact artifact hashes, native CI results and measurements.

The installed package contains the Lean Wasm runtime, standard-library archives,
and host adapters. On the first build Lasm downloads pinned native Lean/Lake,
Python and the Emscripten/LLVM/Binaryen SDK; Lake projects also provision Git.
HTTPS access to GitHub releases, Emscripten's Google Storage downloads and the npm
registry is needed. Downloads, sizes and SHA-256 checksums are pinned in the
package's `src/*tools.json` and `src/toolchains.json`. No global configuration or
administrator access is required.

Pinned compressed tool downloads, including Git for a Lake project, total
979,054,712 bytes on x86-64 and 910,904,894 bytes on ARM64. A standalone file skips
the Git download. These totals exclude the npm package and generated build files;
unpacked tools and build caches occupy several GB. The acceptance report records
observed disk usage and build times separately. The tested cold build took about
3.6–3.7 minutes on CI, with a roughly 180 MB Hello World deployment. These are
current measured costs, not performance guarantees for other machines.

Tools default to `${XDG_CACHE_HOME:-$HOME/.cache}/lasm`. Set
`LASM_TOOLCHAIN_CACHE` to choose another directory. Compiled application caches
live under the source project's `.lake/lasm/`. Hash checks detect changes to
sources, tool descriptions, runtime inputs and generated outputs; an unchanged
application reuses its build. Cached builds need no downloads. Deleting these
caches is safe when no build is running, but the next build downloads or compiles
again. Allow generous disk space: exact cold-build usage is recorded in the
acceptance report.

Downloads publish only after checksum verification and extraction. Interrupted
downloads can be retried. If a completed tool cache is damaged or incomplete,
Lasm refuses to execute it and prints its exact directory; remove that directory
and retry to download a verified replacement. If a packaged runtime fails its
integrity check, reinstall the candidate. An unavailable download must be restored
before a cold build can succeed; retries never substitute an unverified tool.

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
postdate the accepted `.32` archive; that retained archive is unchanged.
The package is a private experimental candidate, not an npm publication or a
claim that every Lean program works. macOS, Windows, Deno, Bun, HTTP/filesystem
parity and broad third-party packages remain separate milestones.
