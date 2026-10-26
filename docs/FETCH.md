# Lasm.Fetch: one HTTP handler in pure Lean, on every server target

`Lasm.Fetch` is Lasm's HTTP handler API: a request goes in, a response comes
out, and everything in between is ordinary Lean. The same `Main.lean` serves:

| Build | Where it runs | How requests arrive |
| --- | --- | --- |
| `lasm build Main.lean` | Node 24+ (`node dist/main.mjs`), containers, VMs | An HTTP server (`node:http`) on `$HOST:$PORT`, default `0.0.0.0:3000` |
| `lasm build Main.lean --target fastly` | Fastly Compute (`fastly compute serve`, `fastly compute deploy`) | Fastly's host calls: one request per instance |
| `lasm build Main.lean --target wasi` | Spin (`executor = { type = "wagi" }`), wasmtime, wasmer, Node's `node:wasi`, any CGI host | CGI: one request per run (environment variables and standard input in, standard output out) |
| `--target workers`, `vercel-edge`, `netlify-edge`, `deno-deploy` | Edge isolates (experimental, [EDGE.md](EDGE.md)) | The platform's `fetch` handler |
| `--target bun`, `--target deno` | Bun, Deno ([BUN_DENO.md](BUN_DENO.md)) | `Bun.serve` / `Deno.serve` on `$PORT` |

No npm package, JavaScript or platform SDK is involved: Lasm supplies the
adapter for each platform. CI checks one handler
([`examples/fetch`](../examples/fetch/Main.lean)) route by route on
wasmtime, wasmer, `node:wasi`, Spin, Viceroy (Fastly's local simulator), Node
and Deno ([`wasi.yml`](../.github/workflows/wasi.yml)).

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
    Std.Async.sleep 100        -- waits without blocking other work
    return .text "done"
  | _, _ => return .notFound

def main : IO Unit := serve handle
```

`lasm init my-app --template fetch` creates this project, with
`--deploy fastly`, `--deploy wasi`, `--deploy spin` and the edge targets
available.

## API

```lean
structure Request where
  method : String                       -- "GET", "POST", …
  url : String                          -- absolute where the platform gives the host
  headers : Array (String × String)     -- the platform's order and case
  body : ByteArray

structure Response where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty

abbrev Handler := Request → Async Response
def serve (handler : Handler) : IO Unit
```

`Async` is `Std.Async.Async` (exported by `open Lasm.Fetch`): handlers can
await `Std.Async` timers and tasks, and `IO` actions run in it unchanged.

| Request | |
| --- | --- |
| `req.path` | The URL's path without the query (`/hello/Ada`); `/` when empty. |
| `req.segments` | The path's decoded segments: `/hello/J%C3%BCrgen` → `["hello", "Jürgen"]`. |
| `req.query`, `req.queryParams`, `req.queryParam? "q"` | The raw query, its decoded pairs (`+` is a space), one parameter. |
| `req.header? "content-type"` | The first header with that name, ignoring case. |
| `req.text`, `req.text?` | The body as UTF-8 (empty, or `none`, when it is not valid UTF-8). |

| Response | |
| --- | --- |
| `.text s`, `.html s`, `.json s` | A body with its content type (`text/plain; charset=utf-8`, `text/html; charset=utf-8`, `application/json`); optional `(status := 201)`. |
| `.bytes b (contentType := …)` | Bytes; `application/octet-stream` by default. |
| `.redirect "/to"` | `Location`, status 302 (or another). |
| `.empty`, `.notFound` | 204 with no body; 404 `Not Found`. |
| `r.withHeader k v`, `r.withStatus s` | Add a header (repeatable, as `set-cookie` is) or replace the status. |

**Errors.** A handler that throws answers `500 Internal Server Error`; the
error goes to standard error with the method and path. **HEAD** requests run the handler as `GET`; their responses, and those
with status 101, 204, 205 or 304, are sent without a body.

**Lower-level pieces.** `Lasm.Fetch.respond` runs a handler with that error
handling; `jsFetchHandler` makes a JavaScript `fetch` function of a handler
(for use with `Lasm.JS`); `serveNode` serves on Node; `platformCode` reports
where the program runs.

## How each platform runs it

- **Node.** `serve` starts a `node:http` server through `Lasm.JS` and does not
  return; SIGTERM or SIGINT close it after the open requests. A request costs a
  few host calls (about 25–35 µs each, [JS_INTEROP.md](JS_INTEROP.md)) plus
  the handler.
- **Fastly Compute.** Each request starts a fresh instance, which runs `main`:
  `serve` reads the downstream request through Fastly's host calls
  (`fastly_http_req`, `fastly_http_body`), runs the handler and sends the
  response (`fastly_http_resp.send_downstream`), then returns, and the
  instance ends. Lean's standard output and error are Fastly's logs.
- **WASI (CGI).** `serve` reads one request as
  [CGI](https://www.rfc-editor.org/rfc/rfc3875) defines it, the way Spin's
  wagi executor passes it: `REQUEST_METHOD`, the URL from `X_FULL_URL` (or
  `HTTP_HOST`, `REQUEST_URI` or `SCRIPT_NAME` + `PATH_INFO` + `QUERY_STRING`),
  headers from `HTTP_*`, `CONTENT_TYPE` and `CONTENT_LENGTH`, and the body
  from standard input. It writes `Status:`, the headers, a blank line and the
  body to standard output. While it serves, Lean's own standard output goes to
  standard error, so a log line cannot corrupt the response. Spin keeps one
  value per header name (its wagi parser uses a map), so a repeated header
  such as `set-cookie` arrives once there.
- **Edge isolates, Bun and Deno.** `serve` publishes a `fetch` handler
  (`Lasm.JS.exportDefault`), which the generated entry module serves.

Outside Lasm (`lake build`, `lean --run`) `serve` fails with a message: the
adapters are part of Lasm's builds.

## Relation to Lasm.JS and Std.Http

`Lasm.Fetch` needs no JavaScript and no npm package, and it is the only way
to serve HTTP from Fastly Compute and WASI. On Node and the edge it uses
`Lasm.JS` internally. `Std.Http` (Lean's own HTTP server) needs listening
sockets, so it runs on Node only; Hono or Express through `Lasm.JS` remain the
choice when you want those frameworks' middleware.

## Measurements

From CI run 40299999999 (see [WASI.md](WASI.md#measurements)).
