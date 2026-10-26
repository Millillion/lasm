# WASI and Fastly Compute

`lasm build Main.lean --target wasi` turns a Lean program into one standard
WebAssembly System Interface module (`wasi_snapshot_preview1`): no
JavaScript, no host program, nothing to install beside the engine.
`--target fastly` builds the same module with Fastly Compute's host calls, in
the layout `fastly compute serve|deploy` uses.

| | `--target wasi` | `--target fastly` |
| --- | --- | --- |
| Output | `wasi/main.wasm` (+ `build-info.json`, `THIRD_PARTY_NOTICES.txt`) | `bin/main.wasm`, `pkg/<name>.tar.gz`; `fastly.toml` when the project has none |
| Runs on | wasmtime, wasmer, Node's `node:wasi`, Spin (wagi executor), any preview 1 host | Fastly Compute; Viceroy (`fastly compute serve`) locally |
| `main` | A command: arguments, environment, standard streams, exit status | Runs once per request |
| HTTP | [`Lasm.Fetch.serve`](FETCH.md) answers one CGI request per run | [`Lasm.Fetch.serve`](FETCH.md) answers the instance's request |
| Imports | `wasi_snapshot_preview1` only | `wasi_snapshot_preview1` and `fastly_abi`, `fastly_http_req`, `fastly_http_body`, `fastly_http_resp` |

CI ([`wasi.yml`](../.github/workflows/wasi.yml),
[`scripts/wasi/wasi-ci.mjs`](../scripts/wasi/wasi-ci.mjs)) builds
[`examples/wasi-cli`](../examples/wasi-cli/Main.lean) and
[`examples/fetch`](../examples/fetch/Main.lean) from source on every change
and checks them on pinned wasmtime 49.0.4, wasmer 7.4.2, Node 26.12.1's
`node:wasi`, Spin 4.2.2 and Viceroy 0.21.1. The command-line program's output
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

The [Fastly guide](deploy/fastly.md) has the details. With `--deploy spin`,
`spin up` serves the WASI build through Spin's wagi executor.

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

The decisions and their alternatives are rows in [DECISIONS.md](DECISIONS.md).

## Measurements

Measured in CI run 40299999999 (ubuntu-24.04, x64; the evidence file
[wasi-ci-40299999999.json](evidence/wasi-ci-40299999999.json)).

(The table is filled in from that run.)

## Not done

- **wasi-http and the component model** (`wasmtime serve`, Spin's native
  HTTP trigger, wasmCloud): they need a component built from WIT bindings.
  `Lasm.Fetch` serves Spin through the wagi executor instead.
- **Fastly back-end requests, KV stores and other Fastly APIs**: only the
  downstream request and response are bound.
- **WASI preview 2 sockets**: preview 1 has none.
