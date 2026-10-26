# Lasm.Fetch: HTTP in pure Lean, on every server target

`Lasm.Fetch` is Lasm's HTTP API: a request goes in, a response comes out, and
everything in between is ordinary Lean. Handlers can also call other HTTP
services (`fetch`), and stream request and response bodies. The same
`Main.lean` runs on:

| Build | Where it runs | How requests arrive | `fetch` |
| --- | --- | --- | --- |
| `lasm build Main.lean` | Node 24+ (`node dist/main.mjs`), containers, VMs | An HTTP server (`node:http`) on `$HOST:$PORT`, default `0.0.0.0:3000` | Node's `fetch` |
| `--target fastly` | Fastly Compute (`fastly compute serve`, `fastly compute deploy`) | Fastly's host calls, one request per instance | Backend requests (dynamic or named backends) |
| `--target wasi-http` | `wasmtime serve`, Spin's HTTP trigger, any wasi:http/proxy host | wasi:http/incoming-handler, one request per instance | wasi:http/outgoing-handler |
| `--target wasi` | wasmtime, wasmer, Node's `node:wasi`, any CGI host (Spin's wagi executor) | CGI: one request per run (environment and standard input in, standard output out) | Not available (WASI preview 1 has no sockets) |
| `--target workers`, `vercel-edge`, `netlify-edge`, `deno-deploy` | Edge isolates ([EDGE.md](EDGE.md)) | The platform's `fetch` handler | The platform's `fetch` |
| `--target bun`, `--target deno` | Bun, Deno ([BUN_DENO.md](BUN_DENO.md)) | `Bun.serve` / `Deno.serve` on `$PORT` | The platform's `fetch` |

