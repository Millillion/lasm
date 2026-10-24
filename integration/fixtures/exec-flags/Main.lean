/- Node exec-flag fixture (integration/node-exec-flags.mjs): with no arguments,
   tasks on Lean's thread pool, a dedicated thread, file IO and a big number;
   with `serve`, Std.Http on 127.0.0.1:$PORT answering GET / with {"ok":true}. -/
import Std.Http
open Std Async Http

def ok : Async (Response Body.Any) := do
  let response ← Response.new |>.status .ok |>.json "{\"ok\":true}"
  return { response with body := Body.Any.ofBody response.body }

def serve : IO Unit := do
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  Async.block do
    let handler := Http.Server.Handler.ofFns (fun (_ : Request Body.Stream) => (ok : ContextAsync _))
      (fun error => IO.eprintln s!"connection failure: {error}")
    let server ← Http.Server.serve (.v4 ⟨.ofParts 127 0 0 1, port.toUInt16⟩) handler {}
    let some address := server.localAddr | throw (IO.userError "Server has no local address")
    IO.println s!"Listening on http://{address}"
    (← IO.getStdout).flush
    let forever ← IO.Promise.new (α := Unit)
    discard <| await forever.result!
    forever.resolve ()

def main (args : List String) : IO Unit := do
  if args == ["serve"] then serve else
  let tasks := (List.range 8).map fun i => Task.spawn fun _ => (List.range (20000 * (i + 1))).foldl (· + ·) 0
  let dedicated ← IO.asTask (prio := .dedicated) (pure ((3 : Nat) ^ 500 % 1000000007))
  IO.FS.writeFile "exec-flags.txt" "written"
  IO.println s!"tasks {tasks.map Task.get} dedicated {(← IO.wait dedicated).toOption} file {← IO.FS.readFile "exec-flags.txt"}"
