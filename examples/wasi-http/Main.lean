/-
An HTTP server on the wasi:http proxy world's own interfaces (Lasm.WASI.Http,
generated from the WASI 0.2.12 WIT; docs/WASI_FASTLY_BINDINGS.md):
`lasm build Main.lean --target wasi-http`, then `wasmtime serve wasi-http/main.wasm`
(or Spin, or any wasi:http@0.2 host).

It answers the routes of examples/fetch (the Lasm.Fetch handler) with the
interfaces themselves: the incoming request and its body stream, responses
through the response outparam, streamed bodies, outgoing requests
(`wasi:http/outgoing-handler`, three at once through `wasi:io/poll`). CI
(.github/workflows/wasi.yml, scripts/wasi/wasi-ci.mjs) checks every route under
`wasmtime serve`; Lasm.WASI.Http's own conformance checks are
test/fixtures/wasi-http-abi.
-/
import Std.Data.HashMap
import Lasm.WASI.Http
open Lasm.WASI.Http.Types
open Lasm.WASI.Http

/-! ## The interfaces' results -/

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

/-! ## Requests and replies -/

/-- The request this instance serves. -/
structure Request where
  handle : IncomingRequest
  method : String
  path : String
  segments : List String
  query : List (String × String)
  headers : Headers

/-- A reply sent whole. -/
structure Reply where
  status : UInt16 := 200
  headers : Array (String × String) := #[]
  body : ByteArray := .empty

