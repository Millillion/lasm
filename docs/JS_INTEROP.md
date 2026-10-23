# JS/npm interop: threading architecture (Phase 4, step 1)

Status: **measured prototype, recommendation awaiting the user's review** (2026-10-22).
Nothing here is a supported Lasm interface. Step 2 (the `Lasm.JS` API) has not started.

- Prototype source and measurement scripts: [`experiments/js-interop/`](../experiments/js-interop/)
  (throwaway; kept so the numbers can be reproduced).
- Evidence: [js-interop-calls-2026-10-22.json](evidence/js-interop-calls-2026-10-22.json)
  (call costs, synchronous callbacks, compatibility, stack depth) and
  [js-interop-load-2026-10-22.json](evidence/js-interop-load-2026-10-22.json) (HTTP load).
- Host: Linux x64 (local, 12 threads, desktop workload running; same-run ratios are more
  reliable than absolute numbers). Node 26.12.1 (V8 14.6), Emscripten 6.0.9, Lean 4.35.0,
  application runtime `7aa5028c…` (the current pin). **No runtime rebuild was needed.**

## Options

**A. Message passing (Lasm today).** Lean runs on pthreads (`PROXY_TO_PTHREAD`; Lean 4.35's
`lean_run_main` also starts its own main thread). A JS call is a host call over the
existing shared-memory slot RPC: the Lean thread waits in `emscripten_futex_wait`, Node's
main thread serves the slot from `Atomics.waitAsync`. JS→Lean callbacks are queued to a
Lean dispatcher thread, which long-polls for batches (one RPC per batch) and returns the
results with the next poll; JS gets a promise.

**B. JSPI.** Lean main runs on Node's main thread (no `PROXY_TO_PTHREAD`,
`LEAN_MAIN_USE_THREAD=0`), linked with `-sJSPI`. JS calls are direct imports; a promise
result suspends the Wasm stack (`WebAssembly.Suspending`). JS→Lean callbacks call a
`WebAssembly.promising` export directly. Lean's blocking waits on the main thread
(`Task.get`, `IO.wait`, mutexes, `pthread_join`) were made to suspend on
`Atomics.waitAsync` by wrapping `emscripten_futex_wait` at link time. Lean's other
threads keep the slot RPC.

**Hybrid considered:** B's binary with Lean main on its own pthread (the 4.35 default) is
just A with JSPI overhead (measured: same 16–18 µs calls). Another hybrid, Lean main plus
the JS libraries in one dedicated worker isolate, has B's blocking problems in that isolate
and A's crossings for everything else; it was not built.

### Toolchain facts (measured)

- Node 26.12.1 ships JSPI unflagged (`WebAssembly.Suspending`/`promising` present).
- Emscripten 6.0.9 links and runs `-sJSPI` with `MEMORY64`, `-pthread`, `-fwasm-exceptions`
  and `MAIN_MODULE=2` (micro test and the full Lean link). JSPI is a link-time Binaryen pass:
  B was produced by relinking A's kept objects and the unchanged runtime archives (30–42 s,
  0.7–1.2 GiB peak). The Node link driver's recorded recipe does not cover `-sJSPI`; the
  Python emcc driver was used.
- Under `-sJSPI` Emscripten starts **every** pthread through a promising entry, so all Lean
  threads, not only main, run on V8 secondary stacks.

## Measurements

Lean→JS calls: 20,000 calls per run, 3 runs (ranges over runs). "Mean" is the loop total
divided by the count. Median and p99 time each call with `IO.monoNanosNow`, which itself
costs about 1 µs in a sample (its own row "clock": 0.9–1.2 µs median).

| Measurement | A (message passing) | B (JSPI, Lean on main) | Ratio |
| --- | --- | --- | --- |
| No-op call: mean / median / p99 | 16.0–17.0 / 15.4–21.8 / 44–64 µs | 0.83–0.92 / 1.4–1.5 / 3.8–5.2 µs | ~18× |
| `Math.random()` (8-byte reply): mean / p99 | 16.4–17.8 / 43–57 µs | 1.0–1.2 / 4.4–15 µs | ~15× |
| Dynamic `f(...JSON)` call (handle + JSON args/result): mean / p99 | 19.5–20.0 / 51–52 µs | 2.3–2.4 / 16–18 µs | ~8.5× |
| Await an already-resolved promise, blocking the caller: mean / p99 | 17.3–18.3 / 53–72 µs | 1.6–1.7 / 15–17 µs (suspends) | ~11× |
| Await a resolved promise as a Lean task (op 94 + completion thread, then `IO.wait`): mean / p99 | 36–45 / 96–110 µs | 34–42 / 86–111 µs | ~1× |
| Synchronous JS→Lean callback (`Array.prototype.sort` with a Lean comparator, 93,855 comparisons) | 9.2–9.5 µs per comparison; the main thread blocks in `Atomics.wait` meanwhile | 0.16–0.23 µs per comparison (direct export call) | ~50× |

