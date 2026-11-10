# How Lasm works

> **Draft by Claude for Jordan to hone.** Written 2026-11-06 for Lasm 0.5.0 and
> Lean 4.35.0, and checked against the code under `src/`, `scripts/`,
> `runtime/` and `library/`. Every section names the files it describes.

Lasm turns a Lean 4 program into a WebAssembly program, plus the JavaScript or C
host it needs on each platform. It doesn't reimplement Lean. Upstream Lean
elaborates the program and emits C, as it does for a native executable. Lasm
then compiles that C, together with Lean's own C++ runtime, to WebAssembly.

This page goes one layer at a time:

1. [The pipeline at a glance](#1-the-pipeline-at-a-glance)
2. [Lean: elaboration and the C it emits](#2-lean-elaboration-and-the-c-it-emits)
3. [C to WebAssembly: Clang, wasm-ld, Binaryen and the runtime patches](#3-c-to-webassembly)
4. [The host bridge on Node](#4-the-host-bridge-on-node)
5. [Platform targets](#5-platform-targets)
6. [The build cache](#6-the-build-cache)
7. [Lasm's libraries and where they run](#7-lasms-libraries-and-where-they-run)
8. [How it's tested](#8-how-its-tested)

## 1. The pipeline at a glance

```
 Main.lean (+ Lake packages, + import Lasm.*)
      │
      │  native Lean 4.35.0, managed by Lasm          src/managed-lean.mjs
      │  elaborates, type-checks, runs tactics,       src/application-sources.mjs
      │  emits one .c file per module
      ▼
 generated C ──────────────┐
                           │  clang → wasm64 objects   src/application-link.mjs
 prebuilt runtime bundle ──┤  (Lean's C++ runtime, the standard library,
 targets/lean-4.35.0-wasm64│   Lasm's host bridge; built by
                           │   scripts/full-lean/build-application-runtime.mjs)
                           ▼
              wasm-ld + Binaryen (wasm-opt -Oz) + Emscripten's JS glue
              driven by the Node link driver      src/link-driver/link.mjs
                           │
                           ▼
            Node build: dist/  (main.mjs, program.cjs, program.wasm, host/)
                           │
      ┌────────────────────┼──────────────────────┬───────────────────────┐
      ▼                    ▼                      ▼                       ▼
 function shims       edge relink            WASI relink             browser bundle
 (lasm package)       single-threaded        no JavaScript           edge program +
 Lambda, Vercel,      ES module + JS host    wasi/main.wasm          loader, hashed
 Netlify, Azure, GCF  workers, vercel-edge,  fastly, wasi-http       assets
                      netlify-edge, deno-
                      deploy, supabase-edge,
                      bun, deno
 src/serverless/      src/edge/              src/wasi/               src/browser/
```

Every target starts from the same Node build. The other targets relink its
compiled objects instead of compiling the Lean program again
([src/application-cli.mjs](../src/application-cli.mjs),
[src/edge/edge-build.mjs](../src/edge/edge-build.mjs),
[src/wasi/wasi-build.mjs](../src/wasi/wasi-build.mjs)).

What carries over from Lean: the compiled program is the one Lean's own compiler
produced, so its semantics are Lean's. Proofs, tactics and macros run only at
build time. A deployed program can't elaborate or evaluate new Lean code.

## 2. Lean: elaboration and the C it emits

**Lean itself.** Lasm downloads exactly Lean 4.35.0 (the pin in
[src/toolchains.json](../src/toolchains.json)) into its tool cache. It doesn't
use elan or a Lean already on the machine. Lean comes in tiers: the binaries,
a core tier (`Init`, `Std`), an extended tier (Lean's elaborator, which
`Lasm.JS`'s `@[js]` attribute needs) and a C tier (Lean's clang and headers, only
for Lake packages with C code). Lasm assembles these tiers into one prefix,
keyed by every component's hash ([src/managed-lean.mjs](../src/managed-lean.mjs)).
Lasm's own library (`Lasm.JS`, `Lasm.Fetch`, `Lasm.UI`, …) is compiled into that
prefix, so `import Lasm.JS` resolves like a standard library module
([src/lasm-library.mjs](../src/lasm-library.mjs); prebuilt in
[library/prebuilt/](../library/prebuilt)).

**From source to C.** [src/application-sources.mjs](../src/application-sources.mjs)
(`applicationSources`) handles two kinds of input:

- **A Lake project** (a `lakefile.lean` or `lakefile.toml` above the source):
  Lake builds the imported modules, and Lasm asks Lake for each module's C file
  (`lake query <module>:c`, many modules per query). Lasm reads the Lake
  configuration through a small Lean adapter,
  [src/lake-module.lean](../src/lake-module.lean). The main source is compiled
  with `lake lean Main.lean -- -c script.c -Dcompiler.postponeCompile=false`.
- **A standalone file:** Lean's import parser finds local imports, which are
  compiled in order.

Native Lean runs with one thread and an 8 MiB stack (`LEAN_NUM_THREADS=1`,
`LEAN_STACK_SIZE_KB=8192`, `nativeLeanEnvironment`). The C that Lean emits is the
same C a native `lean` build would compile. Lasm doesn't change Lean's compiler.

Lake packages with C code (`extern_lib`, extra link objects) are first built
natively by Lake, as usual. Lasm then reads each compilation from Lake's
`.trace` files and compiles the same sources again for Wasm, keeping only their
preprocessor options ([src/application-native.mjs](../src/application-native.mjs)).
Only the objects the program reaches are linked. Prebuilt native libraries
can't be compiled this way, and the build names them.

**Checks before linking.** The program must define `main`
(`assertDefinesMain`). When it imports `Lasm.JS`, Lean reads every `@[js]`
binding from the `.olean` files, and Node checks that each named export exists
in its npm package. This runs while the program compiles and links
([src/application-binding-check.mjs](../src/application-binding-check.mjs)).

## 3. C to WebAssembly

### The prebuilt runtime

A Lean program needs Lean's C++ runtime (objects, reference counting, tasks,
IO) and the compiled standard library. Lasm builds these once per Lean release,
in CI, with Emscripten 6.0.9:
[scripts/full-lean/build-application-runtime.mjs](../scripts/full-lean/build-application-runtime.mjs).
The result is a bundle of archives with a manifest of SHA-256 hashes.
`@lasm/cli` ships it under `targets/lean-4.35.0-wasm64`, and every build checks
it against the catalog hash in
[src/application-runtimes.json](../src/application-runtimes.json)
([src/application-runtime.mjs](../src/application-runtime.mjs)). The manifest
must say wasm64 memory, pthreads and mimalloc.

The bundle contains:

- the standard library archives: `Init`, `Std`, `Lean`, `LeanExport`, `Lake`;
- Lean's C++ runtime (`leanrt`, `leancpp`), built from Lean's own sources with
  the patches below;
- Lasm's host bridge, `lasmhost`, compiled from
  [runtime/node-io.cpp](../runtime/node-io.cpp),
  [runtime/node-async.cpp](../runtime/node-async.cpp) and
  [runtime/node-system.cpp](../runtime/node-system.cpp).
  [scripts/full-lean/configure-host.mjs](../scripts/full-lean/configure-host.mjs)
  renames Lean's own definitions of the functions these files replace (for
  example the libuv-based socket and timer primitives), so the replacement is
  explicit. Duplicate symbols can never pick an implementation by accident.

### The runtime patches

The patches live in
[scripts/full-lean/patches/](../scripts/full-lean/patches). For Lean 4.35.0 the
runtime build applies:

| Patch | What it does |
| --- | --- |
| `lean-4.35.0-wasm-build.patch` | Lean's CMake build for Emscripten: the memory mode (`LASM_MEMORY64`), the host bridge switch, and runtime changes in `io.cpp`, `memory.cpp`, `interrupt.cpp`, `compact.cpp`, `uv/system.cpp` and `lean.h` |
| `lean-4.35.0-sdk-mimalloc.patch` | Use Emscripten's mimalloc port (`-sMALLOC=mimalloc`) rather than Lean's copy |
| `lean-4.35.0-c-inputs.patch` | Correct the dependencies of Lean's make rules for C inputs |
| `lean-4.35.0-nonlinear-environment.patch` | Let `LEAN_ABORT_ON_NONLINEAR` be read from the host environment, as `LEAN_ABORT_ON_PANIC` is |
| `lean-4.35.0-node-threads.patch` | Node profile: run `main` on Emscripten's main pthread instead of starting one more thread |
| `lean-4.35.0-edge.patch` | Edge profile: Lean's runtime without threads, with cooperative tasks |
| `lean-4.32.0-compact-alignment.patch`, `-thread-runtime`, `-region-allocation`, `-host-platform`, `lean-4.34.0-host-linux`, `-host-backtrace`, `-libuv-source` | Earlier patches that still apply unchanged: alignment of compacted regions, the thread runtime under Emscripten, region allocation, host OS flags (Windows/macOS/Linux) and backtraces read from the host |

The build checks each patch. A patch must either be already applied or apply
cleanly; otherwise the build stops with "Runtime patch drift". Emscripten
itself is patched once, in
[emscripten-6.0.9-memory64.patch](../scripts/full-lean/patches/emscripten-6.0.9-memory64.patch)
(applied by [patch-sdk.mjs](../scripts/full-lean/patch-sdk.mjs)). It changes
memory64 handling in Emscripten's linker, its dynamic-linking and pthread
JavaScript, and its allocator and `pthread_create`.

### Compiling and linking a program

[src/application-link.mjs](../src/application-link.mjs) (`linkApplication`)
compiles the generated C with clang for wasm64 (`-sMEMORY64=1`,
`-ffunction-sections -fdata-sections`) and links it with the runtime archives.
Lasm runs the tools directly through its
[Node link driver](../src/link-driver/link.mjs): clang, wasm-ld, llvm-objcopy,
Binaryen's `wasm-opt` and `wasm-emscripten-finalize`, and Emscripten's
JavaScript compiler (`compiler.mjs`). The arguments come from a recording of `emcc`
([recipe-emscripten-6.0.9.json](../src/link-driver/recipe-emscripten-6.0.9.json)),
so builds need neither `emcc` nor Python. These tools are a slimmed Emscripten
toolchain that Lasm repackages and downloads by hash
([src/link-toolchain.json](../src/link-toolchain.json),
[src/managed-link-toolchain.mjs](../src/managed-link-toolchain.mjs)).

The link has two kinds of step:

1. **Planning probes** (`-O0`, map only). A compiled Lean program runs the
   initializer of every module it imports, including modules that exist only
   for build time (tactics, elaborators, attributes). Those initializers would
   keep Lean's compiler and kernel reachable in the Wasm. Lasm wraps each
   initializer with `wasm-ld --wrap`. It keeps an initializer only when code
   that is live in the link reads a global that the initializer sets. A skipped
   initializer still calls the ones it imports, in Lean's order
   ([src/application-initialization.mjs](../src/application-initialization.mjs)).
2. **The final link.** The Node link flags are in `linkWith` in
   [src/application-link.mjs](../src/application-link.mjs): `-pthread`,
   `-fwasm-exceptions`, `-sMEMORY64=1` (8 GiB maximum), `-sPROXY_TO_PTHREAD=1`,
   `-sNODERAWFS=1`, mimalloc, a 64 MiB C stack, and the host glue
   ([host-pre.js](../scripts/full-lean/host-pre.js),
   [host-library.js](../scripts/full-lean/host-library.js)). The **release**
   profile runs Binaryen's size optimization (`-Oz -g1`) and is
   byte-reproducible. The **dev** profile (`lasm dev`, `lasm Main.lean`,
   `lasm build --dev`) skips it and builds faster
   (`buildProfiles`).

The Node output is written to `dist/`:

| File | What it is |
| --- | --- |
| `main.mjs` | The entry point. It checks the Node and glibc versions, then loads `program.cjs` ([src/application-output.mjs](../src/application-output.mjs)) |
| `program.cjs`, `program.wasm` | Emscripten's JavaScript glue and the program |
| `host/` | Lasm's Node host ([src/node-host.mjs](../src/node-host.mjs) and its modules), the builtin `lasm:` modules, and native helpers: koffi for file handles, for Linux x64/arm64 and the build host |
| `node_modules/` | The project's npm packages, when it uses `Lasm.JS` ([src/application-npm.mjs](../src/application-npm.mjs)) |
| `build-info.json`, `THIRD_PARTY_NOTICES.txt`, `licenses/` | The build recipe and the licences of what is compiled in |

## 4. The host bridge on Node

On Node, a Lasm program runs Lean's real runtime with real threads.

```
 Node main thread (JavaScript)                Node Workers (Wasm pthreads)
 ─────────────────────────────                ──────────────────────────────
 src/node-host.mjs                            Lean's main thread  (runs main)
   files, sockets, processes, DNS,  ◄──slot── Lean task threads   (started on demand;
   timers, signals, Lasm.JS ops               LASM_THREAD_POOL pre-starts them)
   (async; replies in place)       ──reply──► completion thread  (long-polls the host
                                                 for finished async operations)
                                              Lasm.JS poller and sync-callback threads
```

- **Threads.** Each Lean thread is an Emscripten pthread, which is a Node
  Worker sharing one Wasm memory. With `PROXY_TO_PTHREAD`, `main` runs on a
  Worker, not on Node's main thread. The link records 4 pre-started Workers
  (`-sPTHREAD_POOL_SIZE=4`); Lasm starts 1 by default, and `LASM_THREAD_POOL`
  (0–64) changes that when the program starts. Further threads start when Lean
  needs them. Each pre-started Worker costs 30–40 ms of CPU at start-up
  ([src/application-link.mjs](../src/application-link.mjs)).
- **How a host call crosses.** Each Lean thread has a request/reply slot in
  shared Wasm memory, one per nesting depth. The slot layout is documented at
  the top of [host-library.js](../scripts/full-lean/host-library.js). The Lean
  thread writes the operation, handle, argument and a pointer to its input,
  increments a sequence number, and waits on Emscripten's futex. Node's main
  thread waits on that sequence with `Atomics.waitAsync`
  ([host-pre.js](../scripts/full-lean/host-pre.js), `lasmFullServe`). It
  reads the request in place, runs it through the host's `request` function
  ([src/node-host.mjs](../src/node-host.mjs)), writes the reply into the slot
  and wakes the thread. Nothing is copied through `postMessage`. A reply too
  large for the slot's buffer waits in the host until the thread grows its
  buffer and asks again.
- **Asynchronous operations.** Socket reads, timers and other operations that
  native Lean runs on libuv start with one host call. Their completions are
  delivered to a dedicated **completion thread**, which long-polls the host and
  resolves Lean's promises. This keeps pending socket reads off Lean's task
  pool, as native libuv does. The thread starts with the program's first
  asynchronous request ([runtime/node-async.cpp](../runtime/node-async.cpp)).
- **Files and the OS.** File handles go through the host C library with koffi
  ([src/native-files.mjs](../src/native-files.mjs)). That gives buffered
  positions, `fflush` and OS file locks, as native Lean has. Processes, TCP,
  UDP, DNS, signals and system queries have their own modules (`src/node-*.mjs`,
  `src/native-*.mjs`). Errors come back as Lean's structured `IO.Error`
  variants ([src/lean-io-errors.mjs](../src/lean-io-errors.mjs)).
- **Clocks** are read on the Lean thread without a round trip
  ([host-library.js](../scripts/full-lean/host-library.js)).
- **Lasm.JS** uses the same slots for its operations 200–219
  ([src/node-js.mjs](../src/node-js.mjs),
  [library/c/lasm_js.c](../library/c/lasm_js.c)). JavaScript can call Lean
  synchronously: Node's main thread then waits inside the callback, and a
  dedicated thread runs the Lean function. The main thread serves that
  thread's slots inline while it waits. Design and measurements:
  [JS_INTEROP.md](JS_INTEROP.md). One crossing costs about 24 µs
  ([README](../README.md#calling-javascript-and-npm-from-lean)).

The bridge has a model in Lean
([verification/host-bridge/](../verification/host-bridge)) that checks for lost
wake-ups, lost or doubly served requests and deadlocks. Schedule fuzzing then
checks that the real code's traces conform to it ([TESTING.md](TESTING.md)).

## 5. Platform targets

`lasm build Main.lean --target <target>` ([src/application-cli.mjs](../src/application-cli.mjs)).

| Target | How the program is wrapped | Files |
| --- | --- | --- |
| `node` (default) | The Node build above: threads, files, processes, sockets | [src/application-build.mjs](../src/application-build.mjs) |
| `lambda`, `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf` | The Node build plus a shim. `lasm-server.mjs` starts `dist/main.mjs` once per cold start on a free loopback port and forwards each platform event to it as an HTTP request. The shim maps the platform's event and response shapes. `lasm package` zips it | [src/serverless/](../src/serverless), [src/package.mjs](../src/package.mjs) |
| `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`, `bun`, `deno` | The **edge relink**. The same objects are linked again without threads, as an ES module: lowered memory64 (`-sMEMORY64=2`), 4 MiB initial memory, a 1 MiB C stack, the single-threaded runtime archives, and a pure-JavaScript host that uses only web-standard APIs. Blocking waits suspend with JSPI. Supabase has no JSPI, so it gets Binaryen's Asyncify instead. Each platform gets its own generated entry module | [src/edge/edge-link.mjs](../src/edge/edge-link.mjs), [edge-host.mjs](../src/edge/edge-host.mjs), [edge-start.mjs](../src/edge/edge-start.mjs), [runtime/edge.cpp](../runtime/edge.cpp), [EDGE.md](EDGE.md), [BUN_DENO.md](BUN_DENO.md) |
| `wasi`, `fastly`, `wasi-http` | The **WASI relink**: a standard `wasi_snapshot_preview1` command module with no JavaScript. Lasm's C host replaces the JavaScript host. Atomics from the shared archives are lowered to plain memory instructions, and `wasm-opt` strips exception handling and lowers memory to 32 bits. `fastly` adds Fastly's host calls and package layout. `wasi-http` splices the module into a prebuilt component template, so no `wasm-tools` is needed | [src/wasi/wasi-link.mjs](../src/wasi/wasi-link.mjs), [lower-atomics.mjs](../src/wasi/lower-atomics.mjs), [wasi-component.mjs](../src/wasi/wasi-component.mjs), [lasm_wasi.c](../src/wasi/lasm_wasi.c), [WASI.md](WASI.md) |
| `browser` | The edge program as a static site: a loader bundled with the glue, the host and the builtin modules, the hashed `.wasm`, brotli and gzip copies, and `index.html`. `mount()` starts one Lean instance per element. Blocking waits suspend only with `--suspend jspi`; the default is `none` | [src/browser/](../src/browser), [BROWSER.md](BROWSER.md) |

**The single-threaded profile** (edge, Bun/Deno, WASI, browser) has no threads.
Its Lean runtime is built with `--profile edge` (`lean-4.35.0-edge.patch`,
cooperative tasks) and replaces three archives of the Node bundle. The
standard library archives are the Node bundle's own
([src/edge/edge-runtime.mjs](../src/edge/edge-runtime.mjs),
[src/edge-runtimes.json](../src/edge-runtimes.json)). The host calls
`lasm_edge_pump` after it queues events. The pump resolves Lean promises and
runs queued tasks until none is left. When Lean blocks and nothing else can
run, the stack suspends until an event arrives
([runtime/edge.cpp](../runtime/edge.cpp)). On these targets there are no
sockets or processes, and no files except on WASI
([README](../README.md#known-limitations)).

## 6. The build cache

Two caches, both checked by content:

- **The tool cache** holds Lean, the link toolchain, the edge runtime and
  machine-wide object stores. It is in `~/.cache/lasm` on Linux,
  `~/Library/Caches/lasm` on macOS and `%LOCALAPPDATA%\lasm\Cache` on Windows,
  or in `LASM_TOOLCHAIN_CACHE` (`managedCacheDirectory` in
  [src/managed-artifacts.mjs](../src/managed-artifacts.mjs)). Downloads are
  verified by SHA-256 before extraction. Builds hold a shared lease, and
  `lasm cache repair` takes an exclusive one
  ([src/cache-lifecycle.mjs](../src/cache-lifecycle.mjs),
  [src/cache-repair.mjs](../src/cache-repair.mjs)).
- **The project cache** is in `.lake/lasm/applications/<hash of the source
  path>/`. A build's identity is a SHA-256 of its recipe: the profile, the Lean
  version and commit, the identities of Lean, the link toolchain and the
  runtime, a hash of Lasm's own source files, the host platform, the SHA-256
  of every module's source and generated C, the npm packages, and more
  (`recipe` in [src/application-build.mjs](../src/application-build.mjs)). The
  same identity reuses the verified output. No compiler tool runs, and only the
  `Lasm.JS` binding check runs again. Otherwise compiled objects are reused by
  the hash of their C, flags and tools. Planning probes are reused when their
  inputs are unchanged.

Every output directory carries a receipt that lists each file's hash
([src/application-files.mjs](../src/application-files.mjs)). A damaged or
partly written output is never reused. Concurrent builds use private staging
directories and a project lock
([src/application-lock.mjs](../src/application-lock.mjs)). The edge and WASI
relinks are cached for each Node build.

## 7. Lasm's libraries and where they run

All of them are Lean code in [library/Lasm/](../library/Lasm), with small C glue
in [library/c/](../library/c). They are compiled into the managed Lean prefix and
linked only into programs that import them.

| Library | What it is | Where it runs |
| --- | --- | --- |
| `Lasm.JS` ([JS.lean](../library/Lasm/JS.lean), [JS_BINDINGS.md](JS_BINDINGS.md)) | Calls JavaScript and npm from Lean: one `@[js "module" "export"]` declaration per function, `Async` for promises, callbacks both ways | Node (threads, [lasm_js.c](../library/c/lasm_js.c), [src/node-js.mjs](../src/node-js.mjs)); edge, Bun/Deno and browser (the same operations without threads: [src/edge/edge-js.mjs](../src/edge/edge-js.mjs), [lasm_js_edge.c](../src/edge/lasm_js_edge.c)). On WASI and Fastly every call fails with a clear error ([src/wasi/lasm_wasi.c](../src/wasi/lasm_wasi.c)) |
| `Lasm.Fetch` ([Fetch.lean](../library/Lasm/Fetch.lean), [FETCH.md](FETCH.md)) | One `Request → Async Response` handler | Node: a `node:http` server, through `Lasm.JS`. Edge, Bun, Deno: the platform's fetch handler. Fastly: its host calls. WASI: one CGI (WAGI) request on stdin/stdout ([lasm_fetch_wasi.c](../src/wasi/lasm_fetch_wasi.c)). wasi-http: the component's handler |
| `Lasm.JS.Web` ([JS/Web.lean](../library/Lasm/JS/Web.lean), [JS_BINDINGS.md](JS_BINDINGS.md#standard-bindings-lasmjsweb)) | Bindings of the web standards generated from their WebIDL: the APIs every JavaScript target has, and in browsers (`Lasm.JS.Web.Browser`) the DOM, the window, events, canvas 2D and WebSocket | Every JavaScript target; the browser tier in browsers |
| `Lasm.UI` ([UI.lean](../library/Lasm/UI.lean), [UI.md](UI.md)) | The Elm architecture, `html!`, routing, SSR and hydration. The diff runs in Lean and is proved correct ([UI/Proofs.lean](../library/Lasm/UI/Proofs.lean)) | Browser; rendering to HTML also on the server |
| `Lasm.RPC` ([RPC.lean](../library/Lasm/RPC.lean), [RPC.md](RPC.md)) | Typed endpoints shared by a server and a browser app | `RPC.Server` with `Lasm.Fetch`, `RPC.Client` with `Lasm.UI` |
| `Lasm.KV` ([KV.lean](../library/Lasm/KV.lean)) | A small key-value store | Workers KV, Deno KV or Fastly KV where the binding exists; otherwise in memory, one copy per process, isolate or instance |
| `Lasm.Fastly` ([Fastly/](../library/Lasm/Fastly), [WASI_FASTLY_BINDINGS.md](WASI_FASTLY_BINDINGS.md)) | Fastly Compute's host ABI, generated from its witx: requests, responses, bodies, backends, stores, cache, geolocation, rate limiting | `--target fastly` (generated C glue, [lasm_fastly.c](../library/c/lasm_fastly.c)); elsewhere every call fails with `FastlyStatus.unsupported` |

The builtin JavaScript modules `lasm:app` and `lasm:ui-dom`
([src/lasm-modules/](../src/lasm-modules),
[src/edge/builtin-modules.mjs](../src/edge/builtin-modules.mjs)) are the
JavaScript side of `Lasm.UI` (its mount glue, `Lasm.UI.Mount`, and its patch applier). Every build resolves them
statically.

## 8. How it's tested

[TESTING.md](TESTING.md) is the full account. In short:

- **Differential testing.** Generated Lean programs are compiled with Lasm and
  with native Lean, and they must behave exactly the same. The same program is
  also compared on every target (Node, WASI, edge on V8, JavaScriptCore and
  SpiderMonkey, browsers), unoptimized against optimized, and native against
  Lean's interpreter ([scripts/differential/](../scripts/differential)).
- **Target equivalence.** One server must answer the same on every target
  ([scripts/equivalence/](../scripts/equivalence)).
- **Black-box scenarios** from the packed or published `@lasm/cli`: template ×
  target × OS × runtime.
- **Lean's own test suite**, run through the installed package
  ([UPSTREAM_APPLICATION_TESTS.md](UPSTREAM_APPLICATION_TESTS.md)).
- **The host bridge** has a model, schedule fuzzing and trace conformance
  ([verification/host-bridge/](../verification/host-bridge),
  [scripts/bridge-fuzz/](../scripts/bridge-fuzz)).
- **Example apps** run against outside oracles: Conduit against the official
  RealWorld API and Playwright suites.
- **Proofs** of `Lasm.UI` and the example apps are checked in CI.
- **Tooling tests** cover the error corpus, metamorphic rebuilds and fault
  injection; unit tests, coverage and mutation testing cover the JavaScript.

Each platform's evidence level (L0 to L3) is computed from CI results
([TESTING.md](TESTING.md#evidence-levels),
[scripts/evidence/platforms.json](../scripts/evidence/platforms.json)).
