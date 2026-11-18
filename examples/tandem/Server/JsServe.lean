/-
Tandem's HTTP handler on the JavaScript runtimes, through Lasm.JS.Web's
`Request` and `Response` (docs/JS_BINDINGS.md, "Servers on JavaScript
runtimes"): the conversions. Cloudflare Workers serves `webHandler` as the
`fetch` of an `ExportedHandler` (`ServerWorkers.lean`, Lasm.JS.Cloudflare). Deno (`Deno.serve`) and Bun (`Bun.serve`)
serve it with their WebSockets in `Server/EdgeWs.lean`; Node in
`Server/NodeWs.lean`.
-/
import Lasm.JS
import Lasm.JS.Web.Fetch
import Server.Web
open Lasm.JS Std.Async

namespace Tandem.Server.JsServe

/-- A web `Request` as Tandem's: its method, URL, headers and (except for
`GET` and `HEAD`) its body. -/
def toRequest (request : Lasm.JS.Web.Request) : Async Web.Request := do
  let method ← request.method
  let url ← request.url
  let headers ← (← request.headers).entries
  let body ← if method == "GET" || method == "HEAD" then pure .empty else request.arrayBuffer
  return { method, url, headers, body }

/-- Tandem's response as a web `Response` (no body where HTTP has none). An
empty body is `null`: Node's adapter would label an empty byte array
`text/plain`, which no other platform does. -/
def toResponse (method : String) (r : Web.Response) : IO Lasm.JS.Web.Response :=
  let body : Option Lasm.JS.Web.BodyInit :=
    if Web.bodyless method r.status || r.body.isEmpty then none else some (.bufferSource r.body)
  Lasm.JS.Web.Response.new body
    (some { status := some r.status.toNat, headers := some (.sequence (r.headers.map fun (k, v) => #[k, v])) })

/-- `handler` as a function from a web `Request` to a web `Response`. -/
def webHandler (handler : Web.Handler) (request : Lasm.JS.Web.Request) : Async Lasm.JS.Web.Response := do
  let req ← toRequest request
  toResponse req.method (← Web.respond handler req)

/-- `PORT` (else `default`) and `HOST` (else 0.0.0.0). -/
def address (default : Nat) : IO (Nat × String) := do
  return (((← IO.getEnv "PORT").bind String.toNat?).getD default, (← IO.getEnv "HOST").getD "0.0.0.0")

/-- Waits for ever (the server serves from JavaScript's event loop meanwhile). -/
def forever : IO Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  -- Keep `p` alive: a dropped promise would resolve its result with `none`.
  let r ← IO.mkRef (some p)
  (Std.Async.await p : Async Unit).block
  discard <| r.get

end Tandem.Server.JsServe