Engine floor without Lean ([`micro/`](../experiments/js-interop/micro/)): a Wasm→JS
import costs 8–20 ns, a JS→Wasm export 14–26 ns, a JSPI await of a resolved promise
220 ns, and a suspending import that returns a plain value 118 ns. So B's ~1 µs per call is
Lasm's host protocol (byte copies, dispatch, reply objects); A's ~16 µs is two thread
wake-ups.

HTTP: keep-alive `GET /health`, closed loop from a separate process, 2 s warm-up + 8 s,
2 rounds (means). Every Lean variant runs the same Lean handler (`String → IO String`).

| Server | c=1 req/s, p50/p99 ms | c=16 req/s, p50/p99 ms | Server CPU ms/req (c=16) |
| --- | --- | --- | --- |
| Plain Node `http`, JS handler (ceiling) | 21,544, 0.04/0.11 | 43,345, 0.33/0.80 | 0.023 |
| **A**: Node `http` + Lean callback queued to a Lean dispatcher thread | 10,725, 0.08/0.21 | **36,978**, 0.41/0.82 | 0.032 |
| B: Node `http` + Lean closure called directly (64 MiB JSPI stacks) | 11,011, 0.08/0.21 | 14,646, 0.99/2.26 | 0.069 |
| B: same, default ~1 MiB JSPI stacks | 16,142, 0.05/0.15 | 27,807, 0.53/1.26 | 0.036 |
| B: Node `http` + queued dispatcher, which runs on the main thread | 15,840, 0.06/0.14 | 24,478, 0.60/1.34 | 0.042 |
| **Baseline**: current Lasm `Std.Http` server (robustness fixture) | 334, 2.97/4.22 | 1,311, 12.1/16.0 | 4.4 |

Handlers that await a JS promise (a 0–1 ms timer; each handler checks that its bytes came
back unchanged), c=16: A with one Lean task per request (the task blocks a Lean thread
while it waits) 5,919 req/s, p99 4.5 ms; B direct 8,805 req/s, p99 3.2 ms (8,735 with
1 MiB stacks). There were no errors and no mismatches in 280,000 B requests.

Observations:
- With an inline handler, A reaches 85 % of plain Node at c=16 and 28× the current
  `Std.Http` server. Lean runs on its own core and one RPC carries a whole batch of
  callbacks.
- B puts JS, the event loop and Lean on one core, so it is slower than A under concurrency
  despite cheaper calls. Every promising call also allocates a JSPI stack: with the 64 MiB
  stacks Lean needs, B's direct callbacks halve in throughput (14.6k vs 27.8k req/s).
- A's weak spot is handlers that block a Lean thread while awaiting. Step 2 should await
  through Lean promises/tasks (the completion-thread path), not blocking calls.

## Compatibility

Same checks in both configurations (`compat` in the prototype; JSON lines in the evidence).

