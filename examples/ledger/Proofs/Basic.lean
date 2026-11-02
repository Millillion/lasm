/-
Lemmas about the model: lookups after a commit, `upsert`, sums over
accounts, and the replay of a journal. Nothing here is specific to a rule.
-/
import Proofs.Model
import Ledger.Audit

namespace Ledger.Proofs
open Ledger Rules

/-! ## `upsert` -/

theorem find_upsert (l : List Account) (a : Account) (i : Nat) :
    (upsert l a).find? (·.id == i) = if a.id == i then some a else l.find? (·.id == i) := by
  induction l with
  | nil => simp [upsert, List.find?]
  | cons x xs ih =>
    simp only [upsert]
    by_cases hx : x.id = a.id
    · by_cases ha : a.id = i
      · simp [hx, ha]
      · simp [hx, ha, List.find?_cons]
    · simp only [beq_iff_eq, hx, ite_false, List.find?_cons, ih]
      by_cases ha : a.id = i
      · have : (x.id == i) = false := beq_eq_false_iff_ne.mpr (ha ▸ hx)
        simp [ha, this]
      · simp [ha]

theorem ids_upsert (l : List Account) (a : Account) :
    (upsert l a).map (·.id) = if a.id ∈ l.map (·.id) then l.map (·.id) else l.map (·.id) ++ [a.id] := by
  induction l with
  | nil => simp [upsert]
  | cons x xs ih =>
    simp only [upsert]
    by_cases hx : x.id = a.id
    · simp [hx]
    · simp only [beq_iff_eq, hx, ite_false, List.map_cons, ih, List.mem_cons]
      by_cases hm : a.id ∈ xs.map (·.id)
      · simp [hm]
      · have : ¬ (a.id = x.id) := fun h => hx h.symm
        simp [hm, this]

theorem nodup_upsert {l : List Account} (h : (l.map (·.id)).Nodup) (a : Account) :
    ((upsert l a).map (·.id)).Nodup := by
  rw [ids_upsert]
  split
  · exact h
  · rename_i hm
    exact List.nodup_append.mpr ⟨h, by simp, by
      intro x hx y hy; simp at hy; subst hy; exact fun e => hm (e ▸ hx)⟩

theorem mem_upsert {l : List Account} (h : (l.map (·.id)).Nodup) {a b : Account} (hb : b ∈ upsert l a) :
    b = a ∨ (b ∈ l ∧ b.id ≠ a.id) := by
  induction l with
  | nil => simp [upsert] at hb; exact .inl hb
  | cons x xs ih =>
    simp only [List.map_cons, List.nodup_cons] at h
    simp only [upsert] at hb
    by_cases hx : x.id = a.id
    · simp only [hx, beq_self_eq_true, ite_true, List.mem_cons] at hb
      rcases hb with hb | hb
      · exact .inl hb
      · refine .inr ⟨List.mem_cons_of_mem _ hb, ?_⟩
        intro e; exact h.1 (by rw [hx, ← e]; exact List.mem_map_of_mem hb)
    · simp only [beq_iff_eq, hx, ite_false, List.mem_cons] at hb
      rcases hb with hb | hb
      · subst hb; exact .inr ⟨List.mem_cons_self .., hx⟩
      · rcases ih h.2 hb with e | ⟨m, n⟩
        · exact .inl e
        · exact .inr ⟨List.mem_cons_of_mem _ m, n⟩

theorem mem_upsert_self (l : List Account) (a : Account) : a ∈ upsert l a := by
  induction l with
  | nil => simp [upsert]
  | cons x xs ih =>
    simp only [upsert]; split
    · simp
    · exact List.mem_cons_of_mem _ ih

/-- An account not replaced by `upsert` stays. -/
theorem mem_upsert_of_ne {l : List Account} {a b : Account} (hb : b ∈ l) (hn : b.id ≠ a.id) : b ∈ upsert l a := by
  induction l with
  | nil => simp at hb
  | cons x xs ih =>
    simp only [upsert]
    rcases List.mem_cons.mp hb with e | m
    · subst e; simp [hn]
    · split
      · exact List.mem_cons_of_mem _ m
      · exact List.mem_cons_of_mem _ (ih m)

