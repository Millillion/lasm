/-
# The process launcher's configuration, in Lean: src/process-launcher.mjs
# writes it, native/process-launcher.c reads it

Models of both sides of the private format, written to mirror the code
statement for statement, and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow): the writer
against the JavaScript, the reader against the compiled C launcher, which
the differential runs on each configuration (or on a corruption of one) and
whose child reports what it was given.

| code | here |
| --- | --- |
| `encodeProcessConfiguration(options)` (src/process-launcher.mjs) | `encodeProcessConfiguration` |
| `number`, `string` (the writer's) | `le32`, `encodeString` |
| `main`'s reading (native/process-launcher.c), with `number`, `string`, `read_exact` | `launcherRead`, `readNumber`, `readString`, `readStrings` |

Text is UTF-8 bytes on both sides (`Buffer.from(value)`; the C reads
bytes). The writer's `options.env` is read as its entries in
`Object.entries` order, and `options.envBytes` (base64 pairs) as the pairs'
bytes. `writeUInt32LE` throws past 2³² − 1, where `le32` wraps; no
configuration comes near (a string of 4 GiB).

What the launcher does with what it reads (`setenv` each pair, so a later
key wins and a name with `=` is ignored; `chdir`; `execvp`) is not modelled
here: the differential compares the child's argument vector and
environment with `setenv`'s reading of the pairs the model reads.
-/

namespace Lasm.Cli

/-- The options of `encodeProcessConfiguration`. -/
structure LaunchOptions where
  command : String
  args : List String
  env : List (String × String)
  directory : Option String := none
  requestedCwd : Option String := none
  stdioFlags : List Int
  directoryFd : Option Nat := none
  inheritProcessCwd : Bool := false
  setsid : Bool := false
  envBytes : Option (List (List UInt8 × List UInt8)) := none

/-- `Buffer.from(value)`: the UTF-8 bytes of a string. -/
def utf8Bytes (s : String) : List UInt8 := s.toUTF8.data.toList

/-- A value as four little-endian bytes (`writeUInt32LE`). -/
def le32 (n : Nat) : List UInt8 := [(n % 256).toUInt8, (n / 256 % 256).toUInt8, (n / 65536 % 256).toUInt8, (n / 16777216 % 256).toUInt8]

/-- The magic, `LASMEX01`. -/
def launcherMagic : List UInt8 := [0x4c, 0x41, 0x53, 0x4d, 0x45, 0x58, 0x30, 0x31]

/-- `string(value)`: `0xffffffff` for `undefined`, else the length and the
bytes; it throws on a NUL byte. -/
def encodeString : Option (List UInt8) → Except String (List UInt8)
  | none => .ok (le32 0xffffffff)
  | some b => if 0 ∈ b then .error "NUL in private process configuration" else .ok (le32 b.length ++ b)

/-- `flags >>> 0`. -/
def uint32Of (x : Int) : Nat := (x % 4294967296).toNat

/-- `encodeProcessConfiguration(options)`: the magic, the flags, the stdio
flags, both directories, the argument count and vector, the environment's
count and pairs; or the message it throws. -/
def encodeProcessConfiguration (o : LaunchOptions) : Except String ByteArray := do
  let flags := (if o.directoryFd.isNone then 0 else 1) + (if o.inheritProcessCwd then 2 else 0) + (if o.setsid then 4 else 0)
  let stdio := o.stdioFlags.flatMap fun f => le32 (uint32Of f)
  let directory ← encodeString (o.directory.map utf8Bytes)
  let requested ← encodeString (o.requestedCwd.map utf8Bytes)
  let argv ← (o.command :: o.args).mapM fun a => encodeString (some (utf8Bytes a))
  let environment := o.envBytes.getD (o.env.map fun (k, v) => (utf8Bytes k, utf8Bytes v))
  let pairs ← environment.mapM fun (k, v) => do return (← encodeString (some k)) ++ (← encodeString (some v))
  return ⟨(launcherMagic ++ le32 flags ++ stdio ++ directory ++ requested ++ le32 (o.args.length + 1) ++ argv.flatten ++
    le32 environment.length ++ pairs.flatten).toArray⟩

/-! ## The reader (native/process-launcher.c) -/

/-- What the launcher reads. -/
structure LauncherConfig where
  flags : Nat
  stdio : List Nat
  directory : Option (List UInt8)
  requestedCwd : Option (List UInt8)
  argv : List (List UInt8)
  env : List (List UInt8 × List UInt8)
deriving DecidableEq, Repr

/-- `number()`: four bytes, little-endian; `none` where `read_exact` fails
("incomplete configuration"). -/
def readNumber : List UInt8 → Option (Nat × List UInt8)
  | a :: b :: c :: d :: r => some (a.toNat + 256 * b.toNat + 65536 * c.toNat + 16777216 * d.toNat, r)
  | _ => none

/-- `string(optional)`: `NULL` (`some none`) for an optional `UINT32_MAX`,
else that many bytes, refused when short or holding a NUL. -/
def readString (optional : Bool) (bs : List UInt8) : Option (Option (List UInt8) × List UInt8) := do
  let (n, r) ← readNumber bs
  if optional && n == 0xffffffff then return (none, r)
  if r.length < n then none
  let v := r.take n
  if 0 ∈ v then none
  return (some v, r.drop n)

/-- `count` strings in a row (`string(0)`). -/
def readStrings : Nat → List UInt8 → Option (List (List UInt8) × List UInt8)
  | 0, bs => some ([], bs)
  | k + 1, bs => do
    let (v, r) ← readString false bs
    let (vs, r) ← readStrings k r
    return (v.getD [] :: vs, r)

/-- `count` key and value pairs. -/
def readPairs : Nat → List UInt8 → Option (List (List UInt8 × List UInt8) × List UInt8)
  | 0, bs => some ([], bs)
  | k + 1, bs => do
    let (key, r) ← readString false bs
    let (value, r) ← readString false r
    let (ps, r) ← readPairs k r
    return ((key.getD [], value.getD []) :: ps, r)

/-- `main`'s reading of the configuration on descriptor 3: `none` where it
fails (`fail(…)`, exit status 125) before it executes anything. -/
def launcherRead (bs : List UInt8) : Option LauncherConfig := do
  if bs.length < 8 || bs.take 8 != launcherMagic then none
  let (flags, r) ← readNumber (bs.drop 8)
  if flags ≥ 8 then none
  let (s0, r) ← readNumber r
  let (s1, r) ← readNumber r
  let (s2, r) ← readNumber r
  let (directory, r) ← readString true r
  let (requestedCwd, r) ← readString true r
  let (argc, r) ← readNumber r
  if argc = 0 then none
  let (argv, r) ← readStrings argc r
  let (envc, r) ← readNumber r
  let (env, r) ← readPairs envc r
  if r != [] then none
  return { flags, stdio := [s0, s1, s2], directory, requestedCwd, argv, env }

end Lasm.Cli
