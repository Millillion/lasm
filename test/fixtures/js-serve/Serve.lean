/-
End-to-end server of test/fixtures/js-serve: App.handle served by the runtime the
program runs on, with its own server API:

- Deno: `Deno.serveWithOptions` (Lasm.JS.Deno), closed by aborting its signal;
- Bun: `Bun.serve` (Lasm.JS.Bun), closed with `stop`;
- Node: `Node.serve` (Lasm.JS.Node.Serve, provided by Lasm: Node has no fetch-style
  server of its own), stopped with `Server.stop`.

It listens on 127.0.0.1:$PORT, prints `listening <port>`, and serves until a
request for `/shutdown`; then it closes the server, waits for open requests, prints
`stopped` and exits with 0. scripts/bindings/test-serve.mjs builds it for each
runtime and requests it from outside the process (docs/TESTING.md).
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Deno
import Lasm.JS.Bun
import Lasm.JS.Node.Serve
import App
open Lasm.JS Lasm.JS.Web

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool

def announce (line : String) : IO Unit := do
  IO.println line
  (← IO.getStdout).flush

/-- App.handle, with `/shutdown` answered by `stop` (run after the reply). -/
def withShutdown (stop : IO Unit) (request : Request) : Async Response := do
  if (← (← URL.new (← request.url)).pathname) == "/shutdown" then
    stop
    App.text "stopping"
  else App.handle request

def main : IO UInt32 := do
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 0
  let g ← Lasm.JS.global
  if ← reflectHas g "Deno" then
    let ac ← AbortController.new
    let onListen ← Deno.ServeOptionsOnListen.ofFn fun addr => do announce s!"listening {addr.port}"
    let handler ← Deno.ServeHandler.ofFn fun req _ => withShutdown ac.abort req
    let server ← Deno.serveWithOptions { port := some port, hostname := some "127.0.0.1", signal := some (← ac.signal), onListen := some onListen } handler
    server.finished.block
  else if ← reflectHas g "Bun" then
    -- The /shutdown handler resolves `stopping`; main then closes the server.
    let stopping : IO.Promise Unit ← IO.Promise.new
    let stop : IO Unit := stopping.resolve ()
    let fetch ← Bun.ServeOptionsFetch.ofFn fun req _ => withShutdown stop req
    let server ← Bun.serve { fetch, port := some (.unsignedShort port), hostname := some "127.0.0.1" }
    announce s!"listening {(← server.port).getD 0}"
    (Std.Async.await stopping : Async Unit).block
    server.stop.block
  else
    -- Node.serve returns once the server has stopped: the /shutdown handler starts
    -- a graceful stop, which finishes its own request first.
    let handle ← IO.mkRef (none : Option Node.Server)
    let stop : IO Unit := do
      if let some server ← handle.get then
        let _ : Value ← server.val.callMethod "stop" #[]
        pure ()
    Node.serve {
      fetch := withShutdown stop, port := some port, hostname := some "127.0.0.1",
      onListen := some fun server => do handle.set (some server); announce s!"listening {server.port}" }
  announce "stopped"
  return 0
