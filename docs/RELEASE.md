# Local compiler release packaging

The initial supported build platform is **Linux x64, Node 24+, and the exact Lean
4.32.0 release** (commit `8c9756b28d64dab099da31a4c09229a9e6a2ef35`). Other build
OS/architecture combinations fail explicitly. This matrix describes building;
the emitted browser/Worker artifact is independent of the build host OS.

## Produce the local release

Maintainers use the pinned Zig reference setup to create the target libraries:

```sh
npm ci
npm run setup
npm run package:release
npm run test:release
```

The packaging command builds representative core, IO, and Lake/Express workloads,
then writes these ignored local artifacts under `.work/release/`:

- `lasm-compiler-0.1.0-experimental.1.tgz`: installable compiler package.
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
npm install --save-dev /absolute/path/to/lasm-compiler-0.1.0-experimental.1.tgz
```

The same tarball works with `pnpm add -D` or `yarn add -D`. Yarn is supported with
`nodeLinker: node-modules`, since Lake reads Lean sources as ordinary filesystem
files. Yarn PnP is outside this release's supported installation modes.

See [DEVELOPER_WORKFLOW.md](DEVELOPER_WORKFLOW.md) for the Lake and npm configuration.
The built output contains everything needed by the application runtime. Deploying
that output requires its JavaScript host and app dependencies; the compiler package,
Lean, Zig, and Binaryen are build dependencies only.

## Acceptance checks and scope

`npm run test:release` installs the tarball into separate npm, pnpm, and Yarn
projects with paths containing spaces. Each project builds a multi-module Lake
application with a library dependency and real Lean IO, rebuilds deterministically,
performs a locked offline reinstall, and executes the output with compilers absent
from `PATH`. During compilation, `PATH` contains Node, Lean, Lake, and basic POSIX
shell utilities, with no separate C SDK. The
packaged SDK is the only source of the Wasm sysroot/runtime; the checkout's reference
toolchain is not used by those installed packages.

Both the first install with an empty package-manager cache and the locked reinstall
run offline. The compiler tarball is a local file and has no registry dependencies;
Node and the pinned Lean toolchain must already be installed.
The tested application's Lake dependencies are local path packages; offline builds
of other applications require their own dependencies to be available locally too.
The test report records install, first-build, and cached-build timings separately
under `.work/evidence/release-install.json`. These are isolated Linux project
tests on the development machine, not tests on macOS/Windows or a fleet of clean
machines. Platform rejection tests cover the unsupported combinations explicitly.
The Lean-version guard is checked with an injected mismatching compiler identity;
only the pinned Lean release's actual runtime has been validated.

Redistribution notices for the actual target inputs are included with the compiler
and copied into generated modules. Original Lasm source currently has no public
license grant (`UNLICENSED`); the npm package stays private. The release workflow
only writes local files and never publishes, uploads, creates a remote, or pushes.
