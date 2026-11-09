/-
Conformance program for Lasm.JS.Web (tier 1, the WinterTC Minimum Common Web
API), built for every JavaScript target and run by
scripts/bindings/test-web.mjs (docs/TESTING.md, "Standard bindings").

Every check is a property: the comment above it states the Lean proposition
it checks, over WPT's data (Wpt.lean), published test vectors, or generated
inputs (a seeded generator, so a failure is reproducible). The oracle is,
where one exists, Lean itself (UTF-8 encoding and validation) or the
standard's own test data; otherwise the spec's stated behaviour.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, and
`summary <passed> <failed>`. On Cloudflare Workers the same text is the body
of the response to any request (Workers allow timers and I/O only inside one).
-/
import Lasm.JS
import Lasm.JS.Web
import Wpt
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

/-- Runs one section; an exception fails it (and names it). -/
def runSection (r : Checks) (name : String) (body : Async Unit) : Async Unit := do
  let before ← r.get
  try body catch e => expect r s!"{name} (section)" false s!"threw {e}"
  let after ← r.get
  r.modify fun s => { s with lines := s.lines.push s!"section {name}: {after.passed - before.passed} passed, {after.failed - before.failed} failed" }

/-- `act` throws (a JavaScript exception or a rejected promise). -/
def throws (act : Async α) : Async Bool := do
  try discard act; return false catch _ => return true

/-! Helpers -/

def hexChar (n : Nat) : Char := "0123456789abcdef".toList[n % 16]!
def hex (b : ByteArray) : String := b.foldl (fun s x => (s.push (hexChar (x.toNat / 16))).push (hexChar (x.toNat % 16))) ""
def ofHex (s : String) : ByteArray := Id.run do
  let ds := s.toList.toArray.filterMap fun c =>
    if c.isDigit then some (c.toNat - '0'.toNat) else if 'a' ≤ c ∧ c ≤ 'f' then some (c.toNat - 'a'.toNat + 10) else none
  let mut out := ByteArray.empty
  let mut i := 0
  while i + 1 < ds.size do
    out := out.push (ds[i]! * 16 + ds[i + 1]!).toUInt8
    i := i + 2
  return out
def bytesOf (xs : List Nat) : ByteArray := ⟨xs.toArray.map Nat.toUInt8⟩

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
    | 2 => let v := 256 + x % (0xFFFE - 256); if 0xD800 ≤ v ∧ v ≤ 0xDFFF then v - 0x800 else v
    | _ => 0x10000 + x % 0x100000
  return (Char.ofNat n, g)