theorem find_foldl_upsert (xs l : List Account) (i : Nat) :
    (xs.foldl upsert l).find? (·.id == i) = (xs.reverse.find? (·.id == i)).or (l.find? (·.id == i)) := by
  induction xs generalizing l with
  | nil => simp
  | cons x xs ih =>
    simp only [List.foldl_cons, ih, find_upsert, List.reverse_cons, List.find?_append]
    by_cases hx : x.id = i
    · cases h : xs.reverse.find? (·.id == i) <;> simp [hx, h, List.find?]
    · have h' : (x.id == i) = false := beq_eq_false_iff_ne.mpr hx
      cases h : xs.reverse.find? (·.id == i) <;> simp [hx, h', h, List.find?]

/-! ## Finding by id -/

theorem find_some_id {l : List Account} {i : Nat} {a : Account} (h : l.find? (·.id == i) = some a) :
    a ∈ l ∧ a.id = i := by
  have := List.find?_some h
  exact ⟨List.mem_of_find?_eq_some h, by simpa using this⟩

theorem find_some_tid {l : List Transfer} {i : Nat} {a : Transfer} (h : l.find? (·.id == i) = some a) :
    a ∈ l ∧ a.id = i := by
  have := List.find?_some h
  exact ⟨List.mem_of_find?_eq_some h, by simpa using this⟩

/-- With unique ids, the account with an id is the one found. -/
theorem find_of_mem {l : List Account} (h : (l.map (·.id)).Nodup) {a : Account} (ha : a ∈ l) :
    l.find? (·.id == a.id) = some a := by
  induction l with
  | nil => simp at ha
  | cons x xs ih =>
    simp only [List.map_cons, List.nodup_cons] at h
    rcases List.mem_cons.mp ha with e | m
    · subst e; simp
    · have : x.id ≠ a.id := fun e => h.1 (e ▸ List.mem_map_of_mem m)
      simp [List.find?_cons, this, ih h.2 m]

theorem tfind_of_mem {l : List Transfer} (h : (l.map (·.id)).Nodup) {a : Transfer} (ha : a ∈ l) :
    l.find? (·.id == a.id) = some a := by
  induction l with
  | nil => simp at ha
  | cons x xs ih =>
    simp only [List.map_cons, List.nodup_cons] at h
    rcases List.mem_cons.mp ha with e | m
    · subst e; simp
    · have : x.id ≠ a.id := fun e => h.1 (e ▸ List.mem_map_of_mem m)
      simp [List.find?_cons, this, ih h.2 m]

theorem find_none_of_not_mem {l : List Account} {i : Nat} (h : l.find? (·.id == i) = none) :
    ∀ a ∈ l, a.id ≠ i := by
  intro a ha e
  have := List.find?_eq_none.mp h a ha
  simp [e] at this

theorem tfind_none {l : List Transfer} {i : Nat} (h : l.find? (·.id == i) = none) :
    ∀ a ∈ l, a.id ≠ i := by
  intro a ha e
  have := List.find?_eq_none.mp h a ha
  simp [e] at this

/-! ## Sums over the accounts of a ledger -/

/-- The sum of `f` over the accounts of ledger `L`. -/
def total (l : List Account) (L : Nat) (f : Account → Nat) : Nat :=
  ((l.filter (·.ledger == L)).map f).sum

/-- `f a` if `a` is in ledger `L`, else 0. -/
def part (L : Nat) (f : Account → Nat) (a : Account) : Nat := if a.ledger == L then f a else 0

theorem total_cons (a : Account) (l : List Account) (L : Nat) (f : Account → Nat) :
    total (a :: l) L f = part L f a + total l L f := by
  unfold total part; by_cases h : a.ledger = L <;> simp [h, List.filter_cons]

theorem total_nil (L : Nat) (f : Account → Nat) : total [] L f = 0 := rfl

/-- Replacing an account changes a total by the difference of its parts. -/
theorem total_upsert {l : List Account} (h : (l.map (·.id)).Nodup) {a old : Account}
    (ho : l.find? (·.id == a.id) = some old) (L : Nat) (f : Account → Nat) :
    total (upsert l a) L f + part L f old = total l L f + part L f a := by
  induction l with
  | nil => simp at ho
  | cons x xs ih =>
    simp only [List.map_cons, List.nodup_cons] at h
    simp only [upsert]
    by_cases hx : x.id = a.id
    · simp only [hx, beq_self_eq_true, ite_true]
      simp [List.find?_cons, hx] at ho
      subst ho
      rw [total_cons, total_cons]; omega
    · simp only [beq_iff_eq, hx, ite_false]
      simp [List.find?_cons, hx] at ho
      rw [total_cons, total_cons]
      have := ih h.2 ho
      omega

/-! ## Replay -/

theorem replayFrom_append (P : List Transfer) (b : Balances) (id : Nat) (J : List Transfer) (t : Transfer) :
    Audit.replayFrom P b id (J ++ [t]) = Audit.replayStep (P ++ J) t id (Audit.replayFrom P b id J) := by
  induction J generalizing P b with
  | nil => simp [Audit.replayFrom]
  | cons u J ih =>
    simp only [List.cons_append, Audit.replayFrom, ih]
    simp

theorem replay_append (J : List Transfer) (t : Transfer) (id : Nat) :
    Audit.replay (J ++ [t]) id = Audit.replayStep J t id (Audit.replay J id) := by
  simp [Audit.replay, replayFrom_append]

theorem replayStep_other (P : List Transfer) (t : Transfer) (id : Nat) (b : Balances)
    (hd : t.debitAccountId ≠ id) (hc : t.creditAccountId ≠ id) : Audit.replayStep P t id b = b := by
  unfold Audit.replayStep
  simp [hd, hc]

theorem replayFrom_untouched (P : List Transfer) (b : Balances) (id : Nat) (J : List Transfer)
    (h : ∀ t ∈ J, t.debitAccountId ≠ id ∧ t.creditAccountId ≠ id) : Audit.replayFrom P b id J = b := by
  induction J generalizing P with
  | nil => rfl
  | cons t J ih =>
    simp only [Audit.replayFrom]
    rw [replayStep_other _ _ _ _ (h t (by simp)).1 (h t (by simp)).2]
    exact ih _ (fun u hu => h u (by simp [hu]))

/-- A journal none of whose transfers touches account `id` leaves it at zero. -/
theorem replay_untouched (J : List Transfer) (id : Nat)
    (h : ∀ t ∈ J, t.debitAccountId ≠ id ∧ t.creditAccountId ≠ id) : Audit.replay J id = {} :=
  replayFrom_untouched _ _ _ _ h

end Ledger.Proofs
