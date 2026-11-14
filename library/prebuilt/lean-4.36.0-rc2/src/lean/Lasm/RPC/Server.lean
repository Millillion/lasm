/-
Lasm.RPC on the server: endpoints served by a `Lasm.Fetch` handler, so the
same code runs on Node, the edge platforms, Bun, Deno, WASI and Fastly.
-/
import Lasm.RPC.Core
import Lasm.Fetch

namespace Lasm.RPC
open Lean Lasm.Fetch

/-- A served endpoint: its name and what answers a request body. -/
structure Route where
  name : String
  run : String → Async (UInt16 × String)

namespace Endpoint
variable {Req Res : Type}

/-- Serves the endpoint. The handler gets only requests that passed
`validate`, with the proof; `.error message` answers status 500 (the client
sees `Error.failed`). Invalid requests answer status 400 without running it. -/
def serve [FromJson Req] [ToJson Res] (e : Endpoint Req Res)
    (handler : (r : Req) → e.validate r = .ok () → Async (Except String Res)) : Route where
  name := e.name
  run body :=
    match h : e.decodeRequest body with
    | .error err => return (400, e.encodeResponse (.error err.toString))
    | .ok r => do
      let result ← handler r (decodeRequest_valid e h)
      return (if result matches .ok _ then 200 else 500, e.encodeResponse result)

/-- `serve` for a handler that does not need the validation proof. -/
def serve' [FromJson Req] [ToJson Res] (e : Endpoint Req Res) (handler : Req → Async (Except String Res)) : Route :=
  e.serve fun r _ => handler r

end Endpoint

/-- A `Lasm.Fetch` handler that answers `POST /rpc/<name>` with the routes and
passes every other request to `fallback`. -/
def handler (routes : List Route) (fallback : Handler) : Handler := fun req => do
  match req.method, req.segments with
  | "POST", ["rpc", name] =>
    match routes.find? (·.name == name) with
    | some route =>
      let (status, body) ← route.run req.text
      return Response.json body status |>.withHeader "cache-control" "no-store"
    | none => return Response.json (Json.mkObj [("error", Json.str s!"no endpoint {name}")]).compress 404
  | _, ["rpc", _] => return Response.text "Use POST\n" 405 |>.withHeader "allow" "POST"
  | _, _ => fallback req

end Lasm.RPC
