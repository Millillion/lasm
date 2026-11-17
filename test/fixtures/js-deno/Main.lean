/-
Conformance program for Lasm.JS.Deno, the whole Deno namespace generated from Deno's
TypeScript declarations (scripts/bindings/deno-tier2.mjs). Built with --target deno and run
with `deno run -A --unstable-kv --unstable-cron` by scripts/bindings/test-web.mjs --fixture
js-deno (docs/TESTING.md, "Standard bindings").

Every check is a property of Deno behind the binding, stated in the comment above it; the
oracle is a Lean model (the environment as a map, a directory as the set of names written to
it, Deno KV as a sorted map with versionstamps, bytes and strings round-tripped), or the
declaration the binding quotes. Generated inputs come from a seeded generator, so a failure
is reproducible. The availability section probes every generated function on `Deno` and
every generated member on a live object of each generated interface.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and `summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.JS.Web.Console
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Streams
import Lasm.JS.Web.Html
import Lasm.JS.Web.Websockets
import Lasm.JS.Deno.Fetch
import Lasm.JS.Deno.Fs
import Lasm.JS.Deno.Io
import Lasm.JS.Deno.Kv
import Lasm.JS.Deno.Net
import Lasm.JS.Deno.Permissions
import Lasm.JS.Deno.Runtime
import Lasm.JS.Deno.Serve
import Lasm.JS.Deno.Subprocess
import Lasm.JS.Deno.WebSockets
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
/-- Waits `ms` milliseconds with `setTimeout` (holding no Lean thread). -/
def sleep (ms : Nat) : Async Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  let f ← JSFunction.ofFn fun _ => do p.resolve (); return .undefined
  discard <| setTimeout (.jsFunction f) (some ms)
  Std.Async.await p

/-- Waits until `ref` holds a value, polling every 10 ms for at most `ms`. -/
def waitFor (ref : IO.Ref (Option α)) (ms : Nat := 5000) : Async (Option α) := do
  for _ in [0:ms / 10] do
    if let some a ← ref.get then return some a
    sleep 10
  ref.get

/-- A seeded generator (PCG-style LCG), so every generated case is reproducible. -/
structure Rng where
  state : UInt64

def Rng.next (g : Rng) : Nat × Rng :=
  let s := g.state * 6364136223846793005 + 1442695040888963407
  ((s >>> 33).toNat, ⟨s⟩)
def Rng.below (g : Rng) (n : Nat) : Nat × Rng := let (x, g) := g.next; (x % n, g)

/-- A random Unicode scalar value other than NUL: ASCII, Latin-1, the BMP outside surrogates, or astral. -/
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
/-- A file name of lowercase letters and digits. -/
def Rng.name (g : Rng) : String × Rng := Id.run do
  let (len, g) := g.below 12
  let mut g := g
  let mut s := "f"
  for _ in [0:len] do
    let (x, g') := g.below 36; g := g'
    s := s.push (if x < 10 then Char.ofNat (48 + x) else Char.ofNat (87 + x))
  return (s, g)

/-- Live objects of each generated interface (`Deno.FsFile`, …), for the availability probe. -/
abbrev Live := IO.Ref (Array (String × Value))
def see (live : Live) (name : String) (v : Value) : IO Unit := live.modify (·.push (name, v))

def utf8 (s : String) : ByteArray := s.toUTF8

/-- Every chunk of a byte stream, concatenated (Lasm.JS.Web's reader). -/
partial def readAll (s : ReadableStream) : Async ByteArray := do
  let reader : ReadableStreamDefaultReader := { val := (← s.getReader none) }
  let rec loop (acc : ByteArray) : Async ByteArray := do
    let chunk ← reader.val.callMethodAwait "read" #[] Value
    if ← chunk.get "done" Bool then return acc
    loop (acc ++ (← chunk.get "value" ByteArray))
  loop .empty

def writeAll (w : WritableStream) (b : ByteArray) : Async Unit := do
  let writer ← w.getWriter
  writer.write (toJS b)
  writer.close

/-! The process and the system (Lasm.JS.Deno.Runtime) -/

def runtimeChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "runtime.env" do
    let env ← Deno.env
    see live "Env" env.val
    -- ∀ keys and values, env behaves as a map: get after set, has, delete, toObject.
    let mut g : Rng := ⟨11⟩
    let mut model : Array (String × String) := #[]
    for i in [0:24] do
      let (v, g') := g.string 40; g := g'
      let k := s!"LASM_DENO_T{i}"
      env.set k v
      model := model.push (k, v)
    for (k, v) in model do
      expect r s!"env.get {k}" ((← env.get k) == some v) s!"{← env.get k}"
    for (k, _) in model.toList.take 12 do env.delete k
    for (k, v) in model.toList.drop 12 do expect r s!"env.has {k}" (← env.has k) v
    for (k, _) in model.toList.take 12 do
      expect r s!"env deleted {k}" (!(← env.has k) && (← env.get k).isNone) ""
    let obj ← env.toObject
    expect r "env.toObject" (model.toList.drop 12 |>.all fun (k, v) => obj.entries.contains (k, v)) s!"{obj.entries.size} entries"
  runSection r "runtime.process" do
    -- pid and ppid are positive and distinct; args are the program's (none here).
    let pid ← Deno.pid
    let ppid ← Deno.ppid
    expect r "pid" (pid > 0 && ppid > 0 && pid != ppid) s!"{pid} {ppid}"
    -- args are the program's (Lasm's Deno entry passes the program name first)
    expect r "args" ((← Deno.args).size ≤ 1) s!"{← Deno.args}"
    -- build and version describe this Deno: Linux, x86-64, 2.9.6.
    let b ← Deno.build
    expect r "build" (b.os == .linux && b.arch == .x8664 && b.target.endsWith "linux-gnu") s!"{b.target}"
    let v ← Deno.version
    expect r "version" (v.deno == "2.9.6" && v.v8.length > 0 && v.typescript.length > 0) s!"{v.deno}"
    -- NO_COLOR is set by the test runner.
    expect r "noColor" (← Deno.noColor) ""
    expect r "execPath" ((← Deno.execPath).endsWith "deno") (← Deno.execPath)
    expect r "mainModule" ((← Deno.mainModule).startsWith "file://") (← Deno.mainModule)
    let m ← Deno.memoryUsage
    expect r "memoryUsage" (m.rss > 0 && m.heapTotal > 0 && m.heapUsed > 0 && m.heapUsed ≤ m.heapTotal) s!"{m.rss}"
    let s ← Deno.systemMemoryInfo
    expect r "systemMemoryInfo" (s.total > 0 && s.free ≤ s.total) s!"{s.total}"
    expect r "hostname" ((← Deno.hostname).length > 0) ""
    expect r "loadavg" ((← Deno.loadavg).size == 3) ""
    expect r "osRelease" ((← Deno.osRelease).length > 0) ""
    expect r "osUptime" ((← Deno.osUptime) > 0) ""
    expect r "uid gid" ((← Deno.uid).isSome && (← Deno.gid).isSome) ""
    expect r "exitCode" ((← Deno.exitCode) == 0) s!"{← Deno.exitCode}"
    -- inspect formats values as console.log does.
    expect r "inspect" ((← Deno.inspect (toJS (42 : Nat)) none) == "42" && (← Deno.inspect (.array #[toJS (1 : Nat), toJS (2 : Nat)]) none) == "[ 1, 2 ]") ""
  runSection r "runtime.signals" do
    -- A listener added for SIGUSR2 runs when the process sends itself SIGUSR2; removed, it no longer runs.
    let count ← IO.mkRef 0
    let handler ← Deno.AddSignalListenerHandler.ofSyncFn (count.modify (· + 1))
    Deno.addSignalListener .sigusr2 handler
    Deno.kill (← Deno.pid) (some (.signal .sigusr2))
    for _ in [0:200] do
      if (← count.get) > 0 then break
      sleep 10
    expect r "signal listener" ((← count.get) == 1) s!"{← count.get}"
    Deno.removeSignalListener .sigusr2 { val := handler.val }

/-! The file system (Lasm.JS.Deno.Fs) -/

def fsChecks (r : Checks) (live : Live) : Async Unit := do
  let dir ← Deno.makeTempDir (some { «prefix» := some "lasm-deno-" })
  runSection r "fs.files" do
    -- ∀ s : String, readTextFile (writeTextFile s) = s; ∀ b : bytes, readFile (writeFile b) = b, and stat's size is its length.
    let mut g : Rng := ⟨23⟩
    for i in [0:16] do
      let (s, g') := g.string 300; g := g'
      let p := s!"{dir}/text{i}.txt"
      Deno.writeTextFile (.domString p) (.domString s) none
      expect r s!"text[{i}]" ((← Deno.readTextFile (.domString p) none) == s && (← Deno.readTextFileSync (.domString p)) == s) ""
      expect r s!"text size[{i}]" ((← Deno.stat (.domString p)).size == (utf8 s).size) ""
    for i in [0:16] do
      let (b, g') := g.bytes 2000; g := g'
      let p := s!"{dir}/bytes{i}.bin"
      Deno.writeFile (.domString p) (.uint8Array b) none
      expect r s!"bytes[{i}]" ((← Deno.readFile (.domString p) none) == b && (← Deno.readFileSync (.domString p)) == b) s!"{b.size}"
    -- append adds to the end
    let p := s!"{dir}/append.txt"
    Deno.writeTextFileSync (.domString p) "ab" none
    Deno.writeTextFile (.domString p) (.domString "cd") (some { append := some true })
    expect r "append" ((← Deno.readTextFile (.domString p) none) == "abcd") ""
    -- truncate to a length keeps that prefix
    Deno.truncate p (some 3)
    expect r "truncate" ((← Deno.readTextFile (.domString p) none) == "abc") ""
    -- createNew fails when the file exists
    expect r "createNew" (← throws (Deno.writeTextFile (.domString p) (.domString "x") (some { createNew := some true }))) ""
    -- copy, rename, remove
    Deno.copyFile (.domString p) (.domString s!"{dir}/copy.txt")
    expect r "copyFile" ((← Deno.readTextFile (.domString s!"{dir}/copy.txt") none) == "abc") ""
    Deno.rename (.domString s!"{dir}/copy.txt") (.domString s!"{dir}/moved.txt")
    expect r "rename" ((← throws (Deno.stat (.domString s!"{dir}/copy.txt"))) && (← Deno.stat (.domString s!"{dir}/moved.txt")).isFile) ""
    Deno.remove (.domString s!"{dir}/moved.txt") none
    expect r "remove" (← throws (Deno.stat (.domString s!"{dir}/moved.txt"))) ""
    -- symlink, readLink, lstat, realPath
    Deno.symlink (.domString p) (.domString s!"{dir}/link") none
    expect r "readLink" ((← Deno.readLink (.domString s!"{dir}/link")) == p) ""
    expect r "lstat" ((← Deno.lstat (.domString s!"{dir}/link")).isSymlink && !(← Deno.stat (.domString s!"{dir}/link")).isSymlink) ""
    expect r "realPath" ((← Deno.realPath (.domString s!"{dir}/link")) == (← Deno.realPath (.domString p))) ""
    -- chmod sets the permission bits stat reports
    Deno.chmod (.domString p) 0o600
    expect r "chmod" ((← Deno.stat (.domString p)).mode.map (fun m => m.toUInt64.toNat % 0o1000) == some 0o600) s!"{(← Deno.stat (.domString p)).mode}"
    -- utime sets the modification time (seconds since the epoch)
    Deno.utime (.domString p) (toJS (1000000 : Float)) (toJS (2000000 : Float))
    expect r "utime" ((← Deno.stat (.domString p)).mtime.isSome) ""
  runSection r "fs.dirs" do
    -- readDir lists exactly the names written (the model: a set of names), and their kinds.
    let sub := s!"{dir}/tree/a/b"
    Deno.mkdir (.domString sub) (some { recursive := some true })
    let mut g : Rng := ⟨31⟩
    let mut names : Array String := #[]
    for _ in [0:20] do
      let (n, g') := g.name; g := g'
      if !names.contains n then
        names := names.push n
        Deno.writeTextFileSync (.domString s!"{sub}/{n}") n none
    let it ← Deno.readDir (.domString sub)
    see live "DirEntryAsyncIterable" it.val
    let entries ← it.values
    let listed := entries.map (·.name)
    expect r "readDir" (listed.size == names.size && names.all listed.contains && entries.all (·.isFile)) s!"{listed.size} of {names.size}"
    -- the iterator reads one entry at a time, then none
    let it2 ← Deno.readDir (.domString s!"{dir}/tree/a")
    let i ← it2.iterator
    let first ← i.next
    let second ← i.next
    expect r "readDir iterator" (first.map (fun e => e.name == "b" && e.isDirectory) == some true && second.isNone) ""
    -- remove with recursive removes the tree
    Deno.remove (.domString s!"{dir}/tree") (some { recursive := some true })
    expect r "remove recursive" (← throws (Deno.stat (.domString s!"{dir}/tree"))) ""
    -- makeTempFile makes an empty file
    let tf ← Deno.makeTempFile (some { dir := some dir, suffix := some ".tmp" })
    expect r "makeTempFile" (tf.endsWith ".tmp" && (← Deno.stat (.domString tf)).size == 0) tf
  runSection r "fs.FsFile" do
    -- open/create, write through the writable stream, seek and read back through the readable stream.
    let p := s!"{dir}/file.bin"
    let f ← Deno.create (.domString p)
    see live "FsFile" f.val
    let mut g : Rng := ⟨41⟩
    let (b, _) := g.bytes 5000
    writeAll (← f.writable) b
    let f2 ← Deno.«open» (.domString p) (some { read := some true, write := some true })
    expect r "FsFile.stat" ((← f2.stat).size == b.size) ""
    let pos ← f2.seek (.double 10) 0
    expect r "FsFile.seek" (pos == 10) s!"{pos}"
    let rest ← readAll (← f2.readable)
    expect r "FsFile.readable" (rest == b.extract 10 b.size) s!"{rest.size}"
    let f3 ← Deno.«open» (.domString p) (some { read := some true, write := some true })
    expect r "FsFile.isTerminal" (!(← f3.isTerminal)) ""
    f3.lock (some true)
    f3.unlock
    expect r "FsFile.tryLock" (← f3.tryLock (some false)) ""
    f3.unlock
    f3.truncate (some 7)
    f3.sync
    f3.syncData
    expect r "FsFile.truncate" ((← f3.stat).size == 7) ""
    f3.close
  runSection r "fs.watchFs" do
    -- a write in a watched directory is an event naming the file
    let w ← Deno.watchFs (.domString dir) none
    see live "FsWatcher" w.val
    let i ← w.iterator
    let got ← IO.mkRef (none : Option Deno.FsEvent)
    Std.Async.background do
      if let some e ← i.next then got.set (some e)
    sleep 100
    Deno.writeTextFileSync (.domString s!"{dir}/watched.txt") "x" none
    let e ← waitFor got
    expect r "watchFs" (e.map (fun e => e.paths.any (·.endsWith "watched.txt")) == some true) ""
    w.close
  Deno.remove (.domString dir) (some { recursive := some true })

/-! Subprocesses (Lasm.JS.Deno.Subprocess) -/

def subprocessChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "subprocess" do
    -- ∀ s, `printf %s s` writes s to stdout and exits 0.
    let mut g : Rng := ⟨53⟩
    for i in [0:8] do
      let (s, g') := g.string 100; g := g'
      let c ← Deno.Command.new (.domString "printf") (some { args := some #["%s", s], stdout := some .piped, stderr := some .piped })
      see live "Command" c.val
      let o ← c.output
      expect r s!"output[{i}]" (o.success && o.code == 0 && o.stdout == utf8 s && o.stderr.size == 0) s!"{o.code}"
    -- an exit code is reported, not thrown
    let o ← (← Deno.Command.new (.domString "sh") (some { args := some #["-c", "exit 3"] })).output
    expect r "exit code" (!o.success && o.code == 3) s!"{o.code}"
    -- env and cwd reach the child
    let o ← (← Deno.Command.new (.domString "sh") (some { args := some #["-c", "printf %s \"$LASM_X\"; pwd"], env := some ⟨#[("LASM_X", "x1")]⟩, cwd := some (.domString "/") })).output
    expect r "env and cwd" (String.fromUTF8! o.stdout == "x1/\n") (String.fromUTF8! o.stdout)
    -- spawn with piped stdin: cat echoes what is written
    let child ← (← Deno.Command.new (.domString "cat") (some { stdin := some .piped, stdout := some .piped, stderr := some .piped })).spawn
    see live "ChildProcess" child.val
    let (b, _) := g.bytes 3000
    writeAll (← child.stdin) b
    let out ← child.output
    expect r "spawn cat" (out.success && out.stdout == b) s!"{out.stdout.size}"
    -- a killed child reports the signal
    let sleeper ← (← Deno.Command.new (.domString "sleep") (some { args := some #["30"] })).spawn
    expect r "child pid" ((← sleeper.pid) > 0) ""
    sleeper.kill (some (.signal .sigterm))
    let st ← sleeper.status
    expect r "kill" (!st.success && st.signal == some .sigterm) s!"{st.code}"
    -- stdout as a SubprocessReadableStream: text()
    let echo ← (← Deno.Command.new (.domString "printf") (some { args := some #["hi"], stdout := some .piped })).spawn
    let so ← echo.stdout
    see live "SubprocessReadableStream" so.val
    expect r "stdout.text" ((← so.text) == "hi") ""
    discard echo.status

/-! Networking (Lasm.JS.Deno.Net), WebSockets and HTTP clients -/

def netChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "net.tcp" do
    -- ∀ bytes b: what the server writes to an accepted connection, the client reads, in order.
    let l ← Deno.listen { hostname := some "127.0.0.1", port := some 0 }
    see live "TcpListener" l.val
    let addr ← l.addr
    expect r "listen addr" (addr.transport == .tcp && addr.hostname == "127.0.0.1" && addr.port > 0) s!"{addr.port}"
    let mut g : Rng := ⟨61⟩
    let (b, _) := g.bytes 20000
    let accepted ← (l.accept).asTask
    let c ← Deno.connect { port := addr.port, hostname := some "127.0.0.1" }
    see live "TcpConn" c.val
    see live "Conn" c.val
    c.setNoDelay (some true); c.setKeepAlive (some true)
    let server ← Std.Async.await accepted
    expect r "remoteAddr" ((← c.remoteAddr).port == addr.port && (← server.localAddr).port == addr.port) ""
    writeAll (← server.writable) b
    let back ← readAll (← c.readable)
    expect r "tcp" (back == b) s!"{back.size} of {b.size}"
    l.close
  runSection r "net.tls" do
    -- over TLS (the test CA trusted): what the server writes, the client reads; the handshake completes.
    let l ← Deno.listenTls { hostname := some "127.0.0.1", port := some 0, cert := Tls.cert, key := Tls.key }
    see live "TlsListener" l.val
    let port := (← l.addr).port
    let accepted ← (l.accept).asTask
    let c ← Deno.connectTls { port := port, hostname := some "localhost", caCerts := some #[Tls.ca] }
    see live "TlsConn" c.val
    discard <| c.handshake
    let server ← Std.Async.await accepted
    writeAll (← server.writable) (utf8 "over tls")
    expect r "tls" ((← readAll (← c.readable)) == utf8 "over tls") ""
    l.close
  runSection r "net.unix" do
    let dir ← Deno.makeTempDir none
    let path := s!"{dir}/s.sock"
    let l ← Deno.listenUnix { path, transport := .unix }
    see live "UnixListener" l.val
    expect r "unix addr" ((← l.addr).path == path) ""
    Std.Async.background do
      let c ← l.accept
      writeAll (← c.writable) (utf8 "unix hello")
    let c ← Deno.connectUnix { path, transport := .unix }
    see live "UnixConn" c.val
    see live "ConnUnixAddr" c.val
    let got ← readAll (← c.readable)
    expect r "unix" (got == utf8 "unix hello") ""
    l.close
    Deno.remove (.domString dir) (some { recursive := some true })
  runSection r "net.interfaces" do
    -- the loopback interface is listed
    let ifs ← Deno.networkInterfaces
    expect r "networkInterfaces" (ifs.any (·.address == "127.0.0.1")) s!"{ifs.size}"
    -- a UDP socket listens on the port it reports (Deno.listenDatagram, --unstable-net)
    let d ← Deno.listenDatagram { transport := .udp, hostname := some "127.0.0.1", port := some 0 }
    see live "DatagramConn" d.val
    d.close
  runSection r "websockets" do
    -- A WebSocket server (Deno.serve + Deno.upgradeWebSocket) echoes every message; Lasm.JS.Web's WebSocket is the client.
    let handler ← Deno.ServeHandler.ofFn fun req _ => do
      let up ← Deno.upgradeWebSocket req none
      let socket : WebSocket := up.socket
      let onMessage ← Function.ofSyncFn fun args => do
        match (args[0]?.getD .undefined : Data) with
        | .ref e _ => do let d ← e.get "data" Data; let _ : Value ← socket.val.callMethod "send" #[d]; return .undefined
        | _ => return .undefined
      socket.val.set "onmessage" (toJS onMessage)
      return up.response
    let server ← Deno.serveWithOptions { port := some 0, hostname := some "127.0.0.1" } handler
    let port := (← server.addr).port
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
    let mut g : Rng := ⟨71⟩
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
    server.shutdown
  runSection r "fetch.httpClient" do
    let client ← Deno.createHttpClient {}
    see live "HttpClient" client.val
    client.close
    expect r "createHttpClient" true ""

/-! Permissions (Lasm.JS.Deno.Permissions) -/

def permissionChecks (r : Checks) (live : Live) : Async Unit := do
  runSection r "permissions" do
    -- under -A every permission is granted
    let ps ← Deno.permissions
    see live "Permissions" ps.val
    let st ← ps.query { name := .read, path := some (.domString "/tmp") }
    see live "PermissionStatus" st.val
    expect r "query read" ((← st.state) == .granted) ""
    expect r "querySync env" ((← (← ps.querySync { name := .env, «variable» := some "HOME" }).state) == .granted) ""
    -- stdin, stdout and stderr exist and are not terminals under the runner
    let i ← Deno.stdin; let o ← Deno.stdout; let e ← Deno.stderr
    see live "Stdin" i.val; see live "Stdout" o.val; see live "Stderr" e.val
    expect r "stdio" (!(← o.isTerminal) && !(← e.isTerminal)) ""

/-! Deno KV (Lasm.JS.Deno.Kv), against a sorted-map model -/

def key (parts : List Deno.KvKeyPart) : Array Deno.KvKeyPart := parts.toArray

/-- A KV value as the Lean model sees it: a string, a number, or null (none). -/
def asString : Data → Option String | .string s => some s | _ => none
def asNumber : Data → Option Float | .number n => some n | _ => none
def isNull : Data → Bool | .null => true | .undefined => true | _ => false

def kvChecks (r : Checks) (live : Live) : Async Unit := do
  let dir ← Deno.makeTempDir none
  let kv ← Deno.openKv (some s!"{dir}/kv.sqlite")
  see live "Kv" kv.val
  runSection r "kv.getSet" do
    -- ∀ string values v, get (set k v) = v with a versionstamp; a missing key reads null.
    let mut g : Rng := ⟨83⟩
    let mut model : Array (Nat × String) := #[]
    for i in [0:20] do
      let (v, g') := g.string 60; g := g'
      let res ← kv.set (key ["items", (i.toFloat : Float)]) (toJS v) none
      expect r s!"set[{i}]" (res.ok && res.versionstamp.length > 0) ""
      model := model.push (i, v)
    for (i, v) in model do
      let e ← kv.get (key ["items", (i.toFloat : Float)]) none
      expect r s!"get[{i}]" (asString e.value == some v && e.versionstamp.isSome) ""
    let missing ← kv.get (key ["items", "none"]) none
    expect r "get missing" (isNull missing.value && missing.versionstamp.isNone) ""
    -- getMany reads several keys in order
    let many ← kv.getMany #[key ["items", (3 : Float)], key ["items", (1 : Float)]] none
    expect r "getMany" (many.map (asString ·.value) == #[some model[3]!.2, some model[1]!.2]) ""
    -- list by prefix gives every entry, ordered by key (the model's order); limit and reverse.
    let it ← kv.list { «prefix» := some (key ["items"]) } none
    see live "KvListIterator" it.val
    let all ← it.values
    expect r "list" (all.map (asString ·.value) == model.map (some ·.2)) s!"{all.size}"
    let rev ← (← kv.list { «prefix» := some (key ["items"]) } (some { reverse := some true, limit := some 5 })).values
    expect r "list reverse limit" (rev.map (asString ·.value) == (model.reverse.extract 0 5).map (some ·.2)) s!"{rev.size}"
    -- a range [start, end)
    let range ← (← kv.list { start := some (key ["items", (5 : Float)]), «end» := some (key ["items", (8 : Float)]) } none).values
    expect r "list range" (range.map (asString ·.value) == (model.extract 5 8).map (some ·.2)) s!"{range.size}"
    -- delete removes a key
    kv.delete (key ["items", (0 : Float)])
    expect r "delete" ((← kv.get (key ["items", (0 : Float)]) none).versionstamp.isNone) ""
    -- key parts of every kind round-trip
    let k := key [(utf8 "b" : ByteArray), "s", (1.5 : Float), (2 : Int), true]
    discard <| kv.set k (toJS "kinds") none
    let back ← kv.get k none
    expect r "key parts" (asString back.value == some "kinds" && back.key.size == 5) ""
  runSection r "kv.atomic" do
    -- check on the current versionstamp commits; on a stale one it fails and changes nothing.
    let k := key ["counter"]
    discard <| kv.set k (toJS (1 : Nat)) none
    let e ← kv.get k none
    let op ← kv.atomic
    see live "AtomicOperation" op.val
    let ok ← (← (← op.check #[{ key := k, versionstamp := e.versionstamp }]).set k (toJS (2 : Nat)) none).commit
    expect r "atomic commit" ok.ok ""
    let stale ← (← (← (← kv.atomic).check #[{ key := k, versionstamp := e.versionstamp }]).set k (toJS (3 : Nat)) none).commit
    expect r "atomic stale check" (!stale.ok && asNumber (← kv.get k none).value == some 2) ""
    -- a check that the key is absent (null versionstamp) fails for a present key
    let absent ← (← (← kv.atomic).check #[{ key := k, versionstamp := none }]).commit
    expect r "atomic absent check" (!absent.ok) ""
    -- sum of KvU64s: ∀ n, the counter is the sum of what was added (mod 2^64)
    let ck := key ["sum"]
    let mut g : Rng := ⟨97⟩
    let mut total : Nat := 0
    for _ in [0:10] do
      let (n, g') := g.below 1000000; g := g'
      total := total + n
      discard <| (← (← kv.atomic).sum ck n).commit
    let s ← kv.get ck none
    let u : Deno.KvU64 := { val := ← (match s.value with | .ref v _ => pure v | _ => throw (IO.userError "not a KvU64")) }
    see live "KvU64" u.val
    expect r "atomic sum" ((← u.value) == total) s!"{← u.value} {total}"
    -- mutate with a list of mutations
    discard <| (← (← kv.atomic).mutate #[{ key := key ["m", "a"], type := .set, value := toJS "x" }, { key := key ["m", "b"], type := .set, value := toJS "y" }]).commit
    let ms ← (← kv.list { «prefix» := some (key ["m"]) } none).values
    expect r "atomic mutate" (ms.map (asString ·.value) == #[some "x", some "y"]) ""
    -- KvU64 holds a 64-bit unsigned value
    let big ← Deno.KvU64.new 18446744073709551615
    expect r "KvU64" ((← big.value) == 18446744073709551615) ""
  runSection r "kv.queue" do
    -- a value enqueued is delivered to the listener
    let got ← IO.mkRef (none : Option Data)
    let handler ← Deno.KvListenQueueHandler.ofFn fun v => got.set (some v)
    Std.Async.background (kv.listenQueue handler)
    discard <| kv.enqueue (toJS "queued") none
    let v ← waitFor got 10000
    expect r "enqueue listenQueue" ((v.bind asString) == some "queued") s!"{v.isSome}"
  kv.close
  Deno.remove (.domString dir) (some { recursive := some true })

/-! Availability: every generated member exists on Deno and on live objects -/

def availability (r : Checks) (live : Live) : Async Unit := do
  let .object hosts ← jsonParse Surface.json | throw (IO.userError "the surface is not an object")
  let some info := hosts.find? (·.1 == "Deno") |>.map (·.2) | throw (IO.userError "Deno is not in the surface")
  let str : Data → String := fun | .string s => s | _ => ""
  let names (d : Data) : Array String := match d with | .array xs => xs.map str | _ => #[]
  let g ← (← Lasm.JS.global).get "Deno" Value
  for f in names (info.field "functions") do
    expect r s!"available Deno.{f}" (← hasPath g f) ""
  let .object ifaces := info.field "interfaces" | throw (IO.userError "no interfaces")
  for (iface, members) in ifaces do
    match (← live.get).find? (·.1 == iface) with
    | none =>
      -- Deno.serve's objects are probed live by test/fixtures/js-serve.
      -- VSOCK needs a VSOCK device and QUIC a QUIC peer, which the CI runner has neither of.
      unless ["HttpServer", "ServeHandlerInfo", "HttpServerUnixAddr", "ServeHandlerInfoUnixAddr", "HttpServerVsockAddr", "ServeHandlerInfoVsockAddr",
          "ConnVsockAddr", "VsockConn", "VsockListener", "QuicReceiveStream", "QuicSendStream", "QuicIncoming", "QuicListener", "QuicEndpoint",
          "QuicConn"].contains iface do
        expect r s!"available Deno.{iface}" false "no live object was seen"
    | some (_, v) =>
      for m in names members do
        expect r s!"available Deno.{iface}.{m}" (← reflectHas v m) ""

/-! Running -/

def checks : Async (String × Nat) := do
  let r ← IO.mkRef ({} : Report)
  let live ← IO.mkRef #[]
  runtimeChecks r live
  fsChecks r live
  subprocessChecks r live
  netChecks r live
  permissionChecks r live
  kvChecks r live
  runSection r "availability" (availability r live)
  let s ← r.get
  return ("\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n", s.failed)

def main : IO UInt32 := do
  let (text, failed) ← checks.block
  IO.print text
  -- Deno.cron and listenQueue keep the event loop alive: exit explicitly.
  Deno.exit (some (if failed == 0 then 0 else 1))
  return if failed == 0 then 0 else 1
