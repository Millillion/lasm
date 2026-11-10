# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

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

- `examples/fastly`: an HTTP server on Fastly's own host calls, answering the
  routes of `examples/fetch` plus the stores, checked under Viceroy in CI.
- Lasm.Fastly's conformance checks (`test/fixtures/fastly-abi`) run under
  Viceroy, and Viceroy checks every bound host function's import.

## Fixes

- **`lasm init --template fullstack` refuses the function platforms (#168).** With `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` or `gcf` it used to write a project that could not deploy there (a `build:undefined` script, no `vercel.json`, `netlify.toml` or `Dockerfile.lambda`, no platform dependency). It now stops with a message naming the templates the target takes and the targets the template takes: `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `fastly`, `wasi-http` and `spin`. Every other refused template and target pair names its alternatives the same way. The other server templates keep every function platform.
