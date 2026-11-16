/-
Lasm.RPC on the JavaScript runtimes: `webHandler` answers the endpoints for a
Lasm.JS.Web `Request` (the web platform's own, as `Deno.serve`, `Bun.serve`,
`Node.serve` and the edge platforms' default export hand it over), so a
fetch handler serves them in one line:

    def fetch (request : Lasm.JS.Web.Request) : Async Lasm.JS.Web.Response := do
      if let some response ← Lasm.RPC.webHandler routes request then return response
      …your pages and files…

On Lasm.Fastly and Lasm.WASI.Http, call `Lasm.RPC.dispatch` with the
request's method, path and body.
-/
import Lasm.RPC.Server
import Lasm.JS.Web

namespace Lasm.RPC
open Lasm.JS Std.Async

/-- An `Answer` as a web `Response`. -/
def Answer.toResponse (a : Answer) : IO Lasm.JS.Web.Response :=
  Lasm.JS.Web.Response.new (some (.usvString a.body))
    (some { status := some a.status.toNat, headers := some (.sequence (a.headers.map fun (k, v) => #[k, v])) })

/-- The response to `request` when its URL path names an endpoint
(`/rpc/<name>`: `dispatch`), `none` otherwise, so the program answers every
other request itself. The body is read only for a `POST` to an endpoint. -/
def webHandler (routes : List Route) (request : Lasm.JS.Web.Request) : Async (Option Lasm.JS.Web.Response) := do
  let path ← (← Lasm.JS.Web.URL.new (← request.url)).pathname
  if (endpointName? path).isNone then return none
  let method ← request.method
  let body ← if method == "POST" then request.text else pure ""
  match dispatch routes method path body with
  | none => return none
  | some answer => return some (← (← answer).toResponse)

end Lasm.RPC
