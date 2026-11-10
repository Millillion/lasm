/-
Lasm.WASI.Http's conformance checks: each states, in its comment, the Lean
proposition it tests about the host (`wasmtime serve` in CI,
scripts/wasi/wasi-ci.mjs), and checks it for the values given. They cover the
canonical ABI rules the generator implements (docs/WASI_FASTLY_BINDINGS.md):
scalars and handles in and out, strings and byte lists in place, lists of
lists and of tuples through temporary memory and through `cabi_realloc`,
`option`, `result` and variants with payloads (lowered into joined core
values, lifted from return areas), nested results
(`option<result<result<…>>>`), the export's handles, `wasi:io/poll`,
`wasi:clocks/monotonic-clock` and `wasi:http/outgoing-handler`.

`origin` is the harness's HTTP server (`host:port`): `POST /origin/echo` answers
`<method>:<body>` with the header `x-echo-method`.
-/
import Lasm.WASI.Http
open Lasm.WASI.Http
open Lasm.WASI.Http.Types
open Lasm.WASI.Clocks

namespace Fixture

structure Check where
  name : String
  ok : Bool
  detail : String := ""

abbrev Checks := StateT (Array Check) IO

/-- Runs one check: its action's `true` is a pass; `false` or an error a failure. -/
def check (name : String) (act : IO Bool) : Checks Unit := do
  let (ok, detail) ← (try return (← act, "") catch e => return (false, toString e) : IO (Bool × String))
  modify (·.push { name, ok, detail })

def ok! [Repr ε] (what : String) (x : IO (Except ε α)) : IO α := do
  match ← x with
  | .ok a => pure a
  | .error e => throw (IO.userError s!"{what}: {repr e}")

partial def readAll (s : InputStream) (acc : ByteArray := .empty) : IO ByteArray := do
  match ← s.blockingRead 65536 with
  | .ok chunk => readAll s (acc ++ chunk)
  | .error .closed => return acc
  | .error e => throw (IO.userError s!"read: {repr e}")

partial def writeAll (s : OutputStream) (bytes : ByteArray) : IO Unit := do
  if bytes.isEmpty then return
  let n := min bytes.size 4096
  ok! "write" (s.blockingWriteAndFlush (bytes.extract 0 n))
  writeAll s (bytes.extract n bytes.size)

def utf8 (bytes : Array ByteArray) : Array String := bytes.map fun b => (String.fromUTF8? b).getD "<invalid>"

/-- A request to the harness's origin (`POST /origin/echo` with `body`), sent. -/
def sendToOrigin (origin : String) (body : ByteArray) (path := "/origin/echo") : IO (Except ErrorCode FutureIncomingResponse) := do
  let headers ← Fields.new
  ok! "append" (headers.append "content-type" "application/octet-stream".toUTF8)
  let r ← OutgoingRequest.new headers
  ok! "set-method" (r.setMethod .post)
  ok! "set-scheme" (r.setScheme (some .http))
  ok! "set-authority" (r.setAuthority (some origin))
  ok! "set-path-with-query" (r.setPathWithQuery (some path))
  let b ← ok! "body" r.body
  match ← OutgoingHandler.handle r none with
  | .error e => b.drop; return .error e
  | .ok future =>
    let s ← ok! "write" b.write
    writeAll s body
    s.drop
    ok! "finish" (OutgoingBody.finish b none)
    return .ok future

/-- The future's value once its pollable is ready. -/
def settle (future : FutureIncomingResponse) : IO (Option (Except Unit (Except ErrorCode IncomingResponse))) := do
  let p ← future.subscribe
  p.block
  p.drop
  future.get

