/-
# The CLI's glue program, compiled by Lasm

The pure parts of the CLI that moved into Lean (docs/proposals/M6_GLUE.md)
run as one WASI command, src/glue/lasm-glue.wasm, built from
verification/cli/LasmGlue.lean (which runs `main` here) by
the published `@lasm/cli` (`.github/workflows/glue.yml`) and run by
src/glue/glue.mjs. Its input on stdin is a list of fields, each written
`<length>:<bytes>` (the length in decimal, of the UTF-8 bytes that follow):
the first names the operation, the rest are its arguments. Its output on
stdout is `ok:` and the result, or `error:` and a message.

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

/-- A reader of fields from the input, at a byte offset. -/
abbrev Reader := StateT Nat (Except String)

/-- The next field's bytes. -/
def field (input : ByteArray) : Reader ByteArray := fun pos => do
  let rec digits (i : Nat) (n : Nat) (fuel : Nat) : Except String (Nat × Nat) :=
    match fuel with
    | 0 => .error "field length too long"
    | fuel + 1 =>
      if h : i < input.size then
        let b := input[i]
        if b == 58 then .ok (n, i + 1)
        else if 48 ≤ b && b ≤ 57 then digits (i + 1) (n * 10 + (b - 48).toNat) fuel
        else .error s!"unexpected byte {b} in a field length at {i}"
      else .error "input ends inside a field length"
  if pos ≥ input.size then throw "input ends before a field"
  let (n, start) ← digits pos 0 20
  if start + n > input.size then throw "input ends inside a field"
  return (input.extract start (start + n), start + n)

/-- The next field as text. -/
def text (input : ByteArray) : Reader String := do
  match String.fromUTF8? (← field input) with
  | some s => return s
  | none => throw "a field is not UTF-8"

/-- The next field as a count. -/
def count (input : ByteArray) : Reader Nat := do
  match (← text input).toNat? with
  | some n => return n
  | none => throw "a count is not a number"

/-- A count, then that many names. -/
def names (input : ByteArray) : Reader (List String) := do
  let n ← count input
  (List.range n).mapM fun _ => text input

/-- A count, then that many entries: a unit and its names. -/
def calls (input : ByteArray) : Reader (List (String × List String)) := do
  let n ← count input
  (List.range n).mapM fun _ => do return (← text input, ← names input)

/-- A field as the program writes it. -/
def encode (s : String) : String := s!"{s.utf8ByteSize}:{s}"

/-- Runs one operation on the input. -/
def run (input : ByteArray) : Except String String := do
  let (op, pos) ← text input 0
  match op with
  | "compactInitializerWrappers" =>
    let ((closure, keep, calls), _) ← (do return (← names input, ← names input, ← calls input) : Reader _) pos
    compactInitializerWrappers { closure, keep, calls }
  | "initializationSchedule" =>
    let ((name, calls, keep), _) ← (do return (← text input, ← calls input, ← names input) : Reader _) pos
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
  | .ok result => out.write ("ok:" ++ result).toUTF8
  | .error message => out.write ("error:" ++ message).toUTF8
  out.flush

end Lasm.Cli.Glue
