/- Runs replicas of Tandem documents from a script: `batch IN OUT`. Used
by the differential test against Yjs and the multi-replica simulation
(test/differential.mjs, test/simulate.mjs), which decide what each replica
does and which operation reaches which replica when.

Each line of `IN` is one command; numbers are decimal, characters are code
points (each inserted character is unique within a scenario, so it names
its element):

    n R          a new scenario with R empty replicas
    i r k p c    replica r inserts c right after the character p (0: at the start); the operation is number k
    x r k t      replica r deletes the character t; the operation is number k
    d r k        operation k reaches replica r (again, out of order: any time)
    s r          print replica r's text
    e            print whether every replica is in the same state

`OUT` gets one line per `s` (`r: c c c …`) and per `e` (`e 1` or `e 0`), and
`! …` for a command that could not run. -/
import Tandem
import Std.Data.HashMap
open Tandem

def nums (s : String) : List Nat := (s.splitOn " ").filterMap String.toNat?

def showText (r : Nat) (d : Doc) : String :=
  s!"{r}:" ++ String.join (d.chars.map fun c => s!" {c.toNat}")

def main (args : List String) : IO UInt32 := do
  let [inp, out] := args | IO.eprintln "usage: batch IN OUT"; return 2
  let lines := (← IO.FS.readFile inp).splitOn "\n"
  let mut docs : Array Doc := #[]
  let mut ops : Std.HashMap Nat Op := {}
  let mut res : Array String := #[]
  for line in lines do
    match line.take 1 |>.toString, nums ((line.drop 2).toString) with
    | "n", [n] =>
      docs := Array.replicate n {}
      ops := {}
    | "i", [r, k, p, c] =>
      let d := docs[r]!
      let i := if p == 0 then some 0 else (d.chars.findIdx? (·.toNat == p)).map (· + 1)
      match i with
      | some i =>
        let op := Op.ins (d.insertNode (r + 1) i (Char.ofNat c))
        ops := ops.insert k op
        docs := docs.set! r (d.apply op)
      | none => res := res.push s!"! {line}: no character {p} at replica {r}"
    | "x", [r, k, t] =>
      let d := docs[r]!
      match d.chars.findIdx? (·.toNat == t) with
      | some i =>
        match d.deleteAt i with
        | some id =>
          ops := ops.insert k (.del id)
          docs := docs.set! r (d.apply (.del id))
        | none => res := res.push s!"! {line}"
      | none => res := res.push s!"! {line}: no character {t} at replica {r}"
    | "d", [r, k] =>
      match ops[k]? with
      | some op => docs := docs.set! r (docs[r]!.apply op)
      | none => res := res.push s!"! {line}: no operation {k}"
    | "s", [r] => res := res.push (showText r docs[r]!)
    | "e", [] =>
      let same := docs.all (· == docs[0]!)
      res := res.push (if same then "e 1" else "e 0")
    | _, _ => if line.trimAscii.isEmpty then pure () else res := res.push s!"! {line}: unknown"
  IO.FS.writeFile out (String.intercalate "\n" res.toList ++ "\n")
  return 0
