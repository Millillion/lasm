/-
Serving Conduit as a wasi:http component (`wasmtime serve`, Spin) with the
proxy world's own interfaces (Lasm.WASI.Http, generated from the WASI 0.2.12
WIT; docs/WASI_FASTLY_BINDINGS.md): each instance answers one request
(`wasi:http/incoming-handler`). Outbound requests (`fetch`, for PostgREST) go
through `wasi:http/outgoing-handler`.
-/
import Lasm.WASI.Http
import Server.Web
open Lasm.WASI.Http Lasm.WASI.Http.Types Std.Async

namespace Conduit.Server.WasiHttpServe

/-- The value of a `result`, or an error naming the call. -/
def ok! [Repr ε] (what : String) (x : IO (Except ε α)) : IO α := do
  match ← x with
  | .ok a => pure a
  | .error e => throw (IO.userError s!"{what}: {repr e}")

/-- A stream's bytes, read to its end (`closed`). -/
partial def readAll (s : InputStream) (acc : ByteArray := .empty) : IO ByteArray := do
  match ← s.blockingRead 65536 with
  | .ok chunk => readAll s (acc ++ chunk)
  | .error .closed => return acc
  | .error e => throw (IO.userError s!"reading a body: {repr e}")

/-- Writes all of `bytes`: `blocking-write-and-flush` takes at most 4096 bytes a call. -/
partial def writeAll (s : OutputStream) (bytes : ByteArray) : IO Unit := do
  if bytes.isEmpty then return
  let n := min bytes.size 4096
  ok! "writing a body" (s.blockingWriteAndFlush (bytes.extract 0 n))
  writeAll s (bytes.extract n bytes.size)

/-- An incoming body's bytes; the body is finished (its trailers dropped). -/
def bodyBytes (body : IncomingBody) : IO ByteArray := do
  let s ← ok! "incoming-body.stream" body.stream
  let bytes ← readAll s
  s.drop
  (← IncomingBody.finish body).drop
  return bytes

/-- Header fields; a field the host refuses (a forbidden or invalid one, such
as `connection`) is left out. -/
def fieldsOf (headers : Array (String × String)) : IO Fields := do
  let f ← Fields.new
  for (k, v) in headers do discard <| f.append k v.toUTF8
  return f

/-- Every field, as text (a value that is not UTF-8 is left out). -/
def fieldsList (f : Fields) : IO (Array (String × String)) := do
  return (← f.entries).filterMap fun (k, v) => (String.fromUTF8? v).map (k, ·)

def methodName : Method → String
  | .get => "GET" | .head => "HEAD" | .post => "POST" | .put => "PUT" | .delete => "DELETE"
  | .connect => "CONNECT" | .options => "OPTIONS" | .trace => "TRACE" | .patch => "PATCH" | .other m => m

def methodOf : String → Method
  | "GET" => .get | "HEAD" => .head | "POST" => .post | "PUT" => .put | "DELETE" => .delete
  | "CONNECT" => .connect | "OPTIONS" => .options | "TRACE" => .trace | "PATCH" => .patch | m => .other m

/-- Ends a body: its stream is dropped, then the body is finished (no trailers). -/
def finish (body : OutgoingBody) (s : OutputStream) : IO Unit := do
  s.drop
  ok! "outgoing-body.finish" (OutgoingBody.finish body none)

/-- Answers this instance's request with `handler`. -/
def serve (handler : Web.Handler) : IO Unit := IncomingHandler.serve fun request out => do
  let method := methodName (← request.method)
  let scheme := match ← request.scheme with
    | some .https => "https" | some (.other s) => s | _ => "http"
  let authority := (← request.authority).getD "localhost"
  let url := s!"{scheme}://{authority}{(← request.pathWithQuery).getD "/"}"
  let headers ← fieldsList (← request.headers)
  let body ← match ← request.consume with
    | .ok b => bodyBytes b
    | .error _ => pure .empty
  let r ← (Web.respond handler { method, url, headers, body }).block
  let response ← OutgoingResponse.new (← fieldsOf r.headers)
  ok! "outgoing-response.set-status-code" (response.setStatusCode r.status)
  let b ← ok! "outgoing-response.body" response.body
  ResponseOutparam.set out (.ok response)
  let s ← ok! "outgoing-body.write" b.write
  unless Web.bodyless method r.status do writeAll s r.body
  finish b s

/-- Sends an HTTP request (an absolute `http(s)://` URL) and reads the whole
response, through `wasi:http/outgoing-handler`. -/
def fetch (req : Web.Request) : Async Web.Response := do
  let (scheme, rest) := match req.url.splitOn "://" with
    | [s, r] => (if s == "https" then Scheme.https else if s == "http" then .http else .other s, r)
    | _ => (.http, req.url)
  let authority := (rest.takeWhile (fun c => c != '/' && c != '?')).toString
  let pathWithQuery := match (rest.drop authority.length).toString with
    | "" => "/"
    | p => if p.startsWith "?" then "/" ++ p else p
  let request ← OutgoingRequest.new (← fieldsOf req.headers)
  ok! "set-method" (request.setMethod (methodOf req.method))
  ok! "set-scheme" (request.setScheme (some scheme))
  ok! "set-authority" (request.setAuthority (some authority))
  ok! "set-path-with-query" (request.setPathWithQuery (some pathWithQuery))
  let body ← ok! "outgoing-request.body" request.body
  let future ← ok! "outgoing-handler.handle" (OutgoingHandler.handle request none)
  let s ← ok! "outgoing-body.write" body.write
  writeAll s req.body
  finish body s
  let p ← future.subscribe
  p.block
  p.drop
  let response ← match ← future.get with
    | some (.ok (.ok response)) => future.drop; pure response
    | some (.ok (.error e)) => throw (IO.userError s!"{req.method} {req.url}: the request failed: {repr e}")
    | _ => throw (IO.userError s!"{req.method} {req.url}: the response was not ready after its pollable was")
  let status ← response.status
  let headers ← fieldsList (← response.headers)
  let bytes ← bodyBytes (← ok! "incoming-response.consume" response.consume)
  return { status := status, headers, body := bytes }

end Conduit.Server.WasiHttpServe
