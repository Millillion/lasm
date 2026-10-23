/-
Interop soak server (Hono on @hono/node-server, Lean handlers): the `hono`
template's routes plus error paths, driven by scripts/interop-soak/soak.mjs.
Routes as in Express.lean; uncaught Lean errors reach Hono's default onError (500).
-/
import App
import Lasm.JS
open Lasm.JS

@[js "hono" "new Hono"] opaque newHono : IO Value
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value
@[js "node:fs/promises" "readFile"] opaque readFile : String → String → Async String
@[js "node:timers/promises" "setTimeout"] opaque sleep : Nat → Async Unit
@[js "node:process" "memoryUsage"] opaque memoryUsage : IO Data
@[js "globalThis" "JSON.parse"] opaque parseJson : String → IO Data

def handler (f : Value → Async Data) : IO Value :=
  Function.ofFn fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "expected a Hono context")
    f c

def json (c : Value) (body : Data) (status : Nat := 200) : IO Data :=
  c.callMethod "json" #[body, toJS status] Data

def missing : String := "/nonexistent/lasm-interop-soak"

def main : IO Unit := do
  let app ← newHono
  let route (method path : String) (f : Value → Async Data) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]
  route "get" "/hello/:name" fun c => do
    let name ← (← c.get "req").callMethod "param" #[toJS "name"] String
    json c (obj [("message", toJS (App.greet name))])
  route "post" "/echo" fun c => do
    let body ← (← c.get "req").callMethodAwait "json" #[] Data
    json c (obj [("echo", body)])
  route "get" "/throw" fun _ => throw (IO.userError "soak: deliberate Lean error")
  route "get" "/reject" fun c => do
    let text ← readFile missing "utf8"
    json c (obj [("unexpected", toJS text)])
  route "get" "/reject-caught" fun c => do
    try
      let _ ← readFile missing "utf8"
      json c (obj [("unexpected", toJS true)])
    catch error => json c (obj [("error", toJS (toString error))]) 404
  route "get" "/slow/:ms" fun c => do
    let ms := ((← (← c.get "req").callMethod "param" #[toJS "ms"] String).toNat?).getD 0
    sleep (min ms 5000)
    json c (obj [("slept", toJS ms)])
  route "get" "/stats" fun c => do
    json c (obj [("memory", ← memoryUsage), ("js", ← parseJson (← Lasm.JS.stats))])

  let host := (← IO.getEnv "HOST").getD "127.0.0.1"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port} (Hono)"
    (← IO.getStdout).flush
    return .undefined
  let _ ← serve (obj [("fetch", toJS (← app.get "fetch")), ("port", toJS port), ("hostname", toJS host)]) listening
  waitForever
