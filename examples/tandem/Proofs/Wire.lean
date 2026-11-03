/-
The parsers accept only bounded, well-formed input.
-/
import Tandem.Wire
import Proofs.Tree

namespace Tandem.Proofs
open Tandem Wire

theorem num?_lt {s : List Char} {n : Nat} (h : num? s = some n) : n < maxNum := by
  unfold num? at h
  split at h
  · simp at h
  · simp only [] at h
    split at h
    · simp at h; omega
    · simp at h

theorem decodeOp_ok {l : List Char} {op : Op} (h : decodeOp l = some op) : okOp op = true := by
  unfold decodeOp at h
  split at h
  · split at h
    · simp at h; subst h; assumption
    · simp at h
  · simp at h

theorem decodeOps_go : ∀ (ls : List (List Char)) (acc ops : List Op), decodeOps.go ls acc = .ok ops →
    ops.length = ls.length + acc.length ∧ ∀ o ∈ ops, o ∈ acc ∨ okOp o = true
  | [], acc, ops, h => by
    simp [decodeOps.go] at h; subst h; simp; exact fun o h => Or.inl h
  | l :: ls, acc, ops, h => by
    unfold decodeOps.go at h
    split at h
    · rename_i op hop
      obtain ⟨h1, h2⟩ := decodeOps_go ls (op :: acc) ops h
      refine ⟨by simp at h1 ⊢; omega, fun o ho => ?_⟩
      rcases h2 o ho with h | h
      · simp at h; rcases h with rfl | h
        · exact Or.inr (decodeOp_ok hop)
        · exact Or.inl h
      · exact Or.inr h
    · simp at h

theorem decodeOps_ok {ls : List (List Char)} {ops : List Op} (h : decodeOps ls = .ok ops) :
    ops.length ≤ maxOps ∧ ∀ o ∈ ops, okOp o = true := by
  unfold decodeOps at h
  split at h
  · simp at h
  · obtain ⟨h1, h2⟩ := decodeOps_go ls [] ops h
    refine ⟨by simp at h1; omega, fun o ho => ?_⟩
    rcases h2 o ho with h | h
    · simp at h
    · exact h

theorem decodeRequest_ok {s : String} {r : Request} (h : decodeRequest s = .ok r) :
    r.cursor < maxNum ∧ r.ops.length ≤ maxOps ∧ ∀ o ∈ r.ops, okOp o = true := by
  unfold decodeRequest at h
  split at h
  · split at h
    · simp at h
    · split at h
      · split at h
        · rename_i cursor hc
          cases hd : decodeOps _ with
          | error e => rw [hd] at h; simp [bind, Except.bind] at h
          | ok ops =>
            rw [hd] at h; simp [bind, Except.bind, pure, Except.pure] at h
            subst h
            exact ⟨num?_lt hc, decodeOps_ok hd⟩
        · simp at h
      · simp at h
  · simp at h

theorem decodeReply_ok {s : String} {a b : Nat} {ops : List Op} (h : decodeReply s = .ok (.ops a b ops)) :
    a < maxNum ∧ b < maxNum ∧ a ≤ b ∧ ops.length = b - a ∧ ops.length ≤ maxOps ∧ ∀ o ∈ ops, okOp o = true := by
  unfold decodeReply at h
  split at h
  · split at h
    · simp at h
    · split at h
      · split at h
        · rename_i a' b' ha hb
          cases hd : decodeOps _ with
          | error e => rw [hd] at h; simp [bind, Except.bind] at h
          | ok ops' =>
            rw [hd] at h; simp only [bind, Except.bind] at h
            split at h
            · rename_i hc
              simp [pure, Except.pure] at h
              obtain ⟨rfl, rfl, rfl⟩ := h
              simp at hc
              exact ⟨num?_lt ha, num?_lt hb, hc.1, hc.2, decodeOps_ok hd⟩
            · simp at h
        · simp at h
      · simp [pure, Except.pure] at h
      · simp at h
  · simp at h

/-- An operation the server accepts is one a document applies: an insertion
is a valid node. -/
theorem okOp_valid {n : Node} (h : okOp (.ins n) = true) : n.valid = true := by
  simp [okOp] at h; exact h.2

end Tandem.Proofs
