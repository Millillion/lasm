/-
Conformance program for Lasm.JS.Cloudflare (Cloudflare Workers' runtime APIs, generated
from @cloudflare/workers-types). Built with `lasm build Main.lean --target workers` and
served by `wrangler dev` with local emulation only (workerd, and Miniflare's local KV,
D1, R2, Durable Objects and Queues; wrangler.toml, index.mjs) by
scripts/bindings/test-web.mjs --fixture js-cloudflare (docs/TESTING.md, "Standard
bindings"). No Cloudflare account is used.

The runner first triggers the scheduled handler (`/__scheduled`, wrangler dev
--test-scheduled), then requests `/`, which runs every section and answers the report.
The scheduled and queue handlers and the Durable Object record what they saw in KV (or
answer it), and the sections check it.

Every check is a property of the runtime behind the binding, stated in the comment above
it: a round trip through a store returns what was written (the oracle is the generated
input), D1 answers SQL as SQLite does, R2's ranges are slices of the object, a queue
delivers every message sent, a TCP echo returns the bytes written. Generated inputs come
from a seeded generator, so a failure is reproducible. The availability section probes
every generated member on the live objects.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and
`summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Cloudflare
import Surface
open Lasm.JS Lasm.JS.Web Lasm.JS.Cloudflare

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

/-- Checks recorded elsewhere (a handler, the Durable Object) as lines `pass <name>` and
`FAIL <name>: <detail>`, counted here. -/
def merge (r : Checks) (text : String) : IO Unit := do
  for line in text.splitOn "\n" do
    let rest := String.join ((line.toList.drop 5).map toString)
    if line.startsWith "pass " then expect r rest true
    else if line.startsWith "FAIL " then
      match rest.splitOn ": " with
      | name :: detail => expect r name false (": ".intercalate detail)
      | [] => expect r rest false

/-- The same lines from a local report (for handlers that store them). -/
def lineOf (name : String) (ok : Bool) (detail : String := "") : String :=
  if ok then s!"pass {name}" else s!"FAIL {name}: {detail}"

/-- A seeded generator (PCG-style LCG), so every generated case is reproducible. -/
structure Rng where
  state : UInt64

def Rng.next (g : Rng) : Nat × Rng :=
  let s := g.state * 6364136223846793005 + 1442695040888963407
  ((s >>> 33).toNat, ⟨s⟩)
def Rng.below (g : Rng) (n : Nat) : Nat × Rng := let (x, g) := g.next; (x % n, g)

/-- A random Unicode scalar value: ASCII, Latin-1, the BMP below the surrogates, or astral. -/
def Rng.char (g : Rng) : Char × Rng := Id.run do
  let (kind, g) := g.below 4
  let (x, g) := g.next
  let n := match kind with
    | 0 => 32 + x % 95
    | 1 => 160 + x % 96
    | 2 => 256 + x % (0xD800 - 256)
    | _ => 0x10000 + x % 0x10000
  return (Char.ofNat n, g)
def Rng.string (g : Rng) (minLen maxLen : Nat) : String × Rng := Id.run do
  let (extra, g) := g.below (maxLen - minLen + 1)
  let mut g := g
  let mut s := ""
  for _ in [0:minLen + extra] do
    let (c, g') := g.char; g := g'; s := s.push c
  return (s, g)
def Rng.bytes (g : Rng) (n : Nat) : ByteArray × Rng := Id.run do
  let mut g := g
  let mut b := ByteArray.empty
  for _ in [0:n] do
    let (x, g') := g.next; g := g'; b := b.push (x % 256).toUInt8
  return (b, g)

/-! JavaScript helpers (globals that exist on Node too, for lasm build's binding check) -/

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool
@[js "globalThis" "JSON.parse"] opaque jsonParse : String → IO Data
@[js "globalThis" "JSON.stringify"] opaque jsonStringify : Data → IO String
@[js "globalThis" "Date.now"] opaque dateNow : IO Float

/-- Waits `ms` milliseconds with `setTimeout` (holding no Lean thread). -/
def sleep (ms : Nat) : Async Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  let f ← JSFunction.ofFn fun _ => do p.resolve (); return .undefined
  discard <| setTimeout (.jsFunction f) (some ms)
  Std.Async.await p

/-- Reads a stream to its end. -/
def readAll (s : ReadableStream) : Async ByteArray := do
  (← Response.new (some (.readableStream s)) none).bytes

def text (body : String) (status : Nat := 200) : IO Response :=
  Response.new (some (.usvString body)) (some { status := some status, headers := some (.record ⟨#[("content-type", "text/plain; charset=utf-8")]⟩) })

/-- The binding `name` of the Worker's `env` (a copied object whose fields are the
bindings, or a reference to it), as `α`: `bindingOf KVNamespace env "KV"`. -/
def bindingOf (α : Type) [FromJS α] (env : Data) (name : String) : IO α := do
  let d ← match env with
    | .object _ => pure (env.field name)
    | .ref v _ => v.get name Data
    | _ => throw (IO.userError s!"env is {env.describe}, not an object")
  match (FromJS.fromJS d : Except String α) with
  | .ok a => return a
  | .error e => throw (IO.userError s!"env.{name} is {d.describe}: {e}")

def hexChar (n : Nat) : Char := "0123456789abcdef".toList[n % 16]!
def hex (b : ByteArray) : String := b.foldl (fun s x => (s.push (hexChar (x.toNat / 16))).push (hexChar (x.toNat % 16))) ""
def bytesEq (a b : ByteArray) : Bool := a.data == b.data
def optBytesEq : Option ByteArray → ByteArray → Bool
  | some a, b => bytesEq a b
  | none, _ => false

def isStr (d : Data) (s : String) : Bool := match d with | .string t => t == s | _ => false
def isNum (d : Data) (x : Float) : Bool := match d with | .number y => y == x | _ => false
def isUndef (d : Data) : Bool := match d with | .undefined => true | _ => false
def isNull (d : Data) : Bool := match d with | .null => true | _ => false
def isTrueData (d : Data) : Bool := match d with | .bool true => true | _ => false

/-- The generated members of `iface` (Surface.lean) that `v` lacks: lines for `merge`. -/
def probe (iface : String) (v : Value) : IO (Array String) := do
  let .object ifaces := (← jsonParse Surface.json).field "interfaces" | throw (IO.userError "no interfaces in the surface")
  let some (Data.array members) := (ifaces.find? (·.1 == iface)).map (·.2) | throw (IO.userError s!"{iface} is not in the surface")
  let mut lines := #[]
  for m in members do
    if let .string name := m then
      lines := lines.push (lineOf s!"available {iface}.{name}" (← reflectHas v name))
  return lines

/-- Live objects of each generated interface, for the availability probe. -/
abbrev Live := IO.Ref (Array (String × Value))

/-! Workers KV -/

def kv (r : Checks) (live : Live) (env : Data) : Async Unit := do
  let ns ← bindingOf KVNamespace env "KV"
  live.modify (·.push ("KVNamespace", ns.val))
  -- ∀ (key, value) generated strings: get after put returns the value
  let mut g : Rng := ⟨11⟩
  let mut written : Array (String × String) := #[]
  for i in [0:16] do
    let (v, g') := g.string 0 300; g := g'
    let (k, g') := g.string 1 40; g := g'
    let key := s!"kv/{i}/{k}"
    ns.put key (.domString v)
    written := written.push (key, v)
  for (key, v) in written do
    let got ← ns.get key
    expect r s!"kv get after put [{key.length}]" (got == some v) s!"{got.map String.length} chars (wrote {v.length})"
  -- getWithMetadata returns the value and the metadata put with it
  ns.put "meta" (.domString "with metadata") (some { metadata := obj [("n", toJS (42 : Nat)), ("tag", toJS "lean")] })
  let wm ← ns.getWithMetadata "meta"
  expect r "kv getWithMetadata" (wm.value == some "with metadata" && isStr (wm.metadata.field "tag") "lean")
    s!"{wm.value} {wm.metadata.describe}"
  -- ∀ bytes: getArrayBuffer after put of the bytes returns them; getStream streams them
  for i in [0:4] do
    let (n, g') := g.below 5000; g := g'
    let (b, g') := g.bytes n; g := g'
    ns.put s!"bytes/{i}" (.bufferSource b)
    let got ← ns.getArrayBuffer s!"bytes/{i}"
    expect r s!"kv getArrayBuffer [{i}]" (optBytesEq got b) s!"{got.map ByteArray.size} bytes (wrote {b.size})"
    match ← ns.getStream s!"bytes/{i}" with
    | some s =>
      let read ← readAll s
      expect r s!"kv getStream [{i}]" (bytesEq read b) s!"{read.size} bytes (wrote {b.size})"
    | none => expect r s!"kv getStream [{i}]" false "none"
  -- getJson parses the stored JSON text
  ns.put "json" (.domString "{\"a\":[1,\"x\"],\"b\":null}")
  let j ← ns.getJson "json"
  expect r "kv getJson" ((← jsonStringify j) == "{\"a\":[1,\"x\"],\"b\":null}") (← jsonStringify j)
  -- A key that was never written, and a deleted key, read as none
  expect r "kv get missing" ((← ns.get "never/written") == none) ""
  ns.delete "json"
  expect r "kv delete" ((← ns.get "json") == none && isNull (← ns.getJson "json")) ""
  -- list(prefix) pages through exactly the keys written under the prefix, in key order
  let mut pageKeys : Array String := #[]
  for i in [0:23] do
    let (k, g') := g.string 1 12; g := g'
    let key := s!"page/{k}/{i}"
    ns.put key (.domString "x")
    pageKeys := pageKeys.push key
  let mut listed : Array String := #[]
  let mut cursor : Option String := none
  let mut pages := 0
  repeat
    let res ← ns.list (some { «prefix» := some "page/", limit := some 10, cursor })
    listed := listed ++ res.keys.map (·.name)
    pages := pages + 1
    if res.list_complete || pages > 10 then break
    cursor := res.cursor
  let sorted := pageKeys.qsort (· < ·)
  expect r "kv list pages" (pages == 3) s!"{pages} pages"
  expect r "kv list keys" (listed.qsort (· < ·) == sorted) s!"{listed.size} keys listed, {sorted.size} written"
  expect r "kv list order" (listed == sorted) ""
  -- expirationTtl: the key lists an expiration of now + ttl (seconds)
  ns.put "ttl" (.domString "x") (some { expirationTtl := some 3600 })
  let res ← ns.list (some { «prefix» := some "ttl" })
  let now := (← dateNow) / 1000
  match res.keys.find? (·.name == "ttl") |>.bind (·.expiration) with
  | some e => expect r "kv expirationTtl" (e > now + 3500 && e < now + 3700) s!"{e} vs {now}"
  | none => expect r "kv expirationTtl" false "no expiration listed"

/-! D1 -/

def d1 (r : Checks) (live : Live) (env : Data) : Async Unit := do
  let db ← bindingOf D1Database env "DB"
  live.modify (·.push ("D1Database", db.val))
  let _ ← db.exec "DROP TABLE IF EXISTS people"
  let created ← db.exec "CREATE TABLE people (id INTEGER PRIMARY KEY, name TEXT NOT NULL, score REAL NOT NULL)"
  expect r "d1 exec" (created.count ≥ 1) s!"{created.count}"
  -- ∀ generated rows: run inserts each (one change, its row id), all() reads them back in order
  let mut g : Rng := ⟨23⟩
  let mut rows : Array (Nat × String × Nat) := #[]
  for i in [1:21] do
    let (name, g') := g.string 0 50; g := g'
    let (score, g') := g.below 100000; g := g'
    let stmt ← (← db.prepare "INSERT INTO people (id, name, score) VALUES (?1, ?2, ?3)").bind #[toJS i, toJS name, toJS score]
    if i == 1 then live.modify (·.push ("D1PreparedStatement", stmt.val))
    let res ← stmt.run
    expect r s!"d1 run [{i}]" (res.success && res.meta.changes == 1 && res.meta.last_row_id == i.toFloat) s!"{res.meta.changes} {res.meta.last_row_id}"
    rows := rows.push (i, name, score)
  let all ← (← db.prepare "SELECT id, name, score FROM people ORDER BY id").all
  let readBack := all.results.map fun row => (row.field "id", row.field "name", row.field "score")
  let same := readBack.size == rows.size && (readBack.zip rows).all fun ((i, n, s), (i', n', s')) =>
    (match i, n, s with
     | .number a, .string b, .number c => a == i'.toFloat && b == n' && c == s'.toFloat
     | _, _, _ => false)
  expect r "d1 all" same s!"{readBack.size} rows (inserted {rows.size})"
  -- first(column) and first() read one row; raw() reads rows as arrays
  let some (_, name5, _) := rows[4]? | throw (IO.userError "no row 5")
  let first ← (← (← db.prepare "SELECT name FROM people WHERE id = ?").bind #[toJS (5 : Nat)]).first "name"
  expect r "d1 first(column)" (isStr first name5) first.describe
  let firstRow ← (← (← db.prepare "SELECT id, name FROM people WHERE id = ?").bind #[toJS (5 : Nat)]).first0
  expect r "d1 first()" (match firstRow with | some row => row.entries.any (fun (k, v) => k == "name" && isStr v name5) | none => false) ""
  let none_ ← (← (← db.prepare "SELECT id FROM people WHERE id = ?").bind #[toJS (999 : Nat)]).first0
  expect r "d1 first() of no row" none_.isNone ""
  let raw ← (← db.prepare "SELECT id, score FROM people ORDER BY id LIMIT 3").raw
  expect r "d1 raw" (raw.size == 3 && raw.all (·.size == 2)) s!"{raw.size} rows"
  -- batch runs its statements as one transaction: a failing statement rolls back the others
  let ins := fun (i : Nat) => do (← db.prepare "INSERT INTO people (id, name, score) VALUES (?, 'batch', 0)").bind #[toJS i]
  let results ← db.batch #[← ins 100, ← ins 101]
  expect r "d1 batch" (results.size == 2 && results.all (·.meta.changes == 1)) s!"{results.size}"
  let failed ← throws (db.batch #[← ins 102, ← ins 100])
  let after ← (← (← db.prepare "SELECT COUNT(*) AS n FROM people WHERE id = ?").bind #[toJS (102 : Nat)]).first "n"
  expect r "d1 batch rolls back" (failed && isNum after 0) after.describe
  -- An invalid statement rejects
  expect r "d1 invalid SQL rejects" (← throws ((← db.prepare "SELEC nothing").all)) ""
  -- A session (sequential consistency) reads what the database wrote
  let session ← db.withSession (some "first-unconstrained")
  live.modify (·.push ("D1DatabaseSession", session.val))
  let count ← (← session.prepare "SELECT COUNT(*) AS n FROM people").first "n"
  expect r "d1 session" (isNum count 22) count.describe
  let _ ← session.getBookmark

/-! R2 -/

def r2 (r : Checks) (live : Live) (env : Data) : Async Unit := do
  let bucket ← bindingOf R2Bucket env "BUCKET"
  live.modify (·.push ("R2Bucket", bucket.val))
  let subtle ← (← crypto).subtle
  -- ∀ generated bytes: put, then get returns the bytes, head their size and metadata
  let mut g : Rng := ⟨31⟩
  for i in [0:6] do
    let (n, g') := g.below 70000; g := g'
    let (b, g') := g.bytes n; g := g'
    let key := s!"obj/{i}"
    let put ← bucket.put key (some (.bufferSource b)) (some {
      httpMetadata := some (.r2HTTPMetadata { contentType := some "application/x-lasm" }),
      customMetadata := some ⟨#[("index", toString i)]⟩ })
    if i == 0 then live.modify (·.push ("R2Object", put.val))
    expect r s!"r2 put [{i}]" ((← put.key) == key && (← put.size) == n.toFloat && (← put.httpEtag) == s!"\"{← put.etag}\"") s!"{← put.size}"
    match ← bucket.get key with
    | some body =>
      if i == 0 then live.modify (·.push ("R2ObjectBody", body.val))
      let bytes ← body.bytes
      expect r s!"r2 get [{i}]" (bytesEq bytes b) s!"{bytes.size} bytes (wrote {n})"
    | none => expect r s!"r2 get [{i}]" false "none"
    match ← bucket.head key with
    | some h =>
      let httpMeta ← h.httpMetadata
      let custom ← h.customMetadata
      expect r s!"r2 head [{i}]" ((← h.size) == n.toFloat && (httpMeta.bind (·.contentType)) == some "application/x-lasm"
        && (custom.map (·.entries)) == some #[("index", toString i)]) s!"{← h.size} {httpMeta.bind (·.contentType)} {custom.map (·.entries)}"
      -- R2's MD5 checksum of a single-part object is the MD5 of its bytes
      let checksums ← h.checksums
      if i == 0 then live.modify (·.push ("R2Checksums", checksums.val))
      let md5 ← subtle.digest (.domString "MD5") b
      expect r s!"r2 checksums.md5 [{i}]" (optBytesEq (← checksums.md5) md5) s!"{(← checksums.md5).map hex} vs {hex md5}"
      let strings ← checksums.toJSON
      expect r s!"r2 checksums.toJSON [{i}]" (strings.md5 == some (hex md5)) s!"{strings.md5}"
    | none => expect r s!"r2 head [{i}]" false "none"
  -- ∀ ranges (offset, length) of an object: get with range returns that slice
  let (b, g') := g.bytes 4096; g := g'
  discard <| bucket.put "ranges" (some (.bufferSource b))
  for i in [0:8] do
    let (o, g') := g.below 4000; g := g'
    let (l, g') := g.below 96; g := g'
    let len := l + 1
    match ← bucket.get "ranges" (some { range := some (.r2Range { offset := some o.toFloat, length := some len.toFloat }) }) with
    | some body =>
      let bytes ← body.bytes
      expect r s!"r2 range [{i}]" (bytesEq bytes (b.extract o (o + len))) s!"{bytes.size} bytes at {o} (asked {len})"
      let range ← body.range
      expect r s!"r2 range attribute [{i}]" ((range.bind (·.offset)) == some o.toFloat) s!"{(range.bind (·.offset))}"
    | none => expect r s!"r2 range [{i}]" false "none"
  -- text and json read the body; writeHttpMetadata copies the content type into Headers
  discard <| bucket.put "text" (some (.domString "{\"lean\":4}")) (some { httpMetadata := some (.r2HTTPMetadata { contentType := some "application/json" }) })
  match ← bucket.get "text" with
  | some body =>
    expect r "r2 text" ((← body.text) == "{\"lean\":4}") ""
    let headers ← Headers.new
    body.writeHttpMetadata headers
    expect r "r2 writeHttpMetadata" ((← headers.get "content-type") == some "application/json") s!"{← headers.get "content-type"}"
  | none => expect r "r2 text" false "none"
  match ← bucket.get "text" with
  | some body => expect r "r2 json" ((← jsonStringify (← body.json)) == "{\"lean\":4}") ""
  | none => expect r "r2 json" false "none"
  -- An upload checked against its SHA-256: the right digest is accepted, a wrong one rejected
  let (c, g') := g.bytes 1000; g := g'
  let sha ← subtle.digest (.domString "SHA-256") c
  let ok ← try
      discard (bucket.put "checked" (some (.bufferSource c)) (some { sha256 := some (.bufferSource sha) }))
      pure true
    catch _ => pure false
  expect r "r2 put sha256" ok ""
  expect r "r2 put wrong sha256 rejects" (← throws (bucket.put "checked2" (some (.bufferSource c)) (some { sha256 := some (.bufferSource (ByteArray.mk (Array.replicate 32 0))) }))) ""
  -- A conditional get whose condition fails returns the object without its body
  match ← bucket.head "text" with
  | some h =>
    let etag ← h.etag
    match ← bucket.get "text" (some { onlyIf := some (.r2Conditional { etagDoesNotMatch := some etag }) }) with
    | some o => expect r "r2 onlyIf" (!(← reflectHas o.val "body")) "the object has a body"
    | none => expect r "r2 onlyIf" false "none"
  | none => expect r "r2 onlyIf" false "no object"
  -- list with a delimiter: the objects directly under the prefix and the next prefixes
  for k in ["list/a", "list/b", "list/sub/c", "list/sub/d"] do
    discard <| bucket.put k (some (.domString k)) (some { customMetadata := some ⟨#[("k", k)]⟩ })
  let listed ← bucket.list (some { «prefix» := some "list/", delimiter := some "/", «include» := some #[.customMetadata] })
  let keys ← listed.objects.mapM (·.key)
  expect r "r2 list delimiter" (keys == #["list/a", "list/b"] && listed.delimitedPrefixes == #["list/sub/"] && !listed.truncated) s!"{keys} {listed.delimitedPrefixes}"
  let metas ← listed.objects.mapM (·.customMetadata)
  expect r "r2 list include" (metas.all (·.isSome)) ""
  -- Pages of one object each: truncated with a cursor until the last
  let page1 ← bucket.list (some { «prefix» := some "list/", limit := some 1 })
  expect r "r2 list limit" (page1.objects.size == 1 && page1.truncated && page1.cursor.isSome) s!"{page1.objects.size} {page1.truncated}"
  let page2 ← bucket.list (some { «prefix» := some "list/", limit := some 1, cursor := page1.cursor })
  expect r "r2 list cursor" ((← page2.objects.mapM (·.key)) == #["list/b"]) ""
  -- delete one key, and several
  bucket.delete (.domString "list/a")
  bucket.delete (.sequence #["list/b", "list/sub/c"])
  expect r "r2 delete" ((← bucket.head "list/a").isNone && (← bucket.head "list/b").isNone && (← bucket.head "list/sub/c").isNone
    && (← bucket.head "list/sub/d").isSome) ""
  expect r "r2 get missing" ((← bucket.get "never/written").isNone) ""
  -- Multipart: two parts (the first of 5 MiB, the minimum) complete into their concatenation
  let upload ← bucket.createMultipartUpload "multi" (some { customMetadata := some ⟨#[("parts", "2")]⟩ })
  live.modify (·.push ("R2MultipartUpload", upload.val))
  let (p1, g') := g.bytes (5 * 1024 * 1024); g := g'
  let (p2, _) := g.bytes 12345
  let part1 ← upload.uploadPart 1 (.bufferSource p1)
  let resumed ← bucket.resumeMultipartUpload "multi" (← upload.uploadId)
  expect r "r2 resumeMultipartUpload" ((← resumed.uploadId) == (← upload.uploadId) && (← resumed.key) == "multi") ""
  let part2 ← resumed.uploadPart 2 (.bufferSource p2)
  let done ← upload.complete #[part1, part2]
  expect r "r2 multipart size" ((← done.size) == (p1.size + p2.size).toFloat) s!"{← done.size}"
  match ← bucket.get "multi" with
  | some body => expect r "r2 multipart bytes" (bytesEq (← body.bytes) (p1 ++ p2)) ""
  | none => expect r "r2 multipart bytes" false "none"
  let aborted ← bucket.createMultipartUpload "aborted"
  discard <| aborted.uploadPart 1 (.domString "never completed")
  aborted.abort
  expect r "r2 multipart abort" ((← bucket.head "aborted").isNone) ""

/-! Queues: the producer here, the consumer is the queue handler (`consume`) -/

/-- The queue handler: records each message's body and attempts in KV (`queue/<id>`) and
acks it; a body `{"retry": true}` is retried once (it comes back with attempts = 2). -/
def consume (batch : MessageBatch) (env : Data) (_ctx : ExecutionContext) : Async Unit := do
  let ns ← bindingOf KVNamespace env "KV"
  let messages ← batch.messages
  if let some m := messages[0]? then
    ns.put "probe/Message" (.domString ("\n".intercalate (← probe "Message" m.val).toList))
  ns.put "probe/MessageBatch" (.domString ("\n".intercalate (← probe "MessageBatch" batch.val).toList))
  let queue ← batch.queue
  for m in messages do
    let body ← m.body
    let attempts ← m.attempts
    if isTrueData (body.field "retry") then
      if attempts < 2 then
        m.retry
        continue
    let record := obj [("body", body), ("attempts", toJS attempts), ("queue", toJS queue), ("id", toJS (← m.id))]
    ns.put s!"queue/{← m.id}" (.domString (← jsonStringify record))
    m.ack

def queues (r : Checks) (live : Live) (env : Data) : Async Unit := do
  let ns ← bindingOf KVNamespace env "KV"
  let queue ← bindingOf Queue env "QUEUE"
  live.modify (·.push ("Queue", queue.val))
  -- Every message sent (one at a time, and in a batch) is delivered to the consumer once
  let mut g : Rng := ⟨41⟩
  let mut sent : Array String := #[]
  for i in [0:6] do
    let (s, g') := g.string 0 80; g := g'
    let body := obj [("i", toJS i), ("s", toJS s)]
    sent := sent.push (← jsonStringify body)
    try discard (queue.send body (some { contentType := some .json }))
    catch e => expect r s!"queues send [{i}]" false s!"threw {e}"
  let batch ← (List.range 4).toArray.mapM fun i => do
    let body := obj [("batch", toJS i)]
    return ({ body, contentType := some .json } : MessageSendRequest)
  for m in batch do sent := sent.push (← jsonStringify m.body)
  try discard (queue.sendBatch batch (some { delaySeconds := some 0 }))
  catch e => expect r "queues sendBatch" false s!"threw {e}"
  try discard (queue.send (obj [("retry", .bool true)]))
  catch e => expect r "queues send retry" false s!"threw {e}"
  -- The consumer runs after the batch timeout (1 s): wait up to 30 s for every message
  let mut records : Array Data := #[]
  for _ in [0:60] do
    let listed ← ns.list (some { «prefix» := some "queue/" })
    if listed.keys.size ≥ sent.size + 1 then
      records ← listed.keys.mapM fun k => do jsonParse ((← ns.get k.name).getD "null")
      break
    sleep 500
  let bodies ← records.filterMapM fun d => do
    if isTrueData ((d.field "body").field "retry") then return none
    return some (← jsonStringify (d.field "body"))
  expect r "queues delivered" (bodies.qsort (· < ·) == sent.qsort (· < ·)) s!"{bodies.size} of {sent.size} delivered"
  expect r "queues batch.queue" (records.all fun d => isStr (d.field "queue") "lasm-js-cloudflare") ""
  -- retry(): the message comes back, with attempts counting the delivery
  let retried := records.find? fun d => isTrueData ((d.field "body").field "retry")
  expect r "queues retry" (match retried with | some d => isNum (d.field "attempts") 2 | none => false) s!"{retried.map Data.describe}"
  try
    let m ← queue.metrics
    expect r "queues metrics" (m.backlogCount ≥ 0) ""
  catch e => expect r "queues metrics" false s!"threw {e}"
  for iface in ["Message", "MessageBatch"] do
    merge r ((← ns.get s!"probe/{iface}").getD s!"FAIL available {iface}: the queue handler recorded nothing")

/-! Cron triggers: the scheduled handler (`scheduledRun`), triggered by the runner -/

/-- The scheduled handler: records the controller's cron and time in KV, and writes one more
key from a promise handed to `ctx.waitUntil`. -/
def scheduledRun (controller : ScheduledController) (env : Data) (ctx : ExecutionContext) : Async Unit := do
  let ns ← bindingOf KVNamespace env "KV"
  ns.put "scheduled" (.domString (← jsonStringify (obj [("cron", toJS (← controller.cron)), ("scheduledTime", toJS (← controller.scheduledTime))])))
  ns.put "probe/ScheduledController" (.domString ("\n".intercalate (← probe "ScheduledController" controller.val).toList))
  let later ← Function.ofFn fun _ => do
    sleep 50
    ns.put "scheduled/waitUntil" (.domString "done")
    return .undefined
  ctx.waitUntil (← later.call #[])

def scheduled (r : Checks) (env : Data) : Async Unit := do
  let ns ← bindingOf KVNamespace env "KV"
  -- The runner triggered `*/5 * * * *` (wrangler dev --test-scheduled) before this request.
  let mut seen : Option String := none
  for _ in [0:20] do
    seen ← ns.get "scheduled"
    if seen.isSome then break
    sleep 250
  match seen with
  | some s =>
    let d ← jsonParse s
    let now ← dateNow
    expect r "scheduled cron" (isStr (d.field "cron") "*/5 * * * *") (d.field "cron").describe
    expect r "scheduled scheduledTime" (match d.field "scheduledTime" with | .number t => t ≤ now + 1000 && t > now - 600000 | _ => false) (d.field "scheduledTime").describe
  | none => expect r "scheduled handler ran" false "nothing recorded"
  let mut waited : Option String := none
  for _ in [0:20] do
    waited ← ns.get "scheduled/waitUntil"
    if waited.isSome then break
    sleep 250
  expect r "scheduled ctx.waitUntil" (waited == some "done") s!"{waited}"
  merge r ((← ns.get "probe/ScheduledController").getD "FAIL available ScheduledController: the scheduled handler recorded nothing")

/-! The Cache API -/

def cache (r : Checks) (live : Live) : Async Unit := do
  let storage ← caches
  live.modify (·.push ("CacheStorage", storage.val))
  let c ← storage.default
  live.modify (·.push ("Cache", c.val))
  -- ∀ generated bodies: match after put returns the body; after delete, nothing
  let mut g : Rng := ⟨53⟩
  for i in [0:4] do
    let (body, g') := g.string 1 200; g := g'
    let url := s!"https://cache.lasm.test/item/{i}"
    let res ← Response.new (some (.usvString body)) (some { headers := some (.record ⟨#[("cache-control", "max-age=3600"), ("content-type", "text/plain; charset=utf-8")]⟩) })
    c.put (.usvString url) res
    match ← c.«match» (.usvString url) with
    | some hit => expect r s!"cache match [{i}]" ((← hit.text) == body) ""
    | none => expect r s!"cache match [{i}]" false "no match after put"
    expect r s!"cache delete [{i}]" (← c.delete (.usvString url)) ""
    expect r s!"cache match after delete [{i}]" ((← c.«match» (.usvString url)).isNone) ""
  let named ← storage.«open» "lasm"
  expect r "cache open" ((← named.«match» (.usvString "https://cache.lasm.test/none")).isNone) ""

/-! TCP sockets (`connect` of cloudflare:sockets), to the runner's echo server -/

def sockets (r : Checks) (live : Live) (env : Data) : Async Unit := do
  let port ← match env with
    | .object _ => pure (env.field "ECHO_PORT")
    | .ref v _ => v.get "ECHO_PORT" Data
    | _ => pure .undefined
  let .string portText := port | throw (IO.userError s!"no ECHO_PORT variable: {port.describe}")
  let some p := portText.toNat? | throw (IO.userError s!"ECHO_PORT is {portText}")
  -- ∀ generated bytes: the echo server returns exactly the bytes written, then closes
  let mut g : Rng := ⟨61⟩
  for i in [0:3] do
    let (b, g') := g.bytes (1000 + 7000 * i); g := g'
    let socket ← if i % 2 == 0 then connect (.socketAddress { hostname := "127.0.0.1", port := p.toFloat })
      else connect (.domString s!"127.0.0.1:{p}")
    if i == 0 then live.modify (·.push ("Socket", socket.val))
    let _info ← socket.opened
    expect r s!"sockets opened [{i}]" true ""
    expect r s!"sockets secureTransport [{i}]" ((← socket.secureTransport) == .off && !(← socket.upgraded)) ""
    let writer ← (← socket.writable).getWriter
    writer.write (.bytes b)
    writer.close
    let echoed ← readAll (← socket.readable)
    expect r s!"sockets echo [{i}]" (bytesEq echoed b) s!"{echoed.size} bytes (wrote {b.size})"
    socket.close
    socket.closed

/-! Durable Objects: the class is index.mjs's LeanObject, whose fetch calls `durableFetch` -/

/-- The Durable Object's requests: `/count` increments a counter in its storage and answers
it; `/id` answers its id; `/storage` checks DurableObjectStorage and answers the lines. -/
def durableFetch (request : Request) (state : DurableObjectState) : Async Response := do
  let storage ← state.storage
  match ← (← URL.new (← request.url)).pathname with
  | "/count" =>
    let n : Float := match (← storage.get "count") with | .number x => x | _ => 0
    storage.put "count" (toJS (n + 1))
    text s!"{(n + 1).toUInt64}"
  | "/id" => text (← (← state.id).toString)
  | "/storage" =>
    let mut lines : Array String := #[]
    lines := lines ++ (← probe "DurableObjectState" state.val) ++ (← probe "DurableObjectStorage" storage.val)
    storage.deleteAll
    -- ∀ generated values: get after put returns a structured clone (the same JSON)
    let mut g : Rng := ⟨71⟩
    let mut keys : Array String := #[]
    for i in [0:10] do
      let (s, g') := g.string 0 60; g := g'
      let (n, g') := g.below 1000000; g := g'
      let value := obj [("s", toJS s), ("n", toJS n), ("list", .array #[toJS i, .null, .bool true])]
      let key := s!"item/{i}/{s.length}"
      storage.put key value
      keys := keys.push key
      let back ← storage.get key
      lines := lines.push (lineOf s!"do storage get after put [{i}]" ((← jsonStringify back) == (← jsonStringify value)))
    -- list(prefix) returns every key in key order; reverse and limit
    let listed ← storage.list (some { «prefix» := some "item/" })
    let sorted := keys.qsort (· < ·)
    lines := lines.push (lineOf "do storage list" (listed.entries.map (·.1) == sorted) s!"{listed.entries.map (·.1)}")
    let rev ← storage.list (some { «prefix» := some "item/", reverse := some true, limit := some 3 })
    lines := lines.push (lineOf "do storage list reverse" (rev.entries.map (·.1) == (sorted.reverse.extract 0 3)) "")
    -- several keys at once
    storage.putWithEntries ⟨#[("multi/a", toJS "A"), ("multi/b", toJS "B")]⟩
    let got ← storage.getWithKeys #["multi/a", "multi/b", "multi/none"]
    lines := lines.push (lineOf "do storage getWithKeys" (got.entries.map (·.1) == #["multi/a", "multi/b"]) s!"{got.entries.map (·.1)}")
    lines := lines.push (lineOf "do storage delete" ((← storage.delete "multi/a") && !(← storage.delete "multi/a")) "")
    let deleted ← storage.deleteWithKeys #["multi/b", "item/0/0", "none"]
    lines := lines.push (lineOf "do storage deleteWithKeys" (deleted ≥ 1) s!"{deleted}")
    -- transaction: its writes commit together; a transaction that throws writes nothing
    let tx ← DurableObjectStorageTransactionClosure.ofFn fun txn => do
      txn.put "tx/a" (toJS "1")
      txn.put "tx/b" (toJS "2")
      return toJS "committed"
    let res ← storage.transaction tx
    lines := lines.push (lineOf "do storage transaction" (isStr res "committed" && isStr (← storage.get "tx/b") "2") res.describe)
    let failing ← DurableObjectStorageTransactionClosure.ofFn fun txn => do
      txn.put "tx/c" (toJS "3")
      throw (IO.userError "abort the transaction")
    let threw ← try
        discard (storage.transaction failing)
        pure false
      catch _ => pure true
    lines := lines.push (lineOf "do storage transaction rollback" (threw && isUndef (← storage.get "tx/c")) "")
    let txProbe ← IO.mkRef (#[] : Array String)
    let rolled ← DurableObjectStorageTransactionClosure.ofFn fun txn => do
      txProbe.set (← probe "DurableObjectTransaction" txn.val)
      txn.put "tx/d" (toJS "4")
      txn.rollback
      return .undefined
    discard <| storage.transaction rolled
    lines := lines ++ (← txProbe.get)
    lines := lines.push (lineOf "do storage transaction rollback()" (isUndef (← storage.get "tx/d")) "")
    -- alarms: getAlarm returns the time set, none after deleteAlarm
    let at_ := ((← dateNow) + 3600000).floor
    storage.setAlarm (toJS at_)
    lines := lines.push (lineOf "do storage alarm" ((← storage.getAlarm) == some at_) s!"{← storage.getAlarm}")
    storage.deleteAlarm
    lines := lines.push (lineOf "do storage deleteAlarm" ((← storage.getAlarm) == none) "")
    -- blockConcurrencyWhile returns its callback's value
    let cb ← DurableObjectStateBlockConcurrencyWhileCallback.ofFn (pure (toJS "blocked"))
    lines := lines.push (lineOf "do blockConcurrencyWhile" (isStr (← state.blockConcurrencyWhile cb) "blocked") "")
    storage.sync
    let bookmark ← try
        let b ← storage.getCurrentBookmark
        pure (some b)
      catch _ => pure none
    lines := lines.push (lineOf "do storage getCurrentBookmark" bookmark.isSome "")
    storage.deleteAll
    lines := lines.push (lineOf "do storage deleteAll" ((← storage.list).entries.isEmpty) "")
    text ("\n".intercalate lines.toList)
  | path => text s!"not found: {path}" (status := 404)

def durableObjects (r : Checks) (live : Live) (env : Data) : Async Unit := do
  let ns ← bindingOf DurableObjectNamespace env "OBJECTS"
  live.modify (·.push ("DurableObjectNamespace", ns.val))
  -- idFromName is deterministic; different names, and unique ids, differ
  let a ← ns.idFromName "a"
  live.modify (·.push ("DurableObjectId", a.val))
  let a' ← ns.idFromName "a"
  let b ← ns.idFromName "b"
  expect r "do idFromName" ((← a.equals a') && (← a.toString) == (← a'.toString) && !(← a.equals b)) ""
  expect r "do id.name" ((← a.name) == some "a") s!"{← a.name}"
  let u ← ns.newUniqueId
  let u' ← ns.newUniqueId
  expect r "do newUniqueId" (!(← u.equals u')) ""
  -- idFromString of an id's string is that id
  expect r "do idFromString" (← (← ns.idFromString (← u.toString)).equals u) ""
  -- A stub's requests reach one object: its counter counts 1, 2, …, n
  let stub ← ns.getByName "counter"
  live.modify (·.push ("DurableObjectStub", stub.val))
  let mut counts : Array String := #[]
  for _ in [0:5] do
    counts := counts.push (← (← stub.fetch (.usvString "https://do.lasm.test/count")).text)
  expect r "do counter" (counts == #["1", "2", "3", "4", "5"]) s!"{counts}"
  -- get(idFromName(n)) is the same object as getByName(n)
  let same ← ns.get (← ns.idFromName "counter")
  expect r "do get = getByName" ((← (← same.fetch (.usvString "https://do.lasm.test/count")).text) == "6") ""
  -- the object's state.id is the stub's id
  let idText ← (← stub.fetch (.usvString "https://do.lasm.test/id")).text
  expect r "do state.id" (idText == (← (← stub.id).toString)) idText
  -- storage, checked inside the object
  merge r (← (← (← ns.get u).fetch (.usvString "https://do.lasm.test/storage")).text)

/-! The handler's context and the env export of cloudflare:workers -/

def context (r : Checks) (live : Live) (env : Data) (ctx : ExecutionContext) : Async Unit := do
  live.modify (·.push ("ExecutionContext", ctx.val))
  ctx.passThroughOnException
  let _ ← ctx.props
  if let some c ← ctx.cache then live.modify (·.push ("CacheContext", c.val))
  -- waitUntil keeps the request's work running: its promise's write lands
  let ns ← bindingOf KVNamespace env "KV"
  let work ← Function.ofFn fun _ => do ns.put "waitUntil" (.domString "landed"); return .undefined
  ctx.waitUntil (← work.call #[])
  let mut landed : Option String := none
  for _ in [0:20] do
    landed ← ns.get "waitUntil"
    if landed.isSome then break
    sleep 100
  expect r "ctx.waitUntil" (landed == some "landed") s!"{landed}"
  -- env of cloudflare:workers is the same bindings: a key written through one is read through the other
  let exported ← Lasm.JS.Cloudflare.env
  let other ← bindingOf KVNamespace exported "KV"
  ns.put "env-export" (.domString "same")
  expect r "env of cloudflare:workers" ((← other.get "env-export") == some "same") ""

/-! Availability: every generated member exists on the live objects -/

def availability (r : Checks) (live : Live) : Async Unit := do
  let surface ← jsonParse Surface.json
  let .object globals := surface.field "globals" | throw (IO.userError "no globals in the surface")
  for (module, names) in globals do
    let target ← if module == "globalThis" then Lasm.JS.global else Lasm.JS.require module
    if let .array ns := names then
      for n in ns do
        if let .string name := n then expect r s!"available {module} {name}" (← reflectHas target name) ""
  let .object ifaces := surface.field "interfaces" | throw (IO.userError "no interfaces in the surface")
  -- Probed where they live: handlers' arguments (recorded by the handlers), the Durable Object's.
  let elsewhere := ["Message", "MessageBatch", "ScheduledController", "DurableObjectState", "DurableObjectStorage", "DurableObjectTransaction"]
  for (iface, _) in ifaces do
    if elsewhere.contains iface then continue
    match (← live.get).find? (·.1 == iface) with
    | some (_, v) => merge r ("\n".intercalate (← probe iface v).toList)
    | none => expect r s!"available {iface}" false "no live object was seen"

/-! Running -/

def checks (env : Data) (ctx : ExecutionContext) : Async String := do
  let r ← IO.mkRef ({} : Report)
  let live ← IO.mkRef #[]
  for (name, body) in [("kv", kv r live env), ("d1", d1 r live env), ("r2", r2 r live env), ("queues", queues r live env),
      ("scheduled", scheduled r env), ("cache", cache r live), ("sockets", sockets r live env),
      ("durableObjects", durableObjects r live env), ("context", context r live env ctx), ("availability", availability r live)] do
    runSection r name body
  let s ← r.get
  return "\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n"

def main : IO Unit := do
  let fetch ← ExportedHandlerFetchHandler.ofFn fun request env ctx => do
    match ← (← URL.new (← request.url)).pathname with
    | "/" => text (← checks env ctx)
    | path => text s!"not found: {path}" (status := 404)
  let scheduled ← ExportedHandlerScheduledHandler.ofFn scheduledRun
  let queue ← ExportedHandlerQueueHandler.ofFn consume
  -- The Durable Object class (index.mjs) calls these with (request, ctx, env) and (ctx, env).
  let durable ← Function.ofFn fun args => do
    let request ← decodeAs Request "Durable Object request" (args[0]?.getD .undefined)
    let state ← decodeAs DurableObjectState "Durable Object state" (args[1]?.getD .undefined)
    return toJS (← durableFetch request state)
  let alarm ← Function.ofFn fun _ => pure .undefined
  let g ← Lasm.JS.global
  g.set "lasmDurableObjectFetch" durable
  g.set "lasmDurableObjectAlarm" alarm
  exportDefault ({ fetch := some fetch, scheduled := some scheduled, queue := some queue } : ExportedHandler)
