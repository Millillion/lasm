# License compliance audit (before the first npm publication)

**Status: audit of 2026-10-23, updated 2026-10-24, written by an AI agent.** It
records what Lasm distributes, which licence terms apply, how each obligation is
met, and the reasoning. Per the user's instruction of 2026-10-23, nothing is left
for a lawyer: every question is decided here, choosing the **over-complying**
reading (do whatever the strictest reasonable interpretation would require).
Section 9 lists those decisions.

## 1. Scope and method

Inspected byte for byte:

- **Candidate `.58`** (`lasm-compiler-0.1.0-experimental.58.tgz`, SHA-256
  `abeccf74…5008`), the base of npm-dist run 40028573598, repackaged by
  `scripts/npm-dist/build.mjs --version 0.1.0 --license MIT`; and the packages built
  again from current source (§10).
- **Every tool archive** the npm packages carry: `lean-4.35.0-tiers-v1` (10
  archives), `lean-4.35.0-c-v1` (5), `emscripten-6.0.9-lasm-toolchain-v1` (6),
  each checked against its SHA256SUMS; the rebuilt `lean-4.35.0-tiers-v2` (§10).
- **Built `dist/`s:** a trivial app (`examples/hello`), a Hono interop app and a
  Lake project with C (`lean-zip`, whose `dist/` was rebuilt from current source).
- **Upstream:** Lean v4.35.0 (`LICENSE`, `LICENSES`, `flake.nix`, `flake.lock`,
  `script/prepare-llvm-*.sh`, `src/CMakeLists.txt`, the runtime and Lake sources,
  CI), Emscripten 6.0.9 and its `system/lib/**/LICENSE*`, koffi 3.3.0, MSYS2's
  mingw-w64 packages, the Lean FRO trademark policy, GPL-2.0/3.0, LGPL-2.1/3.0, the
  GCC Runtime Library Exception, the FSF GPL FAQ and Microsoft's C++ deployment
  documentation. Binaries were examined with `readelf` (`NEEDED`, `.comment`
  compiler versions), `objdump`, `nm` and `strings` (embedded versions such as
  `glibc 2.26`, `OpenSSL 3.6.0`, `deflate 1.2.11`).

## 2. Summary

