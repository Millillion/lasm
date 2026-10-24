# Edge isolates (Phase 7)

Status: **Phase 7.1 (prototype and decision), 2026-10-24, branch `phase-7`.**
Everything here is experimental and outside 0.1.0. The Node build is unchanged.
Measured behaviour is marked as measured. Plans are marked as plans.

- Prototype: [`experiments/edge/`](../experiments/edge/).
- Edge runtime build: `--profile edge` in
  [`build-application-runtime.mjs`](../scripts/full-lean/build-application-runtime.mjs),
  with the patch
  [`lean-4.35.0-edge.patch`](../scripts/full-lean/patches/lean-4.35.0-edge.patch)
  and [`runtime/edge.cpp`](../runtime/edge.cpp). CI:
  [`edge-runtime.yml`](../.github/workflows/edge-runtime.yml).
- Evidence: [edge-prototype-2026-10-24.json](evidence/edge-prototype-2026-10-24.json).
- Decisions: [DECISIONS.md](DECISIONS.md).

## Result

A Lean program runs in a V8 isolate with no threads, no native add-ons and
about 27 MiB of Wasm memory. Both prototypes answer requests under
`wrangler dev` (workerd, Cloudflare's runtime), locally, with `CI=1` and no
account:

- **Hono app.** A Hono app whose routes are Lean functions (`Lasm.JS`). It
  serves `GET /`, `/hello/:name`, `POST /echo` (awaits `c.req.json()`),
  `/json` (100 records), `/tasks` (`Task.spawn`, `IO.asTask`, `Task.get`) and
  `/health`.
- **Pure Lean.** A pure-Lean router with no npm package. It serves fib, a prime
  sieve, big numbers, `HashMap` word counts, time, env, blocking and `Async`
  sleeps, `Async.block`, `Std.Mutex` with tasks, and thrown errors.

The same build also runs on Node 26.12.1, Deno 2.9.6 and **Bun 1.4.4**.

**Recommended architecture:**

- A cooperative, single-threaded Lean runtime: one stack and an event pump.
- `Async` code needs no stack switching.
- **JSPI** is used only so that blocking waits can suspend. It is never on the
  hot path.
- wasm64 code lowered to 32-bit memory (`-sMEMORY64=2`). This reuses the
  verified standard-library archives.
- A pure-JS host that uses web-standard APIs only.
- **Asyncify is rejected:** it makes builds 2.2× larger and 2–3× slower to
  compute, and JSPI is available on every runtime we target.

## Platform facts

### Engine features (measured)

These were measured by instantiating tiny Wasm modules, with a real JSPI
suspension ([`experiments/edge/feature-probe`](../experiments/edge/feature-probe/)).
The results are in the evidence file.

| Runtime | JSPI (`Suspending`/`promising`) | memory64 | Legacy EH | exnref | Threads |
| --- | --- | --- | --- | --- | --- |
| workerd 1.20261019.1 (wrangler 4.152.0, V8 15.7) | **yes**, no flag or compatibility flag | yes | yes | yes | no ("Threading is not possible in Workers") |
| Bun 1.4.4 (JavaScriptCore) | **yes** (since 1.3.14) | **no** (needs `BUN_JSC_useWasmMemory64=1`) | yes | yes | n/a |
| Deno 2.9.6 (V8 15.0) | yes | yes | yes | yes | n/a |
| Node 26.12.1 | yes | yes | yes | — | n/a |
| Node 24.13.1 | **no** | yes | yes | no (flag) | n/a |

Bun has an open JSPI regression in 1.4.0–1.4.3 involving Wasm tail calls
(oven-sh/bun#46376). Lasm's runtime emits no `return_call`.

### Platform limits (from documentation, fetched 2026-10-24)

| Platform | Code size | Memory | CPU | Startup |
| --- | --- | --- | --- | --- |
| Cloudflare Workers ([limits](https://developers.cloudflare.com/workers/platform/limits/), updated 2026-10-12) | **64 MiB uncompressed, Free and Paid**. "There is no compressed size limit." The old 3 MB / 10 MB compressed limits ended 2026-09-04 ([changelog](https://developers.cloudflare.com/changelog/post/2026-09-04-increased-worker-size-limit/)) | 128 MB per isolate, JS heap plus Wasm | Free 10 ms per request; Paid 30 s by default, up to 5 min | 1 s to evaluate the global scope (error 10021) |
| Vercel Edge ([docs](https://vercel.com/docs/functions/runtimes/edge)) | gzip: 1 MB Hobby, 2 MB Pro, 4 MB Enterprise | not stated (unverified) | not stated; must begin responding within 25 s | — |
| Netlify Edge ([limits](https://docs.netlify.com/build/edge-functions/limits/)) | 20 MB compressed | 512 MB | 50 ms | — |
| Deno Deploy ([limits](https://docs.deno.com/deploy/pricing_and_limits/)) | 1 GB | 512 MB | not stated | — |
| Supabase Edge Functions ([limits](https://supabase.com/docs/guides/functions/limits)) | 20 MB (CLI bundle) | 256 MB | 2 s | — |

Vercel now recommends migrating from its edge runtime to Node. Next.js 16.3
dropped `runtime = 'edge'`.

### Workers' global scope (measured under wrangler dev)

- `crypto.getRandomValues` and `crypto.randomUUID` throw "Disallowed operation
  called within global scope".
- `Math.random` works.
- `Date.now()` and `performance.now()` return 0.
- Timers and I/O are disallowed.
- Wasm must be bundled (`CompiledWasm` rule). Compiling bytes at run time is
  forbidden.

Lean starts in the global scope once two sources of random bytes there use a
fallback:

- the allocator's and libc++'s `random_get`;
- `IO.getRandomBytes` while module initializers run, because Lean's
  `IO.stdGenRef` seeds itself.

## Options and measurements

Host: Linux x64, Intel i7-9750H, desktop workload running. Program: the
pure-Lean prototype unless noted. "µs/request" is the mean of 3,000 calls of
the Lean handler through `Lasm.JS`, as the Worker makes them.

### 1. Single-threaded Lean runtime

**Lean's own behaviour without threads.** Lean's `MULTI_THREAD=OFF` has no task
manager:

- `Task.spawn` runs its closure immediately.
- `IO.Promise.new` panics ("called before the task manager is running"). This
  rules out `Std.Async` and `Lasm.JS`, which are built on promises.

**The edge patch.** The patch keeps Lean's real task manager (queues, priorities,
dependencies, cancellation, `bind`) and removes its workers:

- **Queued tasks run** when the host pumps, or inside a blocking wait.
  `wait_for` and `wait_any` run other queued tasks on the waiting stack.
- **When nothing is runnable** and the awaited task depends on an outside event,
  `lasm_coop_block` polls host events, then suspends (JSPI) or stops the
  instance with a clear message.
- **The task manager stays alive** after `main` returns, so handlers keep
  working. Dedicated-priority tasks share the thread.
- **`IO.sleep`** (`lean_dbg_sleep`) becomes a host timer.
- **Condition-variable waits** run another task, or wait for an event.

The host bridge's completion thread is replaced by `runtime/edge.cpp`'s pump. It
polls completed host operations (op 95, non-blocking) and `Lasm.JS` events
(op 209, non-blocking), resolves their promises and runs tasks until both are
empty.

| Check (all engines, JSPI build) | Result |
| --- | --- |
| `Task.spawn` + `Task.get`, `IO.asTask` + `.get`, inside an `Async` handler | pass |
| `Std.Async`: `async`/`await`, `sleep`; 100 concurrent requests each sleeping 50 ms | pass, 63–81 ms total |
| `Async.block` inside a handler (a blocking wait for an `Async` timer) | pass |
| `IO.sleep 20`, 5 concurrent requests | pass, 21 ms total: blocking waits nest, and the other requests run meanwhile |
| `Std.Mutex` with 8 `IO.asTask` writers | pass (count 8) |
| Lean error in a handler → rejected JS promise | pass |
| `Lasm.JS`: Hono routes, `callMethodAwait` in `Async`, typed binding (`@[js "hono" "new Hono"]`) | pass |
| Non-tail recursion depth | 10,000 frames pass on Node, Deno and workerd, 30,000 on Bun. 30,000 exhausts V8's default stack. Node's full profile passes 1,000,000 |
| Stack exhaustion or a trap | the instance stops: pending calls reject with the cause. The prototype Worker starts a fresh instance on the next request (measured: 3 ms with compiled code cached) |

**What breaks or differs.** These are inherent to one thread:

- **No parallelism.** Tasks interleave only where they wait. A task that
  computes forever without waiting blocks the isolate.
- **Blocking waits nest.** An outer blocking wait resumes only after the inner
  ones finish.
- **Locks never contend.** A task that blocks while it holds a `Std.Mutex` can
  let another task enter, because locks are no-ops.
- **Recursion depth** is bounded by the engine's Wasm stack, not by Lean's 64 MiB
  stack. Workers cannot raise it.
- **`IO.Process.exit` fails.** An isolate cannot exit.

### 2. Waiting on JS promises: JSPI vs Asyncify vs none

| Build (pure-Lean program) | `program.wasm` | gzip -9 | brotli 11 | Start, Node / Deno / Bun / workerd* | Trivial µs/request (Node / workerd) | fib 20 µs (Node / workerd) | Blocking waits |
| --- | --- | --- | --- | --- | --- | --- | --- |
| **JSPI** | 1,453,476 | 235,327 | 169,725 | 53 / 57 / 22 / 70 ms | 29.6 / 37.5 | 115 / 129 | work (suspend) |
| none (sync) | 1,452,507 | 234,906 | 169,158 | 53 / 64 / 20 / 86 ms | 24.6 / 46 | 112 / 118 | stop the instance with a message |
| Asyncify | 3,242,571 (2.2×) | 453,948 (1.9×) | 287,255 | 109 / 125 / 30 / 126 ms | 38.8 / 66.5 | 324 / 321 (2.5–2.8×) | work |

\* workerd's start is measured on the first request (local workerd advances
its clock then). It includes lazy Wasm compilation.

The Hono app shows the same pattern: JSPI 1,330,754 bytes, sync 1,329,785,
Asyncify 2,960,465. Asyncify also slows the JSON route (412 vs 357 µs per
request).

**JSPI costs nothing measurable on the hot path:**

- It adds 900 bytes of Wasm.
- Only two promising entries (the pump and `main`) and one suspending import
  (`lasm_edge_wait`) exist.
- Ordinary host calls are plain imports. A host call whose result is a promise
  returns "pending", and the runtime then runs other work until it settles.

**The JS_INTEROP.md (Phase 4) hazards are avoided by design:**

- **SuspendError with JS frames on the stack.** The suspending import is called
  only after a plain `lasm_edge_can_wait()` check: inside a promising entry and
  not inside a synchronous JS→Lean callback. Elsewhere a blocking wait fails
  clearly.
- **The shared C shadow stack is not saved across suspension** (Emscripten
  6.0.9). The hazard needed two suspended stacks. Here only one Lean stack ever
  exists: events that arrive while it is suspended queue in the host, and the
  resumed stack processes them.
- **The 1 MiB JSPI stacks** bound recursion as before. That is the depth limit
  above.

Asyncify works (wasm exceptions included) but costs size, speed and startup on
every route. Bun is not a reason to use it, because Bun 1.4.4 has JSPI.

**Decision: JSPI**, with a no-JSPI (sync) link kept as a per-target fallback for
hosts whose engine lacks JSPI. Under that fallback, `Async` programs work
fully; only blocking waits stop the instance.

### 3. wasm32 vs wasm64

| Build | `program.wasm` | Trivial / fib 20 / primes 10k µs (Node) | Runs on Bun |
| --- | --- | --- | --- |
| wasm64 code, **lowered to 32-bit memory** (`-sMEMORY64=2`) | 1,453,476 | 29.6 / 115 / 232 | **yes** |
| wasm64 (memory64) | 1,372,859 (−5.6 %) | 27.1 / 130 / 282 | no (memory64 is off in Bun) |

Lowering costs 5.6 % code size and no speed. It is the only form that runs on
Bun.

**True wasm32 (rejected for now).** It would recompile every standard-library
module for wasm32. Its benefit (smaller pointers in the heap and code) was not
measured. Generated C from a 64-bit host and 32-bit `size_t` would also need
the full upstream suite again.

**Decision: lowered wasm64** (Lasm's existing `memoryMode 2`). Its benefits:

- 64-bit C semantics identical to the Node profile;
- the pinned, verified standard-library archives reused byte-for-byte (they
  link without `-pthread`: atomics work on unshared memory);
- 32-bit memory for the 128 MB limit and for Bun.

Revisit true wasm32 if memory headroom demands it.

### 4. Pure-JS host

The Node host's native (koffi) users, and what replaces each on the edge:

| Node host (koffi) | Used for | Edge replacement |
| --- | --- | --- |
| `native-files.mjs` | stdio, files, env (`environmentValue`) | stdout/stderr → line sinks (`console.log`/`console.error`); env → string bindings (`cloudflare:workers` `env`, `Deno.env`, `process.env`); **no file system** (`ENOSYS` with a message) |
| `native-clock.mjs` (`clock_gettime`) | wall clock | `Date.now()` |
| `process.hrtime` | monotonic clock | `performance.now()` |
| `crypto.randomBytes` | `IO.getRandomBytes` | `crypto.getRandomValues` (startup fallback above) |
| `thread-id.cjs` | `IO.getTID` | constant 1 |
| `native-dns`, `native-tcp`, `node-udp`, `native-process`, `native-signals` | DNS, sockets, processes, signals | unavailable, with a message; use `fetch` through `Lasm.JS` |
| `native-abort.cjs` | abort | stop the instance |
| `require` (`node-js.mjs`) | npm modules | a static module map imported by the generated entry module |

**Host operations the prototypes used** (counted): 3 write, 22 env, 25 clock,
28 random, 70–72 timers, 94/95 async start and completion, 202 `globalThis`,
204 set, 208 reply, 209 events, 210 function. The host
([`edge-host.mjs`](../experiments/edge/runtime/edge-host.mjs),
[`edge-js.mjs`](../experiments/edge/runtime/edge-js.mjs)) uses web-standard APIs
only: no `Buffer`, no Node built-ins.

**Lean's files.** Lean needs files for `Std.Time`'s local zone
(`/etc/localtime`). 7.2 adds a tiny in-memory read-only VFS that serves a
bundled UTC zone and files the build declares. Nothing else in the edge profile
reads files.

### 5. Memory and startup

**Memory (measured).**

- Wasm memory is 26.6 MiB after startup, with `INITIAL_MEMORY` 4 MiB that grows
  and a 1 MiB C shadow stack.
- It is unchanged after 9,000 requests and 100 concurrent waiting requests.
- With the 8 MiB shadow stack it was 33.6 MiB, with the same recursion depth.
  V8's Wasm stack, not the shadow stack, limits depth.
- The Node profile reserves 128 MiB initial and 8 GiB maximum, with 64 MiB
  stacks.

That leaves about 100 MB of the 128 MB isolate for the JS heap and growth.
`mimalloc` stays: Lean's runtime calls it directly, and `dlmalloc` fails to
link.

**Startup (measured).** Startup covers instantiation, every Lean initializer and
`main`:

| Runtime | Startup | CPU |
| --- | --- | --- |
| Node 26 | 53 ms | 59 ms |
| Deno | 57 ms | — |
| Bun | 22 ms | — |
| workerd, first instance, including compilation | 55–70 ms | — |
| workerd, a later instance | 3 ms | — |

All are far inside Workers' 1 s startup limit. In the Hono Worker, Lean starts
in the global scope, so startup is not charged to a request's CPU.

The build already keeps only the initializers of reachable modules (Lasm's
selective initialization), which is the pruning that matters.

### 6. CPU per request (measured; Free plan limit 10 ms)

| Route | workerd | Node 26 | Deno | Bun |
| --- | --- | --- | --- | --- |
| Pure Lean, trivial | 0.038 ms | 0.030 ms | 0.029 ms | 0.031 ms |
| Pure Lean, fib 20 | 0.129 ms | 0.115 ms | 0.127 ms | 0.160 ms |
| Pure Lean, primes to 10,000 | 0.258 ms | 0.232 ms | 0.330 ms | 0.233 ms |
| Hono + Lean, `/health` | 0.099 ms (plain-JS route: 0.059) | | | |
| Hono + Lean, JSON of 100 records | 0.357 ms (plain-JS route: 0.078) | | | |

workerd's figures are the time inside the isolate. A Lean route costs about
0.04 ms more than the same route in JS. The JSON route's extra cost is the
`Data` conversion of 100 records. Every route is 25–260× under the 10 ms Free
limit.

### 7. Bundle size (measured with `wrangler deploy --dry-run`, no login)

| Worker | Total upload | gzip |
| --- | --- | --- |
| Hono + Lean | 1,419 KiB | 247 KiB |
| Pure Lean | 1,482 KiB | 250 KiB |

Both are 2 % of Workers' 64 MiB. They are also under the old 3 MB compressed
Free limit, and under Vercel Edge's 1 MB-gzip Hobby limit. The Node profile's
`program.wasm` for the same pure program is 1,362,926 bytes.

## Recommended architecture

```
                 ┌──────────────── generated entry module (per platform) ─────────────────┐
 request ──▶     │ export default { fetch }  ─▶  Lean's app (Hono / Lasm.JS fetch handler) │
                 │ static imports: program.wasm (CompiledWasm), program.mjs, npm modules   │
                 └───────────────┬────────────────────────────────────────────────────────┘
                                 │ attach host, run main once per isolate (global scope)
         ┌───────────────────────▼──────────────────────┐
         │ edge controller (edge-pre.js)                 │ states: idle / running / suspended
         │  • events queued by the host → pump (idle)    │ one Lean stack; a failure that unwinds it
         │  • pending host calls, innermost last         │ stops the instance (restart on next request)
         └───────┬───────────────────────────┬──────────┘
     plain imports│                           │ one suspending import (JSPI): lasm_edge_wait
         ┌───────▼────────┐        ┌──────────▼─────────────────────────────────────────┐
         │ pure-JS host   │        │ Lean runtime (wasm64 code, 32-bit memory, no threads)│
         │ edge-host.mjs  │◀──────▶│  cooperative task manager (edge patch)              │
         │ edge-js.mjs    │ ops    │  edge pump (runtime/edge.cpp), Lasm.JS edge glue    │
         └────────────────┘        └─────────────────────────────────────────────────────┘
```

- **One runtime build** serves every isolate platform. `lasm build --target X`
  differs only in the entry module and platform config: Workers' `fetch` export
  and `CompiledWasm` rule; Deno's and Netlify's `Deno.serve` / default export;
  Vercel's `?module` import; Bun's `Bun.serve`.
- **Startup.** `main` runs once per isolate at startup (the global scope on
  Workers). A program publishes its fetch handler or Hono app. Handlers run as
  Lean tasks.
- **JSPI by default.** Each target can switch to the sync link when its
  engine's JSPI is unverified or missing.

## Edge profile: Lean features

| Works (verified in 7.1) | Works differently | Not available |
| --- | --- | --- |
| All pure Lean (`Init`, `Std` data structures, big numbers without GMP, strings, `HashMap`) | Tasks are cooperative: no parallelism; they interleave at waits | Threads, parallel speed-up |
| `Task.spawn`/`map`/`bind`, `IO.asTask`, `Task.get`, `IO.wait`, `IO.waitAny` | Blocking waits (`Task.get`, `IO.wait`, `Async.block`, `IO.sleep`, `IO` awaits of JS promises) need JSPI. They run other Lean work while waiting, and nest | The file system (`IO.FS`), except the planned read-only VFS (7.2) |
| `Std.Async` (`async`/`await`, `sleep`, timers), `IO.Promise` | Recursion depth about 10,000–30,000 frames (engine stack) | Processes, signals, sockets, UDP, DNS (`Std.Net`): use `fetch` through `Lasm.JS` |
| `Std.Mutex`, condition variables (single thread) | Locks never contend | `Std.Http` server (no listening sockets on the edge; a fetch-handler API is planned) |
| `IO.println`/`eprintln` (lines to `console`), `IO.getEnv` (string bindings), clocks, `IO.getRandomBytes` | Random bytes during startup on Workers are not cryptographic, and only for initializers | `IO.Process.exit`, `IO.appPath`, `IO.currentDir` (fixed values) |
| `Lasm.JS`: values, calls, `Async` callbacks (`ofFn`, `ofFnReply`), `callAwait` in `Async`, typed bindings, `globalThis` | `require` and bindings resolve only modules the build imported statically | Native C (`extern_lib`) needing threads or POSIX; `import Lean` elaboration at run time (as on Node) |
| Errors: Lean errors reject JS promises; stack exhaustion stops the instance cleanly | Synchronous callbacks (`ofSyncFn`) cannot wait | |

## API plan: `Lasm.JS` stays source-compatible

- The Lean library is **unchanged**. The edge glue
  ([`lasm_js_edge.c`](../experiments/edge/runtime/lasm_js_edge.c)) implements
  the same C ABI. The prototype's Hono `main` is the Node template's `main`
  minus `serve` and `waitForever`.
- **New in 7.2: serving.** Add `Lasm.JS.exportDefault (v : Value)` and
  `Lasm.JS.serve (fetch : Value)`:
  - On edge targets the value becomes the entry module's default export or
    `fetch`.
  - On Node, `serve` starts `@hono/node-server`-style HTTP serving of a fetch
    function, so one `main` serves both.
  - `waitForever` returns at once on the edge, because the isolate's lifetime
    is the platform's.
- **Planned: a pure-Lean `Lasm.Fetch` handler API.** `Lasm.Fetch.serve
  (handler : Request → Async Response)` with Lean `Request`/`Response`
  structures (method, URL, headers, body bytes). It would be implemented on
  `Lasm.JS` and work on Node too: the "pure Lean" path with no npm package.
- **Module resolution.** The build collects the modules named by `@[js "m" …]`
  bindings, plus modules listed in configuration (`lasm.edge.modules` in
  `package.json`) for dynamic `require "m"`. It imports them statically in the
  entry module. An unknown module fails with a message naming the fix.

## Build plan

- **CLI.**
  - Commands: `lasm build --target workers`, plus `vercel-edge`,
    `netlify-edge`, `deno-deploy`, `supabase-edge`, and from 7.5 `deno` and
    `bun`.
  - Each compiles once with the edge runtime and writes `dist/` with
    `program.wasm`, `program.mjs`, the host modules, the entry module and the
    platform config (`wrangler.toml`), but no `node_modules` copy: the
    platform's bundler resolves npm imports.
  - `lasm package --target …` re-packages an existing build.
  - Lasm never runs `wrangler dev` or `deploy`; CI does, locally.
- **Link.** The same application objects as the Node build; only the final link
  differs:
  - `-sMEMORY64=2`, no `-pthread`, no `PROXY_TO_PTHREAD`, no `MAIN_MODULE`;
  - `-sMODULARIZE -sEXPORT_ES6 -sENVIRONMENT=web -sFILESYSTEM=0`;
  - 4 MiB initial memory with growth, a 1 MiB stack, `-sJSPI` with the pump and
    `main` as promising exports;
  - `--wrap=lean_io_mark_end_initialization`;
  - the edge JS library, pre-JS and C glue.
- **Recipe recording.** The Node link driver's recorded recipe does not cover
  this link. 7.2 records a second recipe, or uses the Python `emcc` path for
  edge targets, as the prototype does through the managed SDK.
- **Runtime.**
  - A separate prebuilt runtime is needed: Lean's C++ runtime and the host
    bridge compiled with `MULTI_THREAD=OFF`, `LASM_EDGE`, and no `-pthread`
    (`libleanrt.a`, `libleancpp.a`, `liblasmhost.a`, about 3 archives).
  - Everything else (the standard-library archives, `libuv.a`, headers) is
    reused from the pinned Node runtime.
  - CI builds it with `edge-runtime.yml`: `build-application-runtime.mjs
    --profile edge --reuse-standard-libraries …`, Linux x64. Run 40123490250 took
    8 min on a free runner, 5.4 min of it the build. The reused archives passed
    the byte-identical sampled-module check.
  - Both prototypes, relinked against that artifact (all three archives built
    without threads), pass the same checks on Node 26 and under `wrangler dev`.
  - 7.2 packages it as a runtime bundle (`lean-4.35.0-wasm64-edge`, manifest
    and hashes like the Node bundle). It ships as an on-demand tool package,
    downloaded only by edge builds, with the same checksum discipline.
- **Tests (7.2, Linux runners only).**
  - Templates built with `--target workers`, served by `wrangler dev` (pinned
    wrangler and workerd, `CI=1`, no login).
  - The same builds run on Deno, Bun and Node 26.
  - The correctness checks in this document, plus the bundle size, startup,
    memory and CPU figures recorded per candidate, as in BENCHMARKS.md.

## Risks

1. **The cooperative semantics differ from native Lean.** These programs block
   the isolate or deadlock on the edge:
   - programs that rely on parallel progress (a busy loop waiting for another
     task);
   - programs that hold a lock across a wait.

   Mitigation: document and diagnose. An idle blocking wait with nothing
   pending is a deadlock and could be reported instead of hanging.
2. **Recursion depth** is about 10k frames, against Node's 1M. Deep non-tail
   recursion in user code fails on the edge. It stops the instance cleanly, but
   the request fails.
3. **JSPI on platforms we cannot run locally.** Vercel Edge's production V8 is
   unverified. Supabase's edge runtime version is checked in 7.4. Fallback:
   the sync link (`Async` only).
4. **Bun's JSPI is young.** There is a 1.4.0–1.4.3 regression with tail calls.
   Pin and test Bun in CI.
5. **Startup random bytes on Workers are not cryptographic** while initializers
   run. A user `initialize` that needs secure randomness would get weak bytes.
   Mitigation: document. A later option is to defer a user initializer's
   randomness to the first request.
6. **Reusing the Node runtime's standard-library archives** (compiled with
   `-pthread`) in a non-threaded link. This links and runs, and atomics work on
   unshared memory. A future Emscripten could refuse it; then the edge runtime
   needs its own archive build (a cold runtime build, about 3 h in CI).
7. **The `Data` conversion cost.** JSON-heavy handlers spend about 4.5× more
   than JS on conversion. Per-request cost is still well under 10 ms. Faster
   bulk conversion is Phase 9 work.
8. **A second link recipe and runtime bundle to maintain.** Mitigation: keep the
   differences in one place (`link-edge` flags, the edge patch) and test them on
   every candidate.

## 7.2 plan (Cloudflare Workers)

1. **The edge runtime bundle.**
   - `edge-runtime.yml` produces the C++ runtime (done in 7.1, run
     40123490250).
   - Package it like `package-application-runtime.mjs` (manifest, hashes,
     notices).
   - Pin it in `src/application-runtimes.json` under an `edge` profile.
   - Run the upstream runtime-capable suite subset that has no files or
     processes against it, on Linux.
2. **`lasm build --target workers` in the compiler.**
   - An edge link in `application-link.mjs`: a recorded recipe, or the Python
     driver.
   - The edge host and controller shipped in `host/edge/`.
   - A generated `worker.mjs`, with static module imports from bindings and
     configuration.
   - `wrangler.toml` with the `CompiledWasm` rule and a compatibility date.
3. **`Lasm.JS.serve` / `exportDefault`**, and an edge `waitForever`. Hono
   template support for Workers: one `main` for Node and Workers.
4. **The read-only VFS** (a UTC zone, declared assets). The startup-randomness
   policy is implemented and documented.
5. **Instance restart** on stop inside the generated entry module.
6. **CI** (`workers.yml`, Linux only):
   - build the Hono, plain and pure-Lean templates for Workers;
   - serve them with pinned `wrangler dev` (`CI=1`);
   - run correctness checks, plus the Free-plan budget checks (bundle under
     64 MiB, startup well under 1 s, CPU per request under 10 ms with margin);
   - publish the paid-plan numbers too.
7. **Docs.**
   - A README support line ("Cloudflare Workers, tested with wrangler dev").
   - DEPLOYMENT.md and a `docs/deploy/workers.md` recipe.
   - The edge-profile restrictions in README's Lean support section.

## Reproduce

```sh
# 1. Build a Lean program with the Node pipeline, keeping the link inputs.
LASM_KEEP_LINK_WORK=1 LASM_APPLICATION_RUNTIME=…/lean-4.35.0-wasm64 node bin/lasm.mjs build Main.lean
# 2. Compile the edge runtime's changed sources (or take edge-runtime.yml's artifact).
# 3. Relink for the edge (inside run-bounded.mjs + base-pages.py):
node experiments/edge/link-edge.mjs WORK RUNTIME_OBJECTS RUNTIME_BUNDLE OUT --jspi --stack-mib 1 --initial-mib 4
# 4. Check on Node 26, Deno and Bun, then under wrangler dev:
node experiments/edge/check-pure.mjs OUT
experiments/edge/measure-workerd.sh FINAL_DIR path/to/wrangler
```
