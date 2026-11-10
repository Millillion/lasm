/-
An HTTP server on Fastly Compute's own host calls (Lasm.Fastly, generated from
Fastly's witx; docs/WASI_FASTLY_BINDINGS.md): `lasm build Main.lean --target fastly`,
then `fastly compute serve` (Viceroy) or `fastly compute deploy`.

It answers the routes of examples/fetch (the Lasm.Fetch handler) with the ABI
itself: the downstream request and its body, responses, streamed bodies,
backend requests (named and dynamic, three at once), Config, Secret and KV
Stores. CI (.github/workflows/wasi.yml, scripts/wasi/wasi-ci.mjs) checks every
route under Viceroy, Fastly's local simulator; Lasm.Fastly's own conformance
checks are test/fixtures/fastly-abi.
-/
import Std.Data.HashMap
import Lasm.Fastly
open Lasm.Fastly

/-! ## Requests and replies -/

/-- The request this instance serves. -/
structure Request where
  handle : RequestHandle
  body : BodyHandle
  method : String
  path : String
  segments : List String
  query : List (String × String)

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

/-- The path and query of an absolute URL (`http://host/path?query`). -/
def splitUrl (url : String) : String × String :=
  let afterScheme := match url.splitOn "://" with | [_, rest] => rest | _ => url
  let pathAndQuery := match afterScheme.splitOn "/" with
    | _ :: rest@(_ :: _) => "/" ++ "/".intercalate rest
    | _ => "/"
  match pathAndQuery.splitOn "?" with
  | [p] => (p, "")
  | p :: q => (p, "?".intercalate q)
  | [] => ("/", "")

def parseQuery (q : String) : List (String × String) :=
  (q.splitOn "&").filter (· ≠ "") |>.map fun field =>
    match field.splitOn "=" with
    | [k] => (percentDecode k true, "")
    | k :: v => (percentDecode k true, percentDecode ("=".intercalate v) true)
    | [] => ("", "")

def Request.param? (r : Request) (name : String) : Option String := (r.query.find? (·.1 == name)).map (·.2)
def Request.header? (r : Request) (name : String) : IO (Option String) := found? (HttpReq.headerValueGet r.handle name)

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 65536
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

/-- Writes all of `bytes` (a write may take part of them). -/
partial def writeAll (body : BodyHandle) (bytes : ByteArray) : EIO FastlyStatus Unit := do
  if bytes.isEmpty then return
  let n ← HttpBody.write body bytes .back
  writeAll body (bytes.extract n.toNat bytes.size)

/-- Sends a whole reply downstream. -/
def send (r : Reply) (head : Bool) : IO Unit := do
  let resp ← HttpResp.new
  HttpResp.statusSet resp r.status
  for (k, v) in r.headers do HttpResp.headerAppend resp k v
  let body ← HttpBody.new
  unless head do writeAll body r.body
  HttpResp.sendDownstream resp body 0

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

/-- The backend for an outbound request: the named one, else a dynamic backend for the URL's host. -/
def backendFor (url : String) (named : Option String) : IO String := do
  if let some name := named then return name
  let host := match (match url.splitOn "://" with | [_, rest] => rest | _ => url).splitOn "/" with
    | h :: _ => h | [] => url
  let name := "dynamic-" ++ host.map fun c => if c.isAlphanum then c else '-'
  if (← Backend.«exists» name) == 0 then
    HttpReq.registerDynamicBackend name host {} {}
  return name

/-- A backend request: method, URL and headers. -/
def outboundRequest (url : String) : IO (RequestHandle × BodyHandle) := do
  let req ← HttpReq.new
  HttpReq.methodSet req "POST"
  HttpReq.uriSet req url
  HttpReq.headerAppend req "x-lasm-out" "1"
  HttpReq.headerAppend req "content-type" "text/plain"
  let body ← HttpBody.new
  writeAll body "ping".toUTF8
  return (req, body)

