/- The API of App.lean served by Express 5 (`npm install`, then `npx lasm Express.lean`). -/
import App
open Lasm.JS

/-- `express()` -/
@[js "express" ""] opaque express : IO Value
/-- `express.json()`: parses JSON request bodies. -/
@[js "express" "json"] opaque jsonBodies : IO Value

def main : IO Unit := do
  let ctx ← App.connect
  let app ← express
  let _ : Value ← app.callMethod "use" #[toJS (← jsonBodies)]
  -- Every request: read what App.handle needs, answer with res.status(…).json(…).
  let handler ← Function.ofFn fun args => do
    let (.ref req _, .ref res _) := (args[0]!, args[1]!) | throw (IO.userError "unexpected Express arguments")
    -- One call reads every field the API needs.
    let request ← req.getFields #["method", "path", "headers", "body"]
    let text (d : Data) := match d with | .string s => s | _ => ""
    let method := text (request.field "method")
    let path := text (request.field "path")
    let body := request.field "body"
    let authorization := match (request.field "headers").field "authorization" with | .string s => some s | _ => none
    let response ← App.handle ctx method path authorization body
    let _ : Value ← (← res.callMethod "status" #[toJS response.status]).callMethod "json" #[response.body]
    return .undefined
  let _ : Value ← app.callMethod "use" #[toJS handler]
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let server ← IO.mkRef (none : Option Value)
  let listening ← Function.ofFn fun _ => do
    let some s ← server.get | return .undefined
    let address ← s.callMethod "address" #[] Data
    IO.println s!"Listening on http://127.0.0.1:{(FromJS.fromJS (address.field "port") : Except String Nat).toOption.getD port} (Express)"
    (← IO.getStdout).flush
    return .undefined
  server.set (some (← app.callMethod "listen" #[toJS port, toJS "127.0.0.1", toJS listening]))
  waitForever
