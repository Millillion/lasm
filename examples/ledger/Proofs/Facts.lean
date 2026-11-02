/-
Facts about one created transfer (which accounts it changes and how), about
resubmitting ids, and about accounts and the journal across requests.
-/
import Proofs.Requests

namespace Ledger.Proofs
open Ledger Rules

/-- `b` is `a` with only its balances changed. -/
def Same (a b : Account) : Prop :=
  b.id = a.id ∧ b.userData128 = a.userData128 ∧ b.userData64 = a.userData64 ∧ b.userData32 = a.userData32 ∧
  b.ledger = a.ledger ∧ b.code = a.code ∧ b.flags = a.flags ∧ b.timestamp = a.timestamp

theorem Same.refl (a : Account) : Same a a := ⟨rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩

theorem Same.trans {a b c : Account} (h1 : Same a b) (h2 : Same b c) : Same a c := by
  obtain ⟨a1, a2, a3, a4, a5, a6, a7, a8⟩ := h1
  obtain ⟨b1, b2, b3, b4, b5, b6, b7, b8⟩ := h2
  exact ⟨b1.trans a1, b2.trans a2, b3.trans a3, b4.trans a4, b5.trans a5, b6.trans a6, b7.trans a7, b8.trans a8⟩

/-! ## One created transfer -/

/-- What a created transfer does to its two accounts. -/
theorem created_facts {D : DB} (hI : Inv D) {ts : Nat} {t : NewTransfer} {tr : Transfer} {dr' cr' : Account}
    (h : decideTransfer (ctxOf D t) ts t = (.created, some (tr, dr', cr'))) :
    ∃ dr cr, D.account? tr.debitAccountId = some dr ∧ D.account? tr.creditAccountId = some cr ∧
      tr.debitAccountId ≠ tr.creditAccountId ∧ dr.ledger = tr.ledger ∧ cr.ledger = tr.ledger ∧ tr.id = t.id ∧
      Same dr dr' ∧ Same cr cr' ∧
      dr'.creditsPending = dr.creditsPending ∧ dr'.creditsPosted = dr.creditsPosted ∧
      cr'.debitsPending = cr.debitsPending ∧ cr'.debitsPosted = cr.debitsPosted ∧
      (dr'.debitsPosted : Int) - dr.debitsPosted = (cr'.creditsPosted : Int) - cr.creditsPosted ∧
      (dr'.debitsPending : Int) - dr.debitsPending = (cr'.creditsPending : Int) - cr.creditsPending := by
  obtain ⟨-, -, -, -, -, hcase⟩ := decideTransfer_some h
  rcases hcase with ⟨hr, hnc, dr, cr, hd, hc, hbc, he⟩ | ⟨hr, hrc, p, dr, cr, hp, hpp, hres, hd, hc, hpc, he⟩
  · simp only [ctxOf, hr, Bool.false_eq_true, ite_false] at hd hc
    have hn := hnc; simp [newChecks] at hn
    obtain ⟨-, -, -, -, n5, -, -, -⟩ := hn
    have hb := hbc; simp [balanceChecks] at hb
    obtain ⟨b1, b2, -⟩ := hb
    have htr : tr = (newEffect ts t dr cr).1 := by rw [← he]
    have hdr : dr' = (newEffect ts t dr cr).2.1 := by rw [← he]
    have hcr : cr' = (newEffect ts t dr cr).2.2 := by rw [← he]
    rw [newEffect_debit] at hdr
    rw [newEffect_credit] at hcr
    refine ⟨dr, cr, by rw [htr, newEffect_dr]; exact hd, by rw [htr, newEffect_cr]; exact hc,
      by rw [htr, newEffect_dr, newEffect_cr]; exact fun e => n5 e.symm, by rw [htr, newEffect_ledger]; exact b2.symm,
      by rw [htr, newEffect_ledger]; exact b1.symm.trans b2.symm, by rw [htr, newEffect_id], ?_⟩
    subst hdr hcr
    cases hp : t.flags.pending <;> simp [Same, hp] <;> omega
  · simp only [ctxOf, hr, ite_true] at hp hres hd hc
    rw [hp] at hd hc
    simp only at hd hc
    obtain ⟨hpm, hpid⟩ := transfer?_mem hp
    obtain ⟨hdm, hdid⟩ := account?_mem hd
    obtain ⟨hcm, hcid⟩ := account?_mem hc
    obtain ⟨hne, ⟨x, hx, hxl⟩, ⟨y, hy, hyl⟩⟩ := hI.accountsOf p hpm
    rw [hd] at hx; cases hx
    rw [hc] at hy; cases hy
    have rfalse := resolvedIn_of_resolution hres
    rw [← hpid] at rfalse
    -- the pending amount is in both accounts' pending balances
    have ld : p.amount ≤ dr.debitsPending := by
      rw [hI.pendingD dr hdm]
      exact le_sumIf (P := fun q => q.flags.pending && q.debitAccountId == dr.id && !resolvedIn D.transfers q.id)
        (·.amount) hpm (by simp [hpp, hdid, rfalse])
    have lc : p.amount ≤ cr.creditsPending := by
      rw [hI.pendingC cr hcm]
      exact le_sumIf (P := fun q => q.flags.pending && q.creditAccountId == cr.id && !resolvedIn D.transfers q.id)
        (·.amount) hpm (by simp [hpp, hcid, rfalse])
    have htr : tr = (resolveEffect ts t p dr cr).1 := by rw [← he]
    have hdr : dr' = (resolveEffect ts t p dr cr).2.1 := by rw [← he]
    have hcr : cr' = (resolveEffect ts t p dr cr).2.2 := by rw [← he]
    subst htr hdr hcr
    refine ⟨dr, cr, hd, hc, hne, hxl, hyl, rfl, ⟨rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩,
      ⟨rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩, rfl, rfl, rfl, rfl, ?_, ?_⟩
    · dsimp only [resolveEffect]; split <;> omega
    · dsimp only [resolveEffect]; omega

