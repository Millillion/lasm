/-
The Hono app (Routes.lean) on Node, with Hono's Node adapter
(@hono/node-server). Listens on $HOST (default 0.0.0.0) and $PORT (default
3000), and stops on SIGTERM or SIGINT.
-/
import Routes
import Lasm.JS
open Lasm.JS

/-- `serve(options, listening)` from @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value

def main : IO Unit := do
  let app ← Routes.app
  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port} (Hono)"
    (← IO.getStdout).flush
    return .undefined
  let server ← serve (obj [("fetch", toJS (← app.get "fetch")), ("port", toJS port), ("hostname", toJS host)]) listening

  -- Containers and platforms stop the app with SIGTERM: finish open requests, then exit.
  let process ← require "node:process"
  let exit ← Function.ofFn fun _ => do
    let _ : Value ← process.callMethod "exit" #[toJS 0]
    return .undefined
  let stop ← Function.ofFn fun _ => do
    let _ : Value ← server.callMethod "close" #[toJS exit]
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, toJS stop]
  waitForever
