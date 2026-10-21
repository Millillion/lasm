import Plausible
open Plausible

def check (name : String) (p : Prop) [Testable p] : IO Unit := do
  let r ← Testable.checkIO p { quiet := true, numInst := 100, randomSeed := some 42 }
  IO.println s!"{name}: {match r with | .success _ => "passed" | .gaveUp n => s!"gave up {n}" | .failure _ xs _ => s!"counterexample {xs}"}"

def main : IO Unit := do
  check "reverse involutive" (NamedBinder "xs" (∀ xs : List Nat, xs.reverse.reverse = xs))
  check "append length" (NamedBinder "xs" (∀ xs : List Nat, NamedBinder "ys" (∀ ys : List Nat, (xs ++ ys).length = xs.length + ys.length)))
  check "false claim" (NamedBinder "n" (∀ n : Nat, n < 50))
  let sample ← Gen.run (Gen.listOf (Gen.choose Nat 0 9 (by omega))) 5
  IO.println s!"generated a list of length ≤ 100: {decide (sample.length ≤ 100)}"
