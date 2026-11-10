/-
Conformance program for Lasm.JS.Node (tier 2 of the standard bindings: Node's
server-essential modules, generated from Node's API docs), built for Node 26
and 24, Bun and Deno and run by scripts/bindings/test-web.mjs --fixture js-node
(docs/TESTING.md, "Standard bindings").

Every check is a property: the comment above it states the Lean proposition
it checks, over published test vectors or generated inputs (a seeded
generator, so a failure is reproducible). The oracle is, where one exists,
Lean itself (hex, base64, UTF-8 encoding and validation, byte order, list
operations) or the vector's publication; otherwise the behaviour Node's docs
state. These are properties of the JavaScript runtimes behind the bindings, so
(docs/TESTING_STRATEGY.md §4) they stay comments here, as in test/fixtures/js-web.

Output: a line `FAIL <check>: <detail>` per failed check, a line
`section <name>: <passed> passed, <failed> failed` per section, `missing …`
lines for generated members a runtime lacks, and `summary <passed> <failed>`.
-/
import Lasm.JS
import Lasm.JS.Web
import Lasm.JS.Node
import Surface
open Lasm.JS Lasm.JS.Web Lasm.JS.Node

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

/-! Oracles and generators (Lean) -/

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
def bytesEq (a b : ByteArray) : Bool := a.data == b.data

/-- RFC 4648 base64 (§4, padded) or base64url (§5, unpadded, as Node writes it). -/
def base64 (b : ByteArray) (url : Bool := false) : String := Id.run do
  let alphabet := (if url then "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_"
    else "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/").toList.toArray
  let mut out := ""
  let mut i := 0
  while i < b.size do
    let x0 := b[i]!.toNat
    let x1 := if i + 1 < b.size then b[i + 1]!.toNat else 0
    let x2 := if i + 2 < b.size then b[i + 2]!.toNat else 0
    let n := x0 * 65536 + x1 * 256 + x2
    out := out.push alphabet[n / 262144 % 64]! |>.push alphabet[n / 4096 % 64]!
    out := if i + 1 < b.size then out.push alphabet[n / 64 % 64]! else if url then out else out.push '='
    out := if i + 2 < b.size then out.push alphabet[n % 64]! else if url then out else out.push '='
    i := i + 3
  return out

/-- Latin-1: one character per byte. -/
def latin1 (b : ByteArray) : String := b.foldl (fun s x => s.push (Char.ofNat x.toNat)) ""

/-- Lexicographic order of byte strings, as -1, 0 or 1. -/
def lexCompare (a b : ByteArray) : Int :=
  let rec go : List UInt8 → List UInt8 → Int
    | [], [] => 0
    | [], _ => -1
    | _, [] => 1
    | x :: xs, y :: ys => if x < y then -1 else if x > y then 1 else go xs ys
  go a.toList b.toList

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
/-- A file name of 1 to 8 characters of [a-z0-9], with a `.ext` half the time (never starting with a dot). -/
def Rng.name (g : Rng) : String × Rng := Id.run do
  let alphabet := "abcdefghijklmnopqrstuvwxyz0123456789".toList.toArray
  let (n, g) := g.below 8
  let mut g := g
  let mut s := ""
  for _ in [0:n + 1] do
    let (x, g') := g.below alphabet.size
    s := s.push alphabet[x]!; g := g'
  let (ext, g1) := g.below 2
  if ext == 0 then return (s, g1)
  let (x, g2) := g1.below alphabet.size
  return (s ++ "." ++ toString alphabet[x]!, g2)
def Rng.names (g : Rng) (max : Nat) : List String × Rng := Id.run do
  let (n, g) := g.below max
  let mut g := g
  let mut xs := []
  for _ in [0:n + 1] do
    let (s, g') := g.name
    xs := xs ++ [s]; g := g'
  return (xs, g)

/-- The extension of a file name by path.extname's documented rule: from the last `.` of
the last portion, unless there is none or it is the portion's first character. -/
def extOf (name : String) : String :=
  match (name.toList.reverse.dropWhile (· ≠ '.')).length with
  | 0 => ""
  | 1 => ""
  | k => String.join ((name.toList.drop (k - 1)).map toString)

@[js "globalThis" "JSON.parse"] opaque jsonParse : String → IO Data
@[js "globalThis" "Reflect.has"] opaque reflectHas : Value → String → IO Bool

def str : Data → String
  | .string s => s
  | _ => ""
def textOf : Uint8ArrayOrDOMString → String
  | .domString s => s
  | .uint8Array b => String.fromUTF8! b
def bytesOfResult : Uint8ArrayOrDOMString → ByteArray
  | .uint8Array b => b
  | .domString s => s.toUTF8
def stringOf : DOMStringOrUint8Array → String
  | .domString s => s
  | .uint8Array b => String.fromUTF8! b
def bytesOfUnion : DOMStringOrUint8Array → ByteArray
  | .uint8Array b => b
  | .domString s => s.toUTF8
def numberOf : DoubleOrBigint → Float
  | .double x => x
  | .bigint i => Float.ofInt i

/-- All bytes of a web stream (through `Response`). -/
def streamBytes (s : ReadableStream) : Async ByteArray := do
  (← Response.new (some (.readableStream s))).bytes

/-! path (POSIX rules; Lean's string operations are the oracle) -/

def paths (r : Checks) : Async Unit := do
  if (← process.platform) == "win32" then return
  -- path.sep = "/" ∧ path.delimiter = ":"
  expect r "sep and delimiter" ((← path.sep) == "/" && (← path.delimiter) == ":") ""
  let mut g : Rng := ⟨0x5eed1⟩
  for i in [0:200] do
    let (xs, g1) := g.names 5; let (ys, g2) := g1.names 4; g := g2
    let rel := "/".intercalate xs
    let abs := "/" ++ rel
    -- ∀ names xs (no "." or ".."), path.join xs = String.intercalate "/" xs
    expect r s!"join {i}" ((← path.join xs.toArray) == rel) rel
    -- path.basename (join xs) = xs.getLast ∧ path.dirname (join xs) = join xs.dropLast (or ".")
    expect r s!"basename {i}" ((← path.basename rel) == xs.getLast!) rel
    expect r s!"dirname {i}" ((← path.dirname rel) == (if xs.length == 1 then "." else "/".intercalate xs.dropLast)) rel
    -- path.extname p = extOf (last name) (the documented rule)
    expect r s!"extname {i}" ((← path.extname abs) == extOf xs.getLast!) abs
    -- path.basename p (some ext) drops exactly that suffix
    let last := xs.getLast!
    let ext := extOf last
    unless ext.isEmpty || ext == last do
      expect r s!"basename suffix {i}" ((← path.basename abs (some ext)) == String.join ((last.toList.take (last.length - ext.length)).map toString)) abs
    -- isAbsolute ("/" ++ p) ∧ ¬ isAbsolute p
    expect r s!"isAbsolute {i}" ((← path.isAbsolute abs) && !(← path.isAbsolute rel)) abs
    -- normalize is idempotent, and removes "x/..", "." and "//" (no trailing "/": normalize keeps one)
    let noisy := "/" ++ "/".intercalate (xs.flatMap fun x => ["", x, ".", "zz", ".."])
    let n ← path.normalize noisy
    expect r s!"normalize {i}" (n == abs && (← path.normalize n) == n) s!"{noisy} → {n}"
    -- resolve [a, relative a b] = b for absolute a, b
    let b := "/" ++ "/".intercalate ys
    let relAB ← path.relative abs b
    expect r s!"relative/resolve {i}" ((← path.resolve #[abs, relAB]) == b) s!"{abs} → {b}: {relAB}"
    -- format (parse p) = p, and parse's parts: root "/", base = last, ext = extOf last
    let parsed ← path.parse abs
    expect r s!"parse {i}" (parsed.root == some "/" && parsed.base == some last && parsed.ext == some ext
      && parsed.dir == some (if xs.length == 1 then "/" else "/" ++ "/".intercalate xs.dropLast)) abs
    expect r s!"format∘parse {i}" ((← path.format parsed) == abs) abs
  -- matchesGlob: "*.txt" matches exactly the names whose extension is ".txt"
  for (p, m) in [("a.txt", true), ("a.txt.gz", false), ("dir/a.txt", false), ("b.md", false)] do
    expect r s!"matchesGlob {p}" ((← path.matchesGlob p "*.txt") == m) ""
  -- toNamespacedPath is the identity on POSIX
  expect r "toNamespacedPath" ((← path.toNamespacedPath "/a/b") == "/a/b") ""

/-! os -/

def operatingSystem (r : Checks) : Async Unit := do
  let platform ← process.platform
  -- os.platform () = process.platform ∧ os.arch () = process.arch
  expect r "platform" ((← os.platform) == platform && (← os.arch) == (← process.arch)) ""
  -- POSIX: os.EOL = "\n" ∧ os.devNull = "/dev/null"
  if platform != "win32" then
    expect r "EOL and devNull" ((← os.EOL) == "\n" && (← os.devNull) == "/dev/null") ""
  -- tmpdir and homedir are absolute paths
  expect r "tmpdir and homedir" ((← path.isAbsolute (← os.tmpdir)) && (← path.isAbsolute (← os.homedir))) ""
  -- 0 < freemem ≤ totalmem
  let free ← os.freemem; let total ← os.totalmem
  expect r "memory" (0 < free && free ≤ total) s!"{free} {total}"
  -- availableParallelism ≥ 1 ∧ cpus is a list (one entry per logical CPU where the runtime reports them)
  expect r "parallelism" ((← os.availableParallelism) ≥ 1) ""
  discard os.cpus
  -- loadavg has 3 entries, each ≥ 0
  let l ← os.loadavg
  expect r "loadavg" (l.size == 3 && l.all (· ≥ 0)) s!"{l}"
  -- uptime > 0 (a Float: Node returns fractional seconds; corrected in node-tier2.mjs)
  expect r "uptime" ((← os.uptime) > 0) ""
  -- endianness ∈ {"BE", "LE"}
  expect r "endianness" (["BE", "LE"].contains (← os.endianness)) ""
  -- type, release, version, machine and hostname are non-empty strings
  for (n, f) in [("type", os.type), ("release", os.release), ("version", os.version), ("machine", os.machine), ("hostname", os.hostname)] do
    expect r s!"os.{n}" (!(← f).isEmpty) ""
  if platform == "linux" then expect r "os.type on Linux" ((← os.type) == "Linux") ""
  -- userInfo has the username; networkInterfaces is an object
  expect r "userInfo" ((← os.userInfo).field "username" matches .string _) ""
  expect r "networkInterfaces" ((← os.networkInterfaces) matches .object _) ""
  -- getPriority of this process is an integer in [-20, 19]
  let p ← os.getPriority
  expect r "getPriority" (-20 ≤ p && p ≤ 19) s!"{p}"

/-! process -/

def currentProcess (r : Checks) : Async Unit := do
  -- argv has the runtime and the program: argv.size ≥ 2 and argv[0] is absolute
  let argv ← process.argv
  expect r "argv" (argv.size ≥ 2 && (← path.isAbsolute argv[0]!)) s!"{argv}"
  -- execPath is absolute
  expect r "execPath" (← path.isAbsolute (← process.execPath)) ""
  -- env is a record of strings that has PATH
  let env ← process.env
  expect r "env" (env.entries.any fun (k, v) => k == "PATH" && !v.isEmpty) ""
  -- pid > 0 ∧ ppid > 0 ∧ pid ≠ ppid
  let pid ← process.pid; let ppid ← process.ppid
  expect r "pid" (pid > 0 && ppid > 0 && pid != ppid) s!"{pid} {ppid}"
  -- version starts with "v" and versions has an entry "node" (Bun and Deno report the Node version they implement)
  let v ← process.version
  expect r "version" (v.startsWith "v" && (← process.versions).entries.any (·.1 == "node")) v
  -- exitCode is undefined while nothing set it
  expect r "exitCode" ((← process.exitCode).isNone) ""
  -- cwd is absolute; chdir d then cwd = realpath d; chdir back restores it
  let before ← process.cwd
  let tmp ← stringOf <$> fsPromises.realpath (.domString (← os.tmpdir))
  process.chdir tmp
  let inside ← process.cwd
  process.chdir before
  expect r "chdir and cwd" (inside == tmp && (← process.cwd) == before) s!"{inside} {tmp}"
  -- uptime > 0; memoryUsage has rss
  expect r "uptime" ((← process.uptime) > 0) ""
  expect r "memoryUsage" ((← process.memoryUsage).field "rss" matches .number _) ""
  -- kill pid 0 tests that the process exists (signal 0) without signalling it
  process.kill pid.toNat.toFloat (some (.double 0))
  expect r "kill with signal 0" true ""
  -- title is a string
  discard process.title
  discard process.execArgv

/-! buffer: Lean's encoders are the oracle -/

def buffers (r : Checks) : Async Unit := do
  let mut g : Rng := ⟨0xb0ff⟩
  for i in [0:300] do
    let (b, g1) := g.bytes 64; let (c, g2) := g1.bytes 64; g := g2
    -- Buffer.toString b "hex" = hex b ∧ Buffer.from (hex b) "hex" = b
    expect r s!"hex {i}" ((← Buffer.toString b (some "hex")) == hex b && bytesEq (← Buffer.from (hex b) (some "hex")) b) (hex b)
    -- base64 (RFC 4648 §4) and base64url (§5, unpadded) both ways
    expect r s!"base64 {i}" ((← Buffer.toString b (some "base64")) == base64 b && bytesEq (← Buffer.from (base64 b) (some "base64")) b) (hex b)
    expect r s!"base64url {i}" ((← Buffer.toString b (some "base64url")) == base64 b true && bytesEq (← Buffer.from (base64 b true) (some "base64url")) b) (hex b)
    -- latin1: one character per byte, both ways
    expect r s!"latin1 {i}" ((← Buffer.toString b (some "latin1")) == latin1 b && bytesEq (← Buffer.from (latin1 b) (some "latin1")) b) (hex b)
    -- isUtf8 b = ByteArray.validateUTF8 b ∧ isAscii b = ∀ x ∈ b, x < 128
    expect r s!"isUtf8 {i}" ((← buffer.isUtf8 b) == ByteArray.validateUTF8 b) (hex b)
    expect r s!"isAscii {i}" ((← buffer.isAscii b) == b.toList.all (· < 128)) (hex b)
    -- compare a b = lexicographic order ∧ equals a b = (a = b) ∧ concat [a, b] = a ++ b
    expect r s!"compare {i}" ((← Buffer.staticCompare b c) == lexCompare b c && (← Buffer.compare b c) == lexCompare b c) s!"{hex b} {hex c}"
    expect r s!"equals {i}" ((← Buffer.equals b c) == bytesEq b c && (← Buffer.equals b b)) ""
    expect r s!"concat {i}" (bytesEq (← Buffer.concat #[b, c]) (b ++ c)) ""
    -- toString with start and end decodes the slice
    let k := b.size / 2
    expect r s!"toString slice {i}" ((← Buffer.toString b (some "hex") (some k) (some b.size)) == hex (b.extract k b.size)) ""
  for i in [0:200] do
    let (s, g1) := g.string 40; g := g1
    -- Buffer.from s "utf8" = String.toUTF8 s ∧ byteLength s = utf8ByteSize s ∧ toString (toUTF8 s) = s
    expect r s!"utf8 {i}" (bytesEq (← Buffer.from s (some "utf8")) s.toUTF8 && (← Buffer.byteLength (.domString s)) == s.utf8ByteSize
      && (← Buffer.toString s.toUTF8) == s) (repr s).pretty
    -- transcode utf8 → utf16le → utf8 is the identity, and utf16le has 2 bytes per UTF-16 code unit
    let u16 ← buffer.transcode s.toUTF8 "utf8" "utf16le"
    let units := s.toList.foldl (fun n c => n + if c.toNat ≥ 0x10000 then 2 else 1) 0
    expect r s!"transcode {i}" (u16.size == 2 * units && bytesEq (← buffer.transcode u16 "utf16le" "utf8") s.toUTF8) (repr s).pretty
  -- Buffer.alloc n fills with zeros, or repeats the fill
  expect r "alloc" (bytesEq (← Buffer.alloc 4) (bytesOf [0, 0, 0, 0]) && bytesEq (← Buffer.alloc 5 (some (.domString "ab"))) "ababa".toUTF8) ""
  -- isEncoding: the documented encodings, case-insensitively, and nothing else
  for (e, ok) in [("utf8", true), ("UTF-8", true), ("hex", true), ("base64url", true), ("latin1", true), ("utf16le", true), ("nope", false)] do
    expect r s!"isEncoding {e}" ((← Buffer.isEncoding e) == ok) ""
  -- kMaxLength ≥ 2^31 - 1 (the docs: at least on 64-bit platforms)
  expect r "kMaxLength" ((← buffer.kMaxLength) ≥ 2147483647 && (← buffer.kStringMaxLength) > 0) ""

/-! crypto: published vectors -/

def hexOf : Uint8ArrayOrDOMString → String
  | .uint8Array b => hex b
  | .domString s => s
def hexOf' : DOMStringOrUint8Array → String
  | .uint8Array b => hex b
  | .domString s => s

def cryptography (r : Checks) : Async Unit := do
  -- FIPS 180-4 / RFC 1321 vectors: digest (createHash a) m = the published digest
  let vectors := [("sha256", "abc", "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"),
    ("sha256", "", "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855"),
    ("sha1", "abc", "a9993e364706816aba3e25717850c26c9cd0d89d"),
    ("sha512", "abc", "ddaf35a193617abacc417349ae20413112e6fa4e89a97ea20a9eeee64b55d39a2192992a274fc1a836ba3c23a3feebbd454d4423643ce80e2a9ac94fa54ca49f"),
    ("md5", "", "d41d8cd98f00b204e9800998ecf8427e"),
    ("sha256", "abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq", "248d6a61d20638b8e5c026930c3e6039a33ce45964ff2167f6ecedd419db06c1")]
  for (alg, msg, want) in vectors do
    let h ← crypto.createHash alg
    h.update (.domString msg)
    expect r s!"{alg}({repr msg})" (hexOf (← h.digest) == want) ""
    -- the one-shot crypto.hash and digest "hex" agree with it
    expect r s!"hash {alg}({repr msg})" (hexOf' (← crypto.hash (some alg) (.domString msg) (some (.domString "hex"))) == want) ""
  -- update is incremental: update a; update b = update (a ++ b); copy forks the state
  let h ← crypto.createHash "sha256"
  h.update (.domString "ab")
  let h2 ← h.copy
  h.update (.uint8Array "c".toUTF8)
  expect r "update and copy" (hexOf (← h.digest (some "hex")) == "ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"
    && hexOf (← h2.digest) == "fb8e20fc2e4c3f248c60c39bd652f3c1347298bb977b8b4d5903b85055620603") ""
  -- RFC 4231 test cases 1 and 2: HMAC-SHA-256
  let hm ← crypto.createHmac "sha256" (.uint8Array (ByteArray.mk (List.replicate 20 (0x0b : UInt8)).toArray))
  hm.update (.domString "Hi There")
  expect r "HMAC RFC 4231 1" (hexOf (← hm.digest) == "b0344c61d8db38535ca8afceaf0bf12b881dc200c9833da726e9376c2e32cff7") ""
  let hm2 ← crypto.createHmac "sha256" (.domString "Jefe")
  hm2.update (.domString "what do ya want for nothing?")
  expect r "HMAC RFC 4231 2" (hexOf (← hm2.digest (some "hex")) == "5bdcc146bf60754e6a042426089575c75a003f089d2739839dec58b964ec3843") ""
  -- RFC 6070: PBKDF2-HMAC-SHA1
  expect r "pbkdf2 RFC 6070 1" (hex (← crypto.pbkdf2 (.domString "password") (.domString "salt") 1 20 "sha1") == "0c60c80f961f0e71f3a9b524af6012062fe037a6") ""
  expect r "pbkdf2 RFC 6070 2" (hex (← crypto.pbkdf2 (.domString "password") (.domString "salt") 4096 20 "sha1") == "4b007901b765489abead49d926f721d065a429c1") ""
  -- RFC 7914 §12: scrypt
  expect r "scrypt RFC 7914 1" (hex (← crypto.scrypt (.domString "") (.domString "") 64 (some { N := some 16, r := some 1, p := some 1 }))
    == "77d6576238657b203b19ca42c18a0497f16b4844e3074ae8dfdffa3fede21442fcd0069ded0948f8326a753a0fc81f17e8d3e0fb2e0d3628cf35e20c38d18906") ""
  expect r "scrypt RFC 7914 2" (hex (← crypto.scrypt (.domString "password") (.domString "NaCl") 64 (some { N := some 1024, r := some 8, p := some 16 }))
    == "fdbabe1c9d3472007856e7190d01e9fe7c6ad7cbc8237830e77376634b3731622eaf30d92e22a3886ff109279d9830dac727afb94a83ee6d8360cbdfa2cc0640") ""
  -- RFC 5869 test case 1: HKDF-SHA-256
  let okm ← crypto.hkdf "sha256" (.uint8Array (ByteArray.mk (List.replicate 22 (0x0b : UInt8)).toArray)) (.uint8Array (ofHex "000102030405060708090a0b0c"))
    (.uint8Array (ofHex "f0f1f2f3f4f5f6f7f8f9")) 42
  expect r "hkdf RFC 5869 1" (hex okm == "3cb25f25faacd57a90434f64d0362f2a2d2d0a90cf1a5a4c5db02d56ecc4c5bf34007208d5b887185865") (hex okm)
  -- timingSafeEqual a b = (a = b) for equal-length a, b
  let mut g : Rng := ⟨0xc0de⟩
  for i in [0:50] do
    let (a, g1) := g.bytes 32; let (x, g2) := g1.below 256; g := g2
    let b := if a.size == 0 then a else a.set! 0 x.toUInt8
    expect r s!"timingSafeEqual {i}" ((← crypto.timingSafeEqual a b) == bytesEq a b && (← crypto.timingSafeEqual a a)) ""
  -- randomBytes n has n bytes; randomInt lo hi ∈ [lo, hi); randomUUID is a version-4 UUID
  expect r "randomBytes" ((← crypto.randomBytes 33).size == 33) ""
  let mut inRange := true
  for _ in [0:200] do
    let x ← crypto.randomIntWithMin (-5) 7
    let y ← crypto.randomInt 3
    inRange := inRange && -5 ≤ x && x < 7 && 0 ≤ y && y < 3
  expect r "randomInt" inRange ""
  let u ← crypto.randomUUID
  let cs := u.toList
  expect r "randomUUID" (cs.length == 36 && cs[14]! == '4' && ['8', '9', 'a', 'b'].contains cs[19]! && cs[8]! == '-' && cs[13]! == '-') u
  -- getHashes lists sha256
  expect r "getHashes" ((← crypto.getHashes).contains "sha256") ""

/-! fs (in a fresh temporary directory) -/

def fileChecks (r : Checks) (dir : String) : Async Unit := do
    let p name := path.join #[dir, name]
    let mut g : Rng := ⟨0xf11e⟩
    for i in [0:20] do
      let (b, g1) := g.bytes 2000; let (s, g2) := g1.string 100; g := g2
      let f ← p s!"bytes{i}"
      -- readFile (writeFile f b) = b, and stat f has size |b| and is a file
      fsPromises.writeFile (.domString f) (.uint8Array b)
      let back ← fsPromises.readFile (.domString f)
      expect r s!"write/read bytes {i}" (bytesEq (bytesOfResult back) b && (back matches .uint8Array _)) ""
      let st ← fsPromises.stat (.domString f)
      expect r s!"stat {i}" (numberOf (← st.size) == b.size.toFloat && (← st.isFile) && !(← st.isDirectory)) ""
      -- with an encoding, readFile gives the string: readFile f "utf8" = s after writeFile f s
      let t ← p s!"text{i}"
      fsPromises.writeFile (.domString t) (.domString s)
      let read ← fsPromises.readFile (.domString t) (some (.domString "utf8"))
      expect r s!"write/read utf8 {i}" (match read with | .domString x => x == s | _ => false) (repr s).pretty
      -- appendFile f a then readFile f = s ++ a
      fsPromises.appendFile (.domString t) (.domString "+tail")
      expect r s!"appendFile {i}" (textOf (← fsPromises.readFile (.domString t) (some (.readFileOptions { encoding := some "utf8" }))) == s ++ "+tail") ""
    -- readdir lists exactly the files written (as a set), and with withFileTypes as Dirents
    let names ← (← fsPromises.readdir (.domString dir)).mapM fun
      | .domString s => pure s | .uint8Array b => pure (String.fromUTF8! b) | .dirent _ => pure "<dirent>"
    let expected := (List.range 20).flatMap fun i => [s!"bytes{i}", s!"text{i}"]
    expect r "readdir" (names.size == expected.length && expected.all names.contains) s!"{names}"
    let entries ← fsPromises.readdir (.domString dir) (some (.readdirOptions { withFileTypes := some true }))
    let mut direntOk := entries.size == expected.length
    for e in entries do
      match e with
      | .dirent d => direntOk := direntOk && (← d.isFile) && expected.contains (stringOf (← d.name)) && (← d.parentPath) == dir
      | _ => direntOk := false
    expect r "readdir withFileTypes" direntOk ""
    -- mkdir recursive returns the first directory created; rm recursive removes the tree
    let deep ← path.join #[dir, "a", "b", "c"]
    let first ← fsPromises.mkdir (.domString deep) (some (.mkdirOptions { recursive := some true }))
    expect r "mkdir recursive" (first == some (← p "a") && (← (← fsPromises.stat (.domString deep)).isDirectory)) s!"{first}"
    fsPromises.rm (.domString (← p "a")) (some { recursive := some true })
    expect r "rm recursive" (← throws (fsPromises.access (.domString (← p "a")))) ""
    -- rename moves; copyFile copies; unlink removes
    let a ← p "bytes0"; let b ← p "moved"; let c ← p "copied"
    let content := bytesOfResult (← fsPromises.readFile (.domString a))
    fsPromises.rename (.domString a) (.domString b)
    fsPromises.copyFile (.domString b) (.domString c)
    expect r "rename and copyFile" ((← throws (fsPromises.access (.domString a)))
      && bytesEq (bytesOfResult (← fsPromises.readFile (.domString c))) content && bytesEq (bytesOfResult (← fsPromises.readFile (.domString b))) content) ""
    fsPromises.unlink (.domString c)
    expect r "unlink" (← throws (fsPromises.access (.domString c))) ""
    -- truncate f n leaves the first n bytes
    fsPromises.truncate (.domString b) (some 7)
    expect r "truncate" (bytesEq (bytesOfResult (← fsPromises.readFile (.domString b))) (content.extract 0 7)) ""
    -- symlink, readlink, realpath and lstat
    let link ← p "link"
    fsPromises.symlink (.domString b) (.domString link)
    expect r "symlink" ((stringOf (← fsPromises.readlink (.domString link))) == b
      && (← (← fsPromises.lstat (.domString link)).isSymbolicLink)
      && (stringOf (← fsPromises.realpath (.domString link))) == stringOf (← fsPromises.realpath (.domString b))) ""
    -- utimes sets mtime (seconds): stat's mtimeMs = 1000 · t
    fsPromises.utimes (.domString b) (.double 1000000) (.double 1234567)
    expect r "utimes" (numberOf (← (← fsPromises.stat (.domString b)).mtimeMs) == 1234567000) ""
    -- chmod 0o600 then stat's mode & 0o777 = 0o600 (POSIX)
    if (← process.platform) != "win32" then
      fsPromises.chmod (.domString b) (.longLong 0o600)
      let mode := (numberOf (← (← fsPromises.stat (.domString b)).mode)).toUInt64.toNat
      expect r "chmod" (mode % 512 == 0o600) s!"{mode}"
    -- a FileHandle: write at positions, read back, stat, readFile, close
    let fh ← fsPromises.open (.domString (← p "handle")) (.domString "w+")
    -- write (string) fulfills with {bytesWritten, buffer: the string} (the docs)
    let w ← try some <$> fh.writeWithString "hello world" catch e => do expect r "FileHandle.write string" false s!"{e}"; pure none
    if let some w := w then expect r "FileHandle.write string" (w.bytesWritten == 11 && w.buffer == "hello world") ""
    let w2 ← fh.writeWithOptions "HELLO".toUTF8 (some { position := some 0 })
    expect r "FileHandle.write" (w2.bytesWritten == 5 && bytesEq w2.buffer "HELLO".toUTF8 && (← fh.fd) ≥ 0) ""
    let rd ← fh.readWithBufferOptions (ByteArray.mk (List.replicate 11 (0 : UInt8)).toArray) (some { position := some (.longLong 0) })
    expect r "FileHandle.read" (rd.bytesRead == 11 && bytesEq rd.buffer "HELLO world".toUTF8) (String.fromUTF8! rd.buffer)
    expect r "FileHandle.stat" (numberOf (← (← fh.stat).size) == 11) ""
    fh.truncate 5
    fh.sync
    fh.close
    expect r "FileHandle result" (textOf (← fsPromises.readFile (.domString (← p "handle")) (some (.domString "utf8"))) == "HELLO") ""
    -- readableWebStream: the file's bytes as a web stream
    let fh2 ← fsPromises.open (.domString b) (.domString "r")
    let streamed ← streamBytes (← fh2.readableWebStream)
    fh2.close
    expect r "readableWebStream" (bytesEq streamed (content.extract 0 7)) ""
    -- a missing file rejects with ENOENT
    expect r "ENOENT" (← throws (fsPromises.readFile (.domString (← p "missing")))) ""
    -- cp recursive copies a tree
    fsPromises.writeFile (.domString (← path.join #[dir, "t1"])) (.domString "x")
    discard <| fsPromises.mkdir (.domString (← p "tree/sub")) (some (.mkdirOptions { recursive := some true }))
    fsPromises.writeFile (.domString (← p "tree/sub/f")) (.domString "deep")
    fsPromises.cp (.domString (← p "tree")) (.domString (← p "tree2")) (some { recursive := some true })
    expect r "cp" (textOf (← fsPromises.readFile (.domString (← p "tree2/sub/f")) (some (.domString "utf8"))) == "deep") ""

def fileSystem (r : Checks) : Async Unit := do
  let tmp ← os.tmpdir
  let dir ← stringOf <$> fsPromises.mkdtemp (.domString (← path.join #[tmp, "lasm-js-node-"]))
  let cleanup : Async Unit := fsPromises.rm (.domString dir) (some { recursive := some true, force := some true })
  try fileChecks r dir catch e => do cleanup; throw e
  cleanup

/-! child_process, events and stream -/

/-- A promise of the arguments of `e`'s next event `name`: the listener is added at once
(synchronously), so an event that comes before the promise is awaited is not missed. -/
def onceEvent (e : EventEmitter) (name : String) : IO (IO.Promise (Array Data)) := do
  let p ← IO.Promise.new
  let f ← JSFunction.ofSyncFn fun xs => do p.resolve xs; return .undefined
  discard <| e.once (.domString name) f
  return p

def childProcesses (r : Checks) : Async Unit := do
  if (← process.platform) == "win32" then return
  -- execFile resolves with the output: stdout of `sh -c 'printf …'` is exactly the text printed
  let res ← child_process.execFile "sh" (some #["-c", "printf 'out:%s' \"$LASM_X\"; printf err 1>&2"])
    (some { env := some ⟨#[("LASM_X", "42"), ("PATH", "/usr/bin:/bin")]⟩ })
  expect r "execFile" (stringOf res.stdout == "out:42" && stringOf res.stderr == "err") s!"{stringOf res.stdout} {stringOf res.stderr}"
  -- a non-zero exit rejects
  expect r "execFile exit 3 rejects" (← throws (child_process.execFile "sh" (some #["-c", "exit 3"]))) ""
  -- spawn: stdout through a web stream; 'close' gives the exit code; exitCode is then 3
  let child ← child_process.spawn "sh" (some #["-c", "echo spawned; read line; echo got:$line; exit 3"])
  expect r "spawn pid" ((← child.pid).isSome) ""
  let some out ← child.stdout | throw (IO.userError "no stdout")
  let some input ← child.stdin | throw (IO.userError "no stdin")
  let closed ← onceEvent child.toEventEmitter "close"
  -- stdout is read as a web stream from the start (Node discards what a child wrote
  -- to a stream nobody reads once it exits); "abc\n" goes through stdin's web stream
  let outWeb ← stream.Readable.toWeb out
  let writer ← (← stream.Writable.toWeb input).getWriter
  writer.write (.bytes "abc\n".toUTF8)
  writer.close
  let text := String.fromUTF8! (← streamBytes outWeb)
  let args ← Std.Async.await closed
  expect r "spawn output" (text == "spawned\ngot:abc\n") (repr text).pretty
  expect r "close event" (args.size ≥ 1 && (match args[0]! with | .number n => n == 3 | _ => false)) s!"{args.map Data.describe}"
  expect r "exitCode" ((← child.exitCode) == some 3 && (← child.signalCode).isNone && !(← child.killed)) ""
  -- kill: a sleeping child ends with SIGTERM
  let sleeper ← child_process.spawn "sleep" (some #["30"])
  let ended ← onceEvent sleeper.toEventEmitter "exit"
  expect r "kill" (← sleeper.kill) ""
  let exitArgs ← Std.Async.await ended
  expect r "killed by SIGTERM" ((← sleeper.signalCode) == some "SIGTERM" && (← sleeper.killed)
    && (match exitArgs[1]? with | some (Data.string s) => s == "SIGTERM" | _ => false)) s!"{exitArgs.map Data.describe}"
  -- EventEmitter: a listener runs on emit and counts; once removes itself; removeAllListeners clears
  let emitterClass ← (← Lasm.JS.require "node:events").get "EventEmitter" Value
  let e : EventEmitter := { val := ← emitterClass.new }
  let seen ← IO.mkRef (#[] : Array Data)
  let listener ← JSFunction.ofSyncFn fun xs => do seen.modify (· ++ xs); return .undefined
  discard <| e.on (.domString "ping") listener
  discard <| e.once (.domString "ping") listener
  expect r "listenerCount" ((← e.listenerCount (.domString "ping")) == 2) ""
  let had ← e.emit (.domString "ping") #[toJS 1, toJS "two"]
  discard <| e.emit (.domString "ping") #[toJS 3]
  expect r "emit" (had && (← seen.get).size == 5 && (← e.listenerCount (.domString "ping")) == 1) s!"{(← seen.get).map Data.describe}"
  discard <| e.off (.domString "ping") listener
  expect r "off" ((← e.listenerCount (.domString "ping")) == 0 && !(← e.emit (.domString "ping"))) ""
  -- events.once e n resolves with the arguments of the next emit of n (emitted from a timer)
  let fire ← JSFunction.ofFn fun _ => do discard <| e.emit (.domString "ready") #[toJS 7, toJS "x"]; return .undefined
  discard <| setTimeout (.jsFunction fire) (some 10)
  let got ← events.once e (.domString "ready")
  expect r "events.once" (got.size == 2 && (match got[0]! with | .number n => n == 7 | _ => false)) s!"{got.map Data.describe}"
  discard <| e.removeAllListeners
  -- stream: Readable.fromWeb then toWeb gives back the same bytes
  let mut g : Rng := ⟨0x57ea⟩
  for i in [0:10] do
    let (b, g1) := g.bytes 5000; g := g1
    let web ← (← Response.new (some (.bufferSource b))).body
    let some web := web | throw (IO.userError "no body")
    let node ← stream.Readable.fromWeb web
    expect r s!"stream round trip {i}" (bytesEq (← streamBytes (← stream.Readable.toWeb node)) b) ""

/-! Availability: which generated members this runtime lacks (reported, never a failure) -/

def availability (r : Checks) : Async Unit := do
  let .array entries ← jsonParse Surface.json | throw (IO.userError "the surface is not an array")
  let mut missing : Array String := #[]
  for info in entries do
    let module := str (info.field "module")
    let names (key : String) : Array String := match info.field key with | .array xs => xs.map str | _ => #[]
    let loaded ← try some <$> Lasm.JS.require module catch _ => pure none
    match loaded, info.field "path" with
    | none, _ => missing := missing.push module
    | some m, .string "" =>
      for n in names "namespace" do
        unless ← reflectHas m n do missing := missing.push s!"{module} {n}"
    | some m, .string p =>
      if ← reflectHas m p then
        let c ← m.get p Value
        for n in names "static" do
          unless ← reflectHas c n do missing := missing.push s!"{module} {p}.{n}"
        let proto ← c.get "prototype" Value
        for n in names "prototype" do
          unless ← reflectHas proto n do missing := missing.push s!"{module} {p}.prototype.{n}"
      else missing := missing.push s!"{module} {p}"
    | some _, _ => pure ()  -- no export (FileHandle): its members are exercised above
  r.modify fun s => { s with lines := (s.lines ++ missing.map (s!"missing {·}")).push s!"availability: {missing.size} generated members missing" }

/-! Running -/

def checks : Async (String × Nat) := do
  let r ← IO.mkRef ({} : Report)
  for (name, body) in [("path", paths r), ("os", operatingSystem r), ("process", currentProcess r), ("buffer", buffers r),
      ("crypto", cryptography r), ("fs", fileSystem r), ("childProcess", childProcesses r), ("availability", availability r)] do
    runSection r name body
  let s ← r.get
  return ("\n".intercalate (s.lines.push s!"summary {s.passed} {s.failed}").toList ++ "\n", s.failed)

def main : IO UInt32 := do
  let (text, failed) ← checks.block
  IO.print text
  return if failed == 0 then 0 else 1
