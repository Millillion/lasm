# Local compiler release packaging

Building requires **Node 24+ with npm and the complete official Lean 4.32.0
distribution**, including Lake and its bundled Clang/LLD (Lean commit
`8c9756b28d64dab099da31a4c09229a9e6a2ef35`). No separate C SDK, Zig, Python, or
system Binaryen is required by the installed compiler package. The tested Node
baseline is 24.13.1. Arbitrary Lean versions and custom distributions are not
interchangeable with this pinned runtime.

## Platform status

| Build host | Adapter in package | Native package acceptance |
| --- | --- | --- |
| Linux x64 | Yes | Passed |
| Linux ARM64 | Yes | Pending |
| macOS Intel | Yes | Pending |
| macOS Apple Silicon | Yes | Pending |
| Windows x64 | Yes | Pending |
| Windows ARM64 | Yes | Pending, including x64 Lean emulation |

The package permits this 64-bit matrix; an accepted platform value is not proof
of native support. Only Linux x64 has completed native acceptance. Therefore the
promise that every Linux, Mac, and Windows developer can install and build with
only Node/npm and Lean is **not yet verified**. The emitted Wasm is independent
of the build host, but tool execution and filesystem behavior require native tests.

The [official Lean release](https://github.com/leanprover/lean4/releases/tag/v4.32.0)
provides x64 and ARM64 tools for Linux/macOS and x64 tools for Windows. On Windows
ARM64, the current plan uses that x64 Lean distribution through Windows emulation;
this remains a validation target. Use OS versions supported by Node and Lean.

Lasm discovers `ld64.lld` on macOS and `.exe` tools on Windows, invokes LLD in Wasm
mode, and uses UTF-8 response files with explicit quoting to avoid Windows command
length limits. The same runtime/sysroot archive and Node-based optimizer ship to
every OS. These choices are consistent with Lean's
[LLVM build configuration](https://github.com/leanprover/lean-llvm/blob/main/.github/workflows/build.yml),
which includes the WebAssembly target; native acceptance is still required.

## Produce the local release

Maintainers use Linux x64 and the pinned Zig reference setup to create the target
libraries. This heavier setup is not required by developers installing the tarball:

```sh
npm ci
npm run setup
npm run package:release
npm run test:release
```

The packaging command builds representative core, IO, Lake/Express, and ordinary
Lean HTTP-server workloads,
then writes these ignored local artifacts under `.work/release/`:

- `lasm-compiler-0.1.0-experimental.3.tgz`: installable compiler candidate.
- `lean-4.32.0-wasm32-v1.tar.gz`: versioned target archive containing the runtime,
  prebuilt standard-library archive and dependency source, C headers, startup
  object, libc/C++ libraries, compiler runtime, and third-party notices.
- `release.json`: hashes, compressed and installed sizes, and packaging duration.

Every target file has a SHA-256 entry in `target.json`. Builds verify the target
manifest, the exact Lean compiler commit, and matching prebuilt source hashes.
The release manifest hashes the npm and target archives. npm lockfile integrity
checks additionally cover downloaded packages. No install hook or build-time
toolchain download is needed.

The package uses Lean's installed Clang/LLD and the packaged Wasm sysroot. It uses
Binaryen 132.0.0's bundled standalone Node `wasm-opt` for Asyncify, so developers
do not install Zig or system Binaryen. Only the optimizer is included, with its
license and checksum; the release tarball has no npm registry dependencies.
Zig remains a maintainer build dependency. This prioritizes simple setup; it is
not yet a size-minimized SDK.

## Install into a separate project

```sh
npm install --save-dev ./lasm-compiler-0.1.0-experimental.3.tgz
```

Nothing is published to npm; installing by registry name is not available yet.
Use the local tarball. Installation does not scaffold a Lean project. For an
executable, write an ordinary `Main.lean` and run `npx lasm run Main.lean`; Lake
projects work too. Only callable libraries need an export manifest. See
[Node applications](NODE_APPS.md) for the full Lean server example.

The same tarball is tested with `pnpm add -D` or `yarn add -D` on Linux. Yarn uses
`nodeLinker: node-modules`, since Lake reads Lean sources as ordinary filesystem
files. Yarn PnP is outside this release's supported installation modes.

See [DEVELOPER_WORKFLOW.md](DEVELOPER_WORKFLOW.md) for the Lake and npm configuration.
The built output contains everything needed by the application runtime. Deploying
that output requires its JavaScript host and app dependencies; the compiler package,
Lean, Zig, and Binaryen are build dependencies only.

## Acceptance checks and scope

`npm run test:release` installs the tarball into separate npm, pnpm, and Yarn
projects with paths containing spaces and Japanese text. Each project builds a
multi-module Lake application with a library dependency and real Lean IO, rebuilds
deterministically, performs a locked offline reinstall, removes `node_modules`,
and executes the output with compilers absent from `PATH`. Runtime checks cover
small and 128-bit integers, Unicode and NUL strings, binary filesystem reads/writes,
and a real local HTTP request. A second npm consumer builds the complete ordinary
Lean HTTP server, checks CRUD persistence and streaming, then removes the compiler
package and runs the same output again using Node alone. This standard-main test
is part of each prepared native CI matrix job. During compilation, `PATH` contains Node, Lean's
bundled tools, and basic OS utilities, with no separate C SDK. The
packaged SDK is the only source of the Wasm sysroot/runtime; the checkout's reference
toolchain is not used by those installed packages.

Both the first install with an empty package-manager cache and the locked reinstall
run offline. The compiler tarball is a local file and has no registry dependencies;
Node and the pinned Lean toolchain must already be installed.
The tested application's Lake dependencies are local path packages; offline builds
of other applications require their own dependencies to be available locally too.
The test report records install, first-build, and cached-build timings separately
under `.work/evidence/release-install.json`. It records the executing platform,
environment, package SHA-256, requested managers, and whether all managers passed.
Platform rejection tests cover other OS/architecture combinations explicitly.
The Lean-version guard is checked with an injected mismatching compiler identity;
only the pinned Lean release's actual runtime has been validated.

## Run native acceptance

Copy this checkout plus the candidate `.tgz` and its `release.json` into
`.work/release/` on the target machine. Install Node/npm and the official Lean
toolchain, then run the commands below; no root `npm install` or maintainer setup
is needed for npm-only acceptance.

Linux/macOS:

```sh
npm run test:platform
LASM_TEST_MANAGERS=npm npm run test:release
```

Windows PowerShell:

```powershell
npm run test:platform
$env:LASM_TEST_MANAGERS = 'npm'
npm run test:release
```

`LASM_RELEASE_MANIFEST` may point to a manifest elsewhere; its compiler filename
is resolved beside that manifest. `LASM_TEST_REPORT` overrides the report path.
Set `LASM_TEST_ENVIRONMENT` when using a compatibility layer or VM so its evidence
is identified accurately. A report with `complete: false` is not acceptance.

The local [manual CI workflow](../.github/workflows/platform-acceptance.yml) builds
the compiler and ordinary-server tests and one tarball on Linux, then runs the
same npm-only acceptance suite on all six
OS/architecture combinations. It has not run. It is prepared for a future
authorized remote and manual dispatch; it does not publish an npm package.
Its Windows ARM64 job also tests whether Lean's installer/emulation path works.
The Linux development suite additionally tests pnpm and Yarn. Wine execution is
useful for finding Windows-specific bugs but cannot establish native Windows
support, and fixture-based path tests cannot establish macOS support.

Redistribution notices for the actual target inputs are included with the compiler
and copied into generated modules. Original Lasm source currently has no public
license grant (`UNLICENSED`); the npm package stays private. The release workflow
only writes local files and never publishes, uploads, creates a remote, or pushes.
