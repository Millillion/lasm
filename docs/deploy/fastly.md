# Fastly Compute

A Lean HTTP handler runs on Fastly Compute as a standard WebAssembly module:
`lasm build Main.lean --target fastly` writes `bin/main.wasm` and the package
`pkg/<name>.tar.gz` that `fastly compute deploy` uploads. The handler is
[`Lasm.Fetch`](../FETCH.md); there is no JavaScript and no Fastly SDK.

CI ([`wasi.yml`](../../.github/workflows/wasi.yml)) serves the
[`examples/fetch`](../../examples/fetch/Main.lean) build with Viceroy 0.21.1,
Fastly's local simulator (the program `fastly compute serve` runs), and checks
every route: bodies, headers, statuses, `Std.Async` waits, errors. Nothing is
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
| `bin/main.wasm` | The program: a `wasi_snapshot_preview1` command that imports Fastly's `fastly_abi`, `fastly_http_req`, `fastly_http_body` and `fastly_http_resp` host calls. |
| `bin/lasm-build-info.json`, `bin/THIRD_PARTY_NOTICES.txt` | Build record and the licences of the code in the module. |
| `pkg/<name>.tar.gz` | `<name>/fastly.toml` and `<name>/bin/main.wasm`, the package `fastly compute deploy --package` uploads (`<name>` from `fastly.toml`). |
| `fastly.toml` | Only when the project has none. |

Lasm owns `bin/` (it replaces it on every build; a `bin/` with other files is
refused) and `pkg/<name>.tar.gz`.

## How a request runs

Fastly starts a fresh instance of the module for each request and runs
`main`. `Lasm.Fetch.serve` reads the downstream request (method, URL, every
header value, the body), runs the handler, sends the response with
`fastly_http_resp.send_downstream`, and returns; the instance then ends.
Startup is Lean's module initializers plus `main`; the
[measurements](../WASI.md#measurements) show what it costs per request.
Lean's standard output and standard error are the service's logs.

Within a request everything in [WASI.md](../WASI.md#what-works) works except
files (Fastly gives an instance no directories), and `IO.getEnv` sees
Fastly's environment (`FASTLY_HOSTNAME`, `FASTLY_SERVICE_VERSION`, …).
`Std.Async` timers and `IO.sleep` wait inside the instance.

## Backend requests

`Lasm.Fetch.fetch` (and `get`, `post`) sends backend requests
([FETCH.md](../FETCH.md#outbound-requests)):

- `fetch req { backend := some "origin" }` uses a backend the service
  defines. For Viceroy, define it in `fastly.toml`:

  ```toml
  [local_server.backends.origin]
    url = "https://api.example.com"
  ```

- Without `backend`, Lasm registers a dynamic backend for the URL's scheme,
  host and port (TLS with SNI and the certificate host for `https`). Fastly
  enables dynamic backends per service; Viceroy always allows them.

Requests are sent with `send_async` and completed by the event loop
(`fastly_async_io.select`), so several can be in flight at once. Responses
are read completely; redirects are not followed.

## Stores

`import Lasm.Fastly` reads Config Stores and Secret Stores and reads, writes
and deletes KV Store keys ([FETCH.md](../FETCH.md#fastlys-stores)). Viceroy
reads local stores from `fastly.toml`:

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

- Fastly Compute's resource limits (memory, CPU time, package size) apply; a
  Lean module is about 0.8 MiB.
- Bound: the downstream request and response (streamed or whole), backend
  requests, and Config, Secret and KV Stores. Not yet: the cache APIs,
  geolocation, device detection, logging endpoints, rate limiting and KV
  metadata, generations and listing.
