/- Big-number throughput (docs/PLAN.md decision 5): multiplication, division,
   decimal conversion and parsing of 10^3 to 10^5-digit numbers. Prints one JSON
   line per operation and size with the median of the timed repetitions.
   Arguments: the decimal sizes (default 1000 10000 100000). -/

def median (xs : Array Nat) : Nat := (xs.qsort (· < ·))[xs.size / 2]!

/-- Run `f i` (the operands depend on `i`, so nothing is hoisted) until at least 0.3 s (and 3 runs) have passed; median ns per run and the first run's result. -/
def timeOp (f : Nat → IO Nat) : IO (Nat × Nat) := do
  let mut samples : Array Nat := #[]
  let mut total := 0
  let mut check := 0
  while samples.size < 3 || (total < 300000000 && samples.size < 1000) do
    let start ← IO.monoNanosNow
    let value ← f samples.size
    if samples.size == 0 then check := value
    let elapsed := (← IO.monoNanosNow) - start
    samples := samples.push elapsed
    total := total + elapsed
  return (median samples, check)

def main (args : List String) : IO Unit := do
  let sizes := if args.isEmpty then [1000, 10000, 100000] else args.filterMap String.toNat?
  for digits in sizes do
    -- Operands with `digits` and about digits/2 decimal digits, all limbs nonzero.
    let a : Nat := (7 ^ (digits * 1183 / 1000)) % 10 ^ digits + 10 ^ (digits - 1)
    let b : Nat := (3 ^ (digits * 2096 / 1000)) % 10 ^ (digits / 2) + 10 ^ (digits / 2 - 1)
    let product := a * a
    let text := toString a
    let report (op : String) (r : Nat × Nat) :=
      IO.println s!"\{\"op\":\"{op}\",\"digits\":{digits},\"medianNs\":{r.1},\"check\":{r.2}}"
    report "mul" (← timeOp fun i => pure ((a + i) * a % 1000))
    report "div" (← timeOp fun i => pure ((product + i) / b % 1000))
    report "mod" (← timeOp fun i => pure ((product + i) % b % 1000))
    report "toString" (← timeOp fun i => pure (toString (a + i)).length)
    report "ofString" (← timeOp fun i => pure (((text.push (Char.ofNat (48 + i % 10))).toNat?.getD 0) % 1000))
    report "gcd" (← timeOp fun i => pure (Nat.gcd (a + i) b % 1000))
