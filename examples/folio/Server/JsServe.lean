/-
Folio's servers on the web's own `Request` and `Response` (Lasm.JS.Web.Fetch),
the types every JavaScript runtime serves HTTP with (docs/JS_BINDINGS.md):
`webHandler` turns Folio's handler (`Server/Web.lean`) into a fetch handler
`Request → Async Response`, which each entry file serves the way its platform
expects:

- Node: `Node.serve` (Lasm.JS.Node.Serve, `PreviewServer.lean`);
- Bun: `Bun.serve` (`PreviewServerBun.lean`); Deno: `Deno.serve`
  (`PreviewServerDeno.lean`);
- Cloudflare Workers and Deno Deploy: the program's default export
  (`Lasm.JS.exportDefault`; `ServerWorkers.lean`, `ServerDenoDeploy.lean`).

Fastly Compute runs no JavaScript: `Server/FastlyServe.lean` serves it on
Fastly's own host calls.
-/
import Lasm.JS
import Lasm.JS.Web.Fetch
import Server.Web
open Lasm.JS Std.Async

namespace Folio.Server.JsServe

/-- A web `Request` as Folio's: its method, URL, headers and (except for
`GET` and `HEAD`) its body. -/
def toRequest (request : Lasm.JS.Web.Request) : Async Web.Request := do
  let method ← request.method
  let url ← request.url
  let headers ← (← request.headers).entries
  let body ← if method == "GET" || method == "HEAD" then pure .empty else request.arrayBuffer
  return { method, url, headers, body }

/-- Folio's response as a web `Response` (no body where HTTP has none). An
empty body is `null`, so no platform adds a content type to it. -/
def toResponse (method : String) (r : Web.Response) : IO Lasm.JS.Web.Response :=
  let body : Option Lasm.JS.Web.BodyInit :=
    if Web.bodyless method r.status || r.body.isEmpty then none else some (.bufferSource r.body)
  Lasm.JS.Web.Response.new body
    (some { status := some r.status.toNat, headers := some (.sequence (r.headers.map fun (k, v) => #[k, v])) })

/-- `handler` as a fetch handler, from a web `Request` to a web `Response`. -/
def webHandler (handler : Web.Handler) (request : Lasm.JS.Web.Request) : Async Lasm.JS.Web.Response := do
  let req ← toRequest request
  toResponse req.method (← Web.respond handler req)

end Folio.Server.JsServe
