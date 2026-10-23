/-
An HTTP server in pure Lean with `Std.Http` (no JavaScript, also builds natively).
  GET  /             {"message": "Hello from Lean on Std.Http!"}
  GET  /hello/NAME   {"message": "Hello, NAME, from Lean!"}
  POST /echo         {"echo": <the JSON request body>}
  GET  /health       {"ok": true}
Listens on $HOST (default 0.0.0.0, an IPv4 address) and $PORT (default 3000).
-/
import App
import Std.Http
import Lean.Data.Json
open Std Async Http Lean

def respond (status : Http.Status) (json : Json) : Async (Response Body.Any) := do
  let response ← Response.new |>.status status |>.json json.compress
  return { response with body := Body.Any.ofBody response.body }

def routes (request : Request Body.Stream) : ContextAsync (Response Body.Any) := do
  let path := (toString request.line.uri.path).splitOn "/" |>.filter (· != "")
  match request.line.method, path with
  | .get, [] => respond .ok (Json.mkObj [("message", .str "Hello from Lean on Std.Http!")])
  | .get, ["hello", name] => respond .ok (Json.mkObj [("message", .str (App.greet name))])
  | .post, ["echo"] =>
    let body : String ← request.body.readAll (maximumSize := some 65536)
    match Json.parse body with
    | .ok json => respond .ok (Json.mkObj [("echo", json)])
    | .error _ => respond .badRequest (Json.mkObj [("error", .str "Invalid JSON")])
  | .get, ["health"] => respond .ok (Json.mkObj [("ok", .bool true)])
  | _, _ => respond .notFound (Json.mkObj [("error", .str "Not found")])

/-- Parses a dotted IPv4 address such as `0.0.0.0` or `127.0.0.1`. -/
def parseIPv4 (text : String) : Option Net.IPv4Addr :=
  match (text.splitOn ".").map String.toNat? with
  | [some a, some b, some c, some d] =>
    if a < 256 && b < 256 && c < 256 && d < 256 then
      some (.ofParts a.toUInt8 b.toUInt8 c.toUInt8 d.toUInt8)
    else none
  | _ => none

def main : IO UInt32 := do
  let hostText := (← IO.getEnv "HOST").getD "0.0.0.0"
  let some host := parseIPv4 hostText | IO.eprintln s!"HOST must be an IPv4 address: {hostText}"; return 2
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let sigterm ← Signal.Waiter.mk .sigterm false
  let sigint ← Signal.Waiter.mk .sigint false
  Async.block do
    let server ← Http.Server.serve (.v4 ⟨host, port.toUInt16⟩) (Http.Server.Handler.ofFn routes)
    IO.println s!"Listening on http://{hostText}:{port} (Std.Http)"
    (← IO.getStdout).flush
    -- Containers and platforms stop the app with SIGTERM: finish open requests, then exit.
    Selectable.one #[.case sigterm.selector pure, .case sigint.selector pure]
    server.shutdownAndWait
  return 0
