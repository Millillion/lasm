/-
# The CLI's glue program, compiled by Lasm

The pure parts of the CLI that moved into Lean (docs/proposals/M6_GLUE.md)
run as one WASI command, src/glue/lasm-glue.wasm, built from
verification/cli/LasmGlue.lean (which runs `main` here) by
the published `@lasm/cli` (`.github/workflows/glue.yml`) and run by
src/glue/glue.mjs. Its input on stdin is a list of UTF-8 fields: the first
names the operation, the rest are its arguments. They are written in one of
two ways. Usually as a table of the distinct fields and each field's index
in it: the byte 1, the number of distinct fields and the number of fields
(32-bit little-endian), each field's index (32-bit little-endian), then the
distinct fields separated by 0 bytes (a plan names each initializer about
ten times; the program reads each name once and shares it). Or, when a field
contains a 0 byte, each field as `<length>:<bytes>` (the length in decimal,
of the UTF-8 bytes that follow). Its output on stdout is `ok:` and the
result, or `error:` and a message.

| Operation                    | Arguments                                                     | Result |
| ---------------------------- | ------------------------------------------------------------- | ------ |
| `compactInitializerWrappers` | closure (count, names), keep (count, names), calls (count, then per entry its unit, count, names) | the C source |
| `initializationSchedule`     | name, calls (as above), keep (count, names)                  | the schedule, each name as a field |

`compactInitializerWrappers` is `Lasm.Cli.compactInitializerWrappers`, the
model of verification/cli/Lasm/Cli/Model/EdgeInitializers.lean; it compiles
to `Lasm.Cli.Fast.compactInitializerWrappers` by the `csimp` theorem that
proves the two equal (Lasm/Cli/Fast/EdgeInitializers.lean).
-/
import Lasm.Cli.Fast.EdgeInitializers

namespace Lasm.Cli.Glue

/-- The fields of a request written `<length>:<bytes>`, from byte `pos`. Each
field takes at least two bytes, so `input.size` is fuel enough. -/
def prefixedFields (input : ByteArray) (pos : Nat) (acc : Array String) : Nat → Except String (Array String)
  | 0 => .error "too many fields"
  | fuel + 1 =>
    if pos ≥ input.size then .ok acc else do
      let (n, start) ← digits pos 0 20
      if start + n > input.size then throw "input ends inside a field"
      match String.fromUTF8? (input.extract start (start + n)) with
      | some s => prefixedFields input (start + n) (acc.push s) fuel
      | none => throw "a field is not UTF-8"
where
  digits (i : Nat) (n : Nat) : Nat → Except String (Nat × Nat)
    | 0 => .error "field length too long"
    | fuel + 1 =>
      if h : i < input.size then
        let b := input[i]
        if b == 58 then .ok (n, i + 1)
        else if 48 ≤ b && b ≤ 57 then digits (i + 1) (n * 10 + (b - 48).toNat) fuel
        else .error s!"unexpected byte {b} in a field length at {i}"
      else .error "input ends inside a field length"

