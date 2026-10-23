/- The API of App.lean served by Hono on Node (`npm install`, then `npx lasm Hono.lean`). -/
import App
open Lasm.JS

/-- `new Hono()` -/
@[js "hono" "new Hono"] opaque newHono : IO Value
/-- `serve(options, listening)` from @hono/node-server -/
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value

def main : IO Unit := do
  let ctx ← App.connect
  let app ← newHono
  -- Every request: read what App.handle needs and return c.json(body, status).
  -- The handler runs in `Async`: while it awaits Postgres or jose it holds no Lean thread.
  let handler ← Function.ofFn fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "unexpected Hono arguments")
    let req ← c.get "req"
    let request ← req.getFields #["method", "path"]
    let text (d : Data) := match d with | .string s => s | _ => ""
    let method := text (request.field "method")
    let path := text (request.field "path")
    let authorization ← req.callMethod "header" #[toJS "authorization"] (Option String)
    let body ← if method == "POST" then
        try req.callMethodAwait "json" catch _ => pure Data.undefined
      else pure Data.undefined
    let response ← App.handle ctx method path authorization body
    c.callMethod "json" #[response.body, toJS response.status] Data
  let _ : Value ← app.callMethod "all" #[toJS "*", toJS handler]
  -- Containers and hosting platforms route to 0.0.0.0 and set PORT.
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let listening ← Function.ofFn fun args => do
    IO.println s!"Listening on http://{host}:{(FromJS.fromJS ((args[0]?.getD Data.undefined).field "port") : Except String Nat).toOption.getD port} (Hono)"
    (← IO.getStdout).flush
    return .undefined
  let _ ← serve (obj [("fetch", toJS (← app.get "fetch")), ("port", toJS port), ("hostname", toJS host)]) listening
  waitForever