| Check | A | B (Lean on main) |
| --- | --- | --- |
| `Task.spawn` + `Task.get`; `IO.asTask` with file IO + `IO.wait`; 8 tasks making JS calls; `IO.sleep`; `Std.Mutex` contention (4 tasks) | pass | pass, **only after three fixes** (below) |
| `Std.Async`: `Async.block` with `Async.sleep`, `Async.async`/`await` | pass | pass after the fixes; hung before them |
| JS exception → Lean `IO.Error` (`TypeError: boom from JS`); rejected promise → task `Except.error` | pass | pass |
| Lean error in a callback → rejected JS promise | implemented (status 1 → `reject`) | message only (`lean_io_error_to_string` is not C-visible; the prototype returns a fixed text) |
| JS handles owned by Lean: 20,000 handles released by Lean reference counting (finalizer → `lasm_node_release`) | pass (20,000 released) | pass |
| Recursion 100k / 1M frames (64 MiB Lean stack requirement) | pass | **crash** (uncatchable `RangeError`) with the default ~1 MiB JSPI stack; passes only with `v8.setFlagsFromString('--stack-size=65000 --wasm-stack-switching-stack-size=65536')` at run time |
| Synchronous JS operation that waits for a Lean thread (A's comparator protocol) | works (9 µs per call) | **deadlocks** (Lean is the main thread); measured timeout |

The three B fixes, each found as a hang or crash:
1. `Atomics.waitAsync` keeps neither Node's event loop nor Emscripten's runtime alive. Without
   a ref'd handle the process exited silently. Without `runtimeKeepalivePush`, a later
   `callUserCallback` ran `terminateRuntime`. That zeroed the main thread's `pthread_self`,
   so the next wait blocked the event loop for good.
2. V8 throws `SuspendError: trying to suspend JS frames` as soon as a `Suspending` import is
   **called** with JS frames on the stack, even if it would return a plain value. A proxied
   `pthread_create` (JS → Wasm on a pthread) killed the worker. The wrapper must not call the
   import at all off the main thread.
3. Pthread entry points are promising under `-sJSPI`, so Lean pthreads also get ~1 MiB stacks.
   A deep recursion on a pthread aborted with "Stack overflow detected".

Fact 2 also means that **in B, Lean code called synchronously from JS (a comparator, an
Emscripten-internal JS→Wasm entry) cannot make any host call or wait on a contended lock**:
`IO.println` there would trap (inferred from fact 2; not run). A prototype counter makes asynchronous results there an error,
but the trap happens before JavaScript runs.

Lifetime, JS→Lean (expected, not measured): a Lean closure exposed to JS stays in a
Lean-side table and the JS function is registered with `FinalizationRegistry`. In A the
release travels in the dispatcher's next batch; in B it is a direct `lean_dec` export call.

Open B hazard (verified in the disassembly, not observed as a failure): all JSPI stacks on
the main thread share one linear-memory shadow stack (`__stack_pointer`). Emscripten 6.0.9
neither saves nor restores it around suspending imports. With two suspended callbacks, the
one that resumes first can reuse the other's live C frames. The 280,000 awaiting requests
showed no corruption, but they ran identical handlers, so this does not establish
correctness.

## Recommendation: A (message passing), extended

Choose **A** as the architecture for step 2.

Reasons:
1. **Lean's runtime model is unchanged.** Tasks, blocking IO, mutexes, `Std.Async`, the
   64 MiB stacks and Lean 4.35's own main thread all work as they do today (all checks pass).
   B needs a futex rewrite on the main thread, `LEAN_MAIN_USE_THREAD=0`, internal V8 stack
   flags and a JSPI link pipeline. The prototype hit three silent failure modes on the way,
   one rule (no host call under JS frames) that cannot be lifted, and one unresolved hazard
   (shared shadow stack).
2. **A is faster where Lasm's target workload is: servers.** It serves 37k vs 14.6k req/s
   (c=16, 64 MiB stacks) because Lean runs in parallel with Node's event loop.
3. **A is cheap to ship.** It needs host JavaScript, a Lean library with a C shim (compiled
   like package C) and no runtime re-pin. A JSPI change would touch the link recipe, host
   prelude and runtime identity on all five platforms.

Costs to accept with A, and how step 2 addresses them:
- **~16 µs per Lean→JS call** (B: ~1 µs). Bindings should be coarse-grained: one call per
  operation, values passed in one compact encoding (primitives inline, objects as handles,
  JSON for plain data), batch-friendly APIs. A pg query or a JWT verify is 1–3 calls.
- **Synchronous callbacks cost ~9 µs each and block the event loop** while they run. A
  callback that makes a JS call deadlocks, because the main thread is waiting. Step 2:
  async callbacks first; synchronous callbacks documented with this cost, and the main
  thread serves nested *synchronous* host calls inline while it waits (async ones fail
  with a clear error).
- **Awaiting handlers must not block Lean threads**: JS promises become Lean tasks through
  the existing completion thread (op 94/95), and callbacks run as tasks.

When to revisit: if real bindings turn out to be chatty (many tiny calls per request) and
the ~16 µs dominates, JSPI is the lever. Revisit it then, ideally once Emscripten
virtualizes the shadow stack per JSPI stack and V8 has growable stacks.

## API sketch for step 2 (not implemented)

```lean
namespace Lasm.JS
opaque Value : Type                -- a JS value held in the host's handle table; finalizer releases it
def global : IO Value                                   -- globalThis
def require (specifier : String) : IO Value             -- node:… built-ins and node_modules (step 3)
def Value.get (o : Value) (key : String) : IO Value
def Value.set (o : Value) (key : String) (v : Value) : IO Unit
def Value.call (f : Value) (args : Array Value := #[]) (this : Option Value := none) : IO Value
def Value.callMethod (o : Value) (name : String) (args : Array Value := #[]) : IO Value
def Value.new (ctor : Value) (args : Array Value := #[]) : IO Value
def Value.typeOf (v : Value) : IO String
-- Promises: Lean tasks resolved by the runtime's completion thread (no blocked Lean thread).
def Value.toTask (p : Value) : IO (Task (Except IO.Error Value))
def Value.await (p : Value) : IO Value                  -- blocks the calling Lean thread; prefer toTask / Async
-- Std.Async integration: `await (← p.toTask)` inside `Async`

class ToJS (α : Type) where toJS : α → IO Value
class FromJS (α : Type) where fromJS : Value → IO α     -- mismatch error names the expected Lean type and the JS value
-- Instances: String, Nat/Int (number or BigInt), Float, Bool, ByteArray (Uint8Array), Array, Option (null/undefined),
-- Unit (undefined), Lean.Json (structured clone of plain data), Value; `deriving ToJS, FromJS` for structures (objects).

-- Lean functions as JS callbacks. Async first: JS receives a function that returns a Promise,
-- queued to a Lean dispatcher and run as a task. The sync form blocks the event loop (~9 µs each).
def Value.ofFn (f : Array Value → IO Value) : IO Value
def Value.ofSyncFn (f : Array Value → IO Value) : IO Value

-- Typed one-line bindings: glue generated from the Lean type.
@[js "jose" "jwtVerify"] opaque jwtVerify : (token : String) → (key : Value) → IO (Task (Except IO.Error Value))
@[js "node:crypto" "randomUUID"] opaque randomUUID : IO String
-- Return type `IO α`: a returned promise is awaited, then converted with FromJS α.
-- Return type `IO (Task (Except IO.Error α))`: not awaited on the calling thread.
end Lasm.JS
```

Implementation outline, from the prototype:
- Host operations in a new host module, for example ops 200–239 (dispatch, handle table
  with its own id range, value encoding, callback queue, `FinalizationRegistry` releases),
  reached through `lasm_node_call`.
- The C glue ships in a Lasm-provided Lean package. Natively every call fails with
  "JavaScript interop requires Lasm", so pure logic stays testable natively.
- The prototype reached the completion thread through `lean_uv_random`, and the shared
  memory for synchronous callbacks through a `WebAssembly.Memory` proxy. Step 2 needs small,
  explicit hooks in `host-pre.js`/`host-library.js`: link inputs, not runtime archives.
  Check the identity implications before the change.

## Reproduce

```sh
export PATH="$PWD/.cache/node-26.12.1/bin:$PATH"   # Node 26.12.1
RT=…/targets/lean-4.35.0-wasm64                    # application runtime bundle of the current pin
experiments/js-interop/build-a.sh "$RT" "$PWD/.work/js-interop" 1           # A, under run-bounded + base-pages
WORK=$(ls -dt .work/js-interop/proto-src/.lake/lasm/applications/*/.build-* | head -1)
node scripts/full-lean/run-bounded.mjs -- python3 scripts/full-lean/base-pages.py env BINARYEN_CORES=1 EMCC_CORES=1 \
  node experiments/js-interop/jspi/relink.mjs "$WORK" .work/js-interop/dist-a   # B: program-jspi.{cjs,wasm}
experiments/js-interop/micro/build.sh "$PWD/.work/js-interop/micro"
node scripts/full-lean/run-bounded.mjs --memory-mib 4096 -- node experiments/js-interop/measure.mjs NEW.json .work/js-interop/dist-a .work/js-interop/micro
node experiments/js-interop/load.mjs NEW-load.json '{"name":"A","command":["node","experiments/js-interop/run.mjs",".work/js-interop/dist-a","serve","0","0"]}' …
```

`run.mjs DIST serve PORT MODE` modes: 0 = queued, inline handler (A); 1 = direct (B);
2 = direct, awaiting handler (B); 3 = queued, a task per request, awaiting handler (A).
B needs `JSPROTO_PROGRAM=program-jspi.cjs LEAN_MAIN_USE_THREAD=0` and, for 64 MiB stacks,
`JSPROTO_V8_FLAGS="--stack-size=65000 --wasm-stack-switching-stack-size=65536"`.
