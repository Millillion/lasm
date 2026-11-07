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
  /-- When `ServeOptions.streamRequestBody` selects the request, the body is
  not read into `body`: each call returns its next chunk, `none` at the end.
  Otherwise `none` at once. -/
  read : Async (Option ByteArray) := pure none
  deriving Inhabited

/-- An HTTP response. -/
structure Response where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty
  /-- A streamed body: after the status and headers are sent, it is called
  with a function that sends one chunk; `body` is then ignored. -/
  stream : Option ((ByteArray → Async Unit) → Async Unit) := none
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

/-! ### The path, as WHATWG URLs resolve it

Every platform hands the handler the same path: Bun and the edge isolates
build `url` with a WHATWG URL parser, which removes dot segments, so Lasm
resolves the raw path the same way on Node, Deno, WASI and Fastly (#27). -/

/-- Splits a raw path at `/` and at `\`, which WHATWG URLs treat as `/` in
http(s) URLs. -/
private def splitPath (p : String) : List String :=
  go p.toList [] []
where
  go : List Char → List Char → List String → List String
    | [], cur, acc => (String.ofList cur.reverse :: acc).reverse
    | c :: cs, cur, acc =>
      if c == '/' || c == '\\' then go cs [] (String.ofList cur.reverse :: acc)
      else go cs (c :: cur) acc

/-- Whether a raw segment is a dot segment (`.`, `%2e`) or a double-dot
segment (`..`, `.%2e`, `%2E%2e`, …): exactly WHATWG's sets, since `%2e` and
`%2E` are the only escapes that decode to `.`. -/
private def isDot (s : String) : Bool := percentDecode s == "."
private def isDotDot (s : String) : Bool := percentDecode s == ".."

/-- WHATWG URL path parsing for the segments after the leading `/`
(`stack` reversed). A `..` removes the previous segment; a final `.` or `..`
leaves an empty last segment (a trailing `/`). -/
private def resolve : List String → List String → List String
  | stack, [] => stack
  | stack, [s] =>
    if isDotDot s then "" :: stack.tail
    else if isDot s then "" :: stack
    else s :: stack
  | stack, s :: rest =>
    if isDotDot s then resolve stack.tail rest
    else if isDot s then resolve stack rest
    else resolve (s :: stack) rest

/-- A segment `resolve` may keep: empty, or not a dot segment. -/
private def Kept (s : String) : Prop := s = "" ∨ (percentDecode s ≠ "." ∧ percentDecode s ≠ "..")

private theorem resolve_kept : ∀ (stack input : List String), (∀ x ∈ stack, Kept x) →
    ∀ x ∈ resolve stack input, Kept x
  | stack, [], h => by simpa [resolve] using h
  | stack, [s], h => by
    have ht : ∀ x ∈ stack.tail, Kept x := fun x hx => h x (List.mem_of_mem_tail hx)
    simp only [resolve]
    split
    · intro x hx; cases hx with
      | head => exact Or.inl rfl
      | tail _ hx => exact ht x hx
    split
    · intro x hx; cases hx with
      | head => exact Or.inl rfl
      | tail _ hx => exact h x hx
    · rename_i h1 h2
      intro x hx; cases hx with
      | head => exact Or.inr ⟨by simpa [isDot] using h2, by simpa [isDotDot] using h1⟩
      | tail _ hx => exact h x hx
  | stack, s :: t :: rest, h => by
    have ht : ∀ x ∈ stack.tail, Kept x := fun x hx => h x (List.mem_of_mem_tail hx)
    simp only [resolve]
    split
    · exact resolve_kept _ _ ht
    split
    · exact resolve_kept _ _ h
    · rename_i h1 h2
      apply resolve_kept
      intro x hx; cases hx with
      | head => exact Or.inr ⟨by simpa [isDot] using h2, by simpa [isDotDot] using h1⟩
      | tail _ hx => exact h x hx

/-- Whether `s` is a URL scheme (`http`, `https`, `x-y+z.1`): a letter, then
letters, digits, `+`, `-` and `.`. -/
private def isScheme (s : String) : Bool :=
  match s.toList with
  | c :: cs => c.isAlpha && cs.all fun c => c.isAlphanum || c == '+' || c == '-' || c == '.'
  | [] => false

/-- The raw path of `url`: from the `/` after the host, without the query. -/
private def rawPath (url : String) : String :=
  -- Drop the query and fragment first: they may contain `://` (#76).
  let beforeQuery := (url.takeWhile (fun c => c != '?' && c != '#')).toString
  -- Only a scheme before the first `://` makes the URL absolute: the path
  -- itself may hold `://` (`/go/https://example.com`), which once made the
  -- whole URL the path (test/fuzz/regressions/lean-fetch-request/).
  match beforeQuery.splitOn "://" with
    | scheme :: rest@(_ :: _) =>
      if isScheme scheme then (("://".intercalate rest).dropWhile (fun c => c != '/' && c != '\\')).toString
      else beforeQuery
    | _ => beforeQuery

/-- The path's raw segments, resolved: `\\` counts as `/`, and `.`, `..`
and their escaped forms (`%2e`, `.%2E`, …) are removed as a browser removes
them. Empty segments stay (`/a//b`, a trailing `/`). -/
private def pathSegments (r : Request) : List String :=
  let raw := rawPath r.url
  let rest := match raw.toList with
    | c :: cs => if c == '/' || c == '\\' then String.ofList cs else raw
    | [] => raw
  (resolve [] (splitPath rest)).reverse

/-- The URL's path (`/a/b`), without the query; `/` when it is empty. Dot
segments are resolved as in a browser on every platform:
`/hello/../hello/Ada` is `/hello/Ada`, and `\\` counts as `/`. -/
def path (r : Request) : String :=
  "/" ++ "/".intercalate r.pathSegments

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

/-- The path's segments: `/hello/Ada` → `["hello", "Ada"]` (decoded). Empty
segments are dropped, and dot segments are already resolved, so no segment is
ever `.` or `..` (`segments_no_dot_segments`). -/
def segments (r : Request) : List String :=
  r.pathSegments.filter (!·.isEmpty) |>.map (percentDecode ·)

/-- No segment is `.` or `..`, whatever the request: a handler that maps
segments to files or keys never sees a parent reference, on any platform. -/
theorem segments_no_dot_segments (r : Request) :
    ∀ s ∈ r.segments, s ≠ "." ∧ s ≠ ".." := by
  intro s hs
  simp only [segments, List.mem_map, List.mem_filter] at hs
  obtain ⟨x, ⟨hx, hne⟩, rfl⟩ := hs
  have hk := resolve_kept [] _ (by simp) x (by simpa [pathSegments] using hx)
  rcases hk with h | h
  · subst h; simp at hne
  · exact h

-- Checked when the library builds: a query or fragment containing `://`
-- doesn't change the path (#76), and dot segments resolve (#27).
private def pathOf (url : String) : String := ({ method := "GET", url } : Request).path
#guard pathOf "http://h/hello/Ada?next=http://example.com/x#a://b" == "/hello/Ada"
#guard pathOf "/hello/Ada?next=http://example.com/x" == "/hello/Ada"
#guard pathOf "http://h:8080/x#frag://y" == "/x"
#guard pathOf "http://h" == "/"
#guard pathOf "http://h/hello/%2e%2E/hello/Ada" == "/hello/Ada"
#guard ({ method := "GET", url := "http://h/a/b?u=http://c/d" } : Request).segments == ["a", "b"]
-- `://` in the path itself (found by test/fuzz).
#guard pathOf "http://h/go/https://example.com/x" == "/go/https://example.com/x"
#guard pathOf "/go/https://example.com/x" == "/go/https://example.com/x"
#guard pathOf "/a://b" == "/a://b"
#guard pathOf "http://h\\a/b" == "/a/b"

/-- The first header named `name`, ignoring case. -/
def header? (r : Request) (name : String) : Option String :=
  let n := lower name
  (r.headers.find? fun (k, _) => lower k == n).map (·.2)

/-- The body as UTF-8 text, if it is valid UTF-8. -/
def text? (r : Request) : Option String := String.fromUTF8? r.body

/-- The body as UTF-8 text (empty if it is not valid UTF-8). -/
def text (r : Request) : String := r.text?.getD ""

/-- The whole body: `body` followed by every chunk `read` still returns. -/
partial def readAll (r : Request) : Async ByteArray := do
  let rec loop (acc : ByteArray) : Async ByteArray := do
    match ← r.read with
    | some chunk => loop (acc ++ chunk)
    | none => return acc
  loop r.body

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
/-- A response whose body `produce` sends in chunks as it computes them
(`produce send` calls `send chunk` for each). -/
def streaming (produce : (ByteArray → Async Unit) → Async Unit) (contentType : String := "application/octet-stream")
    (status : UInt16 := 200) : Response :=
  { status, headers := #[("content-type", contentType)], stream := some produce }
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

/-- Whether `s` starts with a cookie name (RFC 9110 token characters) and `=`. -/
private def startsCookiePair (s : List Char) : Bool :=
  let name := s.takeWhile fun c => c.isAlphanum || "!#$%&'*+-.^_`|~".toList.contains c
  !name.isEmpty && (s.drop name.length).head? == some '='

/-- Cookies a proxy combined with commas (RFC 9110 §5.3), separated with
`"; "` again: a cookie-string never holds a comma (RFC 6265 §4.2.1), so a
comma followed by `name=` separates two cookies. A comma inside a value that
does not start a new pair (`last=Wed, 21 Oct 2026`) is kept. -/
def splitCookieCommas (value : String) : String :=
  let dropSpaces := fun (l : List Char) => l.dropWhile Char.isWhitespace
  match value.splitOn "," with
  | [] => value
  | first :: rest => rest.foldl (init := first) fun acc part =>
    let next := dropSpaces part.toList
    if startsCookiePair next then String.ofList (dropSpaces acc.toList.reverse).reverse ++ "; " ++ String.ofList next
    else acc ++ "," ++ part

/-- One `cookie` header (RFC 6265 §5.4; HTTP/2 and HTTP/3 send it in
crumbs, RFC 9113 §8.2.3): repeated Cookie fields are joined with `"; "` in the
first one's place, and cookies joined with commas are separated with `"; "`
(`splitCookieCommas`). Other headers keep every field. -/
def joinCookies (headers : Array (String × String)) : Array (String × String) :=
  let isCookie := fun (p : String × String) => lower p.1 == "cookie"
  let values := (headers.filter isCookie).map (splitCookieCommas ·.2) |>.filter (!·.isEmpty)
  if values.isEmpty then headers else Id.run do
    let mut out := #[]
    let mut placed := false
    for p in headers do
      if !isCookie p then out := out.push p
      else if !placed then
        out := out.push (p.1, "; ".intercalate values.toList)
        placed := true
    return out

/-- Runs the handler; an error becomes a 500 response (and a line on stderr).
A `HEAD` request runs the handler as `GET` (its body is not sent). The
handler sees one `cookie` header, as on every target (`joinCookies`). -/
def respond (handler : Handler) (req : Request) : Async Response := do
  let req := { req with headers := joinCookies req.headers }
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
/-- WASI and Fastly: this run's request line and headers; the body is read with `readChunk`. -/
@[extern "lasm_fetch_take_request_head"] private opaque takeRequestHead : IO (String × String × Array (String × String))
/-- WASI and Fastly: the next chunk of the request body (at most `max` bytes; empty at the end). -/
@[extern "lasm_fetch_read"] private opaque readChunk (max : UInt32) : IO ByteArray
/-- WASI and Fastly: sends the status and headers of a streamed response. -/
@[extern "lasm_fetch_start_response"] private opaque startResponse (status : UInt16) (headers : @& Array (String × String)) : IO Unit
/-- WASI and Fastly: sends one chunk of a streamed response. -/
@[extern "lasm_fetch_write"] private opaque writeChunk (chunk : @& ByteArray) : IO Unit
/-- WASI and Fastly: ends a streamed response (`ok` false: abandons it, so the client sees an incomplete body). -/
@[extern "lasm_fetch_finish"] private opaque finishResponse (ok : Bool) : IO Unit

/-- Options of `serveWith`. -/
structure ServeOptions where
  /-- Which requests, by path, read their body on demand with `Request.read`
  (`Request.readAll`) instead of into `Request.body` before the handler runs:
  `fun _ => true` for all, `(·.startsWith "/upload")` for some. -/
  streamRequestBody : String → Bool := fun _ => false
  deriving Inhabited

open Lasm.JS in
/-- A web `ReadableStream`'s chunks, read on demand (`stream.getReader()`). -/
private def jsChunks (stream : Value) : IO (Async (Option ByteArray)) := do
  let reader ← stream.callMethod "getReader" #[]
  return do
    let result ← reader.callMethodAwait "read" #[] Data
    match result.field "done", result.field "value" with
    | .bool true, _ => return none
    | _, .bytes b => return some b
    | _, _ => return none

open Lasm.JS in
/-- A web `Response` for `r`; a streamed body flows through a `TransformStream`
written by a background task. -/
private def jsResponse (method : String) (r : Response) : Async Value := do
  let g ← global
  let init := obj [("status", toJS r.status), ("headers", toJS r.headers)]
  match r.stream with
  | some produce =>
    if bodyless method r.status then return ← (← g.get "Response").new #[.null, init]
    let pipe ← (← g.get "TransformStream").new #[]
    let readable ← pipe.get "readable"
    let writer ← (← pipe.get "writable").callMethod "getWriter" #[]
    discard <| Std.Async.async (do
      try
        produce fun chunk => do let _ : Data ← writer.callMethodAwait "write" #[.bytes chunk]
        let _ : Data ← writer.callMethodAwait "close" #[]
      catch e =>
        IO.eprintln s!"Lasm.Fetch: the streamed response failed: {e}"
        let _ : Data ← writer.callMethodAwait "abort" #[toJS (toString e)])
    (← g.get "Response").new #[.ref readable "", init]
  | none =>
    let content : Data := if bodyless method r.status then .null else .bytes r.body
    (← g.get "Response").new #[content, init]

/-- The platform's per-handler environment on edge isolates (Cloudflare
Workers' `env`: KV namespaces, D1, secrets), as the last request brought it;
`.undefined` elsewhere. Lasm.KV reads its bindings from it. -/
initialize platformEnv : IO.Ref Lasm.JS.Data ← IO.mkRef .undefined

open Lasm.JS in
/-- A JavaScript fetch handler `(request, env) => Promise<Response>` that runs `handler`. -/
def jsFetchHandler (handler : Handler) (options : ServeOptions := {}) : IO Value := do
  let g ← global
  let uint8Array ← g.get "Uint8Array"
  let arrayClass ← g.get "Array"
  Function.ofFn fun args => do
    -- Workers' env is a plain object (its bindings arrive as references); keep either form.
    match (args[1]? : Option Data) with
    | some env@(.ref _ _) | some env@(.object _) => platformEnv.set env
    | _ => pure ()
    let .ref request _ := args[0]?.getD .undefined | throw (IO.userError "Lasm.Fetch: the fetch handler expected a Request")
    let fields ← request.getFields #["method", "url", "headers", "body"]
    let method := match fields.field "method" with | .string s => s | _ => "GET"
    let url := match fields.field "url" with | .string s => s | _ => "/"
    let headers ← match fields.field "headers" with
      | .ref h _ => arrayClass.callMethod "from" #[.ref h ""] (Array (String × String))
      | _ => pure #[]
    let req : Request ← if options.streamRequestBody ({ method, url : Request }.path) then
        match fields.field "body" with
        | .ref stream _ => pure { method, url, headers, read := ← jsChunks stream }
        | _ => pure { method, url, headers }
      else if method == "GET" || method == "HEAD" then pure { method, url, headers }
      else do
        let buffer ← request.callMethodAwait "arrayBuffer" #[] Value
        pure { method, url, headers, body := ← uint8Array.new #[.ref buffer ""] ByteArray }
    let r ← respond handler req
    return toJS (← jsResponse method r)

/-- The absolute URL of a request Node's HTTP server received: `target` (the
request line's path, or the absolute URL a proxy request carries) under the
Host header. A Host that is not a plain `host[:port]` (one holding `/`, `?`,
`#`, `\\`, `@`, whitespace or a control character) is replaced by
`localhost:<port>`, so a client cannot move the path or the query with it
(`Host: x/admin#` once turned `GET /public` into `/admin`; test/fuzz). -/
def nodeRequestUrl (target : String) (host : Option String) (port : Nat) : String :=
  let plain := fun (h : String) => !h.isEmpty && h.all fun c =>
    !(c == '/' || c == '?' || c == '#' || c == '\\' || c == '@' || c.isWhitespace || c.toNat < 32 || c.toNat == 127)
  let host := match host with
    | some h => if plain h then h else s!"localhost:{port}"
    | none => s!"localhost:{port}"
  if target.startsWith "/" then s!"http://{host}{target}" else target

#guard nodeRequestUrl "/public" (some "x/admin#") 80 == "http://localhost:80/public"
#guard nodeRequestUrl "/a?b" (some "example.com:8080") 80 == "http://example.com:8080/a?b"
#guard nodeRequestUrl "http://p/x" none 80 == "http://p/x"

open Lasm.JS in
/-- Node: an HTTP server (node:http) on $HOST:$PORT that runs `handler`. -/
def serveNode (handler : Handler) (options : ServeOptions := {}) : IO Unit := do
  let http ← require "node:http"
  let readableClass ← (← require "node:stream").get "Readable"
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
    let hostHeader := (headers.find? fun (k, _) => lower k == "host").map (·.2)
    let hasBody := headers.any fun (k, _) => let k := lower k; k == "content-length" || k == "transfer-encoding"
    let url := nodeRequestUrl target hostHeader port
    let request : Request ← if !hasBody then pure { method, url, headers }
      else if options.streamRequestBody ({ method, url : Request }.path) then
        pure { method, url, headers, read := ← jsChunks (← readableClass.callMethod "toWeb" #[.ref req ""]) }
      else do
        let chunks ← req.callMethodAwait "toArray" #[] Value
        pure { method, url, headers, body := ← bufferClass.callMethod "concat" #[.ref chunks ""] ByteArray }
    let r ← respond handler request
    let flat : Array Data := r.headers.foldl (fun acc (k, v) => acc.push (toJS k) |>.push (toJS v)) #[]
    let _ : Value ← res.callMethod "writeHead" #[toJS r.status, .array flat]
    match r.stream with
    | some produce =>
      if !bodyless method r.status then
        try produce fun chunk => do let _ : Data ← res.callMethod "write" #[.bytes chunk] Data
        catch e =>
          IO.eprintln s!"Lasm.Fetch: the streamed response failed: {e}"
          return .callMethod res "destroy" #[]
      return .callMethod res "end" #[]
    | none => return .callMethod res "end" #[if bodyless method r.status then .undefined else .bytes r.body]
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

/-- WASI, Fastly and wasi-http: answers this run's request. -/
private def serveOnce (handler : Handler) (options : ServeOptions) : IO Unit := do
  let (method, url, headers) ← takeRequestHead
  let read : Async (Option ByteArray) := do
    let chunk ← (readChunk 65536 : IO ByteArray)
    return if chunk.isEmpty then none else some chunk
  let streamed : Request := { method, url, headers, read }
  let req ← if options.streamRequestBody streamed.path then pure streamed
    else do pure { method, url, headers, body := ← Async.block streamed.readAll }
  let r ← Async.block (respond handler req)
  match r.stream with
  | none => sendResponse r.status r.headers (if bodyless req.method r.status then .empty else r.body)
  | some produce =>
    startResponse r.status r.headers
    if bodyless req.method r.status then finishResponse true
    else
      let ok ← try Async.block (produce fun chunk => (writeChunk chunk : IO Unit)); pure true
        catch e => IO.eprintln s!"Lasm.Fetch: the streamed response failed: {e}"; pure false
      finishResponse ok

/-- Serves HTTP requests with `handler` on the platform the program was built
for (see the module documentation), with `options`. On Node it does not
return; on edge platforms it publishes the handler and returns; on WASI,
Fastly and wasi-http it answers this run's request and returns. -/
def serveWith (options : ServeOptions) (handler : Handler) : IO Unit := do
  match platformCode () with
  | 1 | 2 | 4 => serveOnce handler options
  | 0 =>
    if ← Lasm.JS.onEdge then Lasm.JS.exportDefault (← jsFetchHandler handler options)
    else serveNode handler options
  | _ => throw (IO.userError "Lasm.Fetch.serve: serving needs a program built by Lasm (lasm build, or lasm build --target wasi|fastly|wasi-http|workers|…); this program runs natively")

/-- `serveWith {}`: request bodies are read before the handler runs. -/
def serve (handler : Handler) : IO Unit := serveWith {} handler

end Lasm.Fetch