/-- The text of `s` (whose bytes are `bytes`) from byte `start`, split at each
0 byte (machine-word indices: this loop reads every byte of the request). -/
partial def splitAtZero (bytes : ByteArray) (s : String) (i start : USize) (acc : Array String) : Array String :=
  if h : i < bytes.usize then
    have h : i.toNat < bytes.size := Nat.lt_of_lt_of_le (USize.lt_iff_toNat_lt.mp h) (by
      simp only [ByteArray.usize, USize.toNat_ofNat']; exact Nat.mod_le _ _)
    if bytes.uget i h == 0 then splitAtZero bytes s (i + 1) (i + 1) (acc.push (String.Pos.Raw.extract s ⟨start.toNat⟩ ⟨i.toNat⟩))
    else splitAtZero bytes s (i + 1) start acc
  else acc.push (String.Pos.Raw.extract s ⟨start.toNat⟩ ⟨i.toNat⟩)

/-- The 32-bit little-endian number at byte `i`. -/
@[inline] def u32 (b : ByteArray) (i : Nat) : Nat :=
  (b[i]!.toUInt32 ||| b[i + 1]!.toUInt32 <<< 8 ||| b[i + 2]!.toUInt32 <<< 16 ||| b[i + 3]!.toUInt32 <<< 24).toNat

/-- The fields, from their table and their indices (at byte 9). -/
def tableFields (input : ByteArray) (table : Array String) (count : Nat) : Except String (Array String) :=
  go 0 (Array.mkEmpty count)
where
  go (k : Nat) (acc : Array String) : Except String (Array String) :=
    if k < count then
      let i := u32 input (9 + 4 * k)
      if h : i < table.size then go (k + 1) (acc.push table[i]) else .error s!"field {k} is not in the table"
    else .ok acc
  termination_by count - k

/-- The fields of a request, written either way. -/
def fields (input : ByteArray) : Except String (Array String) :=
  if h : 0 < input.size then
    if input[0] == 1 then
      if input.size < 9 then .error "the request ends inside its header" else
      let distinct := u32 input 1
      let count := u32 input 5
      let start := 9 + 4 * count
      if input.size < start then .error "the request ends inside its indices" else
      let bytes := input.extract start input.size
      match String.fromUTF8? bytes with
      | none => .error "the request is not UTF-8"
      | some text =>
        let table := splitAtZero bytes text 0 0 #[]
        if table.size == distinct then tableFields input table count
        else .error s!"the request's table has {table.size} fields, not {distinct}"
    else prefixedFields input 0 #[] (input.size + 1)
  else .error "input ends before a field"

/-- A reader of a request's fields, at an index. -/
abbrev Reader := StateT Nat (Except String)

/-- The next field. -/
@[inline] def text (f : Array String) : Reader String := fun i =>
  if h : i < f.size then .ok (f[i], i + 1) else .error "input ends before a field"

/-- A count as the host writes it: decimal digits, read byte by byte. -/
def decimal? (s : String) : Option Nat :=
  if s.isEmpty then none else go 0 0
where
  go (i n : Nat) : Option Nat :=
    if h : i < s.utf8ByteSize then
      let b := s.getUTF8Byte ⟨i⟩ (by simpa [String.Pos.Raw.lt_iff] using h)
      if 48 ≤ b && b ≤ 57 then go (i + 1) (n * 10 + (b - 48).toNat) else none
    else some n
  termination_by s.utf8ByteSize - i

/-- The next field as a count. -/
@[inline] def count (f : Array String) : Reader Nat := do
  match decimal? (← text f) with
  | some n => return n
  | none => throw "a count is not a number"

/-- A count, then that many names. -/
def names (f : Array String) : Reader (List String) := do
  let n ← count f
  let i ← get
  if i + n > f.size then throw "input ends before a field"
  set (i + n)
  return (f.extract i (i + n)).toList

/-- A count, then that many entries: a unit and its names. -/
def calls (f : Array String) : Reader (List (String × List String)) := do
  let n ← count f
  let rec go : Nat → List (String × List String) → Reader (List (String × List String))
    | 0, acc => return acc.reverse
    | k + 1, acc => do
      let unit ← text f
      let called ← names f
      go k ((unit, called) :: acc)
  go n []

/-- A field as the program writes it. -/
def encode (s : String) : String := s!"{s.utf8ByteSize}:{s}"

/-- Runs one operation on the input. -/
def run (input : ByteArray) : Except String String := do
  let f ← fields input
  let (op, pos) ← text f 0
  match op with
  | "compactInitializerWrappers" =>
    let ((closure, keep, calls), _) ← (do return (← names f, ← names f, ← calls f) : Reader _) pos
    compactInitializerWrappers { closure, keep, calls }
  | "initializationSchedule" =>
    let ((name, calls, keep), _) ← (do return (← text f, ← calls f, ← names f) : Reader _) pos
    return String.join ((initializationSchedule name calls keep).map encode)
  | _ => throw s!"unknown operation {op}"

partial def readAll (stream : IO.FS.Stream) (acc : ByteArray) : IO ByteArray := do
  let chunk ← stream.read 65536
  if chunk.isEmpty then return acc else readAll stream (acc ++ chunk)

/-- The program: one operation, from stdin to stdout. -/
def main : IO Unit := do
  let input ← readAll (← IO.getStdin) ByteArray.empty
  let out ← IO.getStdout
  match run input with
  | .ok result => out.write "ok:".toUTF8; out.write result.toUTF8
  | .error message => out.write ("error:" ++ message).toUTF8
  out.flush

end Lasm.Cli.Glue
