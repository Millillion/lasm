# License compliance audit (before the first npm publication)

**Status: audit of 2026-10-23, written by an AI agent. This is not legal advice.**
It records what is distributed, which licence terms apply, what Lasm does about
each one, and what still needs a decision or a lawyer. Where it says that an
obligation "is met", that is a reading of the licence text, not a legal opinion.
Section 9 lists the questions to put to a lawyer.

## 1. Scope and method

What was inspected, byte for byte:

- **Candidate `.58`** (`lasm-compiler-0.1.0-experimental.58.tgz`, SHA-256
  `abeccf74…5008`, the base of npm-dist run 40028573598). `@lasm/cli` is this
  tarball repackaged by `scripts/npm-dist/build.mjs --version 0.1.0 --license MIT`.
- **Every tool archive** the 28 npm packages carry: `lean-4.35.0-tiers-v1`
  (10 archives, SHA256SUMS verified), `lean-4.35.0-c-v1` (5, verified),
  `emscripten-6.0.9-lasm-toolchain-v1` (6) and dugite-native `v2.53.0-4` (5).
  Package metadata is from `packages.mjs` and the npm-dist run's `npm-dist.json`.
  `git-linux-x64` and `emscripten-shared` were also packed again from source.
- **Built `dist/`s:** a trivial app (`examples/hello`, built from current source
  with the `.58` runtime bundle), a Hono interop app (`.work/bench/manual/hono`)
  and a Lake project with C (`lean-zip`, `.work/eco/work/lean-zip`).
- **Upstream sources and pages:** Lean v4.35.0 (`LICENSE`, `LICENSES`,
  `src/CMakeLists.txt`, `src/runtime/mpz.cpp`, `src/library/module.cpp`, Lake's
  sources, `.github/workflows/ci.yml`); Emscripten 6.0.9's `LICENSE` and
  `system/lib/**/LICENSE*`; dugite-native's scripts and release notes; the
  koffi 3.3.0 package; the Lean FRO trademark policy; GPL-2.0, LGPL-3.0, GPL-3.0
  and the FSF GPL FAQ. Binaries were checked with `readelf`, `objdump`, `nm` and
  `strings` (dynamic dependencies, statically linked libraries, versions).

## 2. Summary

