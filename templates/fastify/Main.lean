/-
A Fastify 5 server whose route handlers are Lean functions.
  GET  /             {"message": "Hello from Lean on Fastify!"}
  GET  /hello/:name  {"message": "Hello, NAME, from Lean!"}
  POST /echo         {"echo": <the JSON request body>}
  GET  /health       {"ok": true}
Listens on $HOST (default 0.0.0.0) and $PORT (default 3000).
-/
import App
import Lasm.JS
open Lasm.JS

/-- `Fastify(options)`: the module's own value is the factory. -/
@[js "fastify" ""] opaque fastify : Data → IO Value

/-- A Fastify handler `async (request, reply) => body` written in Lean. It reads
the request fields it needs in one call (`request.getFields`) and returns the
body, which Fastify serializes as JSON: one host round trip per request.
Handlers run in `Async`: awaiting JavaScript in them (`callMethodAwait`, an
`Async` binding such as a database query) holds no Lean thread, so any number
of requests can wait at once. `IO` actions work in `Async` unchanged. -/
def handler (fields : Array String) (f : Data → Async Data) : IO Value :=
  Function.ofFnReply fun args => do
    let .ref request _ := args[0]! | throw (IO.userError "expected (request, reply)")
    let fields ← if fields.isEmpty then pure Data.undefined else request.getFields fields
    return .value (← f fields)

def text : Data → String | .string s => s | _ => ""

def main : IO Unit := do
  let app ← fastify (obj [("logger", toJS false)])
  let route (method path : String) (fields : Array String) (f : Data → Async Data) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler fields f)]
  route "get" "/" #[] fun _ => return obj [("message", toJS "Hello from Lean on Fastify!")]
  route "get" "/hello/:name" #["params"] fun request => do
    -- Fastify's params object has no prototype, so it arrives as a reference.
    let name ← match request.field "params" with
      | .ref params _ => params.get "name" String
      | params => pure (text (params.field "name"))
    return obj [("message", toJS (App.greet name))]
  route "post" "/echo" #["body"] fun request => return obj [("echo", request.field "body")]
  route "get" "/health" #[] fun _ => return obj [("ok", toJS true)]

  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun args => do
    match args[0]? with
    | some (Data.ref error _) =>
      IO.eprintln s!"Fastify could not listen: {← error.get "message" String}"
      let process ← require "node:process"
      let _ : Value ← process.callMethod "exit" #[toJS 1]
    | _ =>
      IO.println s!"Listening on http://{host}:{port} (Fastify)"
      (← IO.getStdout).flush
    return .undefined
  let _ : Value ← app.callMethod "listen" #[obj [("port", toJS port), ("host", toJS host)], toJS listening]

  -- Containers and platforms stop the app with SIGTERM: finish open requests, then exit.
  let process ← require "node:process"
  let exit ← Function.ofFn fun _ => do
    let _ : Value ← process.callMethod "exit" #[toJS 0]
    return .undefined
  let stop ← Function.ofFn fun _ => do
    let _ : Value ← app.callMethod "close" #[toJS exit]
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, toJS stop]
  waitForever
