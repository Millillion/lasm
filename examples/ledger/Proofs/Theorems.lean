/-
The theorems of `Proofs/Spec.lean`, one per proposition, each of exactly the
proposition's type (`test/Axioms.lean` checks this).
-/
import Proofs.Spec
import Proofs.Facts

namespace Ledger.Proofs
open Ledger Rules

/-! ## Helpers: later databases from any state that satisfies the invariant -/

theorem later_inv {D D' : DB} (h : Later D D') (hI : Inv D) : Inv D' := by
  induction h with
  | refl => exact hI
  | step now r _ ih => exact inv_after ih now r

theorem later_keeps' {D D' : DB} (h : Later D D') (hI : Inv D) :
    ∀ a ∈ D.accounts, ∃ a' ∈ D'.accounts, Same a a' := by
  induction h with
  | refl => exact fun a ha => ⟨a, ha, Same.refl a⟩
  | step now r hl ih =>
    intro a ha
    obtain ⟨a1, h1, s1⟩ := ih a ha
    obtain ⟨a2, h2, s2⟩ := after_keeps (later_inv hl hI) now r a1 h1
    exact ⟨a2, h2, s1.trans s2⟩

/-- A lone transfer whose status is `created`: what was decided and written. -/
theorem submit_created {D : DB} {ts : Nat} {t : NewTransfer} {D' : DB} (hl : t.flags.linked = false)
    (h : Spec.submitTransfer D ts t = ([.created], D')) :
    ∃ tr dr' cr', decideTransfer (ctxOf D t) ts t = (.created, some (tr, dr', cr')) ∧
      D' = D.apply (Writes.ofTransfer tr dr' cr') := by
  unfold Spec.submitTransfer at h
  rw [createTransfers_one D ts t hl] at h
  rw [createTransfer_eq] at h
  rcases hd : decideTransfer (ctxOf D t) ts t with ⟨s, _ | ⟨tr, dr', cr'⟩⟩
  · rw [hd] at h
    have := decideTransfer_none hd
    simp [this] at h
  · rw [hd] at h
    have := (decideTransfer_some hd).1; subst this
    simp only [ite_true, Prod.mk.injEq] at h
    exact ⟨tr, dr', cr', rfl, h.2.symm⟩

/-- A lone transfer that is not created writes only its failed id (if its failure is transient). -/
theorem submit_failed {D : DB} {ts : Nat} {t : NewTransfer} {s : TransferStatus} {D' : DB}
    (hl : t.flags.linked = false) (h : Spec.submitTransfer D ts t = ([s], D')) (hs : s ≠ .created) :
    (createTransfer D.reads ts t).1 = s ∧ D' = D.apply (transferKind.onFailure t s) := by
  unfold Spec.submitTransfer at h
  rw [createTransfers_one D ts t hl] at h
  split at h
  · simp only [Prod.mk.injEq, List.cons.injEq, and_true] at h; exact absurd h.1.symm hs
  · simp only [Prod.mk.injEq, List.cons.injEq, and_true] at h
    obtain ⟨h1, h2⟩ := h
    rw [h1] at h2
    exact ⟨h1, h2.symm⟩

/-- A lone transfer whose decision writes nothing and is not transient leaves the database as it was. -/
theorem submit_unchanged {D : DB} {ts : Nat} {t : NewTransfer} {s : TransferStatus}
    (hl : t.flags.linked = false) (hd : decideTransfer (ctxOf D t) ts t = (s, none)) (ht : s.transient = false) :
    Spec.submitTransfer D ts t = ([s], D) := by
  have hc : createTransfer D.reads ts t = (s, {}) := by rw [createTransfer_eq, hd]
  unfold Spec.submitTransfer
  rw [createTransfers_one D ts t hl, hc]
  simp only [decideTransfer_none hd, ite_false]
  simp [transferKind, ht, apply_empty]

/-! ## A. Conservation -/

theorem conservation_posted : Spec.conservation_posted := fun _ h L => (inv_reachable h).posted L

theorem conservation_pending : Spec.conservation_pending := fun _ h L => (inv_reachable h).pending L

/-! ## B. Two accounts, equal and opposite -/

theorem transfer_two_accounts : Spec.transfer_two_accounts := by
  intro D ts t D' hR hl h
  obtain ⟨tr, dr', cr', hd, rfl⟩ := submit_created hl h
  obtain ⟨dr, cr, h1, h2, h3, h4, h5, h6, s1, s2, -⟩ := created_facts (inv_reachable hR) hd
  obtain ⟨-, hdid⟩ := account?_mem h1
  obtain ⟨-, hcid⟩ := account?_mem h2
  exact ⟨tr, dr, cr, dr', cr', apply_ofTransfer .., h6, h1, h2, by rw [hdid, hcid]; exact h3, h4, h5, s1, s2⟩

theorem transfer_equal_opposite : Spec.transfer_equal_opposite := by
  intro D ts t D' hR hl h
  obtain ⟨tr, dr', cr', hd, rfl⟩ := submit_created hl h
  obtain ⟨dr, cr, h1, h2, -, -, -, -, -, -, rest⟩ := created_facts (inv_reachable hR) hd
  exact ⟨tr, dr, cr, dr', cr', apply_ofTransfer .., h1, h2, rest⟩

/-! ## C. Idempotency -/

theorem transfer_exists : Spec.transfer_exists := by
  intro D ts t e hR hl he
  have hI := inv_reachable hR
  obtain ⟨hem, heid⟩ := transfer?_mem he
  have hid := hI.transferIdOk e hem
  rw [heid] at hid
  have hdec : decideTransfer (ctxOf D t) ts t = (existsTransfer t e (ctxOf D t).pending, none) := by
    unfold decideTransfer
    have hx : (ctxOf D t).existing = some e := he
    simp [firstFailing, hid.1, hid.2, hx]
  have hx := existsTransfer_isExists t e (ctxOf D t).pending
  exact ⟨_, submit_unchanged hl hdec (isExists_not_transient hx), hx⟩

theorem transfer_exists_iff_same : Spec.transfer_exists_iff_same := by
  intro t e p hr
  constructor
  · intro h
    have h1 : t.flags = e.flags := Decidable.byContradiction fun h1 => by
      simp [existsTransfer, firstFailing, hr, h1] at h
    have hr' : e.flags.resolves = false := by rw [← h1]; exact hr
    have h2 : t.pendingId = e.pendingId := Decidable.byContradiction fun h2 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2] at h
    have h3 : t.debitAccountId = e.debitAccountId := Decidable.byContradiction fun h3 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3] at h
    have h4 : t.creditAccountId = e.creditAccountId := Decidable.byContradiction fun h4 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4] at h
    have h5 : t.amount = e.amount := Decidable.byContradiction fun h5 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4, h5] at h
    have h6 : t.userData128 = e.userData128 := Decidable.byContradiction fun h6 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4, h5, h6] at h
    have h7 : t.userData64 = e.userData64 := Decidable.byContradiction fun h7 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4, h5, h6, h7] at h
    have h8 : t.userData32 = e.userData32 := Decidable.byContradiction fun h8 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4, h5, h6, h7, h8] at h
    have h9 : t.ledger = e.ledger := Decidable.byContradiction fun h9 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4, h5, h6, h7, h8, h9] at h
    have h10 : t.code = e.code := Decidable.byContradiction fun h10 => by
      simp [existsTransfer, firstFailing, hr, hr', h1, h2, h3, h4, h5, h6, h7, h8, h9, h10] at h
    exact ⟨h1, h2, h3, h4, h5, h6, h7, h8, h9, h10⟩
  · rintro ⟨h1, h2, h3, h4, h5, h6, h7, h8, h9, h10⟩
    have hr' : e.flags.resolves = false := by rw [← h1]; exact hr
    simp [existsTransfer, firstFailing, hr, hr', hr', h1, h2, h3, h4, h5, h6, h7, h8, h9, h10]

theorem transfer_retry : Spec.transfer_retry := by
  intro D ts t D1 D2 ts' hR hl h hL
  obtain ⟨tr, dr', cr', hd, rfl⟩ := submit_created hl h
  have hI := inv_reachable hR
  have hI1 : Inv (D.apply (Writes.ofTransfer tr dr' cr')) := inv_transfer hI hd
  have hI2 := later_inv hL hI1
  have hpre := (later_prefix hL).1
  rw [apply_ofTransfer] at hpre
  obtain ⟨-, -, -, -, -, -, -, htid, -⟩ := created_facts hI hd
  -- the stored transfer is found in D2
  have hmem : tr ∈ D2.transfers := hpre.subset (by simp)
  have hfound : D2.transfer? t.id = some tr := by rw [← htid]; exact tfind_of_mem hI2.transferIds hmem
  -- so is the pending transfer it names
  have hpend : (ctxOf D2 t).pending = (ctxOf D t).pending := by
    simp only [ctxOf]
    cases hr : t.flags.resolves
    · rfl
    · obtain ⟨-, -, -, -, -, hcase⟩ := decideTransfer_some hd
      rcases hcase with ⟨hr', -⟩ | ⟨-, -, p, -, -, hp, -⟩
      · rw [hr] at hr'; cases hr'
      · simp only [ctxOf, hr, ite_true] at hp
        simp only [ite_true]
        rw [hp]
        obtain ⟨hpm, hpid⟩ := transfer?_mem hp
        rw [← hpid]
        exact tfind_of_mem hI2.transferIds (hpre.subset (by simp [hpm]))
  have hex := exists_of_created hd
  rw [← hpend] at hex
  have hid := (decideTransfer_some hd).2.1
  have hid2 := (decideTransfer_some hd).2.2.1
  have hdec : decideTransfer (ctxOf D2 t) ts' t = (.exists, none) := by
    unfold decideTransfer
    have hx : (ctxOf D2 t).existing = some tr := hfound
    simp [firstFailing, hid, hid2, hx, hex]
  exact submit_unchanged hl hdec rfl

theorem failed_retry : Spec.failed_retry := by
  intro D ts t s D1 D2 ts' t' hR hl h hs hL hid hl'
  have hsc : s ≠ .created := fun e => by rw [e] at hs; cases hs
  obtain ⟨-, rfl⟩ := submit_failed hl h hsc
  have hfail := (later_prefix hL).2
  have hin : t.id ∈ D2.failed := hfail.subset (by simp [DB.apply, transferKind, hs])
  have hc : (ctxOf D2 t').failed = true := by simp [ctxOf, hid, hin]
  obtain ⟨hnone, hnt⟩ := failed_never (ts := ts') (t := t') hc
  rcases hd : decideTransfer (ctxOf D2 t') ts' t' with ⟨s', e⟩
  rw [hd] at hnone hnt
  simp only at hnone hnt
  subst hnone
  exact ⟨s', submit_unchanged hl' hd hnt, decideTransfer_none hd⟩

theorem account_exists : Spec.account_exists := by
  intro D ts a e hR hl he
  have hI := inv_reachable hR
  obtain ⟨hem, heid⟩ := account?_mem he
  have hid := hI.accountIdOk e hem
  rw [heid] at hid
  have hdec : decideAccount (D.account? a.id) ts a = (existsAccount a e, none) := by
    unfold decideAccount; simp [firstFailing, hid.1, hid.2, he]
  have hx := existsAccount_isExists a e
  have hne : existsAccount a e ≠ .created := fun h => by rw [h] at hx; cases hx
  refine ⟨existsAccount a e, ?_, hx⟩
  unfold Spec.submitAccount
  rw [createAccounts_one D ts a hl, createAccount_eq, hdec]
  simp [hne, apply_empty]

theorem account_retry : Spec.account_retry := by
  intro D ts a D1 D2 ts' hR hl h hL
  have hI := inv_reachable hR
  unfold Spec.submitAccount at h
  rw [createAccounts_one D ts a hl, createAccount_eq] at h
  rcases hd : decideAccount (D.account? a.id) ts a with ⟨s, _ | acc⟩
  · rw [hd] at h
    have := decideAccount_none hd
    simp [this] at h
  · rw [hd] at h
    obtain ⟨hs, hid0, hid1, hex, -, hacc⟩ := decideAccount_some hd
    subst hs
    simp only [ite_true, Prod.mk.injEq] at h
    obtain ⟨-, rfl⟩ := h
    have hI1 : Inv (D.apply (Writes.ofAccount acc)) := by rw [apply_ofAccount]; exact inv_account hI hd
    have hmem : acc ∈ (D.apply (Writes.ofAccount acc)).accounts := by rw [apply_ofAccount]; exact mem_upsert_self _ _
    obtain ⟨a', ha', same⟩ := later_keeps' hL hI1 acc hmem
    have hI2 := later_inv hL hI1
    have hfound : D2.account? a.id = some a' := by
      have : a'.id = a.id := by rw [same.1, hacc]; rfl
      rw [← this]; exact find_of_mem hI2.accountIds ha'
    obtain ⟨-, s2, s3, s4, s5, s6, s7, -⟩ := same
    subst hacc
    have hea : existsAccount a a' = .exists := by
      simp [existsAccount, firstFailing, s2, s3, s4, s5, s6, s7, newAccount]
    have hdec : decideAccount (D2.account? a.id) ts' a = (.exists, none) := by
      unfold decideAccount; simp [firstFailing, hid0, hid1, hfound, hea]
    unfold Spec.submitAccount
    rw [createAccounts_one D2 ts' a hl, createAccount_eq, hdec]
    simp [apply_empty]

/-! ## D. Balance limits -/

theorem debits_must_not_exceed_credits : Spec.debits_must_not_exceed_credits :=
  fun _ h a ha f => (inv_reachable h).dmnec a ha f

theorem credits_must_not_exceed_debits : Spec.credits_must_not_exceed_debits :=
  fun _ h a ha f => (inv_reachable h).cmned a ha f

/-! ## E. Two-phase transfers -/

theorem resolved_at_most_once : Spec.resolved_at_most_once := fun _ h => (inv_reachable h).once

theorem resolution_matches_pending : Spec.resolution_matches_pending := by
  intro D hR t ht hr
  obtain ⟨p, hp, rest⟩ := (inv_reachable hR).resolves t ht hr
  obtain ⟨hpm, hpid⟩ := transfer?_mem hp
  exact ⟨p, hpm, hpid, rest⟩

theorem pending_balances : Spec.pending_balances :=
  fun _ h a ha => ⟨(inv_reachable h).pendingD a ha, (inv_reachable h).pendingC a ha⟩

/-! ## F. Linked chains -/

theorem chains_cut : Spec.chains_cut := fun batch =>
  ⟨chains_flatten _ batch, chains_ne_nil _ batch, chains_linked _ batch, chains_closed _ batch⟩

theorem chains_atomic : Spec.chains_atomic := fun D ts batch => createTransfers_results D ts batch

theorem journal_is_created : Spec.journal_is_created := fun D ts batch => createTransfers_journal D ts batch

/-! ## G. The audit -/

theorem replay_balances : Spec.replay_balances := fun _ h a ha => (inv_reachable h).replay a ha

/-! ## H. Ledgers, ids and bounds -/

theorem same_ledger : Spec.same_ledger := fun _ h t ht => (inv_reachable h).accountsOf t ht

theorem cross_ledger_rejected : Spec.cross_ledger_rejected := by
  intro D ts t dr cr hr hd hc hne
  rw [createTransfer_eq]
  rcases h : decideTransfer (ctxOf D t) ts t with ⟨s, _ | ⟨tr, x, y⟩⟩
  · exact ⟨decideTransfer_none h, rfl⟩
  · exfalso
    obtain ⟨-, -, -, -, -, hcase⟩ := decideTransfer_some h
    rcases hcase with ⟨-, -, dr2, cr2, hd2, hc2, hbc, -⟩ | ⟨hr2, -⟩
    · simp only [ctxOf, hr, Bool.false_eq_true, ite_false] at hd2 hc2
      rw [hd] at hd2; rw [hc] at hc2
      cases hd2; cases hc2
      have hb := hbc; simp [balanceChecks] at hb
      exact hne hb.1
    · rw [hr] at hr2; cases hr2

theorem within_bounds : Spec.within_bounds := fun _ h => ⟨(inv_reachable h).bounds, (inv_reachable h).amounts⟩

theorem ids_unique : Spec.ids_unique := fun _ h =>
  ⟨(inv_reachable h).accountIds, (inv_reachable h).transferIds, (inv_reachable h).accountIdOk,
    (inv_reachable h).transferIdOk⟩

theorem history_kept : Spec.history_kept := fun _ _ hR hL =>
  ⟨(later_prefix hL).1, later_keeps' hL (inv_reachable hR)⟩

/-! ## I. Requests -/

theorem reads_change_nothing : Spec.reads_change_nothing := by
  intro now r D h
  unfold after Api.handle
  split
  · simp_all
  · simp_all
  · exact apply_empty D

theorem writes_are_batches : Spec.writes_are_batches := by
  intro now r D
  unfold after
  rcases handle_writes D now r with h | ⟨ts, b, h⟩ | ⟨ts, b, h⟩
  · rw [h, apply_empty]; exact .inl rfl
  · rw [h]; exact .inr (.inl ⟨ts, b, rfl⟩)
  · rw [h]; exact .inr (.inr ⟨ts, b, rfl⟩)

/-! ## J. The browser page -/

theorem page_filter : Spec.page_filter := by
  intro m
  constructor
  · intro a ha
    unfold Page.Model.shownAccounts
    cases h : m.ledger <;> simp [h, ha] <;> (try exact ⟨Eq.symm, Eq.symm⟩)
  · intro t ht
    unfold Page.Model.shownTransfers
    cases h : m.ledger <;> simp [h, ht] <;> (try exact ⟨Eq.symm, Eq.symm⟩)

theorem page_rows : Spec.page_rows :=
  fun _ => ⟨rfl, rfl, fun _ => ⟨_, rfl⟩, fun _ => ⟨_, rfl⟩⟩

theorem page_errors_keep_data : Spec.page_errors_keep_data := by
  intro m e
  exact ⟨rfl, rfl, rfl, rfl, rfl, rfl⟩

theorem page_refresh : Spec.page_refresh := fun _ => rfl

end Ledger.Proofs
