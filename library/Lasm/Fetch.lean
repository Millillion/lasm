/-
Lasm.Fetch: one HTTP request handler, written in pure Lean, for every server
target of Lasm (docs/FETCH.md):

  import Lasm.Fetch
  open Lasm.Fetch
  def main : IO Unit := serve fun req => do
    match req.method, req.path with
    | "GET", "/" => return .text "Hello from Lean!"
    | _, _ => return .notFound

- Node (`lasm build`): an HTTP server on $HOST:$PORT (default 0.0.0.0:3000).
- Edge isolates and Bun/Deno (`--target workers|vercel-edge|netlify-edge|
  deno-deploy|bun|deno`): the platform's fetch handler.
- Fastly Compute (`--target fastly`): the request of this instance, through
  Fastly's host calls.
- WASI (`--target wasi`): one CGI request (WAGI): the request from CGI
  environment variables and standard input, the response on standard output.
  Spin serves it with `executor = { type = "wagi" }`.
-/
import Lasm.JS.Core

namespace Lasm.Fetch
open Std.Async

/- Std.Async's `Async`, available after `open Lasm.Fetch`: handlers run in it. -/
export Std.Async (Async)

/-- An HTTP request. `url` is absolute (`https://example.com/path?query`)
where the platform supplies the host; `headers` keep the platform's order and
case (lowercase on most platforms); `body` holds the request body's bytes. -/
structure Request where
  method : String
  url : String
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  deriving Inhabited

/-- An HTTP response. -/
structure Response where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  deriving Inhabited

/-- A request handler. It runs in `Std.Async.Async`: it can await timers and
other asynchronous work, and `IO` actions run in it unchanged. -/
abbrev Handler := Request → Async Response

private def lower (s : String) : String := s.map Char.toLower

/-- Decodes `%XX` escapes (and `+` as a space, with `plus`). Invalid escapes
are kept as they are; invalid UTF-8 keeps the original text. -/
def percentDecode (s : String) (plus : Bool := false) : String := Id.run do
  let hex (c : Char) : Option Nat :=
    if '0' ≤ c && c ≤ '9' then some (c.toNat - '0'.toNat)
    else if 'a' ≤ c && c ≤ 'f' then some (c.toNat - 'a'.toNat + 10)
    else if 'A' ≤ c && c ≤ 'F' then some (c.toNat - 'A'.toNat + 10)
    else none
  let bytes := s.toUTF8
  let mut out := ByteArray.empty
  let mut i := 0
  while i < bytes.size do
    let b := bytes[i]!
    if b == 37 && i + 2 < bytes.size then
      match hex (Char.ofNat bytes[i+1]!.toNat), hex (Char.ofNat bytes[i+2]!.toNat) with
      | some h, some l => out := out.push (h * 16 + l).toUInt8; i := i + 3; continue
      | _, _ => pure ()
    out := out.push (if plus && b == 43 then 32 else b)
    i := i + 1
  return (String.fromUTF8? out).getD s

namespace Request

/-- The URL's path (`/a/b`), without the query; `/` when it is empty. -/
def path (r : Request) : String :=
  let afterScheme := match r.url.splitOn "://" with
    | [_, rest] => (rest.dropWhile (· != '/')).toString
    | _ => r.url
  let p := (afterScheme.takeWhile (fun c => c != '?' && c != '#')).toString
  if p.isEmpty then "/" else p

/-- The URL's query string, without `?` (empty when there is none). -/
def query (r : Request) : String :=
  match r.url.splitOn "?" with
  | _ :: rest => ((("?".intercalate rest).takeWhile (· != '#'))).toString
  | [] => ""

/-- The decoded query parameters, in order (`a=1&b=x%20y` → `[("a","1"),("b","x y")]`). -/
def queryParams (r : Request) : List (String × String) :=
  (r.query.splitOn "&").filterMap fun part =>
    if part.isEmpty then none else
    match part.splitOn "=" with
    | [k] => some (percentDecode k true, "")
    | k :: v => some (percentDecode k true, percentDecode ("=".intercalate v) true)
    | [] => none

/-- The first query parameter named `name`. -/
def queryParam? (r : Request) (name : String) : Option String :=
  r.queryParams.lookup name

/-- The path's segments: `/hello/Ada` → `["hello", "Ada"]` (decoded). -/
def segments (r : Request) : List String :=
  (r.path.splitOn "/").filter (!·.isEmpty) |>.map (percentDecode ·)

/-- The first header named `name`, ignoring case. -/
def header? (r : Request) (name : String) : Option String :=
  let n := lower name
  (r.headers.find? fun (k, _) => lower k == n).map (·.2)

