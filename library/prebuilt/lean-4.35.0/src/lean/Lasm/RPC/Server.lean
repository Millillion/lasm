/-
Lasm.RPC on the server: the routes that answer the endpoints, and `dispatch`,
which answers an HTTP request for `/rpc/<name>` from its method, path and
body. It knows no server: a program passes each request's method, path and
body from whatever serves it and sends the `Answer` back the same way.
`Lasm.RPC.Web` does both for Lasm.JS.Web's `Request` and `Response` (Node,
Bun, Deno and the edge platforms); on Lasm.Fastly and Lasm.WASI.Http the
program calls `dispatch` itself.

`handler` (a Lasm.Fetch handler) remains only until Lasm.Fetch is deleted.
-/
import Lasm.RPC.Core
import Lasm.Fetch
import Std.Async.Basic

namespace Lasm.RPC
open Lean Lasm.Fetch Std.Async

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
  deriving Inhabited, Repr, BEq

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

/-- The endpoint name in a URL path, `some name` for `/rpc/<name>` (a query,
`?…`, is ignored), `none` for every other path. The path is the URL's as the
platform gives it (`new URL(request.url).pathname`, wasi-http's
`path-with-query`); endpoint names need no percent-encoding, so none is
decoded. -/
def endpointName? (path : String) : Option String :=
  match (path.splitOn "?").headD "" |>.splitOn "/" with
  | ["", "rpc", name] => if name.isEmpty then none else some name
  | _ => none

/-- The answer to an HTTP request with `method`, URL `path` and `body`, when
the path names an endpoint (`/rpc/<name>`, `endpointName?`): `POST` runs the
first route named `name` on the body; an unknown name answers 404 and any
other method 405 (`allow: POST`). `none` for every other path: the program
answers those itself.

    match Lasm.RPC.dispatch routes method path body with
    | some answer => send (← answer)
    | none => …your pages and files… -/
def dispatch (routes : List Route) (method path body : String) : Option (Async Answer) :=
  match endpointName? path with
  | none => none
  | some name =>
    if method == "POST" then
      match routes.find? (·.name == name) with
      | some route => some (Answer.ofRoute <$> route.run body)
      | none => some (pure (Answer.unknown name))
    else some (pure Answer.wrongMethod)

#guard endpointName? "/rpc/addTodo" == some "addTodo" && endpointName? "/rpc/addTodo?x=1" == some "addTodo"
#guard endpointName? "/rpc/" == none && endpointName? "/rpc/a/b" == none && endpointName? "/" == none
  && endpointName? "/api/rpc/a" == none && endpointName? "rpc/a" == none

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