| Item | Decision and status |
| --- | --- |
| Lasm's own licence | MIT, copyright Jordan Last (`LICENSE`); carried into every built `dist/` and the CLI's notices |
| Permissive components (Apache-2.0, LLVM, MIT, BSD, ISC, Zlib, BlueOak, dtoa, SunPro) | Every licence text shipped, in the archive and, for npm packages, in `licenses/` |
| Apache-2.0 §4(b) changes to Lean | Listed per patch in every `dist/` and CLI notice; the shipped `lean.h` carries a modification comment |
| **Git** | **Not distributed** (decision 4): Lasm uses the system `git`, needed only for Lake projects with dependencies |
| **GNU MP in built apps** | **Removed** (decision 5): the Wasm runtime is built with `USE_GMP=OFF`; apps contain no copyleft code. Older runtimes' GMP notice stays automatic |
| GNU MP, glibc, GCC runtime, Linux UAPI and MinGW-w64 in the tool archives | Exact corresponding sources (and build recipes) **mirrored as release assets** beside the archives; NOTICEs name them |
| npm `license` fields | SPDX expressions of every bundled component, including `@lasm/cli` (Lasm's MIT first) |
| Apple `libSystem.tbd` | Removed from the macOS C tier; the user's own SDK copy is used |
| Microsoft C runtime (static, in emsdk's Windows tools) | Redistributable as statically linked code (§4.9) |
| Lake dependencies' licences | Copied into every `dist/` automatically |
| Lean trademark | Names permitted by the policy; disclaimer kept |
| Old Windows ARM64 releases | Converted to drafts (no longer public) |

## 3. Inventory and compliance, per package

Every npm package's `licenses/` holds verbatim copies of the licence files inside
its archive (`LICENSE`, `LICENSES`, `COPYING*`, `NOTICE*`, `lasm-notices/`), so the
texts are visible without extracting anything.

### 3.1 `@lasm/cli` 0.1.0

| Component (path) | Version | SPDX | How the obligations are met |
| --- | --- | --- | --- |
| Lasm (bin/, src/, library/, templates/, scripts/full-lean/*.js, runtime glue `liblasmhost.a`, `liblasmsymbols.a`) | 0.1.0 | MIT | `LICENSE` |
| Lean runtime and standard library compiled for wasm64 (`targets/lean-4.35.0-wasm64/`) | 4.35.0 (eb6cafb), patched | Apache-2.0 | Lean `LICENSE` and `LICENSES` in notices; §4(b) list of changes; `include/lean/lean.h` modification comment |
| GNU MP `libgmp.a` (runtimes up to manifest `7aa5028c…` only) | 6.3.0 | LGPL-3.0-or-later OR GPL-2.0-or-later | GMP-free runtimes contain none (decision 5). Older ones: texts, source mirrored on `lean-4.35.0-tiers-v2` |
| libuv `libuv.a` | 1.48.0 | MIT AND ISC AND BSD-2-Clause | `LICENSE` and `LICENSE-extra` |
| Emscripten headers and system-library code compiled into the runtime (musl, libc++, libc++abi, libunwind, compiler-rt, mimalloc) | 6.0.9 | (MIT OR NCSA), MIT, Apache-2.0 WITH LLVM-exception | their texts in notices |
| koffi, `@koromix/koffi-*` (`src/native/node_modules`), with node-addon-api compiled in | 3.3.0 | MIT | `koffi/LICENSE.txt`, node-addon-api text |
| Process/signal helpers (`src/native/{process,signals}`), Zig-built; the musl variants link musl and Zig's compiler_rt statically | Zig 0.16.0 | MIT | `THIRD_PARTY_NOTICES.txt` beside them |
| Bundled `tar` and its dependencies (`node_modules/`) | tar 7.5.22, minipass 7.1.3, chownr 3.0.0, yallist 5.0.0, minizlib 3.1.0, @isaacs/fs-minipass 4.0.1 | BlueOak-1.0.0, MIT, ISC | each `LICENSE*`, also in `licenses/npm/` |

**`license` field:** an SPDX expression built at packaging time
(`scripts/npm-dist/packages.mjs` `cliLicense`): Lasm's own licence first, then the
terms of every section of the package's `THIRD_PARTY_NOTICES.txt` and the native
helpers' notices, and every bundled npm package's licence. An unknown notice
section fails packaging, so the field cannot silently fall behind the contents.
Measured in npm-dist runs 40079094763 and 40084808673 (release mode, candidate
`0.1.0-experimental.59`, all five platforms): `MIT AND Apache-2.0 WITH
LLVM-exception AND ISC AND BSD-2-Clause AND Apache-2.0 AND (MIT OR NCSA) AND
BlueOak-1.0.0`. For candidate `.58`: `MIT AND Apache-2.0 AND (MIT OR NCSA) AND Apache-2.0 WITH
LLVM-exception AND (LGPL-3.0-or-later OR GPL-2.0-or-later) AND ISC AND
BlueOak-1.0.0`; a GMP-free candidate drops the LGPL term and adds `BSD-2-Clause`
(libuv `LICENSE-extra`). `LICENSE` stays Lasm's MIT text; every section's text is
in `licenses/<section>.txt`, the helpers' in `licenses/native-*/`, the bundled npm
packages' in `licenses/npm/<name>/`.

### 3.2 `@lasm/lean-<platform>` (Lean's binaries, unmodified)

`lean-4.35.0-<platform>-bin.tar.zst`: `bin/{lean,lake,leanir,cadical}` and the
shared libraries they load, Lean's `LICENSE` and `LICENSES`, and `lasm-notices/`.

| Component | Version | SPDX | Found by | Text and source |
| --- | --- | --- | --- | --- |
| Lean executables and `libleanshared*`, `libInit_shared`, `libLake_shared` | 4.35.0 | Apache-2.0 | | `LICENSE` |
| GNU MP, statically linked into `libleanshared` | 6.3.0 | LGPL-3.0-or-later OR GPL-2.0-or-later | `nm -D` (504 `__gmp*`) | `LICENSES`; source and Lean's source (its Corresponding Application Code for relinking) mirrored |
| libuv, mimalloc (static); CaDiCaL (`bin/cadical`) | 1.48.0 (1.52.1 Windows), v3.4.5 | MIT (+ISC, BSD-2-Clause) | `nm`, NOTICE | `libuv-LICENSE*`, `mimalloc-LICENSE` (v2; Lean's `LICENSES` omits both) |
| Linux: `libc++`, `libc++abi`, `libunwind` shared libraries | Lean's LLVM | Apache-2.0 WITH LLVM-exception | | `LICENSES` |
| Linux: `libatomic.so.1` | GCC 7.3.0 (x64), 7.4.0 (arm64) | GPL-3.0-or-later WITH GCC-exception-3.1 | `.comment` | `gcc-COPYING3`, `gcc-COPYING.RUNTIME` (v2); GCC source and nixpkgs recipe mirrored |
| Windows: `libc++.dll`; MinGW-w64 runtime startup code in the executables | mingw-w64 | Apache-2.0 WITH LLVM-exception; ZPL-2.1 AND ISC AND BSD-2-Clause AND dtoa AND SunPro AND MIT AND LicenseRef-Cephes | `strings` | `mingw-w64-runtime-COPYING` (v2); mingw-w64 CRT source and MSYS2 gmp recipe mirrored |

### 3.3 `@lasm/lean-core-*`, `@lasm/lean-ext-*`

Lean's `.olean`/`.ir` module data and `.lean` sources, byte-identical to every
upstream platform archive. Apache-2.0; Lean's `LICENSE`. Lean has no NOTICE file,
so Apache §4(d) adds nothing.

### 3.4 `@lasm/emscripten-<platform>` (`6.0.9-lasm.1`, unchanged archives)

Unmodified subset of emsdk's `wasm-binaries` (clang, lld, llvm-nm, llvm-objcopy,
wasm-opt, wasm-emscripten-finalize, wasm-metadce, clang resource headers);
`lasm-notices/` has the LLVM, clang, lld and Binaryen licences and the source commits.

| Component | SPDX | Notes |
| --- | --- | --- |
| LLVM (b158b0a) | Apache-2.0 WITH LLVM-exception | |
| Binaryen (d03c25e) | Apache-2.0 | |
| Linux: libstdc++/libgcc linked statically by Google's build | GPL-3.0-or-later WITH GCC-exception-3.1 | x64: Debian gcc-6 6.3.0-18+deb9u1; arm64: gcc-10 10.2.1-6 (`.comment`). The exception imposes nothing; their Debian source packages are mirrored on `emscripten-6.0.9-lasm-toolchain-v1` anyway |
| Windows: Microsoft C/C++ runtime linked statically by Google's build | Microsoft's terms (§4.9) | |

### 3.5 `@lasm/emscripten-shared` (`6.0.9-lasm.1`)

Emscripten's JavaScript compiler subset, acorn, acorn-import-phases, terser,
`LICENSE`, `AUTHORS`, every `system/**/LICENSE*`, and a prebuilt wasm64 sysroot
(musl-based libc, libc++, libc++abi, libunwind, compiler-rt, mimalloc, …). Lasm's
repairs to `src/lib/libdylink.js`, `src/lib/libpthread.js`, `emscripten-version.txt`,
`system/lib/emmalloc.c` and `system/lib/pthread/pthread_create.c` are named in the
NOTICE (MIT/NCSA need no change notice). SPDX: `(MIT OR NCSA) AND MIT AND
Apache-2.0 WITH LLVM-exception AND BSD-2-Clause`.

### 3.6 `@lasm/lean-c-<platform>` (C tier)

From Lean's release, unmodified: clang, ld.lld/ld64.lld, llvm-ar, `libLLVM`,
`libclang-cpp`, `libc++`, `libc++abi`, `libunwind`, compiler-rt, `include/lean`
(with `mimalloc.h`), `lib/libgmp.a` (6.3.0), `lib/libuv.a`, `lib/libssl.a` and
`lib/libcrypto.a` (OpenSSL 3.6.0); Linux: `lib/glibc/*` (the GNU C Library **2.26**
on x64, **2.27** on arm64: libc, libm, libdl, libpthread, librt, libutil, ld.so,
`*_nonshared.a`), crt objects, `libz.so` (zlib 1.2.11), `libgcc_s.so.1` and
`libatomic.so` (GCC 7.3.0 / 7.4.0); Windows: MinGW-w64 CRT objects and import
libraries, winpthreads, `zlib1.dll` (zlib 1.3.2); macOS: `lib/libc/libc++.dylib`.
Added by Lasm: `cc`, clang's resource headers (LLVM 23.1.0) and the C library
headers (glibc 2.35 + Linux 5.15 UAPI from Ubuntu 22.04; mingw-w64 r380).

| Component | SPDX | Texts | Source |
| --- | --- | --- | --- |
| LLVM pieces | Apache-2.0 WITH LLVM-exception | `llvm-clang-LICENSE.txt`, `LICENSES` | n/a (permissive) |
| Lean headers; OpenSSL | Apache-2.0 | Lean `LICENSE`, `openssl-LICENSE` | n/a |
| GNU MP | LGPL-3.0-or-later OR GPL-2.0-or-later | `LICENSES` | gmp-6.3.0 + Lean source + nixpkgs/MSYS2 recipes, mirrored |
| libuv, mimalloc | MIT (+ISC, BSD-2-Clause) | `libuv-LICENSE*`, `mimalloc-LICENSE` | n/a |
| glibc 2.26/2.27 libraries and crt objects; glibc 2.35 headers | LGPL-2.1-or-later | `LICENSES` (full LGPL-2.1), Debian `copyright` | glibc-2.26/2.27 + nixpkgs 18.03/19.03; Ubuntu glibc 2.35-0ubuntu3 source package; all mirrored |
| Linux 5.15 UAPI headers | GPL-2.0-only WITH Linux-syscall-note | Debian `copyright` | Ubuntu linux 5.15.0-25.25 source package, mirrored |
| GCC runtime `libgcc_s`, `libatomic` | GPL-3.0-or-later WITH GCC-exception-3.1 | `gcc-COPYING3`, `gcc-COPYING.RUNTIME` | gcc-7.3.0/7.4.0 + nixpkgs, mirrored |
| zlib | Zlib | `zlib-1.2.11-LICENSE` / `zlib-1.3.2-LICENSE` | n/a |
| MinGW-w64 headers, CRT, import libraries | ZPL-2.1, LGPL-2.1-or-later (Wine headers), GPL-2.0-or-later WITH GCC-exception-2.0 (`stdarg.h`), ISC, BSD-2-Clause, dtoa, SunPro, MIT, LicenseRef-Cephes | package COPYING files, `mingw-w64-runtime-COPYING` | MSYS2 mingw-w64 headers/crt r380 source packages, mirrored |
| winpthreads | MIT AND BSD-3-Clause | COPYING | MSYS2 winpthreads r380 source package, mirrored |
| macOS `libSystem.tbd` | (Apple SDK) | — | **not distributed** (§9) |

The `license` field is the conjunction of the column for the platform.

### 3.7 `create-lasm` 0.1.0

Lasm code only, MIT, copyright Jordan Last.

### 3.8 GitHub releases

| Release | Status |
| --- | --- |
| `lean-4.35.0-tiers-v2` | **The current archives** (binaries, module data and C tier, revision 2) with the 23 mirrored sources of §6 as assets (41 assets), published by run 40067638952 after every native check passed on all five platforms, including the macOS link against the SDK's `libSystem.tbd`; npm versions `4.35.0-lasm.2`. The module-data archives are byte-identical to `tiers-v1` |
| `lean-4.35.0-tiers-v1`, `lean-4.35.0-c-v1` | Superseded (lack the mimalloc, GCC, zlib, MinGW texts; the macOS C tier has `libSystem.tbd`). Still referenced by released candidates; the C-tier npm packages built from v1 add the missing texts in `licenses/` |
| `emscripten-6.0.9-lasm-toolchain-v1` | Unchanged archives; the Debian gcc-6/gcc-10 source packages were added as assets |
| `lean-4.34.1-tiers-v1` | Older Lean still selectable through `lean-toolchain`; same contents and gaps as `tiers-v1` |
| `windows-arm64-lean-bootstrap-36397277364`, `windows-arm64-sdk-bootstrap-36426171536`, `windows-arm64-sdk-bootstrap-36278363560`, `windows-arm64-tool-notices-v1` | **Converted to drafts on 2026-10-24**: no longer publicly distributed; reversible, nothing deleted |
| Candidate releases (`node-linux-candidate-*`, `node-package-*`) | Drafts (collaborators only) |

### 3.9 A built application's `dist/`

| Path | Contents | SPDX | Notice |
| --- | --- | --- | --- |
| `program.wasm` | Lean runtime + standard library (patched), Emscripten libc (musl), libc++, libc++abi, libunwind, compiler-rt, mimalloc, libuv 1.48.0, Lasm glue, the app's code and its Lake dependencies' Lean and C code. **No GNU MP** with a GMP-free runtime | Apache-2.0, MIT OR NCSA, MIT, Apache-2.0 WITH LLVM-exception, ISC, BSD-2-Clause, the dependencies' own | `THIRD_PARTY_NOTICES.txt` |
| `program.cjs` | Emscripten JS runtime (with Lasm's repairs), Lasm host prelude | MIT OR NCSA, MIT | yes |
| `main.mjs`, `host/*` | Lasm host | MIT | Lasm's notice |
| `host/native/node_modules/koffi*` | koffi 3.3.0 | MIT | `LICENSE.txt`, node-addon-api text |
| `host/native/{process,signals}` | Lasm helpers | MIT | their notices |
| `licenses/<package>/` | **licence files of every Lake dependency compiled in** | the dependencies' | also appended to `THIRD_PARTY_NOTICES.txt` |
| `node_modules/` (npm interop) | the project's npm packages | each package's | each package's files |

Verified on `lean-zip` (current source, 2026-10-24): `dist/licenses/lean-zip/LICENSE`
and `dist/licenses/lean-zip-common/LICENSE` (Apache-2.0), listed and appended in the
notices.

## 4. Obligations by licence, and how they are met

### 4.1 Apache-2.0 (Lean, Binaryen, OpenSSL; LLVM with its exception)

§4(a) licence copy: every archive and npm package; every `dist/`. §4(c)/(d): no
component ships a NOTICE file (checked for Lean, LLVM, Binaryen, OpenSSL 3.6.0,
mimalloc). The LLVM exception waives §4(a), (b), (d) for runtime code compiled into
a program; the texts are included anyway.

**§4(b) modified files.** Lasm patches Lean's sources before building the Wasm
runtime (recorded in the runtime's `target.json` `patches`, files in
`scripts/full-lean/patches/`):

| Patch | Files | Purpose |
| --- | --- | --- |
| `lean-4.35.0-wasm-build` | `src/CMakeLists.txt`, `src/stdlib.make.in`, `src/bin/leanc.in`, `src/include/lean/lean.h`, `src/runtime/{compact,interrupt,io,memory}.cpp`, `src/runtime/uv/system.cpp`, `src/library/{ir_interpreter,module}.cpp`, `src/util/{io.h,shell.cpp}`, `src/shell/lean.cpp`, stage0 copies | build for wasm64 Emscripten |
| `lean-4.32.0-compact-alignment` | `src/runtime/compact.cpp` | aligned compact headers |
| `lean-4.32.0-thread-runtime` | `src/runtime/object.cpp`, `src/runtime/stackinfo.cpp` | Wasm thread stacks; `LEAN_ABORT_ON_PANIC` |
| `lean-4.35.0-sdk-mimalloc` | `src/CMakeLists.txt`, `src/runtime/CMakeLists.txt`, new `src/runtime/lasm-sdk-mimalloc.cpp` | Emscripten's mimalloc |
| `lean-4.35.0-c-inputs` | `src/lean.mk.in` | C input dependencies |
| `lean-4.32.0-region-allocation` | `src/library/module.cpp`, `src/runtime/compact.cpp` | allocation failures |
| `lean-4.32.0-host-platform`, `lean-4.34.0-host-linux` | `src/runtime/platform.cpp` | host OS queries |
| `lean-4.34.0-host-backtrace` | `src/runtime/object.cpp` | host backtraces |
| `lean-4.34.0-libuv-source` | `src/CMakeLists.txt` | pin libuv v1.48.0 by commit |
| `lean-4.35.0-nonlinear-environment` | `src/runtime/object.cpp` | `LEAN_ABORT_ON_NONLINEAR` |

`scripts/full-lean/configure-host.mjs` also renames runtime functions that Lasm's
`runtime/node-*.cpp` replace. **Met by:** the list in every `dist/` and CLI notice
(object form), and a modification comment in the only modified source file shipped,
`include/lean/lean.h` (from the next runtime packaging).

### 4.2 Permissive licences (MIT, BSD-2/3-Clause, ISC, Zlib, BlueOak-1.0.0, dtoa, SunPro, ZPL-2.1, Cephes)

Keep the copyright and permission notices with binaries. Met by the texts listed in
§3, including those upstream omitted: mimalloc and libuv (Lean's `LICENSES` lists
neither), OpenSSL, zlib, compiler-rt, libunwind, libuv `LICENSE-extra`,
node-addon-api, the MinGW-w64 runtime notices.

### 4.3 GNU MP 6.3.0: LGPL-3.0-or-later OR GPL-2.0-or-later

Lasm conveys GMP in object form in two places: inside Lean FRO's `libleanshared`
(static) and as `libgmp.a` in the C tier (and in `@lasm/cli` runtimes before
decision 5). Taking the LGPL-3.0 branch, the over-complying reading requires:

- the licence texts (LGPL-3.0 and GPL-3.0): in `LICENSES` and the notices;
- the **library's corresponding source** (GPL-3.0 §6, incorporated by LGPL-3.0),
  **from Lasm itself**, not only a third party: `gmp-6.3.0.tar.xz` is mirrored as a
  release asset next to the binaries, with the build recipes (nixpkgs 18.03/19.03,
  MSYS2 `mingw-w64-gmp 6.3.0-2`; Homebrew's formula has no patches);
- for the **combined work** `libleanshared` (LGPL-3.0 §4(d)(0)): the Corresponding
  Application Code in a form suitable for relinking. Lean is open source; its exact
  source (`lean4-eb6cafb…tar.gz`) is mirrored with it, and the NOTICE says how to
  relink (rebuild Lean against a modified GMP). §4(e) Installation Information
  applies only to User Products, which npm packages are not.

**Built apps:** decision 5 builds the Wasm runtime without GMP (Lean's own
`mpn`/`mpz`), so apps contain no LGPL code and their distributors owe nothing for
it. Current source pins runtime `8b3e33e0…` (CI build 40066905228, `6879de9`): no
`libgmp.a`; `src/notices.mjs` writes the GNU MP notice only for a runtime that still
links it. Results match native (GMP) Lean (`integration/bignum-differential.mjs`);
speed equals the GMP runtime up to a few hundred digits, and at 10,000 digits
multiplication is about 5×, division 5.7× and `Nat.gcd` 60× slower
([BENCHMARKS.md](BENCHMARKS.md#big-numbers-without-gmp)). Facts behind the
decision, for the record:

- Lean 4.35 supports `-DUSE_GMP=OFF`; its built-in code uses 32-bit digits and
  schoolbook multiplication and division. `.olean` headers record the bignum
  encoding and Lean rejects a mismatch; Lasm's apps do not load module data at run
  time, and the standard-library objects do not depend on `USE_GMP` (25110cf).
- **Option B, GMP as a separate replaceable Wasm module** (the fallback): Lasm's
  runtime is already position-independent (`-fPIC`, `MAIN_MODULE=2` ABI) and its
  link driver supports dynamic side modules. GMP would be built as an Emscripten
  `SIDE_MODULE` (≈0.8 MB, the size of today's `libgmp.a`), shipped as
  `dist/gmp.wasm` and loaded at start, satisfying LGPL-3.0 §4(d)(1) ("a suitable
  shared library mechanism") because a recipient can replace the file with an
  interface-compatible build. Costs: a new build and link mode, one more file per
  app, a few milliseconds of start-up linking, an indirect call per GMP entry, and a
  full gate rerun.
- **Option D, a relink kit in `dist/`** (§4(d)(0)): the app's own objects plus the
  runtime archives and link recipe. The runtime archives total about 355 MB
  (`libLean.a` 234 MB, `liblasmsymbols.a` 74 MB); keeping only the members a given
  link uses would still add tens of MB per app, and relinking needs Lasm's link
  toolchain. Feasible but heavy for every user.
- Option A (static GMP, users comply) was rejected because the duty would fall on
  every user who conveys a `dist/`.

### 4.4 LGPL-2.1-or-later (glibc libraries, crt objects and headers; Wine-derived MinGW headers)

LGPL-2.1 §4/§6: object code must be accompanied by the corresponding source or a
written offer. The crt objects and `*_nonshared.a` carry glibc's linking exception,
and headers are source, but the over-complying reading treats them all as needing
source: **the exact sources are mirrored** (glibc 2.26/2.27 + nixpkgs recipes for
Lean's libraries and crt objects; Ubuntu's glibc 2.35-0ubuntu3 source package with
its `.dsc`, `.debian.tar.xz` and signature for the headers; MSYS2's mingw-w64 r380
source packages for the MinGW headers). The texts are in Lean's `LICENSES` and the
Debian/MSYS2 copyright files.

### 4.5 GPL-2.0-only WITH Linux-syscall-note (Linux UAPI headers)

The note states that programs using the syscall interface are not derived works.
The headers are themselves source; over-complying, the Ubuntu linux 5.15.0-25.25
source package (`orig.tar.gz`, `diff.gz`, `.dsc`) is mirrored as well.

### 4.6 GPL-3.0-or-later WITH GCC-exception-3.1 (libgcc_s, libatomic; static libstdc++ in emsdk's Linux tools)

The exception lets the compiled Target Code be propagated under any terms; shipping
`libgcc_s.so`/`libatomic.so` themselves is GPL-3.0 distribution. Over-complying:
GCC's `COPYING3` and `COPYING.RUNTIME` are shipped, and GCC 7.3.0/7.4.0 (Lean) and
Debian's gcc-6/gcc-10 source packages (emsdk) are mirrored.

### 4.7 Git (no longer distributed)

Candidates up to `.58` downloaded dugite-native's Git (GPL-2.0-only, plus MinGit's
MSYS2/MinGW components on Windows), and the npm rehearsal packaged it as
`@lasm/git-*`; Lasm had received no written offer, so GPL-2.0 §3 would have required
mirroring every source. **Decision 4 removed it**: Lasm uses the system `git` and
ships none ([MANAGED_GIT.md](MANAGED_GIT.md)). Facts that informed it: Lake 4.35
needs Git only for `git`/Reservoir dependencies, `lake update` and the release
cache; `lake new`/`init` merely warn; dependency-free Lake projects and programs
build with no Git (verified).

### 4.8 Apple SDK file (`libSystem.tbd`)

Lean FRO's macOS release copies `$SDK/usr/lib/libSystem.tbd` into `lib/libc` so its
linker flags (`--sysroot ROOT -L ROOT/lib/libc`) find libSystem. It is Apple's SDK
file, under Apple's SDK terms, which do not grant redistribution. **Decision:** the
C tier leaves it out (`scripts/lean-dist/tiers.mjs` drops `*.tbd`), and Lasm's
assembled prefix copies the user's own SDK file into `lib/libc/` (keyed by its
SHA-256, so an SDK update rebuilds the prefix). The macOS C tier already required
the Command Line Tools SDK for C headers; nothing new is needed from the user.
`scripts/lean-dist/check-c-tier.mjs` asserts the archive lacks the file and links
with Lean's own flags against the SDK copy on the macOS runners.

### 4.9 Microsoft C/C++ runtime (statically linked in emsdk's Windows tools)

emsdk's Windows `clang.exe`, `wasm-ld.exe` and Binaryen tools import only Windows
system DLLs (`KERNEL32`, `ADVAPI32`, …): Google's build links the MSVC runtime
statically. Microsoft documents static linking as one of the three supported ways to
deploy its C++ libraries with an application: "Visual Studio enables three ways to
deploy the Microsoft C++ libraries … static linking" and "You can statically link a
static library to your application" (learn.microsoft.com/cpp/windows/deployment-in-visual-cpp).
The redistribution limit in "Redistributable files and licensing" concerns the
runtime packages, merge modules and DLLs, none of which Lasm ships. Lasm
redistributes Google's unmodified executables, as emsdk itself does. **Decision:**
redistributable; documented in the package README.

### 4.10 Lasm's own notice

MIT requires its notice in substantial portions. Every `dist/` contains Lasm's host
code and runtime glue, so `THIRD_PARTY_NOTICES.txt` starts with Lasm's MIT licence
(`src/notices/LASM-LICENSE.txt`, tested equal to `LICENSE`). **Decision:** kept, no
waiver for generated output.

## 5. Trademark

Lean FRO's policy (https://lean-lang.org/trademark-policy, 2026-03-11): "The Lean
name and logos are trademarks of Lean FRO". Without approval it permits the name in
package names when referring to use with Lean, and versions whose changes are
limited to porting or packaging; nothing may look official or endorsed.

- `@lasm/lean-*` packages repackage unmodified Lean files for use with Lasm, in
  Lasm's scope: permitted; no renaming.
- The patched Wasm runtime is a port to wasm64/Node, is not published under a Lean
  name, and is described as "modified by Lasm".
- Disclaimer (README and every `@lasm/lean-*` README): "The Lean name and logos are
  trademarks of Lean FRO. Lasm is not affiliated with or endorsed by Lean FRO."

## 6. Mirrored sources

`scripts/lean-dist/source-archives.json` pins every mirrored source (URL, SHA-256,
bytes, what it covers). `lean-tiers.yml` downloads each, verifies the digest and
publishes it on the tier release; each archive's NOTICE lists the ones that apply to
it. The Debian/Ubuntu packages were also checked against their signed `.dsc`.

| Source | Covers |
| --- | --- |
| `gmp-6.3.0.tar.xz` | GNU MP in every platform's Lean binaries and C tier |
| `lean4-eb6cafb7290e8bd5f2937522d8d804f58f02bafc.tar.gz` | Lean 4.35.0: GMP's Corresponding Application Code; build scripts |
| `gcc-7.3.0.tar.xz`, `gcc-7.4.0.tar.xz` | `libgcc_s`, `libatomic` (x64, arm64) |
| `glibc-2.26.tar.xz`, `glibc-2.27.tar.xz` | `lib/glibc`, crt objects (x64, arm64) |
| `nixexprs-nixos-18.03.133402.cb0e20d6db9.tar.xz`, `nixexprs-nixos-19.03.173691.34c7eb7545d.tar.xz` | the nixpkgs recipes and patches Lean's Linux releases built those with (Lean's `flake.lock`) |
| `glibc_2.35.orig.tar.xz` (+ `.asc`), `glibc_2.35-0ubuntu3.debian.tar.xz`, `.dsc` | glibc headers |
| `linux_5.15.0.orig.tar.gz`, `linux_5.15.0-25.25.diff.gz`, `.dsc` | Linux UAPI headers |
| `mingw-w64-{headers-git,crt-git,winpthreads}-13.0.0.r380.gb83511db8-1.src.tar.zst` | MinGW-w64 headers, CRT, winpthreads |
| `mingw-w64-gmp-6.3.0-2.src.tar.zst` | the Windows GMP recipe |
| `gcc-6_6.3.0*`, `gcc-10_10.2.1*` (on `emscripten-6.0.9-lasm-toolchain-v1`) | static libstdc++ in emsdk's Linux tools |

## 7. Decisions on every formerly open item

| Item | Decision and reasoning |
| --- | --- |
| Git (GPL-2.0) | Not distributed (decision 4, §4.7) |
| GMP in built apps | Removed (decision 5, §4.3); option B is the fallback |
| GMP in Lean's binaries, C tier, older CLI runtimes | Source and Lean's source mirrored by Lasm; relinking explained (§4.3) |
| `@lasm/cli` licence field | SPDX of everything bundled, generated and checked (§3.1) |
| glibc headers, crt objects, libraries (LGPL-2.1) | Exact sources mirrored (§4.4) |
| Linux UAPI headers | Exact source mirrored though not required (§4.5) |
| GCC runtime pieces | Texts shipped, sources mirrored (§4.6) |
| MinGW-w64 / winpthreads | Complete SPDX terms, texts, sources mirrored |
| Apple `libSystem.tbd` | Not redistributed; user's SDK copy (§4.8) |
| Microsoft C runtime | Redistributable as statically linked code (§4.9) |
| `msalruntime.dll` | Gone with Git |
| Lake dependencies' licences in `dist/` | Copied automatically (§3.9) |
| Lasm's notice in generated output | Kept (§4.10) |
| Trademark | Disclaimer kept (§5) |
| Windows ARM64 releases | Drafted (§3.8) |

## 8. Attribution in documentation

README "Licenses" names Lasm's licence, what a `dist/` contains, the tool packages'
licence files and mirrored sources, the trademark disclaimer, and links here. Each
tool package README has a licence table.

## 9. Fixes made

| Commit | Change |
| --- | --- |
| `6976328` | `LICENSE`: copyright Jordan Last |
| `e03969c` | `dist/` and CLI notices: Lasm's MIT, §4(b) Lean changes, GMP notice, compiler-rt, libunwind, libuv `LICENSE-extra`, node-addon-api |
| `fe1328d` | Runtime packaging: modification comment in the shipped `lean.h` |
| `03f742b` | Tiers: mimalloc text; C tier carries Lean's licences, libuv, mimalloc, OpenSSL |
| `8e1a8e5`, `db5ff47` | npm SPDX fields, licence tables, trademark disclaimer |
| `d6958ff`, `39e59b5` | System Git: no bundled Git, install help, docs (decision 4) |
| `84054f3` | Mirrored (L)GPL sources and NOTICE source lists; GCC, zlib, MinGW-w64 runtime texts; no `libSystem.tbd` (SDK copy); `licenses/` in every npm package; `@lasm/cli` SPDX; Lake dependency licences in `dist/` |
| `825f0c4` + run 40067638952 | `lean-4.35.0-tiers-v2` published with the sources (catalog fix for C archives in a full run); gcc-6/gcc-10 sources added to `emscripten-6.0.9-lasm-toolchain-v1`; Windows ARM64 releases drafted |
| (this commit) | Catalog adopts `tiers-v2`; docs |

Parallel work: `ee06055`, `be64a89` (C tier npm packages and their notices),
`25110cf` (GMP-free runtime, decision 5).

## 10. Remaining items

- Candidates up to `.58` and the `tiers-v1`/`c-v1` archives predate these fixes.
  They stay available for the accepted history; current source uses `tiers-v2`.
- `lean-4.34.1-tiers-v1` (an older, still selectable Lean) has the `tiers-v1` gaps;
  rebuild it the same way if 4.34.1 is kept beyond 0.1.0.
