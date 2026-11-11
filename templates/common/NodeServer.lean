/-
Node's HTTP server for a web fetch handler, through the npm package
@hono/node-server (MIT): `NodeServer.serve { port := 3000 } handle` calls
`handle` with each request as a web `Request` (Lasm.JS.Web) and sends the
`Response` it returns, as `Deno.serve` (Lasm.JS.Deno) and `Bun.serve`
(Lasm.JS.Bun) do on their runtimes. Node has no such server of its own, so
this project binds the package's `serve` with Lasm.JS's `@[js]`; package.json's
`lasm.edge.exclude` keeps the package out of the Bun, Deno and edge builds,
which serve the program's default export instead.
-/
import Lasm.JS
import Lasm.JS.Web
open Lasm.JS Lasm.JS.Web

namespace NodeServer

/-- `serve`'s options: `none` leaves a member out (@hono/node-server's
defaults: port 3000, every interface). -/
structure ServeOptions where
  port : Option Nat := none
  hostname : Option String := none

/-- The options object @hono/node-server's `serve` takes. -/
structure Init where
  /-- `(request) => Promise<Response>` -/
  fetch : Value
  port : Option Nat
  hostname : Option String

instance : ToJS Init := ⟨fun o => Support.fields #[("fetch", toJS o.fetch),
  ("port", Support.optional o.port), ("hostname", Support.optional o.hostname)]⟩

/-- The Node `http.Server` that `serve` started. -/
structure Server where
  val : Value

instance : FromJS Server :=
  ⟨fun | .ref v _ => .ok { val := v } | _ => .error "", "NodeServer.Server", .data⟩

/-- `serve(options, listeningListener)` of @hono/node-server. -/
@[js "@hono/node-server" "serve"] opaque serveInit : Init → Value → IO Server

/-- Serves `handle` on Node; `onListening` runs once the server listens. -/
def serve (options : ServeOptions) (handle : Request → Async Response) (onListening : IO Unit := pure ()) : IO Server := do
  let fetch ← Function.ofFn1 handle
  let listening ← Function.ofFn fun _ => do onListening; return .undefined
  serveInit { fetch, port := options.port, hostname := options.hostname } listening

/-- Stops accepting connections and lets open requests finish; then `done` runs. -/
def Server.close (s : Server) (done : IO Unit := pure ()) : IO Unit := do
  let callback ← Function.ofFn fun _ => do done; return .undefined
  let _ : Value ← s.val.callMethod "close" #[toJS callback]

/-- On SIGTERM or SIGINT (how containers and platforms stop a server): closes
the server, then exits with status 0. -/
def Server.closeOnSignals (s : Server) : IO Unit := do
  let process ← require "node:process"
  let stop ← Function.ofFn fun _ => do
    s.close (do let _ : Value ← process.callMethod "exit" #[toJS 0])
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, toJS stop]

end NodeServer
