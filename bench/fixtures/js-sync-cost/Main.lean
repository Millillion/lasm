/- Per-call costs of the Lasm.JS paths that waits inside synchronous callbacks
touch (docs/DECISIONS.md 2026-11-04), for comparing two builds:
scripts/ci/lasm-js-stress.mjs --only js-sync-cost builds this program (release
profile) and runs it three times. Each line: the median of 5 rounds. -/
import Lasm.JS
open Lasm.JS

def median (xs : Array Float) : Float := (xs.qsort (· < ·))[xs.size / 2]!

/-- Nanoseconds per operation of `run n`, the median of 5 rounds. -/
def timePer (n : Nat) (run : Nat → IO Unit) : IO Float := do
  run (n / 10)
  let mut rounds := #[]
  for _ in [0:5] do
    let t0 ← IO.monoNanosNow
    run n
    let t1 ← IO.monoNanosNow
    rounds := rounds.push ((t1 - t0).toFloat / n.toFloat)
  return median rounds

def report (label : String) (ns : Float) : IO Unit :=
  IO.println s!"{label}: {(ns / 10).round / 100} µs"

def main : IO Unit := do
  let g ← global
  let math : Value ← g.get "Math" Value
  report "Lean→JS call (Math.max)" (← timePer 20000 fun n => do
    for _ in [0:n] do let _ : Nat ← math.callMethod "max" #[toJS (1 : Nat), toJS (2 : Nat)] Nat)
  -- JavaScript calls a synchronous Lean function n times in one loop.
  let f ← Function.ofSyncFn fun args => return args[0]!
  let F : Value ← g.get "Function" Value
  let loop : Value ← F.new #[toJS "f", toJS "n", toJS "let s = 0; for (let i = 0; i < n; i++) s += f(i); return s"]
  report "JS→Lean synchronous callback" (← timePer 20000 fun n => do
    let _ : Nat ← loop.call #[toJS f, toJS n] Nat)
  -- The callback waits for finished Lean tasks (no blocking: the fast path of the wait hook).
  let done ← IO.asTask (pure 1)
  discard <| IO.wait done
  let waits ← Function.ofSyncFn fun _ => do
    let mut s := 0
    for _ in [0:100] do s := s + (← IO.ofExcept (← IO.wait done))
    return toJS s
  report "100 finished-task waits inside a synchronous callback" (← timePer 2000 fun n => do
    let _ : Nat ← loop.call #[toJS waits, toJS n] Nat)
  let resolved : Value ← (← g.get "Promise" Value).callMethod "resolve" #[toJS (1 : Nat)]
  report "Lean awaits a resolved promise (IO)" (← timePer 5000 fun n => do
    for _ in [0:n] do let _ ← resolved.await Nat)
  report "finished-task wait (IO.wait)" (← timePer 1000000 fun n => do
    for _ in [0:n] do discard <| IO.wait done)