/-- The body as UTF-8 text, if it is valid UTF-8. -/
def text? (r : Request) : Option String := String.fromUTF8? r.body

/-- The body as UTF-8 text (empty if it is not valid UTF-8). -/
def text (r : Request) : String := r.text?.getD ""

end Request

namespace Response

/-- A response with a body and a content type. -/
def withBody (body : ByteArray) (contentType : String) (status : UInt16 := 200) : Response :=
  { status, headers := #[("content-type", contentType)], body }

/-- `text/plain; charset=utf-8` -/
def text (body : String) (status : UInt16 := 200) : Response :=
  withBody body.toUTF8 "text/plain; charset=utf-8" status
/-- `text/html; charset=utf-8` -/
def html (body : String) (status : UInt16 := 200) : Response :=
  withBody body.toUTF8 "text/html; charset=utf-8" status
/-- `application/json` (the body is JSON text). -/
def json (body : String) (status : UInt16 := 200) : Response :=
  withBody body.toUTF8 "application/json" status
/-- Bytes with a content type (default `application/octet-stream`). -/
def bytes (body : ByteArray) (contentType : String := "application/octet-stream") (status : UInt16 := 200) : Response :=
  withBody body contentType status
/-- A redirect (`Location`), 302 by default. -/
def redirect (location : String) (status : UInt16 := 302) : Response :=
  { status, headers := #[("location", location)] }
/-- An empty response with this status. -/
def empty (status : UInt16 := 204) : Response := { status }
/-- 404, as text. -/
def notFound : Response := text "Not Found\n" 404

/-- Adds a header (a header can occur more than once, as `set-cookie` does). -/
def withHeader (r : Response) (name value : String) : Response :=
  { r with headers := r.headers.push (name, value) }
/-- Replaces the status. -/
def withStatus (r : Response) (status : UInt16) : Response := { r with status }

end Response

/-! Running handlers -/

/-- Runs the handler; an error becomes a 500 response (and a line on stderr).
A `HEAD` request runs the handler as `GET` (its body is not sent). -/
def respond (handler : Handler) (req : Request) : Async Response := do
  try handler (if req.method == "HEAD" then { req with method := "GET" } else req)
  catch e =>
    IO.eprintln s!"Lasm.Fetch: the handler failed for {req.method} {req.path}: {e}"
    return Response.text "Internal Server Error\n" 500

/-- Statuses whose responses have no body. -/
def bodyless (method : String) (status : UInt16) : Bool :=
  method == "HEAD" || status == 101 || status == 204 || status == 205 || status == 304

/-- Where the program runs: 0 a JavaScript host (Node, edge isolates, Bun,
Deno: Lasm.JS), 1 WASI (CGI), 2 Fastly Compute, 3 a native Lean build,
4 a wasi-http component (`wasmtime serve`, Spin). -/
@[extern "lasm_fetch_platform"] opaque platformCode : Unit → UInt32
/-- WASI and Fastly: this run's request (method, URL, headers, body). -/
@[extern "lasm_fetch_take_request"] private opaque takeRequest : IO (String × String × Array (String × String) × ByteArray)
/-- WASI and Fastly: sends this run's response. -/
@[extern "lasm_fetch_send_response"] private opaque sendResponse (status : UInt16) (headers : @& Array (String × String)) (body : @& ByteArray) : IO Unit

open Lasm.JS in
/-- A JavaScript fetch handler `(request) => Promise<Response>` that runs `handler`. -/
def jsFetchHandler (handler : Handler) : IO Value := do
  let g ← global
  let responseClass ← g.get "Response"
  let uint8Array ← g.get "Uint8Array"
  let arrayClass ← g.get "Array"
  Function.ofFn fun args => do
    let .ref request _ := args[0]?.getD .undefined | throw (IO.userError "Lasm.Fetch: the fetch handler expected a Request")
    let fields ← request.getFields #["method", "url", "headers"]
    let method := match fields.field "method" with | .string s => s | _ => "GET"
    let url := match fields.field "url" with | .string s => s | _ => "/"
    let headers ← match fields.field "headers" with
      | .ref h _ => arrayClass.callMethod "from" #[.ref h ""] (Array (String × String))
      | _ => pure #[]
    let body ← if method == "GET" || method == "HEAD" then pure .empty else do
      let buffer ← request.callMethodAwait "arrayBuffer" #[] Value
      uint8Array.new #[.ref buffer ""] ByteArray
    let r ← respond handler { method, url, headers, body }
    let init := obj [("status", toJS r.status), ("headers", toJS r.headers)]
    let content : Data := if bodyless method r.status then .null else .bytes r.body
    return toJS (← responseClass.new #[content, init])

open Lasm.JS in
/-- Node: an HTTP server (node:http) on $HOST:$PORT that runs `handler`. -/
def serveNode (handler : Handler) : IO Unit := do
  let http ← require "node:http"
  let bufferClass ← (← global).get "Buffer"
  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let onRequest ← Function.ofFnReply fun args => do
    let (req, res) ← match args[0]?.getD .undefined, args[1]?.getD .undefined with
      | .ref req _, .ref res _ => pure (req, res)
      | _, _ => throw (IO.userError "Lasm.Fetch: expected Node's request and response")
    let fields ← req.getFields #["method", "url", "rawHeaders"]
    let method := match fields.field "method" with | .string s => s | _ => "GET"
    let target := match fields.field "url" with | .string s => s | _ => "/"
    let raw : Array String := match fields.field "rawHeaders" with
      | .array items => items.filterMap fun | .string s => some s | _ => none
      | _ => #[]
    let headers := Id.run do
      let mut out := #[]
      for i in [0:raw.size / 2] do out := out.push (raw[2*i]!, raw[2*i+1]!)
      return out
    let hostHeader := (headers.find? fun (k, _) => lower k == "host").map (·.2) |>.getD s!"localhost:{port}"
    let hasBody := headers.any fun (k, _) => let k := lower k; k == "content-length" || k == "transfer-encoding"
    let body ← if !hasBody then pure .empty else do
      let chunks ← req.callMethodAwait "toArray" #[] Value
      bufferClass.callMethod "concat" #[.ref chunks ""] ByteArray
    let url := if target.startsWith "/" then s!"http://{hostHeader}{target}" else target
    let r ← respond handler { method, url, headers, body }
    let flat : Array Data := r.headers.foldl (fun acc (k, v) => acc.push (toJS k) |>.push (toJS v)) #[]
    let _ : Value ← res.callMethod "writeHead" #[toJS r.status, .array flat]
    return .callMethod res "end" #[if bodyless method r.status then .undefined else .bytes r.body]
  let server ← http.callMethod "createServer" #[.ref onRequest ""]
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port}"
    (← IO.getStdout).flush
    return .undefined
  let _ : Value ← server.callMethod "listen" #[toJS port, toJS host, .ref listening ""]
  -- Containers and platforms stop the server with SIGTERM: finish open requests, then exit.
  let process ← require "node:process"
  let exit ← Function.ofFn fun _ => do
    let _ : Value ← process.callMethod "exit" #[toJS 0]
    return .undefined
  let stop ← Function.ofFn fun _ => do
    let _ : Value ← server.callMethod "close" #[.ref exit ""]
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, .ref stop ""]
  waitForever

/-! Outbound requests -/

/-- Options of `fetch`. -/
structure FetchOptions where
  /-- Fastly Compute: the backend to send the request to, as named in the
  service (and `fastly.toml`'s `[local_server.backends]` for Viceroy). By
  default a dynamic backend for the URL's host is registered (the service
  must allow dynamic backends). Ignored elsewhere. -/
  backend : Option String := none
  deriving Inhabited

/-- Fastly Compute: starts sending a request; the promise receives the encoded response. -/
@[extern "lasm_fetch_send"] private opaque fastlySend (p : @& IO.Promise (Except IO.Error ByteArray)) (method url : @& String)
  (headers : @& Array (String × String)) (body : @& ByteArray) (backend : @& String) : IO Unit

/-- The encoded response of the C glue: u64 status, u64 header count, each
header as (u64 length, name, u64 length, value), then the body. -/
private def decodeResponse (b : ByteArray) : Except String Response := do
  let u64 (pos : Nat) : Except String Nat := do
    if pos + 8 > b.size then throw "Lasm.Fetch: truncated response"
    return (List.range 8).foldl (fun acc i => acc + b[pos + i]!.toNat * 256 ^ i) 0
  let text (pos n : Nat) : Except String String :=
    if pos + n > b.size then throw "Lasm.Fetch: truncated response"
    else match String.fromUTF8? (b.extract pos (pos + n)) with
      | some s => pure s
      | none => pure (String.fromUTF8! ((b.extract pos (pos + n)).toList.map (fun c => if c < 128 then c else 63) |>.toByteArray))
  let status ← u64 0
  let count ← u64 8
  let mut pos := 16
  let mut headers := #[]
  for _ in [0:count] do
    let n ← u64 pos
    let name ← text (pos + 8) n
    pos := pos + 8 + n
    let m ← u64 pos
    let value ← text (pos + 8) m
    pos := pos + 8 + m
    headers := headers.push (name, value)
  return { status := status.toUInt16, headers, body := b.extract pos b.size }

open Lasm.JS in
/-- The JavaScript platform's `fetch` (Node, edge isolates, Bun, Deno). -/
private def jsFetch (req : Request) : Async Response := do
  let g ← global
  let fetchFn ← g.get "fetch"
  let body : Data := if req.method == "GET" || req.method == "HEAD" then .undefined else .bytes req.body
  let init := obj [("method", toJS req.method), ("headers", toJS req.headers), ("body", body), ("redirect", toJS "manual")]
  let response ← fetchFn.callAwait #[toJS req.url, init] Value
  let fields ← response.getFields #["status", "headers"]
  let status := match fields.field "status" with | .number n => n.toUInt16 | _ => 0
  let headers ← match fields.field "headers" with
    | .ref h _ => (← g.get "Array").callMethod "from" #[.ref h ""] (Array (String × String))
    | _ => pure #[]
  let buffer ← response.callMethodAwait "arrayBuffer" #[] Value
  let bytes ← (← g.get "Uint8Array").new #[.ref buffer ""] ByteArray
  return { status, headers, body := bytes }

/-- Sends an HTTP request and returns the response; the body is read
completely. Redirects are returned, not followed, on every platform.
- Node, edge isolates, Bun, Deno: the platform's `fetch`.
- Fastly Compute: a backend request (`FetchOptions.backend`, else a dynamic
  backend for the URL's host).
- wasi-http (`--target wasi-http`): wasi:http/outgoing-handler.
- WASI (`--target wasi`): unavailable, since WASI preview 1 has no sockets. -/
def fetch (req : Request) (options : FetchOptions := {}) : Async Response := do
  match platformCode () with
  | 0 => jsFetch req
  | 2 | 4 =>
    let p : IO.Promise (Except IO.Error ByteArray) ← IO.Promise.new
    fastlySend p req.method req.url req.headers req.body (options.backend.getD "")
    let bytes ← (EAsync.ofTask <| ExceptT.mk <| p.result?.map (sync := true) fun
      | some (.ok bytes) => .ok bytes
      | some (.error e) => .error e
      | none => .error (IO.userError "Lasm.Fetch.fetch: the response was lost (internal error)") : Async ByteArray)
    match decodeResponse bytes with
    | .ok r => return r
    | .error e => throw (IO.userError e)
  | 1 => throw (IO.userError "Lasm.Fetch.fetch: outbound HTTP is not available in a WASI preview 1 program (it has no sockets); build with --target fastly or --target wasi-http, or for Node or an edge platform")
  | _ => throw (IO.userError "Lasm.Fetch.fetch: needs a program built by Lasm; this program runs natively")

/-- `GET url`. -/
def get (url : String) (headers : Array (String × String) := #[]) (options : FetchOptions := {}) : Async Response :=
  fetch { method := "GET", url, headers } options

/-- `POST url` with a body. -/
def post (url : String) (body : ByteArray) (contentType : String := "application/octet-stream")
    (headers : Array (String × String) := #[]) (options : FetchOptions := {}) : Async Response :=
  fetch { method := "POST", url, headers := #[("content-type", contentType)] ++ headers, body } options

/-- The response body as UTF-8 text (empty if it is not valid UTF-8). -/
def Response.text? (r : Response) : Option String := String.fromUTF8? r.body
/-- The first response header named `name`, ignoring case. -/
def Response.header? (r : Response) (name : String) : Option String :=
  let n := lower name
  (r.headers.find? fun (k, _) => lower k == n).map (·.2)

/-- Serves HTTP requests with `handler` on the platform the program was built
for (see the module documentation). On Node it does not return; on edge
platforms it publishes the handler and returns; on WASI and Fastly it answers
this run's request and returns. -/
def serve (handler : Handler) : IO Unit := do
  match platformCode () with
  | 1 | 2 | 4 =>
    let (method, url, headers, body) ← takeRequest
    let r ← Async.block (respond handler { method, url, headers, body })
    sendResponse r.status r.headers (if bodyless method r.status then .empty else r.body)
  | 0 =>
    if ← Lasm.JS.onEdge then Lasm.JS.exportDefault (← jsFetchHandler handler)
    else serveNode handler
  | _ => throw (IO.userError "Lasm.Fetch.serve: serving needs a program built by Lasm (lasm build, or lasm build --target wasi|fastly|workers|…); this program runs natively")

end Lasm.Fetch
