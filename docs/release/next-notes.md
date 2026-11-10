# Lasm (next release)

## Breaking

- **`Lasm.Fastly` is generated from Fastly's host ABI.** `import Lasm.Fastly`
  now binds Fastly Compute's whole host ABI (244 of its 252 functions:
  requests, responses, bodies, backends, async I/O, Config, Secret and KV
  Stores with metadata, generations and listing, the cache APIs, geolocation,
  device detection, rate limiting, ACLs, logging), generated from the witx
  that Viceroy v0.21.1 ships, one module per witx module
  (`Lasm.Fastly.HttpReq`, `Lasm.Fastly.KvStore`, …). Every call is an
  `EIO FastlyStatus` action that lifts into `IO` (a failure is the `IO.Error`
  `Fastly host call failed: <status>`); `found?` turns the host's `$none` into
  `Option.none`. In builds other than `--target fastly` every call fails with
  `FastlyStatus.unsupported`. The five hand-written store calls are gone:

  | Before | Now (`open Lasm.Fastly`) |
  | --- | --- |
  | `Lasm.Fastly.configGet store key : IO (Option String)` | `found? (ConfigStore.get (← ConfigStore.open store) key)` |
  | `Lasm.Fastly.secretGet store key : IO (Option ByteArray)` | `match ← found? (SecretStore.get (← SecretStore.open store) key) with \| some s => some <$> SecretStore.plaintext s \| none => pure none` (a `String`) |
  | `Lasm.Fastly.secretText store key : IO (Option String)` | as `secretGet` |
  | `Lasm.Fastly.kvGet store key : IO (Option ByteArray)` | `let (body, metadata, generation, error) ← KvStore.lookupWaitV2 (← KvStore.lookup (← KvStore.open store) key {} {})`; `error == .ok`, then read `body` with `HttpBody.read body 65536` until it returns no bytes; `.notFound` for a missing key |
  | `Lasm.Fastly.kvGetText store key : IO (Option String)` | as `kvGet`, then `String.fromUTF8?` |
  | `Lasm.Fastly.kvPut store key bytes : IO Unit` | `let b ← HttpBody.new; discard <| HttpBody.write b bytes .back; KvStore.insertWait (← KvStore.insert (← KvStore.open store) key b {} {})` (a `KvError`) |
  | `Lasm.Fastly.kvDelete store key : IO Unit` | `KvStore.deleteWait (← KvStore.delete (← KvStore.open store) key {} {})` (a `KvError`; `.notFound` for a missing key) |
  | `Lasm.Fetch.serve handle` on `--target fastly` (still works) | `HttpReq.bodyDownstreamGet` for the request and its body, `HttpResp.new`, `HttpResp.sendDownstream resp body 0` ([examples/fastly](../../examples/fastly/Main.lean)) |
  | `Lasm.Fetch.fetch req { backend := some "origin" }` on Fastly (still works) | `HttpReq.send req body "origin"`, or `HttpReq.sendAsync` then `HttpReq.pendingReqWait` |
  | `Lasm.Fetch.fetch req` with a dynamic backend on Fastly (still works) | `HttpReq.registerDynamicBackend name "host:port" {} {}`, then `HttpReq.send req body name` |

  `Lasm.KV.open` on Fastly works as before (it now uses `Lasm.Fastly.KvStore`).
  Guide and mapping rules: docs/WASI_FASTLY_BINDINGS.md.

## New

- **`Lasm.WASI.Http`: the wasi:http proxy world, generated from the WASI
  0.2.12 WIT.** `import Lasm.WASI.Http` binds every stable function of
  `wasi:http/types`, `wasi:http/outgoing-handler`, `wasi:io/{error,poll,streams}`
  and `wasi:clocks/monotonic-clock` (90), one module each
  (`Lasm.WASI.Http.Types`, `Lasm.WASI.Io.Streams`, …), and the export
  `wasi:http/incoming-handler.handle` as `IncomingHandler.serve`. For
  `lasm build --target wasi-http`; elsewhere each call fails. A wasi-http
  program written on `Lasm.Fetch` (which keeps working there until it is
  removed) moves like this (`open Lasm.WASI.Http Lasm.WASI.Http.Types`):

  | `Lasm.Fetch` on `--target wasi-http` | `Lasm.WASI.Http` |
  | --- | --- |
  | `def main := Lasm.Fetch.serve handle` | `def main := IncomingHandler.serve fun request out => …` (one request per instance) |
  | `req.method`, `req.url` | `request.method` (a `Method`: `.get`, …, `.other "PURGE"`), `request.pathWithQuery`, `request.scheme`, `request.authority` |
  | `req.header? "x-a"` | `(← request.headers).get "x-a"` (an `Array ByteArray`: every value) |
  | `req.body` / streamed request bodies | `let .ok body ← request.consume`, `let .ok s ← body.stream`, then `s.blockingRead 65536` until `.error .closed`; `IncomingBody.finish body` |
  | `return { status, headers, body }` | `let r ← OutgoingResponse.new (← Fields.fromList …)`; `r.setStatusCode status`; `let .ok b ← r.body`; `ResponseOutparam.set out (.ok r)`; `let .ok s ← b.write`; `s.blockingWriteAndFlush chunk` (≤ 4096 bytes a call); `s.drop`; `OutgoingBody.finish b none` |
  | streamed responses | the same: the outparam is set first, then chunks are written |
  | `Lasm.Fetch.fetch req` | `OutgoingRequest.new`, `setMethod`/`setScheme`/`setAuthority`/`setPathWithQuery`, `OutgoingHandler.handle request none`, then `future.subscribe` → `pollable.block` → `future.get` (`some (.ok (.ok response))`); several at once through `Lasm.WASI.Io.Poll.poll` |

  Every result is the WIT's own (`IO (Except HeaderError Unit)`, …); handles
  are dropped with `R.drop`. Guide and mapping rules:
  docs/WASI_FASTLY_BINDINGS.md. `examples/wasi-http` answers the routes of
  `examples/fetch` on these bindings.
- Lasm.WASI.Http's conformance checks (`test/fixtures/wasi-http-abi`, 35) run
  under `wasmtime serve`.

- `examples/fastly`: an HTTP server on Fastly's own host calls, answering the
  routes of `examples/fetch` plus the stores, checked under Viceroy in CI.
- Lasm.Fastly's conformance checks (`test/fixtures/fastly-abi`) run under
  Viceroy, and Viceroy checks every bound host function's import.
