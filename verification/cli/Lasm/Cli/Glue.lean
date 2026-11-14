/-
# The CLI's glue program, compiled by Lasm

The pure parts of the CLI that moved into Lean (docs/proposals/M6_GLUE.md)
run as one WASI command, src/glue/lasm-glue.wasm, built from
verification/cli/LasmGlue.lean (which runs `main` here) by
the published `@lasm/cli` (`.github/workflows/glue.yml`) and run by
src/glue/glue.mjs. Its input on stdin is a list of UTF-8 fields: the first
names the operation, the rest are its arguments. They are written in one of
two ways: a 0 byte, the number of fields in decimal, a 0 byte and the fields
separated by 0 bytes (the usual way: one pass to split it); or, when a field
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
  if h : i.toNat < bytes.size then
    if bytes.uget i h == 0 then splitAtZero bytes s (i + 1) (i + 1) (acc.push (String.Pos.Raw.extract s ⟨start.toNat⟩ ⟨i.toNat⟩))
    else splitAtZero bytes s (i + 1) start acc
  else acc.push (String.Pos.Raw.extract s ⟨start.toNat⟩ ⟨i.toNat⟩)

/-- The fields of a request, written either way. -/
def fields (input : ByteArray) : Except String (Array String) :=
  if h : 0 < input.size then
    if input[0] == 0 then
      match String.fromUTF8? input with
      | none => .error "the request is not UTF-8"
      | some s =>
        let all := splitAtZero input s 1 1 #[]
        match all[0]?.bind String.toNat? with
        | none => .error "the request does not start with its number of fields"
        | some n =>
          if all.size == n + 1 then .ok (all.extract 1 all.size)
          else .error s!"the request has {all.size - 1} fields, not {n}"
    else prefixedFields input 0 #[] (input.size + 1)
  else .error "input ends before a field"

/-- A reader of a request's fields, at an index. -/
abbrev Reader := StateT Nat (Except String)

/-- The next field. -/
@[inline] def text (f : Array String) : Reader String := fun i =>
  if h : i < f.size then .ok (f[i], i + 1) else .error "input ends before a field"

/-- The next field as a count. -/
@[inline] def count (f : Array String) : Reader Nat := do
  match (← text f).toNat? with
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
