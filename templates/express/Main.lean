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

/-- An Express handler `(req, res) => …` written in Lean. It reads the request
fields it needs in one call (`req.getFields`) and answers with `Reply.callMethod`,
which the host makes as part of the reply: two host round trips per request. -/
def handler (fields : Array String) (f : Data → Value → IO Reply) : IO Value :=
  Function.ofFnReply fun args => do
    let (.ref req _, .ref res _) := (args[0]!, args[1]!) | throw (IO.userError "expected (req, res)")
    let request ← if fields.isEmpty then pure Data.undefined else req.getFields fields
    f request res

/-- `res.json(body)`, made by the host as the reply. -/
def sendJson (res : Value) (body : Data) : IO Reply :=
  return .callMethod res "json" #[body]

def text : Data → String | .string s => s | _ => ""

def main : IO Unit := do
  let app ← express
  let _ : Value ← app.callMethod "use" #[toJS (← jsonBodies)]
  let route (method path : String) (fields : Array String) (f : Data → Value → IO Reply) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler fields f)]
  route "get" "/" #[] fun _ res => sendJson res (obj [("message", toJS "Hello from Lean on Express!")])
  route "get" "/hello/:name" #["params"] fun req res =>
    sendJson res (obj [("message", toJS (App.greet (text ((req.field "params").field "name"))))])
  route "post" "/echo" #["body"] fun req res =>
    sendJson res (obj [("echo", req.field "body")])
  route "get" "/health" #[] fun _ res => sendJson res (obj [("ok", toJS true)])

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