| Item | Status |
| --- | --- |
| Permissive components (Apache-2.0, LLVM, MIT, BSD, ISC, Zlib) in every package | Licence texts present, except the gaps fixed below |
| Lasm's own MIT notice | Fixed: repository `LICENSE` now "Jordan Last"; built `dist/` and the CLI's notices now carry it |
| Apache-2.0 §4(b) notices for Lasm's changes to Lean | Fixed in source (dist and CLI notices list every patched file; the shipped `lean.h` gets a comment at the next runtime packaging) |
| npm `license` fields | Fixed in source: SPDX expressions for every tool package; Git keeps `SEE LICENSE IN README.md`, which is now true |
| Missing licence texts (compiler-rt, libunwind, libuv `LICENSE-extra`, node-addon-api, mimalloc, OpenSSL, Lean's licences in the C tier, Git/Git LFS/GCM on Linux and macOS) | Fixed in source (dist, npm packages, next tier builds) |
| **Git (GPL-2.0-only) corresponding source** | **Open: needs your decision (§7)** |
| **GNU MP (LGPL-3.0) in built apps: users' relinking obligation** | **Open: needs your decision (§8)** |
| GNU MP in Lean's own binaries and the C tier | Source location named; whether that is enough is a lawyer question |
| Lean trademark | Package names acceptable under the policy; disclaimer added (§6) |

The fixes take effect for packages built from current source. The `.58`
candidate and the released archives (`lean-4.35.0-tiers-v1`, `lean-4.35.0-c-v1`)
are unchanged, and nothing was published, tagged or released.

## 3. Inventory and compliance, per package

Status: **OK** met; **Fixed** met after the fixes in §10 (current source);
**Open** not yet met; **Lawyer** depends on an interpretation in §9.

### 3.1 `@lasm/cli` 0.1.0 (candidate `.58`, licence field `MIT`)

| Component (path) | Version | Licence (SPDX) | Obligations | How met | Status |
| --- | --- | --- | --- | --- | --- |
| Lasm (bin/, src/, library/, templates/, scripts/full-lean/*.js) | 0.1.0 | MIT | Keep the notice | `LICENSE` (copyright Jordan Last, added by `--license MIT`) | Fixed (was "Millillion") |
| Lean runtime and standard library, compiled for wasm64 (`targets/lean-4.35.0-wasm64/lib/lib{Init,Std,Lean,LeanExport,Lake,leancpp,leanrt}.a`, `include/lean/*.h`) | 4.35.0, commit eb6cafb | Apache-2.0 | Licence copy; §4(b) notices on changed files; keep notices | `THIRD_PARTY_NOTICES.txt`; patches listed (§4.1) | Fixed (lean.h comment: next runtime packaging) |
| Lasm runtime glue (`liblasmhost.a`, `liblasmsymbols.a`) | 0.1.0 | MIT | Notice | as Lasm | OK |
| GNU MP (`lib/libgmp.a`, unmodified) | 6.3.0 | LGPL-3.0-or-later OR GPL-2.0-or-later | Licence texts; source of the library (GPL-3 §6 via LGPL) | Texts in notices; source URL and recipe in notices | Lawyer (source "accompanies"?) |
| libuv (`lib/libuv.a`) | 1.48.0 | MIT (+ ISC `inet.c`, BSD-2-Clause `tree.h`) | Notices | MIT text; `LICENSE-extra` added | Fixed |
| koffi + `@koromix/koffi-*` native add-ons (`src/native/node_modules`) | 3.3.0 | MIT | Notice | `koffi/LICENSE.txt` | OK |
| node-addon-api headers compiled into `koffi.node` | koffi's vendored copy | MIT | Notice | added to notices | Fixed |
| Process/signal helpers (`src/native/{process,signals}`), Zig-built; musl variants statically link musl and Zig compiler_rt | Lasm 0.1.0, Zig 0.16.0 | MIT; musl MIT; Zig MIT | Notices | `THIRD_PARTY_NOTICES.txt` beside them | OK |
| Bundled `tar` and its dependencies (`node_modules/`) | tar 7.5.22, minipass 7.1.3, chownr 3.0.0, yallist 5.0.0, minizlib 3.1.0, @isaacs/fs-minipass 4.0.1 | BlueOak-1.0.0; MIT; ISC | Keep licence | each package's `LICENSE*` | OK |

`license: "MIT"` describes Lasm's code; the package also contains the components
above. Keeping `MIT` with `THIRD_PARTY_NOTICES.txt` is common practice; an SPDX
conjunction (`MIT AND Apache-2.0 AND (LGPL-3.0-or-later OR GPL-2.0-or-later) AND
BlueOak-1.0.0 AND ISC`) would be more literal. Your choice; see §9.

### 3.2 `@lasm/lean-<platform>` (`4.35.0-lasm.1`; Lean's binaries, unmodified)

Each holds `lean-4.35.0-<platform>-bin.tar.zst`: Lean's `bin/{lean,lake,leanir,cadical}`
and the shared libraries they load, plus Lean's `LICENSE` and `LICENSES` and
`lasm-notices/` (NOTICE, libuv licences).

| Component | Licence | Found by | Licence text | Status |
| --- | --- | --- | --- | --- |
| Lean (executables, `libleanshared*`, `libInit_shared`, `libLake_shared`) | Apache-2.0 | | `LICENSE` | OK |
| GNU MP 6.3.0, **statically linked into `libleanshared`** (504 exported `__gmp*` symbols) | LGPL-3.0-or-later OR GPL-2.0-or-later | `nm -D` | in `LICENSES` | Lawyer (same position as Lean FRO's own release) |
| libuv (1.48.0 Linux/macOS; 1.52.1 Windows), static | MIT (+ISC, BSD-2) | `nm`, NOTICE | `lasm-notices/…/libuv-LICENSE*` | OK |
| mimalloc v3.4.5, static (Lean 4.35 fetches it) | MIT | `nm` (`mi_*`) | missing from Lean's `LICENSES` | Fixed for the next tier build (`mimalloc-LICENSE`); `tiers-v1` lacks it |
| CaDiCaL (`bin/cadical`) | MIT | | `LICENSES` | OK |
| Linux: `libc++.so.1`, `libc++abi.so.1`, `libunwind.so.1` | Apache-2.0 WITH LLVM-exception | | `LICENSES` (LLVM) | OK |
| Linux: `libatomic.so.1` | GPL-3.0-or-later WITH GCC-exception-3.1 | | not included (none required for the runtime exception) | OK |
| Windows: `libc++.dll`; MinGW-w64 CRT startup code linked into the executables | Apache-2.0 WITH LLVM-exception; MinGW-w64 runtime (public domain / ZPL-2.1) | `objdump`, `strings` | LLVM in `LICENSES`; MinGW-w64 not | Minor gap (upstream's) |
| OpenSSL | — | not linked into these binaries (only its version constant) | — | n/a |

Licence field (current source): `Apache-2.0 AND (LGPL-3.0-or-later OR GPL-2.0-or-later)
AND MIT` plus, per platform, `Apache-2.0 WITH LLVM-exception`, `GPL-3.0-or-later WITH
GCC-exception-3.1` (Linux) or `ZPL-2.1` (Windows). Was `SEE LICENSE IN README.md`
with no licence in the README.

### 3.3 `@lasm/lean-core-init`, `-core-std`, `-ext-meta`, `-ext-elab`, `-ext-rest`

Lean's `.olean`/`.ir` module data and `.lean` sources, byte-identical to every
upstream platform archive. Apache-2.0; `lasm-notices/<archive>/LICENSE` and NOTICE.
Lean's repository has no NOTICE file, so Apache §4(d) adds nothing. **OK**; field now
`Apache-2.0`.

### 3.4 `@lasm/emscripten-<platform>` (`6.0.9-lasm.1`)

Unmodified subset of emsdk's `wasm-binaries` (clang, lld/wasm-ld, llvm-nm,
llvm-objcopy, wasm-opt, wasm-emscripten-finalize, wasm-metadce, clang resource
headers), with `lasm-notices/` holding the LLVM, clang, lld and Binaryen licences
(emsdk ships none) and a NOTICE naming the source commits.

| Component | Licence | Status |
| --- | --- | --- |
| LLVM tools and headers (llvm-project b158b0a) | Apache-2.0 WITH LLVM-exception | OK |
| Binaryen (d03c25e) | Apache-2.0 | OK |
| Linux: libstdc++/libgcc statically linked by upstream (no `libstdc++.so` NEEDED) | GPL-3.0-or-later WITH GCC-exception-3.1 | OK (exception: no obligation) |
| Windows: Microsoft C/C++ runtime statically linked by upstream (imports only KERNEL32 etc.) | Visual Studio redistribution terms | Lawyer (low) |
| System libraries (glibc, zlib, …) | dynamic, not shipped | n/a |

Field now `Apache-2.0 WITH LLVM-exception AND Apache-2.0` (+ GCC exception on Linux).

### 3.5 `@lasm/emscripten-shared` (`6.0.9-lasm.1`)

Emscripten's JavaScript compiler subset (`emscripten/`), acorn, acorn-import-phases,
terser, `LICENSE`, `AUTHORS`, every `system/**/LICENSE*`, and a prebuilt wasm64
sysroot (18 PIC libraries: libc-mt (musl + Emscripten), libc++, libc++abi,
libunwind, compiler-rt builtins, mimalloc, libsockets, libGL, libal, libhtml5,
libstubs, …). Lasm changed `src/lib/libdylink.js`, `src/lib/libpthread.js`,
`emscripten-version.txt`, `system/lib/emmalloc.c` and `system/lib/pthread/pthread_create.c`
(recorded in `src/sdk-repairs.json`; the NOTICE names them; MIT/NCSA require no
change notice). Licences: `MIT OR NCSA` (Emscripten), MIT (musl, mimalloc, acorn),
Apache-2.0 WITH LLVM-exception (LLVM runtimes), BSD-2-Clause (terser). **OK**; field now
`(MIT OR NCSA) AND MIT AND Apache-2.0 WITH LLVM-exception AND BSD-2-Clause`.

### 3.6 `@lasm/lean-c-<platform>` (C tier, `lean-4.35.0-c-v1`; packaged by the parallel agent, `ee06055`)

Contents (`tar -t`): Lean's clang, ld.lld/ld64.lld, llvm-ar, `libLLVM`,
`libclang-cpp`, `libc++`, `libc++abi`, `libunwind`, compiler-rt, `include/lean`
(including `mimalloc.h`), `lib/libgmp.a` (6.3.0), `lib/libuv.a` (1.48.0),
`lib/libssl.a` + `lib/libcrypto.a` (**OpenSSL 3.6.0**), clang resource headers from
LLVM 23.1.0; Linux: `lib/glibc/*` link stubs, crt objects (`crt1.o`, `Scrt1.o`, …),
`libz.so` (zlib 1.2.11), `libgcc_s`, `libatomic`, and glibc 2.35 + Linux 5.15 UAPI
headers from Ubuntu 22.04 `.deb`s; Windows: MinGW-w64 headers, CRT and import
libraries, winpthreads, `zlib1.dll`; macOS: `lib/libc/libSystem.tbd` (Apple SDK
text stub) and `lib/libc/libc++.dylib` (LLVM).

| Obligation | How met | Status |
| --- | --- | --- |
| Apache/LLVM, MIT, BSD, Zlib notices | npm package `licenses/` (archive's `lasm-notices/`, Lean's `LICENSE`/`LICENSES`, libuv) | OK in the npm package |
| The release archive itself | had **no** Lean `LICENSE`/`LICENSES` (only NOTICE, LLVM licence, Debian copyright files) | Fixed for the next C tier build (`03f742b`); `c-v1` on GitHub lacks them |
| OpenSSL 3.6.0 (Apache-2.0), mimalloc (MIT) not in Lean's `LICENSES` | `openssl-LICENSE`, `mimalloc-LICENSE` in the next C tier build | Fixed: the npm packages add both texts to `licenses/` (`be64a89`, parallel agent); the next C tier build carries them too |
| glibc headers, crt objects, `libc_nonshared.a`: LGPL-2.1-or-later (crt files and `libc_nonshared` carry the LGPL "special exception" for linking) | Debian `copyright` files (full LGPL text referenced to `/usr/share/common-licenses`) and Lean's `LICENSES` (full LGPL-2.1) | OK; source: Ubuntu `glibc 2.35-0ubuntu3` source package; Lawyer (LGPL-2.1 §4/§6 source offer for headers) |
| Linux UAPI headers: GPL-2.0-only WITH Linux-syscall-note | Debian `copyright`; the syscall note says userspace use of the headers is not a derived work. Distributing the headers themselves is GPL-2.0 distribution of source, so the source requirement is met by the files themselves | OK |
| GNU MP `libgmp.a` (LGPL) | text in `LICENSES` | Lawyer (as §3.2) |
| MinGW-w64 headers (ZPL-2.1, some LGPL-2.1 Wine headers, GCC `stdarg.h` with exception), winpthreads (MIT, BSD-3-Clause) | package COPYING files | OK |
| macOS `libSystem.tbd` (Apple SDK stub, redistributed by Lean FRO) | no Apple licence text | Lawyer (low) |

### 3.7 `@lasm/git-<platform>` (`2.53.0-dugite.4`, dugite-native v2.53.0-4, unmodified)

| Platform | Contents | Licence texts in the archive |
| --- | --- | --- |
| linux-x64 | Git 2.53.0 built from source (dynamic against the OS's libcurl/OpenSSL, zlib, expat; none shipped), Git LFS 3.7.1, Git Credential Manager 2.9.0 (self-contained .NET with SkiaSharp/HarfBuzzSharp), `ssl/cacert.pem` | **none** (`libexec/git-core/NOTICE` is GCM's third-party notice) |
| linux-arm64 | Git, Git LFS, cacert.pem (no GCM) | **none** |
| darwin-x64, darwin-arm64 | Git (dynamic against macOS curl, zlib, iconv), Git LFS, GCM (.NET) | **none** besides GCM's NOTICE |
| win32-x64 | Git for Windows MinGit 2.53.0.windows.4: Git, MSYS2 runtime (`msys-2.0.dll`), `usr/bin/sh.exe` (bash), OpenSSH, MinGW-w64 curl, OpenSSL 3, libssh2, PCRE2, expat, zlib, zstd, brotli, nghttp2, libiconv, gettext, libunistring, libpsl, libtasn1, libffi, winpthread, MSYS heimdal/krb5, sasl, sqlite, ncurses, readline, gmp, mpfr, file; Git LFS; GCM with MSAL (`msalruntime.dll`) and .NET libraries | `LICENSE.txt` (GPL-2.0), `mingw64/share/licenses/*`, `usr/share/licenses/*`, GCM LICENSE/NOTICE |

Licences: Git GPL-2.0-only (some LGPL-2.1 parts); Git LFS MIT; GCM MIT; .NET MIT;
`cacert.pem` MPL-2.0; MSYS2/MinGW packages GPL-2/3, LGPL-2.1/3, BSD, MIT, curl,
Apache-2.0 (OpenSSL); `msalruntime.dll` is Microsoft's.

| Obligation | How met | Status |
| --- | --- | --- |
| GPL-2.0 §1: give recipients a copy of the GPL | Linux/macOS archives had none. The package now adds `licenses/git/COPYING` (Git v2.53.0), `licenses/git-lfs/LICENSE.md`, `licenses/git-credential-manager/LICENSE` | Fixed (`8e1a8e5`) |
| GPL-2.0 §3: corresponding source (Git; on Windows also the GPL/LGPL MSYS2 and MinGW pieces) | README names upstream source: git v2.53.0, dugite-native v2.53.0-4 (build scripts, pinned submodule), Git for Windows v2.53.0.windows.4 | **Open** (§7): Lasm received no written offer, so §3(c) is unavailable; links to third-party repositories may not satisfy §3(a)/(b) for Lasm's own distribution |
| `msalruntime.dll` terms (Windows) | not reviewed | Lawyer |

Field: `SEE LICENSE IN README.md`; the README now has the licence section.

### 3.8 `create-lasm` 0.1.0

Lasm code only, MIT, `LICENSE` with copyright Jordan Last (`ee06055`). **OK**.

### 3.9 GitHub release assets (public releases of Millillion/lasm)

| Release | Same contents as | Notes |
| --- | --- | --- |
| `lean-4.35.0-tiers-v1` | §3.2, §3.3 | binaries archives lack mimalloc's licence (fixed for v2) |
| `lean-4.35.0-c-v1` | §3.6 | archives lack Lean's `LICENSE`/`LICENSES`, OpenSSL and mimalloc texts (fixed for v2) |
| `emscripten-6.0.9-lasm-toolchain-v1` | §3.4, §3.5 | OK |
| `lean-4.34.1-tiers-v1` | as 4.35.0 tiers | still public; same mimalloc gap if 4.34.1 links it |
| `windows-arm64-lean-bootstrap-*`, `windows-arm64-sdk-bootstrap-*` (two), `windows-arm64-tool-notices-v1` | Lasm-built Lean 4.34.1 and Emscripten for Windows ARM64 (a removed platform) | still public and **not audited here**. Lasm built these itself, so it is the producer of the GMP-linked Lean binaries. Review or delete them (your decision) |
| Candidate tarballs (`node-linux-candidate-*`, `node-package-*`) | §3.1 | draft releases, visible only to collaborators |

### 3.10 A built application's `dist/`

| Path | Contents | Licences | Notice in `THIRD_PARTY_NOTICES.txt` |
| --- | --- | --- | --- |
| `program.wasm` | Lean 4.35.0 runtime + standard library (patched), Emscripten libc (musl), libc++, libc++abi, libunwind, compiler-rt builtins, mimalloc, libsockets/libGL/libal/libhtml5/libstubs (Emscripten), libuv 1.48.0, **GNU MP 6.3.0 (static)**, Lasm glue, the app's Lean code and its Lake dependencies' Lean and C code | Apache-2.0; MIT OR NCSA; MIT; Apache-2.0 WITH LLVM-exception; LGPL-3.0-or-later OR GPL-2.0-or-later; the app's own | all except the app's and its dependencies' |
| `program.cjs` | Emscripten JS runtime (with Lasm's repairs), Lasm host prelude | MIT OR NCSA; MIT | yes |
| `main.mjs`, `host/*.mjs`, `host/*.cjs` | Lasm host (`lean-io-errors.mjs` embeds libuv's MIT error strings with its notice) | MIT | yes (Lasm's notice: Fixed) |
| `host/native/node_modules/koffi`, `@koromix/koffi-<target>` | koffi 3.3.0 (`koffi.node` for linux-x64, linux-arm64 and the build host) | MIT (+ node-addon-api MIT) | `LICENSE.txt` beside it; node-addon-api added |
| `host/native/{process,signals}` | Lasm helpers (glibc builds deployed) | MIT; musl/Zig notices | `THIRD_PARTY_NOTICES.txt` beside them |
| `node_modules/` (npm interop) | the project's npm packages (e.g. Hono 4.x, MIT, with its `LICENSE`) | each package's | each package's files |

Samples: the trivial app has every row but `node_modules`; the Hono app adds
`node_modules/{hono,@hono/node-server}`; `lean-zip` adds its C files
(`c/io_ffi.c` and four others) and the Lean code of `lean-zip` and `zipCommon`,
whose licences no Lasm notice lists (§11, gap 2).

## 4. Obligations by licence

### 4.1 Apache-2.0 (Lean; LLVM with the LLVM exception; Binaryen; OpenSSL)

- §4(a) licence copy: present in every package (Lean `LICENSE`; LLVM/Binaryen texts
  in `lasm-notices/`; dist notices).
- §4(c)/(d) keep notices; NOTICE files: Lean, LLVM, Binaryen and OpenSSL 3.6.0 ship
  no NOTICE file, so §4(d) adds nothing.
- The LLVM exception waives §4(a), (b) and (d) for runtime pieces compiled into
  object code (libc++, compiler-rt, libunwind in `program.wasm`); the texts are
  included anyway.
- **§4(b) "modified files carry prominent notices"**: Lasm changes Lean's sources
  before building the Wasm runtime. The recorded patches (runtime `target.json`
  `patches`, all in `scripts/full-lean/patches/`):

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

  Also, `scripts/full-lean/configure-host.mjs` renames Lean runtime functions
  (`initialize_libuv`, `lean_io_*` that `runtime/node-*.cpp` implement) to
  `lasm_original_*` at compile time. Older derivation scripts
  (`derive-*-runtime.mjs`) patched 4.34 runtimes; they are not in the 4.35.0
  bundle. **How met:** the dist and CLI notices now list the changes per patch
  (`e03969c`). The only *source* file Lasm ships modified is `include/lean/lean.h`
  in the runtime bundle; the packager now prepends a modification comment
  (`fe1328d`, from the next runtime packaging). The compiled libraries are object
  form, for which the notice file is the practical place.

### 4.2 MIT, BSD, ISC, Zlib, BlueOak-1.0.0, MPL-2.0

Keep the copyright and permission notice in copies. Met by the files listed in §3,
after adding: compiler-rt, libunwind, libuv `LICENSE-extra` (ISC/BSD-2), node-addon-api
(dist and CLI); mimalloc, OpenSSL (next tiers); Git LFS, GCM (Git packages). Zlib only
requires keeping the notice in source distributions. `cacert.pem` is itself the
MPL-2.0 source file.

### 4.3 GNU MP 6.3.0: LGPL-3.0-or-later OR GPL-2.0-or-later

The recipient may choose either. GPL-2.0 would make the whole combined work GPL,
so in practice LGPL-3.0 is the operative choice.

**What LGPL-3.0 requires of whoever conveys a combined work** (§4):
(a) prominent notice that the Library is used and is under the LGPL; (b) a copy of
GPL-3.0 and LGPL-3.0; (c) only if the work shows copyright notices at run time;
(d) either (0) the Minimal Corresponding Source and the Corresponding Application
Code in a form suitable for relinking with a modified Library, or (1) a suitable
shared-library mechanism that uses a copy on the user's system and works with an
interface-compatible modified version; (e) Installation Information, only for
"User Products" (consumer devices; not npm packages or server apps). Conveying the
Library itself (its object code) also needs its source under GPL-3.0 §6, which
LGPL-3.0 incorporates; §6(d) allows the source on a different server with clear
directions, as long as the object code is offered.

| Where GMP is | Who conveys | (a)/(b) | Source of GMP | (d) relinking |
| --- | --- | --- | --- | --- |
| `@lasm/cli` `targets/…/libgmp.a` (the library itself, not a combined work) | Lasm | texts in notices | URL `ftp.gnu.org/gnu/gmp/gmp-6.3.0.tar.xz` + SHA-256 + build recipe in notices | n/a |
| `@lasm/lean-<platform>` `libleanshared` (static) and `@lasm/lean-c-<platform>` `libgmp.a` | Lasm (repackaging Lean FRO's release) | `LICENSES` | Lean FRO's release has no GMP source archive; Lasm names upstream's | Lean's own sources are public (Apache-2.0) and build against any GMP ≥ 6.3.0, so the Corresponding Application Code is available; Lawyer |
| Every built app's `program.wasm` (static) | **each user who distributes an app**, and Lasm when it ships examples | Fixed: notice + texts in `dist/THIRD_PARTY_NOTICES.txt` | named in the notice | **Open (§8)**: the user must provide relinkable application code or a shared-library mechanism; Lasm does not provide either today |

Upstream context: Lean's own release links GMP statically, and Sebastian Ullrich
noted in leanprover/lean4 PR #733 that static linking "is problematic with GMP
because of its LGPL license". Lean FRO publishes no GMP compliance statement.
Native Lean executables have the same property as Lasm apps.

### 4.4 GPL-2.0-only (Git)

§1: give a copy of the GPL with the binaries (now met by `licenses/git/COPYING`).
§3: when distributing object code, also (a) accompany it with the complete
corresponding source "including the scripts used to control compilation and
installation", or (b) give a written offer valid three years to any third party, or
(c) pass on an offer you received (non-commercial only, and only if you got one).
GPL-2.0's last paragraph of §3 accepts "equivalent access to copy the source code
from the same place". The FSF FAQ (AnonFTPAndSendSources, SourceAndBinaryOnDifferentSites)
accepts a different server with clear instructions under GPL-3.0 §6(d), and asks
the source be as easy to reach and kept as long as the binaries; for GPL-2.0 it
advises distributing source the same way as the binaries. dugite-native publishes
no source archives or written offer of its own (its repository pins Git as a
submodule; GitHub's automatic source archives omit submodules). Lasm received no
written offer, so §3(c) is not available. See §7.

### 4.5 LGPL-2.1-or-later (glibc headers, crt objects, link stubs; Windows libiconv, gettext, libtasn1)

The headers and `libc_nonshared.a`/crt objects are shipped as source (headers) or
object code with glibc's linking exception. LGPL-2.1 §4 for object code: accompany it
with the source or a written offer. Corresponding source: Ubuntu's `glibc
2.35-0ubuntu3` source package (Launchpad). The C tier NOTICE names the binary
`.deb`s, not the source package. Lawyer: whether headers plus crt objects trigger a
source obligation and whether naming Launchpad suffices.

### 4.6 GPL-2.0-only WITH Linux-syscall-note (Linux UAPI headers)

The note states that user programs using the kernel's syscall headers are not
derived works. The headers are distributed in source form, which is their own
corresponding source; the Debian `copyright` file carries the licence. **OK.**

### 4.7 GCC Runtime Library Exception (libstdc++/libgcc in LLVM tools; libatomic, libgcc_s)

The exception permits propagating the compiled "Target Code" under any terms; no
notice duty. Shipping `libgcc_s.so`/`libatomic.so` themselves is GPL-3.0 WITH the
exception; their source is GCC's. Lawyer (low).

### 4.8 Attribution in docs

README "Licenses" (rewritten) names Lasm's licence, what a `dist/` contains and the
users' GMP duty, the tool packages' licence files, Git's GPL and the trademark
disclaimer, and links here. Each tool package README now has a licence table.

## 5. Lasm's own notice in built apps

MIT requires the copyright and permission notice in "all copies or substantial
portions". Every `dist/` contains Lasm's host (`main.mjs`, `host/*`), its prelude in
`program.cjs` and its runtime glue in `program.wasm`, so apps must carry Lasm's
notice. **Implemented** (`e03969c`): `dist/THIRD_PARTY_NOTICES.txt` starts with a
summary of the components, then `=== Lasm ===` with the MIT licence (copyright
Jordan Last; `src/notices/LASM-LICENSE.txt`, tested to equal `LICENSE`). Users who
redistribute keep that file; nothing else is needed for Lasm's part.

Optional, for you to decide: Lasm could license the generated host and runtime
glue under a no-attribution licence (0BSD, or an output exception like GCC's) so
that users owe no notice for Lasm's part. The third-party notices would still be
required.

## 6. Trademark

Lean FRO's policy (https://lean-lang.org/trademark-policy, last modified
2026-03-11) says "The Lean name and logos are trademarks of Lean FRO". It permits
without approval using the name "in the name of packages or code repositories"
when referring to use with or compatibility with Lean, and distributing versions
whose changes are limited to "porting to a different platform, architecture, or
system" or packaging integration. Every use must not look official, affiliated or
endorsed, and the policy asks for the mark as an adjective. Written permission is
needed for other modified versions that are called Lean and for using the mark
within another trademark. It prescribes no disclaimer wording.

Findings:
- `@lasm/lean-<platform>`, `@lasm/lean-core-*`, `@lasm/lean-ext-*`,
  `@lasm/lean-c-<platform>`: unmodified Lean files repackaged for npm, in Lasm's
  scope, described as "… for Lasm". This fits "use with" naming and packaging
  integration; **renaming (e.g. `@lasm/toolchain-lean-*`) is not required**.
- The Wasm runtime is a modified Lean runtime. It is not published under a Lean
  name (it lives in `@lasm/cli` `targets/lean-4.35.0-wasm64`), and the notices call
  it "Lean 4.35.0 runtime … modified by Lasm". Lasm's changes are mostly porting
  to wasm64/Node, which the policy allows; if in doubt, ask contact@lean-fro.org.
- "Lasm" itself does not contain "Lean". Avoid "official" and the Lean logo.
- **Added** (`db5ff47` in package READMEs; README in the audit commit): "The Lean name and logos are trademarks of Lean
  FRO. Lasm is not affiliated with or endorsed by Lean FRO."

## 7. Decision for you: Git

Facts:
- Lasm provisions Git for every Lake project (`src/application-build.mjs`:
  `project ? provisionGit(…)`), from `@lasm/git-<platform>` (npm) or dugite-native's
  GitHub release (direct download).
- Lake 4.35 needs Git for: `require … from git` and Reservoir (`require "scope" / "name"`)
  dependencies (clone, fetch, checkout in `Lake/Load/Materialize.lean`); `lake update`;
  and the GitHub release build cache (`Lake/Build/Package.lean`). `lake new`/`init`
  run `git init` but only warn when it fails. Projects without Git dependencies
  (single files, path dependencies) do not need Git. Most real Lake projects
  (Batteries, Aesop, Mathlib, anything from Reservoir) do.
- Lasm's prerequisite is Node/npm only. macOS's `/usr/bin/git` is a stub until the
  Xcode Command Line Tools are installed; Windows has no Git by default.

| Option | What it takes | Consequences |
| --- | --- | --- |
| **A. Keep `@lasm/git-*` with full GPL compliance** | Publish, next to the binaries and for as long as they are distributed (plus 3 years if relying on an offer), the exact corresponding source: `git-2.53.0` source, dugite-native v2.53.0-4 with its submodule and build scripts; for Windows, Git for Windows v2.53.0.windows.4 and the MSYS2/MinGW-w64 source packages of every GPL/LGPL component in MinGit (msys2-runtime, bash, OpenSSH, readline, gmp, mpfr, libiconv, gettext, libunistring, …). E.g. a `git-2.53.0-dugite.4-sources` GitHub release linked from each package README, or a written offer. | Node/npm-only workflow kept. Ongoing upkeep per Git update; the Windows source set is large. Safest compliant version of today's design. |
| **B. Don't redistribute; download from dugite-native** (`build.mjs --no-git`; the GitHub-download path already exists) | Remove `@lasm/git-*`; Lasm fetches dugite-native's own release asset on first use | Lasm no longer distributes Git, so GPL §3 duties are dugite-native's (lawyer to confirm). Not npm-only for Git: needs github.com access and bypasses the user's npm registry/proxy. |
| **C. Use the system `git`** | Require `git` on PATH for Lake projects with Git dependencies | No Git distribution at all. Breaks "Node/npm only" for most Lake projects, especially on Windows and fresh macOS. |
| **D. Hybrid: system `git` if present, else B** | Detect, then fall back | Smallest burden; two code paths to test. |

## 8. Decision for you: GNU MP in built apps

Facts:
- Lean 4.35.0 supports building without GMP: `option(USE_GMP "USE_GMP" ON)` in
  `src/CMakeLists.txt`; `-DUSE_GMP=OFF` uses Lean's own bignum code
  (`src/runtime/mpn.cpp`, `mpz.cpp` "NON GMP VERSION"). Lean's configure message
  calls it "safest; some performance cost". Lasm's older 32-bit Wasm builds already
  used `-DUSE_GMP=OFF` (`scripts/full-lean/build.mjs`).
- The built-in implementation uses 32-bit digits (`typedef unsigned int mpn_digit`)
  and schoolbook multiplication and division (no Karatsuba/Toom/FFT). Small numbers
  are unaffected (Lean keeps them unboxed); large-number arithmetic is much slower
  than GMP and the gap grows with size. Not measured here.
- Upstream tests: Lean's CI matrix has the only `USE_GMP=OFF` jobs (Linux 32-bit,
  Web Assembly) commented out, so the non-GMP path is not continuously tested
  upstream at 4.35.0.
- `.olean`/compacted-region compatibility: the `.olean` header records "whether
  persisted bignums use GMP or Lean-native encoding" and `module.cpp` rejects files
  whose flag differs. A non-GMP Wasm runtime cannot read module data written by
  the official (GMP) native Lean. Lasm's AOT apps don't load module data at run time
  by policy (`requiresModuleData: false`), so this matters only for module-data
  features, which are unsupported today.
- Removing GMP from the Wasm runtime does **not** remove GMP from the tool packages
  (`@lasm/lean-<platform>`'s `libleanshared`, the C tier's `libgmp.a`); those stay
  as in Lean FRO's own release.
- Lasm already supports dynamic linking of Wasm side modules (link mode
  `static`/`dynamic` in `build-info.json`).

| Option | What it takes | Consequences |
| --- | --- | --- |
| **A. Keep static GMP; users comply** | Done: notice and texts in every `dist/`. Document that distributors must give recipients relinkable application code (§4(d)(0)), e.g. the app's object files plus Lasm's runtime libraries and link recipe, or source | Fastest bignums, no change. The duty falls on every user who conveys a `dist/` to others (running it on one's own server is not conveying under LGPL-3.0/GPL-3.0's definitions; lawyer to confirm). Many users will not know to do it. |
| **B. Keep GMP as a separate replaceable Wasm module** (§4(d)(1)) | Link GMP as an Emscripten side module (`gmp.wasm`) loaded at start; users can replace it | Removes the relinking duty for users while keeping GMP speed (lawyer to confirm a bundled side module counts as a "suitable shared library mechanism"). Engineering and a new gate; small call overhead. |
| **C. Build the Wasm runtime with `-DUSE_GMP=OFF`** | Rebuild the runtime and re-run the gates | No LGPL code in apps; users owe only permissive notices. Slower big numbers; a code path upstream does not CI-test; incompatible with GMP-encoded module data. |
| **D. Ship a relink kit in `dist/`** | Lasm writes the app's objects and a link script next to `program.wasm` (§4(d)(0)) | Users comply by keeping it; `dist/` grows (Lean runtime archives are hundreds of MB unless only the linked objects are kept). |

## 9. For a lawyer

1. GNU MP in apps: does a statically linked `program.wasm` with the notice
   suffice only with §4(d)(0) material, and would a bundled replaceable Wasm side
   module satisfy §4(d)(1)? What must Lasm tell its users?
2. GNU MP in Lasm's redistribution of Lean FRO's binaries (`libleanshared`, C
   tier `libgmp.a`) and of `libgmp.a` in `@lasm/cli`: is naming the upstream source
   URL plus Lean's public source enough, or must Lasm host GMP 6.3.0's source
   itself (GPL-3.0 §6)?
3. Git: which of §7's options meets GPL-2.0 §3 for npm distribution; whether links
   to upstream repositories satisfy §3 for Lasm; what the Windows MinGit source
   set must include; whether option B makes Lasm a distributor.
4. The `@lasm/cli` licence field: `MIT` with a notices file, or an SPDX conjunction
   of the bundled components.
5. LGPL-2.1 glibc headers, crt objects and `libc_nonshared.a` in the C tier: is a
   source pointer (Ubuntu glibc 2.35-0ubuntu3) needed and sufficient?
6. Third-party terms without an open-source licence: Apple's `libSystem.tbd` (macOS
   C tier), the statically linked Microsoft C runtime (Windows LLVM tools), and
   `msalruntime.dll` in dugite-native's Windows Git.
7. Trademark: confirm that the `@lasm/lean-*` names, the modified Wasm runtime and
   the disclaimer meet Lean FRO's policy, or ask contact@lean-fro.org.
8. The still-public Windows ARM64 bootstrap releases (Lasm-built Lean with GMP and
   Emscripten): keep with full compliance, or delete.
9. Whether Lasm's own MIT notice should be waived for generated output (§5).

## 10. Fixes made

| Commit | Change | Effect |
| --- | --- | --- |
| `6976328` | `LICENSE`: copyright Jordan Last (year kept) | `@lasm/cli`, repository |
| `e03969c` | `dist/THIRD_PARTY_NOTICES.txt` and the CLI's: component summary, Lasm's MIT notice, Apache §4(b) list of Lean changes, GNU MP LGPL notice with source and recipe, compiler-rt, libunwind, libuv `LICENSE-extra`, node-addon-api texts (`src/notices/`, `src/notices.mjs`, test) | every build from current source; next candidate |
| `fe1328d` | Runtime packager prepends a modification comment to the shipped `lean.h` | next runtime packaging |
| `03f742b` | Lean tiers: `mimalloc-LICENSE` in binaries archives; C tier carries Lean's `LICENSE`/`LICENSES`, libuv, mimalloc and OpenSSL 3.6.0 texts | next tiers/C tier release |
| `8e1a8e5` | npm tool packages: SPDX `license` fields and README licence tables; Git packages add `licenses/` (Git COPYING, Git LFS, GCM) and a source section | next npm-dist build |
| `db5ff47` | Lean trademark disclaimer in the `@lasm/lean-*` package READMEs (and, in this commit, the repository README) | next npm-dist build |
| (this commit) | this audit; README "Licenses" rewritten | docs |

The C tier npm packaging (parallel agent: `ee06055`, `be64a89`) adds Lean's
`LICENSE`/`LICENSES`, libuv's, OpenSSL's and mimalloc's licences in `licenses/`
and an SPDX field.

## 11. Remaining gaps

1. **Git corresponding source** (§7): not provided by Lasm.
2. **Lake dependencies' licences in `dist/`**: the Lean and C code of a project's
   Lake dependencies (e.g. lean-zip, Batteries) is compiled into `program.wasm`,
   but their `LICENSE` files are not copied. Recommended: copy each dependency's
   licence files from `.lake/packages/<name>/` into `dist/licenses/<name>/` and
   list them in the notices.
3. **GMP relinking for users** (§8).
4. Released archives `lean-4.35.0-tiers-v1` (mimalloc text) and `lean-4.35.0-c-v1`
   (Lean licences, OpenSSL and mimalloc texts) predate the fixes; the C tier npm
   packages cover all of them in `licenses/` (`ee06055`, `be64a89`), the GitHub
   assets do not. Rebuild as
   `tiers-v2`/`c-v2` before or after 0.1.0 (new package versions).
5. The current runtime bundle's `lean.h` has no modification comment until the
   runtime is packaged again; candidate `.58` lacks every dist-notice fix until a
   new candidate is built from current source.
6. MinGW-w64 CRT notice for the startup code in Lean's Windows executables
   (upstream gap; low).
7. The C tier NOTICE names glibc's binary `.deb`s, not its source package.
8. Windows ARM64 releases still public and unaudited (§3.9).