/-- A created transfer, resubmitted as it was, is `exists`. -/
theorem exists_of_created {c : TransferCtx} {ts : Nat} {t : NewTransfer} {tr : Transfer} {dr' cr' : Account}
    (h : decideTransfer c ts t = (.created, some (tr, dr', cr'))) : existsTransfer t tr c.pending = .exists := by
  obtain ⟨-, -, -, -, -, hcase⟩ := decideTransfer_some h
  rcases hcase with ⟨hr, hnc, dr, cr, -, -, -, he⟩ | ⟨hr, hrc, p, dr, cr, hp, -, -, -, -, hpc, he⟩
  · have hn := hnc; simp [newChecks] at hn
    obtain ⟨-, -, -, -, -, n6, -, -⟩ := hn
    have htr : tr = (newEffect ts t dr cr).1 := by rw [← he]
    subst htr
    unfold existsTransfer
    simp [newEffect_flags, newEffect_pendingId, newEffect_dr, newEffect_cr, newEffect_amount, newEffect_ledger,
      n6, hr, firstFailing]
    unfold newEffect; split <;> simp
  · have htr : tr = (resolveEffect ts t p dr cr).1 := by rw [← he]
    subst htr
    have hq := hpc; simp only [pendingChecks, List.mem_cons, List.not_mem_nil, or_false, forall_eq_or_imp,
      forall_eq] at hq
    obtain ⟨q1, q2, q3, q4, -, -⟩ := hq
    unfold existsTransfer
    simp only [hp, hr]
    unfold existsResolution resolveEffect
    simp [firstFailing, q1, q2, q3, q4]

/-- Once an id has failed, no transfer with it is created, and its failure is not transient. -/
theorem failed_never {c : TransferCtx} {ts : Nat} {t : NewTransfer} (hf : c.failed = true) :
    (decideTransfer c ts t).2 = none ∧ (decideTransfer c ts t).1.transient = false := by
  unfold decideTransfer
  cases hi : firstFailing [(t.id == 0, TransferStatus.idMustNotBeZero), (t.id == u128Max, .idMustNotBeIntMax)] with
  | some x =>
    have := firstFailing_some_mem hi
    simp at this
    rcases this with ⟨-, rfl⟩ | ⟨-, rfl⟩ <;> simp [hi, TransferStatus.transient]
  | none =>
    cases hx : c.existing with
    | some e =>
      simp only [hi, hx]
      refine ⟨by first | rfl | trivial, ?_⟩
      have := existsTransfer_isExists t e c.pending
      revert this; cases existsTransfer t e c.pending <;> simp [TransferStatus.isExists, TransferStatus.transient]
    | none => simp [hi, hx, hf, TransferStatus.transient]

theorem isExists_not_transient {s : TransferStatus} (h : s.isExists = true) : s.transient = false := by
  cases s <;> simp_all [TransferStatus.isExists, TransferStatus.transient]

/-! ## Accounts are permanent -/

theorem stepTransfer_keeps {E : DB} (hI : Inv E) (ts : Nat) (t : NewTransfer) {a : Account} (ha : a ∈ E.accounts) :
    ∃ a' ∈ (stepTransfer E ts t).2.accounts, Same a a' := by
  unfold stepTransfer
  rcases h : decideTransfer (ctxOf E t) ts t with ⟨s, _ | ⟨tr, dr', cr'⟩⟩
  · exact ⟨a, ha, Same.refl a⟩
  · have hs := (decideTransfer_some h).1; subst hs
    obtain ⟨dr, cr, hd, hc, hne, -, -, -, sd, sc, -⟩ := created_facts hI h
    show ∃ a' ∈ (E.apply (Writes.ofTransfer tr dr' cr')).accounts, Same a a'
    rw [apply_ofTransfer]
    obtain ⟨hdm, hdid⟩ := account?_mem hd
    obtain ⟨hcm, hcid⟩ := account?_mem hc
    have hn := hI.accountIds
    by_cases e1 : a.id = cr.id
    · have : a = cr := by
        have h1 := find_of_mem hn ha; have h2 := find_of_mem hn hcm; rw [e1] at h1; rw [h1] at h2; cases h2; rfl
      subst this
      exact ⟨cr', mem_upsert_self _ _, sc⟩
    · by_cases e2 : a.id = dr.id
      · have : a = dr := by
          have h1 := find_of_mem hn ha; have h2 := find_of_mem hn hdm; rw [e2] at h1; rw [h1] at h2; cases h2; rfl
        subst this
        refine ⟨dr', mem_upsert_of_ne (mem_upsert_self _ _) ?_, sd⟩
        rw [sd.1, sc.1, hdid, hcid]; exact hne
      · exact ⟨a, mem_upsert_of_ne (mem_upsert_of_ne ha (by rw [sd.1]; exact e2)) (by rw [sc.1]; exact e1),
          Same.refl a⟩

