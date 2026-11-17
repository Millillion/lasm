/-
Serving Ledger on the JavaScript runtimes with each runtime's own server,
through Lasm.JS.Web's `Request` and `Response` (docs/JS_BINDINGS.md, "Servers
on JavaScript runtimes"):

- Cloudflare Workers: the program's default export, `export default {fetch}`
  (`Lasm.JS.exportDefault`), which Lasm's generated entry serves;
- Deno: `Deno.serve` (Lasm.JS.Deno); Bun: `Bun.serve` (Lasm.JS.Bun);
- Node: `Server/NodeServe.lean` (still Lasm.Fetch's server, until how Lean
  servers run on Node is decided).
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Deno
import Lasm.JS.Bun
import Server.Web
open Lasm.JS Std.Async

namespace Ledger.Server.JsServe

/-- The platform's per-request environment on the edge (Cloudflare Workers'
`env`: D1, variables, secrets), as the last request brought it;
`.undefined` elsewhere. `Server/D1.lean` reads its database from it. -/
initialize platformEnv : IO.Ref Data ← IO.mkRef .undefined

/-- A web `Request` as Ledger's: its method, URL, headers and (except for
`GET` and `HEAD`) its body. -/
def toRequest (request : Lasm.JS.Web.Request) : Async Web.Request := do
  let method ← request.method
  let url ← request.url
  let headers ← (← request.headers).entries
  let body ← if method == "GET" || method == "HEAD" then pure .empty else request.arrayBuffer
  return { method, url, headers, body }

/-- Ledger's response as a web `Response` (no body where HTTP has none). An
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
      | throw (IO.userError "Ledger: the fetch handler expected a Request")
    return toJS (← webHandler handler { val := request })
  exportDefault fetch

/-- `PORT` (else `default`) and `HOST` (else 0.0.0.0). -/
def address (default : Nat) : IO (Nat × String) := do
  return (((← IO.getEnv "PORT").bind String.toNat?).getD default, (← IO.getEnv "HOST").getD "0.0.0.0")

/-- Deno: `Deno.serve` on $HOST:$PORT (default 8000); returns when the server closes. -/
def serveDeno (handler : Web.Handler) : IO Unit := do
  let (port, hostname) ← address 8000
  let h ← Deno.ServeHandler.ofFn fun request _ => webHandler handler request
  let server ← Deno.serveWithOptions { port := some port, hostname := some hostname } h
  server.finished.block

/-- Waits for ever (the server serves from JavaScript's event loop meanwhile). -/
def forever : IO Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  -- Keep `p` alive: a dropped promise would resolve its result with `none`.
  let r ← IO.mkRef (some p)
  (Std.Async.await p : Async Unit).block
  discard <| r.get

/-- Bun: `Bun.serve` on $HOST:$PORT (default 3000); never returns. -/
def serveBun (handler : Web.Handler) : IO Unit := do
  let (port, hostname) ← address 3000
  let fetch ← Bun.ServeOptionsFetch.ofFn fun request _ => webHandler handler request
  let server ← Bun.serve { fetch, port := some (.unsignedShort port), hostname := some hostname }
  IO.eprintln s!"Listening on {← (← server.url).href}"
  forever

/-- `Reflect.has(globalThis, name)`. -/
@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool

/-- Whether the program runs on Deno. -/
def onDeno : IO Bool := do reflectHas (← global) "Deno"

end Ledger.Server.JsServe
