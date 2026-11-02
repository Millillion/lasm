/-
The auditor's one-pass replay (`Audit.replayAll`, hash maps) equals the
replay the propositions are about (`Audit.replay`), for every account.
-/
import Proofs.Basic
import Std.Data.HashMap.Lemmas

namespace Ledger.Proofs
open Ledger Audit

/-- `replayStep` reads the journal before the transfer only to find the pending transfer it names. -/
theorem replayStep_congr {P Q : List Transfer} {t : Transfer}
    (h : P.find? (·.id == t.pendingId) = Q.find? (·.id == t.pendingId)) (id : Nat) (b : Balances) :
    replayStep P t id b = replayStep Q t id b := by
  unfold replayStep; rw [h]

/-- What `replayAll` keeps after a prefix `P` of the journal. -/
def Tracks (P : List Transfer) (s : ReplayState) : Prop :=
  (∀ id, s.balances.getD id {} = replay P id) ∧ (∀ i, s.seen.get? i = P.find? (·.id == i))

theorem tracks_empty : Tracks [] {} := by
  constructor
  · intro id; simp [replay, replayFrom]
  · intro i; simp

theorem tracks_step {P : List Transfer} {s : ReplayState} (h : Tracks P s) (t : Transfer) :
    Tracks (P ++ [t]) (replayAllStep s t) := by
  obtain ⟨hb, hs⟩ := h
  -- the pending transfer, as `replayAll` finds it
  have hbefore : (match s.seen.get? t.pendingId with | some p => [p] | none => []).find? (·.id == t.pendingId) =
      P.find? (·.id == t.pendingId) := by
    rw [hs]
    cases hf : P.find? (·.id == t.pendingId) with
    | none => rfl
    | some p =>
      have := (find_some_tid hf).2
      simp [this]
  constructor
  · intro id
    rw [replay_append]
    unfold replayAllStep
    simp only
    by_cases hdc : t.debitAccountId = t.creditAccountId
    · simp only [hdc, beq_self_eq_true, if_true, List.foldl_cons, List.foldl_nil, Std.HashMap.getD_insert]
      by_cases hi : t.creditAccountId = id
      · simp only [hi, beq_self_eq_true, if_true]
        rw [hb]; exact replayStep_congr hbefore _ _
      · simp only [beq_eq_false_iff_ne.mpr hi, Bool.false_eq_true, if_false]
        rw [hb, replayStep_other _ _ _ _ (hdc ▸ hi) hi]
    · have hne : (t.debitAccountId == t.creditAccountId) = false := beq_eq_false_iff_ne.mpr hdc
      simp only [hne, Bool.false_eq_true, if_false, List.foldl_cons, List.foldl_nil, Std.HashMap.getD_insert]
      by_cases hc : t.creditAccountId = id
      · simp only [hc, beq_self_eq_true, if_true]
        rw [hb]; exact replayStep_congr hbefore _ _
      · simp only [beq_eq_false_iff_ne.mpr hc, Bool.false_eq_true, if_false]
        by_cases hd : t.debitAccountId = id
        · simp only [hd, beq_self_eq_true, if_true]
          rw [hb]; exact replayStep_congr hbefore _ _
        · simp only [beq_eq_false_iff_ne.mpr hd, Bool.false_eq_true, if_false]
          rw [hb, replayStep_other _ _ _ _ hd hc]
  · intro i
    unfold replayAllStep
    simp only
    rw [List.find?_append]
    cases hg : s.seen.get? t.id with
    | some q =>
      have hP : P.find? (·.id == t.id) = some q := by rw [← hs]; exact hg
      simp only [Option.isSome_some, if_true]
      rw [hs]
      by_cases hi : t.id = i
      · subst hi; rw [hP]; rfl
      · have h' : (t.id == i) = false := beq_eq_false_iff_ne.mpr hi
        cases P.find? (·.id == i) <;> simp [List.find?, h']
    | none =>
      have hP : P.find? (·.id == t.id) = none := by rw [← hs]; exact hg
      simp only [Option.isSome_none, Bool.false_eq_true, if_false, Std.HashMap.get?_insert]
      by_cases hi : t.id = i
      · subst hi; simp [hP]
      · have h' : (t.id == i) = false := beq_eq_false_iff_ne.mpr hi
        simp only [h', Bool.false_eq_true, ite_false]
        rw [hs i]
        cases P.find? (·.id == i) <;> simp [List.find?, h']

theorem tracks_foldl (J : List Transfer) : ∀ (P : List Transfer) (s : ReplayState), Tracks P s →
    Tracks (P ++ J) (J.foldl replayAllStep s) := by
  induction J with
  | nil => intro P s h; simpa using h
  | cons t J ih =>
    intro P s h
    have := ih (P ++ [t]) (replayAllStep s t) (tracks_step h t)
    simpa using this

/-- The auditor's one-pass replay is `replay`, for every account. -/
theorem replayAll_eq (J : List Transfer) (id : Nat) : (replayAll J).getD id {} = replay J id := by
  have := (tracks_foldl J [] {} tracks_empty).1 id
  simpa [replayAll] using this

end Ledger.Proofs
