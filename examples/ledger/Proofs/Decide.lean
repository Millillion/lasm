/-
When the rules create something: every check passed. These lemmas turn a
`created` result back into the facts the checks established, which the
invariant proofs use.
-/
import Proofs.Sim

namespace Ledger.Proofs
open Ledger Rules

theorem u128Max_ne_zero : u128Max ≠ 0 := by decide

theorem firstFailing_none {σ : Type} {cs : List (Bool × σ)} : firstFailing cs = none ↔ ∀ p ∈ cs, p.1 = false := by
  induction cs with
  | nil => simp [firstFailing]
  | cons c cs ih =>
    obtain ⟨b, s⟩ := c
    cases b <;> simp [firstFailing, ih]

theorem firstFailing_some_mem {σ : Type} {cs : List (Bool × σ)} {s : σ} (h : firstFailing cs = some s) :
    (true, s) ∈ cs := by
  induction cs with
  | nil => simp [firstFailing] at h
  | cons c cs ih =>
    obtain ⟨b, s'⟩ := c
    cases b
    · simp [firstFailing] at h; exact List.mem_cons_of_mem _ (ih h)
    · simp [firstFailing] at h; subst h; simp

/-- A transfer is created only if every check passed. -/
theorem decideTransfer_some {c : TransferCtx} {ts : Nat} {t : NewTransfer} {s : TransferStatus} {e : Effect}
    (h : decideTransfer c ts t = (s, some e)) :
    s = .created ∧ t.id ≠ 0 ∧ t.id ≠ u128Max ∧ c.existing = none ∧ c.failed = false ∧
    ((t.flags.resolves = false ∧ (∀ q ∈ newChecks t, q.1 = false) ∧
       ∃ dr cr, c.debit = some dr ∧ c.credit = some cr ∧ (∀ q ∈ balanceChecks t dr cr, q.1 = false) ∧
         e = newEffect ts t dr cr) ∨
     (t.flags.resolves = true ∧ (∀ q ∈ resolveChecks t, q.1 = false) ∧
       ∃ p dr cr, c.pending = some p ∧ p.flags.pending = true ∧ c.resolution = none ∧
         c.debit = some dr ∧ c.credit = some cr ∧ (∀ q ∈ pendingChecks t p, q.1 = false) ∧
         e = resolveEffect ts t p dr cr)) := by
  unfold decideTransfer at h
  by_cases h0 : t.id = 0
  · simp [firstFailing, h0] at h
  by_cases h1 : t.id = u128Max
  · simp [firstFailing, h0, h1, u128Max_ne_zero] at h
  simp only [firstFailing, h0, h1, beq_iff_eq, ite_false] at h
  cases hx : c.existing with
  | some x => simp [hx] at h
  | none =>
  simp only [hx] at h
  cases hf : c.failed with
  | true => simp [hf] at h
  | false =>
  simp only [hf, Bool.false_eq_true, ite_false] at h
  cases hr : t.flags.resolves with
  | true =>
    simp only [hr, ite_true] at h
    unfold decideResolve at h
    cases hrc : firstFailing (resolveChecks t) with
    | some x => simp [hrc] at h
    | none =>
    simp only [hrc] at h
    cases hp : c.pending with
    | none => simp [hp] at h
    | some p =>
    simp only [hp] at h
    cases hpp : p.flags.pending with
    | false => simp [hpp] at h
    | true =>
    simp only [hpp, Bool.not_true, Bool.false_eq_true, ite_false] at h
    cases hd : c.debit with
    | none => simp [hd] at h
    | some dr =>
    cases hc : c.credit with
    | none => simp [hd, hc] at h
    | some cr =>
    simp only [hd, hc] at h
    cases hpc : firstFailing (pendingChecks t p) with
    | some x => simp [hpc] at h
    | none =>
    simp only [hpc] at h
    cases hres : c.resolution with
    | some x => simp [hres] at h
    | none =>
    simp only [hres, Prod.mk.injEq, Option.some.injEq] at h
    obtain ⟨rfl, rfl⟩ := h
    exact ⟨rfl, h0, h1, rfl, rfl, .inr ⟨rfl, firstFailing_none.mp hrc, p, dr, cr, rfl, hpp, rfl, rfl, rfl,
      firstFailing_none.mp hpc, rfl⟩⟩
  | false =>
    simp only [hr, Bool.false_eq_true, ite_false] at h
    unfold decideNew at h
    cases hnc : firstFailing (newChecks t) with
    | some x => simp [hnc] at h
    | none =>
    simp only [hnc] at h
    cases hd : c.debit with
    | none => simp [hd] at h
    | some dr =>
    cases hc : c.credit with
    | none => simp [hd, hc] at h
    | some cr =>
    simp only [hd, hc] at h
    cases hbc : firstFailing (balanceChecks t dr cr) with
    | some x => simp [hbc] at h
    | none =>
    simp only [hbc, Prod.mk.injEq, Option.some.injEq] at h
    obtain ⟨rfl, rfl⟩ := h
    exact ⟨rfl, h0, h1, rfl, rfl, .inl ⟨rfl, firstFailing_none.mp hnc, dr, cr, rfl, rfl,
      firstFailing_none.mp hbc, rfl⟩⟩

