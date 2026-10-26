# WASI, wasi-http and Fastly Compute

`lasm build Main.lean --target wasi` turns a Lean program into one standard
WebAssembly System Interface module (`wasi_snapshot_preview1`): no
JavaScript, no host program, nothing to install beside the engine.
`--target wasi-http` builds a wasi:http/proxy component for `wasmtime serve`,
Spin and other wasi-http hosts, and `--target fastly` a module with Fastly
Compute's host calls, in the layout `fastly compute serve|deploy` uses.

| | `--target wasi` | `--target wasi-http` | `--target fastly` |
| --- | --- | --- | --- |
| Output | `wasi/main.wasm` (+ `build-info.json`, `THIRD_PARTY_NOTICES.txt`) | `wasi-http/main.wasm`, a component | `bin/main.wasm`, `pkg/<name>.tar.gz`; `fastly.toml` when the project has none |
| Runs on | wasmtime, wasmer, Node's `node:wasi`, any preview 1 host | `wasmtime serve`, Spin's HTTP trigger, any wasi:http/proxy@0.2 host | Fastly Compute; Viceroy (`fastly compute serve`) locally |
| `main` | A command: arguments, environment, standard streams, exit status | Runs once per request | Runs once per request |
| HTTP served | [`Lasm.Fetch.serve`](FETCH.md): one CGI request per run | wasi:http/incoming-handler | Fastly's downstream request |
| HTTP sent ([`fetch`](FETCH.md#outbound-requests)) | Not available (no sockets) | wasi:http/outgoing-handler | Backend requests |
| Imports | `wasi_snapshot_preview1` | wasi:http, wasi:io, wasi:clocks, wasi:random, wasi:cli 0.2.12 | `wasi_snapshot_preview1` and Fastly's `fastly_*` modules |

CI ([`wasi.yml`](../.github/workflows/wasi.yml),
[`scripts/wasi/wasi-ci.mjs`](../scripts/wasi/wasi-ci.mjs)) builds
[`examples/wasi-cli`](../examples/wasi-cli/Main.lean) and
[`examples/fetch`](../examples/fetch/Main.lean) from source on every change
and checks them on pinned wasmtime 49.0.4 (`run` and `serve`), wasmer 7.4.2,
Node 26.12.1's `node:wasi`, Spin 4.2.2 (HTTP trigger and wagi) and Viceroy
0.21.1. The command-line program's output
and exit status must equal native Lean's (`lean --run`) on every engine.

## Quick start

```sh
npx lasm init my-tool                       # or any Lean program
cd my-tool && npm install
npx lasm build Main.lean --target wasi      # wasi/main.wasm
wasmtime run --dir . wasi/main.wasm Ada     # Hello, Ada, from Lean!
wasmer run --volume=.:/ wasi/main.wasm -- Ada   # the current directory as the guest's root
node --no-warnings -e "…"                   # node:wasi, see below
```

An HTTP handler for Fastly:

```sh
npx lasm init my-service --template fetch --deploy fastly
cd my-service && npm install
npm run build:fastly                        # bin/main.wasm, pkg/my-service.tar.gz
fastly compute serve                        # Viceroy on http://127.0.0.1:7676
fastly compute deploy                       # needs a Fastly account
```

The [Fastly guide](deploy/fastly.md) has the details. A wasi-http component
for `wasmtime serve` or Spin:

```sh
npx lasm init my-service --template fetch --deploy spin
cd my-service && npm install
npm run build:wasi-http                     # wasi-http/main.wasm
wasmtime serve wasi-http/main.wasm          # http://0.0.0.0:8080
spin up                                     # spin.toml (HTTP trigger), http://127.0.0.1:3000
```

Node's `node:wasi` runs the module with a few lines:

```js
import { WASI } from 'node:wasi';
import { readFile } from 'node:fs/promises';
const wasi = new WASI({ version: 'preview1', args: ['main.wasm', ...process.argv.slice(2)],
  env: process.env, preopens: { '.': process.cwd() }, returnOnExit: true });
const module = await WebAssembly.compile(await readFile('wasi/main.wasm'));
process.exitCode = wasi.start(await WebAssembly.instantiate(module, wasi.getImportObject()));
```

([`scripts/wasi/node-wasi-run.mjs`](../scripts/wasi/node-wasi-run.mjs) is
this script.)

## What works

| Lean feature | WASI | Notes |
| --- | --- | --- |
| All pure Lean, big numbers, `Std` data structures, strings | ✓ | |
| `main` arguments, exit status, `IO.Process.exit` | ✓ | Status modulo 256, as on Linux |
| `IO.getEnv`, `IO.Process.getEnv` lists | ✓ | The host's environment (`wasmtime --env`, `wasmer --env`, `node:wasi` `env`) |
| `IO.println`, `IO.eprintln`, binary output, `IO.getStdin` (`getLine`, `read`) | ✓ | Unbuffered writes to file descriptors 1 and 2 |
| `IO.FS`: read, write, append, `lines`, metadata, `readDir`, `createDir`, `removeFile`, `removeDirAll`, `rename`, hard links, `createTempFile` | ✓ | Inside the directories the host preopens (`--dir`); paths resolve against a working directory that starts at `.` (or `/`) |
| `IO.setAccessRights` (chmod) | — | WASI has no permissions: an `unsupportedOperation` error |
| `IO.monoMsNow`, `IO.monoNanosNow`, wall clock, `Std.Time` | ✓ | `/etc/localtime` falls back to a bundled UTC zone when the host does not grant it |
| `IO.getRandomBytes`, `IO.rand` | ✓ | `random_get` |
| `IO.sleep`, `Std.Async` (`async`, `await`, `sleep`, timers), `Async.block` | ✓ | An event loop over `poll_oneoff` |
| `Task.spawn`, `IO.asTask`, `Task.get`, `IO.wait`, `IO.waitAny`, `IO.Promise`, `Std.Mutex`, condition variables | ✓ | Cooperative, on one thread (see below) |
| Lean exceptions (`throw`, `try`/`catch`), panics | ✓ | |
| HTTP serving | ✓ | [`Lasm.Fetch`](FETCH.md) |
| Sockets, DNS (`Std.Net`, `Std.Http` server), processes, signals | — | Not in WASI preview 1: clear `unsupportedOperation` errors |
| `Lasm.JS` | — | No JavaScript: `Lasm.JS.isAvailable` is false and calls fail clearly |
| Deep recursion | Bounded | By the engine's Wasm stack (wasmtime: `-W max-wasm-stack=…`) and an 8 MiB C stack (1 MiB on Fastly) |

### Concurrency

The WASI program runs the cooperative, single-threaded Lean runtime that
Lasm's edge targets use ([EDGE.md](EDGE.md#1-single-threaded-lean-runtime)):
tasks are real Lean tasks with priorities, dependencies and cancellation, but
they run one at a time and switch only where a task waits. A blocking wait
(`Task.get`, `IO.wait`, `IO.sleep`, `Async.block`) runs other queued tasks;
when nothing can run, the runtime sleeps in `poll_oneoff` until the next timer.
A wait that no timer or task can ever end is a deadlock, and the program stops
with a message saying so instead of hanging. There is no parallel speed-up.

### Errors and stopping

Lean errors are values and behave as natively. The runtime's C++ exceptions
(stack exhaustion detected by Lean, allocation failure) are compiled out of the
module, because exception handling is not available on every WASI engine
(Fastly Compute among them): such a failure prints its message on standard
error and exits with status 134, as an uncaught exception aborts a native
Lean program.

## How it is built

```
Lean ─▶ C ─▶ wasm64 objects (the Node build, cached) ──┐
                                                       ├─ wasm-ld ─▶ lower atomics ─▶ wasm-opt ─▶ main.wasm
  edge runtime: single-threaded libleanrt, libleancpp, │    --strip-eh --memory64-lowering
  liblasmhost, Emscripten's libc (no threads)          │    --table64-lowering -Oz
  Lasm's C WASI host (src/wasi/) ──────────────────────┘
```

- **One pipeline, no JavaScript.** The Node build's application objects and
  the pinned standard-library archives are relinked with the
  [edge runtime](EDGE.md) (the same three single-threaded archives the edge
  targets use) and Lasm's WASI host,
  [`src/wasi/lasm_wasi.c`](../src/wasi/lasm_wasi.c), with the managed link
  toolchain's clang, wasm-ld and wasm-opt. No Emscripten SDK, Python or WASI
  SDK is involved, and nothing new is downloaded beyond what edge builds use.
- **The WASI host.** Emscripten's libc normally imports JavaScript; the host
  implements those imports in C on WASI, and implements the Lean runtime's host
  operations (files, clocks, randomness, environment, timers, the completion
  queue of `Std.Async`) with WASI calls. libc's own WASI calls are translated
  from its wasm64 structures to the standard 32-bit ABI.
- **wasm64 code, 32-bit memory.** As on the edge, Binaryen lowers the wasm64
  code to 32-bit memory and tables, so the module is an ordinary wasm32 module
  for every engine, with the 64-bit C semantics of the Node build.
- **No threads proposal.** The standard-library archives are compiled with
  `-pthread`, so Lean's reference counts of objects shared with tasks use
  atomic instructions. On one thread they are equivalent to plain loads and
  stores; [`lower-atomics.mjs`](../src/wasi/lower-atomics.mjs) rewrites them,
  so engines without the threads proposal (Fastly Compute) accept the module.
- **No exception handling.** `wasm-opt --strip-eh` removes the C++ runtime's
  exception instructions (see above).
- **Cache.** The linked module is cached beside the Node build, per target; an
  unchanged build relinks nothing.

### The wasi-http component

`--target wasi-http` links the same program with
[`lasm_wasi_http.c`](../src/wasi/lasm_wasi_http.c) instead of the CGI glue:
the core module exports wasi:http/incoming-handler@0.2.12's `handle` (which
runs `main` for the request) and `cabi_realloc`, and imports wasi:http's
`types` and `outgoing-handler`, `wasi:io` and the monotonic clock directly,
with hand-written canonical ABI bindings (wit-bindgen's C uses native
pointers, which the wasm64 code cannot). libc's preview 1 calls go through
Wasmtime's `wasi_snapshot_preview1.proxy.wasm` adapter.

Turning a core module into a component is normally `wasm-tools component
new`. Every Lasm program's core module has the same imports and exports, so
the component around it is the same for every program: Lasm ships it as a
38 KB template ([`src/wasi/component/`](../src/wasi/component/), made by
[`make-component-template.mjs`](../scripts/wasi/make-component-template.mjs)
with pinned wasm-tools 1.262.0 and the adapter pinned by SHA-256) and splices
the program's module into it. No Rust tool runs at build time. CI rebuilds
the template and requires the build's component to equal wasm-tools' own
output byte for byte.

One instance serves one request (as `wasmtime serve` and Spin run it): the
Lean runtime starts, `main` runs, and `serve` answers through the response
outparam. The proxy world has no environment, arguments or files, so
`IO.getEnv` sees nothing and file operations fail.

The decisions and their alternatives are rows in [DECISIONS.md](DECISIONS.md).

## Measurements

Measured in CI run 40283046831 (ubuntu-24.04 x64, a free GitHub runner;
source `085100d`; every check passed;
[evidence](evidence/wasi-ci-40283046831.json)).

**Size.**

| Module | `main.wasm` | gzip -9 |
| --- | --- | --- |
| `examples/wasi-cli` (`--target wasi`) | 841,170 bytes (0.80 MiB) | 211,887 |
| `examples/fetch` (`--target wasi`) | 847,707 bytes (0.81 MiB) | 213,318 |
| `examples/fetch` (`--target fastly`) | 846,278 bytes; `pkg/*.tar.gz` 212,893 | 212,412 |

**Build.** 37–39 s from a clean checkout for the Node build plus the WASI link
(the link itself is about 5 s); a second target reuses the Node build (15 s),
and an unchanged build takes 1.2 s.

**Command-line program** (`examples/wasi-cli`): the whole process, from start
to exit, of a run that exits at once (best of 5), and the `check` run (files,
two sleeps of 25 and 20 ms, tasks, Std.Time):

| Engine | Startup + exit | `check` |
| --- | --- | --- |
| wasmtime 49.0.4 | 13.7 ms | 529 ms |
| wasmer 7.4.2 | 30.1 ms | 511 ms |
| Node 26.12.1 `node:wasi` (includes Node's own start) | 67.2 ms | 120 ms |

**HTTP** (`examples/fetch`, `Lasm.Fetch`): 22 checks per host (21 routes and
`HEAD`; Viceroy has no host environment, so the `/env` route is skipped
there). Per request: 50 sequential `GET /` from the harness, over HTTP;
CGI runs start one engine process per request.

| Host | Per request (median / p90) | Ready after start | 20 concurrent 200 ms `Std.Async` waits |
| --- | --- | --- | --- |
| Viceroy 0.21.1 (Fastly; a fresh instance per request) | 1.61 / 1.75 ms | 611 ms | 216 ms |
| Spin 4.2.2, wagi (a fresh instance per request) | 1.93 / 2.51 ms | 1,039 ms | 222 ms |
| Node (`lasm build`, `node:http`) | 0.86 / 1.00 ms | 413 ms | 214 ms |
| Deno 2.9.6 (`--target deno`) | 0.82 / 0.98 ms | 215 ms | 219 ms |
| CGI under wasmtime (process per request) | 15.9 ms mean | — | — |
| CGI under wasmer | 31.7 ms mean | — | — |
| CGI under `node:wasi` | 68.4 ms mean | — | — |

Viceroy and Spin start a new instance of the module for every request and
still answer in under 2 ms: Lean's initialization of the reachable modules is
cheap. Spin 4.2 prints that its wagi executor "will be deprecated in a future
version"; it is the executor for preview 1 modules today.

## Not done

- **A wasi-http component with `wasi:cli` imports** (environment,
  arguments, files through `wasi:filesystem`): the component targets the
  proxy world, which has none.
- **Fastly APIs beyond requests and stores**: cache, geolocation, device
  detection, logging endpoints, rate limiting.
- **Sockets in `--target wasi`**: preview 1 has none; `--target wasi-http`
  sends HTTP requests instead.
