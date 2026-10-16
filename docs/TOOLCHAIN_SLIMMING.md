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

Not yet fixed in the product: set `SOURCE_DATE_EPOCH` in the managed SDK
environment (affects only newly built caches), or make it moot with the prebuilt
sysroot below.

### Plan for milestones B–D

- **System-library prebuild.** Build the 14 final and 4 probe-only artifacts
  above from the repaired SDK tree, with recorded flags, a fixed
  `SOURCE_DATE_EPOCH` and `-ffile-prefix-map` for the sysroot, plus the
  generated sysroot headers. Pack them deterministically with
  `libemscripten_js_symbols.so`. The byte-equality reference is `emcc` with
  `FROZEN_CACHE` pointing at that same prebuilt cache.
- **B — compile in Node.** Invoke clang directly with the recorded driver
  arguments (`clang`, not cc1, to stay version-robust). Gate: all objects
  byte-identical to `emcc -c` on the four fixtures and the reachability and
  initialization objects (`compare.mjs`).
- **C — link, metadata and glue in Node.** Run wasm-ld, llvm-objcopy and finalize
  with the recorded arguments. Port metadata extraction and the glue assembly
  (settings JSON, `compiler.mjs`, ASM_CONSTS/EM_JS/exports), then wasm-opt,
  acorn and metadce passes in recorded order. Gate: identical maps,
  `program.wasm` and `program.cjs` against emcc on the same sysroot, checked per
  intermediate (the recipe hashes `base.wasm`, finalize output, `original.js`
  and each pass) so a divergence is found at its first step.
- **D — minimal toolchain.** Ship clang, wasm-ld, llvm-objcopy, Binaryen tools,
  the prebuilt sysroot and Emscripten's `src/` and `tools/*.mjs` JavaScript in a
  catalog artifact; remove Python and the SDK from the user path. Validate with a
  new candidate on all six native platforms, including identical outputs across
  platforms.
