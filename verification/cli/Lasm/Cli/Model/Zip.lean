/-
# src/serverless/zip.mjs, in Lean: `zip`

A model of the JavaScript, written to mirror it statement for statement,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).

| src/serverless/zip.mjs | here |
| --- | --- |
| `dosTime`, `dosDate` | `dosTime`, `dosDate` |
| the directories (`directories`, sorted) | `zipDirectories` |
| `zip(entries)` | `zipWith` (one entry's records: `zipRecords`) |

What the module imports from `node:zlib` is a parameter, `ZipCodec`:
`deflateRawSync(data, { level: 9 })` and `crc32(data)`. Their meaning is
zlib's (an outside semantics; the differential hands the model the
JavaScript's answers for each input).

Where the two can differ: `Buffer.prototype.writeUInt16LE` throws on a value
over 65535 (a name of 64 KiB or more, or a mode wider than 16 bits), and
`0o100000 | mode` takes `mode` as a 32-bit integer; the model writes the low
16 bits and ORs as natural numbers. The differential draws names and modes
inside those ranges; `zip`'s callers pass names of files in a package and
modes of at most 12 bits.
-/

namespace Lasm.Cli

/-- An entry given to `zip`: its name, its bytes, its permissions if set. -/
structure ZipEntry where
  name : String
  data : ByteArray
  mode : Option Nat

/-- What `zip` imports from `node:zlib`. -/
structure ZipCodec where
  /-- `deflateRawSync(data, { level: 9 })`. -/
  deflate : ByteArray → ByteArray
  /-- `crc32(data)`. -/
  crc32 : ByteArray → UInt32

instance : Inhabited ZipCodec := ⟨⟨id, fun _ => 0⟩⟩

/-- The fixed time, 00:00. -/
def dosTime : Nat := 0
/-- The fixed date, 2026-01-01: `(2026 - 1980) << 9 | 1 << 5 | 1`. -/
def dosDate : Nat := (2026 - 1980) * 512 + 32 + 1

/-- `value` as `n` little-endian bytes (`writeUInt16LE`, `writeUInt32LE`). -/
def le (n value : Nat) : List UInt8 := (List.range n).map fun i => (value / 256 ^ i % 256).toUInt8

/-- The parents of a name: for `a/b/c`, `a/` and `a/b/` (`parts.slice(0, i).join('/') + '/'`). -/
def zipParents (name : String) : List String :=
  let parts := name.splitOn "/"
  (List.range (parts.length - 1)).map fun i => String.intercalate "/" (parts.take (i + 1)) ++ "/"

/-- `[...directories].sort()`: every parent once (a `Set`, in insertion
order), sorted as JavaScript sorts strings, by UTF-16 code units. -/
def zipDirectories (entries : List ZipEntry) : List String :=
  (entries.flatMap fun e => zipParents e.name).eraseDups.mergeSort fun a b => !(decide (utf16Units b < utf16Units a))
where
  /-- The UTF-16 code units of a string. -/
  utf16Units (s : String) : List Nat :=
    s.toList.flatMap fun c =>
      if c.toNat < 0x10000 then [c.toNat]
      else [0xD800 + (c.toNat - 0x10000) / 0x400, 0xDC00 + (c.toNat - 0x10000) % 0x400]

/-- One entry of `all`: its name, bytes and full mode. -/
structure ZipItem where
  name : String
  data : ByteArray
  mode : Nat

/-- One entry's records, at `offset`: the local header with the name and the
stored bytes, and the central directory record with the name. -/
def zipRecords (codec : ZipCodec) (item : ZipItem) (offset : Nat) : List UInt8 × List UInt8 :=
  let fileName := item.name.toUTF8.data.toList
  let directory := item.name.endsWith "/"
  let data := item.data.data.toList
  let compressed := if directory then data else (codec.deflate item.data).data.toList
  let method := if directory || compressed.length ≥ data.length then 0 else 8
  let stored := if method = 8 then compressed else data
  let crc := (codec.crc32 item.data).toNat
  let header := le 4 0x04034b50 ++ le 2 20 ++ le 2 0x0800 ++ le 2 method ++ le 2 dosTime ++ le 2 dosDate ++
    le 4 crc ++ le 4 stored.length ++ le 4 data.length ++ le 2 fileName.length ++ le 2 0
  let record := le 4 0x02014b50 ++ le 2 (3 * 256 + 20) ++ le 2 20 ++ le 2 0x0800 ++ le 2 method ++ le 2 dosTime ++
    le 2 dosDate ++ le 4 crc ++ le 4 stored.length ++ le 4 data.length ++ le 2 fileName.length ++
    le 2 0 ++ le 2 0 ++ le 2 0 ++ le 2 0 ++ le 4 ((item.mode % 65536) * 65536 + if directory then 0x10 else 0) ++ le 4 offset
  (header ++ fileName ++ stored, record ++ fileName)

/-- The loop over `all`: the local part and the central directory written so
far, the offset, the names seen; or the message thrown. -/
def zipLoop (codec : ZipCodec) : List ZipItem → List UInt8 → List UInt8 → Nat → List String →
    Except String (List UInt8 × List UInt8 × Nat)
  | [], local_, central, offset, _ => .ok (local_, central, offset)
  | item :: rest, local_, central, offset, names =>
    if item.name ∈ names then .error ("Duplicate ZIP entry: " ++ item.name)
    else
      let (l, c) := zipRecords codec item offset
      -- `offset + 30 + fileName.length + stored.length`: the local part's length.
      if offset + l.length > 0xffffffff then .error "Function package is larger than 4 GiB"
      else zipLoop codec rest (local_ ++ l) (central ++ c) (offset + l.length) (item.name :: names)

/-- `zip(entries)`, with `node:zlib` as `codec`: the parent directories
(mode `0o40755`, empty), then the entries (mode `0o100000 | (mode ?? 0o644)`),
each as a local header and its bytes, then the central directory and the end
record; or the message it throws. -/
def zipWith (codec : ZipCodec) (entries : List ZipEntry) : Except String ByteArray :=
  let all := (zipDirectories entries).map (fun name => ({ name, data := .empty, mode := 0o40755 } : ZipItem)) ++
    entries.map fun e => { name := e.name, data := e.data, mode := 0o100000 ||| e.mode.getD 0o644 }
  if all.length > 0xffff then .error "Function package has more than 65535 files"
  else match zipLoop codec all [] [] 0 [] with
    | .error e => .error e
    | .ok (local_, central, offset) =>
      let end_ := le 4 0x06054b50 ++ le 2 0 ++ le 2 0 ++ le 2 all.length ++ le 2 all.length ++
        le 4 central.length ++ le 4 offset ++ le 2 0
      .ok ⟨(local_ ++ central ++ end_).toArray⟩

end Lasm.Cli
