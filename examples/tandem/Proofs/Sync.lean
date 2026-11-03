/-
The sync server on a model of its store: the log as a list. What the
proofs rely on, and do not prove, is that each query of `Server/` does to
the table what its model does to the list, and that a commit appends its
operations atomically (PROOFS.md, "What is trusted").
-/
import Tandem.Sync
import Proofs.Canon
import Proofs.Wire

namespace Tandem.Proofs
open Tandem Wire Sync

@[simp] theorem id_bind' {α β : Type} (x : _root_.Id α) (f : α → _root_.Id β) : (x >>= f) = f x := rfl
@[simp] theorem id_map' {α β : Type} (f : α → β) (x : _root_.Id α) : (f <$> x) = f x := rfl
@[simp] theorem id_pure' {α : Type} (x : α) : (pure x : _root_.Id α) = x := rfl
@[simp] theorem id_run' {α : Type} (x : _root_.Id α) : _root_.Id.run x = x := rfl

/-- The store's queries, on a list. -/
def model (log : List Op) : Reads _root_.Id where
  count := log.length
  known os := os.filter fun o => log.contains o
  slice s n := (log.drop s).take n

/-- What a request appends and answers, from log `log`. -/
def step (log : List Op) (req : Request) : List Op × Reply := _root_.Id.run (sync (model log) req)

theorem nodup_rev {α : Type} {l : List α} (h : l.Nodup) : l.reverse.Nodup := by
  unfold List.Nodup at *; rw [List.pairwise_reverse]; exact h.imp fun h e => h e.symm

theorem fresh_spec (log K : List Op) : ∀ (os acc : List Op), (∀ o ∈ os, o ∈ K ↔ o ∈ log) →
    let R := fresh K os acc
    (∀ o ∈ os, o ∈ log ∨ o ∈ R) ∧ (∀ o ∈ acc, o ∈ R) ∧ (∀ o ∈ R, o ∈ acc ∨ o ∈ os) ∧
      ((acc.Nodup ∧ ∀ o ∈ acc, o ∉ log) → R.Nodup ∧ ∀ o ∈ R, o ∉ log)
  | [], acc, _ => by
    simp only [fresh, List.mem_reverse]
    exact ⟨fun _ h => by simp at h, fun _ h => h, fun o h => Or.inl h, fun ⟨h1, h2⟩ => ⟨nodup_rev h1, fun o h => h2 o h⟩⟩
  | o :: os, acc, hK => by
    have hK' : ∀ x ∈ os, x ∈ K ↔ x ∈ log := fun x hx => hK x (by simp [hx])
    simp only [fresh]
    by_cases h1 : (acc.contains o || K.contains o) = true
    · simp only [h1, ite_true]
      obtain ⟨a, b, c, e⟩ := fresh_spec log K os acc hK'
      refine ⟨fun x hx => ?_, b, fun x hx => ?_, e⟩
      · simp at hx; rcases hx with rfl | hx
        · simp only [Bool.or_eq_true, List.contains_iff_mem] at h1
          rcases h1 with h1 | h1
          · exact Or.inr (b x h1)
          · exact Or.inl ((hK x (by simp)).1 h1)
        · exact a x hx
      · rcases c x hx with h | h
        · exact Or.inl h
        · exact Or.inr (by simp [h])
    · simp only [h1, Bool.false_eq_true, ite_false]
      simp only [Bool.or_eq_true, List.contains_iff_mem, not_or] at h1
      have h2 : o ∉ log := fun m => h1.2 ((hK o (by simp)).2 m)
      obtain ⟨a, b, c, e⟩ := fresh_spec log K os (o :: acc) hK'
      refine ⟨fun x hx => ?_, fun x hx => b x (by simp [hx]), fun x hx => ?_, fun ⟨hn, hl⟩ => e ⟨?_, ?_⟩⟩
      · simp at hx; rcases hx with rfl | hx
        · exact Or.inr (b x (by simp))
        · exact a x hx
      · rcases c x hx with h | h
        · simp at h; rcases h with rfl | h
          · exact Or.inr (by simp)
          · exact Or.inl h
        · exact Or.inr (by simp [h])
      · exact List.nodup_cons.2 ⟨h1.1, hn⟩
      · intro x hx; simp at hx; rcases hx with rfl | hx
        · exact h2
        · exact hl x hx

theorem take_take_append {α : Type} (k : Nat) (X Y : List α) : (X.take k ++ Y).take k = (X ++ Y).take k := by
  rw [List.take_append, List.take_append, List.take_take, List.length_take]
  by_cases h : X.length ≤ k
  · simp [List.take_of_length_le h, Nat.min_eq_right h]
  · simp [Nat.min_eq_left (by omega : k ≤ X.length)]; omega

theorem known_spec (log os : List Op) : ∀ o ∈ os, o ∈ os.filter (fun o => log.contains o) ↔ o ∈ log := by
  intro o ho
  rw [List.mem_filter, List.contains_iff_mem]
  exact ⟨fun h => h.2, fun h => ⟨ho, h⟩⟩