theorem firstFailing_ne {σ : Type} {cs : List (Bool × σ)} {x s : σ} (hx : ∀ q ∈ cs, q.2 ≠ x)
    (h : firstFailing cs = some s) : s ≠ x :=
  hx _ (firstFailing_some_mem h)

theorem existsTransfer_isExists (t : NewTransfer) (e : Transfer) (p : Option Transfer) :
    (existsTransfer t e p).isExists = true := by
  unfold existsTransfer
  split
  · rfl
  · split
    · rfl
    · split
      · split
        · unfold existsResolution
          cases hf : firstFailing _ with
          | none => rfl
          | some x =>
            have := firstFailing_some_mem hf
            simp only [List.mem_cons, Prod.mk.injEq, List.not_mem_nil, or_false] at this
            simp only [Option.getD_some]
            rcases this with ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ <;> rfl
        · rfl
      · cases hf : firstFailing _ with
        | none => rfl
        | some x =>
          have := firstFailing_some_mem hf
          simp only [List.mem_cons, Prod.mk.injEq, List.not_mem_nil, or_false] at this
          simp only [Option.getD_some]
          rcases this with ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ <;> rfl

theorem existsAccount_isExists (a : NewAccount) (e : Account) : (existsAccount a e).isExists = true := by
  unfold existsAccount
  cases hf : firstFailing _ with
  | none => rfl
  | some x =>
    have := firstFailing_some_mem hf
    simp only [List.mem_cons, Prod.mk.injEq, List.not_mem_nil, or_false] at this
    simp only [Option.getD_some]
    rcases this with ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ | ⟨_, rfl⟩ <;> rfl

