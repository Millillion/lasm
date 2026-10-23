/- Benchmark fixture: Lean→JS interop latency, timed inside Lean with the
   monotonic clock. Prints one JSON line per operation:
     call   — a synchronous round trip, `Math.max()` (no arguments, number result);
     await  — awaiting an already-resolved promise, `Promise.resolve(1)` with
              `callMethodAwait` (the calling Lean thread waits for the result).
   Arguments: [samples] [warmup] (defaults 5000 and 500). -/
import Lasm.JS
open Lasm.JS

def stats (name : String) (samples : Array Nat) : String :=
  let sorted := samples.qsort (· < ·)
  let at_ (q : Float) : Nat := sorted[min (sorted.size - 1) (q * sorted.size.toFloat).toUInt64.toNat]!
  let mean := (sorted.foldl (· + ·) 0) / sorted.size
  s!"\{\"op\":\"{name}\",\"samples\":{sorted.size},\"p50Ns\":{at_ 0.5},\"p90Ns\":{at_ 0.9},\"p99Ns\":{at_ 0.99},\"meanNs\":{mean}}"

def sampleLatency (count : Nat) (action : IO Unit) : IO (Array Nat) := do
  let mut samples := Array.mkEmpty count
  for _ in [0:count] do
    let start ← IO.monoNanosNow
    action
    samples := samples.push ((← IO.monoNanosNow) - start)
  return samples

def main (args : List String) : IO Unit := do
  let count := (args[0]?.bind String.toNat?).getD 5000
  let warmup := (args[1]?.bind String.toNat?).getD 500
  let math ← global >>= (·.get "Math")
  let promise ← global >>= (·.get "Promise")
  let call : IO Unit := do let _ ← math.callMethod "max" #[] Data
  let wait : IO Unit := do let _ ← promise.callMethodAwait "resolve" #[toJS (1 : Nat)] Data
  discard <| sampleLatency warmup call
  IO.println (stats "call" (← sampleLatency count call))
  discard <| sampleLatency warmup wait
  IO.println (stats "await" (← sampleLatency count wait))
