# Server MVP

Scope and gates: [PLAN.md, "Server MVP, authorized 2026-10-17"](PLAN.md#server-mvp-authorized-2026-10-17).

## Step 1, milestone 1: Lean 4.35.0 upstream baseline (2026-10-17)

Linux x64 only. Everything here ran through installed candidate
`0.1.0-experimental.54` (SHA-256 `567ea838…aad77`, release
`node-linux-candidate-38986393273`) in stock Node 26.12.0, built by its default
Node link driver. Full evidence:
[baseline](evidence/server-mvp-lean-4.35.0-baseline-2026-10-17.json) and
[topical inventory](evidence/lean-4.35.0-server-mvp-inventory.json). **These are
extra deployed runtime re-checks of upstream tests.** The upstream registrations
stay native build-time tests, and none of this counts as an upstream suite pass.

### Inventory

A fresh [4.35.0 CTest inventory](evidence/lean-4.35.0-upstream-application-inventory.json)
records 4,219 registrations and 8,044 verified original files and links. 4.34.1
had 4,069 and 7,673. `scripts/server-mvp/inventory.mjs` picks out the 140
registrations whose original sources mention Std.Http, Std.Async, ContextAsync,
Std.Net/UV/TCP/UDP, Std.Time, Json, `IO.getEnv` or task/channel/promise APIs.
The patterns are broad on purpose, so some matches are incidental. It then parses
each elaboration test against its own header imports with
`scripts/upstream/RuntimeCommandSurvey.lean`. Topic counts overlap: http 27,
async 42, net 16, time 20, json 20, env 26, tasks 45.

| Execution category | Registrations |
| --- | ---: |
| Reviewed eval-io adapter (flat `IO Unit` `#eval`) | 21 topical (+ `tempfile`: 22 run) |
| Runtime-adapter candidates (`#guard`, `#guard_msgs` + `#eval`, bare `#eval`) | 67 (2 later excluded) |
| Compiled applications | 10 |
| Native build-time only (no runtime-checkable command) | 30 |
| Syntax survey failed (needs elaboration-aware review) | 3 |
| LSP client drivers / mixed Lake drivers / source lint (not run here) | 3 / 5 / 1 |

Changes since 4.34.1 in these areas:
- All 22 previously reviewed eval-io sources and serial markers are byte-identical.
- 21 topical registrations were added, including `async_http_idle_timeout`,
  `libuv_tcp_shutdown_pending`, `libuv_signal_retry` and `leanExportParse`.
  `lake/tests/cacheTransfer` changed. None were removed.
- Library sources changed in a few files: 3 of 48 in `src/Std/Http`
  (`URI/Config`, `Internal/Char`, `Server/Connection`), `Std/Internal/UV/TCP`,
  7 of 16 in `src/runtime/uv`, and `runtime/io.cpp`.
- Std.Async, Std.Net, Std.Time, Std.Sync and Lean.Data.Json are unchanged.

### Results (native vs Lasm)

Every case first ran its unchanged native upstream driver, which passed. That
was followed by native interpreted and native compiled runs of the parallel copy,
plus a repeat of the native compiled run. Then came the source-hidden, PATH-empty
deployment in Node.

| Set | Tests | Actions | Native | Lasm (Node) |
| --- | ---: | ---: | --- | --- |
| eval-io adapter, 22 inputs ([run 39004033361](https://github.com/Millillion/lasm/actions/runs/39004033361)) | 22 | 219 | 22/22 | **22/22**, identical output |
| Runtime adapter ([run 39006173177](https://github.com/Millillion/lasm/actions/runs/39006173177), [rerun 39008042295](https://github.com/Millillion/lasm/actions/runs/39008042295)) | 65 | 1,317 mapped | 1,313 actions ok | **1,255 pass**, 0 deployed failures |
| Compiled applications (local) | 10 | — | 9 ran, 1 compile-disabled | 7 pass, 2 build rejected, 1 skipped |
| `examples/lean-server-latest` | 20 HTTP checks + 10×2 smoke | — | 10/10 + 10/10 | **10/10 + 10/10** |

Runtime-adapter action verdicts:
- 1,255 pass.
- 45 policy-rejected builds.
- 13 failed `LeanExport` links.
- 4 adapter actions fail natively.

The mapped actions break down as 768 `#guard_msgs`+`#eval`, 290 `#guard`,
197 bare `#eval` with no messages and 62 differential `#eval`. 37 commands stay
native build-time: 18 meta-only, 15 with `#guard_msgs` specifications and 4
scoped `in` commands.

All Std.Http elaboration tests now run at deployment, and every runnable HTTP
action passes: 16 eval-io inputs plus encode 88, uri 169, headers 105,
redirect 41, string_quoting 69, h1_rfc_compliance 14 and idle_timeout 3.
`compile_bench/http_server` and `http_server_tcp` pass too. The rest of what
passed:
- Std.Time: 15 tests, 582 actions.
- Async/select/sync/tasks: 26 tests with passing actions.
- Net: `net_addr`, `networkInterfaces`, `async_dns`, `libuv_*`.
- `json2`, `jsonSurrogates`, `ioNulBytes`.

The native compiled repeat matched in every completed test, so no upstream
flake was observed.

### Classification of every non-pass

| Class | Cases | Evidence / repro | Proposed work (effort, risk) |
| --- | --- | --- | --- |
| Unsupported by design: AOT policy, broad `import Lean` or runtime environment | `json`, `json_empty`, `newdo`, `idbg_basic`, `task_iterators`, 4× `cbv_*`, `compile_bench/workspaceSymbolsNewRanges` | `import Lean` + `Json.compress` main is rejected; the same program with `import Lean.Data.Json` passes. This is documented in README "Lean support and restrictions" | Optional separately labelled "import-narrowing" adaptation for the JSON tests (S, low; not an upstream pass) |
| Lasm limitation, possible false positive: object-level kernel reachability | `kernelInterrupt` (`Lean.CoreM`), `compile_bench/ilean_roundtrip` (`Lean.Data.Lsp`) | `import Lean.Data.Lsp` + `toJson Position` is rejected on `expr/formatter/level/print.cpp.o` | Symbol-level reachability, or link pure Expr/Level/format externs (M–L, medium: size, policy) |
| Lasm bug: Lean-shipped library cannot link | `leanExportParse` (13 actions) | `import LeanExport.Parse` gives undefined `initialize_LeanExport_Parse`, `l_LeanExport_parseStream` | Package `LeanExport` objects, or reject with a clear build message (S–M, low) |
| Native compiled ≠ interpreted (upstream/native); Lasm equals native | `async_base_functions` 2 actions (`concAll`, `racerAllNotCancels`) | Interpreter ok. Native `leanc -O2` panics twice with the same output; the deployed run matches exactly | Minimize and report upstream (S) |
| Unsupported by design: runtime `importModules` | `task_iterators` 2 actions (native adapter failure) | — | None |
| Adapter-unfaithful, excluded from review | `docstringRewrites`, `versoDocs` | Token replacement changes later unmapped documentation-state commands | Native build-time only |
| Harness issues found and fixed | — | Tiered Lean has no `leanc`; first CI dispatch stopped by the guard while extracting archives; `module` files need `public def main`; doc comments became declaration docs; elab_bench driver symlink; pass limit; native/Wasm backtrace text | Done (maintainer scripts) |
| Resource stops (not failures) | CI 39003270249 (22× 4.9 of 6.08 GiB); 6 local survey pressure stops | No OOM, no swap | Done: archives download outside the comparison guard; survey runs once per import set |

### Example server

`integration/managed-http.mjs` built the unchanged Lake project with `.54`,
using the native oracle from the full release, in 1 min 27 s and peaking at
2.33 GiB. All 20 differential HTTP checks pass (10 native, 10 Node). These cover
routing, JSON/Unicode validation, revisions, concurrent mutation, binary and
chunked bodies, streamed events with a disconnecting client, limits and malformed
input, pipelining, and restart persistence.

`scripts/server-mvp/curl-smoke.mjs` passes the same 10 checks against both the
deployment and the native executable:
- curl 8.5.0 routing, 404, 201 Unicode JSON and 400 malformed JSON.
- Keep-alive: one TCP connection for two requests.
- A chunked 4 KiB binary echo, byte for byte.
- Streamed SSE events delivered in order with `transfer-encoding: chunked`.
- A raw-socket malformed request line returns 400.
- Node `fetch` reads the created todo.
- Shutdown exits with status 0.

Startup takes 0.27 s in Node and 0.04 s native.

### Resources

Local bounded runs (32) peaked at 5.50 GiB, which was the first eval-io build
including tool downloads. CI comparisons peaked at 3.8 GiB within the 6.08 GiB
runner cap. There were no OOM or swap events. Resource stops are listed above.

### Remaining for step 1

Other platforms, the 3 LSP-client and 5 mixed drivers, an elaboration-aware
review of the 3 unparsed tests, load/soak/fault tests and the three-clean-run
gate are all still to do.

## Step 1, milestone 2: robustness (load, faults, soak)

Recorded 2026-10-17. **Not yet met for Lasm:** load and fault behaviour match
native Lean on all five targets, but candidate `.54` servers leak memory until
stopped. Two Lasm leaks were found and fixed in reviewed-pending source; with both
fixes Windows passes every check and the remaining Linux/macOS growth is ~1 KiB per
request (open). Evidence: [robustness runs](evidence/server-mvp-robustness-2026-10-17.json),
[leak reproductions](evidence/server-mvp-host-leaks-2026-10-17.json).

### Harness

- Fixture `integration/fixtures/server-robustness/Main.lean`: ordinary Lean,
  `Std.Http.Server` and `Lean.Data.Json`. Routes: `/health`, JSON compute
  (`POST /json`), streaming chunked echo (`POST /echo`), `/slow/MS` (`Async.sleep`),
  `/throw` (uncaught handler exception), `/env` (`IO.getEnv`), `/stream/N`, `/big/KIB`,
  `/shutdown`. Config: `maxBodySize` 1 MiB, `maxHeaderBytes` 16 KiB, 50 headers,
  `headerTimeout` 2 s, `lingeringTimeout` 3 s, `keepAliveTimeout` 5 s.
- `scripts/server-mvp/build-robustness.mjs` builds it with the installed candidate
  (default Node link driver) and natively (`leanc -O2`, full Lean 4.35.0).
- `scripts/server-mvp/robustness.mjs` (no dependencies) runs native first, then
  Lasm, each in a fresh process with `PATH` empty:
  - **Load:** 16 and 64 keep-alive connections (Windows: 16 and 32, see below),
    3 s warmup plus 30 s measured. The mix is seeded: health 30 %, JSON 25 %,
    echo 15 % (1–16 KiB, half chunked), slow 10 %, env, stream and 64 KiB big.
    Every status and body is checked byte for byte.
  - **Faults:** 31 raw-socket cases in 6 classes, then idle connections. After each
    class the harness checks 30 verified requests and that the process is alive.
  - **Soak:** 900 s at 8 connections with a rotating fault every 2 s. External
    sampling every 5 s: `/proc` on Linux, `ps`/`lsof` on macOS, PowerShell on
    Windows. For Lasm, an opt-in `--import` diagnostic records Node heap and
    `WebAssembly.Memory` size (`robustness-diag.mjs`; no product API).
  - Ends with a final verification and `POST /shutdown`, which must exit 0.
- A watchdog stops a server above 2 GiB RSS (Windows also above 6 GiB commit) and
  records a memory cap. A fresh server then runs the next phase or fault class.
- CI: `.github/workflows/server-mvp-robustness.yml`, dispatch-only, five standard
  runners. Variant `candidate` is exact `.54`. Variant `full` is `.54` plus both
  proposed fixes, overlaid by `scripts/server-mvp/overlay-fix.mjs`; it is not a
  candidate. Artifacts are kept 7 days.

### Criteria

| Check | Pass condition |
| --- | --- |
| Load | 0 errors or mismatches at every level; no memory cap |
| Faults | Every class leaves the server alive and serving; per case, the outcome set matches native |
| Soak | After max(120 s, 25 %) of warmup: RSS slope ≤ 256 B/request; final − baseline ≤ 256 B/request + 32 MiB; Lasm Wasm memory growth ≤ 256 B/request + 16 MiB; handles ≤ baseline + 64; 0 errors; alive |
| Lifecycle | Final verification passes; shutdown exits 0; no restarts |

Growth is normalized by requests served: an application leak scales with
requests, allocator high-water growth does not. A 15-minute soak at these rates
resolves leaks of about 256 B/request.

Some fault differences are informational. A server that closes with client bytes
unread sends a TCP RST instead of a FIN. Native Lean closes with unread data, so
the client sees `server-reset` and can lose the already-sent status
(`none/error-EPIPE`). Node reads eagerly, so Lasm shows `server-close`. Status codes
must match exactly.

### Results (run [39073980437](https://github.com/Millillion/lasm/actions/runs/39073980437), variant `full`; `candidate` in the next table)

| Platform | Build | req/s c=16 | p50/p99 ms | req/s c=64 (Win: 32) | p50/p99 ms | Soak B/request | Soak RSS warm→final MiB | Passed |
| --- | --- | ---: | --- | ---: | --- | ---: | --- | --- |
| linux-x64 | native | 836 | 16/49 | 689 | 74/225 | 94 | 154→184 | yes |
| linux-x64 | Lasm | 295 | 46/120 | 262 | 214/494 | capped (2.1 GiB) in faults | — | no |
| linux-arm64 | native | 1,119 | 12/41 | 932 | 55/166 | 51 | 214→245 | yes |
| linux-arm64 | Lasm | 279 | 50/124 | 245 | 228/526 | 1,032 | 1,165→1,345 | no |
| darwin-x64 | native | 587 | 18/143 | 543 | 97/299 | 86 | 122→149 | yes |
| darwin-x64 | Lasm | 76 | 176/735 | 57 | 988/4,237 | 1,329 | 1,165→1,231 | no |
| darwin-arm64 | native | 1,984 | 6/35 | 1,407 | 42/118 | 32 | 244→277 | yes |
| darwin-arm64 | Lasm | 247 | 57/164 | 183 | 314/780 | 1,201 | 1,170→1,363 | no |
| win32-x64 | native | 3,619 | 2.6/27 | 3,986 | 6.1/32 | −1 | 38→36 | yes |
| win32-x64 | Lasm | 327 | 42/111 | 332 | 82/209 | 67 | 368→371 | **yes** |

Repeat run [39077295412](https://github.com/Millillion/lasm/actions/runs/39077295412)
agrees on every verdict. Lasm `full`:

- passes on Windows: 434 / 449 req/s, RSS 524 → 404 MiB;
- grows 608–1,352 B/request on macOS and Linux arm64;
- was capped at 64 connections on linux-x64. It was also capped during faults in the
  first run, after the 1.5 GiB high-water of the 64-connection load.

Native passes everywhere except macOS (below). Fault outcomes matched native in every
case of both runs. The only non-informational differences are cases cut short by a
Lasm memory cap: `ECONNREFUSED` while the server was being replaced.

Candidate `.54` unchanged: every Lasm server hits the 2 GiB cap within seconds of
load on all five targets and again in the soak. That is 2–3 caps per platform and
48–80 transport errors from the stopped processes. Native passes on four targets.
**Native Lean 4.35.0 is unreliable on macOS under this soak.** It failed 5 of 10
native macOS soaks across the three full runs:

- darwin-arm64 stopped answering 3 times, with all requests timing out while the
  process stayed alive with flat RSS;
- it aborted twice with `libc++abi: … condition_variable wait failed: Invalid
  argument`: darwin-arm64 in
  [39017668610](https://github.com/Millillion/lasm/actions/runs/39017668610) and
  darwin-x64 in 39077295412.

Lasm never hung or aborted. This is an upstream issue to report.

Throughput: Lasm reaches 10–40 % of native (Windows 9 %), and p99 latency is 2–14×
native. Startup is 0.27–0.80 s, against 0.035–0.12 s native. Lasm RSS is 0.4–1.5 GiB
under load, against 50–280 MiB native. Every Lean pthread is a Node worker isolate,
and Wasm memory never shrinks.

### Fault outcomes (identical on all five targets apart from the TCP close kind)

| Class | Case | Native and Lasm |
| --- | --- | --- |
| Handler exception | `GET /throw` (also pipelined) | 500, `connection: close`, server closes; the next request is served |
| Handler exception | JSON body over the handler's 64 KiB `readAll` | 500 (native RST, Lasm FIN) |
| Malformed | garbage request line, header without colon, missing Host, bad chunk size, CL+TE, binary/NUL | 400 + close |
| Malformed | `HTTP/7.0` | 505 + close |
| Oversized | 2 MiB body (Content-Length or chunked) | 413, then RST while the client is still sending |
| Oversized | 20 KiB of headers; 60 headers | 431 |
| Oversized | 9,000-byte header value; 9,000-byte URI | 400 |
| Slow client | slow-loris; partial headers | closed without a response within 1–6 s (`headerTimeout` 2 s) |
| Slow client | partial body then silence | 408 within 1–6 s (`lingeringTimeout`) |
| Disconnect / RST | mid-headers, mid-upload, mid-response (1 MiB), mid-stream, during a slow handler | server continues |
| Idle | 300 idle connections | all traffic served meanwhile; the server closes all 300 between 3 and 8 s (`keepAliveTimeout` 5 s) |

The only Lasm-specific message is `connection failure: cannot call write after a
stream was destroyed`. It appears about 30 times, where native reports `broken pipe`.
Informational: a handler that answers before reading the request body loses that
body (0/100 full echoes, native and Lasm). This is upstream `Std.Http` behaviour.

### Lasm bugs found (fixes uncommitted, awaiting review)

1. **Host RPC leaked a MessagePort per call.** The source is
   `scripts/full-lean/host-library.js` and `host-pre.js`. Each Lean→host call created
   a `MessageChannel`. A Lean pthread never returns to its worker's event loop, so
   `port1.close()` never completed, and about 3–4 KiB of native and V8 memory leaked
   per call for the thread's life.
   - Repro: `integration/fixtures/host-call-churn/Main.lean`, with 4 long-lived
     threads making 720,000 calls. RSS went from 590 to 2,532 MiB with `.54` and stayed
     at 323–343 MiB with the fix. 0 replies were misrouted, and the fix ran 25 % faster.
   - Fix: one reply channel per worker isolate, keyed by `threadId`. Replies carry a
     sequence number, so a call nested inside the futex wait gets its own reply. The
     main side keeps an `unref`'d port, removed on `close`.
   - Test: `test/full-host-rpc-channel.test.mjs`. It fails 3/3 against HEAD and passes
     with the fix. Existing host, glue and link-driver tests pass (54/54).
2. **`lean_uv_tcp_send`/`udp_send` leaked every sent buffer.** The source is
   `runtime/node-async.cpp`. `lean_array_uget` returns an owned reference, and it was
   never released; native libuv borrows the parts.
   - Repro: `integration/fixtures/host-send-leak/Main.lean`, which sends 12,000
     64 KiB replies. Native grew from 10 to 25 MiB; Lasm grew from 143 to 1,168 MiB,
     with Wasm memory above 2 GiB.
   - A Wasm memory scan after 3,000 `/big/64` responses found exactly 3,000 live
     65,536-byte ByteArrays with rc = 1.
   - With the fix, 30,000 `/big/64` responses leave Wasm at 663 MiB. With only fix 1,
     Wasm grew to 5,797 MiB.
   - Rebuilding `node-async.cpp.o` from HEAD source reproduces the shipped object
     byte for byte (`b26ebc74…`), and the fixed object is `d9e9e9c2…`.
3. **Remaining after both fixes:** Linux and macOS still grow by 1.0–1.3 KiB per
   request, with Wasm memory flat. On Linux the growth is in 2–64 MiB anonymous
   (malloc arena) regions, not V8 pages. Windows is flat. The cause is open.
4. **Windows commit charge:** each Lean pthread worker commits its 64 MiB VM stack.
   At 64 connections (~75 threads) Lasm needs more than 7 GiB of commit and tripped
   the runner guard, so Windows measures 16 and 32 connections. Commit was 4.5 GiB
   at 32 connections, against 0.8 GiB RSS.

Shipping fix 2 changes the runtime archive and therefore its identity. That needs a
re-derived runtime artifact, a new `src/application-runtimes.json` pin, and review of
the new identity for `canSpecializeInitialization` in
`src/application-reachability.mjs`. Otherwise the AOT policy rejects every build
(observed). The JS files are link inputs, hashed into `buildDriverIdentity`, so cached
builds are invalidated; they are packed by `scripts/package-node-release.mjs`.

### Resources

Peaks: local runs (one at a time, under the guard) ≤ 6.3 GiB. That was a deliberate
leak run stopped proactively by the guard; no OOM or swap. CI build steps peaked at
3.7 GiB on Linux and 1.5 GiB on macOS; suite runs at ≤ 2.3 GiB. One earlier Windows
`full` run was stopped by the Job Object guard on commit (7.0 GiB). This was recorded
as a resource stop, and the Windows connection levels were changed.

### Remaining

- Review and ship fixes 1–2 in a candidate.
- Find the residual ~1 KiB/request growth.
- Reduce the per-thread memory and commit cost.
- Report the native macOS hang/abort upstream (`condition_variable wait failed`).
- Run three consecutive clean five-platform runs.