/-- A transfer whose decision writes nothing is not `created`. -/
theorem decideTransfer_none {c : TransferCtx} {ts : Nat} {t : NewTransfer} {s : TransferStatus}
    (h : decideTransfer c ts t = (s, none)) : s ≠ .created := by
  unfold decideTransfer at h
  cases hi : firstFailing [(t.id == 0, TransferStatus.idMustNotBeZero), (t.id == u128Max, .idMustNotBeIntMax)] with
  | some x =>
    simp only [hi, Prod.mk.injEq] at h; rw [← h.1]
    exact firstFailing_ne (by simp) hi
  | none =>
  simp only [hi] at h
  cases hx : c.existing with
  | some x =>
    simp only [hx, Prod.mk.injEq] at h; rw [← h.1]
    intro e; have := existsTransfer_isExists t x c.pending; rw [e] at this; exact absurd this (by decide)
  | none =>
  simp only [hx] at h
  cases hf : c.failed with
  | true => simp only [hf, ite_true, Prod.mk.injEq] at h; rw [← h.1]; decide
  | false =>
  simp only [hf, Bool.false_eq_true, ite_false] at h
  cases hr : t.flags.resolves with
  | true =>
    simp only [hr, ite_true] at h
    unfold decideResolve at h
    cases hrc : firstFailing (resolveChecks t) with
    | some x => simp only [hrc, Prod.mk.injEq] at h; rw [← h.1]; exact firstFailing_ne (by simp [resolveChecks]) hrc
    | none =>
    simp only [hrc] at h
    cases hp : c.pending with
    | none => simp only [hp, Prod.mk.injEq] at h; rw [← h.1]; decide
    | some p =>
    simp only [hp] at h
    cases hpp : p.flags.pending with
    | false => simp only [hpp, Bool.not_false, ite_true, Prod.mk.injEq] at h; rw [← h.1]; decide
    | true =>
    simp only [hpp, Bool.not_true, Bool.false_eq_true, ite_false] at h
    cases hd : c.debit with
    | none => simp only [hd, Prod.mk.injEq] at h; rw [← h.1]; decide
    | some dr =>
    cases hc : c.credit with
    | none => simp only [hd, hc, Prod.mk.injEq] at h; rw [← h.1]; decide
    | some cr =>
    simp only [hd, hc] at h
    cases hpc : firstFailing (pendingChecks t p) with
    | some x => simp only [hpc, Prod.mk.injEq] at h; rw [← h.1]; exact firstFailing_ne (by simp [pendingChecks]) hpc
    | none =>
    simp only [hpc] at h
    cases hres : c.resolution with
    | some x =>
      simp only [hres, Prod.mk.injEq] at h; rw [← h.1]
      split <;> decide
    | none => simp [hres] at h
  | false =>
    simp only [hr, Bool.false_eq_true, ite_false] at h
    unfold decideNew at h
    cases hnc : firstFailing (newChecks t) with
    | some x => simp only [hnc, Prod.mk.injEq] at h; rw [← h.1]; exact firstFailing_ne (by simp [newChecks]) hnc
    | none =>
    simp only [hnc] at h
    cases hd : c.debit with
    | none => simp only [hd, Prod.mk.injEq] at h; rw [← h.1]; decide
    | some dr =>
    cases hc : c.credit with
    | none => simp only [hd, hc, Prod.mk.injEq] at h; rw [← h.1]; decide
    | some cr =>
    simp only [hd, hc] at h
    cases hbc : firstFailing (balanceChecks t dr cr) with
    | some x => simp only [hbc, Prod.mk.injEq] at h; rw [← h.1]; exact firstFailing_ne (by simp [balanceChecks]) hbc
    | none => simp [hbc] at h

/-- An account whose decision writes nothing is not `created`. -/
theorem decideAccount_none {ex : Option Account} {ts : Nat} {a : NewAccount} {s : AccountStatus}
    (h : decideAccount ex ts a = (s, none)) : s ≠ .created := by
  unfold decideAccount at h
  cases hi : firstFailing [(a.id == 0, AccountStatus.idMustNotBeZero), (a.id == u128Max, .idMustNotBeIntMax)] with
  | some x =>
    simp only [hi, Prod.mk.injEq] at h; rw [← h.1]
    exact firstFailing_ne (by simp) hi
  | none =>
  simp only [hi] at h
  cases hx : ex with
  | some x =>
    simp only [hx, Prod.mk.injEq] at h; rw [← h.1]
    intro e; have := existsAccount_isExists a x; rw [e] at this; exact absurd this (by decide)
  | none =>
  simp only [hx] at h
  cases hc : firstFailing (accountChecks a) with
  | some x => simp only [hc, Prod.mk.injEq] at h; rw [← h.1]; exact firstFailing_ne (by simp [accountChecks]) hc
  | none => simp [hc] at h

/-- An account is created only if every check passed. -/
theorem decideAccount_some {ex : Option Account} {ts : Nat} {a : NewAccount} {s : AccountStatus} {acc : Account}
    (h : decideAccount ex ts a = (s, some acc)) :
    s = .created ∧ a.id ≠ 0 ∧ a.id ≠ u128Max ∧ ex = none ∧ (∀ q ∈ accountChecks a, q.1 = false) ∧
      acc = newAccount ts a := by
  unfold decideAccount at h
  by_cases h0 : a.id = 0
  · simp [firstFailing, h0] at h
  by_cases h1 : a.id = u128Max
  · simp [firstFailing, h0, h1, u128Max_ne_zero] at h
  simp only [firstFailing, h0, h1, beq_iff_eq, ite_false] at h
  cases hx : ex with
  | some x => simp [hx] at h
  | none =>
  simp only [hx] at h
  cases hc : firstFailing (accountChecks a) with
  | some x => simp [hc] at h
  | none =>
  simp only [hc, Prod.mk.injEq, Option.some.injEq] at h
  obtain ⟨rfl, rfl⟩ := h
  exact ⟨rfl, h0, h1, rfl, firstFailing_none.mp hc, rfl⟩

end Ledger.Proofs
