/-
Lasm.JS.Node.Serve: `Node.serve`, an HTTP server on Node for a Lean fetch handler
(`Request → Async Response`, Lasm.JS.Web's types).

Provided by Lasm: hand-written, not generated, and not a Node API (Node has no
fetch-style server). Its shape mirrors Bun's `Bun.serve` (Lasm.JS.Bun): one options
record with `fetch` inside, and Bun's option names where Bun has the option
(`fetch`, `port`, `hostname`, `error`). The server is Node's `node:http`; Lasm's
builtin module `lasm:node-serve` (src/lasm-modules/node-serve.mjs) translates its
requests to web `Request`s and the handler's `Response`s back, with no npm package.
Guide: docs/JS_BINDINGS.md ("Serving HTTP on Node: Node.serve").
-/
import Lasm.JS
import Lasm.JS.Web.Dom
import Lasm.JS.Web.Fetch

namespace Lasm.JS.Node
open Lasm.JS Lasm.JS.Web

/-- A server started by `Node.serve` (provided by Lasm; Bun's `Server` has the same
`hostname`, `port`, `url` and `stop`). -/
structure Server where
  /-- The address the server listens on (`0.0.0.0` for every IPv4 address). -/
  hostname : String
  /-- The port it listens on (the one the system chose, for `port := some 0`). -/
  port : Nat
  /-- Its URL: `http://hostname:port/`, with `localhost` for `0.0.0.0` and `::`. -/
  url : String
  /-- The JavaScript handle (src/lasm-modules/node-serve.mjs). -/
  val : Value

/-- Stops accepting connections and resolves once the server has closed: requests
in progress finish first (idle keep-alive connections close at once), unless
`closeActiveConnections` (Bun's `stop(true)`) closes them too. -/
def Server.stop (server : Server) (closeActiveConnections : Bool := false) : Async Unit :=
  server.val.callMethodAwait "stop" #[toJS closeActiveConnections] Unit

/-- Resolves once the server has closed (after `stop`, the `signal`, or SIGTERM or
SIGINT); Deno's `HttpServer.finished`. -/
def Server.finished (server : Server) : Async Unit := do
  (← server.val.get "finished" Value).await Unit

/-- Options of `Node.serve`: Bun.serve's options of the same names, and Deno.serve's
`signal` and `onListen`. -/
structure ServeOptions where
  /-- The handler: called for every request, with the request's body streamed, and
  `request.signal` aborted if the client goes away before the response is sent. -/
  fetch : Request → Async Response
  /-- The port; by default `$PORT`, else 3000 (as Bun). `some 0` lets the system choose. -/
  port : Option Nat := none
  /-- The address to listen on; by default `0.0.0.0`, every IPv4 address (as Bun). -/
  hostname : Option String := none
  /-- Aborting it stops the server, as `Server.stop` (Deno.serve's `signal`). -/
  signal : Option AbortSignal := none
  /-- Called once the server listens, with the server (Deno.serve's `onListen`); by
  default `Listening on <url>` is printed. -/
  onListen : Option (Server → IO Unit) := none
  /-- The response when `fetch` throws (Bun.serve's `error`); by default a 500 with
  no details, and the error is printed on stderr. -/
  error : Option (IO.Error → Async Response) := none

namespace Serve
-- The exports of `lasm:node-serve` (src/lasm-modules/node-serve.mjs).
/-- `serve(options)`: resolves with the server's handle once it listens. -/
@[js "lasm:node-serve" "serve"] opaque start : Data → IO Value
end Serve

/-- Serves HTTP on Node with `options.fetch`, a Lean handler `Request → Async Response`,
and returns once the server has stopped: `Server.stop`, `options.signal`, or SIGTERM or
SIGINT (which finish the requests in progress first). Provided by Lasm: not a Node API
and not generated; it mirrors `Bun.serve` (Lasm.JS.Bun).
```
def main : IO Unit :=
  Node.serve { fetch := handle, port := some 3000 }
```
The handle (address, `stop`, `finished`) goes to `onListen`. Requests and responses
stream both ways with backpressure. Multiple `Set-Cookie` headers each arrive whole,
`HEAD` and null-body statuses send no body, and an empty body is sent as
`content-length: 0` with no content type added. The request's URL comes from its Host
header when that is a plain `host[:port]`, else from the listening address. -/
def serve (options : ServeOptions) : IO Unit := do
  let fetch ← Lasm.JS.Function.ofFn1 options.fetch
  let error : Data ← match options.error with
    | none => pure .undefined
    | some onError => do
      let f ← Lasm.JS.Function.ofFn fun (args : Array Lasm.JS.Data) => do
        let message := match args.getD 0 .undefined with | .string s => s | _ => "the handler failed"
        return toJS (← onError (IO.userError message))
      pure (.ref f "")
  let handle ← Serve.start (obj [("fetch", .ref fetch ""), ("port", Lasm.JS.Web.Support.optional options.port),
    ("hostname", Lasm.JS.Web.Support.optional options.hostname), ("signal", Lasm.JS.Web.Support.optional options.signal), ("error", error)])
  let fields ← handle.getFields #["hostname", "port", "url"]
  let server : Server := {
    hostname := match fields.field "hostname" with | .string s => s | _ => ""
    port := match fields.field "port" with | .number n => n.toUInt64.toNat | _ => 0
    url := match fields.field "url" with | .string s => s | _ => ""
    val := handle }
  match options.onListen with
  | some onListen => onListen server
  | none =>
    IO.println s!"Listening on {server.url}"
    (← IO.getStdout).flush
  (← handle.get "finished" Value).await Unit

end Lasm.JS.Node
