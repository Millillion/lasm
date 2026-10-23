/-
Interop soak server (Express 5, Lean handlers): the `express` template's routes
plus error paths, driven by scripts/interop-soak/soak.mjs.
  GET  /hello/:name     {"message": "Hello, NAME, from Lean!"}
  POST /echo            {"echo": body}
  GET  /throw           the Lean handler throws: its promise rejects, Express answers 500
  GET  /reject          awaits a rejected JavaScript promise (fs.readFile of a missing file), uncaught: 500
  GET  /reject-caught   the same rejection caught in Lean: 404 {"error": message}
  GET  /slow/:ms        awaits a JavaScript timer, then {"slept": ms} (the soak aborts some of these)
  GET  /stats           {"memory": process.memoryUsage(), "js": Lasm.JS.stats}
-/
import App
import Lasm.JS
open Lasm.JS

@[js "express" ""] opaque express : IO Value
@[js "express" "json"] opaque jsonBodies : IO Value
@[js "node:fs/promises" "readFile"] opaque readFile : String → String → IO String
@[js "node:timers/promises" "setTimeout"] opaque sleep : Nat → IO Unit
@[js "node:process" "memoryUsage"] opaque memoryUsage : IO Data
@[js "globalThis" "JSON.parse"] opaque parseJson : String → IO Data

def handler (f : Value → Value → IO Unit) : IO Value :=
  Function.ofFn fun args => do
    let (.ref req _, .ref res _) := (args[0]!, args[1]!) | throw (IO.userError "expected (req, res)")
    f req res
    return .undefined

def sendJson (res : Value) (body : Data) (status : Nat := 200) : IO Unit := do
  let _ : Value ← (← res.callMethod "status" #[toJS status]).callMethod "json" #[body]

def missing : String := "/nonexistent/lasm-interop-soak"

def main : IO Unit := do
  let app ← express
  let _ : Value ← app.callMethod "use" #[toJS (← jsonBodies)]
  let route (method path : String) (f : Value → Value → IO Unit) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]
  route "get" "/hello/:name" fun req res => do
    let name ← (← req.get "params").get "name" String
    sendJson res (obj [("message", toJS (App.greet name))])
  route "post" "/echo" fun req res => do
    sendJson res (obj [("echo", ← req.get "body" Data)])
  route "get" "/throw" fun _ _ => throw (IO.userError "soak: deliberate Lean error")
  route "get" "/reject" fun _ res => do
    let text ← readFile missing "utf8"
    sendJson res (obj [("unexpected", toJS text)])
  route "get" "/reject-caught" fun _ res => do
    try
      let _ ← readFile missing "utf8"
      sendJson res (obj [("unexpected", toJS true)])
    catch error => sendJson res (obj [("error", toJS (toString error))]) 404
  route "get" "/slow/:ms" fun req res => do
    let ms := ((← (← req.get "params").get "ms" String).toNat?).getD 0
    sleep (min ms 5000)
    sendJson res (obj [("slept", toJS ms)])
  route "get" "/stats" fun _ res => do
    sendJson res (obj [("memory", ← memoryUsage), ("js", ← parseJson (← Lasm.JS.stats))])

  let host := (← IO.getEnv "HOST").getD "127.0.0.1"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port} (Express)"
    (← IO.getStdout).flush
    return .undefined
  let _ : Value ← app.callMethod "listen" #[toJS port, toJS host, toJS listening]
  waitForever