def checks (request : IncomingRequest) (origin : String) : Checks Unit := do
  /- ## fields (wasi:http/types) -/
  -- ∀ n v, (Fields.new >>= fun f => f.append n v *> f.get n) = pure #[v]   (string and list<u8> in, list<list<u8>> out)
  check "append then get" do
    let f ← Fields.new
    ok! "append" (f.append "x-one" "1".toUTF8)
    return utf8 (← f.get "x-one") == #["1"]
  -- f.append n a *> f.append n b *> f.get n = pure #[a, b]   (a name repeats)
  check "append twice: both values, in order" do
    let f ← Fields.new
    ok! "append" (f.append "set-cookie" "a=1".toUTF8); ok! "append" (f.append "set-cookie" "b=2".toUTF8)
    return utf8 (← f.get "set-cookie") == #["a=1", "b=2"]
  -- f.get n = pure #[] for a name never set
  check "get of an absent name is empty" do
    return (← (← Fields.new).get "x-absent").isEmpty
  -- (f.append n v *> f.has n) = pure true ∧ f.has m = pure false   (a bool result)
  check "has" do
    let f ← Fields.new
    ok! "append" (f.append "x-here" "1".toUTF8)
    return (← f.has "x-here") && !(← f.has "x-gone")
  -- ∀ vs, (f.set n vs *> f.get n) = pure vs   (list<list<u8>> in, through temporary memory)
  check "set a list of values" do
    let f ← Fields.new
    ok! "append" (f.append "x-list" "old".toUTF8)
    ok! "set" (f.set "x-list" #["a".toUTF8, "".toUTF8, "ccc".toUTF8])
    return utf8 (← f.get "x-list") == #["a", "", "ccc"]
  -- (f.delete n *> f.has n) = pure false   (result<_, header-error> out)
  check "delete" do
    let f ← Fields.new
    ok! "append" (f.append "x-del" "1".toUTF8)
    ok! "delete" (f.delete "x-del")
    return !(← f.has "x-del")
  -- ∀ es n, ((Fields.fromList es >>= entries).filter (·.1 = n)) = pure (es.filter (·.1 = n)), with as many entries as es
  -- (each name keeps its values in order; the order across names is the host's serialization
  -- order, which wasi:http leaves to the host: wasmtime groups a name's values together)
  check "from-list then entries" do
    let es : Array (String × ByteArray) := #[("x-a", "1".toUTF8), ("x-b", "two".toUTF8), ("x-a", "3".toUTF8)]
    let f ← ok! "from-list" (Fields.fromList es)
    let got := (← f.entries).map fun (n, v) => (n, (String.fromUTF8? v).getD "")
    let want := es.map fun (n, v) => (n, (String.fromUTF8? v).getD "")
    let same := got.size == want.size && ["x-a", "x-b"].all fun n => got.filter (·.1 == n) == want.filter (·.1 == n)
    if same then return true else throw (IO.userError s!"got {got}")
  -- Fields.fromList [("bad name", v)] = pure (.error .invalidSyntax)   (a payload-free variant in a result)
  check "from-list rejects an invalid name: invalid-syntax" do
    match ← Fields.fromList #[("bad name", "v".toUTF8)] with
    | .error .invalidSyntax => return true
    | .error e => throw (IO.userError s!"got {repr e}")
    | .ok _ => throw (IO.userError "accepted")
  -- f.append "connection" v = pure (.error .forbidden)   (the host's forbidden headers)
  check "append of a forbidden header: forbidden" do
    match ← (← Fields.new).append "connection" "close".toUTF8 with
    | .error .forbidden => return true
    | r => throw (IO.userError s!"got {repr r}")
  -- request.headers is immutable: append = pure (.error .immutable)
  check "the incoming request's headers are immutable" do
    match ← (← request.headers).append "x-more" "1".toUTF8 with
    | .error .immutable => return true
    | r => throw (IO.userError s!"got {repr r}")
  -- (f.clone >>= fun g => g.append n v *> f.has n) = pure false   (a clone is independent)
  check "clone is independent" do
    let f ← Fields.new
    let g ← f.clone
    ok! "append" (g.append "x-clone" "1".toUTF8)
    return !(← f.has "x-clone") && (← g.has "x-clone")
  -- a 20,000-byte value comes back whole (a large list through cabi_realloc)
  check "a 20,000-byte value" do
    let v := ByteArray.mk (Array.replicate 20000 (65 : UInt8))
    let f ← Fields.new
    ok! "append" (f.append "x-big" v)
    return (← f.get "x-big") == #[v]
  /- ## the incoming request (the export's handle) -/
  -- request.method = pure .get   (a variant with a string payload, out)
  check "incoming method" do return (← request.method) == .get
  -- request.pathWithQuery = pure (some "/conformance?origin=…")   (option<string> out)
  check "incoming path with query" do
    return ((← request.pathWithQuery).getD "").startsWith "/conformance?origin="
  -- request.scheme = pure (some .http)   (option<variant> through a return area)
  check "incoming scheme" do return (← request.scheme) == some .http
  -- (request.authority).isSome
  check "incoming authority" do return (← request.authority).isSome
  -- (request.headers >>= (·.get "x-lasm-conformance")) = pure #["yes"]
  check "incoming header" do return utf8 (← (← request.headers).get "x-lasm-conformance") == #["yes"]
  -- the request's body: consume, read to `closed`, finish; its trailers settle to some (ok (ok none))
  --   (option<result<result<option<own<fields>>, error-code>>> out: nested variants)
  check "incoming body and trailers" do
    let body ← ok! "consume" request.consume
    let s ← ok! "stream" body.stream
    let bytes ← readAll s
    s.drop
    let trailers ← IncomingBody.finish body
    let p ← trailers.subscribe
    p.block; p.drop
    return bytes.isEmpty && ((← trailers.get) matches some (.ok (.ok none)))
  -- Lasm.WASI.Http.IncomingHandler.take fails once the handles are taken (by serve)
  check "the export's handles are taken once" do
    try discard IncomingHandler.take; return false catch _ => return true
  /- ## outgoing-request, request-options and outgoing-response round trips -/
  -- ∀ m, (r.setMethod m *> r.method) = pure m   (a variant with a payload, lowered into core values and lifted)
  check "method round trip (other)" do
    let r ← OutgoingRequest.new (← Fields.new)
    ok! "set-method" (r.setMethod (.other "PURGE"))
    return (← r.method) == .other "PURGE"
  check "method round trip (patch)" do
    let r ← OutgoingRequest.new (← Fields.new)
    ok! "set-method" (r.setMethod .patch)
    return (← r.method) == .patch
  -- (r.setScheme s *> r.scheme) = pure s   (option<variant> in)
  check "scheme round trip" do
    let r ← OutgoingRequest.new (← Fields.new)
    ok! "set-scheme" (r.setScheme (some .https))
    return (← r.scheme) == some .https
  -- (r.setAuthority a *> r.authority) = pure a ∧ (r.setPathWithQuery p *> r.pathWithQuery) = pure p
  check "authority and path round trip" do
    let r ← OutgoingRequest.new (← Fields.new)
    ok! "set-authority" (r.setAuthority (some "example.com:8080"))
    ok! "set-path-with-query" (r.setPathWithQuery (some "/a/b?c=d"))
    return (← r.authority) == some "example.com:8080" && (← r.pathWithQuery) == some "/a/b?c=d"
  -- ∀ d, (o.setConnectTimeout (some d) *> o.connectTimeout) = pure (some d)   (option<u64> in and out)
  check "request-options timeouts round trip" do
    let o ← RequestOptions.new
    ok! "connect" (o.setConnectTimeout (some 1500000000))
    ok! "first-byte" (o.setFirstByteTimeout (some 2000000000))
    return (← o.connectTimeout) == some 1500000000 && (← o.firstByteTimeout) == some 2000000000
  -- (resp.setStatusCode 418 *> resp.statusCode) = pure 418   (u16 in and out)
  check "status round trip" do
    let resp ← OutgoingResponse.new (← Fields.new)
    ok! "set-status-code" (resp.setStatusCode 418)
    return (← resp.statusCode) == 418
  -- resp.setStatusCode 1000 = pure (.error ())   (not an HTTP status)
  check "an invalid status is refused" do
    let resp ← OutgoingResponse.new (← Fields.new)
    return ((← resp.setStatusCode 1000) matches .error ())
  /- ## wasi:clocks/monotonic-clock and wasi:io/poll -/
  -- now ≤ now   (u64 out)
  check "monotonic now" do
    let a ← MonotonicClock.now
    let b ← MonotonicClock.now
    return a ≤ b && a > 0
  -- resolution > 0
  check "monotonic resolution" do return (← MonotonicClock.resolution) > 0
  -- (subscribeDuration 20 ms >>= block) waits at least 20 ms
  check "subscribe-duration then block" do
    let t ← MonotonicClock.now
    let p ← MonotonicClock.subscribeDuration 20000000
    p.block; p.drop
    return (← MonotonicClock.now) - t ≥ 20000000
  -- poll #[soon, later] = pure #[0]   (list<borrow<pollable>> in, list<u32> out)
  check "poll returns the ready pollables" do
    let soon ← MonotonicClock.subscribeDuration 0
    let later ← MonotonicClock.subscribeDuration 10000000000
    let ready ← Lasm.WASI.Io.Poll.poll #[soon, later]
    let laterReady ← later.ready
    soon.drop; later.drop
    return ready == #[0] && !laterReady
  /- ## wasi:http/outgoing-handler, through the futures -/
  -- the origin's echo: status 200, x-echo-method POST, body "POST:<body>"   (a full exchange)
  check "outgoing request and its response" do
    let future ← ok! "handle" (sendToOrigin origin "ping".toUTF8)
    match ← settle future with
    | some (.ok (.ok response)) =>
      let status ← response.status
      let method := utf8 (← (← response.headers).get "x-echo-method")
      let body ← ok! "consume" response.consume
      let s ← ok! "stream" body.stream
      let text := (String.fromUTF8? (← readAll s)).getD ""
      return status == 200 && method == #["POST"] && text == "POST:ping"
    | some (.ok (.error e)) => throw (IO.userError s!"got {repr e}")
    | _ => throw (IO.userError "no response")
  -- a 300,000-byte body goes out and comes back whole (many writes, many reads)
  check "a 300,000-byte request body" do
    let big := ByteArray.mk (Array.ofFn (n := 300000) fun i => (i.val % 251).toUInt8)
    let future ← ok! "handle" (sendToOrigin origin big)
    match ← settle future with
    | some (.ok (.ok response)) =>
      let s ← ok! "stream" (← ok! "consume" response.consume).stream
      let got ← readAll s
      if got == "POST:".toUTF8 ++ big then return true
      throw (IO.userError s!"got {got.size} bytes back, expected {big.size + 5}")
    | some (.ok (.error e)) => throw (IO.userError s!"got {repr e}")
    | _ => throw (IO.userError "no response")
  -- a closed port: the exchange fails with error-code connection-refused   (a variant error out of a nested result)
  check "a refused connection is connection-refused" do
    match ← sendToOrigin "127.0.0.1:9" "x".toUTF8 with
    | .error .connectionRefused => return true
    | .error e => throw (IO.userError s!"handle: {repr e}")
    | .ok future =>
      match ← settle future with
      | some (.ok (.error .connectionRefused)) => return true
      | some (.ok (.error e)) => throw (IO.userError s!"got {repr e}")
      | _ => throw (IO.userError "no error")
  -- a future's value is taken once: get after get = some (.error ())
  check "a future's value is taken once" do
    let future ← ok! "handle" (sendToOrigin origin "again".toUTF8)
    discard <| settle future
    return ((← future.get) matches some (.error ()))
  /- ## wasi:io/streams -/
  -- a finished input stream reads `closed`; skip counts bytes   (result<u64, stream-error> out)
  check "skip then closed" do
    let future ← ok! "handle" (sendToOrigin origin "0123456789".toUTF8)
    match ← settle future with
    | some (.ok (.ok response)) =>
      let s ← ok! "stream" (← ok! "consume" response.consume).stream
      -- ∀ n, (s.blockingSkip n >>= fun k => readAll s) = drop k body ∧ 1 ≤ k ≤ n
      let skipped ← ok! "skip" (s.blockingSkip 5)
      let rest ← readAll s
      let whole := "POST:0123456789".toUTF8
      return 1 ≤ skipped && skipped ≤ 5 && rest == whole.extract skipped.toNat whole.size
        && ((← s.blockingRead 1) matches .error .closed)
    | _ => return false

/-- Runs every check and answers `{"passed", "total", "failed": [{"name", "detail"}]}`. -/
def run (request : IncomingRequest) (origin : String) : IO String := do
  let (_, results) ← (checks request origin).run #[]
  let esc (s : String) := ((s.replace "\\" "\\\\").replace "\"" "\\\"").replace "\n" "\\n"
  let failed := results.filter (!·.ok) |>.map fun c => s!"\{\"name\":\"{esc c.name}\",\"detail\":\"{esc c.detail}\"}"
  return s!"\{\"passed\":{(results.filter (·.ok)).size},\"total\":{results.size},\"failed\":[{",".intercalate failed.toList}]}"

end Fixture