No npm package, JavaScript or platform SDK is involved: Lasm supplies the
adapter for each platform. CI checks one program
([`examples/fetch`](../examples/fetch/Main.lean)) route by route on
wasmtime (as a CGI program and with `wasmtime serve`), wasmer, `node:wasi`,
Spin (HTTP trigger and wagi), Viceroy (Fastly's local simulator), Node and
Deno ([`wasi.yml`](../.github/workflows/wasi.yml)), including outbound
requests to a local origin server, streamed bodies and Fastly's stores.

## Example

```lean
import Lasm.Fetch
open Lasm.Fetch

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", [] => return .json "{\"message\":\"Hello from Lean!\"}"
  | "GET", ["hello", name] => return .text s!"Hello, {name}!"
  | "POST", ["echo"] => return .bytes req.body ((req.header? "content-type").getD "application/octet-stream")
  | "GET", ["wait"] =>
    Std.Async.sleep 100                         -- waits without blocking other work
    return .text "done"
  | "GET", ["upstream"] =>
    let r ← get "https://example.com/"          -- an outbound request
    return .text s!"example.com answered {r.status}"
  | "GET", ["count"] =>                          -- a streamed response
    return Response.streaming (contentType := "text/plain") fun send => do
      for i in [0:10] do
        send s!"{i}\n".toUTF8
        Std.Async.sleep 100
  | _, _ => return .notFound

def main : IO Unit := serve handle
```

`lasm init my-app --template fetch` creates a project like this, with
`--deploy fastly`, `--deploy wasi-http`, `--deploy spin`, `--deploy wasi`
and the edge targets available.

## Serving

```lean
structure Request where
  method : String                       -- "GET", "POST", …
  url : String                          -- absolute where the platform gives the host
  headers : Array (String × String)     -- the platform's order and case
  body : ByteArray
  read : Async (Option ByteArray)       -- the next body chunk, when streamed (below)

structure Response where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  stream : Option ((ByteArray → Async Unit) → Async Unit) := none

abbrev Handler := Request → Async Response
def serve (handler : Handler) : IO Unit
def serveWith (options : ServeOptions) (handler : Handler) : IO Unit
```

`Async` is `Std.Async.Async` (exported by `open Lasm.Fetch`): handlers can
await `Std.Async` timers, tasks and outbound requests, and `IO` actions run
in it unchanged.

| Request | |
| --- | --- |
| `req.path` | The URL's path without the query (`/hello/Ada`); `/` when empty. |
| `req.segments` | The path's decoded segments: `/hello/J%C3%BCrgen` → `["hello", "Jürgen"]`. |
| `req.query`, `req.queryParams`, `req.queryParam? "q"` | The raw query, its decoded pairs (`+` is a space), one parameter. |
| `req.header? "content-type"` | The first header with that name, ignoring case. |
| `req.text`, `req.text?` | The body as UTF-8 (empty, or `none`, when it is not valid UTF-8). |
| `req.read`, `req.readAll` | The streamed body's next chunk; the whole body (streamed or not). |

| Response | |
| --- | --- |
| `.text s`, `.html s`, `.json s` | A body with its content type (`text/plain; charset=utf-8`, `text/html; charset=utf-8`, `application/json`); optional `(status := 201)`. |
| `.bytes b (contentType := …)` | Bytes; `application/octet-stream` by default. |
| `.streaming produce (contentType := …)` | A body sent in chunks: `produce send` calls `send chunk` for each. |
| `.redirect "/to"` | `Location`, status 302 (or another). |
| `.empty`, `.notFound` | 204 with no body; 404 `Not Found`. |
| `r.withHeader k v`, `r.withStatus s` | Add a header (repeatable, as `set-cookie` is) or replace the status. |

**Errors.** A handler that throws answers `500 Internal Server Error`; the
error goes to standard error with the method and path. A streamed response
that fails after it started is abandoned, so the client sees an incomplete
body. **HEAD** requests run the handler as `GET`; their responses, and those
with status 101, 204, 205 or 304, are sent without a body.

## Streaming

A response streams when it has `stream` (`Response.streaming`): the status
and headers are sent first, then each chunk as `send` is called. CI measures
that the first of 40 chunks, 5 ms apart, arrives within a few milliseconds on
every streaming host.

A request body streams when `ServeOptions.streamRequestBody` selects its path:

```lean
def main : IO Unit := serveWith { streamRequestBody := (·.startsWith "/upload") } handle
-- in the handler:
--   repeat match ← req.read with | some chunk => … | none => break
```

Its `body` is then empty, and `read` returns the chunks as the platform
delivers them (`readAll` collects them). Other requests' bodies are read
before the handler runs.

| Platform | Streamed responses | Streamed request bodies |
| --- | --- | --- |
| Node | `res.write` per chunk | `Readable.toWeb(req)` reader |
| Edge, Bun, Deno | A `TransformStream`'s readable side | `request.body` reader |
| Fastly Compute | `send_downstream` with streaming, `fastly_http_body.write` | `fastly_http_body.read` |
| wasi-http | The outgoing body's output stream | The incoming body's input stream |
| WASI CGI | Standard output (the host may collect it; Spin's wagi executor does) | Standard input |

## Outbound requests

```lean
def fetch (req : Request) (options : FetchOptions := {}) : Async Response
def get (url : String) (headers := #[]) (options : FetchOptions := {}) : Async Response
def post (url : String) (body : ByteArray) (contentType := "application/octet-stream") (headers := #[]) (options := {}) : Async Response
structure FetchOptions where
  backend : Option String := none   -- Fastly: a named backend
```

The response's body is read completely; `r.text?` and `r.header? name` read
it. Redirects are returned, not followed, on every platform (as Fastly does).
Several requests can run at once (`Std.Async.async`): CI sends three requests
that each take 150 ms and requires them to finish in under 400 ms together.

- **Node, edge isolates, Bun, Deno**: the platform's `fetch`.
- **Fastly Compute**: a backend request (`send_async`, completed by the event
  loop). With `backend := some "origin"` it goes to that backend (defined in
  the service, and in `fastly.toml`'s `[local_server.backends]` for Viceroy);
  otherwise Lasm registers a dynamic backend for the URL's scheme, host and
  port (`register_dynamic_backend`, with TLS, SNI and certificate host for
  `https`), which the service must allow.
- **wasi-http**: wasi:http/outgoing-handler. Spin needs the hosts in
  `allowed_outbound_hosts`.
- **WASI CGI**: unavailable, with an error saying so: preview 1 has no
  sockets. Use `--target wasi-http` for a WASI program that calls out.

## How each platform runs it

- **Node.** `serve` starts a `node:http` server through `Lasm.JS` and does
  not return; SIGTERM or SIGINT close it after the open requests. A request
  costs a few host calls (about 25–35 µs each, [JS_INTEROP.md](JS_INTEROP.md))
  plus the handler.
- **Fastly Compute and wasi-http.** Each request starts a fresh instance,
  which runs `main`: `serve` takes the request through the host's interface,
  runs the handler, sends the response and returns, and the instance ends.
- **WASI (CGI).** `serve` reads one request as
  [CGI](https://www.rfc-editor.org/rfc/rfc3875) defines it: `REQUEST_METHOD`,
  the URL from `X_FULL_URL` (or `HTTP_HOST`, `REQUEST_URI` or `SCRIPT_NAME`
  + `PATH_INFO` + `QUERY_STRING`), headers from `HTTP_*`, `CONTENT_TYPE` and
  `CONTENT_LENGTH`, and the body from standard input. It writes `Status:`,
  the headers, a blank line and the body to standard output. While it serves,
  Lean's own standard output goes to standard error, so a log line cannot
  corrupt the response.
- **Edge isolates, Bun and Deno.** `serve` publishes a `fetch` handler
  (`Lasm.JS.exportDefault`), which the generated entry module serves.

Outside Lasm (`lake build`, `lean --run`) `serve` and `fetch` fail with a
message: the adapters are part of Lasm's builds.

## Fastly's stores

`import Lasm.Fastly` (`--target fastly` only; elsewhere the calls fail with a
message):

```lean
Lasm.Fastly.configGet "settings" "color"   : IO (Option String)
Lasm.Fastly.secretGet "secrets" "token"    : IO (Option ByteArray)   -- secretText: as UTF-8
Lasm.Fastly.kvGet "kv" "key"               : IO (Option ByteArray)  -- kvGetText: as UTF-8
Lasm.Fastly.kvPut "kv" "key" bytes         : IO Unit
Lasm.Fastly.kvDelete "kv" "key"            : IO Unit
```

The [Fastly guide](deploy/fastly.md#stores) shows the `fastly.toml` that
Viceroy reads them from.

## Relation to Lasm.JS and Std.Http

`Lasm.Fetch` needs no JavaScript and no npm package, and it is the only way
to serve HTTP from Fastly Compute and WASI. On Node and the edge it uses
`Lasm.JS` internally. `Std.Http` (Lean's own HTTP server) needs listening
sockets, so it runs on Node only; Hono or Express through `Lasm.JS` remain the
choice when you want those frameworks' middleware.

## Measurements

See [WASI.md](WASI.md#measurements).
