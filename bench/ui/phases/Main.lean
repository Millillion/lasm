/-
Where a Lasm.UI frame's time goes, in Wasm (lasm Main.lean on Node): building
the view, diffing it and encoding the patch, for the benchmark's operations.
-/
import Bench
open Lasm.UI

def time (label : String) (reps : Nat) (act : Unit → IO α) : IO α := do
  let mut best := 1000000000
  let mut r ← act ()
  for _ in [0:reps] do
    let t0 ← IO.monoNanosNow
    r ← act ()
    let t1 ← IO.monoNanosNow
    best := min best (t1 - t0)
  IO.println s!"{label}: {(best.toFloat / 1000000.0)} ms"
  return r

def phases (label : String) (before after : Model) : IO Unit := do
  let m0 := mountOps [view before] 1
  let v ← time s!"{label}: view" 20 fun _ => pure (view after)
  let r ← time s!"{label}: diff" 20 fun _ => pure (diff m0.live [v] m0.next)
  let _ ← time s!"{label}: encode" 20 fun _ => pure (Encode.frame {} r.ops)
  let (b, _) := Encode.frame {} r.ops
  IO.println s!"{label}: {r.ops.size} ops, {b.size} bytes"

def main : IO Unit := do
  let empty : Model := {}
  let rows := update .run empty
  phases "create 1,000" empty rows
  phases "update every 10th" rows (update .update rows)
  phases "swap" rows (update .swapRows rows)
  phases "replace all" rows (update .run rows)
  let lots := update .runLots empty
  phases "update 10,000" lots (update .update lots)
