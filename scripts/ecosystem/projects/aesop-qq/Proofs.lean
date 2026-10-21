import Aesop
import Qq
open Qq Lean Meta

/-- Runtime code next to Aesop proofs and a Qq-built term. -/
def clamp (lo hi x : Nat) : Nat := max lo (min hi x)

theorem clamp_le (lo hi x : Nat) (h : lo ≤ hi) : clamp lo hi x ≤ hi := by
  unfold clamp; omega

example (p q r : Prop) (hp : p) (hq : q) (hr : r) : (p ∧ q) ∧ r := by aesop

@[aesop safe constructors]
inductive Even : Nat → Prop
  | zero : Even 0
  | plus2 : Even n → Even (n + 2)

example : Even 4 := by aesop

/-- A Qq expression evaluated during elaboration. -/
elab "qq_sum" : term => do
  let e : Q(Nat) := q(19 + 23)
  let some n ← (evalNat e).run | throwError "not a literal"
  return mkNatLit n

def answer : Nat := qq_sum