def Reply.json (s : String) : Reply := { headers := #[("content-type", "application/json")], body := s.toUTF8 }
def Reply.text (s : String) (status : UInt16 := 200) : Reply :=
  { status, headers := #[("content-type", "text/plain; charset=utf-8")], body := s.toUTF8 }
def Reply.redirect (location : String) (status : UInt16 := 302) : Reply := { status, headers := #[("location", location)] }

/-- What a route did: a reply to send, or a response it sent itself (streamed). -/
inductive Outcome where
  | reply (r : Reply)
  | sent

def methodName : Method → String
  | .get => "GET" | .head => "HEAD" | .post => "POST" | .put => "PUT" | .delete => "DELETE"
  | .connect => "CONNECT" | .options => "OPTIONS" | .trace => "TRACE" | .patch => "PATCH" | .other m => m

private def hexValue (c : UInt8) : Option UInt8 :=
  if c ≥ 48 && c ≤ 57 then some (c - 48) else if c ≥ 65 && c ≤ 70 then some (c - 55)
  else if c ≥ 97 && c ≤ 102 then some (c - 87) else none

/-- Percent-decoding (and `+` as a space in a query). -/
def percentDecode (s : String) (plus : Bool := false) : String := Id.run do
  let b := s.toUTF8
  let mut out := ByteArray.empty
  let mut i := 0
  while i < b.size do
    let c := b[i]!
    if c == 37 && i + 2 < b.size then
      match hexValue b[i + 1]!, hexValue b[i + 2]! with
      | some h, some l => out := out.push (h * 16 + l); i := i + 3; continue
      | _, _ => pure ()
    out := out.push (if plus && c == 43 then 32 else c)
    i := i + 1
  return (String.fromUTF8? out).getD s

def parseQuery (q : String) : List (String × String) :=
  (q.splitOn "&").filter (· ≠ "") |>.map fun field =>
    match field.splitOn "=" with
    | [k] => (percentDecode k true, "")
    | k :: v => (percentDecode k true, percentDecode ("=".intercalate v) true)
    | [] => ("", "")

def Request.param? (r : Request) (name : String) : Option String := (r.query.find? (·.1 == name)).map (·.2)
def Request.header? (r : Request) (name : String) : IO (Option String) := do
  return (← r.headers.get name)[0]? >>= String.fromUTF8?
def Request.body (r : Request) : IO ByteArray := do
  bodyBytes (← ok! "incoming-request.consume" r.handle.consume)

/-- A response's headers (`fields.append`, so a name may repeat). -/
def fieldsOf (headers : Array (String × String)) : IO Fields := do
  let f ← Fields.new
  for (k, v) in headers do ok! s!"fields.append {k}" (f.append k v.toUTF8)
  return f

/-- Starts a response: the outparam is set, then the body is written. -/
def start (out : ResponseOutparam) (status : UInt16) (headers : Array (String × String)) : IO (OutgoingBody × OutputStream) := do
  let response ← OutgoingResponse.new (← fieldsOf headers)
  ok! "outgoing-response.set-status-code" (response.setStatusCode status)
  let body ← ok! "outgoing-response.body" response.body
  ResponseOutparam.set out (.ok response)
  return (body, ← ok! "outgoing-body.write" body.write)

/-- Ends a body: its stream is dropped, then the body is finished (no trailers). -/
def finish (body : OutgoingBody) (s : OutputStream) : IO Unit := do
  s.drop
  ok! "outgoing-body.finish" (OutgoingBody.finish body none)

/-- Sends a whole reply. -/
def send (out : ResponseOutparam) (r : Reply) (head : Bool) : IO Unit := do
  let (body, s) ← start out r.status r.headers
  unless head do writeAll s r.body
  finish body s

/-! ## Outgoing requests -/

/-- A POST of "ping" to `url` (`http://host:port/path`): the request is sent, its body written. -/
def post (url : String) : IO FutureIncomingResponse := do
  let (scheme, rest) := match url.splitOn "://" with
    | [s, r] => (if s == "https" then Scheme.https else if s == "http" then .http else .other s, r)
    | _ => (.http, url)
  let (authority, path) := match rest.splitOn "/" with
    | a :: p@(_ :: _) => (a, "/" ++ "/".intercalate p)
    | a :: _ => (a, "/")
    | [] => (rest, "/")
  let request ← OutgoingRequest.new (← fieldsOf #[("x-lasm-out", "1"), ("content-type", "text/plain")])
  ok! "set-method" (request.setMethod .post)
  ok! "set-scheme" (request.setScheme (some scheme))
  ok! "set-authority" (request.setAuthority (some authority))
  ok! "set-path-with-query" (request.setPathWithQuery (some path))
  let body ← ok! "outgoing-request.body" request.body
  let future ← ok! "outgoing-handler.handle" (OutgoingHandler.handle request none)
  let s ← ok! "outgoing-body.write" body.write
  writeAll s "ping".toUTF8
  finish body s
  return future

/-- The response of a sent request, once it has arrived (`wasi:io/poll`). -/
def awaitResponse (future : FutureIncomingResponse) : IO IncomingResponse := do
  let p ← future.subscribe
  p.block
  p.drop
  match ← future.get with
  | some (.ok (.ok response)) => future.drop; return response
  | some (.ok (.error e)) => throw (IO.userError s!"the request failed: {repr e}")
  | _ => throw (IO.userError "the response was not ready after its pollable was")

/-! ## The routes of examples/fetch -/

def fib : Nat → Nat
  | 0 => 0 | 1 => 1 | n + 2 => fib n + fib (n + 1)

def primes (n : Nat) : Nat := Id.run do
  let mut sieve := Array.replicate (n + 1) true
  let mut count := 0
  for i in [2:n + 1] do
    if sieve[i]! then
      count := count + 1
      let mut j := i * i
      while j ≤ n do
        sieve := sieve.set! j false
        j := j + i
  return count

def jsonString (s : String) : String :=
  "\"" ++ ((s.replace "\\" "\\\\").replace "\"" "\\\"").replace "\n" "\\n" ++ "\""

def wordCount (text : String) : List (String × Nat) :=
  let m : Std.HashMap String Nat := (text.splitOn " ").foldl (init := {}) fun m w =>
    if w.isEmpty then m else m.insert w (m.getD w 0 + 1)
  m.toList.mergeSort (fun a b => a.1 ≤ b.1)

def route (req : Request) (out : ResponseOutparam) : IO Outcome := do
  match req.method, req.segments with
  | "GET", [] | "HEAD", [] => return .reply (.json "{\"message\":\"Hello from Lean!\"}")
  | "GET", ["hello", name] => return .reply (.json s!"\{\"message\":{jsonString s!"Hello, {name}, from Lean!"}}")
  | "GET", ["fib", n] => return .reply (.json s!"\{\"fib\":{fib ((n.toNat?.getD 20).min 27)}}")
  | "GET", ["primes", n] => return .reply (.json s!"\{\"count\":{primes ((n.toNat?.getD 1000).min 200000)}}")
  | "GET", ["bignum"] => return .reply (.json s!"\{\"twoTo200\":\"{2 ^ 200}\"}")
  | "GET", ["query"] =>
    let fields := req.query.map fun (k, v) => s!"{jsonString k}:{jsonString v}"
    return .reply (.json ("{" ++ ",".intercalate fields ++ "}"))
  | "POST", ["echo"] | "POST", ["stream", "echo"] =>
    let body ← req.body
    return .reply { headers := #[("content-type", (← req.header? "content-type").getD "application/octet-stream")], body }
  | "POST", ["words"] =>
    let text := (String.fromUTF8? (← req.body)).getD ""
    let fields := (wordCount text).map fun (w, n) => s!"{jsonString w}:{n}"
    return .reply (.json ("{" ++ ",".intercalate fields ++ "}"))
  | "GET", ["headers"] =>
    let agent := (← req.header? "x-lasm-test").getD ""
    let r := Reply.json s!"\{\"x-lasm-test\":{jsonString agent}}"
    return .reply { r with headers := r.headers ++ #[("x-lasm-reply", "from-lean"), ("set-cookie", "a=1"), ("set-cookie", "b=2")] }
  | "POST", ["see-other"] => return .reply (.redirect "/hello/redirected" 303)
  | "GET", ["status", code] => return .reply (.text s!"status {code}\n" (code.toNat?.getD 200).toUInt16)
  | "GET", ["redirect"] => return .reply (.redirect "/hello/redirected")
  | "GET", ["empty"] => return .reply { status := 204 }
  | "GET", ["asleep", n] =>
    let ms := (n.toNat?.getD 10).min 2000
    let t ← IO.monoMsNow
    let left ← IO.asTask (do IO.sleep ms.toUInt32; pure (7 : Nat))
    let right ← IO.asTask (do IO.sleep 1; pure (9 : Nat))
    let sum := (← IO.ofExcept (← IO.wait left)) + (← IO.ofExcept (← IO.wait right))
    return .reply (.json s!"\{\"sum\":{sum},\"waited\":{decide ((← IO.monoMsNow) - t ≥ ms)}}")
  | "GET", ["sleep", n] =>
    let ms := (n.toNat?.getD 10).min 2000
    let t ← IO.monoMsNow
    IO.sleep ms.toUInt32
    return .reply (.json s!"\{\"slept\":{decide ((← IO.monoMsNow) - t ≥ ms)}}")
  | "GET", ["tasks"] =>
    let ts ← (List.range 8).mapM fun i => IO.asTask (pure (i * i))
    let mut total := 0
    for t in ts do total := total + (← IO.ofExcept (← IO.wait t))
    return .reply (.json s!"\{\"total\":{total}}")
  | "GET", ["env", name] => return .reply (.json s!"\{\"value\":{jsonString ((← IO.getEnv name).getD "")}}")
  | "GET", ["time"] => return .reply (.json s!"\{\"mono\":{decide ((← IO.monoNanosNow) > 0)},\"random\":{(← IO.getRandomBytes 8).size}}")
  | "GET", ["throw"] => throw (IO.userError "thrown from Lean")
  -- Streamed bodies: the response is sent first, then written chunk by chunk.
  | "GET", ["stream", "out", n] =>
    let (body, s) ← start out 200 #[("content-type", "text/plain")]
    for i in [0:(n.toNat?.getD 3).min 100] do
      writeAll s s!"chunk {i}\n".toUTF8
      IO.sleep 5
    finish body s
    return .sent
  | "POST", ["stream", "in"] =>
    let s ← ok! "incoming-body.stream" (← ok! "consume" req.handle.consume).stream
    let mut chunks := 0
    let mut bytes := 0
    repeat
      match ← s.blockingRead 16384 with
      | .ok chunk => chunks := chunks + 1; bytes := bytes + chunk.size
      | .error _ => break
    return .reply (.json s!"\{\"bytes\":{bytes},\"chunks\":{decide (chunks ≥ 1)}}")
  -- Outgoing requests: a POST to `url`, relayed as JSON.
  | "GET", ["outbound"] =>
    let response ← awaitResponse (← post ((req.param? "url").getD ""))
    let echoed := ((← (← response.headers).get "x-echo-method")[0]? >>= String.fromUTF8?).getD ""
    let text := (String.fromUTF8? (← bodyBytes (← ok! "incoming-response.consume" response.consume))).getD ""
    return .reply (.json s!"\{\"status\":{← response.status},\"body\":{jsonString text},\"echoed\":{jsonString echoed}}")
  -- Three requests at once: all sent, then each awaited.
  | "GET", ["outbound-parallel"] =>
    let url := (req.param? "url").getD ""
    let t ← IO.monoMsNow
    let futures ← (List.range 3).mapM fun _ => post url
    let mut statuses := #[]
    for f in futures do statuses := statuses.push (← (← awaitResponse f).status)
    return .reply (.json s!"\{\"statuses\":{statuses.toList},\"ms\":{(← IO.monoMsNow) - t}}")
  | _, _ => return .reply (.text "Not Found\n" 404)

def main : IO Unit := IncomingHandler.serve fun handle out => do
  let method := methodName (← handle.method)
  let pathWithQuery := (← handle.pathWithQuery).getD "/"
  let (path, query) := match pathWithQuery.splitOn "?" with
    | [p] => (p, "")
    | p :: q => (p, "?".intercalate q)
    | [] => ("/", "")
  let segments := (path.splitOn "/").filter (· ≠ "") |>.map (percentDecode ·)
  let req : Request := { handle, method, path, segments, query := parseQuery query, headers := ← handle.headers }
  match ← (try route req out catch e => do IO.eprintln s!"error: {e}"; pure (.reply (.text "Internal Server Error\n" 500))) with
  | .reply r => send out r (method == "HEAD")
  | .sent => pure ()
