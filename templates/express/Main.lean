/-
An Express 5 server whose request handlers are Lean functions.
  GET  /             {"message": "Hello from Lean on Express!"}
  GET  /hello/:name  {"message": "Hello, NAME, from Lean!"}
  POST /echo         {"echo": <the JSON request body>}
  GET  /health       {"ok": true}
Listens on $HOST (default 0.0.0.0) and $PORT (default 3000).
-/
import App
import Lasm.JS
open Lasm.JS

/-- `express()` -/
@[js "express" ""] opaque express : IO Value
/-- `express.json()`: parses JSON request bodies into `req.body`. -/
@[js "express" "json"] opaque jsonBodies : IO Value

/-- An Express handler `(req, res) => …` written in Lean. -/
def handler (f : Value → Value → IO Unit) : IO Value :=
  Function.ofFn fun args => do
    let (.ref req _, .ref res _) := (args[0]!, args[1]!) | throw (IO.userError "expected (req, res)")
    f req res
    return .undefined

/-- `res.json(body)` -/
def sendJson (res : Value) (body : Data) : IO Unit := do
  let _ : Value ← res.callMethod "json" #[body]

def main : IO Unit := do
  let app ← express
  let _ : Value ← app.callMethod "use" #[toJS (← jsonBodies)]
  let route (method path : String) (f : Value → Value → IO Unit) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]
  route "get" "/" fun _ res => sendJson res (obj [("message", toJS "Hello from Lean on Express!")])
  route "get" "/hello/:name" fun req res => do
    let name ← (← req.get "params").get "name" String
    sendJson res (obj [("message", toJS (App.greet name))])
  route "post" "/echo" fun req res => do
    sendJson res (obj [("echo", ← req.get "body" Data)])
  route "get" "/health" fun _ res => sendJson res (obj [("ok", toJS true)])

  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port} (Express)"
    (← IO.getStdout).flush
    return .undefined
  let server : Value ← app.callMethod "listen" #[toJS port, toJS host, toJS listening]

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