/-- The shape of a step: an error that appends nothing, or the fresh
operations appended and the log answered from the cursor. -/
theorem step_cases (log : List Op) (req : Request) :
    (step log req).1 = [] ∧ (∃ e, (step log req).2 = .error e) ∨
    ((step log req).1 = fresh (req.ops.filter fun o => log.contains o) req.ops [] ∧ req.ops.all okOp = true ∧
      (step log req).2 = .ops (min req.cursor (log ++ (step log req).1).length)
        (min req.cursor (log ++ (step log req).1).length +
          (((log ++ (step log req).1).drop (min req.cursor (log ++ (step log req).1).length)).take chunk).length)
        (((log ++ (step log req).1).drop (min req.cursor (log ++ (step log req).1).length)).take chunk)) := by
  unfold step sync
  by_cases hv : req.ops.all okOp = true
  · simp only [hv, Bool.not_true, Bool.false_eq_true, ite_false]
    by_cases hf : log.length + (fresh (req.ops.filter fun o => log.contains o) req.ops []).length > maxLog
    · left; simp only [id_run', model, id_bind', id_map', id_pure'] at hf ⊢
      rw [if_pos hf]; exact ⟨rfl, _, rfl⟩
    · right
      simp only [id_run', model, id_bind', id_map', id_pure'] at hf ⊢
      rw [if_neg hf]
      simp only [List.length_append]
      refine ⟨?_, ?_, ?_⟩
      · trivial
      · trivial
      · rw [take_take_append, ← List.drop_append]
  · left; simp [hv]

/-- Every operation of a request answered with `ops` is in the log after it. -/
theorem step_stored {log : List Op} {req : Request} {a b : Nat} {out : List Op}
    (h : (step log req).2 = .ops a b out) : ∀ o ∈ req.ops, o ∈ log ++ (step log req).1 := by
  rcases step_cases log req with ⟨_, e, he⟩ | ⟨hw, _, _⟩
  · rw [he] at h; simp at h
  · intro o ho
    rcases (fresh_spec log _ req.ops [] (known_spec log req.ops)).1 o ho with h1 | h1
    · exact List.mem_append_left _ h1
    · rw [hw]; exact List.mem_append_right _ h1

theorem step_valid (log : List Op) (req : Request) : ∀ o ∈ (step log req).1, okOp o = true := by
  rcases step_cases log req with ⟨hw, _⟩ | ⟨hw, hv, _⟩
  · rw [hw]; simp
  · intro o ho
    rw [hw] at ho
    rcases (fresh_spec log _ req.ops [] (known_spec log req.ops)).2.2.1 o ho with h | h
    · simp at h
    · exact List.all_eq_true.1 hv o h

theorem step_nodup {log : List Op} (h : log.Nodup) (req : Request) : (log ++ (step log req).1).Nodup := by
  rcases step_cases log req with ⟨hw, _⟩ | ⟨hw, _, _⟩
  · rw [hw]; simpa
  · rw [hw]
    obtain ⟨hn, hl⟩ := (fresh_spec log _ req.ops [] (known_spec log req.ops)).2.2.2 ⟨List.nodup_nil, by simp⟩
    rw [List.nodup_append]
    exact ⟨h, hn, fun a ha b hb e => hl b hb (e ▸ ha)⟩

/-- Requests served one after another: the final log and every reply. -/
def serve : List Op → List Request → List Op × List Reply
  | log, [] => (log, [])
  | log, req :: reqs =>
    let (w, rep) := step log req
    let (final, reps) := serve (log ++ w) reqs
    (final, rep :: reps)

theorem serve_prefix : ∀ (log : List Op) (reqs : List Request), log <+: (serve log reqs).1
  | log, [] => List.prefix_refl log
  | log, req :: reqs => by
    simp only [serve]
    exact (List.prefix_append log _).trans (serve_prefix _ reqs)

theorem serve_acked : ∀ (log : List Op) (reqs : List Request) (k : Nat) (req : Request) (a b : Nat) (out : List Op),
    reqs[k]? = some req → (serve log reqs).2[k]? = some (.ops a b out) → ∀ o ∈ req.ops, o ∈ (serve log reqs).1
  | _, [], _, _, _, _, _, h, _ => by simp at h
  | log, r :: reqs, 0, req, a, b, out, h1, h2 => by
    simp at h1; subst h1
    simp only [serve, List.getElem?_cons_zero, Option.some_inj] at h2
    intro o ho
    exact (serve_prefix _ reqs).subset (step_stored h2 o ho)
  | log, r :: reqs, k + 1, req, a, b, out, h1, h2 => by
    simp only [List.getElem?_cons_succ] at h1
    simp only [serve, List.getElem?_cons_succ] at h2
    exact serve_acked _ reqs k req a b out h1 h2

end Tandem.Proofs
