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

Update 2026-10-19: a third leak was found (native file workers, fix 3 below), and the
send fix has a CI-rebuilt runtime. With all three fixes, Lasm has no memory caps and
passes load and faults on all five targets. Windows passes the soak. Linux and macOS
still grow 296–602 B per request and fail the 256 B/request slope check (run
[39239133744](https://github.com/Millillion/lasm/actions/runs/39239133744), table below).
Evidence: [run](evidence/server-mvp-robustness-runtime-2026-10-19.json),
[residual analysis](evidence/server-mvp-residual-leak-2026-10-19.json).

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

### Lasm bugs found

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
   - Committed in f79ab96.
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
   - Source committed in f79ab96. CI run
     [39080448291](https://github.com/Millillion/lasm/actions/runs/39080448291) rebuilt
     the runtime: handoff `node-runtime-inputs-39080448291` (`db24c7ce…`), runtime
     identity `36cf596b…`. Compared with `7482333e…`, only `lib/liblasmhost.a` differs,
     and within it only `node-async.cpp.o`. That archive is byte-identical to the local
     experiment. The pin, the handoff source and the initialization allowlist entry are
     uncommitted, awaiting review.
   - Verified locally with a product package built from the pending changes (never
     published). The send repro served 36,000 replies with Wasm flat at 551 MiB (before:
     above 2 GiB after 12,000). The Node and emcc link drivers give byte-identical
     `program.wasm` and `program.cjs` for hello, filesystem, tcp, lean-import and the
     server fixture.
3. **Native file workers leaked on Linux and macOS (fix uncommitted, awaiting review).**
   `Std.Http` writes a `Date` header on every response. On Linux and macOS, `Std.Time`
   reads `/etc/localtime` for it each time: open, two reads, close. Windows asks the OS
   for the time zone instead, which is why Windows stayed flat.
   - Lasm runs these file operations on `worker_threads` workers
     (`src/native-file-worker-pool.mjs`). The pool kept at most 2 idle workers and
     retired them after 1 s, so many operations created and ended a worker.
   - Koffi 3.3.0 does not free its per-isolate FFI memory when a worker ends. Each
     create/terminate cycle leaked 50–100 KiB and one 2 or 4 MiB mapping. No koffi
     changelog entry up to 3.3.3 mentions this.
   - Evidence (Linux x64, local, 30 min): 593k requests. RSS grew 1,657 B/request and
     glibc in-use memory 1,302 B/request. Anonymous 2/4 MiB mappings went from 36 to
     31,696. V8 heaps and Wasm memory were flat.
   - Fix: keep up to 16 idle workers for the host's life (`unref`'d). Test:
     `test/native-file-worker-churn.test.mjs`, which fails on HEAD and passes with the fix.
   - With 8 idle workers the process exits by itself in 0.16 s. 16,000 file cycles at
     concurrency 8 create no new workers and leave fds and threads unchanged.
     24 concurrent blocking FIFO reads all complete. Above 16 concurrent operations,
     workers past the cap are still created and retired (16 per 32-wide burst).
   - After the fix, the same local soak grows 241–255 B/request and the mapping count
     stays flat (96).
4. **Remaining after all three fixes (open):** Linux and macOS grow 296–602 B/request
   in CI. Locally on Linux, a 60-minute mixed soak of the product build served 1.0M
   requests: RSS +343 B/request and glibc in-use +213 B/request, linear with no plateau.
   A glibc heap walk puts at least 94 % of the malloc growth in 65,616-byte chunks
   (about 1 per 350 requests) that hold V8 tagged pointers. Plain event-loop-starved
   workers exchanging 19M messages stay flat. `--no-incremental-marking` raises the rate
   (391 B/request). This is a true leak, not allocator high-water. The cause is not
   identified.
5. **Windows commit charge:** each Lean pthread worker commits its 64 MiB VM stack.
   At 64 connections (~75 threads) Lasm needs more than 7 GiB of commit and tripped
   the runner guard, so Windows measures 16 and 32 connections. Commit was 4.5 GiB
   at 32 connections, against 0.8 GiB RSS.

Shipping fix 2 changes the runtime archive and therefore its identity. That needs a
re-derived runtime artifact, a new `src/application-runtimes.json` pin, and review of
the new identity for `canSpecializeInitialization` in
`src/application-reachability.mjs`. Otherwise the AOT policy rejects every build
(observed). The JS files are link inputs, hashed into `buildDriverIdentity`, so cached
builds are invalidated; they are packed by `scripts/package-node-release.mjs`.

### Results with all fixes (run [39239133744](https://github.com/Millillion/lasm/actions/runs/39239133744), variant `runtime`)

Variant `runtime` is a maintainer overlay on `.54`, not a candidate: the RPC fix,
the rebuilt runtime `36cf596b…`, and the file-worker fix
(`scripts/server-mvp/overlay-fix.mjs`). Lasm had no memory caps and 0 load errors,
and every fault class matched native on all five targets. Shutdown passed everywhere.

| Platform | Lasm req/s c=16 | Lasm soak B/request | Lasm RSS warm→final MiB | Lasm soak | Native B/request | Native soak |
| --- | ---: | ---: | --- | --- | ---: | --- |
| linux-x64 | 381 | 296 | 1,834→1,900 | fail (slope) | 100 | pass |
| linux-arm64 | 320 | 417 | 1,133→1,203 | fail (slope) | 76 | pass |
| darwin-x64 | 90 | 602 | 1,192→1,227 | fail (slope) | 108 | pass |
| darwin-arm64 | 291 | 342 | 1,130→1,139 | fail (slope) | 20 | pass |
| win32-x64 | 331 | 31 | 416→412 | pass | −3 | pass |

Before fix 3 (runs 39073980437 and 39077295412, variant `full`), Linux and macOS grew
608–1,352 B/request, and linux-x64 hit the memory cap. Native macOS passed every soak
in this run.

### Resources

Peaks for the 2026-10-19 work: local runs at most 4.8 GiB (a link-driver comparison
batch that the guard stopped proactively; it was rerun one fixture at a time at
≤ 0.9 GiB). The local 60-minute soak peaked at 1.03 GiB. CI runtime rebuild: 3.9 GiB.
CI robustness: build ≤ 3.7 GiB and run ≤ 1.9 GiB.

Peaks: local runs (one at a time, under the guard) ≤ 6.3 GiB. That was a deliberate
leak run stopped proactively by the guard; no OOM or swap. CI build steps peaked at
3.7 GiB on Linux and 1.5 GiB on macOS; suite runs at ≤ 2.3 GiB. One earlier Windows
`full` run was stopped by the Job Object guard on commit (7.0 GiB). This was recorded
as a resource stop, and the Windows connection levels were changed.

### Remaining

- Review the runtime wiring (fix 2) and fix 3, then ship them in a candidate.
- Find the remaining 65,616-byte V8-related allocation (about 200–350 B/request on
  Linux; item 4). Keep the soak criterion at 256 B/request: the growth is linear,
  not a plateau.
- Report the koffi per-worker memory leak upstream.
- Reduce the per-thread memory and commit cost.
- Report the native macOS hang/abort upstream (`condition_variable wait failed`).
- Run three consecutive clean five-platform runs.

## Performance profile (2026-10-17)

A measurement pass, with no product changes. It was run on Linux x64 only, on the local
host, with the `full` build of the robustness fixture (`.54` plus both pending fixes)
and native Lean 4.35.0 (`leanc -O2`). Evidence:
[server-mvp-profile-2026-10-17.json](evidence/server-mvp-profile-2026-10-17.json).
Tools:
- `scripts/server-mvp/profile.mjs` runs the measurements under `run-bounded.mjs`.
- `profile-instrument.mjs` makes an instrumented copy of `program.cjs`. It counts every
  host RPC per operation, measures round trips on the worker side and records main-thread
  event-loop utilization (ELU).
- `profile/Main.lean` holds the in-process micro-benchmarks, built by `build-profile.mjs`.

Other maintainer workloads ran between these runs and the host load average was 1–8 on
12 threads. Same-run ratios are more reliable than absolute numbers.

### Summary

**Lasm is bound by the host RPC path, not by Wasm compute.** One keep-alive
`GET /health` makes **58 host RPCs** (63 with a new connection per request). The Node
main thread services every RPC and spends 47–64 µs of CPU on each one.

At 16 connections the main thread is saturated:
- ELU is 0.92–0.93.
- It uses 7.4 of 8 CPU-seconds.
- Throughput levels off at about 330 req/s for every route: health, JSON and 64 KiB bodies
  alike. Native serves 1,400–1,900 req/s.

The Wasm pthreads mostly wait. 95–99 % of their V8 samples sit in
`emscripten_futex_wait` (`wasm-function[850]`, which contains `memory.atomic.wait32`). The
28 Lean threads use 2.2 cores in total.

| c, route | Native req/s, p50/p99 ms | Lasm req/s, p50/p99 ms | Lasm CPU ms/request (native) | Main-thread ELU |
| --- | --- | --- | --- | --- |
| 1, health | 737, 1.3/2.0 | 128, 7.7/10.6 | 10.8 (2.4) | 0.43 |
| 16, health | 1,927, 8.3/11.5 | 338, 44/105 | 10.5 (2.8) | 0.92 |
| 16, JSON | 1,407, 11.5/15.0 | 332, 44/112 | 12.3 (4.0) | 0.93 |
| 16, `/big/64` | 1,941, 8.2/12.7 | 313, 48/113 | 11.3 (2.8) | 0.91 |
| 8, new connection each | 1,573, 4.5/14.7 | 294, 20/92 | 11.6 (3.1) | 0.92 |

### Where one request goes (keep-alive health, 58 RPCs)

| Category | RPCs per request | Latency at c=1 (sum of worker round trips) |
| --- | ---: | ---: |
| Async promise protocol: register (91), completion long-poll (92), finish (90), start check (93) | 29.4 | included below |
| Read: `waitReadable` 2.5, `cancel_recv` 2.5, `recv` 1, plus their 3.5 promises | 6 + protocol | ≈ 2.2 ms |
| Timers (`Selector.sleep` per select loop for header and keep-alive timeouts): `mk` 2, `next` 2.5, start 2.5, cancel 2.5, plus 2.5 promises | 9.5 + protocol | ≈ 2.1 ms |
| `Date` header: `DateTime.nowAt "UTC"` reads the zone file (open 1, read 2, stat 2, getenv 1, close) plus wall clock 2 | 9 | ≈ 2.2 ms |
| Write: head and body as 2 sends, plus 2 promises | 2 + protocol | ≈ 1.2 ms |
| Other releases (finalizers) | ~2 | ≈ 0.4 ms |

The round trips add up to about 8 ms, which covers the 7.7 ms request (some overlap
across threads). By the in-process benchmarks, H1 parse, routing, handler and
serialization in Wasm take ≲ 1 ms.

Unloaded round trip for a trivial synchronous RPC (`IO.monoNanosNow`): 66 µs, against
34 ns native (1,900×). Under load, most RPCs take 0.1–0.5 ms. The file operations go
through the file-I/O worker pool and take 0.3–1.8 ms.

On the main thread, during the load window:

| Share of samples | What |
| ---: | --- |
| 23 % | idle |
| 23 % | V8/native work (message deserialization, futex notify, libuv) |
| 12 % | `lasmFullHostRequest` self time |
| 6.5 % | reply cloning |
| 5.4 % | `postMessage` |
| 4.2 % | worker message dispatch |
| 2.4 % | creating `Error` objects with stacks for routine cancellations |

### Wasm compute (in-process, no network; ns/op, median of 3)

| Benchmark | Native | Lasm | Ratio |
| --- | ---: | ---: | ---: |
| `Json.parse` + compute + `compress` (64 numbers) | 24,570 | 48,933 | 2.0× |
| Build and fold a 1,000-element `List Nat` (RC, mimalloc) | 25,730 | 66,609 | 2.6× |
| One Std.Http request over the in-memory Mock transport | 1,179,733 | 4,386,147 | 3.7× (17.8 RPCs each: Date and timers) |
| `DateTime.nowAt "UTC"` (8 RPCs) | 19,475 | 1,679,261 | 86× |
| `Async.sleep 0` (7 RPCs) | 56,028 | 1,927,923 | 34× |
| `IO.monoNanosNow` (1 sync RPC) | 34 | 65,724 | 1,933× |
| `IO.currentDir` (1 async RPC) | 1,537 | 352,248 | 229× |

Pure compute runs at 2–2.6× native, which includes memory64, `-Oz` and Wasm exceptions;
memory64 was not isolated. Re-optimizing the delivered binary with wasm-opt `-O3` or
`-O2` made no measurable difference:
- JSON: 50 vs 49 µs.
- List: 58 vs 67 µs.
- health c=16: 301 and 265 req/s, against 338 req/s for `-Oz` (within noise).

A `-O3` relink is not a lever while the RPC path dominates.

### Startup (median of 6; Lasm 373 ms to `Listening`, 553 ms to the first response; native 88 / 92 ms)

| Mark (ms from the main thread's time origin) | Lasm |
| --- | ---: |
| Bare `node -e 0` spawn | 47 |
| Glue loaded, Wasm compiled and instantiated | 110 |
| 4 pool workers loaded | 140 |
| `callMain` | 146 |
| First host RPC | 162 |
| `Listening` printed | ≈ 373 |
| First `/health` answered | ≈ 553 |

- **Compilation is not the cost.** V8 compiles the module lazily in 11 ms; eager Liftoff
  takes 74–87 ms.
- **There is no streaming compile and no code cache.** Node takes the
  `instantiate(buffer)` path. `v8.serialize(module)` gives only a 2-byte in-process
  handle, and Node has no persistent Wasm code-cache API.
- **Four bare workers start in 33 ms** in parallel, so a smaller pool saves little.
- **Lean initialization in Wasm takes about 210 ms.** This includes the fixture's
  1 MiB `pattern` built byte by byte, first-call (lazy) compilation of each function and
  about 14 RPCs.
- **The first request adds 180 ms** of first-call compilation and first use of the
  file pool.

### Optimization opportunities (ranked; none implemented)

| # | Change | Expected gain (evidence) | Effort | Risk |
| --- | --- | --- | --- | --- |
| 1 | Fuse the async protocol: start + start-check (93) + register (91) becomes one RPC, and completion (92) carries the result so finish (90) disappears (`runtime/node-async.cpp`, `host-pre.js`) | −24 of 58 RPCs (−41 %), so about 1.6× throughput (main-thread-bound) and about −35 % c=1 latency | M | Medium: runtime identity re-pin; cancellation semantics |
| 2 | Cheaper transport: a shared-memory request/reply slot (main side `Atomics.waitAsync`), synchronous handling of synchronous operations, no reply cloning, and no `Error`-with-stack for cancellation | Per-RPC main CPU 47–64 µs → ~10–20 µs; 2–3× higher ceiling; trivial round trip 66 µs → ~20 µs | M–L | Medium: core glue (`host-library.js`, `host-pre.js`) |
| 3 | Keep timers in the worker: arm/cancel without per-loop `mk`/`next`/start/cancel round trips, or a Wasm-side timer thread using futex timeouts | −10 to −15 RPCs (−20 %), about −2 ms at c=1 | M | Medium: timer/cancel semantics |
| 4 | `Date` header cost: serve small read-only file reads (zoneinfo) synchronously without the file pool, or cache them; app workaround `generateDate := false`; upstream: cache the UTC zone in Std.Http | −8 RPCs (−14 %), −1.7 ms per response (`nowAt` is 86× native) | S–M | Low |
| 5 | In-worker clocks for `monoMsNow`/`monoNanosNow`/`getCurrentTime` (ops 25–27) | 66 µs → < 1 µs per call; −2 RPCs per request, more in apps | S | Low: one cross-thread monotonic origin |
| 6 | Not worth doing now: `-O3`/`-O2` (no gain measured), fewer pool threads (33 ms), Wasm code caching (11 ms lazy compile; no Node API), buffer transfer (64 KiB bodies 313 vs 338 req/s) | ≤ 5 % | — | — |

Recommendation: do 1 and 2 first. Together they target the measured bottleneck: RPC count
× main-thread cost per RPC. 4 and 5 are small, low-risk follow-ups. Re-measure with
`profile.mjs` after each change; `rpcPerRequest` and the main-thread ELU are the
acceptance signals.

Keeping socket reads on the Lean worker is not directly possible. A Lean pthread never
returns to its isolate's event loop, so Node sockets cannot run there. A separate I/O
isolate would still be a cross-thread hop. Reducing hops (1, 3) and cost per hop (2) is
the available path.

## Performance work (2026-10-19)

Linux x64, local, `profile.mjs` load phase on the robustness fixture (8 s per row,
same-run native control). Evidence:
[server-mvp-performance-2026-10-19.json](evidence/server-mvp-performance-2026-10-19.json).

| Step | RPCs/request (health) | ELU c=16 | req/s c=16 (native) | p50/p99 ms c=16 (native) | p50 ms c=1 (native) |
| --- | ---: | ---: | --- | --- | --- |
| Baseline (`01003a4`) | 57.96 | 0.90 | 347 (2,048) | 45.7/60.0 (7.9/10.3) | 6.54 (1.40) |
| 1: host-thread regular files, in-worker clocks | 55.92 | 0.88 | 368 (2,035) | 42.3/61.3 (7.9/10.6) | 5.84 (1.40) |
| 1, rerun back to back with step 2 | 55.56 | 0.89 | 361 (2,189) | 45.1/54.5 (7.4/9.3) | 5.57 (0.91) |
| 2: one-call async start, result-carrying completion (local runtime object) | 34.40 | 0.89 | 494 (2,156) | 32.1/41.5 (7.4/10.5) | 4.16 (0.92) |
| 3a: shared-memory slot transport (step 2 runtime), rerun back to back with 3b | 34.43 | 0.92 | 926 (2,186) | 16.9/23.5 (7.4/9.4) | 2.98 (0.91) |
| 3b: plus batched completions, op 95 (local runtime object) | 28.66 | 1.00 | 1,321 (2,204) | 12.1/15.0 (7.3/9.3) | 2.99 (0.91) |

### Step 1 behaviour (source awaiting review)

- **Read-only regular files skip the file-worker pool** (`src/native-files.mjs`
  `openRegular`/`readRegular`, `src/node-host.mjs`). `IO.FS.Handle.mk path .read` on
  Linux/macOS first `stat`s the path. Only if it is a regular file is it opened on the
  host thread with the pooled open's flags plus `O_NONBLOCK | O_NOCTTY`; the opened
  descriptor must also be a regular file, and `O_NONBLOCK` is cleared before `fdopen`.
  Anything else (FIFOs, devices, directories, `stat` or `open` errors, a conflicting
  lease) closes the probe descriptor and uses the unchanged pooled open, which decides
  the result and the error. Reads of at most 64 KiB on such a handle are `fread` on the
  host thread, in order with any pooled operation on the same stream; larger reads and
  every other operation keep using a file worker. Closing such a handle is a host-thread
  `fclose` (read-only: nothing to flush). Lean still reads the file every time: nothing
  is cached. `Std.Http`'s `Date` header (`DateTime.nowAt "UTC"`: getenv, 2 stat, open,
  2 reads, close) therefore no longer waits for 4 worker hops: open 0.19 → 0.07 ms,
  read 0.16 → 0.03 ms, close 0.06 → 0.02 ms at c=1. Writable modes and Windows are
  unchanged.
- **Clocks are read on the Lean thread** (`scripts/full-lean/host-library.js`
  `$lasmFullClock`). `IO.monoMsNow`/`IO.monoNanosNow`/`lean_uv_hrtime` use
  `process.hrtime.bigint()`, which is libuv's process-wide monotonic clock, the same
  source the host used, so readings stay monotonic across threads. The wall clock
  (`IO.getCurrentTime`, op 27) uses the same `native-clock.mjs` (`clock_gettime` /
  `GetSystemTimePreciseAsFileTime`, microsecond truncation) loaded in that worker; if
  it cannot load or the clock call fails, the host call (and its error encoding) is
  used. No `Date.now`/`performance.now` approximation is involved. Loading the clock
  in each Lean worker did not raise server RSS (16-connection load: 567–605 MiB
  against 610–621 MiB before, with fewer threads because the file pool is idle).

### Step 2 behaviour (source awaiting review; runtime rebuild pending)

- `runtime/node-async.cpp` `begin_request` (full, native-threads builds) replaces the
  three calls `node_start` + start check (op 93) + completion registration (op 91)
  with one `node_call` op 94. Its input is `promise, resource, kind, check, operation,
  argument` (u64 each) followed by the operation's own input. The promise and the
  extra promise/resource references are created and marked multi-threaded before the
  call, exactly as the registration did.
- `scripts/full-lean/host-pre.js` runs the operation (`host.request`, as `host.start`
  did). With `check` (the former `start_io_request`), a synchronous startup failure is
  returned as the call's error and nothing is registered; the runtime then releases
  the unobserved promise and the resource reference (Lean resolves a dropped promise's
  task with `none`; nobody holds it). Otherwise the call returns at once and, when the
  result settles, the completion (op 92) carries `promise, resource, kind, failed`
  followed by the result bytes. The completion thread resolves the promise from those
  bytes with the unchanged decoding (`resolve_request`), so the finish call (op 90)
  disappears. Cancellation keeps native behaviour: an `ECANCELED` result still drops
  the promise instead of resolving it. Completions are queued in settlement order, as
  before. A host rejection still reaches the completion thread as a failure (fatal),
  and `LeanExit` still flushes standard IO and exits.
- Ops 90, 91, 93 and `node_start` remain for the wasm32 runtime (no native threads)
  and for the currently pinned runtime, whose 32-byte completion packets are unchanged.
- Locally, HEAD's `node-async.cpp` rebuilds the shipped object byte for byte
  (`d9e9e9c2…`); the changed source gives `0119590d…`, and that object was overlaid on
  the installed package for these measurements (identity `4d4950e7…`, local only). The
  shipped runtime needs a CI rebuild (`node-linux-runtime.yml`), a new pin and a
  reviewed `canSpecializeInitialization` entry.
- Checks: `test/full-host-async-begin.test.mjs`; upstream eval-io (`async_http_body`,
  `async_http_keepalive`, `async_http_hang_regressions`, `async_tcp_server_client`,
  `async_tcp_half`, `async_tcp_fname_errors`, `async_udp_sockets`,
  `async_cancellation_reasons`, `tempfile`) and runtime-adapter (`async`,
  `async_cancellation`, `async_dns`, `async_select_socket`, `async_select_timer`,
  `async_surface_sleep`, `async_http_idle_timeout`, `libuv_tcp_shutdown_pending`,
  `libuv_signal_retry`, `cancellation_context`, `promise`, `timeAPI`; 53 actions) all
  match native; the robustness load and all 31 fault cases match native (local
  Linux); emcc and Node link drivers give byte-identical `program.wasm`/`program.cjs`.

### Step 3 behaviour (source awaiting review; runtime rebuild pending)

- **Shared-memory request/reply slots** (`scripts/full-lean/host-library.js`
  `$lasmFullRPC`, `scripts/full-lean/host-pre.js` `lasmFullServe`). Each Lean thread
  allocates one 96-byte slot (and a 64 KiB reply buffer) in Wasm memory per call
  nesting depth, on first use, and registers it once with the host thread
  (`CMD_CALL_HANDLER` message). A call writes kind, operation, handle, argument, the
  input's address and length and the calling pthread into the slot, increments its
  request sequence and notifies it. The host thread waits on each registered slot's
  sequence with `Atomics.waitAsync`, reads the request in place (copying the input,
  which hosts may retain), and writes the status, length and reply bytes straight
  into the slot's buffer before setting and notifying the reply flag. The Lean thread
  waits on that flag with `emscripten_futex_wait`, which still services the pthread
  mailbox; a call nested in that wait uses the next depth's slot. `lasm_node_copy`
  copies from the slot buffer. No request or reply is structured-cloned or
  transferred, and no per-call `malloc`, `MessagePort` message or reply map remains.
- **Synchronous operations are answered synchronously**: when the host returns a
  value rather than a promise, the reply is written in the same task.
- **Large replies**: a reply longer than the slot's buffer is kept by the host; the
  Lean thread replaces its buffer with one of the reply's size (kept for later calls)
  and asks for it (kind 3). Inputs of any size are read in place.
- **Host failures** (internal defects) still throw on the Lean thread with the host's
  message and stack text; `LeanExit` still flushes standard IO and exits.
- **Routine cancellations** (`cancel_recv`, `cancel_accept`, timer, signal, UDP and
  sleep cancellation) create their `ECANCELED` errors with `Error.stackTraceLimit`
  temporarily 0 (`cancellation` in `src/node-host.mjs`): same code and message, no
  stack capture.
- **Batched completions** (`runtime/node-async.cpp`, op 95): the completion thread's
  poll returns every completion queued so far, in settlement order, as (u64 size,
  packet) records; a host failure is delivered alone after earlier packets. Under load
  this replaced about 6 of 7.8 completion polls per request. Ops 92 and 91 remain for
  the currently pinned runtime.
- Rejected: spinning briefly on the reply flag before the futex wait cut throughput
  at 16 connections by a third (961 → 639 req/s; Lean threads took CPU from the host
  thread), although it cut c=1 latency by 22 %.
- Robustness fixture, local Linux, mixed load (20 s per level, same run): Lasm
  1,000 req/s at 16 connections against native 1,487 (67 %), p99 42 against 36 ms
  (1.2×); at 64 connections 905 against 1,252 (72 %), p99 166 against 122 ms (1.4×).
  All fault classes pass with only the informational FIN/RST differences.
- **Residual leak, local re-measurement**: a 15-minute Lasm soak (8 connections, a
  rotating fault every 2 s) served 815,736 requests with 0 errors: RSS 569 → 584 MiB,
  slope 20 B/request (criterion 256; the same local soak grew 241–343 B/request before),
  Wasm memory and handles flat. This is consistent with the leak belonging to the
  removed per-call message machinery (no heap walk was repeated). Five-platform confirmation is pending.
- **Compatibility between host JS and runtime.** A deployment links the host JS and
  the runtime archive from the same package, and cached builds are keyed by both
  (`buildDriverIdentity` hashes the host files; the runtime identity is pinned), so a
  shipped package never mixes them. Checked locally anyway:
  - new host JS with the previously pinned runtime `36cf596b…` works: the host still
    serves `node_start` (kind 2), the start check (op 93), registration (op 91), the
    single-completion poll (op 92) and finish (op 90) over the new transport (robustness
    load and all fault classes pass, 484 req/s at 16 connections);
  - the new runtime with the committed (step 2) host JS does not: it polls with op 95,
    which that host does not know, and the completion thread stops at startup with
    `INTERNAL PANIC: Invalid asynchronous completion packet`. The runtime pin and the
    host JS must land in one commit.

### Five-platform run with the shared-memory transport (run [39302965569](https://github.com/Millillion/lasm/actions/runs/39302965569), variant `transport`)

Variant `transport` is a maintainer overlay on candidate `.55`, not a candidate: the
CI-rebuilt runtime `84934c27…` (handoff `node-runtime-inputs-39287146914`, source
`d20932e`; only `liblasmhost.a`'s `node-async.cpp.o` differs from `36cf596b…`, and it is
byte-identical to the local object `f04c7e92…`) plus `patches/server-transport.patch`
(steps 1–3). Load 30 s per level, soak 900 s. Evidence:
[run](evidence/server-mvp-robustness-transport-2026-10-19.json).

| Platform | Lasm req/s c=16 (native, ratio) | p99 ms c=16 (native) | req/s c=64, Win 32 (native, ratio) | p99 ms (native) | Lasm soak B/request (native) | Passed |
| --- | --- | --- | --- | --- | --- | --- |
| linux-x64 | 650 (811, 80 %) | 61 (51) | 577 (648, 89 %) | 268 (240) | 19.7 (107.7) | yes |
| linux-arm64 | 606 (1,151, 53 %) | 64 (41) | 537 (933, 58 %) | 290 (166) | 3.9 (73.4) | yes |
| darwin-x64 | 161 (590, 27 %) | 331 (73) | 181 (582, 31 %) | 987 (244) | 189.3 (142.1) | yes |
| darwin-arm64 | 505 (2,422, 21 %) | 105 (33) | 444 (2,181, 20 %) | 490 (90) | −499 (26.8) | no (one fault case) |
| win32-x64 | 1,528 (5,271, 29 %) | 38 (28) | 1,492 (6,609, 23 %) | 63 (29) | −21.7 (0.4) | yes |

- **Soak passes for Lasm on all five targets** (0 errors, Wasm memory flat). Linux and
  macOS grew 296–602 B/request in run 39239133744; now 4–189 B/request, within the
  256 B/request criterion. The residual leak is resolved.
- Load and every fault class pass everywhere. darwin-arm64's single failing comparison
  is `Content-Length 2 MiB > maxBodySize`: native lost the 413 to the TCP reset in 5 of
  5 attempts (`none/error-EPIPE`), Lasm delivered it (`413/error-EPIPE+close-header`).
  This is the documented "status lost to RST" effect on the native side, but
  `robustness-compare.mjs` only treats it as informational when some native attempts
  still saw the status. Not changed here.
- **Targets** (≥ 50 % of native throughput, p99 ≤ 3× native): met on Linux x64 and
  ARM64. Not met on macOS (20–31 %; p99 up to 5.4×) or Windows (23–29 % throughput;
  p99 1.4–2.2×, within target). Not yet profiled there; the Node main thread, which
  still serves every host call, is the likely limit (Windows' native server is also
  6–8× faster than on Linux).

## Step 1 gate result (2026-10-20)

Candidate `0.1.0-experimental.39310029213` (source `8829c9a`, SHA-256
`a976ec4e386d1c238bcb08b6a6df3f37b22d5b9af7d7bfda904bed10bb1972a3`; runtime
`84934c27…` with the leak fixes, merged async protocol, batched completions and
shared-memory host transport) passed:

- five-platform installed acceptance: [39310029213](https://github.com/Millillion/lasm/actions/runs/39310029213);
- three consecutive cold-installation campaigns
  ([39340365052](https://github.com/Millillion/lasm/actions/runs/39340365052),
  [39340377605](https://github.com/Millillion/lasm/actions/runs/39340377605),
  [39340396211](https://github.com/Millillion/lasm/actions/runs/39340396211); `passed: true`);
- three consecutive five-platform robustness runs (load, faults, 900 s soak) on the
  exact candidate: [39362216679](https://github.com/Millillion/lasm/actions/runs/39362216679),
  [39362227642](https://github.com/Millillion/lasm/actions/runs/39362227642),
  [39362238593](https://github.com/Millillion/lasm/actions/runs/39362238593).

Earlier robustness attempts on the same candidate remain recorded: 39340424035
(an Actions cache eviction failed the Intel Mac job's setup before any test),
and 39353067086 / 39353078838, where Lasm passed every check but native Lean
4.35 failed its own macOS soak (upstream instability). After those, the verdict
became Lasm's own with native as the load/fault reference (native soak,
shutdown and restart failures are reported, not gating), and three fresh runs
were required rather than re-scoring old ones. Performance targets apply to
Linux (met: 53–89% of native throughput, p99 1.1–1.75×); macOS and Windows
performance is reported, not gating.

## Launch position (2026-10-23)

**Position for launch: use Express or Hono with Lean handlers (through
`Lasm.JS`) for production HTTP services on Node. `Std.Http` is supported for
pure-Lean code that must also build natively or be shared with native Lean
servers.** `lasm init` offers both (`--template express|hono` and `--template
std-http`); the getting-started guide leads with Hono.

Measurement: the `lasm init` server templates (current source `fcda634`) built
with candidate `.39891445495`, `GET /hello/Ada`, keep-alive closed loop from a
Node client on the same host (Linux x64, 12 threads, i7-9750H), 8 s × 2 rounds,
every Lasm server run from an instrumented copy that counts host RPCs
([`http-position.mjs`](../scripts/server-mvp/http-position.mjs); evidence:
[std-http-position-2026-10-23.json](evidence/std-http-position-2026-10-23.json)).
The client limits plain Node here (the earlier raw-socket client measured
43,000 req/s); the Lasm rows are server-bound (main-thread ELU 0.9–1.0).

| Server (c=16) | req/s | p99 ms | Host RPCs per request | Server CPU ms per request |
| --- | ---: | ---: | ---: | ---: |
| Plain Node `http` (reference, client-bound) | 14,280–14,617 | 2.5 | — | 0.04 |
| Hono + Lean handler | 5,659–5,683 | 6.4 | 4.4 | 0.44 |
| Express + Lean handler | 4,551–4,632 | 6.8 | 4.3 | 0.44 |
| `Std.Http` | 1,207–1,226 | 17 | 28.8 | 4.6 |
| `Std.Http` without the `Date` header (`generateDate := false`) | 1,379–1,397 | 15 | 21.5 | 4.7 |

At one connection: Hono/Express 1,900–2,100 req/s (p99 0.9 ms), `Std.Http` 313–315
(p99 5.2 ms).

Reference numbers for users are the ones the release benchmarks record on a
4-CPU GitHub runner ([BENCHMARKS.md](BENCHMARKS.md), candidate `.39891445495`):
Hono with a Lean handler 9,682 req/s, Express 6,349, `Std.Http` 663, plain Node
`http` 53,784 (0.18×, 0.12× and 0.01×).

**Interop server path, cheap win taken (current source).** Express and Hono with
Lean handlers are also bound by Node's main thread (ELU 1.0), at 4.3–4.4 host calls
per request: read the request, call `res.json`/`c.json`, reply, plus the interop
poll. `Function.ofFnReply` lets a handler answer with `Function.Reply.callMethod res "json"
#[body]`, which the host makes while processing the reply (one call fewer), and the
templates read request fields with one `getFields`. Same host, same client, same
run ([evidence](evidence/interop-reply-2026-10-23.json)):

| Template (c=16) | Before: req/s, calls/request | With `ofFnReply` + `getFields`: req/s, calls/request |
| --- | --- | --- |
| Express | 4,570–4,624, 4.34 | 5,969–6,007, 2.26 (+30 %) |
| Hono | 5,717–5,797, 4.44 | 6,585–6,723, 3.38 (+16 %) |

Not done (Phase 7): running simple handlers on the interop thread without a task
(the main thread, not Lean, is the limit), batching several requests' host calls,
and cheaper per-call main-thread work.

**Why `Std.Http` is slower: per-request host round trips, not Lean compute.**
Sockets and timers live on Node's main thread, and every operation on them from
a Lean thread is a host call that Node's main thread serves (about 30 µs of
main-thread time each under load). Per keep-alive request, `Std.Http` makes:

- 8 asynchronous operation starts (op 94: socket wait and receive, timer start, send);
- 7.5 timer operations: create (70), next (71) and cancel (75), from the
  header/keep-alive timeouts that every select loop arms and cancels;
- 2.5 receive cancellations (58), the losing branch of each select;
- about 7 for the `Date` header (`DateTime.nowAt "UTC"` reads the time-zone file:
  open, stat, read, close, environment) plus releases and completion batches.

With Express or Hono, Node parses HTTP itself and Lean runs only the handler:
about 4.4 host calls per request (read the request, answer, the callback reply).
The main thread saturates in both cases, so throughput follows the number of
host calls per request. On the same host, native Lean's own `Std.Http` server
serves about 2,200 req/s ([performance work](#performance-work-2026-10-19)), so
Lasm runs `Std.Http` at about 55–60 % of native; the gap to Node comes mostly
from `Std.Http`'s design (timers and selects per request) multiplied by the
host-call cost.

**Cheap fixes considered:**
- Dropping the `Date` header removes 7.3 calls per request and gains 14 %, but
  origin servers with a clock must send `Date` (RFC 9110 §6.6.1). Not applied;
  applications may set `generateDate := false` themselves.
- No other change is small. Moving timers into the Lean worker (opportunity 3
  above) or serving socket waits without a round trip needs runtime work and a
  re-pin, so it belongs to Phase 7 ("`Std.Http` performance if it stays a
  recommended path").

Robustness is not the issue: `Std.Http` under Lasm passed load, fault and 900 s
soak runs on all five targets with candidate `.39310029213`
([Step 1 gate result](#step-1-gate-result-2026-10-20)).
