/- Benchmark fixture: Lean's own Std.Http server. GET / answers {"ok":true}.
   Listens on 127.0.0.1:$PORT (default 3000) and prints "Listening on http://…". -/
import Std.Http
open Std Async Http

def ok : Async (Response Body.Any) := do
  let response ← Response.new |>.status .ok |>.json "{\"ok\":true}"
  return { response with body := Body.Any.ofBody response.body }

def main : IO Unit := do
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  Async.block do
    let handler := Http.Server.Handler.ofFns (fun (_ : Request Body.Stream) => (ok : ContextAsync _))
      (fun error => IO.eprintln s!"connection failure: {error}")
    let server ← Http.Server.serve (.v4 ⟨.ofParts 127 0 0 1, port.toUInt16⟩) handler
      { maxConnections := 512, maxRequests := 1000000000 }
    let some address := server.localAddr | throw (IO.userError "Server has no local address")
    IO.println s!"Listening on http://{address}"
    (← IO.getStdout).flush
    -- Serve until the process is stopped. The promise is never resolved; the
    -- resolve after the await keeps it referenced, so it is never dropped.
    let forever ← IO.Promise.new (α := Unit)
    discard <| await forever.result!
    forever.resolve ()
