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

## Phase 1 status (2026-10-16)

Implemented in source; **not yet in an accepted candidate**. Released candidates
still download the complete upstream Lean archive.

- **Maintainer repackager:** [`scripts/lean-dist/build-tiers.mjs`](../scripts/lean-dist/build-tiers.mjs)
  checks the pinned archive's SHA-256 and writes one binaries archive per platform
  and five shared data archives. The binaries are `lean`, `lake`, `leanir`,
  `cadical`, the Lake plugin, and the shared libraries their own ELF/Mach-O/PE
  load commands name (Linux also needs `libc++`, `libc++abi`, `libunwind` and
  `libatomic` for `cadical`). Each archive carries `LICENSE`, a `NOTICE` with
  the upstream URL, digest and sources, and on binaries `LICENSES` plus the
  missing libuv licence (the archives record libuv 1.48.0 on Linux and 1.52.1
  on macOS and Windows; the bundled text is libuv 1.48.0's `LICENSE` and
  `LICENSE-extra`). Entries are sorted with fixed owner, mode
  (executable bits kept) and mtime; zstd level 19, 2^27 window (Node's default
  decompression limit), long-distance matching. `.ilean`, static libraries,
  `include/`, Lean's clang/LLVM toolchain and `Leanc` data are omitted.
- **Determinism:** each archive is packed twice and compared. The five upstream
  platforms produced byte-identical shared archives in CI, and CI (Node 26.10.0)
  reproduced the local Linux x86-64 bytes (Node 24.13.1).
