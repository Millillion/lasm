/-
Conformance program for Lasm.JS.Bun, the whole Bun namespace and bun:sqlite generated from
Bun's TypeScript declarations (scripts/bindings/bun-tier2.mjs). Built with --target bun and run
with Bun by scripts/bindings/test-web.mjs --fixture js-bun (docs/TESTING.md, "Standard bindings").

Every check is a property of Bun behind the binding, stated in the comment above it; the oracle
is a Lean model (bytes and strings round-tripped, SQLite rows as a list, HTML escaping, a
published SHA-256 vector), or the declaration the binding quotes. Generated inputs come from a
seeded generator, so a failure is reproducible. The availability section probes every generated
function on `Bun` and every generated member on a live object of each generated interface.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and `summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Bun.Core
import Lasm.JS.Bun.Redis
import Lasm.JS.Bun.S3
import Lasm.JS.Bun.Serve
import Lasm.JS.Bun.Shell
import Lasm.JS.Bun.Sql
import Lasm.JS.Bun.Sqlite
import Lasm.JS.Web.WebSocket
import Surface
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

def runSection (r : Checks) (name : String) (body : Async Unit) : Async Unit := do
  let before ← r.get
  try body catch e => expect r s!"{name} (section)" false s!"threw {e}"
  let after ← r.get
  r.modify fun s => { s with lines := s.lines.push s!"section {name}: {after.passed - before.passed} passed, {after.failed - before.failed} failed" }

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool
@[js "globalThis" "JSON.parse"] opaque jsonParse : String → IO Data

/-- Whether `g` has the member at a dotted path (`dns.lookup`). -/
def hasPath (g : Value) (path : String) : IO Bool := do
  let parts := path.splitOn "."
  let mut o := g
  for p in parts.dropLast do
    unless ← reflectHas o p do return false
    o ← o.get p Value
  reflectHas o (parts.getLastD "")

def sleep (ms : Nat) : Async Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  let f ← JSFunction.ofFn fun _ => do p.resolve (); return .undefined
  discard <| setTimeout (.jsFunction f) (some ms)
  Std.Async.await p

def waitFor (ref : IO.Ref (Option α)) (ms : Nat := 5000) : Async (Option α) := do
  for _ in [0:ms / 10] do
    if let some a ← ref.get then return some a
    sleep 10
  ref.get

structure Rng where
  state : UInt64
def Rng.next (g : Rng) : Nat × Rng :=
  let s := g.state * 6364136223846793005 + 1442695040888963407
  ((s >>> 33).toNat, ⟨s⟩)
def Rng.below (g : Rng) (n : Nat) : Nat × Rng := let (x, g) := g.next; (x % n, g)
def Rng.char (g : Rng) : Char × Rng := Id.run do
  let (kind, g) := g.below 4
  let (x, g) := g.next
  let n := match kind with
    | 0 => 32 + x % 95
    | 1 => 160 + x % 96
    | 2 => 256 + x % (0xD800 - 256)
    | _ => 0x10000 + x % 0x10000
  return (Char.ofNat n, g)
def Rng.string (g : Rng) (maxLen : Nat) : String × Rng := Id.run do
  let (len, g) := g.below (maxLen + 1)
  let mut g := g
  let mut s := ""
  for _ in [0:len] do
    let (c, g') := g.char; g := g'; s := s.push c
  return (s, g)
def Rng.bytes (g : Rng) (maxLen : Nat) : ByteArray × Rng := Id.run do
  let (len, g) := g.below (maxLen + 1)
  let mut g := g
  let mut b := ByteArray.empty
  for _ in [0:len] do
    let (x, g') := g.below 256; g := g'; b := b.push x.toUInt8
  return (b, g)

abbrev Live := IO.Ref (Array (String × Value))
def see (live : Live) (name : String) (v : Value) : IO Unit := live.modify (·.push (name, v))

/-- The HTML escaping Bun.escapeHTML documents: & < > " ' as entities. -/
def escapeModel (s : String) : String :=
  s.foldl (fun acc c => acc ++ match c with
    | '&' => "&amp;" | '<' => "&lt;" | '>' => "&gt;" | '"' => "&quot;" | '\'' => "&#x27;" | c => c.toString) ""

def hex (b : ByteArray) : String :=
  b.foldl (fun acc x => acc ++ (if x < 16 then "0" else "") ++ String.ofList (Nat.toDigits 16 x.toNat)) ""

/-! Utilities, files and processes (Lasm.JS.Bun.Core) -/

def coreChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "core.utilities" do
    expect r "version" ((← Bun.version) == "1.4.4") (← Bun.version)
    expect r "revision" ((← Bun.revision).length > 0) ""
    expect r "env" ((← Bun.env).entries.any (·.1 == "PATH")) ""
    -- ∀ s, escapeHTML s is the documented escaping
    let mut g : Rng := ⟨5⟩
    for i in [0:20] do
      let (s, g') := g.string 60; g := g'
      let s := s ++ (if i % 2 == 0 then "<a href=\"x\">&'</a>" else "")
      expect r s!"escapeHTML[{i}]" ((← Bun.escapeHTML (toJS s)) == escapeModel s) s
    -- ∀ bytes b, gunzip (gzip b) = b
    for i in [0:10] do
      let (b, g') := g.bytes 5000; g := g'
      let z ← Bun.gzipSync (.uint8Array b) none
      expect r s!"gzip[{i}]" ((← Bun.gunzipSync (.uint8Array z) none) == b) s!"{b.size}"
    -- SHA-256 of "abc" (FIPS 180-2's vector)
    let h ← Bun.CryptoHasher.new .sha256 none
    see live "CryptoHasher" h.val
    discard <| h.update (.domString "abc")
    expect r "CryptoHasher sha256" (hex (← h.digest0) == "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad") ""
    -- password hashes verify their password and no other
    let pw ← Bun.password
    see live "Password" pw.val
    let stored ← pw.hash (.domString "correct horse") none
    expect r "password.verify" ((← pw.verify (.domString "correct horse") (.domString stored) none) && !(← pw.verify (.domString "wrong") (.domString stored) none)) ""
    -- semver.order orders versions
    expect r "semver.order" ((← Bun.semver.order (.domString "1.2.3") (.domString "1.10.0")) == -1) ""
    expect r "stringWidth" ((← Bun.stringWidth "abc" none) == 3) ""
  runSection r "core.files" do
    -- ∀ bytes b, Bun.write then Bun.file's bytes are b
    let dir := "/tmp/lasm-bun-conformance"
    discard <| Bun.spawnSync { cmd := #["mkdir", "-p", dir] }
    let mut g : Rng := ⟨17⟩
    for i in [0:10] do
      let (b, g') := g.bytes 3000; g := g'
      let p := s!"{dir}/f{i}.bin"
      let n ← Bun.write (.domString p) (.uint8Array b) none
      let f ← Bun.file (.domString p) none
      see live "BunFile" f.val
      let back ← ({ val := f.val } : Blob).bytes
      expect r s!"write/file[{i}]" (back == b && n == b.size.toFloat && (← f.exists)) s!"{back.size} {n}"
    discard <| Bun.spawnSync { cmd := #["rm", "-rf", dir] }
  runSection r "core.processes" do
    -- ∀ s, `printf %s s` writes s
    let mut g : Rng := ⟨29⟩
    for i in [0:6] do
      let (s, g') := g.string 80; g := g'
      let out ← Bun.spawnSync { cmd := #["printf", "%s", s] }
      expect r s!"spawnSync[{i}]" (out.success && out.exitCode == 0 && out.stdout == some s.toUTF8) ""
    let child ← Bun.spawn { cmd := #["sh", "-c", "exit 4"] }
    see live "Subprocess" child.val
    expect r "spawn exit code" ((← child.exited) == 4) ""
  runSection r "core.glob" do
    let g ← Bun.Glob.new "*.json"
    see live "Glob" g.val
    expect r "glob.match" ((← g.match "package.json") && !(← g.match "Main.lean")) ""
    let it ← g.scan (some (.domString "."))
    see live "DOMStringAsyncIterable" it.val
    let found ← it.values
    expect r "glob.scan" (found.all (·.endsWith ".json")) s!"{found}"

/-! bun:sqlite (Lasm.JS.Bun.Sqlite), against a list of rows -/

def sqliteChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "sqlite" do
    let db ← Bun.Database.new (some ":memory:") none
    see live "Database" db.val
    discard <| db.run "create table t (id integer primary key, name text)"
    let mut g : Rng := ⟨41⟩
    let mut model : Array String := #[]
    let ins ← db.query "insert into t (name) values (?)"
    see live "Statement" ins.val
    for _ in [0:25] do
      let (s, g') := g.string 40; g := g'
      discard <| ins.run #[#[toJS s]]
      model := model.push s
    let rows ← (← db.query "select name from t order by id").all
    let names := rows.map fun d => match d.field "name" with | .string s => s | _ => ""
    expect r "rows" (names == model) s!"{names.size} of {model.size}"
    let one ← (← db.query "select count(*) as n from t").all
    expect r "count" (one.map (fun d => match d.field "n" with | .number n => n | _ => -1) == #[model.size.toFloat]) ""
    db.close none

/-! Bun.serve with WebSockets, and TCP sockets -/

def serveChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "serve.websocket" do
    -- A WebSocket server (Bun.serve's websocket handlers, server.upgrade) echoes every message.
    let fetch ← Bun.ServeOptionsFetch.ofFn fun req server => do
      if ← server.upgrade req none then return (← Response.new none none)
      Response.new (some (.usvString "not a websocket")) (some { status := some 400 })
    let message ← Bun.WebSocketHandlerMessage.ofFn fun ws msg => do
      see live "ServerWebSocket" ws.val
      discard <| ws.send (match msg with | .domString s => .domString s | .uint8Array b => .uint8Array b) none
    let server ← Bun.serve { fetch := some fetch, port := some (.unsignedShort 0), hostname := some "127.0.0.1", websocket := some { message := some message } }
    see live "Server" server.val
    let some port ← server.port | throw (IO.userError "no port")
    let ws ← WebSocket.new s!"ws://127.0.0.1:{port}/"
    let opened ← IO.mkRef (none : Option Unit)
    let got ← IO.mkRef (#[] : Array String)
    let onOpen ← Function.ofSyncFn fun _ => do opened.set (some ()); return .undefined
    let onMsg ← Function.ofSyncFn fun args => do
      match (args[0]? : Option Data) with
      | some (.ref e _) => do got.modify (·.push (← e.get "data" String)); return .undefined
      | _ => return .undefined
    ws.val.set "onopen" (toJS onOpen)
    ws.val.set "onmessage" (toJS onMsg)
    discard <| waitFor opened
    let mut g : Rng := ⟨53⟩
    let mut sent : Array String := #[]
    for _ in [0:10] do
      let (s, g') := g.string 50; g := g'
      sent := sent.push s
      let _ : Value ← ws.val.callMethod "send" #[toJS s]
    for _ in [0:300] do
      if (← got.get).size ≥ sent.size then break
      sleep 10
    expect r "websocket echo" ((← got.get) == sent) s!"{(← got.get).size} of {sent.size}"
    let _ : Value ← ws.val.callMethod "close" #[]
    server.stop (some true)
  runSection r "tcp" do
    -- Bun.listen echoes what Bun.connect writes.
    let echo ← Bun.SocketHandlerData.ofSyncFn fun s data => do discard <| s.write (.uint8Array data) none
    let l ← Bun.listen { hostname := "127.0.0.1", port := 0, socket := { data := some echo } }
    see live "TCPSocketListener" l.val
    let port ← l.port
    let got ← IO.mkRef ByteArray.empty
    let onData ← Bun.SocketHandlerData.ofSyncFn fun _ data => got.modify (· ++ data)
    let c ← Bun.connect { hostname := "127.0.0.1", port, socket := { data := some onData } }
    see live "Socket" c.val
    let mut g : Rng := ⟨61⟩
    let (b, _) := g.bytes 4000
    discard <| c.write (.uint8Array b) none
    for _ in [0:300] do
      if (← got.get).size ≥ b.size then break
      sleep 10
    expect r "tcp echo" ((← got.get) == b) s!"{(← got.get).size} of {b.size}"
    c.close
    l.stop (some true)

/-! Availability -/

def availability (r : Checks) (live : Live) : Async Unit := do
  let .object hosts ← jsonParse Surface.json | throw (IO.userError "the surface is not an object")
  let some info := hosts.find? (·.1 == "Bun") |>.map (·.2) | throw (IO.userError "Bun is not in the surface")
  let str : Data → String := fun | .string s => s | _ => ""
  let names (d : Data) : Array String := match d with | .array xs => xs.map str | _ => #[]
  let g ← (← Lasm.JS.global).get "Bun" Value
  for f in names (info.field "functions") do
    expect r s!"available Bun.{f}" (← hasPath g f) ""
  let .object ifaces := info.field "interfaces" | throw (IO.userError "no interfaces")
  for (iface, members) in ifaces do
    match (← live.get).find? (·.1 == iface) with
    | none => pure ()  -- interfaces without a live object here are reported, not failed
    | some (_, v) =>
      for m in names members do
        expect r s!"available Bun.{iface}.{m}" (← reflectHas v m) ""

def checks : Async (String × Nat) := do
  let r ← IO.mkRef ({} : Report)
  let live ← IO.mkRef #[]
  coreChecks r live
  sqliteChecks r live
  serveChecks r live
  runSection r "availability" (availability r live)
  let s ← r.get
  return ("\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n", s.failed)

def main : IO UInt32 := do
  let (text, failed) ← checks.block
  IO.print text
  return if failed == 0 then 0 else 1
