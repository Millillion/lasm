/-
Batches and linked chains, on the model: how `chains` cuts a batch, that a
chain is applied entirely or not at all, which writes a batch makes, and
that every batch keeps the invariant.
-/
import Proofs.Transfer

namespace Ledger.Proofs
open Ledger Rules

/-! ## How a batch is cut into chains -/

section Cut
variable {ε : Type} (linked : ε → Bool)

theorem chains_flatten : ∀ b : List ε, (chains linked b).flatten = b
  | [] => rfl
  | e :: es => by
    have ih := chains_flatten es
    unfold chains
    split
    · split
      · rename_i h; rw [h] at ih; simp at ih; subst ih; rfl
      · rename_i c cs h; rw [h] at ih; simp [← ih]
    · simp [ih]

theorem chains_ne_nil : ∀ (b : List ε), ∀ c ∈ chains linked b, c ≠ []
  | [] => by simp [chains]
  | e :: es => by
    have ih := chains_ne_nil es
    unfold chains
    split
    · split
      · simp
      · rename_i c cs h
        intro d hd
        rw [h] at ih
        simp at hd
        rcases hd with rfl | m
        · simp
        · exact ih d (List.mem_cons_of_mem _ m)
    · intro d hd
      simp at hd
      rcases hd with rfl | m
      · simp
      · exact ih d m

/-- Within a chain, every event but the last is linked. -/
theorem chains_linked : ∀ (b : List ε), ∀ c ∈ chains linked b, ∀ e ∈ c.dropLast, linked e = true
  | [] => by simp [chains]
  | e :: es => by
    have ih := chains_linked es
    have hne := chains_ne_nil linked es
    unfold chains
    split
    · rename_i hl
      split
      · simp
      · rename_i c cs h
        intro d hd x hx
        rw [h] at ih hne
        simp at hd
        rcases hd with rfl | m
        · have hc : c ≠ [] := hne c (by simp)
          rw [List.dropLast_cons_of_ne_nil hc] at hx
          simp at hx
          rcases hx with rfl | m'
          · exact hl
          · exact ih c (by simp) x m'
        · exact ih d (List.mem_cons_of_mem _ m) x hx
    · intro d hd x hx
      simp at hd
      rcases hd with rfl | m
      · simp at hx
      · exact ih d m x hx

/-- Every chain but the last ends with an event that is not linked. -/
theorem chains_closed : ∀ (b : List ε), ∀ c ∈ (chains linked b).dropLast, ∀ x, c.getLast? = some x → linked x = false
  | [] => by simp [chains]
  | e :: es => by
    have ih := chains_closed es
    unfold chains
    split
    · rename_i hl
      split
      · simp
      · rename_i c cs h
        rw [h] at ih
        intro d hd x hx
        cases cs with
        | nil => simp at hd
        | cons c' cs' =>
          rw [List.dropLast_cons_of_ne_nil (by simp)] at hd
          simp at hd
          rcases hd with rfl | m
          · have hc : c ≠ [] := (chains_ne_nil linked es) c (by rw [h]; simp)
            have := ih c (by simp) x
            cases hcl : c.getLast? with
            | none => simp [List.getLast?_eq_none_iff] at hcl; exact absurd hcl hc
            | some y => rw [List.getLast?_cons, hcl] at hx; simp at hx; subst hx; exact this hcl
          · exact ih d (by rw [List.dropLast_cons_of_ne_nil (by simp)]; exact List.mem_cons_of_mem _ m) x hx
    · rename_i hl
      intro d hd x hx
      cases h : chains linked es with
      | nil => simp [h] at hd
      | cons c' cs' =>
        rw [h, List.dropLast_cons_of_ne_nil (by simp)] at hd
        simp at hd
        rcases hd with rfl | m
        · simp at hx; subst hx; simpa using hl
        · rw [h] at ih; exact ih d m x hx

end Cut

end Ledger.Proofs
