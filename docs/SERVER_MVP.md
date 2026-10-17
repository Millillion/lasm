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
