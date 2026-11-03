/-
The orders the document uses: ids by counter then replica, and nodes by
their keys (lexicographic).
-/
import Tandem.Basic

namespace Tandem.Proofs
open Tandem

theorem Id.ext' {a b : Id} (h1 : a.c = b.c) (h2 : a.r = b.r) : a = b := by
  cases a; cases b; simp_all

theorem Id.lt_iff (a b : Id) : a.lt b = true ↔ a.c < b.c ∨ (a.c = b.c ∧ a.r < b.r) := by
  simp [Id.lt]

theorem Id.lt_irrefl (a : Id) : a.lt a = false := by
  simp [Id.lt]

theorem Id.lt_trans {a b c : Id} (h1 : a.lt b = true) (h2 : b.lt c = true) : a.lt c = true := by
  rw [Id.lt_iff] at *; omega

theorem Id.lt_asymm {a b : Id} (h : a.lt b = true) : b.lt a = false := by
  rw [Id.lt_iff] at h
  cases h' : b.lt a
  · rfl
  · rw [Id.lt_iff] at h'; omega

theorem Id.ne_of_lt {a b : Id} (h : a.lt b = true) : a ≠ b := by
  intro e; subst e; simp [Id.lt_irrefl] at h

theorem Id.lt_total {a b : Id} (h : a ≠ b) : a.lt b = true ∨ b.lt a = true := by
  rw [Id.lt_iff, Id.lt_iff]
  by_cases h1 : a.c = b.c
  · by_cases h2 : a.r = b.r
    · exact absurd (Id.ext' h1 h2) h
    · omega
  · omega

theorem Id.c_le_of_lt {a b : Id} (h : a.lt b = true) : a.c ≤ b.c := by
  rw [Id.lt_iff] at h; omega

/-! Lexicographic order on keys -/

theorem lexLt_irrefl : ∀ a : List Nat, lexLt a a = false
  | [] => rfl
  | x :: xs => by simp [lexLt, lexLt_irrefl xs]

theorem lexLt_trans : ∀ {a b c : List Nat}, lexLt a b = true → lexLt b c = true → lexLt a c = true
  | [], [], _, h, _ => by simp [lexLt] at h
  | [], _ :: _, [], _, h => by simp [lexLt] at h
  | [], _ :: _, _ :: _, _, _ => rfl
  | _ :: _, [], _, h, _ => by simp [lexLt] at h
  | _ :: _, _ :: _, [], _, h => by simp [lexLt] at h
  | x :: xs, y :: ys, z :: zs, h1, h2 => by
    simp only [lexLt, Bool.or_eq_true, decide_eq_true_eq, Bool.and_eq_true, beq_iff_eq] at *
    rcases h1 with h1 | ⟨rfl, h1⟩ <;> rcases h2 with h2 | ⟨rfl, h2⟩
    · left; omega
    · left; omega
    · left; omega
    · right; exact ⟨rfl, lexLt_trans h1 h2⟩

theorem lexLt_total : ∀ {a b : List Nat}, a ≠ b → lexLt a b = true ∨ lexLt b a = true
  | [], [], h => absurd rfl h
  | [], _ :: _, _ => Or.inl rfl
  | _ :: _, [], _ => Or.inr rfl
  | x :: xs, y :: ys, h => by
    simp only [lexLt, Bool.or_eq_true, decide_eq_true_eq, Bool.and_eq_true, beq_iff_eq]
    by_cases hxy : x = y
    · subst hxy
      have : xs ≠ ys := fun e => h (by rw [e])
      rcases lexLt_total this with h' | h'
      · left; right; exact ⟨rfl, h'⟩
      · right; right; exact ⟨rfl, h'⟩
    · omega

theorem lexLt_asymm {a b : List Nat} (h : lexLt a b = true) : lexLt b a = false := by
  cases h' : lexLt b a
  · rfl
  · have := lexLt_trans h h'; rw [lexLt_irrefl] at this; exact absurd this (by simp)

theorem Side.key_inj {s t : Side} (h : (match s with | .L => 0 | .R => 1) = (match t with | .L => 0 | .R => 1)) :
    s = t := by
  cases s <;> cases t <;> simp_all

theorem Node.key_inj {a b : Node} (h : a.key = b.key) : a = b := by
  rcases a with ⟨⟨ac, ar⟩, ap, as, ach⟩
  rcases b with ⟨⟨bc, br⟩, bp, bs, bch⟩
  cases ap <;> cases bp <;> cases as <;> cases bs <;>
    simp_all [Node.key, Char.toNat_inj] <;> (try (obtain ⟨_, _⟩ := h; subst_vars; rfl))
  all_goals (rename_i p q; cases p; cases q; simp_all)

/-- `Node.min` is one of the two. -/
theorem Node.min_mem (a b : Node) : Node.min a b = a ∨ Node.min a b = b := by
  unfold Node.min; split <;> simp

theorem Node.min_comm (a b : Node) : Node.min a b = Node.min b a := by
  unfold Node.min
  by_cases h : a = b
  · subst h; rfl
  · have hk : a.key ≠ b.key := fun e => h (Node.key_inj e)
    rcases lexLt_total hk with h1 | h1
    · simp [h1, lexLt_asymm h1]
    · simp [h1, lexLt_asymm h1]

theorem Node.min_self (a : Node) : Node.min a a = a := by
  unfold Node.min; split <;> rfl

end Tandem.Proofs
