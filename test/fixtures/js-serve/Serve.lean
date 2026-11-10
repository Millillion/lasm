/-
End-to-end server of test/fixtures/js-serve: App.handle served by the runtime the
program runs on, with its own server API:

- Deno: `Deno.serveWithOptions` (Lasm.JS.Deno), closed by aborting its signal;
- Bun: `Bun.serve` (Lasm.JS.Bun), closed with `stop`;
- Node: @hono/node-server's `serve({fetch})`, an `@[js]` binding to the npm package
  (Node has no fetch-style server of its own), closed with `close`.

It listens on 127.0.0.1:$PORT, prints `listening <port>`, and serves until a
request for `/shutdown`; then it closes the server, waits for open requests, prints
`stopped` and exits with 0. scripts/bindings/test-serve.mjs builds it for each
runtime and requests it from outside the process (docs/TESTING.md).
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Deno
import Lasm.JS.Bun
import App
open Lasm.JS Lasm.JS.Web

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool
/-- `serve(options, listeningListener)` of @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque nodeServe : Data → Value → IO Value

def announce (line : String) : IO Unit := do
  IO.println line
  (← IO.getStdout).flush

/-- App.handle, with `/shutdown` answered by `stop` (run after the reply). -/
def withShutdown (stop : IO Unit) (request : Request) : Async Response := do
  if (← URL.new (← request.url)).pathname == "/shutdown" then
    stop
    App.text "stopping"
  else App.handle request

def main : IO UInt32 := do
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 0
  let g ← Lasm.JS.global
  if ← reflectHas g "Deno" then
    let ac ← AbortController.new
    let onListen ← Deno.ServeOptionsOnListen.ofFn fun addr => do announce s!"listening {← addr.port}"
    let handler ← Deno.ServeHandler.ofFn fun req _ => withShutdown ac.abort req
    let server ← Deno.serveWithOptions { port := some port, hostname := some "127.0.0.1", signal := some (← ac.signal), onListen := some onListen } handler
    server.finished.block
  else
    -- Bun and Node: the /shutdown handler resolves `stopping`; main then closes the server.
    let stopping : IO.Promise Unit ← IO.Promise.new
    let stop : IO Unit := stopping.resolve ()
    if ← reflectHas g "Bun" then
      let fetch ← Bun.ServeOptionsFetch.ofFn fun req _ => withShutdown stop req
      let server ← Bun.serve { fetch, port := some (.unsignedShort port), hostname := some "127.0.0.1" }
      announce s!"listening {(← server.port).getD 0}"
      (Std.Async.await stopping : Async Unit).block
      server.stop.block
    else
      let listening ← Function.ofFn fun args => do
        match (args[0]?.getD .undefined).field "port" with
        | .number n => announce s!"listening {n.toUInt64.toNat}"
        | _ => announce "listening ?"
        return .undefined
      let fetch ← Function.ofFn1 (withShutdown stop)
      let server ← nodeServe (obj [("fetch", toJS fetch), ("port", toJS port), ("hostname", toJS "127.0.0.1")]) listening
      (Std.Async.await stopping : Async Unit).block
      let closed : IO.Promise Unit ← IO.Promise.new
      let done ← Function.ofFn fun _ => do closed.resolve (); return .undefined
      let _ : Value ← server.callMethod "close" #[toJS done]
      (Std.Async.await closed : Async Unit).block
  announce "stopped"
  return 0
