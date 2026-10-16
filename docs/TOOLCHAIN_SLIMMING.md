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
  remain in the catalog for rollback and maintainer oracles (`distribution: 'full'`).
- **Windows ARM64** (removed 2026-10-16): Lasm's own native Lean build had module
  data differing from upstream, so it kept a complete archive. Neither Lean nor
  Emscripten publishes Windows ARM64 prebuilts; the platform is no longer supported.

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
five supported targets and the repeated cold-installation gate.

## Phases

Each phase ships only after a new packed candidate passes the five-platform
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
   exact fix. Validate with a local Verdaccio registry on all five native runners.
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

In milestone B, `linkApplication` took `compileDriver: 'emcc' | 'node'` (internal
`LASM_LINK_DRIVER`, unset means `emcc`); with `node` the modules, `reachability.c` and
`initialization.c` were compiled by clang and emcc still ran both links. Milestone C
renamed this mode `node-compile` (`linkDriver`, recorder `--link-driver node-compile`;
the old `--compile-driver node` still maps to it) and gave `node` the full Node link.
The sysroot is `EM_CACHE` (a prebuilt cache) or the SDK state's cache, and must
already be installed. The recorder takes `--frozen-cache DIR`.

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

## Phase 2 milestone C (2026-10-16): link, metadata and glue in Node

Experimental when written; milestone D (below) made `node` the default. At milestone C `lasm build` still compiled and linked with emcc.
With the internal `LASM_LINK_DRIVER=node`, `linkApplication` compiles with clang
(milestone B) and performs both the `-O0` reachability probe link and the final
`-Oz -g1` link without emcc, em++ or Python. Linux x86-64, Node 24.13.1, managed
repaired Emscripten 6.0.9 SDK (driver identity `791ace8e…`), prebuilt sysroot
`b8fd589b…` (`sysroot-b3`), runtime `4d3d6c60…`. Evidence is under `.work/link-driver/`.

### Reference

`ref-c-debug`: EMCC_DEBUG recording of the four fixtures with the frozen prebuilt
cache (`record-ref.sh ref-c-debug --debug --frozen-cache …`; 1.13 GiB peak, 3.5 min).
Its objects, maps, `program.wasm` and `program.cjs` equal `ref-b-debug`
(`compare-ref-b-vs-ref-c.json`), and so does every Wasm intermediate; settings
and JS intermediates differ only in the recording's build-directory paths.

### Implementation

All Emscripten knowledge is data in the versioned recipe
[`recipe-emscripten-6.0.9.json`](../src/link-driver/recipe-emscripten-6.0.9.json)
(schema 2, new `link` section) plus
[`native-sigs-emscripten-6.0.9.json`](../src/link-driver/native-sigs-emscripten-6.0.9.json)
(`tools/native_sigs.py` as data, 1,788 entries, hash-checked against the recipe).
`scripts/link-driver/recipe.mjs --derive OUT RUN SYSROOT_JSON` writes both from a
recording ([`derive-link.mjs`](../scripts/link-driver/derive-link.mjs)); it fails
unless every fixture's probe and final link reduce to one template per mode:

- `link.modes.{probe,final}.emccFlags`: Lasm's em++ flags other than inputs,
  `--pre-js`, `--js-library` and `-o`. Any other flag set is rejected.
- `settings`: `emcc-00-settings.json` with placeholders for `USER_EXPORTS`,
  `EXPORTED_FUNCTIONS` (the user list without `_main`, which emcc turns into
  `EXPORT_IF_DEFINED=main`), `PRE_JS_FILES` and the `JS_LIBRARIES` paths.
  Derivation re-serializes each recorded file with the driver's Python-compatible
  `json.dumps(sort_keys=True, indent=2)` and requires byte equality.
- `pipeline`: every subprocess emcc ran, in order, as argument templates
  (`<wasm>`, `<stub>`, `<exports>`, `<export-if-defined>`, `<inputs>`,
  `<syslib>`, `<emscripten>/…`, `<features>`, `<js>`, `<js-out>`, `<info>`,
  `<graph>`). The `--export` lists the driver computes must equal the recorded ones.
- `settingsDefaults`: `src/settings*.js` defaults of the 85 settings the driver
  reads or writes (`Settings.external_dict()` omits default values).

