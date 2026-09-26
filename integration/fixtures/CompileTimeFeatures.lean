module
meta import Lean

macro "compiledAnswer" : term => `(40 + 2)

theorem arithmeticCheckedDuringBuild : (2 : Nat) + 2 = 4 := by decide

public def main : IO Unit := do
  IO.println s!"compile-time macros and proofs: {compiledAnswer}"