theorem stepAccount_keeps {E : DB} (ts : Nat) (n : NewAccount) {a : Account} (ha : a ∈ E.accounts) :
    ∃ a' ∈ (stepAccount E ts n).2.accounts, Same a a' := by
  unfold stepAccount
  rcases h : decideAccount (E.account? n.id) ts n with ⟨s, _ | acc⟩
  · exact ⟨a, ha, Same.refl a⟩
  · obtain ⟨-, -, -, hex, -, -⟩ := decideAccount_some h
    show ∃ a' ∈ (E.apply (Writes.ofAccount acc)).accounts, Same a a'
    rw [apply_ofAccount]
    refine ⟨a, mem_upsert_of_ne ha ?_, Same.refl a⟩
    rw [(decideAccount_some h).2.2.2.2.2]
    intro e
    exact find_none_of_not_mem hex a ha e

/-- What a request keeps: every account, with only its balances changed. -/
def Keeps (D0 E : DB) : Prop := Inv E ∧ ∀ a ∈ D0.accounts, ∃ a' ∈ E.accounts, Same a a'

theorem after_keeps {D : DB} (hI : Inv D) (now : Nat) (r : Request) :
    ∀ a ∈ D.accounts, ∃ a' ∈ (after now r D).accounts, Same a a' := by
  have base : Keeps D (D.apply {}) := by
    rw [apply_empty]; exact ⟨hI, fun a ha => ⟨a, ha, Same.refl a⟩⟩
  unfold after
  rcases handle_writes D now r with h | ⟨ts, b, h⟩ | ⟨ts, b, h⟩
  · rw [h, apply_empty]; exact fun a ha => ⟨a, ha, Same.refl a⟩
  · rw [h]
    have := runChains_keeps accountKind createAccount (Keeps D)
      (fun E ts n hE => by
        have hm := createAccount_model E ts n
        rw [Prod.mk.injEq] at hm
        rw [hm.2]
        refine ⟨inv_stepAccount hE.1, fun a ha => ?_⟩
        obtain ⟨a1, h1, s1⟩ := hE.2 a ha
        obtain ⟨a2, h2, s2⟩ := stepAccount_keeps (E := E) ts n h1
        exact ⟨a2, h2, s1.trans s2⟩)
      (fun E _ _ hE => by show Keeps D (E.apply {}); rw [apply_empty]; exact hE)
      D (chains accountKind.linked b) ts {} base
    exact this.2
  · rw [h]
    have := runChains_keeps transferKind createTransfer (Keeps D)
      (fun E ts t hE => by
        have hm := createTransfer_model E ts t
        rw [Prod.mk.injEq] at hm
        rw [hm.2]
        refine ⟨inv_stepTransfer hE.1, fun a ha => ?_⟩
        obtain ⟨a1, h1, s1⟩ := hE.2 a ha
        obtain ⟨a2, h2, s2⟩ := stepTransfer_keeps hE.1 ts t h1
        exact ⟨a2, h2, s1.trans s2⟩)
      (fun E e s hE => by
        refine ⟨inv_onFailure_transfer hE.1 e s, fun a ha => ?_⟩
        obtain ⟨a1, h1, s1⟩ := hE.2 a ha
        refine ⟨a1, ?_, s1⟩
        unfold transferKind; simp only; split <;> simpa [DB.apply] using h1)
      D (chains transferKind.linked b) ts {} base
    exact this.2

theorem later_keeps {D D' : DB} (h : Later D D') (hD : Reachable D) :
    ∀ a ∈ D.accounts, ∃ a' ∈ D'.accounts, Same a a' := by
  induction h with
  | refl => exact fun a ha => ⟨a, ha, Same.refl a⟩
  | step now r hl ih =>
    intro a ha
    obtain ⟨a1, h1, s1⟩ := ih a ha
    obtain ⟨a2, h2, s2⟩ := after_keeps (inv_reachable (reachable_later hl hD)) now r a1 h1
    exact ⟨a2, h2, s1.trans s2⟩

end Ledger.Proofs