Modules under [`src/link-driver/`](../src/link-driver/):
[`python.mjs`](../src/link-driver/python.mjs) (Python `json.dumps` escaping and
key order, `==`, truthiness, universal newlines, `isidentifier`, `strip`),
[`wasm.mjs`](../src/link-driver/wasm.mjs) (the reader parts of `tools/webassembly.py`),
[`metadata.mjs`](../src/link-driver/metadata.mjs) (`tools/extract_metadata.py`,
including passive-segment offsets from the start function),
[`settings.mjs`](../src/link-driver/settings.mjs) (settings template and
`external_dict`), [`glue.mjs`](../src/link-driver/glue.mjs) (`emscripten.py`:
`finalize_wasm` export bookkeeping, `update_settings_glue`, ASM_CONSTS, EM_JS,
`create_receiving`/`create_sending`, invoke and Memory64 pointer wrappers, static
code hooks; `js_manipulation.py` license removal) and
[`link.mjs`](../src/link-driver/link.mjs) (`tools/link.py`/`building.py`
orchestration: JS symbol inventory and `REQUIRED_EXPORTS`, stub
`libemscripten_js_symbols.so`, wasm-ld through an Emscripten-format response file,
`llvm-objcopy`, `wasm-emscripten-finalize`, metadata, `compiler.mjs` glue,
`wasm-opt`, acorn passes, metadce graph roots/WASI modules and removals, final
license handling). Settings that select unported branches (side modules,
MODULARIZE, ASYNCIFY, wasm2js, closure, source maps, other memory modes, …) throw;
`linkApplication` rejects memory mode 2 in `node` mode (not recorded).

Windows by construction (only Linux was run): tool names through
`executableName` (`wasm-ld.exe`, …), `win32` path joining for every path
placeholder, response files quoted as `tools/response_file.py` does on Windows
(no `'` escaping), all JS written with LF. emcc's Windows text-mode writes are not
reproduced: the Node driver's intermediates are the Linux bytes on every host.

### Step gates

