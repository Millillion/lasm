/-
A Hono app on Node (@hono/node-server) whose request handlers are Lean functions.
  GET  /             {"message": "Hello from Lean on Hono!"}
  GET  /hello/:name  {"message": "Hello, NAME, from Lean!"}
  POST /echo         {"echo": <the JSON request body>}
  GET  /health       {"ok": true}
Listens on $HOST (default 0.0.0.0) and $PORT (default 3000).
-/
import App
import Lasm.JS
open Lasm.JS

/-- `new Hono()` -/
@[js "hono" "new Hono"] opaque newHono : IO Value
/-- `serve(options, listening)` from @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value

/-- A Hono handler `(c) => Response` written in Lean. -/
def handler (f : Value → IO Reply) : IO Value :=
  Function.ofFnReply fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "expected a Hono context")
    f c

/-- `c.json(body)`: the `Response` the handler returns, made by the host as the
reply (one host round trip fewer than calling it from Lean). -/
def json (c : Value) (body : Data) : IO Reply :=
  return .callMethod c "json" #[body]

def main : IO Unit := do
  let app ← newHono
  let route (method path : String) (f : Value → IO Reply) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]
  route "get" "/" fun c => json c (obj [("message", toJS "Hello from Lean on Hono!")])
  route "get" "/hello/:name" fun c => do
    let name ← (← c.get "req").callMethod "param" #[toJS "name"] String
    json c (obj [("message", toJS (App.greet name))])
  route "post" "/echo" fun c => do
    let body ← (← c.get "req").callMethodAwait "json" #[] Data
    json c (obj [("echo", body)])
  route "get" "/health" fun c => json c (obj [("ok", toJS true)])

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
