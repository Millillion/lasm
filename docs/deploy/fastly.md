# Fastly Compute

A Lean HTTP handler runs on Fastly Compute as a standard WebAssembly module:
`lasm build Main.lean --target fastly` writes `bin/main.wasm` and the package
`pkg/<name>.tar.gz` that `fastly compute deploy` uploads. The program calls
Fastly's host ABI through [`Lasm.Fastly`](../WASI_FASTLY_BINDINGS.md#lasmfastly),
generated from Fastly's witx (every HTTP, backend, store, cache, geolocation
and rate-limiting call); there is no JavaScript and no Fastly SDK. (A
[`Lasm.Fetch`](../FETCH.md) handler still runs here until Lasm.Fetch is
removed; new programs use Lasm.Fastly.)

CI ([`wasi.yml`](../../.github/workflows/wasi.yml)) serves
[`examples/fastly`](../../examples/fastly/Main.lean) (Lasm.Fastly) with
Viceroy 0.21.1, Fastly's local simulator (the program `fastly compute serve`
runs), and checks every route: bodies, headers, statuses, streaming, backend
requests, stores, errors; it also runs Lasm.Fastly's conformance checks
([`test/fixtures/fastly-abi`](../../test/fixtures/fastly-abi)). Nothing is
deployed to a Fastly account by Lasm or its CI.

## Build and run

```sh
npx lasm init my-service --template fetch --deploy fastly
cd my-service && npm install
npm run build:fastly        # lasm build Main.lean --target fastly
fastly compute serve        # local: Viceroy on http://127.0.0.1:7676
fastly compute deploy       # your Fastly account
```

`--deploy fastly` writes `fastly.toml` and the `build:fastly` and
`start:fastly` scripts:

```toml
manifest_version = 3
name = "my-service"
language = "other"

[scripts]
build = "npm run build:fastly"
```

`language = "other"` with a build script is how the Fastly CLI builds a
language it has no toolchain for: `fastly compute build`, `serve`, `publish`
and `deploy` run the script, then use `bin/main.wasm`. A project without
`fastly.toml` gets one on its first `lasm build --target fastly`; Lasm never
edits an existing one. Lasm never runs the Fastly CLI itself.

Viceroy can also run the module directly:
`viceroy serve -C fastly.toml bin/main.wasm`.

## What the build writes

| Path | Contents |
| --- | --- |
| `bin/main.wasm` | The program: a `wasi_snapshot_preview1` command that imports the Fastly host calls it uses (`fastly_http_req`, `fastly_http_body`, `fastly_kv_store`, …). |
| `bin/lasm-build-info.json`, `bin/THIRD_PARTY_NOTICES.txt` | Build record and the licences of the code in the module (also inside `main.wasm` and in the package: [LICENSING.md](../LICENSING.md)). |
| `pkg/<name>.tar.gz` | `<name>/fastly.toml` and `<name>/bin/main.wasm`, the package `fastly compute deploy --package` uploads (`<name>` from `fastly.toml`). |
| `fastly.toml` | Only when the project has none. |

Lasm owns `bin/` (it replaces it on every build; a `bin/` with other files is
refused) and `pkg/<name>.tar.gz`.

## How a request runs

Fastly starts a fresh instance of the module for each request and runs
`main`. With Lasm.Fastly, `main` reads the request with
`HttpReq.bodyDownstreamGet` and answers with `HttpResp.sendDownstream`
([examples/fastly](../../examples/fastly/Main.lean)); `main` returns and
the instance ends.
Startup is Lean's module initializers plus `main`; the
[measurements](../WASI.md#measurements) show what it costs per request.
Lean's standard output and standard error are the service's logs.

Within a request everything in [WASI.md](../WASI.md#what-works) works except
files (Fastly gives an instance no directories), and `IO.getEnv` sees
Fastly's environment (`FASTLY_HOSTNAME`, `FASTLY_SERVICE_VERSION`, …).
`Std.Async` timers and `IO.sleep` wait inside the instance.

## Backend requests

With Lasm.Fastly: `HttpReq.send req body "origin"` (or `sendAsync`, then
`pendingReqWait`, several in flight at once), to a backend the service defines
or one registered with `HttpReq.registerDynamicBackend name "host:port" mask
config` ([examples/fastly](../../examples/fastly/Main.lean) does both).
A backend the service defines is named in `fastly.toml` for Viceroy:

```toml
[local_server.backends.origin]
  url = "https://api.example.com"
```

Fastly enables dynamic backends (`registerDynamicBackend`) per service;
Viceroy always allows them.

## Stores

`import Lasm.Fastly` binds Config Stores (`ConfigStore.open`, `get`), Secret
Stores (`SecretStore.open`, `get`, `plaintext`) and KV Stores (`KvStore.open`,
`lookup`/`lookupWaitV2`, `insert`/`insertWait`, `delete`/`deleteWait`, `list`,
with metadata, generations and TTLs), and `Lasm.KV.open` uses a KV Store
([WASI_FASTLY_BINDINGS.md](../WASI_FASTLY_BINDINGS.md)):

```lean
let color ← found? (ConfigStore.get (← ConfigStore.open "settings") "color")   -- Option String
let token ← SecretStore.plaintext (← SecretStore.get (← SecretStore.open "secrets") "token")
let kv ← KvStore.open "kv"
let (body, metadata, generation, error) ← KvStore.lookupWaitV2 (← KvStore.lookup kv "greeting" {} {})
```

Viceroy reads local stores from `fastly.toml`:

```toml
[local_server.config_stores.settings]
  format = "inline-toml"
[local_server.config_stores.settings.contents]
  color = "blue"

[[local_server.secret_stores.secrets]]
  key = "token"
  data = "s3cret"

[[local_server.kv_stores.kv]]
  key = "greeting"
  data = "hello kv"
```

On Fastly, link the stores to the service (`fastly config-store create`,
`fastly kv-store create`, `fastly resource-link create`, …).

## Limits and what is not bound

- Fastly Compute's [resource limits](https://docs.fastly.com/products/compute-resource-limits)
  (memory, CPU time, package size) apply; a Lean module is about 0.8 MiB. The
  memory limit is "1M bytes stack, 128MB heap" per execution; Lasm's Fastly
  link uses a 1 MiB C stack to match. Viceroy enforces the same 128 MiB heap
  locally. A program that needs more stops with `INTERNAL PANIC: out of
  memory` (exit status 1) and the request gets a 500; it cannot be caught.
  A Lean program's heap on Viceroy starts at about 28 MB (Folio's site
  server, a small request). The size of the request body is not limited
  separately: Folio renders a 960,000-character body in 112 MB, but needs 192
  to 384 MiB for cmark's two largest pathological inputs, so those are not
  run on Fastly (issue #234, [Folio's README](../../examples/folio/README.md#at-the-edge)).
- Lasm.Fastly binds 244 of the ABI's 252 functions (the cache APIs,
  geolocation, device detection, logging endpoints, rate limiting, ACLs and
  KV metadata, generations and listing included); the 8 left out are listed in
  [WASI_FASTLY_BINDINGS.md](../WASI_FASTLY_BINDINGS.md#what-is-bound). Viceroy
  implements some of them only partly; CI checks the ones its conformance
  fixture uses.
