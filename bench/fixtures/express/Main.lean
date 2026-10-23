/- Benchmark fixture: Express 5 with a Lean handler.
   GET / answers {"ok":true} from Lean. Listens on 127.0.0.1:$PORT (default 3000). -/
import Lasm.JS
open Lasm.JS

@[js "express" ""] opaque express : IO Value

def main : IO Unit := do
  let app ← express
  let handler ← Function.ofFn fun args => do
    let .ref res _ := args[1]! | throw (IO.userError "unexpected Express arguments")
    let _ : Value ← res.callMethod "json" #[obj [("ok", toJS true)]]
    return .undefined
  let _ : Value ← app.callMethod "get" #[toJS "/", toJS handler]
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://127.0.0.1:{port} (Express)"
    (← IO.getStdout).flush
    return .undefined
  let _ : Value ← app.callMethod "listen" #[toJS port, toJS "127.0.0.1", toJS listening]
  waitForever
