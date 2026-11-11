/-
Conformance program for Lasm.JS.Deno and Lasm.JS.Bun (Deno.serve and Bun.serve,
generated from the runtimes' TypeScript declarations), for Lasm's own Node.serve
(Lasm.JS.Node.Serve, provided by Lasm), and for serving the same Lean handler on
Node through @hono/node-server (an `@[js]` binding to the npm package this fixture
installs). Built for Node, Bun and Deno and run by
scripts/bindings/test-web.mjs --fixture js-serve (docs/TESTING.md, "Standard
bindings"): each runtime runs the sections of its own server, which serve
App.handle on 127.0.0.1 and request it over HTTP with Lasm.JS.Web's fetch.

Every check is a property of the runtime behind the binding, stated in the comment
above it (the oracle is App.handle's specification, or the runtime's declaration
that the binding quotes); generated inputs come from a seeded generator, so a
failure is reproducible. The availability section probes every generated member on
the live objects (a server, a request's info, an address).

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and
`summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Deno
import Lasm.JS.Bun
import Lasm.JS.Node.Serve
import App
import Surface
import Tls
open Lasm.JS Lasm.JS.Web

/-! Reporting -/

structure Report where
  passed : Nat := 0
  failed : Nat := 0
  lines : Array String := #[]

abbrev Checks := IO.Ref Report

def expect (r : Checks) (name : String) (ok : Bool) (detail : String := "") : IO Unit :=
  r.modify fun s => if ok then { s with passed := s.passed + 1 }
    else { s with failed := s.failed + 1, lines := s.lines.push s!"FAIL {name}: {detail}" }

/-- Runs one section; an exception fails it (and names it). -/
def runSection (r : Checks) (name : String) (body : Async Unit) : Async Unit := do
  let before ← r.get
  try body catch e => expect r s!"{name} (section)" false s!"threw {e}"
  let after ← r.get
  r.modify fun s => { s with lines := s.lines.push s!"section {name}: {after.passed - before.passed} passed, {after.failed - before.failed} failed" }

/-- `act` throws (a JavaScript exception or a rejected promise). -/
def throws (act : Async α) : Async Bool := do
  try discard act; return false catch _ => return true

/-- Waits until `ref` holds a value, polling every 10 ms for at most `ms`. -/
def waitFor (ref : IO.Ref (Option α)) (ms : Nat := 5000) : Async (Option α) := do
  for _ in [0:ms / 10] do
    if let some a ← ref.get then return some a
    App.sleep 10
  ref.get

/-- A seeded generator (PCG-style LCG), so every generated case is reproducible. -/
structure Rng where
  state : UInt64

def Rng.next (g : Rng) : Nat × Rng :=
  let s := g.state * 6364136223846793005 + 1442695040888963407
  ((s >>> 33).toNat, ⟨s⟩)
def Rng.below (g : Rng) (n : Nat) : Nat × Rng := let (x, g) := g.next; (x % n, g)

/-- A random Unicode scalar value: ASCII, Latin-1, the BMP outside surrogates, or astral. -/
def Rng.char (g : Rng) : Char × Rng := Id.run do
  let (kind, g) := g.below 4
  let (x, g) := g.next
  let n := match kind with
    | 0 => 32 + x % 95
    | 1 => 160 + x % 96
    | 2 => let v := 256 + x % (0xD800 - 256); v
    | _ => 0x10000 + x % 0x10000
  return (Char.ofNat n, g)
def Rng.string (g : Rng) (maxLen : Nat) : String × Rng := Id.run do
  let (len, g) := g.below (maxLen + 1)
  let mut g := g
  let mut s := ""
  for _ in [0:len] do
    let (c, g') := g.char; g := g'; s := s.push c
  return (s, g)

/-! Runtimes and live objects -/

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool
@[js "globalThis" "JSON.parse"] opaque jsonParse : String → IO Data

inductive Runtime where
  | node | deno | bun
  deriving BEq

def runtime : IO Runtime := do
  let g ← Lasm.JS.global
  if ← reflectHas g "Bun" then return .bun
  if ← reflectHas g "Deno" then return .deno
  return .node

/-- Live objects of each generated interface (`Deno.HttpServer`, …), for the availability probe. -/
abbrev Live := IO.Ref (Array (String × Value))

def now : IO Float := do (← performance).now

/-! The client: requests to a server of App.handle, with Lasm.JS.Web's fetch -/

structure Reply where
  status : Nat
  body : String
  contentType : Option String
  method : Option String

def request (url : String) (method := "GET") (body : Option String := none) (contentType : Option String := none) : Async Reply := do
  let headers := contentType.map fun c => HeadersInit.record ⟨#[("content-type", c)]⟩
  let res ← fetch (.usvString url) (some { method := some method, body := body.map .usvString, headers })
  let h ← res.headers
  return { status := ← res.status, body := ← res.text, contentType := ← h.get "content-type", method := ← h.get "x-lasm-method" }

/-- The properties of App.handle, served at `base`, over HTTP. `thrown` is the status the
server answers when the handler throws (its error handler's, or the runtime's default). -/
def served (r : Checks) (name base : String) (thrown : Nat) : Async Unit := do
  -- GET /hello = 200 "hello from Lean" (text/plain)
  let hello ← request s!"{base}/hello"
  expect r s!"{name} GET /hello" (hello.status == 200 && hello.body == "hello from Lean" && hello.contentType == some "text/plain; charset=utf-8")
    s!"{hello.status} {hello.body} {hello.contentType}"
  -- ∀ s : String, POST /echo s = s, with its content type and the method
  let mut g : Rng := ⟨7⟩
  for i in [0:16] do
    let (s, g') := g.string 200; g := g'
    let ct := s!"text/x-case-{i}"
    let e ← request s!"{base}/echo" (method := "POST") (body := some s) (contentType := some ct)
    expect r s!"{name} echo[{i}]" (e.status == 200 && e.body == s && e.contentType == some ct && e.method == some "POST")
      s!"{e.status} {e.body.length} chars (sent {s.length}) {e.contentType} {e.method}"
  -- ∀ n < 2^20, GET /square?n=n = {"n":n,"square":n²}
  for i in [0:8] do
    let (n, g') := g.below (2 ^ 20); g := g'
    let q ← request s!"{base}/square?n={n}"
    expect r s!"{name} square[{i}]" (q.status == 200 && q.body == s!"\{\"n\":{n},\"square\":{n * n}}" && q.contentType == some "application/json")
      s!"{q.status} {q.body}"
  let bad ← request s!"{base}/square?n=minus"
  expect r s!"{name} 400" (bad.status == 400) s!"{bad.status}"
  let missing ← request s!"{base}/no/such/path"
  expect r s!"{name} 404" (missing.status == 404 && missing.body == "not found: /no/such/path") s!"{missing.status} {missing.body}"
  -- A handler that throws: the server's error handling answers `thrown`.
  let t ← request s!"{base}/throw"
  expect r s!"{name} handler throws" (t.status == thrown) s!"{t.status} {t.body}"
  -- Concurrency: 10 requests waiting 300 ms each finish together (Async handlers hold no thread).
  let started ← now
  let tasks ← (List.range 10).mapM fun _ => (request s!"{base}/slow?ms=300").asTask
  let replies ← tasks.mapM fun t => Std.Async.await t
  let elapsed := (← now) - started
  expect r s!"{name} concurrent" (replies.all (·.status == 200) && elapsed < 2500) s!"{elapsed} ms, statuses {replies.map (·.status)}"

/-! Deno.serve (Lasm.JS.Deno) -/

/-- `Deno.createHttpClient(options)`, looked up at run time (an `@[js]` binding of a Deno-only
global would fail `lasm build`'s binding check, which runs on Node). -/
def denoHttpClient (options : Data) : IO Value := do
  (← (← Lasm.JS.global).get "Deno" Value).callMethod "createHttpClient" #[options] Value
@[js "globalThis" "fetch"] opaque fetchWith : String → Data → Async Value

def deno (r : Checks) (live : Live) : Async Unit := do
  runSection r "deno.serveWithOptions" do
    let listened ← IO.mkRef (none : Option Nat)
    let remote ← IO.mkRef (none : Option (String × Nat × Bool))
    let completed ← IO.mkRef (none : Option Bool)
    let onListen ← Deno.ServeOptionsOnListen.ofFn fun addr => do
      listened.set (some addr.port)
    let onError ← Deno.ServeOptionsOnError.ofFn fun _ => App.text "handled" (status := 503)
    let ac ← AbortController.new
    let handler ← Deno.ServeHandler.ofFn fun req info => do
      if (← (← URL.new (← req.url)).pathname) == "/hello" && (← remote.get).isNone then
        let a ← info.remoteAddr
        live.modify (·.push ("ServeHandlerInfo", info.val))
        remote.set (some (a.hostname, a.port, a.transport == .tcp))
        -- info.completed settles once the response has been sent.
        Std.Async.background do
          let ok ← try
              info.completed
              pure true
            catch _ => pure false
          completed.set (some ok)
      App.handle req
    let signal ← ac.signal
    let options : Deno.ServeTcpOptions := { port := some 0, hostname := some "127.0.0.1", signal := some signal, onListen := some onListen, onError := some onError }
    let server ← Deno.serveWithOptions options handler
    live.modify (·.push ("HttpServer", server.val))
    -- The handler's length is its declared arity (Deno.serve calls a handler of length 0 without its request).
    expect r "handler length" ((← handler.val.get "length" Nat) == 2) s!"{← handler.val.get "length" Nat}"
    let addr ← server.addr
    let port := addr.port
    -- addr is the address listened on: 127.0.0.1, TCP, the port chosen for port 0
    expect r "addr" (port > 0 && addr.hostname == "127.0.0.1" && addr.transport == .tcp) s!"{port}"
    -- onListen receives the same address
    expect r "onListen" ((← waitFor listened) == some port) s!"{← listened.get}"
    served r "deno" s!"http://127.0.0.1:{port}" 503
    -- info.remoteAddr is the client's: 127.0.0.1 over TCP, from a port of its own
    let some (host, rport, tcp) ← remote.get | expect r "info.remoteAddr" false "no request seen"
    expect r "info.remoteAddr" (host == "127.0.0.1" && rport > 0 && rport != port && tcp) s!"{host} {rport} {tcp}"
    expect r "info.completed" ((← waitFor completed) == some true) s!"{← completed.get}"
    server.unref; server.ref
    -- Aborting the signal closes the server: finished settles, and requests fail.
    ac.abort
    server.finished
    expect r "signal closes the server" (← throws (request s!"http://127.0.0.1:{port}/hello")) ""
  runSection r "deno.serve" do
    -- serve(handler): the defaults, port 8000 on 0.0.0.0; the runtime's default error answer is 500.
    let handler ← Deno.ServeHandler.ofFn fun req _ => App.handle req
    let server ← Deno.serve handler
    expect r "default port" ((← server.addr).port == 8000) s!"{(← server.addr).port}"
    served r "deno default" "http://127.0.0.1:8000" 500
    -- shutdown resolves, then finished, and the port is closed.
    server.shutdown
    server.finished
    expect r "shutdown closes the server" (← throws (request "http://127.0.0.1:8000/hello")) ""
  runSection r "deno.serveWithTlsOptions" do
    let handler ← Deno.ServeHandler.ofFn fun req _ => App.handle req
    let server ← Deno.serveWithTlsOptions { port := some 0, hostname := some "127.0.0.1", cert := Tls.cert, key := Tls.key } handler
    let port := (← server.addr).port
    -- An HTTPS request with the test CA trusted (Deno.createHttpClient, outside this binding).
    let client ← denoHttpClient (obj [("caCerts", .array #[toJS Tls.ca])])
    let res ← fetchWith s!"https://localhost:{port}/hello" (obj [("client", toJS client)])
    let status ← res.get "status" Nat
    let body ← res.callMethodAwait "text" #[] String
    expect r "TLS" (status == 200 && body == "hello from Lean") s!"{status} {body}"
    let _ : Value ← client.callMethod "close" #[]
    server.shutdown

/-! Bun.serve (Lasm.JS.Bun) -/

def bun (r : Checks) (live : Live) : Async Unit := do
  runSection r "bun.serve" do
    let seen ← IO.mkRef (none : Option (String × Nat × Lasm.JS.Bun.SocketAddressFamily × Nat))
    let fetch ← Bun.ServeOptionsFetch.ofFn fun req server => do
      if (← (← URL.new (← req.url)).pathname) == "/ip" then
        server.timeout req 30
        match ← server.requestIP req with
        | some a =>
          seen.set (some (a.address, a.port, a.family, (← server.pendingRequests)))
        | none => pure ()
      App.handle req
    let error ← Bun.ServeOptionsError.ofFn fun _ => App.text "handled" (status := 503)
    let server ← Bun.serve { fetch, error := some error, port := some (.unsignedShort 0), hostname := some "127.0.0.1", idleTimeout := some 30 }
    live.modify (·.push ("Server", server.val))
    let some port ← server.port | throw (IO.userError "no port")
    -- port, hostname, url and protocol describe the listening socket
    expect r "server attributes" (port > 0 && (← server.hostname) == some "127.0.0.1" && (← server.protocol) == some .http
      && (← (← server.url).href) == s!"http://127.0.0.1:{port}/") s!"{port} {← server.hostname} {← (← server.url).href}"
    let _ ← server.id; let _ ← server.development
    served r "bun" s!"http://127.0.0.1:{port}" 503
    -- requestIP is the client's address; a request in flight is counted
    discard <| request s!"http://127.0.0.1:{port}/ip"
    match ← seen.get with
    | some (address, rport, family, pending) =>
      expect r "requestIP" ((address == "127.0.0.1" || address == "::ffff:127.0.0.1") && rport > 0 && rport != port
        && (family == .iPv4 || family == .iPv6)) s!"{address} {rport}"
      expect r "pendingRequests" (pending ≥ 1) s!"{pending}"
    | none => expect r "requestIP" false "no address"
    -- server.fetch runs the handler without the network
    try
      let direct ← server.fetch (.domString s!"http://127.0.0.1:{port}/hello")
      expect r "server.fetch" ((← direct.status) == 200 && (← direct.text) == "hello from Lean") ""
    catch e => expect r "server.fetch" false s!"threw {e}"
    -- reload replaces the handler for later requests
    let other ← Bun.ServeOptionsFetch.ofFn fun _ _ => App.text "reloaded"
    discard <| server.reload { fetch := other, port := some (.unsignedShort port), hostname := some "127.0.0.1" }
    let after ← request s!"http://127.0.0.1:{port}/hello"
    expect r "reload" (after.body == "reloaded") after.body
    let _ ← server.closeIdleConnections
    server.unref; server.ref
    -- stop(true) resolves once every connection is closed; then requests fail.
    server.stop (some true)
    expect r "stop closes the server" (← throws (request s!"http://127.0.0.1:{port}/hello")) ""

/-! Node: Node.serve (Lasm.JS.Node.Serve, provided by Lasm) -/

/-- App.handle, and the routes of Node.serve's own guarantees. -/
def nodeExtras (request : Request) : Async Response := do
  match ← (← URL.new (← request.url)).pathname with
  | "/cookies" => Response.new (some (.usvString "ok")) (some { headers := some (.sequence #[#["set-cookie", "a=1; Path=/"], #["set-cookie", "b=2"]]) })
  | "/empty" => Response.new (some (.bufferSource .empty)) (some { status := some 200 })
  | "/url" => App.text (← request.url)
  | _ => App.handle request

/-- Runs `Node.serve` in a thread of its own (it returns when the server stops); the
handle comes from `onListen`. -/
def startNode (options : Node.ServeOptions) : Async (Node.Server × Task (Except IO.Error Unit)) := do
  let handle ← IO.mkRef (none : Option Node.Server)
  let task ← IO.asTask (prio := .dedicated) (Node.serve { options with onListen := some fun s => handle.set (some s) })
  let some server ← waitFor handle | throw (IO.userError "Node.serve did not listen")
  return (server, task)

def nodeServe (r : Checks) : Async Unit := do
  runSection r "node.serve" do
    let (server, task) ← startNode { fetch := nodeExtras, port := some 0, hostname := some "127.0.0.1",
      error := some fun e => App.text s!"handled: {e}" (status := 503) }
    let port := server.port
    -- The handle: the address listened on, the port chosen for port 0, its URL.
    expect r "handle" (port > 0 && server.hostname == "127.0.0.1" && server.url == s!"http://127.0.0.1:{port}/") s!"{server.hostname} {port} {server.url}"
    served r "node.serve" s!"http://127.0.0.1:{port}" 503
    -- The error handler receives the handler's error.
    let thrown ← request s!"http://127.0.0.1:{port}/throw"
    expect r "error handler" (thrown.body == "handled: the handler threw") thrown.body
    -- The request's URL is the client's Host with the path and query.
    let url ← request s!"http://127.0.0.1:{port}/url?q=1"
    expect r "request url" (url.body == s!"http://127.0.0.1:{port}/url?q=1") url.body
    -- Each Set-Cookie arrives on its own.
    let cookies ← fetch (.usvString s!"http://127.0.0.1:{port}/cookies") none
    let setCookies ← (← cookies.headers).getSetCookie
    expect r "Set-Cookie" (setCookies == #["a=1; Path=/", "b=2"]) s!"{setCookies}"
    -- An empty byte body: no content type added, a zero length.
    let empty ← fetch (.usvString s!"http://127.0.0.1:{port}/empty") none
    let h ← empty.headers
    let (ct, len, bytes) := (← h.get "content-type", ← h.get "content-length", (← empty.arrayBuffer).size)
    expect r "empty body" (ct == none && len == some "0" && bytes == 0) s!"{ct} {len} {bytes}"
    -- HEAD: the GET's status and fields, no body.
    let head ← request s!"http://127.0.0.1:{port}/hello" (method := "HEAD")
    expect r "HEAD" (head.status == 200 && head.body == "" && head.contentType == some "text/plain; charset=utf-8") s!"{head.status} {head.body}"
    -- stop: the server closes, finished settles and Node.serve returns.
    server.stop
    server.finished
    let returned ← IO.wait task
    expect r "Node.serve returns after stop" (match returned with | .ok _ => true | .error _ => false) ""
    expect r "stop closes the server" (← throws (request s!"http://127.0.0.1:{port}/hello")) ""
  runSection r "node.serve signal" do
    -- Aborting the signal stops the server; with no error handler a throw is a 500.
    let ac ← AbortController.new
    let (server, task) ← startNode { fetch := App.handle, port := some 0, hostname := some "127.0.0.1", signal := some (← ac.signal) }
    served r "node.serve default" s!"http://127.0.0.1:{server.port}" 500
    ac.abort
    discard <| IO.wait task
    expect r "signal closes the server" (← throws (request s!"http://127.0.0.1:{server.port}/hello")) ""

/-! `exportDefault`'s typed form (Node only: on Bun and Deno a published handler is served after main) -/

def typedExport (r : Checks) : Async Unit := do
  runSection r "exportDefault" do
    -- A Lean fetch handler becomes a JavaScript function; on Node outside a function
    -- platform, exportDefault records it and returns.
    exportDefault App.handle
    let f ← (← Lasm.JS.global).get "__lasmDefaultExport" Value
    let res ← f.callAwait #[toJS (← Request.new (.usvString "http://x.example/hello"))] Response
    let (status, body) := (← res.status, ← res.text)
    expect r "typed exportDefault" (status == 200 && body == "hello from Lean") s!"{status} {body}"

/-! Node: @hono/node-server's serve({fetch}) (an npm package the program installs) -/

/-- `serve(options, listeningListener)` of @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque nodeServe : Data → Value → IO Value

def node (r : Checks) : Async Unit := do
  runSection r "node.honoNodeServer" do
    let listened ← IO.mkRef (none : Option Nat)
    let onListen ← Function.ofFn fun args => do
      match (args[0]?.getD Data.undefined).field "port" with
      | .number n => listened.set (some n.toUInt64.toNat)
      | _ => pure ()
      return .undefined
    -- The same App.handle, as the fetch function (Request → Promise<Response>).
    let fetch ← Function.ofFn1 App.handle
    let server ← nodeServe (obj [("fetch", toJS fetch), ("port", toJS 0), ("hostname", toJS "127.0.0.1")]) onListen
    let some port ← waitFor listened | throw (IO.userError "not listening")
    served r "node" s!"http://127.0.0.1:{port}" 500
    let closed : IO.Promise Unit ← IO.Promise.new
    let done ← Function.ofFn fun _ => do closed.resolve (); return .undefined
    let _ : Value ← server.callMethod "close" #[toJS done]
    Std.Async.await closed
    expect r "close closes the server" (← throws (request s!"http://127.0.0.1:{port}/hello")) ""

/-! Availability: every generated member exists on the runtime's live objects -/

def availability (r : Checks) (rt : Runtime) (live : Live) : Async Unit := do
  let .object hosts ← jsonParse Surface.json | throw (IO.userError "the surface is not an object")
  let host := if rt == .deno then "Deno" else "Bun"
  let some info := hosts.find? (·.1 == host) |>.map (·.2) | throw (IO.userError s!"{host} is not in the surface")
  let str : Data → String := fun | .string s => s | _ => ""
  let names (d : Data) : Array String := match d with | .array xs => xs.map str | _ => #[]
  let g ← (← Lasm.JS.global).get host Value
  for f in names (info.field "functions") do
    expect r s!"available {host}.{f}" (← reflectHas g f) ""
  let .object ifaces := info.field "interfaces" | throw (IO.userError "no interfaces")
  for (iface, members) in ifaces do
    match (← live.get).find? (·.1 == iface) with
    | none => expect r s!"available {host}.{iface}" false "no live object was seen"
    | some (_, v) =>
      for m in names members do
        expect r s!"available {host}.{iface}.{m}" (← reflectHas v m) ""

/-! Running -/

def checks : Async (String × Nat) := do
  let r ← IO.mkRef ({} : Report)
  let live ← IO.mkRef #[]
  let rt ← runtime
  match rt with
  | .deno => deno r live
  | .bun => bun r live
  | .node => do nodeServe r; typedExport r; node r
  if rt != .node then runSection r "availability" (availability r rt live)
  let s ← r.get
  return ("\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n", s.failed)

def main : IO UInt32 := do
  let (text, failed) ← checks.block
  IO.print text
  return if failed == 0 then 0 else 1
