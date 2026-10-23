/- Benchmark fixture: Hono on Node (@hono/node-server) with a Lean handler.
   GET / answers {"ok":true} from Lean. Listens on 127.0.0.1:$PORT (default 3000). -/
import Lasm.JS
open Lasm.JS

@[js "hono" "new Hono"] opaque newHono : IO Value
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value

def main : IO Unit := do
  let app ← newHono
  let handler ← Function.ofFn fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "unexpected Hono arguments")
    c.callMethod "json" #[obj [("ok", toJS true)]] Data
  let _ : Value ← app.callMethod "get" #[toJS "/", toJS handler]
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://127.0.0.1:{port} (Hono)"
    (← IO.getStdout).flush
    return .undefined
  let _ ← serve (obj [("fetch", toJS (← app.get "fetch")), ("port", toJS port), ("hostname", toJS "127.0.0.1")]) listening
  waitForever
