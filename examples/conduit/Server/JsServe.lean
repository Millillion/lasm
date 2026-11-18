/-
Conduit on the web's own `Request` and `Response` (Lasm.JS.Web.Fetch), the
types every JavaScript runtime serves HTTP with (docs/JS_BINDINGS.md):
`webHandler` turns Conduit's handler (`Server/Web.lean`) into a fetch handler
`Request → Async Response`, which each entry file serves the way its platform
expects:

- Node: `Node.serve` (Lasm.JS.Node.Serve, `ServerNode.lean`);
- Bun: `Bun.serve` (`ServerBun.lean`); Deno: `Deno.serve` (`ServerDeno.lean`);
- the edge platforms (Cloudflare Workers, Deno Deploy, Vercel, Netlify and
  Supabase Edge) and the function platforms (Lambda, Vercel, Netlify, Azure,
  Google Cloud Functions): the program's default export
  (`Lasm.JS.exportDefault`), which the platform's generated entry calls.

Outbound requests (`fetch`, for PostgREST on Supabase) use the web's `fetch`.
-/
import Lasm.JS
import Lasm.JS.Web.Fetch
import Server.Web
open Lasm.JS Std.Async

namespace Conduit.Server.JsServe

/-- A web `Request` as Conduit's: its method, URL, headers and (except for
`GET` and `HEAD`) its body. -/
def toRequest (request : Lasm.JS.Web.Request) : Async Web.Request := do
  let method ← request.method
  let url ← request.url
  let headers ← (← request.headers).entries
  let body ← if method == "GET" || method == "HEAD" then pure .empty else request.arrayBuffer
  return { method, url, headers, body }

/-- Conduit's response as a web `Response` (no body where HTTP has none). An
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

/-- Sends an HTTP request with the web's `fetch` and reads the whole
response. Redirects are returned, not followed. -/
def fetch (req : Web.Request) : Async Web.Response := do
  let body : Option Lasm.JS.Web.BodyInit :=
    if req.method == "GET" || req.method == "HEAD" then none else some (.bufferSource req.body)
  let r ← Lasm.JS.Web.fetch (.usvString req.url) (some {
    method := some req.method, headers := some (.sequence (req.headers.map fun (k, v) => #[k, v])),
    body, redirect := some .manual })
  let status ← r.status
  let headers ← (← r.headers).entries
  let bytes ← r.arrayBuffer
  return { status := status.toUInt16, headers, body := bytes }

end Conduit.Server.JsServe