- **Maintainer workflow:** [`lean-tiers.yml`](../.github/workflows/lean-tiers.yml)
  ([run 38876900984](https://github.com/Millillion/lasm/actions/runs/38876900984))
  repackages all platforms, requires shared-archive equality and the size
  ceiling, runs each platform natively against its complete archive (identical
  generated C for an `import Std` program whose proof runs `bv_decide`, a program
  importing `Lean` through a local module, and a Lake project; Lake loaded as a
  `--plugin`), then retains the archives as public release assets
  ([`lean-4.34.1-tiers-v1`](https://github.com/Millillion/lasm/releases/tag/lean-4.34.1-tiers-v1)).
  All five upstream targets passed natively; only OS libraries remain external
  (glibc on Linux, `libSystem`/`libc++` on macOS, Windows system DLLs and ICU).
- **Product path:** `src/managed-lean.mjs` provisions binaries plus core data and
  hard-links them into one verified prefix under `derived/`, keyed by every
  component identity. Lake projects, directories, and standalone files that
  import a `Lean`/`Lake`/`LeanIR`/`LeanChecker`/`LakeMain` module, directly or
  through local imports (found with Lean's own `--src-deps`), use a second prefix
  that adds the extended data. Cache repair verifies and rebuilds these prefixes
  offline from cached components; old receipts remain readable. Full archives
  remain in the catalog for rollback, maintainer oracles (`distribution: 'full'`)
  and Windows ARM64.
- **Windows ARM64:** Lasm's own native Lean build has module data that differs
  from the upstream archives (4 of 5 shared archives differ), so that platform
  keeps its complete archive. Generated C for the three fixtures was nevertheless
  identical when its binaries used the upstream data ([run 38866478386](https://github.com/Millillion/lasm/actions/runs/38866478386)).

Measured archives for Lean 4.34.1 (bytes):

| Archive | Compressed | Unpacked |
| --- | --- | --- |
| `linux-x64-bin` | 40,565,096 | 249,564,933 |
| `linux-arm64-bin` | 42,461,760 | 272,471,633 |
| `darwin-x64-bin` | 34,482,295 | 198,187,479 |
| `darwin-arm64-bin` | 32,697,075 | 190,665,563 |
| `win32-x64-bin` | 36,516,813 | 225,397,047 |
| `core-init` (Init) | 97,012,715 | 398,324,609 |
| `core-std` (Std) | 74,707,631 | 338,309,791 |
| `ext-meta` (Lean.Meta) | 81,888,090 | 465,800,578 |
| `ext-elab` (Lean.Elab) | 78,432,815 | 443,052,249 |
| `ext-rest` (other Lean, Lake, LeanIR, LeanChecker) | 93,668,179 | 509,186,422 |

An ordinary program's Lean download on Linux x86-64 falls from 580,432,872 to
212,285,442 bytes; Lake projects and programs importing `Lean`/`Lake` add
253,989,084 bytes (466,274,526 in total). Pending: candidate acceptance on all
six native targets and the repeated cold-installation gate.

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

## Phase 2 milestone A (2026-10-16): recorded `emcc` recipe and byte-equality harness

Maintainer tooling only; the product link path is unchanged apart from the
`program.cjs` reproducibility fix below. Recorded on Linux x86-64 (Node 24.13.1)
with the managed, repaired Emscripten 6.0.9 SDK in a dedicated tool cache and the
`.46` Lean 4.34.1 runtime bundle (manifest `4d3d6c60…`).

- [`scripts/link-driver/record-emcc.mjs`](../scripts/link-driver/record-emcc.mjs)
  runs the product's `linkApplication` on copied fixtures (each with its own
  `lean-toolchain`, same work and `.build-<uuid>` layout as `lasm build`). With
  `--debug` it sets `EMCC_DEBUG=1`/`EMCC_VERBOSE=1` and a private temp directory
  per call, and dry-runs each compile with `-###` (exact clang driver and cc1
  commands). Every intermediate and output is kept and hashed.
- [`scripts/link-driver/recipe.mjs`](../scripts/link-driver/recipe.mjs) turns a
  recording into a versioned `recipe.json` with placeholder paths: compile
  commands, both links' em++ arguments, every subprocess emcc ran, the system
  libraries selected and how they were built (flags, sources, archive command),
  settings before/after Wasm metadata, the JS symbol inventory, and intermediate
  hashes. `--combine` compares recipes across fixtures.
- [`scripts/link-driver/compare.mjs`](../scripts/link-driver/compare.mjs)
  compares two runs, fixtures or plain build directories: objects, link maps
  (each side's own absolute roots replaced by placeholders), `program.wasm`,
  `program.cjs`. It reports the first divergence as a text line/column, or a Wasm
  byte offset with its section and function index.

Fixtures: `examples/hello`, `integration/fixtures/FilesystemSurface.lean`,
`TcpErrorPhases.lean` (Std TCP; no Std.Http fixture exists outside Lake
projects) and `BundleFeaturesLegacy.lean` (imports `Lean.Data.Json`, extended
Lean tier). `StandaloneModuleData.lean` is not linkable: the AOT policy rejects
it after the probe link, as designed.

### Recorded recipe

- **Compile (per module, plus `reachability.c` and `initialization.c`)**: one clang
  process. Emcc adds `-target wasm64-unknown-emscripten -fvisibility=default
  -mllvm -combiner-global-alias-analysis=false -mllvm -wasm-enable-sjlj -mllvm
  -wasm-use-legacy-eh -mllvm -disable-lsr --sysroot=<state>/cache/sysroot
  -D__EMSCRIPTEN_SHARED_MEMORY__=1 -Xclang -iwithsysroot/include/fakesdl -Xclang
  -iwithsysroot/include/compat` to Lasm's flags; `-sMEMORY64=1` becomes the triple.
  Objects contain no paths (cc1's `-fdebug-compilation-dir=<cwd>` is inert
  without `-g`). The cc1 command is identical across fixtures except the input
  name.
- **Link (probe `-O0` and final `-Oz -g1`)**: `node compiler.mjs --symbols-only`
  (JS symbol inventory, 1,670 dependency entries, identical for all fixtures),
  a generated stub `libemscripten_js_symbols.so` (identical), `wasm-ld` (92
  arguments plus inputs: `--import-memory --shared-memory --strip-debug
  --unresolved-symbols=import-dynamic --export-table --growable-table -z
  stack-size=67108864 --max-memory=8589934592 --initial-memory=134217728
  --entry=_emscripten_proxy_main --table-base=1`, exports, then Lasm's 10 runtime
  archives and the system libraries), `llvm-objcopy` (removes `producers`,
  `.debug*`, annotations), `wasm-emscripten-finalize --no-dyncalls --bigint
  --check-stack-overflow --detect-features`, metadata extraction (Python), `node
  compiler.mjs` (glue). The final link then runs `wasm-opt --strip-target-features
  --post-emscripten -Oz --low-memory-unused --zero-filled-memory
  --pass-arg=directize-initial-contents-immutable --no-stack-ir` plus explicit
  feature flags, acorn `growableHeap`, `AJSDCE`, `emitDCEGraph`, `wasm-metadce
  --optimize-level=2 --shrink-level=2 --optimize-stack-ir`,
  `applyDCEGraphRemovals`, `AJSDCE`. The probe link stops after `growableHeap`.
- **Same recipe for all four fixtures**: em++ arguments, every subprocess
  command, system inputs and their hashes are identical after replacing input
  paths and Emscripten's random temp names. Settings before and after metadata
  differ only in `PRE_JS_FILES` paths. Glue differs only in Lasm's
  `lasmInitialFunctionTable`, JS functions kept by the metadce graph (for example
  `_lasm_node_start` for TCP, memalign-backed `mmap` for the Lean import) and
  export-assignment order.
- **System libraries (wasm64, PIC, `-sMAIN_MODULE -g -sSTRICT -Werror`, built
  by recursive emcc from the repaired SDK tree)**. Final link:
  `crtbegin-mt.o`, `crt1_proxy_main.o`, `libGL-mt-getprocaddr`, `libal`,
  `libhtml5`, `libc_optz-mt`, `libstubs`, `libc-mt` (1,141 sources, includes
  repaired `pthread_create.c`), `libmimalloc-mt` (includes repaired
  `emmalloc.c`), `libclang_rt.builtins-legacysjlj-mt`, `libc++-mt-legacyexcept`,
  `libc++abi-mt-legacyexcept`, `libunwind-mt-legacyexcept`, `libsockets-mt`
  (about 16 MB). The `-O0` probe uses `-debug` variants of libstubs, libc,
  libc++ and libc++abi. The other `sdk-repairs.json` entries change the Python
  driver (`link.py`, `shared.py`, `utils.py`, `config.py`) or JS libraries
  (`libdylink.js`, `libpthread.js`), which reach the glue through
  `compiler.mjs`.
- **Time (hello, warm cache)**: final link 20.3 s, of which `wasm-opt` 14.4 s,
  `wasm-metadce` 2.7 s, `wasm-ld` 1.4 s, JS compiler about 0.6 s, finalize and
  metadata 0.4 s; the probe link takes about 4 s. Python orchestration is well
  under a second. Real work: clang, wasm-ld, finalize, wasm-opt, metadce,
  compiler.mjs, acorn-optimizer.mjs. Orchestration a Node driver must
  reimplement: argument and settings derivation (`link.py`), system-library
  selection, metadata extraction (`extract_metadata.py`), and ASM_CONSTS, EM_JS
  and export assembly around the JS compiler output.

### Reproducibility

Emscripten labels each `--pre-js` in the glue with the path it was given
(`// include: /…/scripts/full-lean/emscripten-pre.js`, and the random
`.build-<uuid>/application-pre.js`). `linkApplication` now relabels these six
comment lines to basenames before its loader transformations (portable separator
comparison, each label required exactly once; `test/application-link-glue.test.mjs`).
Evidence (all under `.work/link-driver/`):

- `run-plain-a2` and `run-plain-b` (different source and build directories):
  all objects, normalized maps, `program.wasm` and `program.cjs` identical for the
  four fixtures. `run-debug-2` (EMCC_DEBUG) is identical to both, so recording
  does not perturb output.
- The pre-fix recording `run-hello-debug-1` differs from `run-plain-a2` only in
  `program.cjs`, line 49 (`// include: <absolute path>`).
- A copy of the checkout, runtime and tool cache in another directory
  (`relocated/`) rebuilt the system libraries and produced a different
  `program.wasm`: `libmimalloc-mt.a` embeds `__DATE__`/`__TIME__`
  (`mimalloc/src/options.c`), so output depends on when the user's SDK cache built
  it. With `SOURCE_DATE_EPOCH=1700000000` (honored by the pinned clang), two
  independently relocated rebuilds (`run-sde-1`, `run-sde-2`) were byte-identical.
  System-library DWARF also embeds the absolute sysroot include path; wasm-ld's
  `--strip-debug` removes it from the program.

The managed SDK environment now sets `SOURCE_DATE_EPOCH=315532800` (commit
18da3c2; affects newly built caches). Milestone B's reference was recorded with it.

## Phase 2 milestone B (2026-10-16): prebuilt sysroot and Node compile step

Maintainer tooling plus an experimental, non-default compile path; `lasm build`
still compiles and links with `emcc`. Linux x86-64, Node 24.13.1, managed repaired
Emscripten 6.0.9 SDK (driver identity `791ace8e…`). Evidence is under
`.work/link-driver/`; resource reports are the `resources-*.json` files there.

### Reference runtime

The source catalog names runtime manifest `4034cb85…`, a local maintainer build
from September (docs/BUNDLE_SIZE.md) that exists neither on this host nor as a
release asset. Packaging (`scripts/package-node-release.mjs`) rewrites the catalog
to the retained runtime named by `scripts/ci/node-runtime-source.json`, which is
the `.46` runtime `4d3d6c60…`; it is also what the `.48`/`.49` packages are built
from. Milestone B therefore keeps `4d3d6c60…`. Both manifests pin the same Lean
commit and headers; only host-built C++ archive bytes differ.

### Re-recorded reference

`ref-b-debug`: EMCC_DEBUG recording of the four fixtures in a fresh tool state
(`.cache/link-driver/tools-ref`, artifacts hard-linked from the milestone A cache,
no SDK state), so emcc built all 18 system libraries on demand with the product's
`SOURCE_DATE_EPOCH`; every library build command is in its `recipe.json`. Peak
1.23 GiB, 7.7 minutes. Against milestone A's `run-debug-2`, objects, maps and
`program.cjs` are identical; `program.wasm` differs in 117 bytes per fixture, the
mimalloc build date (`Oct 16 2026` before, `Jan  1 1980` now) and the addresses
that follow from it (`compare-debug-2-vs-ref-b.json`).

### Prebuilt sysroot

[`scripts/link-driver/build-sysroot.mjs`](../scripts/link-driver/build-sysroot.mjs)
provisions the managed SDK, runs `embuilder build --wasm64 sysroot` (headers,
installed the same way emcc's first compile installs them) and then
`embuilder build --pic --wasm64` for the 18 libraries listed in the product recipe,
in a private cache (`EM_CACHE`) with the product environment. It packs the result as one
tar.zst whose root (`emscripten-6.0.9-cache-wasm64-pic/`) is a complete Emscripten
cache: `sysroot/` (headers, `lib/pkgconfig`, `bin`, `share/libc++`,
`lib/wasm64-emscripten/libc++.modules.json`, the 18 libraries in `…/pic/`) plus
`sysroot_install.stamp`. Members are sorted, with fixed owner, mode and mtime,
zstd level 19 (the Phase 1 writer in `scripts/lean-dist/tiers.mjs`). Use:
`build-sysroot.mjs --extract ARCHIVE DIR [--read-only]`, then `EM_CACHE=<DIR>/<root>`
and `EM_FROZEN_CACHE=1`; emcc then never builds, locks or writes the cache.

- **Debug sections removed.** Library DWARF names the absolute include
  directory of the cache that built it, so the archive would depend on the build
  path. Every library is stored after `llvm-objcopy --strip-debug`; nothing else
  in the libraries contains a path. Lasm's links always use
  `wasm-ld --strip-debug`, and the gates below show identical outputs.
- **Same libraries as emcc.** For all 18 libraries, the stripped form of the
  library emcc built on demand in `ref-b-debug` equals the archived one byte for
  byte; the sysroot headers equal emcc's installed tree (`diff -r`).
- **(a) Determinism:** built twice from scratch in different directories
  (`sysroot-b3`, `sysroot-b4`): identical archives, SHA-256 ``b8fd589b…``.
  An earlier pair (`sysroot-b1`/`-b2`, `e0c35fe5…`, 2,690,723 bytes) was also identical; it
  installed the headers under `--pic`, which put `libc++.modules.json` under `pic/`
  and so omitted it (irrelevant to C, fixed).
- **(b) Equality through FROZEN_CACHE:** emcc with the extracted, read-only
  archive reproduces the reference exactly for all four fixtures: objects, both
  maps (paths normalized), `program.wasm`, `program.cjs` (`frozen-emcc-2`,
  `compare-ref-b-vs-frozen-emcc-2.json`; also `frozen-emcc` with `sysroot-b1`).
- **(c) Size:** 2,692,922 bytes compressed (28,869,120 bytes tar, 1,735 files).
  The 18 libraries are 29.5 MB with DWARF (as emcc builds them) and 7.9 MB stripped. Build: about
  4 minutes, peak 0.37 GiB.

### Node compile step

[`src/link-driver/compile.mjs`](../src/link-driver/compile.mjs) runs the SDK's
`clang` directly. All Emscripten knowledge is data in the checked-in
[`src/link-driver/recipe-emscripten-6.0.9.json`](../src/link-driver/recipe-emscripten-6.0.9.json),
written by `scripts/link-driver/recipe.mjs --derive OUT RUN [SYSROOT_MANIFEST]`
from the recording. Derivation fails unless every compile of every fixture reduces
to one template that reproduces each recorded clang driver command exactly:

- `compile.emccFlags`: the emcc flags the recording covers (Lasm's own). Any other
  flag set is rejected rather than guessed; `-I` values are free.
- `compile.driver`: `-target wasm64-unknown-emscripten -fvisibility=default`,
  four `-mllvm` flags, `--sysroot=<sysroot>`, `-D__EMSCRIPTEN_SHARED_MEMORY__=1`,
  `-Xclang -iwithsysroot/include<sep>fakesdl`, `-Xclang -iwithsysroot/include<sep>compat`,
  then `<flags>`.
- `compile.translation`: emcc consumes `-sMEMORY64=1` and joins `-l -L -I -z -o
  -x -u` with their values (`tools/cmdline.py normalize_args`).
- `compile.env`: `SOURCE_DATE_EPOCH=315532800`; the rest is the SDK environment.

Windows by construction: `clang.exe` via `executableName`, `win32` path joining
for the program, and `<sep>` = `\\` because emcc builds `-iwithsysroot` with
Python's `os.path.join`. Objects contain no paths, so separators cannot change
bytes. Only Linux was run.

`linkApplication` takes `compileDriver: 'emcc' | 'node'`, defaulting to the internal
`LASM_LINK_DRIVER` variable (unset means `emcc`). With `node`, the modules,
`reachability.c` and `initialization.c` are compiled by clang and emcc still runs
both links. The sysroot is `EM_CACHE` (a prebuilt cache) or the SDK state's cache,
and must already be installed. The recorder takes `--compile-driver node` and
`--frozen-cache DIR`.

Gates, each for all four fixtures against `ref-b-debug` (`compare.mjs`, 7 files per
fixture: three objects, two maps, `program.wasm`, `program.cjs`):

| Run | Compile | Cache | Result |
| --- | --- | --- | --- |
| `frozen-emcc-2` | emcc | prebuilt, read-only | identical |
| `frozen-node-2` | Node/clang | prebuilt, read-only | identical |
| `state-node` | Node/clang | SDK state cache | identical |
| `frozen-emcc`, `frozen-node` | as above | `sysroot-b1` | identical |

Each full four-fixture run peaked at 1.07 GiB. Unit tests (`test/link-driver-compile.test.mjs`, no SDK) cover recipe validation,
flag translation and rejection, the recorded hello command, Windows forms,
frozen-cache sysroot selection, the driver switch and archive member selection.
The installer fault suite passed under the guard (151 passed, 3 skipped, 0 failed;
`.work/link-driver/installer-faults-b-1792158515.json`).

### Plan for milestone C: link, metadata and glue in Node

Inputs: the recorded `em++` arguments and pipeline (`recipe.json` `links[].pipeline`),
the prebuilt sysroot, and the SDK's `wasm-ld`, `llvm-objcopy`, Binaryen and
Emscripten JavaScript. Each step is gated on the recorded hash of its
intermediate, in order, for the probe and the final link of all four fixtures:
`emcc-00-settings.json`, `01-base.wasm`, `02-strip.wasm`,
`03-wasm-emscripten-finalize.wasm`, `04-settings.json`, `05-original.js`, then (final)
`06-wasm-opt.wasm`, `07-byn.wasm`, `08-growableHeap.js`, `09-preclean.js`,
`10-preclean.wasm`, `11-AJSDCE.js`, `12-wasm-metadce.wasm`,
`13-applyDCEGraphRemovals.js`, `14-AJSDCE.js`, `15-postclean.js/.wasm` and the
final `program.wasm`/`program.cjs`. Run with EMCC_DEBUG reference intermediates
from the same frozen cache.

1. **Settings.** Port the `link.py` settings derivation for Lasm's fixed flag set
   as recipe data: record `emcc-00-settings.json` with placeholders and fill in
   only the input-dependent values (`EXPORTED_FUNCTIONS`, `PRE_JS_FILES`,
   `JS_LIBRARIES`, paths). Gate: identical `00-settings.json`.
2. **JS symbol inventory.** `node compiler.mjs --symbols-only` on that settings
   file; generate the stub `libemscripten_js_symbols.so` from it (identical across
   fixtures). Gate: recorded inventory hash and stub bytes.
3. **wasm-ld.** The recorded 92 arguments with exports, Lasm's runtime archives
   and the system library paths from the prebuilt cache. Gate: `01-base.wasm`
   and both maps.
4. **llvm-objcopy, wasm-emscripten-finalize.** Recorded arguments. Gate: `02`,
   `03`.
5. **Metadata.** Port `extract_metadata.py` (imports, exports, `em_asm` and `em_js`
   strings, features, main-reads-params) to Node over the finalized Wasm, and
   apply it to the settings. Gate: `04-settings.json`.
6. **Glue.** `node compiler.mjs` on those settings, then the `emscripten.py`
   assembly around its output: ASM_CONSTS, EM_JS functions, export wrappers and
   assignment order, `--pre-js` inclusion and labels. Gate: `05-original.js`.
7. **Final link only.** `wasm-opt` with the recorded flags (`06`, `07`), then
   acorn `growableHeap`, `emitDCEGraph`, `wasm-metadce`, `applyDCEGraphRemovals`,
   `AJSDCE` in recorded order (`08`–`15`). The probe link stops after
   `growableHeap`. Gate: every intermediate, then `program.wasm`/`program.cjs`
   after Lasm's post-link transformations.

Python leaves the user path only when steps 1–7 pass for all four fixtures with
emcc absent. Debug recordings are needed for steps 1, 5 and 6, where emcc's
behavior is defined by code rather than a command line.

### Plan for milestone D: minimal toolchain

Ship clang, wasm-ld, llvm-objcopy and Binaryen tools per platform, and the
prebuilt sysroot plus Emscripten's `src/` and `tools/*.mjs` JavaScript as a
shared catalog artifact. Remove Python and the SDK from the user path. Validate
with a new candidate on all six native platforms, including identical outputs
across platforms.
