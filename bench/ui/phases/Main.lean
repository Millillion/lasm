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
  let r ← time s!"{label}: diff (old tree shared)" 20 fun _ => pure (diff m0.live [v] m0.next)
  -- The runtime owns the old tree, so the diff can reuse its memory: time a
  -- fresh copy's diff, minus making the copy.
  let mk ← time s!"{label}:   (copy the old tree)" 20 fun _ => do
    let t ← IO.monoNanosNow
    pure (mountOps [view before] (t % 2 + 1)).live.length
  let _ ← time s!"{label}:   (copy + diff, old tree unique)" 20 fun _ => do
    let t ← IO.monoNanosNow
    let m := mountOps [view before] (t % 2 + 1)
    pure (diff m.live [v] m.next).next
  let _ := mk
  let _ ← time s!"{label}: encode" 20 fun _ => pure (Encode.frame {} r.ops)
  let (b, _) := Encode.frame {} r.ops
  IO.println s!"{label}: {r.ops.size} ops, {b.size} bytes"

/-! Experiments: what the diff spends its time on. -/

def plainRow (r : Row) : Html Msg :=
  .elem .html "tr" (some (toString r.id)) [] [
    .elem .html "td" none [] [.text (toString r.id)],
    .elem .html "td" none [] [.elem .html "a" none [] [.text r.label]],
    .elem .html "td" none [] [.elem .html "a" none [] [.elem .html "span" none [] []]],
    .elem .html "td" none [] []]

def flatRow (r : Row) : Html Msg := .elem .html "tr" (some (toString r.id)) [] []

def experiment (label : String) (rowf : Row → Html Msg) (m : Model) : IO Unit := do
  let v := fun (m : Model) => (Html.elem .html "tbody" none [] (m.rows.toList.map rowf) : Html Msg)
  let m0 := mountOps [v m] 1
  let nv := v m
  let _ ← time s!"experiment {label}: diff of 1,000 unchanged rows" 20 fun _ => pure (diff m0.live [nv] m0.next)

def experiments : IO Unit := do
  let rows := update .run {}
  experiment "rows with attributes (the benchmark's)" (row none) rows
  experiment "same rows without attributes" plainRow rows
  experiment "one element per row" flatRow rows

def main : IO Unit := do
  let empty : Model := {}
  let rows := update .run empty
  phases "create 1,000" empty rows
  phases "update every 10th" rows (update .update rows)
  phases "swap" rows (update .swapRows rows)
  phases "replace all" rows (update .run rows)
  let lots := update .runLots empty
  phases "update 10,000" lots (update .update lots)
  experiments

