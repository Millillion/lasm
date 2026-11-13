/-
Tandem's HTTP handler on the JavaScript runtimes, through Lasm.JS.Web's
`Request` and `Response` (docs/JS_BINDINGS.md, "Servers on JavaScript
runtimes"): the conversions, and Cloudflare Workers' server, the program's
default export `export default {fetch}` (`Lasm.JS.exportDefault`), which
Lasm's generated entry serves. Deno (`Deno.serve`) and Bun (`Bun.serve`)
serve it with their WebSockets in `Server/EdgeWs.lean`; Node in
`Server/NodeWs.lean`.
-/
import Lasm.JS
import Lasm.JS.Web
import Server.Web
open Lasm.JS Std.Async

namespace Tandem.Server.JsServe

/-- The platform's per-request environment on the edge (Cloudflare Workers'
`env`: D1, variables, secrets), as the last request brought it;
`.undefined` elsewhere. `Server/D1.lean` reads its database from it. -/
initialize platformEnv : IO.Ref Data ← IO.mkRef .undefined

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

/-- The edge platforms: publishes `handler` as the program's default export,
a function `(request, env, ctx) => Response`; `env` is kept in `platformEnv`. -/
def serveEdge (handler : Web.Handler) : IO Unit := do
  let fetch ← Function.ofFn fun args => do
    -- Workers' env is a plain object (its bindings arrive as references); keep either form.
    match (args[1]? : Option Data) with
    | some env@(.ref _ _) | some env@(.object _) => platformEnv.set env
    | _ => pure ()
    let .ref request _ := args[0]?.getD .undefined
      | throw (IO.userError "Tandem: the fetch handler expected a Request")
    return toJS (← webHandler handler { val := request })
  exportDefault fetch

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