def Rng.string (g : Rng) (maxLength : Nat) : String × Rng := Id.run do
  let (n, g) := g.below (maxLength + 1)
  let mut g := g
  let mut s := ""
  for _ in [0:n] do
    let (c, g') := g.char
    s := s.push c; g := g'
  return (s, g)
def Rng.bytes (g : Rng) (maxLength : Nat) : ByteArray × Rng := Id.run do
  let (n, g) := g.below (maxLength + 1)
  let mut g := g
  let mut b := ByteArray.empty
  for _ in [0:n] do
    let (x, g') := g.below 256
    b := b.push x.toUInt8; g := g'
  return (b, g)

@[js "globalThis" "JSON.parse"] opaque jsonParse : String → IO Data
@[js "globalThis" "Promise.resolve"] opaque promiseResolve : Data → IO Value

def str : Data → String
  | .string s => s
  | _ => ""

/-- Equality of copied JavaScript data (references compare as unequal). -/
partial def dataEq : Data → Data → Bool
  | .undefined, .undefined | .null, .null => true
  | .bool a, .bool b => a == b
  | .number a, .number b => a == b || (a.isNaN && b.isNaN)
  | .string a, .string b => a == b
  | .bigint a, .bigint b => a == b
  | .bytes a, .bytes b => a.data == b.data
  | .array a, .array b => a.size == b.size && (a.zip b).all fun (x, y) => dataEq x y
  | .object a, .object b => a.size == b.size && (a.zip b).all fun ((k, x), (l, y)) => k == l && dataEq x y
  | _, _ => false

/-- Waits `ms` milliseconds with `setTimeout` (holding no Lean thread). -/
def sleep (ms : Nat) : Async Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  let f ← JSFunction.ofFn fun _ => do p.resolve (); return .undefined
  discard <| setTimeout (.jsFunction f) (some ms)
  Std.Async.await p

/-- Waits until `ref` holds a value, polling every 10 ms for at most `ms`. -/
def waitFor (ref : IO.Ref (Option α)) (ms : Nat := 2000) : Async (Option α) := do
  for _ in [0:ms / 10] do
    if let some a ← ref.get then return some a
    sleep 10
  ref.get

/-- All chunks of a stream, read with a default reader. -/
partial def readAll (s : ReadableStream) : Async (Array Data) := do
  let reader : ReadableStreamDefaultReader := { val := ← s.getReader }
  let rec loop (acc : Array Data) : Async (Array Data) := do
    let r ← reader.read
    if r.done == some true then return acc else loop (acc.push r.value)
  loop #[]

def textEncoder : IO TextEncoder := TextEncoder.new

/-! URL (WPT url/resources/urltestdata.json) -/

def urlGetters : List (String × (URL → IO String)) :=
  [("href", URL.href), ("origin", URL.origin), ("protocol", URL.protocol), ("username", URL.username),
   ("password", URL.password), ("host", URL.host), ("hostname", URL.hostname), ("port", URL.port),
   ("pathname", URL.pathname), ("search", URL.search), ("hash", URL.hash)]

def urls (r : Checks) : Async Unit := do
  let .array cases ← jsonParse Wpt.urlTestData | throw (IO.userError "urltestdata is not an array")
  let mut i := 0
  for c in cases do
    let input := str (c.field "input")
    let base := match c.field "base" with | .string b => some b | _ => none
    let name := s!"url[{i}]"
    let canParse ← URL.canParse input base
    if c.field "failure" matches .bool true then
      -- ∀ c ∈ urltestdata, c.failure → ¬ URL.canParse c.input c.base ∧ URL.parse c.input c.base = none ∧ (URL.new c.input c.base throws)
      expect r s!"{name} canParse" (!canParse) s!"canParse true for failure case {repr input} base {repr base}"
      let parsed ← URL.parse input base
      expect r s!"{name} parse" parsed.isNone s!"URL.parse returned a URL for {repr input}"
      expect r s!"{name} new" (← throws (URL.new input base)) s!"new URL({repr input}) did not throw"
    else
      -- ∀ c ∈ urltestdata, ¬ c.failure → URL.canParse c.input c.base ∧ ∀ f ∈ fields, (URL.new c.input c.base).f = c.f
      expect r s!"{name} canParse" canParse s!"canParse false for {repr input} base {repr base}"
      try
        let u ← URL.new input base
        for (field, get) in urlGetters do
          if let .string want := c.field field then
            let got ← get u
            expect r s!"{name} {field}" (got == want) s!"{repr input} base {repr base}: got {repr got}, want {repr want}"
        -- ∀ u, u.toString = u.href ∧ u.toJSON = u.href (the stringifier)
        let href ← u.href
        expect r s!"{name} toString" ((← u.toString) == href && (← u.toJSON) == href) "toString or toJSON ≠ href"
      catch e => expect r s!"{name} new" false s!"new URL({repr input}, {repr base}) threw {e}"
    i := i + 1
  -- Setters: ∀ u, (u.setPathname p; u.pathname) = p for an already-normalized path p
  let u ← URL.new "https://example.com/a?x=1#h"
  u.setPathname "/b/c"; u.setSearch "?y=2"; u.setHash "#z"; u.setPort "8443"
  expect r "url setters" ((← u.href) == "https://example.com:8443/b/c?y=2#z") s!"got {← u.href}"
  let sp ← u.searchParams
  sp.append "k" "v w"
  expect r "url searchParams is live" ((← u.search) == "?y=2&k=v+w") s!"got {← u.search}"

/-! URLSearchParams and form decoding (WPT url/urlencoded-parser.any.js) -/

def pairs (d : Data) : Array (String × String) := match d with
  | .array xs => xs.map fun | .array #[a, b] => (str a, str b) | _ => ("", "")
  | _ => #[]

def searchParams (r : Checks) : Async Unit := do
  let .array cases ← jsonParse Wpt.urlencodedParser | throw (IO.userError "urlencoded data is not an array")
  let mut i := 0
  for c in cases do
    let input := str (c.field "input")
    let want := pairs (c.field "output")
    -- ∀ c ∈ urlencoded-parser, (URLSearchParams.new c.input).entries = c.output
    let p ← URLSearchParams.new (some (.usvString input))
    let got ← p.entries
    expect r s!"urlencoded[{i}] URLSearchParams" (got == want) s!"{repr input}: got {repr got}, want {repr want}"
    -- ∀ c, (Response c.input with an urlencoded content type).formData.entries = c.output
    let res ← Response.new (some (.usvString input)) (some { headers := some (.record ⟨#[("Content-Type", "application/x-www-form-urlencoded")]⟩) })
    let form ← res.formData
    let entries := (← form.entries).map fun (k, v) => (k, match v with | .usvString s => s | .file _ => "<file>")
    expect r s!"urlencoded[{i}] formData" (entries == want) s!"{repr input}: got {repr entries}"
    i := i + 1
  -- Round trip: ∀ ps : Array (String × String), (URLSearchParams.new (URLSearchParams.new ps).toString).entries = ps
  let mut g : Rng := ⟨7⟩
  for j in [0:40] do
    let mut ps : Array (String × String) := #[]
    let (n, g') := g.below 5; g := g'
    for _ in [0:n] do
      let (k, g1) := g.string 6; let (v, g2) := g1.string 6; g := g2
      ps := ps.push (k, v)
    let p ← URLSearchParams.new (some (.sequence (ps.map fun (k, v) => #[k, v])))
    let q ← URLSearchParams.new (some (.usvString (← p.toString)))
    expect r s!"urlencoded round trip {j}" ((← q.entries) == ps) s!"{repr ps} → {← p.toString} → {repr (← q.entries)}"
  -- Records, size, get/getAll/has/delete/set/sort
  let p ← URLSearchParams.new (some (.record ⟨#[("b", "2"), ("a", "1")]⟩))
  p.append "a" "3"
  expect r "searchParams get/getAll/size" ((← p.get "a") == some "1" && (← p.getAll "a") == #["1", "3"] && (← p.size) == 3 && (← p.get "zz") == none) ""
  p.sort
  expect r "searchParams sort (stable, by code units)" ((← p.toString) == "a=1&a=3&b=2") s!"got {← p.toString}"
  p.delete "a" (some "3")
  p.set "b" "x y"
  expect r "searchParams delete with value, set" ((← p.toString) == "a=1&b=x+y" && (← p.has "a" (some "1")) && !(← p.has "a" (some "3"))) s!"got {← p.toString}"
  expect r "searchParams keys/values" ((← p.keys) == #["a", "b"] && (← p.values) == #["1", "x y"]) ""

/-! URLPattern -/

def urlPattern (r : Checks) : Async Unit := do
  let pat ← URLPattern.newWithOptions (some (.urlPatternInit { pathname := some "/books/:id" }))
  -- ∀ id ∈ samples, pattern.test ("https://x.test/books/" ++ id) ∧ (exec …).pathname.groups.id = id
  for id in ["1", "abc", "%E2%82%AC"] do
    let url := s!"https://x.test/books/{id}"
    expect r s!"urlpattern test {id}" (← pat.test (some (.usvString url))) ""
    match ← pat.exec (some (.usvString url)) with
    | some res =>
      let groups := (res.pathname.bind (·.groups)).map (·.entries) |>.getD #[]
      expect r s!"urlpattern exec {id}" (groups == #[("id", some id)]) s!"groups {repr groups}"
    | none => expect r s!"urlpattern exec {id}" false "no match"
  expect r "urlpattern no match" (!(← pat.test (some (.usvString "https://x.test/authors/1")))) ""
  expect r "urlpattern pathname" ((← pat.pathname) == "/books/:id" && !(← pat.hasRegExpGroups)) ""
  let withBase ← URLPattern.new (.usvString "/a/*") "https://x.test"
  expect r "urlpattern with base" ((← withBase.test (some (.usvString "https://x.test/a/b"))) && (← withBase.hostname) == "x.test") ""

/-! Encoding (Lean's own UTF-8 is the oracle) -/

def utf16Length (s : String) : Nat := s.foldl (fun n c => n + if c.val ≥ 0x10000 then 2 else 1) 0

def encoding (r : Checks) : Async Unit := do
  let enc ← textEncoder
  let dec ← TextDecoder.new
  let fatal ← TextDecoder.new (some "utf-8") (some { fatal := some true, ignoreBOM := some true })
  expect r "encoding names" ((← enc.encoding) == "utf-8" && (← dec.encoding) == "utf-8" && (← fatal.fatal) && (← fatal.ignoreBOM)) ""
  let mut g : Rng := ⟨42⟩
  for i in [0:150] do
    let (s, g') := g.string 40; g := g'
    -- ∀ s : String, TextEncoder.encode s = s.toUTF8 ∧ TextDecoder.decode s.toUTF8 = s
    let e ← enc.encode (some s)
    expect r s!"encode {i}" (e.data == s.toUTF8.data) s!"{repr s}"
    expect r s!"decode {i}" ((← dec.decode (some s.toUTF8)) == s) s!"{repr s}"
    -- ∀ s, encodeInto s (buffer of 4·|s| bytes) = {read := UTF-16 length of s, written := |s.toUTF8|}
    let res ← enc.encodeInto s (ByteArray.mk (Array.replicate (4 * s.length + 4) 0))
    expect r s!"encodeInto {i}" (res.read == some (utf16Length s) && res.written == some s.utf8ByteSize) s!"{repr s}: read {res.read} written {res.written}"
  -- ∀ b : ByteArray, (fatal UTF-8 decode b succeeds ↔ String.fromUTF8? b ≠ none) ∧ (decode b = (String.fromUTF8? b).get)
  for i in [0:300] do
    let (s, g1) := g.string 12
    let (cut, g2) := g1.below (s.utf8ByteSize + 1)
    let (flip, g3) := g2.below 4
    let (pos, g4) := g3.below (s.utf8ByteSize + 1)
    let (byte, g5) := g4.below 256
    g := g5
    let b0 := s.toUTF8.extract 0 cut
    let b := if flip == 0 && pos < b0.size then b0.set! pos byte.toUInt8 else b0
    let lean := String.fromUTF8? b
    let js ← try some <$> (fatal.decode (some b) : Async String) catch _ => pure none
    expect r s!"utf8 validation {i}" (js == lean) s!"bytes {hex b}: TextDecoder {repr js}, Lean {repr lean}"
  -- ∀ b ∈ WPT textdecoder-fatal (utf-8), fatal decode b throws ∧ String.fromUTF8? b = none ∧ '�' ∈ decode b
  let .array bad ← jsonParse Wpt.textDecoderFatal | throw (IO.userError "fatal data is not an array")
  for c in bad do
    let b := match c.field "input" with
      | .array xs => bytesOf (xs.toList.map fun | .number n => n.toUInt8.toNat | _ => 0)
      | _ => .empty
    let name := s!"fatal {str (c.field "name")}"
    expect r name ((← throws (fatal.decode (some b) : Async String)) && (String.fromUTF8? b).isNone) s!"bytes {hex b}"
    expect r s!"{name} replacement" ((← dec.decode (some b)).contains '�') ""
  -- BOM: decode (EF BB BF 41) = "A"; with ignoreBOM, "﻿A"
  let bom := bytesOf [0xEF, 0xBB, 0xBF, 0x41]
  let keep ← TextDecoder.new none (some { ignoreBOM := some true })
  expect r "BOM" ((← dec.decode (some bom)) == "A" && (← keep.decode (some bom)) == "﻿A") ""
  -- Streaming: decode (E2 82, stream) ++ decode (AC) = "€"
  let a ← dec.decode (some (bytesOf [0xE2, 0x82])) (some { stream := some true })
  let b ← dec.decode (some (bytesOf [0xAC]))
  expect r "streaming decode" (a ++ b == "€") s!"{repr a} {repr b}"
  -- Labels (Encoding Standard's table): "UTF8" names utf-8, "latin1" names windows-1252, where 0x80 is €
  let latin ← TextDecoder.new (some "latin1")
  expect r "labels" ((← (← TextDecoder.new (some "UTF8")).encoding) == "utf-8" && (← latin.encoding) == "windows-1252"
    && (← latin.decode (some (bytesOf [0x80, 0x41]))) == "€A") ""
  expect r "unknown label throws" (← throws (TextDecoder.new (some "no-such-encoding"))) ""

/-! Base64 and structured cloning -/

def latin1 (g : Rng) (n : Nat) : String × Rng := Id.run do
  let mut g := g
  let mut s := ""
  for _ in [0:n] do
    let (x, g') := g.below 256; g := g'
    s := s.push (Char.ofNat x)
  return (s, g)

/-- Random plain data: what structured cloning copies. -/
partial def randomData (g : Rng) (depth : Nat) : Data × Rng :=
  let (k, g) := g.below (if depth == 0 then 5 else 8)
  match k with
  | 0 => (.null, g)
  | 1 => let (b, g) := g.below 2; (.bool (b == 1), g)
  | 2 => let (x, g) := g.next; (.number (Float.ofNat (x % 100000) / 8), g)
  | 3 => let (s, g) := g.string 8; (.string s, g)
  | 4 => let (b, g) := g.bytes 8; (.bytes b, g)
  | 5 => let (n, g) := g.below 4
         let (xs, g) := (List.range n).foldl (fun (acc, g) _ => let (d, g) := randomData g (depth - 1); (acc.push d, g)) (#[], g)
         (.array xs, g)
  | _ => let (n, g) := g.below 4
         let (xs, g) := (List.range n).foldl (fun (acc, g) j => let (d, g) := randomData g (depth - 1); (acc.push (s!"k{j}", d), g)) (#[], g)
         (.object xs, g)

def globals (r : Checks) : Async Unit := do
  -- RFC 4648 §10 test vectors: btoa
  for (plain, coded) in [("", ""), ("f", "Zg=="), ("fo", "Zm8="), ("foo", "Zm9v"), ("foob", "Zm9vYg=="), ("fooba", "Zm9vYmE="), ("foobar", "Zm9vYmFy")] do
    expect r s!"btoa {plain}" ((← btoa plain) == coded && (← atob coded) == plain) ""
  -- ∀ s : Latin-1 string, atob (btoa s) = s
  let mut g : Rng := ⟨3⟩
  for i in [0:60] do
    let (n, g1) := g.below 40
    let (s, g2) := latin1 g1 n; g := g2
    expect r s!"base64 round trip {i}" ((← atob (← btoa s)) == s) s!"{repr s}"
  expect r "btoa outside Latin-1 throws" (← throws (btoa "€")) ""
  expect r "atob of invalid base64 throws" (← throws (atob "a")) ""
  expect r "atob ignores ASCII whitespace" ((← atob " Zm9v\nYmFy ") == "foobar") ""
  -- ∀ d : plain data, structuredClone d = d
  for i in [0:60] do
    let (d, g') := randomData g 3; g := g'
    let c ← structuredClone d
    expect r s!"structuredClone {i}" (dataEq c d) s!"{d.describe} → {c.describe}"
  let ua ← (← navigator).userAgent
  expect r "navigator.userAgent" (!ua.isEmpty) ""
  -- performance: 0 ≤ now₁ ≤ now₂, timeOrigin > 0, toJSON has timeOrigin
  let perf ← performance
  let t1 ← perf.now
  sleep 5
  let t2 ← perf.now
  expect r "performance.now monotonic" (0 ≤ t1 && t1 ≤ t2) s!"{t1} {t2}"
  expect r "performance.timeOrigin" ((← perf.timeOrigin) > 0) ""
  expect r "performance.toJSON" ((← perf.toJSON).field "timeOrigin" matches .number _) ""
  console.log #[.string "Lasm.JS.Web console.log check (not compared)"]
  console.count (some "lasm-web")
  expect r "console" true

/-! Timers -/

def timers (r : Checks) : Async Unit := do
  -- setTimeout runs the callback once with the given arguments, after at least the delay
  let got : IO.Ref (Option Data) ← IO.mkRef none
  let f ← JSFunction.ofFn fun args => do got.set (some (args[0]?.getD .undefined)); return .undefined
  let t0 ← (← performance).now
  discard <| setTimeout (.jsFunction f) (some 20) #[.string "arg"]
  let v ← waitFor got
  let t1 ← (← performance).now
  expect r "setTimeout runs with its arguments" (v.map (dataEq · (.string "arg")) == some true) s!"{v.map Data.describe}"
  expect r "setTimeout waits" (t1 - t0 ≥ 15) s!"{t1 - t0} ms"
  -- clearTimeout before the delay: the callback never runs
  let ran : IO.Ref (Option Unit) ← IO.mkRef none
  let g ← JSFunction.ofFn fun _ => do ran.set (some ()); return .undefined
  let id ← setTimeout (.jsFunction g) (some 30)
  clearTimeout (some id)
  sleep 80
  expect r "clearTimeout" (← ran.get).isNone ""
  -- setInterval runs repeatedly until clearInterval
  let count ← IO.mkRef 0
  let h ← JSFunction.ofFn fun _ => do count.modify (· + 1); return .undefined
  let iv ← setInterval (.jsFunction h) (some 10)
  for _ in [0:100] do
    if (← count.get) ≥ 3 then break
    sleep 10
  clearInterval (some iv)
  let n ← count.get
  sleep 50
  expect r "setInterval and clearInterval" (n ≥ 3 && (← count.get) ≤ n + 1) s!"{n} then {← count.get}"
  -- queueMicrotask runs the callback
  let micro : IO.Ref (Option Unit) ← IO.mkRef none
  queueMicrotask (← VoidFunction.ofFn (micro.set (some ())))
  expect r "queueMicrotask" (← waitFor micro).isSome ""

/-! Events and aborting -/

def events (r : Checks) : Async Unit := do
  let target ← EventTarget.new
  let calls ← IO.mkRef 0
  -- A synchronous listener runs during dispatchEvent, so its preventDefault counts
  let listener ← EventListener.ofSyncFn fun e => do calls.modify (· + 1); e.preventDefault
  target.addEventListener "ping" (some listener)
  let e ← Event.new "ping" (some { cancelable := some true })
  let notCanceled ← target.dispatchEvent e
  expect r "dispatchEvent runs listeners synchronously" ((← calls.get) == 1 && !notCanceled && (← e.defaultPrevented)) s!"calls {← calls.get}"
  expect r "event attributes" ((← e.type) == "ping" && (← e.cancelable) && !(← e.bubbles) && (← e.eventPhase) == Event.NONE) ""
  -- removeEventListener with the same handle removes it
  target.removeEventListener "ping" (some listener)
  discard <| target.dispatchEvent (← Event.new "ping")
  expect r "removeEventListener" ((← calls.get) == 1) s!"calls {← calls.get}"
  -- once: the listener runs once
  let onceCalls ← IO.mkRef 0
  let l2 ← EventListener.ofSyncFn fun _ => onceCalls.modify (· + 1)
  target.addEventListener "x" (some l2) (some (.addEventListenerOptions { once := some true }))
  for _ in [0:3] do discard <| target.dispatchEvent (← Event.new "x")
  expect r "once" ((← onceCalls.get) == 1) ""
  -- CustomEvent carries its detail
  let ce ← CustomEvent.new "c" (some { detail := obj [("n", toJS 7)] })
  expect r "CustomEvent.detail" (dataEq (← ce.detail) (obj [("n", toJS 7)])) ""
  -- An asynchronous listener (ofFn) runs after dispatch
  let asyncSeen : IO.Ref (Option String) ← IO.mkRef none
  target.addEventListener "a" (some (← EventListener.ofFn fun e => do asyncSeen.set (some (← e.type))))
  discard <| target.dispatchEvent (← Event.new "a")
  expect r "asynchronous listener" ((← waitFor asyncSeen) == some "a") ""

def aborting (r : Checks) : Async Unit := do
  let c ← AbortController.new
  let s ← c.signal
  let heard ← IO.mkRef false
  -- An inherited method through a parent structure (AbortSignal extends EventTarget)
  s.addEventListener "abort" (some (← EventListener.ofSyncFn fun _ => heard.set true))
  expect r "signal starts unaborted" (!(← s.aborted)) ""
  c.abort (.string "why")
  expect r "abort sets aborted, reason, fires abort" ((← s.aborted) && dataEq (← s.reason) (.string "why") && (← heard.get)) ""
  expect r "throwIfAborted" (← throws (s.throwIfAborted)) ""
  -- AbortSignal.abort () has an AbortError DOMException as reason
  let a ← AbortSignal.abort
  match ← a.reason with
  | .ref v _ =>
    let ex : DOMException := { val := v }
    expect r "AbortSignal.abort reason" ((← ex.name) == "AbortError" && (← ex.code) == DOMException.ABORT_ERR) ""
  | d => expect r "AbortSignal.abort reason" false d.describe
  -- AbortSignal.timeout aborts with a TimeoutError after the delay
  let t ← AbortSignal.timeout 10
  for _ in [0:100] do
    if ← t.aborted then break
    sleep 10
  let reasonName ← match ← t.reason with
    | .ref v _ => (({ val := v } : DOMException).name : IO String)
    | _ => pure ""
  expect r "AbortSignal.timeout" ((← t.aborted) && reasonName == "TimeoutError") reasonName
  -- AbortSignal.any follows its sources
  let c2 ← AbortController.new
  let any ← AbortSignal.any #[← c2.signal, ← (← AbortController.new).signal]
  expect r "AbortSignal.any before" (!(← any.aborted)) ""
  c2.abort
  expect r "AbortSignal.any after" (← any.aborted) ""
  -- onabort (an event handler attribute)
  let c3 ← AbortController.new
  let s3 ← c3.signal
  let viaHandler ← IO.mkRef false
  s3.setOnabort (some (← EventHandlerNonNull.ofSyncFn fun _ => do viaHandler.set true; return .undefined))
  c3.abort
  expect r "onabort" ((← viaHandler.get) && (← s3.onabort).isSome) ""
  -- DOMException
  let ex ← DOMException.new (some "m") (some "NotFoundError")
  expect r "DOMException" ((← ex.message) == "m" && (← ex.name) == "NotFoundError" && (← ex.code) == DOMException.NOT_FOUND_ERR) ""

/-! Messaging -/

def messaging (r : Checks) : Async Unit := do
  let ch ← MessageChannel.new
  let p1 ← ch.port1
  let p2 ← ch.port2
  let got : IO.Ref (Option Data) ← IO.mkRef none
  p2.setOnmessage (some (← EventHandlerNonNull.ofFn fun e => do
    let m : MessageEvent := { val := e.val }
    got.set (some (← m.data)); return .undefined))
  -- ∀ d plain, the message received is a structured clone of d
  let msg := obj [("a", toJS 1), ("b", .array #[.string "x", .bytes (bytesOf [1, 2])])]
  p1.postMessageWithOptions msg
  let v ← waitFor got
  expect r "MessageChannel" ((v.map (dataEq · msg)) == some true) s!"{v.map Data.describe}"
  p1.close; p2.close
  let me ← MessageEvent.new "message" (some { data := .string "d", origin := some "o" })
  expect r "MessageEvent" (dataEq (← me.data) (.string "d") && (← me.origin) == "o" && (← me.ports).isEmpty) ""
  let ee ← ErrorEvent.new "error" (some { message := some "boom", lineno := some 3 })
  expect r "ErrorEvent" ((← ee.message) == "boom" && (← ee.lineno) == 3) ""
  let pr ← PromiseRejectionEvent.new "unhandledrejection" { promise := toJS (← promiseResolve .null), reason := .string "r" }
  expect r "PromiseRejectionEvent" (dataEq (← pr.reason) (.string "r")) ""

/-! Fetch: Headers, Request, Response, FormData, fetch -/

def fetching (r : Checks) : Async Unit := do
  let h ← Headers.new (some (.record ⟨#[("Content-Type", "text/plain"), ("X-A", "1")]⟩))
  h.append "x-a" "2"
  expect r "headers are case-insensitive and combine" ((← h.get "content-type") == some "text/plain" && (← h.get "X-A") == some "1, 2") ""
  h.append "Set-Cookie" "a=1"; h.append "Set-Cookie" "b=2"
  expect r "getSetCookie" ((← h.getSetCookie) == #["a=1", "b=2"]) s!"{← h.getSetCookie}"
  -- Iteration: sorted, lowercased names, combined values, set-cookie not combined
  expect r "headers entries" ((← h.entries) == #[("content-type", "text/plain"), ("set-cookie", "a=1"), ("set-cookie", "b=2"), ("x-a", "1, 2")]) s!"{← h.entries}"
  h.delete "x-a"
  expect r "headers delete/has" (!(← h.has "X-A") && (← h.has "content-type")) ""
  expect r "invalid header name throws" (← throws (h.append "bad name" "x")) ""
  let h2 ← Headers.new (some (.sequence #[#["a", "1"], #["a", "2"]]))
  expect r "headers from pairs" ((← h2.get "a") == some "1, 2") ""
  -- Request
  let req ← Request.new (.usvString "https://example.com/p?q=1") (some { method := some "POST", body := some (.usvString "hello"), headers := some (.record ⟨#[("x-y", "z")]⟩) })
  let copy ← req.clone
  expect r "request attributes" ((← req.method) == "POST" && (← req.url) == "https://example.com/p?q=1"
    && (← (← req.headers).get "x-y") == some "z" && (← req.redirect) == .follow && !(← req.bodyUsed)) ""
  expect r "request body" ((← req.text) == "hello" && (← req.bodyUsed) && (← copy.text) == "hello") ""
  expect r "request of a request" ((← (← Request.new (.request copy)).url) == "https://example.com/p?q=1") ""
  expect r "GET with a body throws" (← throws (Request.new (.usvString "https://example.com/") (some { body := some (.usvString "x") }))) ""
  -- Response
  let res ← Response.new (some (.usvString "body")) (some { status := some 201, statusText := some "Created", headers := some (.record ⟨#[("x", "y")]⟩) })
  expect r "response attributes" ((← res.status) == 201 && (← res.ok) && (← res.statusText) == "Created" && (← res.type) == .default
    && (← (← res.headers).get "x") == some "y") ""
  expect r "response text" ((← res.text) == "body") ""
  let j ← Response.staticJson (obj [("a", toJS 1), ("b", .array #[.bool true])])
  expect r "Response.json" (dataEq (← j.json) (obj [("a", toJS 1), ("b", .array #[.bool true])]) && (← (← j.headers).get "content-type") == some "application/json") ""
  let e ← Response.error
  expect r "Response.error" ((← e.type) == .error && (← e.status) == 0) ""
  let red ← Response.redirect "https://example.com/next" (some 301)
  expect r "Response.redirect" ((← red.status) == 301 && (← (← red.headers).get "location") == some "https://example.com/next") ""
  expect r "invalid status throws" (← throws (Response.new none (some { status := some 99 }))) ""
  -- ∀ b : ByteArray, (Response b).bytes = b ∧ (Response b).arrayBuffer = b
  let mut g : Rng := ⟨11⟩
  for i in [0:20] do
    let (b, g') := g.bytes 600; g := g'
    expect r s!"response bytes {i}" ((← (← Response.new (some (.bufferSource b))).bytes).data == b.data) ""
    expect r s!"response arrayBuffer {i}" ((← (← Response.new (some (.bufferSource b))).arrayBuffer).data == b.data) ""
  -- Bodies from Blob, FormData, URLSearchParams and streams
  let blob ← Blob.new (some #[.usvString "from blob"])
  expect r "body from Blob" ((← (← Response.new (some (.blob blob))).text) == "from blob") ""
  let usp ← URLSearchParams.new (some (.usvString "a=1&b=2"))
  let ur ← Response.new (some (.urlSearchParams usp))
  expect r "body from URLSearchParams" ((← (← ur.headers).get "content-type") == some "application/x-www-form-urlencoded;charset=UTF-8" && (← ur.text) == "a=1&b=2") ""
  let fd ← FormData.new
  fd.append "k" "v"
  let fr ← Response.new (some (.formData fd))
  let back ← fr.formData
  expect r "body from FormData (multipart round trip)" ((← back.get "k").map (fun | .usvString s => s | _ => "") == some "v") ""
  let rs ← Blob.new (some #[.usvString "streamed"])
  expect r "body from a stream" ((← (← Response.new (some (.readableStream (← rs.stream)))).text) == "streamed") ""
  match ← (← Response.new (some (.usvString "abc"))).body with
  | some s =>
    let chunks ← readAll s
    let bytes := chunks.foldl (fun acc d => match d with | .bytes b => acc ++ b | _ => acc) .empty
    expect r "response.body" (bytes.data == "abc".toUTF8.data) ""
  | none => expect r "response.body" false "no body"
  -- fetch of a data: URL (no network)
  let fetched ← fetch (.usvString "data:text/plain;charset=utf-8,hello%20world")
  expect r "fetch data: URL" ((← fetched.text) == "hello world" && (← fetched.status) == 200) ""
  expect r "fetch of an invalid URL rejects" (← throws (fetch (.usvString "http://[::1"))) ""
  -- FormData
  let form ← FormData.new
  form.append "a" "1"; form.append "a" "2"
  form.appendWithBlobValue "f" (← Blob.new (some #[.bufferSource (bytesOf [1, 2, 3])])) (some "x.bin")
  let names := (← form.getAll "a").map fun | .usvString s => s | _ => "?"
  expect r "FormData getAll" (names == #["1", "2"]) ""
  match ← form.get "f" with
  | some (.file f) => expect r "FormData file entry" ((← f.name) == "x.bin" && (← f.size) == 3) ""
  | _ => expect r "FormData file entry" false "not a file"
  form.set "a" "3"; form.delete "f"
  expect r "FormData set/delete/keys" ((← form.keys) == #["a"] && !(← form.has "f")) ""

/-! Blob and File -/

def files (r : Checks) : Async Unit := do
  let inner ← Blob.new (some #[.usvString "c"])
  let b ← Blob.new (some #[.usvString "ab", .bufferSource "€".toUTF8, .blob inner]) (some { type := some "Text/Plain" })
  -- size is the sum of the parts' byte lengths; type is lowercased
  expect r "blob size and type" ((← b.size) == 2 + 3 + 1 && (← b.type) == "text/plain") ""
  expect r "blob text" ((← b.text) == "ab€c") ""
  expect r "blob bytes" ((← b.bytes).data == "ab€c".toUTF8.data && (← b.arrayBuffer).data == "ab€c".toUTF8.data) ""
  -- ∀ i ≤ j ≤ |b|, (b.slice i j).bytes = b.bytes[i:j]
  let all ← b.bytes
  for (i, j) in [(0, 0), (0, 2), (1, 4), (2, 6), (5, 6), (3, 99)] do
    expect r s!"blob slice {i} {j}" ((← (← b.slice (some i) (some j)).bytes).data == (all.extract i.toNat j.toNat).data) ""
  expect r "blob negative slice" ((← (← b.slice (some (-1))).text) == "c") ""
  let chunks ← readAll (← b.stream)
  let streamed := chunks.foldl (fun acc d => match d with | .bytes x => acc ++ x | _ => acc) .empty
  expect r "blob stream" (streamed.data == all.data) ""
  let f ← File.new #[.usvString "data"] "notes.txt" (some { lastModified := some 42, type := some "text/plain" })
  -- File extends Blob: Blob's methods apply to a File
  expect r "file" ((← f.name) == "notes.txt" && (← f.lastModified) == 42 && (← f.size) == 4 && (← f.text) == "data" && (← f.type) == "text/plain") ""
  let objectUrl ← URL.createObjectURL (.blob b)
  expect r "URL.createObjectURL" (objectUrl.startsWith "blob:") objectUrl
  URL.revokeObjectURL objectUrl

/-! Streams -/

def streams (r : Checks) : Async Unit := do
  -- A pushing source: start enqueues and closes (a synchronous callback)
  let start ← UnderlyingSourceStartCallback.ofSyncFn fun c => do
    let ctl : ReadableStreamDefaultController := { val := c }
    for x in ["a", "b", "c"] do ctl.enqueue (.string x)
    ctl.close
    return .undefined
  let s ← ReadableStream.new (toJS ({ start := some start } : UnderlyingSource))
  expect r "source with start" ((← readAll s).map str == #["a", "b", "c"]) ""
  -- A pulling source: pull (asynchronous) enqueues until 3
  let n ← IO.mkRef 0
  let pull ← UnderlyingSourcePullCallback.ofFn fun c => do
    let ctl : ReadableStreamDefaultController := { val := c }
    let i ← n.modifyGet fun i => (i, i + 1)
    if i < 3 then ctl.enqueue (toJS i) else ctl.close
  let s2 ← ReadableStream.new (toJS ({ pull := some pull } : UnderlyingSource))
  let pulled ← readAll s2
  expect r "source with pull" (pulled.size == 3 && dataEq pulled[2]! (toJS 2)) s!"{pulled.map Data.describe}"
  -- tee: both branches see every chunk
  let src ← Blob.new (some #[.usvString "tee"])
  let branches ← (← src.stream).tee
  match branches[0]?, branches[1]? with
  | some b1, some b2 =>
    let one ← readAll b1
    let two ← readAll b2
    expect r "tee" (branches.size == 2 && one.size == two.size && (one.zip two).all fun (x, y) => dataEq x y) ""
  | _, _ => expect r "tee" false s!"{branches.size} branches"
  -- A sink: writes arrive in order, then close
  let written : IO.Ref (Array String) ← IO.mkRef #[]
  let closed ← IO.mkRef false
  let write ← UnderlyingSinkWriteCallback.ofFn fun chunk _ => written.modify (·.push (str chunk))
  let close ← UnderlyingSinkCloseCallback.ofFn (closed.set true)
  let ws ← WritableStream.new (toJS ({ write := some write, close := some close } : UnderlyingSink))
  let w ← ws.getWriter
  for x in ["1", "2", "3"] do w.write (.string x)
  w.close
  expect r "sink" ((← written.get) == #["1", "2", "3"] && (← closed.get)) s!"{← written.get}"
  -- A transform stream (asynchronous transform), through pipeThrough
  let upper ← TransformerTransformCallback.ofFn fun chunk c => c.enqueue (.string (str chunk).toUpper)
  let ts ← TransformStream.new (toJS ({ transform := some upper } : Transformer))
  let start2 ← UnderlyingSourceStartCallback.ofSyncFn fun c => do
    let ctl : ReadableStreamDefaultController := { val := c }
    ctl.enqueue (.string "x"); ctl.enqueue (.string "yz"); ctl.close; return .undefined
  let piped ← (← ReadableStream.new (toJS ({ start := some start2 } : UnderlyingSource))).pipeThrough
    { readable := ← ts.readable, writable := ← ts.writable }
  expect r "transform stream" ((← readAll piped).map str == #["X", "YZ"]) ""
  -- pipeTo into a sink
  let sunk : IO.Ref (Array String) ← IO.mkRef #[]
  let w2 ← UnderlyingSinkWriteCallback.ofFn fun chunk _ => sunk.modify (·.push (str chunk))
  let dest ← WritableStream.new (toJS ({ write := some w2 } : UnderlyingSink))
  let start3 ← UnderlyingSourceStartCallback.ofSyncFn fun c => do
    let ctl : ReadableStreamDefaultController := { val := c }
    ctl.enqueue (.string "p"); ctl.close; return .undefined
  (← ReadableStream.new (toJS ({ start := some start3 } : UnderlyingSource))).pipeTo dest
  expect r "pipeTo" ((← sunk.get) == #["p"]) ""
  -- A queuing strategy's size (a synchronous callback): desiredSize = highWaterMark - Σ size
  let size ← QueuingStrategySize.ofSyncFn fun _ => pure 2
  let ctlRef : IO.Ref (Option Value) ← IO.mkRef none
  let start4 ← UnderlyingSourceStartCallback.ofSyncFn fun c => do ctlRef.set (some c); return .undefined
  discard <| ReadableStream.new (toJS ({ start := some start4 } : UnderlyingSource)) (some { highWaterMark := some 10, size := some size })
  match ← ctlRef.get with
  | some c =>
    let ctl : ReadableStreamDefaultController := { val := c }
    ctl.enqueue (.string "chunk")
    expect r "queuing strategy size" ((← ctl.desiredSize) == some 8) s!"{← ctl.desiredSize}"
  | none => expect r "queuing strategy size" false "start did not run"
  let cqs ← CountQueuingStrategy.new { highWaterMark := 4 }
  let blqs ← ByteLengthQueuingStrategy.new { highWaterMark := 16 }
  expect r "queuing strategies" ((← cqs.highWaterMark) == 4 && (← blqs.highWaterMark) == 16) ""
  -- A byte stream read with a BYOB reader
  let start5 ← UnderlyingSourceStartCallback.ofSyncFn fun c => do
    let ctl : ReadableByteStreamController := { val := c }
    ctl.enqueue (bytesOf [1, 2, 3, 4, 5]); ctl.close; return .undefined
  let bs ← ReadableStream.new (toJS ({ start := some start5, type := some .bytes } : UnderlyingSource))
  let reader : ReadableStreamBYOBReader := { val := ← bs.getReader (some { mode := some .byob }) }
  let first ← reader.read (ByteArray.mk (Array.replicate 3 0))
  expect r "BYOB read" (dataEq first.value (.bytes (bytesOf [1, 2, 3]))) first.value.describe
  -- Text streams: ∀ chunks, decode (encode chunks) = concatenation
  let te ← TextEncoderStream.new
  let td ← TextDecoderStream.new
  let start6 ← UnderlyingSourceStartCallback.ofSyncFn fun c => do
    let ctl : ReadableStreamDefaultController := { val := c }
    for x in ["h€", "llo ", "𝄞"] do ctl.enqueue (.string x)
    ctl.close; return .undefined
  let text ← ((← (← ReadableStream.new (toJS ({ start := some start6 } : UnderlyingSource))).pipeThrough
    { readable := ← te.readable, writable := ← te.writable }).pipeThrough { readable := ← td.readable, writable := ← td.writable })
  expect r "text encoder and decoder streams" (String.join ((← readAll text).map str).toList == "h€llo 𝄞") ""

/-! Compression: ∀ b : ByteArray, ∀ f ∈ {gzip, deflate, deflate-raw}, decompress f (compress f b) = b -/

def compression (r : Checks) : Async Unit := do
  let mut g : Rng := ⟨5⟩
  for format in [CompressionFormat.gzip, .deflate, .deflateRaw] do
    for i in [0:8] do
      let (b, g') := g.bytes 3000; g := g'
      -- Compressible input half the time: repeat it
      let b := if i % 2 == 0 then b ++ b ++ b else b
      let c ← CompressionStream.new format
      let d ← DecompressionStream.new format
      let source ← (← Blob.new (some #[.bufferSource b])).stream
      let compressed ← source.pipeThrough { readable := ← c.readable, writable := ← c.writable }
      let out ← compressed.pipeThrough { readable := ← d.readable, writable := ← d.writable }
      let back ← (← Response.new (some (.readableStream out))).bytes
      expect r s!"compression {repr format} {i}" (back.data == b.data) s!"{b.size} bytes → {back.size}"
  expect r "invalid compressed data errors" (← throws do
    let d ← DecompressionStream.new .gzip
    let source ← (← Blob.new (some #[.bufferSource (bytesOf [1, 2, 3, 4])])).stream
    let out ← source.pipeThrough { readable := ← d.readable, writable := ← d.writable }
    let _ ← (← Response.new (some (.readableStream out))).bytes) ""

/-! Web Crypto (published test vectors) -/

def digests : List (String × String × String) := [
  ("SHA-1", "abc", "a9993e364706816aba3e25717850c26c9cd0d89d"),
  ("SHA-256", "abc", "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"),
  ("SHA-384", "abc", "cb00753f45a35e8bb5a03d699ac65007272c32ab0eded1631a8b605a43ff5bed8086072ba1e7cc2358baeca134c825a7"),
  ("SHA-512", "abc", "ddaf35a193617abacc417349ae20413112e6fa4e89a97ea20a9eeee64b55d39a2192992a274fc1a836ba3c23a3feebbd454d4423643ce80e2a9ac94fa54ca49f"),
  ("SHA-256", "", "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"),
  ("SHA-256", "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq", "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1")]

def alg (name : String) : AlgorithmIdentifier := .domString name

def cryptography (r : Checks) : Async Unit := do
  let c ← crypto
  let s ← c.subtle
  -- FIPS 180 test vectors: digest alg msg = want
  for (a, msg, want) in digests do
    let d ← s.digest (alg a) msg.toUTF8
    expect r s!"digest {a} {repr msg}" (hex d == want) s!"got {hex d}"
  expect r "unknown digest rejects" (← throws (s.digest (alg "SHA-0") "x".toUTF8)) ""
  -- RFC 4231 test cases 1 and 2: HMAC-SHA-256
  for (key, msg, want) in [(ByteArray.mk (Array.replicate 20 0x0b), "Hi There", "b0344c61d8db38535ca8afceaf0bf12b881dc200c9833da726e9376c2e32cff7"),
      ("Jefe".toUTF8, "what do ya want for nothing?", "5bdcc146bf60754e6a042426089575c75a003f089d2739839dec58b964ec3843")] do
    let k ← s.importKey .raw (.bufferSource key) (.object (toJS ({ name := "HMAC", hash := alg "SHA-256" } : HmacImportParams))) true #[.sign, .verify]
    let mac ← s.sign (alg "HMAC") k msg.toUTF8
    expect r s!"HMAC {repr msg}" (hex mac == want) s!"got {hex mac}"
    expect r s!"HMAC verify {repr msg}" ((← s.verify (alg "HMAC") k mac msg.toUTF8) && !(← s.verify (alg "HMAC") k mac (msg ++ "!").toUTF8)) ""
    -- exportKey raw (an ArrayBuffer) returns the key; jwk returns an oct key
    match ← s.exportKey .raw k with
    | .arrayBuffer raw => expect r s!"exportKey raw {repr msg}" (raw.data == key.data) ""
    | _ => expect r s!"exportKey raw {repr msg}" false "not an ArrayBuffer"
    match ← s.exportKey .jwk k with
    | .jsonWebKey j => expect r s!"exportKey jwk {repr msg}" (j.kty == some "oct" && j.alg == some "HS256" && j.ext == some true) s!"{repr j.kty} {repr j.alg}"
    | _ => expect r s!"exportKey jwk {repr msg}" false "not a JsonWebKey"
    expect r s!"CryptoKey attributes {repr msg}" ((← k.type) == .secret && (← k.extractable)) ""
  -- The GCM specification's test case 2: AES-128-GCM, zero key and IV, 16 zero bytes
  let zeroKey ← s.importKey .raw (.bufferSource (ByteArray.mk (Array.replicate 16 0))) (alg "AES-GCM") false #[.encrypt, .decrypt]
  let gcm := toJS ({ name := "AES-GCM", iv := ByteArray.mk (Array.replicate 12 0) } : AesGcmParams)
  let ct ← s.encrypt (.object gcm) zeroKey (ByteArray.mk (Array.replicate 16 0))
  expect r "AES-GCM test case 2" (hex ct == "0388dace60b6a392f328c2b971b2fe78" ++ "ab6e47d42cec13bdf53a67b21257bddf") s!"got {hex ct}"
  -- RFC 3602 case 1: AES-128-CBC (Web Crypto adds PKCS#7 padding: one more block)
  let cbcKey ← s.importKey .raw (.bufferSource (ofHex "06a9214036b8a15b512e03d534120006")) (alg "AES-CBC") false #[.encrypt, .decrypt]
  let cbc := toJS ({ name := "AES-CBC", iv := ofHex "3dafba429d9eb430b422da802c9fac41" } : AesCbcParams)
  let cbcCt ← s.encrypt (.object cbc) cbcKey "Single block msg".toUTF8
  expect r "AES-CBC RFC 3602" (cbcCt.size == 32 && hex (cbcCt.extract 0 16) == "e353779c1079aeb82708942dbe77181a") s!"got {hex cbcCt}"
  expect r "AES-CBC decrypt" ((← s.decrypt (.object cbc) cbcKey cbcCt).data == "Single block msg".toUTF8.data) ""
  -- ∀ m : ByteArray, decrypt k (encrypt k m) = m ∧ |encrypt k m| = |m| + 16 (AES-256-GCM, generated key)
  let .cryptoKey gk ← s.generateKey (.object (toJS ({ name := "AES-GCM", length := 256 } : AesKeyGenParams))) false #[.encrypt, .decrypt]
    | throw (IO.userError "generateKey AES-GCM returned a key pair")
  let mut g : Rng := ⟨13⟩
  for i in [0:20] do
    let (m, g1) := g.bytes 300
    let (iv, g2) := g1.bytes 0; g := g2
    let iv := iv ++ (← c.getRandomValues (ByteArray.mk (Array.replicate 12 0)))
    let p := Data.object #[("name", .string "AES-GCM"), ("iv", .bytes iv)]
    let e ← s.encrypt (.object p) gk m
    let d ← s.decrypt (.object p) gk e
    expect r s!"AES-GCM round trip {i}" (d.data == m.data && e.size == m.size + 16) ""
  -- Tampering is detected: decrypt k (flip e) rejects
  let p := Data.object #[("name", .string "AES-GCM"), ("iv", .bytes (ByteArray.mk (Array.replicate 12 1)))]
  let e ← s.encrypt (.object p) gk "secret".toUTF8
  expect r "AES-GCM tamper" (← throws (s.decrypt (.object p) gk (e.set! 0 (e.get! 0 ^^^ 1)))) ""
  -- RFC 6070 test vectors 1 and 2: PBKDF2-HMAC-SHA-1
  let pw ← s.importKey .raw (.bufferSource "password".toUTF8) (alg "PBKDF2") false #[.deriveBits]
  for (iterations, want) in [(1, "0c60c80f961f0e71f3a9b524af6012062fe037a6"), (2, "ea6c014dc72d6f8ccd1ed92ace1d41f0d8de8957")] do
    let bits ← s.deriveBits (.object (toJS ({ name := "PBKDF2", salt := "salt".toUTF8, iterations, hash := alg "SHA-1" } : Pbkdf2Params))) pw (some 160)
    expect r s!"PBKDF2 c={iterations}" (hex bits == want) s!"got {hex bits}"
  -- RFC 5869 test case 1: HKDF-SHA-256
  let ikm ← s.importKey .raw (.bufferSource (ByteArray.mk (Array.replicate 22 0x0b))) (alg "HKDF") false #[.deriveBits]
  let okm ← s.deriveBits (.object (toJS ({ name := "HKDF", hash := alg "SHA-256", salt := ofHex "000102030405060708090a0b0c", info := ofHex "f0f1f2f3f4f5f6f7f8f9" } : HkdfParams))) ikm (some 336)
  expect r "HKDF RFC 5869" (hex okm == "3cb25f25faacd57a90434f64d0362f2a2d2d0a90cf1a5a4c5db02d56ecc4c5bf34007208d5b887185865") s!"got {hex okm}"
  -- ECDSA P-256: ∀ m, verify pk (sign sk m) m ∧ ¬ verify pk (sign sk m) (m ++ "!")
  let .cryptoKeyPair pair ← s.generateKey (.object (toJS ({ name := "ECDSA", namedCurve := "P-256" } : EcKeyGenParams))) true #[.sign, .verify]
    | throw (IO.userError "generateKey ECDSA returned one key")
  let ecdsa := AlgorithmIdentifier.object (toJS ({ name := "ECDSA", hash := alg "SHA-256" } : EcdsaParams))
  match pair.privateKey, pair.publicKey with
  | some sk, some pk =>
    for i in [0:5] do
      let (m, g') := g.bytes 100; g := g'
      let sig ← s.sign ecdsa sk m
      expect r s!"ECDSA {i}" (sig.size == 64 && (← s.verify ecdsa pk sig m) && !(← s.verify ecdsa pk sig (m.push 0))) ""
    expect r "key pair types" ((← sk.type) == .private && (← pk.type) == .public) ""
  | _, _ => expect r "ECDSA key pair" false "missing keys"
  -- getRandomValues: length preserved, values vary; randomUUID: RFC 9562 version 4 format
  let a ← c.getRandomValues (ByteArray.mk (Array.replicate 32 0))
  let b ← c.getRandomValues (ByteArray.mk (Array.replicate 32 0))
  expect r "getRandomValues" (a.size == 32 && a.data != b.data) ""
  expect r "getRandomValues over 65536 bytes throws" (← throws (c.getRandomValues (ByteArray.mk (Array.replicate 65537 0)))) ""
  for i in [0:5] do
    let u ← c.randomUUID
    let cs := u.toList
    let ok := cs.length == 36 && [8, 13, 18, 23].all (cs[·]! == '-') && cs[14]! == '4' && "89ab".contains cs[19]!
      && (cs.filter (· != '-')).all fun ch => ch.isDigit || ('a' ≤ ch ∧ ch ≤ 'f')
    expect r s!"randomUUID {i}" ok u

/-! WebAssembly (a module exporting `add`, written by hand) -/

def addModule : ByteArray := bytesOf [0x00, 0x61, 0x73, 0x6d, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x07, 0x01, 0x60, 0x02, 0x7f, 0x7f, 0x01, 0x7f, 0x03, 0x02, 0x01, 0x00,
  0x07, 0x07, 0x01, 0x03, 0x61, 0x64, 0x64, 0x00, 0x00,
  0x0a, 0x09, 0x01, 0x07, 0x00, 0x20, 0x00, 0x20, 0x01, 0x6a, 0x0b]

def wasmValidate (r : Checks) : Async Unit := do
  expect r "validate" ((← WebAssembly.validate addModule) && !(← WebAssembly.validate (bytesOf [0, 1, 2, 3]))) ""
  let mem ← WebAssembly.Memory.new { initial := toJS 1 }
  expect r "Memory" ((← mem.buffer).size == 65536 && dataEq (← mem.grow (toJS 1)) (toJS 1) && (← mem.buffer).size == 131072) ""
  let glob ← WebAssembly.Global.new { value := .i32, «mutable» := some true } (toJS 7)
  glob.setValue (toJS 8)
  expect r "Global" (dataEq (← glob.value) (toJS 8)) ""
  let table ← WebAssembly.Table.new { element := .anyfunc, initial := toJS 2 }
  expect r "Table" (dataEq (← table.length) (toJS 2)) ""
  let ce ← WebAssembly.CompileError.new (some "bad")
  expect r "CompileError" ((← ce.name) == "CompileError" && (← ce.message) == "bad") ""

/-- Compiling Wasm at run time (Cloudflare Workers forbid it). -/
def wasmCompile (r : Checks) : Async Unit := do
  let m ← WebAssembly.Module.new addModule
  let exports ← WebAssembly.Module.exports m
  expect r "Module.exports" (exports.map (fun e => (e.name, e.kind)) == #[("add", .function)]) ""
  let inst ← WebAssembly.Instance.new m
  match (← inst.exports).field "add" with
  | .ref f _ =>
    -- ∀ a b < 2^30, add a b = a + b
    let mut g : Rng := ⟨17⟩
    for i in [0:10] do
      let (a, g1) := g.below (2 ^ 30); let (b, g2) := g1.below (2 ^ 30); g := g2
      expect r s!"exported add {i}" ((← f.call #[toJS a, toJS b] Nat) == a + b) ""
  | d => expect r "Instance.exports" false d.describe
  let compiled ← WebAssembly.compile addModule
  let inst2 ← WebAssembly.instantiateWithModuleObject compiled
  expect r "compile and instantiate" ((← inst2.exports).field "add" matches .ref _ _) ""
  let src ← WebAssembly.instantiate addModule
  expect r "instantiate bytes" ((← src.instance.exports).field "add" matches .ref _ _) ""
  expect r "compile rejects invalid bytes" (← throws (WebAssembly.compile (bytesOf [0, 1, 2, 3]))) ""

/-! Availability: which generated members this runtime lacks (reported, never a failure) -/

@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool

def availability (r : Checks) : Async Unit := do
  let .object entries ← jsonParse Surface.json | throw (IO.userError "the surface is not an object")
  let g ← Lasm.JS.global
  let mut missing : Array String := #[]
  for (path, info) in entries do
    let mut cur : Option Value := some g
    for k in path.splitOn "." do
      if let some o := cur then
        cur ← if ← reflectHas o k then some <$> o.get k Value else pure none
    match cur with
    | none => missing := missing.push path
    | some v =>
      let names (key : String) : Array String := match info.field key with | .array xs => xs.map str | _ => #[]
      for m in names "namespace" ++ names "static" do
        unless ← reflectHas v m do missing := missing.push s!"{path}.{m}"
      let proto := names "prototype"
      unless proto.isEmpty do
        let p ← v.get "prototype" Value
        for m in proto do
          unless ← reflectHas p m do missing := missing.push s!"{path}.prototype.{m}"
  r.modify fun s => { s with lines := (s.lines ++ missing.map (s!"missing {·}")).push s!"availability: {missing.size} generated members missing" }

/-! Running -/

def checks : Async (String × Nat) := do
  let r ← IO.mkRef ({} : Report)
  for (name, body) in [("url", urls r), ("searchParams", searchParams r), ("urlPattern", urlPattern r), ("encoding", encoding r),
      ("globals", globals r), ("timers", timers r), ("events", events r), ("aborting", aborting r), ("messaging", messaging r),
      ("fetch", fetching r), ("files", files r), ("streams", streams r), ("compression", compression r),
      ("crypto", cryptography r), ("wasmValidate", wasmValidate r), ("wasmCompile", wasmCompile r),
      ("availability", availability r)] do
    runSection r name body
  let s ← r.get
  return ("\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n", s.failed)

def onWorkers : IO Bool := do
  if !(← onEdge) then return false
  return (← (← navigator).userAgent) == "Cloudflare-Workers"

def main : IO UInt32 := do
  if ← onWorkers then
    -- Workers allow timers and I/O only while a request is handled.
    let handler ← Lasm.JS.Function.ofFn fun _ => do
      let (text, _) ← checks
      return toJS (← Response.new (some (.usvString text)) (some { headers := some (.record ⟨#[("content-type", "text/plain; charset=utf-8")]⟩) }))
    exportDefault handler
    return 0
  let (text, failed) ← checks.block
  IO.print text
  return if failed == 0 then 0 else 1
