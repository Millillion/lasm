/-
A Hono app whose request handlers are Lean functions. Main.lean serves it on
Node (@hono/node-server); Export.lean publishes it as the program's default
export for Cloudflare Workers, the other edge targets, Bun, Deno and the
function platforms.
  GET  /             {"message": "Hello from Lean on Hono!"}
  GET  /hello/:name  {"message": "Hello, NAME, from Lean!"}
  POST /echo         {"echo": <the JSON request body>}
  GET  /health       {"ok": true}
-/
import App
import Lasm.JS
open Lasm.JS

namespace Routes

/-- `new Hono()` -/
@[js "hono" "new Hono"] opaque newHono : IO Value

/-- A Hono handler `(c) => Response` written in Lean. Handlers run in `Async`:
awaiting JavaScript in them (`callMethodAwait`, an `Async` binding such as a
database query) holds no Lean thread, so any number of requests can wait at
once. `IO` actions work in `Async` unchanged. -/
def handler (f : Value → Async Function.Reply) : IO Value :=
  Function.ofFnReply fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "expected a Hono context")
    f c

/-- `c.json(body)`: the `Response` the handler returns, made by the host as the
reply (one host round trip fewer than calling it from Lean). -/
def json (c : Value) (body : Data) : Async Function.Reply :=
  return .callMethod c "json" #[body]

/-- The Hono app with its routes. -/
def app : IO Value := do
  let app ← newHono
  let route (method path : String) (f : Value → Async Function.Reply) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]
  route "get" "/" fun c => json c (obj [("message", toJS "Hello from Lean on Hono!")])
  route "get" "/hello/:name" fun c => do
    let name ← (← c.get "req").callMethod "param" #[toJS "name"] String
    json c (obj [("message", toJS (App.greet name))])
  route "post" "/echo" fun c => do
    let body ← (← c.get "req").callMethodAwait "json" #[] Data
    json c (obj [("echo", body)])
  route "get" "/health" fun c => json c (obj [("ok", toJS true)])
  return app

end Routes