def route (req : Request) : IO Outcome := do
  match req.method, req.segments with
  | "GET", [] | "HEAD", [] => return .reply (.json "{\"message\":\"Hello from Lean!\"}")
  | "GET", ["hello", name] => return .reply (.json s!"\{\"message\":{jsonString s!"Hello, {name}, from Lean!"}}")
  | "GET", ["fib", n] => return .reply (.json s!"\{\"fib\":{fib ((n.toNat?.getD 20).min 27)}}")
  | "GET", ["primes", n] => return .reply (.json s!"\{\"count\":{primes ((n.toNat?.getD 1000).min 200000)}}")
  | "GET", ["bignum"] => return .reply (.json s!"\{\"twoTo200\":\"{2 ^ 200}\"}")
  | "GET", ["query"] =>
    let fields := req.query.map fun (k, v) => s!"{jsonString k}:{jsonString v}"
    return .reply (.json ("{" ++ ",".intercalate fields ++ "}"))
  | "POST", ["echo"] =>
    let body ← readAll req.body
    return .reply { headers := #[("content-type", (← req.header? "content-type").getD "application/octet-stream")], body }
  | "POST", ["words"] =>
    let text := (String.fromUTF8? (← readAll req.body)).getD ""
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
  -- Config, Secret and KV Stores (Viceroy reads them from fastly.toml).
  | "GET", ["fastly", "stores"] =>
    let settings ← ConfigStore.open "settings"
    let color ← found? (ConfigStore.get settings "color")
    let missing ← found? (ConfigStore.get settings "nope")
    let secrets ← SecretStore.open "secrets"
    let secret ← match ← found? (SecretStore.get secrets "token") with
      | some s => some <$> (SecretStore.plaintext s : IO _)
      | none => pure none
    let kv ← KvStore.open "kv"
    let lookup (key : String) : IO (Option String) := do
      -- A missing key: KvError.notFound (Viceroy may also answer $none).
      match ← found? (KvStore.lookupWaitV2 (← KvStore.lookup kv key {} {})) with
      | some (body, _, _, .ok) => return String.fromUTF8? (← readAll body)
      | _ => return none
    let greeting ← lookup "greeting"
    let value ← HttpBody.new
    writeAll value "41".toUTF8
    discard <| KvStore.insertWait (← KvStore.insert kv "counter" value {} {})
    let counter ← lookup "counter"
    discard <| KvStore.deleteWait (← KvStore.delete kv "counter" {} {})
    let gone ← lookup "counter"
    return .reply (.json s!"\{\"color\":{jsonString (color.getD "")},\"missing\":{missing.isNone},\"secret\":{jsonString (secret.getD "")},\"greeting\":{jsonString (greeting.getD "")},\"counter\":{jsonString (counter.getD "")},\"deleted\":{gone.isNone}}")
  -- Streamed bodies: the response is sent first, then written chunk by chunk.
  | "GET", ["stream", "out", n] =>
    let resp ← HttpResp.new
    HttpResp.headerAppend resp "content-type" "text/plain"
    let body ← HttpBody.new
    HttpResp.sendDownstream resp body 1
    for i in [0:(n.toNat?.getD 3).min 100] do
      writeAll body s!"chunk {i}\n".toUTF8
      IO.sleep 5
    HttpBody.close body
    return .sent
  | "POST", ["stream", "in"] =>
    let mut chunks := 0
    let mut bytes := 0
    repeat
      let chunk ← HttpBody.read req.body 16384
      if chunk.isEmpty then break
      chunks := chunks + 1; bytes := bytes + chunk.size
    return .reply (.json s!"\{\"bytes\":{bytes},\"chunks\":{decide (chunks ≥ 1)}}")
  | "POST", ["stream", "echo"] =>
    return .reply { headers := #[("content-type", (← req.header? "content-type").getD "application/octet-stream")], body := ← readAll req.body }
  -- Backend requests: a POST to `url`, relayed as JSON.
  | "GET", ["outbound"] =>
    let url := (req.param? "url").getD ""
    let backend ← backendFor url (req.param? "backend")
    let (out, outBody) ← outboundRequest url
    let (resp, respBody) ← HttpReq.send out outBody backend
    let text := (String.fromUTF8? (← readAll respBody)).getD ""
    let echoed := (← found? (HttpResp.headerValueGet resp "x-echo-method")).getD ""
    return .reply (.json s!"\{\"status\":{← HttpResp.statusGet resp},\"body\":{jsonString text},\"echoed\":{jsonString echoed}}")
  -- Three backend requests at once: sent asynchronously, then waited for.
  | "GET", ["outbound-parallel"] =>
    let url := (req.param? "url").getD ""
    let backend ← backendFor url (req.param? "backend")
    let t ← IO.monoMsNow
    let pending ← (List.range 3).mapM fun _ => do
      let (out, outBody) ← outboundRequest url
      HttpReq.sendAsync out outBody backend
    let mut statuses := #[]
    for p in pending do
      let (resp, _) ← HttpReq.pendingReqWait p
      statuses := statuses.push (← HttpResp.statusGet resp)
    return .reply (.json s!"\{\"statuses\":{statuses.toList},\"ms\":{(← IO.monoMsNow) - t}}")
  | _, _ => return .reply (.text "Not Found\n" 404)

def main : IO Unit := do
  let (handle, body) ← HttpReq.bodyDownstreamGet
  let method ← HttpReq.methodGet handle
  let (path, query) := splitUrl (← HttpReq.uriGet handle)
  let segments := (path.splitOn "/").filter (· ≠ "") |>.map (percentDecode ·)
  let req : Request := { handle, body, method, path, segments, query := parseQuery query }
  match ← (try route req catch e => do IO.eprintln s!"error: {e}"; pure (.reply (.text "Internal Server Error\n" 500))) with
  | .reply r => send r (method == "HEAD")
  | .sent => pure ()