[`gate-link.mjs`](../scripts/link-driver/gate-link.mjs) replays each recorded em++
link of `ref-c-debug` through `linkWithNode` on the recorded inputs and compares
every `emcc-NN-*` intermediate, then the emitted `program.wasm`, `program.cjs`
(before Lasm's post-processing) and the link map (paths normalized).
`gate-c2`: all 8 links IDENTICAL, 120 files (10 per probe link, 20 per final link):

| Step (task order) | Intermediates | Result |
| --- | --- | --- |
| 1 settings | `00-settings.json` (both modes, 8 links) | identical |
| 2 JS symbols | stub `libemscripten_js_symbols.so` (compared by hand) | identical |
| 3 wasm-ld, objcopy, finalize | `01-base`, `02-strip`, `03-wasm-emscripten-finalize`, maps | identical |
| 4 metadata | `04-settings.json` | identical |
| 5 glue | `05-original.js` | identical |
| 6 Binaryen/acorn | probe `06-growableHeap.js`; final `06-wasm-opt` … `16-postclean.wasm` | identical |
| 6 temporaries | `emcc_dce_graph_*.json`, both `emcc_acorn_info_*.js` | identical |
| emitted | `program.wasm`, `program.cjs`, `reachability.map`/`final.map` | identical |

Peak 0.93 GiB for all eight links (`resources-gate-c2.json`); final links 19.7–25.5 s,
probe links about 3 s, comparable to emcc's 20.3 s and 4 s.

End to end (step 7), `node-c-1`: `record-emcc.mjs --link-driver node --frozen-cache …
--debug --package` (Lasm's `relabelPreJs`, `connectLeanSymbolLoader`,
`indexFunctionTable`, `optimizeMainTableGrowth` unchanged) against `ref-c-debug`:
all four fixtures IDENTICAL, 7 files each (three objects, both maps, `program.wasm`,
`program.cjs`; `compare-ref-c-vs-node-c-1.json`). The probe-link reachability
results (`build.json` `requirements`) are identical. Peak 1.07 GiB, 3.7 min. The
packaged applications run: `hello` prints its greeting, `FilesystemSurface` passes
all checks (`filesystem surface checks passed`), `TcpErrorPhases` and
`BundleFeaturesLegacy` complete. `node-c-2` repeated the run with the final code
(`--package`, without `--debug`): identical to `ref-c-debug` and `ref-b-debug`
(`compare-ref-c-vs-node-c-2.json`, `compare-ref-b-vs-node-c-2.json`), same
requirements, all four applications run; peak 1.58 GiB.

AOT policy: `StandaloneModuleData.lean` is rejected identically after the probe link
in `emcc` and `node` mode (`reject-emcc.log`, `reject-node.log`): same
`ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE` message naming the same symbols
(`lasm_lookup_lean_symbol`, `dlopen`, `dlsym`, Lean compiler objects,
`l_Lean_findSysroot…`); objects, probe `program.wasm` and normalized
`reachability.map` identical; the never-delivered probe glue differs only in its
`application-pre.js` path label (each run's own build directory). Peaks 1.88 and
2.37 GiB (this fixture links the Lean compiler).

Default path unchanged: `frozen-emcc-c` (emcc, current code) is identical to
`ref-c-debug` (`compare-ref-c-vs-frozen-emcc-c.json`).

### Python-free link path

In `node` mode `linkApplication` replaces `sdk.execute` with a function that throws,
so emcc/em++ cannot run. `node-c-1` ran with `PATH` containing only Node's
directory, `EMSDK_PYTHON`/`PYTHONHOME`/`PYTHONPATH` unset, and
[`spawn-audit.mjs`](../scripts/link-driver/spawn-audit.mjs) preloaded
(`node-c-1-spawns.jsonl`): the only Python processes were the four identity checks
in `provisionPython` (`src/managed-python.mjs`, called by `provisionSdk` before
any compile); compile and link started only lean, clang, llvm-nm, wasm-ld,
llvm-objcopy, wasm-emscripten-finalize, wasm-opt, wasm-metadce and Node
(`compiler.mjs`, `acorn-optimizer.mjs`). Removing `provisionPython` from the user
path is milestone D.

Unit tests: [`test/link-driver-link.test.mjs`](../test/link-driver-link.test.mjs)
(hand-made Wasm modules for metadata, including passive segments and a
non-wrapper `main`; glue pieces and assembly; settings; response files; argument
templates; DCE graph; recipe) and the updated `test/link-driver-compile.test.mjs`.
The installer fault suite passed under the guard (151 passed, 3 skipped, 0 failed;
`.work/link-driver/installer-faults-c-1792160859.json`).

### Plan for milestone D: minimal toolchain (implemented; see milestone D below)

1. **Artifact.** A per-platform toolchain archive with only what `node` mode runs:
   `clang` (+ its resource headers), `wasm-ld`, `llvm-objcopy`, `llvm-nm`,
   `wasm-emscripten-finalize`, `wasm-opt`, `wasm-metadce`; plus a shared,
   platform-independent archive with Emscripten's `src/` and `tools/*.mjs` JavaScript
   (with the repaired `libpthread.js`/`libdylink.js`, their `node_modules`
   dependencies such as acorn) and the prebuilt sysroot (`b8fd589b…`). Deterministic
   packing as in Phase 1 and the sysroot; record sizes against today's SDK.
2. **Catalog.** New entries (per-platform native tools, shared JS+sysroot) with
   sizes and hashes; `provisionSdk` gains a minimal mode returning `prefix`,
   `driver`, `env` and the cache without Python or the repaired Python driver.
3. **Recipe identity.** Bind the recipe to the artifact hashes (driver identity,
   sysroot, native-sigs); refuse mismatches. Keep `recipe.mjs --derive` +
   `gate-link.mjs` as the procedure for any Emscripten or Lasm flag change.
4. **Switch the default** to `node`, keep `emcc` selectable for one candidate for
   comparison, and drop `provisionPython` from the user path (it stays a maintainer
   dependency for recordings and `base-pages.py`).
5. **Validation.** A new candidate on every supported native platform (five since
   the 2026-10-16 removal of Windows ARM64), including byte-identical `program.wasm`/`program.cjs` across
   platforms and against an emcc-linked build of the same candidate, the installer
   fault suite, and the cold-installation gate. Windows is first exercised there
   (`.exe` names, path separators, response-file quoting).

## Phase 2 milestone D (2026-10-16): minimal toolchain, Node driver by default

Implemented in source; **not yet in an accepted candidate**. Released candidates
still download the full Emscripten SDK and Python and link with emcc.

### Archives

[`scripts/link-driver/build-toolchain.mjs`](../scripts/link-driver/build-toolchain.mjs)
checks each pinned emsdk archive in `src/sdk-tools.json` (SHA-256 and size) and
writes, deterministically (Phase 1's sorted tar writer, fixed owner/mode/mtime,
zstd 19, 2^27 window, long-distance matching; packed twice and compared):

- `emscripten-6.0.9-<platform>-tools`: `clang`, `wasm-ld`, `llvm-objcopy`,
  `llvm-nm`, `wasm-opt`, `wasm-emscripten-finalize`, `wasm-metadce` (with the
  upstream symlinks `clang -> clang-24` and `wasm-ld -> lld` on Linux and macOS),
  clang's resource headers (`lib/clang/24/include`), the shared libraries the
  programs' own ELF/Mach-O/PE import tables name inside the archive (none on any
  platform: Binaryen and LLVM are statically linked), the LLVM (`llvm`, `clang`,
  `lld`) and Binaryen licence texts from the source commits named by the
  emscripten-releases DEPS file (the emsdk archive carries none), and a NOTICE with
  the upstream URL, SHA-256 and sources. Only OS libraries stay external: glibc,
  `libgcc_s`, `libz` (Linux); `libSystem`, `libz` (macOS); Windows system DLLs.
- `emscripten-6.0.9-lasm-shared`: `emscripten/` is the subset the Node driver
  uses (`src/`, `tools/*.mjs`, `acorn`, `acorn-import-phases`, `third_party/terser`,
  `LICENSE`, `AUTHORS`, version file, the licence texts under `system/`) with the
  reviewed repairs of `src/lib/libpthread.js`, `src/lib/libdylink.js` and
  `emscripten-version.txt`; the other repairs patch the Python driver (omitted) or
  the system-library sources compiled into the sysroot. `cache/` is the prebuilt
  sysroot `b8fd589b…` (milestone B). 175 Emscripten files, 1,911 members in all.

| Archive | Compressed | Unpacked | SDK + Python today |
| --- | --- | --- | --- |
| `linux-x64-tools` | 58,160,064 | 306,057,658 | 333,352,621 |
| `linux-arm64-tools` | 55,647,283 | 308,529,667 | 305,735,497 |
| `darwin-x64-tools` | 51,135,721 | 273,670,118 | 288,988,586 |
| `darwin-arm64-tools` | 43,627,516 | 262,482,501 | 300,623,823 |
| `win32-x64-tools` | 41,593,397 | 208,728,579 | 676,106,426 |
| `lasm-shared` (all platforms) | 3,359,267 | 31,396,035 | — |

The compiler toolchain download falls by 82–93% (Linux x86-64: 333,352,621 to
61,519,331 bytes, native plus shared).

**Determinism and equality.** [`link-toolchain.yml`](../.github/workflows/link-toolchain.yml)
([run 38921486487](https://github.com/Millillion/lasm/actions/runs/38921486487))
built the sysroot on linux-x64 and linux-arm64, repackaged all five emsdk archives
twice each, and packed the shared archive from every platform's emsdk archive with
the same sysroot: all five produced the identical shared archive `e0971956…`
(Emscripten subset digest `8ac5e1ef…`). The local Linux x86-64 build (Node 24.13.1)
reproduced CI's (Node 26.10.0) native and shared bytes. Two host-dependent inputs
were found and handled ([run 38919510116](https://github.com/Millillion/lasm/actions/runs/38919510116)):

- The Windows emsdk archive alone writes `emscripten-revision.txt` with CRLF. Nothing
  in the subset reads it, so it is omitted; the NOTICE names the revision. All other
  Emscripten files are byte-identical in the five archives.
- The sysroot built on linux-arm64 differs from the linux-x64 one (`b8fd589b…`, also
  rebuilt identically in CI) only in two `libc-mt.a`/`libc-mt-debug.a` member
  names: emcc's libc build walks musl's tree in directory-listing order
  (`tools/system_libs.py`, `os.walk` unsorted) and suffixes the second of `_Exit.c`
  and `_exit.c` (`_Exit__1.o`/`_exit.o` versus `_Exit.o`/`_exit__1.o`). Member
  order, offsets and contents are identical. The workflow accepts exactly this
  ([`compare-sysroots.mjs`](../scripts/link-driver/compare-sysroots.mjs)) and ships the
  linux-x64 sysroot, so every user now links against the same libraries; with emcc,
  each user's SDK cache built its own.

The workflow then smoke-tested every native archive on its own runner (each tool's
executable header and `--version`, and a pthread C file compiled with the recipe's
clang command, linked with `wasm-ld`, inspected with `llvm-nm`, stripped,
finalized, optimized and metadce'd): all outputs are byte-identical across the five
platforms. It published the archives with their reports, `link-toolchain.json` and
`SHA256SUMS` as the public release
[`emscripten-6.0.9-lasm-toolchain-v1`](https://github.com/Millillion/lasm/releases/tag/emscripten-6.0.9-lasm-toolchain-v1).

### Product path

- `src/link-toolchain.json` names both archives per platform (URLs, SHA-256, sizes,
  extraction bounds) and the external OS libraries.
- [`src/managed-link-toolchain.mjs`](../src/managed-link-toolchain.mjs) downloads
  and verifies both archives and hard-links them into one receipt-verified prefix
  under `derived/` keyed by both identities (`bin/`, `lib/clang`, `emscripten/`,
  `cache/`), checks every program's executable header and the Emscripten version,
  and returns the tools with no `emcc` and no Python. Later builds verify only the
  prefix; `lasm cache repair` verifies and rebuilds it offline like the Lean prefixes.
  `tar.zst` archives are decoded by Node, so the user path never needs Python.
- **Default driver** is `node`. `LASM_LINK_DRIVER=emcc` (or `node-compile`) selects the
  full SDK and its private Python for maintainer comparison and recording; only
  then are they downloaded or loaded.
- **Recipe identity.** `recipe.mjs --bind-toolchain` writes the published
  archive digests into the recipe (`toolchain`); `checkToolchainIdentity` refuses to
  compile or link with any other native or shared archive (or, for maintainer
  recordings, any SDK but the recorded one). Procedure for an Emscripten or flag
  change: record, `recipe.mjs --derive`, `gate-link.mjs`, `build-sysroot.mjs`,
  `link-toolchain.yml`, `--bind-toolchain`.
- **Build cache identity** records the link driver and the link-toolchain catalog
  (emcc builds keep the SDK catalog), so outputs of different drivers never share a
  cache entry. `build-info.json` records the toolchain prefix and archive identities.

### Validation (Linux x86-64, local)

The real CLI (`node bin/lasm.mjs build`, from a copy of this source with the
packaging step's runtime catalog, runtime `4d3d6c60…`) with a fresh, empty
`LASM_TOOLCHAIN_CACHE`, `PATH` containing only Node, Python variables unset and
[`spawn-audit.mjs`](../scripts/link-driver/spawn-audit.mjs) preloaded through
`NODE_OPTIONS`, built the four milestone fixtures with the default driver
(`.work/link-toolchain/cli-1`, repeated after the response-file change below as
`cli-2`; guard peak 3.66 GiB):

- `program.wasm` and `program.cjs` are byte-identical to the emcc reference
  `ref-c-debug` for `hello`, `FilesystemSurface`, `TcpErrorPhases` and
  `BundleFeaturesLegacy`. All four applications run (`Hello from Lean! 2 + 3 = 5`,
  `filesystem surface checks passed`, `TCP error phases checked`, `features passed`).
- Processes started: `lean`, `clang`, `llvm-nm`, `wasm-ld`, `llvm-objcopy`,
  `wasm-emscripten-finalize`, `wasm-opt`, `wasm-metadce` and Node (`compiler.mjs`,
  `acorn-optimizer.mjs`, the applications). No Python, no emcc.
- Downloaded: the Lean tiers and the two toolchain archives only; no SDK or Python
  artifact exists in the cache. **First build of an ordinary program (`hello`):
  273,804,773 bytes** (Lean binaries 40,565,096, Init/Std data 171,720,346,
  toolchain 61,519,331), **116 s and 167 s cold** in two runs on this host (`cli-1`,
  `cli-2`; downloads, extraction, prefix assembly, Lean and both links; the
  difference is download time). Filesystem and TCP then took 36 s each;
  `BundleFeaturesLegacy` 174–181 s, including the 253,989,084-byte extended Lean tier.
- A full recording from the release archives (`record-emcc.mjs --toolchain`,
  `.work/link-toolchain/node-d1`) is identical to `ref-c-debug` for all 28 files
  (objects, both maps, `program.wasm`, `program.cjs`).
- `LASM_LINK_DRIVER=emcc` still builds `hello` through the full SDK and Python, into a
  separate cache entry; its `program.cjs` is identical and `program.wasm` differs only
  in the 117 mimalloc build-date bytes of that older SDK cache (milestone B).
- Installer fault suite under the guard: 158 tests, 155 passed, 3 skipped, 0 failed
  (now including `test/managed-link-toolchain.test.mjs`).

First-build downloads for an ordinary program (Lean tiers plus toolchain) by
platform: Linux x86-64 273,804,773; Linux ARM64 273,188,656; Intel Mac 260,697,629;
Apple Silicon 251,404,204; Windows x86-64 253,189,823 bytes. Lake projects add the
extended Lean tier and Git: 593,063,076; 550,401,085; 580,822,773; 567,742,275;
554,298,728 bytes.

### Cross-platform outputs

[`link-toolchain-fixtures.yml`](../.github/workflows/link-toolchain-fixtures.yml)
([run 38928705615](https://github.com/Millillion/lasm/actions/runs/38928705615))
downloads the published archives on each native runner (Ubuntu 24.04 x86-64 and
ARM64, macOS 15 Intel and Apple Silicon, Windows Server 2025), verifies them
against the release's `link-toolchain.json`, builds `hello` and `FilesystemSurface`
with the Node driver from source (`record-emcc.mjs --toolchain`, retained `.46`
runtime `4d3d6c60…`, no SDK and no Python), runs both applications, and links the
same fixtures with emcc from the full SDK on the same runner (same prebuilt
sysroot, frozen). [`compare-platforms.mjs`](../scripts/link-driver/compare-platforms.mjs)
then compares objects, `program.wasm`, `program.cjs`, the probe link's
reachability requirements and the link maps:

| Platform | Node vs linux-x64 Node | Node vs emcc on the same runner |
| --- | --- | --- |
| linux-x64 | (reference) | identical, maps included |
| linux-arm64 | identical, maps included | identical, maps included |
| darwin-x64 | identical, maps included | identical, maps included |
| darwin-arm64 | identical, maps included | identical, maps included |
| win32-x64 | identical objects, programs and requirements; maps differ | identical objects, programs and requirements; maps differ |

`program.wasm`/`program.cjs` for `hello` are `72de0b13…`/`14d212c1…` on all five,
equal to the Linux emcc reference; both applications ran on every runner. Earlier
attempts showed two Windows-only effects of the CI checkout, not of the toolchain:
Windows runners convert line endings by default, which changed the hash-checked
`native-sigs` table (the workflow now checks out repository bytes, as an npm
package carries them).

**Windows link maps.** The Node driver passed wasm-ld its arguments through an
Emscripten-format response file every time. Emscripten escapes backslashes in
response files, and wasm-ld on Windows reads them with Windows quoting, which keeps
both backslashes, so input names appear as `D:\\a\\…\\module-0.o` in the map. emcc
uses a response file only when `shlex.join(cmd)` exceeds 7,000 characters
(`tools/building.py`), and passed these links' arguments directly. The maps are
build-time inputs to the reachability check, which accepts either separator
(identical requirements above), and do not reach the outputs. Current source now
makes the same choice as emcc (`needsResponseFile`, unit-tested; on Linux the CLI
validation above ran every wasm-ld without a response file and stayed identical).
This fix is not yet exercised on a Windows runner: the fixtures workflow runs the
committed driver.

### Remaining (Phase 3 and acceptance)

- A packed candidate with this source on all five native targets, the installer
  fault suite there and the three-consecutive cold-installation gate.
- npm distribution: the per-platform tools archives as `optionalDependencies`
  packages and the shared archive with the Lean data packages (all below the
  ~150 MB ceiling), fetched through npm; Verdaccio validation on the five runners.
- Retire `src/managed-sdk.mjs`/`src/managed-python.mjs` from the package once one
  candidate has compared emcc and Node outputs; they remain maintainer tools for
  recordings, `build-sysroot.mjs` and the Windows resource guard.
