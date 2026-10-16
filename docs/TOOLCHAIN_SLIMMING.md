# Toolchain slimming

Authorized 2026-10-16. Goal: a developer needs only Node.js and npm, and the first
build downloads as little as possible, through npm's own caching, integrity,
proxy and certificate handling. This is a design, not shipped behavior: the
accepted candidates still use the installer described in
[NODE_SUPPORT.md](NODE_SUPPORT.md).

## Measured starting point (Linux x86-64)

| First-build download | Compressed | Needed for |
| --- | --- | --- |
| Native Lean 4.34.1 release | 580 MB | Lean to C |
| Emscripten 6.0.9 SDK | 299 MB | C to Wasm |
| Python 3.13.15 | 35 MB | Only Emscripten's `emcc` driver |
| Git | 65 MB | Only Lake projects |

Research findings (2026-10-16):

- Lasm runs only `bin/lean` and `bin/lake` from the Lean release, plus its
  shared libraries and module data. Lean's bundled clang/LLVM, static archives,
  `include/` and `.ilean` files are never used. Generated C is byte-identical on
  a trimmed tree, for a standalone `import Std` program and for a Lake project.
- Module data dominates: 2.2 GB unpacked, and every `.olean`, `.olean.private`,
  `.olean.server`, `.ir`, `.ir.sig` and `src/lean` file is byte-identical on
  Linux x86-64, Linux ARM64, Apple Silicon and Windows x86-64. `.olean.private`
  and `.olean.server` are required.
- A trimmed single archive is 480 MB (zstd -19), only 17% smaller. A standalone
  `import Std` program needs only the Init/Std data: binaries plus that core
  data compress to about 220 MB. Lake projects, and programs importing `Lean`
  or `Lake`, additionally need about 260 MB of Lean/Lake data.
- Python performs no heavy work. Native clang, wasm-ld and Binaryen do the
  compiling and linking; Emscripten's JavaScript compiler already runs in Node.
  Python orchestrates, parses Wasm metadata and assembles the glue. A Node link
  driver with native clang, wasm-ld and Binaryen, plus a prebuilt sysroot,
  replaces SDK + Python (333 MB) with about 73 MB.
- npm has no documented tarball limit; live packages reach about 177 MB.
  Mirrors and GitHub Packages enforce limits (GitHub: 256 MiB), so packages stay
  at or below about 150 MB. Platform packages use `optionalDependencies` with
  `os`/`cpu`/`libc`, like esbuild. Node 24+ decompresses zstd natively.

## Target layout

| Piece | Compressed | Platform | Needed by |
| --- | --- | --- | --- |
| Lean binaries and shared libraries | ~40 MB | per platform | everyone |
| Lean Init/Std module data and sources | ~180 MB | shared | everyone |
| Lean Lean/Lake module data and sources | ~260 MB | shared | Lake projects; programs importing `Lean`/`Lake` |
| clang, wasm-ld, Binaryen tools | ~70 MB | per platform | everyone |
| Sysroot, headers, Emscripten JavaScript | ~6 MB | shared | everyone |
| Git | ~65 MB | per platform | Lake projects with Git dependencies |

An ordinary program's first build falls from about 913 MB to about 293 MB.

## Phases

Each phase ships only after a new packed candidate passes the six-platform
acceptance and the three consecutive cold-installation gate.

1. **Tiered trimmed Lean.** Deterministically repackage the pinned upstream
   release into per-platform binaries, shared core data and shared extended
   data. Lasm assembles one physical prefix (Lean resolves its sysroot from
   `bin/../lib/lean`) and adds the extended tier only when needed. Keep Lean's
   `LICENSE`/`LICENSES` verbatim, add the missing libuv notice, and point to the
   unmodified upstream archive and sources. Lake builds of native code
   (`precompileModules`, `extern_lib`) remain unsupported, as today.
2. **Node link driver.** Replace `emcc` with a Node driver invoking clang,
   wasm-ld, Binaryen and Emscripten's Node-based JavaScript compiler directly,
   using a maintainer-recorded link recipe and a prebuilt PIC sysroot. Require
   byte-identical objects, maps, `program.wasm` and `program.cjs` against the
   current `emcc` output on the existing fixtures. Remove absolute build paths
   from `program.cjs` so outputs are reproducible. Python leaves the user path.
3. **npm distribution.** Publish-ready packages with exact pinned versions:
   platform binaries through `optionalDependencies`, shared data packages at or
   below about 150 MB each. The extended Lean tier is fetched on demand through
   npm itself, so npm's proxy, certificate and integrity handling apply. Detect
   missing platform packages (lockfile bugs, `--omit=optional`) and print the
   exact fix. Validate with a local Verdaccio registry on all six native runners.
   npm publication remains a separate user decision.
