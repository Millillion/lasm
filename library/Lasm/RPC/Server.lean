/-
Lasm.RPC on the server: the routes that answer the endpoints, and `dispatch`,
which answers an HTTP request for `/rpc/<name>` from its method, path and
body. It knows no server: a program passes each request's method, path
segments and body from whatever serves it (Lasm.JS.Web's `Request` on Node,
Bun, Deno and the edge; Lasm.Fastly; Lasm.WASI.Http) and sends the `Answer`
back the same way.
-/
import Lasm.RPC.Core
import Std.Async.Basic

namespace Lasm.RPC
open Lean Std.Async

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

/-- An HTTP response to an endpoint request: status, headers and body. -/
structure Answer where
  status : UInt16
  headers : Array (String × String)
  body : String
  deriving Inhabited

/-- The answer of a route: its status and JSON body, never cached. -/
def Answer.ofRoute (r : UInt16 × String) : Answer :=
  { status := r.1, headers := #[("content-type", "application/json"), ("cache-control", "no-store")], body := r.2 }

/-- 404: no endpoint is named `name`. -/
def Answer.unknown (name : String) : Answer :=
  { status := 404, headers := #[("content-type", "application/json")],
    body := (Json.mkObj [("error", Json.str s!"no endpoint {name}")]).compress }

/-- 405: an endpoint takes only `POST`. -/
def Answer.wrongMethod : Answer :=
  { status := 405, headers := #[("content-type", "text/plain; charset=utf-8"), ("allow", "POST")], body := "Use POST\n" }

/-- The answer to an HTTP request with `method`, the path's decoded segments
(`/rpc/addTodo` → `["rpc", "addTodo"]`) and `body`, when the path names an
endpoint (`/rpc/<name>`): `POST` runs the first route named `name` on the body;
an unknown name answers 404 and any other method 405 (`allow: POST`). `none`
for every other path: the program answers those itself. -/
def dispatch (routes : List Route) (method : String) (segments : List String) (body : String) :
    Option (Async Answer) :=
  match method, segments with
  | "POST", ["rpc", name] =>
    match routes.find? (·.name == name) with
    | some route => some (Answer.ofRoute <$> route.run body)
    | none => some (pure (Answer.unknown name))
  | _, ["rpc", _] => some (pure Answer.wrongMethod)
  | _, _ => none

end Lasm.RPC
