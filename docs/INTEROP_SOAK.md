# Interop soak (Phase 5.2, 2026-10-23)

Express and Hono servers with Lean handlers under steady keep-alive load, with a
mix of error paths, to find handle, callback and memory leaks in `Lasm.JS`.
**Result: no leak found; all 10 runs passed** (run
[39976075315](https://github.com/Millillion/lasm/actions/runs/39976075315),
candidate `0.1.0-experimental.55`, source `17218c5`; evidence:
[interop-soak-2026-10-23.json](evidence/interop-soak-2026-10-23.json)).

## Method

[`scripts/interop-soak/soak.mjs`](../scripts/interop-soak/soak.mjs) creates the
app with `lasm init --template express|hono`, replaces `Main.lean` with the soak
server ([Express.lean](../scripts/interop-soak/Express.lean),
[Hono.lean](../scripts/interop-soak/Hono.lean)), builds it with the installed
candidate and drives it from 16 keep-alive connections on the same runner
([`interop-soak.yml`](../.github/workflows/interop-soak.yml)). The request mix:

| Share | Request | Expected |
| ---: | --- | --- |
| 58 % | `GET /hello/Ada` | 200, JSON from the Lean handler |
| 15 % | `POST /echo` with a JSON body | 200, the body echoed |
| 5 % | `GET /throw`: the Lean handler throws | 500 (rejected handler promise) |
| 5 % | `GET /reject`: awaits a rejected JavaScript promise (`fs.readFile` of a missing file), uncaught | 500 |
| 5 % | `GET /reject-caught`: the same rejection caught in Lean | 404 with the `ENOENT` message |
| 10 % | `GET /slow/10`: awaits a JavaScript timer | 200 |
| 2 % | `GET /slow/60`, aborted by the client after 10 ms | client disconnect while the handler waits |

Every 5 s it samples the server's RSS, OS handles and threads; a preloaded
diagnostic ([`robustness-diag.mjs`](../scripts/server-mvp/robustness-diag.mjs))
records Wasm memory, the main heap and `Lasm.JS` live counts (`values`: JavaScript
values Lean holds; `pendingCalls`; `functionsLive`: Lean functions JavaScript has
not collected). Criteria, after a warm-up of 25 % (at least 120 s), as in the
`Std.Http` robustness soak: RSS slope at most 256 bytes per request and final RSS
within 256 bytes per request plus 32 MiB of the warm baseline; Wasm memory growth
likewise (plus 16 MiB); after load and 10 s idle, `values` and `functionsLive`
within 64 of the idle baseline before load and no extra pending calls; zero
unexpected responses; p99 of the last tenth of minutes at most twice the first
tenth (plus 5 ms); OS handles within 64.

## Results

Linux x64 ran 2 hours per app; the other targets 15 minutes. "Slope" is the RSS
least-squares slope after warm-up, in bytes per request; "Wasm" is the Wasm
memory growth per request; "values" and "functions" are the idle counts before →
after; p99 (ms, hello and echo) is the first → last tenth of the warm minutes.

| Target | App | Length | Requests | req/s | Errors | RSS MiB, warm → final | Slope | Wasm | values | functions | p99 ms |
| --- | --- | --- | ---: | ---: | ---: | --- | ---: | ---: | --- | --- | --- |
| linux-x64 | Express | 2 h | 11,421,894 | 1,586 | 0 | 385 → 388 | 0.5 | 0 | 3 → 3 | 8 → 8 | 40 → 40 |
| linux-x64 | Hono | 2 h | 11,336,259 | 1,574 | 0 | 384 → 387 | 0.4 | 0 | 2 → 2 | 7 → 7 | 41 → 39 |
| linux-arm64 | Express | 15 min | 1,322,907 | 1,470 | 0 | 273 → 274 | −0.6 | 0 | 3 → 3 | 8 → 8 | 40 → 38 |
| linux-arm64 | Hono | 15 min | 1,400,966 | 1,557 | 0 | 276 → 275 | 0.1 | 0 | 2 → 2 | 8 → 7 | 39 → 41 |
| darwin-x64 | Express | 15 min | 971,377 | 1,079 | 0 | 277 → 276 | −1.8 | 0 | 3 → 3 | 8 → 8 | 41 → 43 |
| darwin-x64 | Hono | 15 min | 983,723 | 1,093 | 0 | 275 → 277 | 2.0 | 0 | 2 → 2 | 8 → 7 | 46 → 42 |
| darwin-arm64 | Express | 15 min | 932,786 | 1,036 | 0 | 268 → 249 | −22.8 | 0 | 3 → 3 | 8 → 8 | 61 → 63 |
| darwin-arm64 | Hono | 15 min | 968,800 | 1,076 | 0 | 269 → 268 | −2.2 | 0 | 2 → 2 | 8 → 7 | 62 → 64 |
| win32-x64 | Express | 15 min | 1,074,806 | 1,194 | 0 | 172 → 135 | −19.2 | 0 | 3 → 3 | 8 → 8 | 48 → 41 |
| win32-x64 | Hono | 15 min | 1,133,391 | 1,259 | 0 | 153 → 131 | −7.0 | 0 | 2 → 2 | 8 → 7 | 47 → 46 |

Under load, `values` stayed at 2–3 plus one per request in flight and
`pendingCalls` at the number of requests in flight (17–19 with 16 connections and
aborted slow requests). Wasm memory did not grow on any target (319–383 MiB
reserved at start). The soak servers use `Function.ofFn`, the path that every
handler used before `Function.ofFnReply`.

## Finding: waiting handlers are bounded by Lean's worker threads

A first local version of the mix aborted 5 % of requests to a handler that
waited 300 ms. Throughput collapsed to 660 req/s with a 100 ms p99, and an
abort-only load (315 aborted requests per second) delayed a separate probe request
by 54 s, while a plain Node server with the same routes was unaffected. Cause: a
Lean callback holds a Lean worker thread while it awaits (the blocking `IO R`
binding path), and there is about one worker per CPU of the machine. 12
concurrent requests to a handler awaiting a 1 s timer took 1.1 s on a 12-CPU host
and 24 took 2.1 s, also with the process pinned to 2 CPUs. Making the await go
through a Lean promise and `IO.wait` (which lets native Lean's pool add a worker)
was tried and did not raise the limit under Lasm, so it was reverted.
`LEAN_NUM_THREADS=64` did (40 concurrent waits in 1.3 s, about 9 MB of memory per
extra worker). This is a capacity limit, not a leak; it is documented in
[JS_BINDINGS.md](JS_BINDINGS.md) ("Concurrent waiting handlers"), and the soak mix
keeps waiting handlers below a 4-CPU runner's worker count. Handlers that do not
hold a thread while they wait (an asynchronous handler API) are proposed for
Phase 7.

## Reproduce

```sh
gh workflow run interop-soak.yml -f candidate-release=node-package-RUN -f sha256=SHA \
  -f candidate-version=VERSION -f long-seconds=7200 -f short-seconds=900
# locally (Linux), with an installed candidate tarball:
node scripts/interop-soak/soak.mjs lasm.tgz .work/soak result.json --app hono --seconds 600
```
