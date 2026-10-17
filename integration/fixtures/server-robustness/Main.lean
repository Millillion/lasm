/-
Server MVP robustness fixture: ordinary Lean with Std.Http.Server and a narrow
Lean.Data.Json import. Built natively and with Lasm, then driven by
scripts/server-mvp/robustness.mjs (load, soak and faults).

Routes
  GET  /health            {"ok":true}
  POST /json              {"name":s,"numbers":[ints]} -> {"count","max","min","name","reversed","sum"}
  POST /echo              reads the request stream chunk by chunk, streams the chunks back (chunked)
  POST /echo-live         streams the body back from the response producer (see the route)
  GET  /slow/MS           sleeps MS (≤ 5000) milliseconds in Async, then {"slept":MS}
  GET  /throw             the handler throws (no catch): Std.Http answers 500
  GET  /env               {"value": $ROBUSTNESS_GREETING or null}
  GET  /stream/N          N (≤ 10000) chunks "chunk i\n", 5 ms apart
  GET  /big/KIB           KIB (≤ 1024) KiB of bytes i % 251 with a fixed length
  POST /shutdown          stops the server after 50 ms; the process exits 0
-/
import Std.Http
import Lean.Data.Json
open Std Async Http Lean

def pattern : ByteArray := Id.run do
  let mut bytes := ByteArray.emptyWithCapacity (1024 * 1024)
  for i in [0:1024 * 1024] do
    bytes := bytes.push (i % 251).toUInt8
  return bytes

def respondJson (status : Http.Status) (json : Json) : Async (Response Body.Any) := do
  let response ← Response.new |>.status status |>.json json.compress
  return { response with body := Body.Any.ofBody response.body }

def problem (status : Http.Status) (message : String) : Async (Response Body.Any) :=
  respondJson status (Json.mkObj [("error", .str message)])

def compute (json : Json) : Except String Json := do
  let name ← (← json.getObjVal? "name").getStr?
  let numbers : Array Int ← (← (← json.getObjVal? "numbers").getArr?).mapM (·.getInt?)
  let some first := numbers[0]? | throw "numbers must be non-empty"
  let sum : Int := numbers.foldl (· + ·) 0
  let max : Int := numbers.foldl (fun a b => if b > a then b else a) first
  let min : Int := numbers.foldl (fun a b => if b < a then b else a) first
  return Json.mkObj [("name", .str name), ("count", toJson numbers.size), ("sum", toJson sum), ("max", toJson max),
    ("min", toJson min), ("reversed", .arr (numbers.reverse.map (fun (n : Int) => toJson n)))]

def routes (stopped : IO.Promise Unit) (request : Request Body.Stream) : ContextAsync (Response Body.Any) := do
  let path := (toString request.line.uri.path).splitOn "/" |>.filter (· != "")
  match request.line.method, path with
  | .get, ["health"] => respondJson .ok (Json.mkObj [("ok", .bool true)])
  | .post, ["json"] =>
    let body : String ← request.body.readAll (maximumSize := some 65536)
    match Json.parse body with
    | .error _ => problem .badRequest "Invalid JSON"
    | .ok json =>
      match compute json with
      | .error message => problem .badRequest message
      | .ok result => respondJson .ok result
  | .post, ["echo"] =>
    -- Consume the request stream chunk by chunk before answering, then stream
    -- the same chunks back (chunked response).
    let mut chunks : Array ByteArray := #[]
    for chunk in request.body do
      chunks := chunks.push chunk.data
    let response ← Response.ok |>.header! "content-type" "application/octet-stream" |>.stream fun output => do
      for data in chunks do
        output.send { data }
    return { response with body := Body.Any.ofBody response.body }
  | .post, ["echo-live"] =>
    -- Answers before the request body is consumed and reads it from the response
    -- producer. Std.Http may close the unread request body first (natively too),
    -- so the suite only measures how often this returns fewer bytes.
    let input := request.body
    let response ← Response.ok |>.header! "content-type" "application/octet-stream" |>.stream fun output => do
      for chunk in input do
        output.send { data := chunk.data }
    return { response with body := Body.Any.ofBody response.body }
  | .get, ["slow", ms] =>
    let some ms := ms.toNat? | problem .badRequest "Invalid delay"
    if ms > 5000 then problem .badRequest "Delay too long" else
    Async.sleep (Time.Millisecond.Offset.ofNat ms)
    respondJson .ok (Json.mkObj [("slept", toJson ms)])
  | .get, ["throw"] => throw (IO.userError "robustness fixture: deliberate handler exception")
  | .get, ["env"] =>
    let value ← IO.getEnv "ROBUSTNESS_GREETING"
    respondJson .ok (Json.mkObj [("value", match value with | some v => .str v | none => .null)])
  | .get, ["stream", n] =>
    let some n := n.toNat? | problem .badRequest "Invalid count"
    if n > 10000 then problem .badRequest "Count too large" else
    let response ← Response.ok |>.header! "content-type" "text/plain" |>.stream fun output => do
      for i in [0:n] do
        output.send { data := s!"chunk {i}\n".toUTF8 }
        Async.sleep 5
    return { response with body := Body.Any.ofBody response.body }
  | .get, ["big", kib] =>
    let some kib := kib.toNat? | problem .badRequest "Invalid size"
    if kib > 1024 then problem .badRequest "Size too large" else
    let response ← Response.ok |>.header! "content-type" "application/octet-stream"
      |>.bytes (pattern.extract 0 (kib * 1024))
    return { response with body := Body.Any.ofBody response.body }
  | .post, ["shutdown"] =>
    Async.background do
      Async.sleep 50
      stopped.resolve ()
    respondJson .ok (Json.mkObj [("stopping", .bool true)])
  | _, _ => problem .notFound "Route not found"

def main (args : List String) : IO UInt32 := do
  let port := (args[0]?.bind String.toNat?).getD 0
  let stopped ← IO.Promise.new
  -- Force the shared pattern before serving so first requests do not pay for it.
  IO.println s!"pattern bytes {pattern.size}"
  Async.block do
    let handler := Http.Server.Handler.ofFns (routes stopped)
      (fun error => IO.eprintln s!"connection failure: {error}")
    let server ← Http.Server.serve (.v4 ⟨.ofParts 127 0 0 1, port.toUInt16⟩) handler
      { maxBodySize := 1048576, maxHeaderBytes := 16384, maxHeaders := 50,
        headerTimeout := 2000, lingeringTimeout := 3000, keepAliveTimeout := ⟨5000, by decide⟩,
        maxConnections := 512, maxRequests := 1000000 }
    let some address := server.localAddr | throw (IO.userError "Server has no local address")
    IO.println s!"Listening on http://{address}"
    (← IO.getStdout).flush
    discard <| await stopped.result!
    server.shutdownAndWait
    IO.println "Server stopped"
  return 0
