/-! Pure Lean: no JavaScript, so `lake build App` can also check it natively. -/

namespace App

/-- Keep a requested page size between 1 and 100. -/
def clampLimit (n : Nat) : Nat := min 100 (max 1 n)

/-- The page size for `?limit=`: 20 when it is absent or not a number. -/
def pageSize (limit? : Option String) : Nat :=
  match limit?.bind String.toNat? with
  | none => 20
  | some n => clampLimit n

/-- Whatever a client sends, the page size is between 1 and 100. -/
theorem pageSize_bounds (limit? : Option String) :
    1 ≤ pageSize limit? ∧ pageSize limit? ≤ 100 := by
  unfold pageSize clampLimit
  split <;> omega

/-- A size that is already in range is kept as it is. -/
theorem clampLimit_keeps (n : Nat) (h₁ : 1 ≤ n) (h₂ : n ≤ 100) : clampLimit n = n := by
  unfold clampLimit
  omega

-- The build fails if either proof ever depends on `sorry` (or any new axiom).
/-- info: 'App.pageSize_bounds' depends on axioms: [propext, Classical.choice, Quot.sound] -/
#guard_msgs in #print axioms App.pageSize_bounds

/-- info: 'App.clampLimit_keeps' depends on axioms: [propext, Quot.sound] -/
#guard_msgs in #print axioms App.clampLimit_keeps

end App
