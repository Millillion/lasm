/-
A created transfer keeps the invariant: first in general (`inv_two`, for
any transfer that replaces two accounts by their replayed versions), then
for each kind (`inv_new`, `inv_resolve`), and so for every created transfer
(`inv_transfer`).
-/
import Proofs.Invariant

namespace Ledger.Proofs
open Ledger Rules

theorem withBalances_id (a : Account) (b : Balances) : (a.withBalances b).id = a.id := rfl
theorem withBalances_ledger (a : Account) (b : Balances) : (a.withBalances b).ledger = a.ledger := rfl
theorem withBalances_flags (a : Account) (b : Balances) : (a.withBalances b).flags = a.flags := rfl
theorem withBalances_balances (a : Account) (b : Balances) : (a.withBalances b).balances = b := rfl

/-! ## Replacing two accounts -/

section Two
variable {l : List Account} {dr cr dr' cr' : Account}

theorem find_two (hi : dr'.id = dr.id) (hj : cr'.id = cr.id) (i : Nat) :
    (upsert (upsert l dr') cr').find? (·.id == i) =
      if cr.id == i then some cr' else if dr.id == i then some dr' else l.find? (·.id == i) := by
  rw [find_upsert, find_upsert, hi, hj]

theorem nodup_two (hn : (l.map (·.id)).Nodup) : ((upsert (upsert l dr') cr').map (·.id)).Nodup :=
  nodup_upsert (nodup_upsert hn _) _

theorem mem_two (hn : (l.map (·.id)).Nodup) (hi : dr'.id = dr.id) (hj : cr'.id = cr.id) {b : Account}
    (hb : b ∈ upsert (upsert l dr') cr') : b = cr' ∨ b = dr' ∨ (b ∈ l ∧ b.id ≠ dr.id ∧ b.id ≠ cr.id) := by
  rcases mem_upsert (nodup_upsert hn _) hb with e | ⟨m, n⟩
  · exact .inl e
  · rcases mem_upsert hn m with e | ⟨m', n'⟩
    · exact .inr (.inl e)
    · exact .inr (.inr ⟨m', hi ▸ n', hj ▸ n⟩)

theorem total_two (hn : (l.map (·.id)).Nodup) (hd : l.find? (·.id == dr.id) = some dr)
    (hc : l.find? (·.id == cr.id) = some cr) (hne : dr.id ≠ cr.id) (hi : dr'.id = dr.id) (hj : cr'.id = cr.id)
    (L : Nat) (f : Account → Nat) :
    total (upsert (upsert l dr') cr') L f + part L f dr + part L f cr = total l L f + part L f dr' + part L f cr' := by
  have h1 := total_upsert hn (a := dr') (old := dr) (by rw [hi]; exact hd) L f
  have hc1 : (upsert l dr').find? (·.id == cr'.id) = some cr := by
    rw [find_upsert, hi, hj]
    have : (dr.id == cr.id) = false := beq_eq_false_iff_ne.mpr hne
    simp [this, hc]
  have h2 := total_upsert (nodup_upsert hn dr') hc1 L f
  omega

theorem total_two_delta (hn : (l.map (·.id)).Nodup) (hd : l.find? (·.id == dr.id) = some dr)
    (hc : l.find? (·.id == cr.id) = some cr) (hne : dr.id ≠ cr.id) (hi : dr'.id = dr.id) (hj : cr'.id = cr.id)
    (hl1 : dr'.ledger = dr.ledger) (hl2 : cr'.ledger = cr.ledger) (hll : cr.ledger = dr.ledger)
    (L : Nat) (f : Account → Nat) :
    total (upsert (upsert l dr') cr') L f + (if dr.ledger = L then f dr + f cr else 0) =
      total l L f + (if dr.ledger = L then f dr' + f cr' else 0) := by
  have := total_two hn hd hc hne hi hj L f
  unfold part at this
  rw [hl1, hl2, hll] at this
  by_cases h : dr.ledger = L
  · simp [h] at this ⊢; omega
  · simp [h] at this ⊢; omega

end Two

/-! ## The general step -/

/-- A transfer `tr` that replaces its two accounts `dr`, `cr` by `dr'`, `cr'`
(their balances replayed through `tr`) keeps the invariant, given what the
rules checked. -/
theorem inv_two {D : DB} (hI : Inv D) {tr : Transfer} {dr cr dr' cr' : Account}
    (hd : D.account? tr.debitAccountId = some dr) (hc : D.account? tr.creditAccountId = some cr)
    (hne : tr.debitAccountId ≠ tr.creditAccountId) (hld : dr.ledger = tr.ledger) (hlc : cr.ledger = tr.ledger)
    (hfresh : D.transfer? tr.id = none) (hid : tr.id ≠ 0 ∧ tr.id ≠ u128Max)
    (hfl : ¬(tr.flags.pending = true ∧ tr.flags.resolves = true) ∧
      ¬(tr.flags.postPendingTransfer = true ∧ tr.flags.voidPendingTransfer = true))
    (hres : tr.flags.resolves = true → (∃ p, D.transfer? tr.pendingId = some p ∧ p.flags.pending = true ∧
      p.debitAccountId = tr.debitAccountId ∧ p.creditAccountId = tr.creditAccountId ∧ p.ledger = tr.ledger ∧
      tr.amount ≤ p.amount ∧ (tr.flags.voidPendingTransfer = true → tr.amount = p.amount)) ∧
      D.resolution? tr.pendingId = none)
    (hamt : tr.amount ≤ limit)
    (hdr' : dr' = dr.withBalances (Audit.replayStep D.transfers tr dr.id dr.balances))
    (hcr' : cr' = cr.withBalances (Audit.replayStep D.transfers tr cr.id cr.balances))
    (hpoD : ∀ i, i ≠ dr.id → i ≠ cr.id →
      pendingOn (·.debitAccountId) (D.transfers ++ [tr]) i = pendingOn (·.debitAccountId) D.transfers i)
    (hpoC : ∀ i, i ≠ dr.id → i ≠ cr.id →
      pendingOn (·.creditAccountId) (D.transfers ++ [tr]) i = pendingOn (·.creditAccountId) D.transfers i)
    (hnum : ∀ x, x = dr' ∨ x = cr' →
      x.debitsPending = pendingOn (·.debitAccountId) (D.transfers ++ [tr]) x.id ∧
      x.creditsPending = pendingOn (·.creditAccountId) (D.transfers ++ [tr]) x.id ∧
      x.debitsPending + x.debitsPosted ≤ limit ∧ x.creditsPending + x.creditsPosted ≤ limit ∧
      (x.flags.debitsMustNotExceedCredits = true → x.debitsPending + x.debitsPosted ≤ x.creditsPosted) ∧
      (x.flags.creditsMustNotExceedDebits = true → x.creditsPending + x.creditsPosted ≤ x.debitsPosted))
    (htot : ∀ L, total (upsert (upsert D.accounts dr') cr') L (·.debitsPosted) =
        total (upsert (upsert D.accounts dr') cr') L (·.creditsPosted) ∧
      total (upsert (upsert D.accounts dr') cr') L (·.debitsPending) =
        total (upsert (upsert D.accounts dr') cr') L (·.creditsPending)) :
    Inv { D with accounts := upsert (upsert D.accounts dr') cr', transfers := D.transfers ++ [tr] } := by
  obtain ⟨hdm, hdid⟩ := account?_mem hd
  obtain ⟨hcm, hcid⟩ := account?_mem hc
  have hi : dr'.id = dr.id := by rw [hdr']; rfl
  have hj : cr'.id = cr.id := by rw [hcr']; rfl
  have hdl' : dr'.ledger = dr.ledger := by rw [hdr']; rfl
  have hcl' : cr'.ledger = cr.ledger := by rw [hcr']; rfl
  have hn := hI.accountIds
  have hdcne : dr.id ≠ cr.id := by rw [hdid, hcid]; exact hne
  -- every account found before is found after, in the same ledger
  have keep (i : Nat) (x : Account) (hx : D.account? i = some x) :
      ∃ y, (upsert (upsert D.accounts dr') cr').find? (·.id == i) = some y ∧ y.ledger = x.ledger := by
    rw [find_two hi hj]
    obtain ⟨-, hxi⟩ := account?_mem hx
    by_cases e1 : cr.id = i
    · refine ⟨cr', by simp [e1], ?_⟩
      have : x = cr := by
        have := find_of_mem hn hcm; unfold DB.account? at hx; rw [← e1] at hx; rw [hx] at this; cases this; rfl
      rw [this, hcl']
    · by_cases e2 : dr.id = i
      · refine ⟨dr', by simp [e1, e2], ?_⟩
        have : x = dr := by
          have := find_of_mem hn hdm; unfold DB.account? at hx; rw [← e2] at hx; rw [hx] at this; cases this; rfl
        rw [this, hdl']
      · exact ⟨x, by simp [e1, e2]; exact hx, rfl⟩
  have trD : tr.debitAccountId = dr.id := hdid.symm
  have trC : tr.creditAccountId = cr.id := hcid.symm
  constructor
  · exact nodup_two hn
  · rw [List.map_append]
    exact List.nodup_append.mpr ⟨hI.transferIds, by simp, by
      intro x hx y hy; simp at hy; subst hy; exact fun e => not_mem_ids_of_transfer?_none hfresh (e ▸ hx)⟩
  · intro b hb
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, -⟩
    · rw [hj]; exact hI.accountIdOk cr hcm
    · rw [hi]; exact hI.accountIdOk dr hdm
    · exact hI.accountIdOk b m
  · intro t ht
    rcases List.mem_append.mp ht with m | m
    · exact hI.transferIdOk t m
    · simp at m; subst m; exact hid
  · intro t ht
    rcases List.mem_append.mp ht with m | m
    · obtain ⟨n, ⟨x, hx, lx⟩, ⟨y, hy, ly⟩⟩ := hI.accountsOf t m
      obtain ⟨x', hx', lx'⟩ := keep _ x hx
      obtain ⟨y', hy', ly'⟩ := keep _ y hy
      exact ⟨n, ⟨x', hx', lx'.trans lx⟩, ⟨y', hy', ly'.trans ly⟩⟩
    · simp at m; subst m
      obtain ⟨x', hx', lx'⟩ := keep _ dr hd
      obtain ⟨y', hy', ly'⟩ := keep _ cr hc
      exact ⟨hne, ⟨x', hx', lx'.trans hld⟩, ⟨y', hy', ly'.trans hlc⟩⟩
  · intro t ht
    rcases List.mem_append.mp ht with m | m
    · exact hI.flagsOk t m
    · simp at m; subst m; exact hfl
  · intro t ht hr
    rcases List.mem_append.mp ht with m | m
    · obtain ⟨p, hp, rest⟩ := hI.resolves t m hr
      exact ⟨p, transfer?_append_some hp, rest⟩
    · simp at m; subst m
      obtain ⟨⟨p, hp, rest⟩, -⟩ := hres hr
      exact ⟨p, transfer?_append_some hp, rest⟩
  · rw [List.filter_append, List.map_append]
    cases hr : tr.flags.resolves
    · simp [hr, hI.once]
    · obtain ⟨-, hnone⟩ := hres hr
      have := resolvedIn_of_resolution hnone
      simp only [List.filter_cons, hr, if_true, List.filter_nil, List.map_cons, List.map_nil]
      refine List.nodup_append.mpr ⟨hI.once, by simp, ?_⟩
      intro x hx y hy
      simp at hy; subst hy
      intro e
      obtain ⟨r, hrm, hrx⟩ := List.mem_map.mp hx
      rw [List.mem_filter] at hrm
      unfold resolvedIn at this
      rw [List.any_eq_false] at this
      exact this r hrm.1 (by simp [hrm.2, hrx, e])
  · intro b hb
    rw [replay_append]
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, n1, n2⟩
    · rw [hcr', withBalances_balances, withBalances_id, ← hI.replay cr hcm]
    · rw [hdr', withBalances_balances, withBalances_id, ← hI.replay dr hdm]
    · rw [replayStep_other _ _ _ _ (by rw [trD]; exact Ne.symm n1) (by rw [trC]; exact Ne.symm n2)]
      exact hI.replay b m
  · intro b hb
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, n1, n2⟩
    · exact (hnum _ (.inr rfl)).1
    · exact (hnum _ (.inl rfl)).1
    · rw [hpoD _ n1 n2]; exact hI.pendingD b m
  · intro b hb
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, n1, n2⟩
    · exact (hnum _ (.inr rfl)).2.1
    · exact (hnum _ (.inl rfl)).2.1
    · rw [hpoC _ n1 n2]; exact hI.pendingC b m
  · intro b hb
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, -, -⟩
    · exact ⟨(hnum _ (.inr rfl)).2.2.1, (hnum _ (.inr rfl)).2.2.2.1⟩
    · exact ⟨(hnum _ (.inl rfl)).2.2.1, (hnum _ (.inl rfl)).2.2.2.1⟩
    · exact hI.bounds b m
  · intro t ht
    rcases List.mem_append.mp ht with m | m
    · exact hI.amounts t m
    · simp at m; subst m; exact hamt
  · intro b hb
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, -, -⟩
    · exact (hnum _ (.inr rfl)).2.2.2.2.1
    · exact (hnum _ (.inl rfl)).2.2.2.2.1
    · exact hI.dmnec b m
  · intro b hb
    rcases mem_two hn hi hj hb with rfl | rfl | ⟨m, -, -⟩
    · exact (hnum _ (.inr rfl)).2.2.2.2.2
    · exact (hnum _ (.inl rfl)).2.2.2.2.2
    · exact hI.cmned b m
  · exact fun L => (htot L).1
  · exact fun L => (htot L).2

/-! ## Single-phase and pending transfers -/

section NewEffect
variable (ts : Nat) (t : NewTransfer) (dr cr : Account)
theorem newEffect_id : (newEffect ts t dr cr).1.id = t.id := by unfold newEffect; split <;> rfl
theorem newEffect_dr : (newEffect ts t dr cr).1.debitAccountId = t.debitAccountId := by unfold newEffect; split <;> rfl
theorem newEffect_cr : (newEffect ts t dr cr).1.creditAccountId = t.creditAccountId := by unfold newEffect; split <;> rfl
theorem newEffect_amount : (newEffect ts t dr cr).1.amount = t.amount := by unfold newEffect; split <;> rfl
theorem newEffect_flags : (newEffect ts t dr cr).1.flags = t.flags := by unfold newEffect; split <;> rfl
theorem newEffect_ledger : (newEffect ts t dr cr).1.ledger = t.ledger := by unfold newEffect; split <;> rfl
theorem newEffect_pendingId : (newEffect ts t dr cr).1.pendingId = 0 := by unfold newEffect; split <;> rfl
theorem newEffect_debit : (newEffect ts t dr cr).2.1 =
    if t.flags.pending then { dr with debitsPending := dr.debitsPending + t.amount }
    else { dr with debitsPosted := dr.debitsPosted + t.amount } := by unfold newEffect; split <;> rfl
theorem newEffect_credit : (newEffect ts t dr cr).2.2 =
    if t.flags.pending then { cr with creditsPending := cr.creditsPending + t.amount }
    else { cr with creditsPosted := cr.creditsPosted + t.amount } := by unfold newEffect; split <;> rfl
end NewEffect

theorem inv_new {D : DB} (hI : Inv D) {ts : Nat} {t : NewTransfer} {dr cr : Account}
    (hr : t.flags.resolves = false) (hid : t.id ≠ 0 ∧ t.id ≠ u128Max) (hfresh : D.transfer? t.id = none)
    (hnc : ∀ q ∈ newChecks t, q.1 = false) (hd : D.account? t.debitAccountId = some dr)
    (hc : D.account? t.creditAccountId = some cr) (hbc : ∀ q ∈ balanceChecks t dr cr, q.1 = false) :
    Inv (D.apply (Writes.ofTransfer (newEffect ts t dr cr).1 (newEffect ts t dr cr).2.1 (newEffect ts t dr cr).2.2)) := by
  rw [apply_ofTransfer]
  have hn := hnc; simp [newChecks] at hn
  obtain ⟨-, -, -, -, n5, -, -, -⟩ := hn
  have hb := hbc; simp [balanceChecks] at hb
  obtain ⟨b1, b2, b3, b4, b5, b6, b7, b8, b9, b10⟩ := hb
  obtain ⟨hdm, hdid⟩ := account?_mem hd
  obtain ⟨hcm, hcid⟩ := account?_mem hc
  have hne : t.debitAccountId ≠ t.creditAccountId := fun e => n5 e.symm
  have hdc : dr.id ≠ cr.id := by rw [hdid, hcid]; exact hne
  have hcd : cr.id ≠ dr.id := Ne.symm hdc
  have hpost : t.flags.postPendingTransfer = false := by
    unfold TransferFlags.resolves at hr; cases h : t.flags.postPendingTransfer <;> simp_all
  have hvoid : t.flags.voidPendingTransfer = false := by
    unfold TransferFlags.resolves at hr; cases h : t.flags.voidPendingTransfer <;> simp_all
  have rfresh := resolvedIn_fresh hI hfresh
  have pdD := hI.pendingD dr hdm
  have pcD := hI.pendingC dr hdm
  have pdC := hI.pendingD cr hcm
  have pcC := hI.pendingC cr hcm
  have bD := hI.bounds dr hdm
  have bC := hI.bounds cr hcm
  have dmD := hI.dmnec dr hdm
  have cmD := hI.cmned dr hdm
  have dmC := hI.dmnec cr hcm
  have cmC := hI.cmned cr hcm
  have hx1 : (t.debitAccountId == cr.id) = false := beq_eq_false_iff_ne.mpr (by rw [← hdid]; exact hdc)
  have hx2 : (t.creditAccountId == dr.id) = false := beq_eq_false_iff_ne.mpr (by rw [← hcid]; exact hcd)
  have hy1 : (t.debitAccountId == dr.id) = true := by simp [hdid]
  have hy2 : (t.creditAccountId == cr.id) = true := by simp [hcid]
  -- the new transfer and the two new versions
  generalize htr : (newEffect ts t dr cr).1 = tr
  generalize hdr' : (newEffect ts t dr cr).2.1 = dr'
  generalize hcr' : (newEffect ts t dr cr).2.2 = cr'
  have tid : tr.id = t.id := htr ▸ newEffect_id ..
  have tdr : tr.debitAccountId = t.debitAccountId := htr ▸ newEffect_dr ..
  have tcr : tr.creditAccountId = t.creditAccountId := htr ▸ newEffect_cr ..
  have tam : tr.amount = t.amount := htr ▸ newEffect_amount ..
  have tfl : tr.flags = t.flags := htr ▸ newEffect_flags ..
  have tle : tr.ledger = t.ledger := htr ▸ newEffect_ledger ..
  have edr := newEffect_debit ts t dr cr
  have ecr := newEffect_credit ts t dr cr
  rw [hdr'] at edr
  rw [hcr'] at ecr
  have po (side : Transfer → Nat) (i : Nat) := pendingOn_append_new side D.transfers tr i (by rw [tfl]; exact hr)
    (by rw [tid]; exact rfresh)
  have pdd := po (·.debitAccountId) dr.id
  have pdc := po (·.debitAccountId) cr.id
  have pcd := po (·.creditAccountId) dr.id
  have pcc := po (·.creditAccountId) cr.id
  simp only [tfl, tdr, tcr, tam, hx1, hx2, hy1, hy2, Bool.and_true, Bool.and_false, ite_false,
    Bool.false_eq_true, Nat.add_zero] at pdd pdc pcd pcc
  apply inv_two hI (dr := dr) (cr := cr) (by rw [tdr]; exact hd) (by rw [tcr]; exact hc) (by rw [tdr, tcr]; exact hne)
    (by rw [tle]; exact b2.symm) (by rw [tle]; exact b1.symm.trans b2.symm) (by rw [tid]; exact hfresh)
    (by rw [tid]; exact hid) (by rw [tfl]; simp [hr, hpost, hvoid]) (by rw [tfl]; simp [hr]) (by rw [tam]; omega)
  · rw [edr]
    cases hp : t.flags.pending <;>
      simp [Account.withBalances, Audit.replayStep, Account.balances, tfl, tdr, tcr, tam, hr, hp, hx2, hy1]
  · rw [ecr]
    cases hp : t.flags.pending <;>
      simp [Account.withBalances, Audit.replayStep, Account.balances, tfl, tdr, tcr, tam, hr, hp, hx1, hy2]
  · intro i h1 h2
    rw [po]
    have : (tr.debitAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [tdr, ← hdid]; exact Ne.symm h1)
    simp [this]
  · intro i h1 h2
    rw [po]
    have : (tr.creditAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [tcr, ← hcid]; exact Ne.symm h2)
    simp [this]
  · intro x hx
    rcases hx with rfl | rfl
    · rw [edr]
      cases hp : t.flags.pending
      all_goals
        simp only [hp, ite_true, ite_false, Bool.false_eq_true] at pdd pcd ⊢
        refine ⟨by first | omega | (simp; omega), by first | omega | (simp; omega), by first | omega | (simp; omega),
          by first | omega | (simp; omega), fun h => ?_, fun h => ?_⟩
        · have := b9 h; first | omega | (simp; omega)
        · have := cmD h; first | omega | (simp; omega)
    · rw [ecr]
      cases hp : t.flags.pending
      all_goals
        simp only [hp, ite_true, ite_false, Bool.false_eq_true] at pdc pcc ⊢
        refine ⟨by first | omega | (simp; omega), by first | omega | (simp; omega), by first | omega | (simp; omega),
          by first | omega | (simp; omega), fun h => ?_, fun h => ?_⟩
        · have := dmC h; first | omega | (simp; omega)
        · have := b10 h; first | omega | (simp; omega)
  · intro L
    have := hI.posted L
    have := hI.pending L
    have hl' : cr.ledger = dr.ledger := b1.symm
    cases hp : t.flags.pending
    all_goals
      simp only [hp, ite_true, ite_false, Bool.false_eq_true] at edr ecr
      have h1 := total_two_delta (dr' := dr') (cr' := cr') hI.accountIds (find_of_mem hI.accountIds hdm)
        (find_of_mem hI.accountIds hcm) hdc (by rw [edr]) (by rw [ecr]) (by rw [edr]) (by rw [ecr]) hl' L
      have e1 := h1 (·.debitsPosted)
      have e2 := h1 (·.creditsPosted)
      have e3 := h1 (·.debitsPending)
      have e4 := h1 (·.creditsPending)
      clear h1
      subst edr ecr
      dsimp only at e1 e2 e3 e4
      by_cases hl : dr.ledger = L
      · simp only [if_pos hl] at e1 e2 e3 e4; constructor <;> omega
      · simp only [if_neg hl, Nat.add_zero] at e1 e2 e3 e4; constructor <;> omega

/-! ## Posts and voids -/

theorem inv_resolve {D : DB} (hI : Inv D) {ts : Nat} {t : NewTransfer} {p : Transfer} {dr cr : Account}
    (hr : t.flags.resolves = true) (hid : t.id ≠ 0 ∧ t.id ≠ u128Max) (hfresh : D.transfer? t.id = none)
    (hrc : ∀ q ∈ resolveChecks t, q.1 = false) (hp : D.transfer? t.pendingId = some p)
    (hpp : p.flags.pending = true) (hres : D.resolution? t.pendingId = none)
    (hd : D.account? p.debitAccountId = some dr) (hc : D.account? p.creditAccountId = some cr)
    (hpc : ∀ q ∈ pendingChecks t p, q.1 = false) :
    Inv (D.apply (Writes.ofTransfer (resolveEffect ts t p dr cr).1 (resolveEffect ts t p dr cr).2.1
      (resolveEffect ts t p dr cr).2.2)) := by
  rw [apply_ofTransfer]
  have hn := hrc; simp [resolveChecks] at hn
  obtain ⟨r1, r2, -, -, -⟩ := hn
  have hq := hpc; simp [pendingChecks] at hq
  obtain ⟨-, -, -, -, q5, q6⟩ := hq
  obtain ⟨hpm, hpid⟩ := transfer?_mem hp
  obtain ⟨hdm, hdid⟩ := account?_mem hd
  obtain ⟨hcm, hcid⟩ := account?_mem hc
  obtain ⟨hne, ⟨x, hx, hxl⟩, ⟨y, hy, hyl⟩⟩ := hI.accountsOf p hpm
  rw [hd] at hx; cases hx
  rw [hc] at hy; cases hy
  have hpa := hI.amounts p hpm
  have hdc : dr.id ≠ cr.id := by rw [hdid, hcid]; exact hne
  have hcd : cr.id ≠ dr.id := Ne.symm hdc
  have rfalse := resolvedIn_of_resolution hres
  rw [← hpid] at rfalse
  have hfind : D.transfers.find? (·.id == t.pendingId) = some p := hp
  have pdD := hI.pendingD dr hdm
  have pcD := hI.pendingC dr hdm
  have pdC := hI.pendingD cr hcm
  have pcC := hI.pendingC cr hcm
  have bD := hI.bounds dr hdm
  have bC := hI.bounds cr hcm
  have dmD := hI.dmnec dr hdm
  have cmD := hI.cmned dr hdm
  have dmC := hI.dmnec cr hcm
  have cmC := hI.cmned cr hcm
  have hx1 : (p.debitAccountId == cr.id) = false := beq_eq_false_iff_ne.mpr (by rw [← hdid]; exact hdc)
  have hx2 : (p.creditAccountId == dr.id) = false := beq_eq_false_iff_ne.mpr (by rw [← hcid]; exact hcd)
  have hy1 : (p.debitAccountId == dr.id) = true := by simp [hdid]
  have hy2 : (p.creditAccountId == cr.id) = true := by simp [hcid]
  have hnp : t.flags.pending = false := by simpa using r2
  have hamt : resolvedAmount t p ≤ p.amount := by omega
  have hvd : t.flags.voidPendingTransfer = true → resolvedAmount t p = p.amount := fun hv => by
    have : ¬ resolvedAmount t p < p.amount := fun h => by simp [hv] at q6; omega
    omega
  generalize hA : resolvedAmount t p = A at hamt hvd
  generalize hP : (if t.flags.postPendingTransfer then A else 0) = posted
  have hposted : posted ≤ A := by rw [← hP]; split <;> omega
  -- the new transfer and the two new versions
  generalize htr : (resolveEffect ts t p dr cr).1 = tr
  generalize hdr' : (resolveEffect ts t p dr cr).2.1 = dr'
  generalize hcr' : (resolveEffect ts t p dr cr).2.2 = cr'
  have tid : tr.id = t.id := by rw [← htr]; rfl
  have tdr : tr.debitAccountId = p.debitAccountId := by rw [← htr]; rfl
  have tcr : tr.creditAccountId = p.creditAccountId := by rw [← htr]; rfl
  have tam : tr.amount = A := by rw [← htr, ← hA]; rfl
  have tfl : tr.flags = t.flags := by rw [← htr]; rfl
  have tle : tr.ledger = p.ledger := by rw [← htr]; rfl
  have tpi : tr.pendingId = t.pendingId := by rw [← htr]; rfl
  have edr : dr' = { dr with debitsPending := dr.debitsPending - p.amount, debitsPosted := dr.debitsPosted + posted } := by
    rw [← hdr', ← hP, ← hA]; rfl
  have ecr : cr' = { cr with creditsPending := cr.creditsPending - p.amount, creditsPosted := cr.creditsPosted + posted } := by
    rw [← hcr', ← hP, ← hA]; rfl
  have po (side : Transfer → Nat) (i : Nat) :=
    pendingOn_append_resolve side tr p i hI.transferIds hpm (by rw [tpi, hpid]) (by rw [tfl]; exact hr)
      (by rw [tfl]; exact hnp)
  have pdd := po (·.debitAccountId) dr.id
  have pdc := po (·.debitAccountId) cr.id
  have pcd := po (·.creditAccountId) dr.id
  have pcc := po (·.creditAccountId) cr.id
  simp only [hpp, hx1, hx2, hy1, hy2, rfalse, Bool.true_and, Bool.and_true, Bool.not_false,
    Bool.false_and, Bool.and_false, ite_true, ite_false, Bool.false_eq_true, Nat.add_zero] at pdd pdc pcd pcc
  apply inv_two hI (dr := dr) (cr := cr) (by rw [tdr]; exact hd) (by rw [tcr]; exact hc) (by rw [tdr, tcr]; exact hne)
    (by rw [tle]; exact hxl) (by rw [tle]; exact hyl) (by rw [tid]; exact hfresh) (by rw [tid]; exact hid)
    (by rw [tfl]; simp [hnp]; simpa using r1)
    (fun _ => ⟨⟨p, by rw [tpi]; exact hp, hpp, tdr.symm, tcr.symm, tle.symm, by rw [tam]; exact hamt,
      fun hv => by rw [tam]; exact hvd (by rw [tfl] at hv; exact hv)⟩, by rw [tpi]; exact hres⟩)
    (by rw [tam]; omega)
  · rw [edr]
    have hpost : tr.flags.postPendingTransfer = t.flags.postPendingTransfer := by rw [tfl]
    simp [Account.withBalances, Audit.replayStep, Account.balances, tfl, tdr, tcr, tpi, tam, hr, hx2, hy1, hfind, ← hP]
  · rw [ecr]
    simp [Account.withBalances, Audit.replayStep, Account.balances, tfl, tdr, tcr, tpi, tam, hr, hx1, hy2, hfind, ← hP]
  · intro i h1 h2
    have := po (·.debitAccountId) i
    have hh : (p.debitAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [← hdid]; exact Ne.symm h1)
    simp [hh] at this; exact this
  · intro i h1 h2
    have := po (·.creditAccountId) i
    have hh : (p.creditAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [← hcid]; exact Ne.symm h2)
    simp [hh] at this; exact this
  · intro z hz
    rcases hz with rfl | rfl
    · rw [edr]
      refine ⟨by first | omega | (simp; omega), by first | omega | (simp; omega), by first | omega | (simp; omega),
          by first | omega | (simp; omega), fun h => ?_, fun h => ?_⟩
      · have := dmD h; first | omega | (simp; omega)
      · have := cmD h; first | omega | (simp; omega)
    · rw [ecr]
      refine ⟨by first | omega | (simp; omega), by first | omega | (simp; omega), by first | omega | (simp; omega),
          by first | omega | (simp; omega), fun h => ?_, fun h => ?_⟩
      · have := dmC h; first | omega | (simp; omega)
      · have := cmC h; first | omega | (simp; omega)
  · intro L
    have hl' : cr.ledger = dr.ledger := hyl.trans hxl.symm
    have h1 := total_two_delta (dr' := dr') (cr' := cr') hI.accountIds (find_of_mem hI.accountIds hdm)
      (find_of_mem hI.accountIds hcm) hdc (by rw [edr]) (by rw [ecr]) (by rw [edr]) (by rw [ecr]) hl' L
    have e1 := h1 (·.debitsPosted)
    have e2 := h1 (·.creditsPosted)
    have e3 := h1 (·.debitsPending)
    have e4 := h1 (·.creditsPending)
    clear h1
    have := hI.posted L
    have := hI.pending L
    subst edr ecr
    dsimp only at e1 e2 e3 e4
    by_cases hl : dr.ledger = L
    · simp only [if_pos hl] at e1 e2 e3 e4; constructor <;> omega
    · simp only [if_neg hl, Nat.add_zero] at e1 e2 e3 e4; constructor <;> omega

/-- Every created transfer keeps the invariant. -/
theorem inv_transfer {D : DB} (hI : Inv D) {ts : Nat} {t : NewTransfer} {e : Effect}
    (h : decideTransfer (ctxOf D t) ts t = (.created, some e)) :
    Inv (D.apply (Writes.ofTransfer e.1 e.2.1 e.2.2)) := by
  obtain ⟨-, h0, h1, hex, -, hcase⟩ := decideTransfer_some h
  have hfresh : D.transfer? t.id = none := hex
  rcases hcase with ⟨hr, hnc, dr, cr, hd, hc, hbc, rfl⟩ | ⟨hr, hrc, p, dr, cr, hp, hpp, hres, hd, hc, hpc, rfl⟩
  · simp only [ctxOf, hr, Bool.false_eq_true, ite_false] at hd hc
    exact inv_new hI hr ⟨h0, h1⟩ hfresh hnc hd hc hbc
  · simp only [ctxOf, hr, ite_true] at hp hres hd hc
    rw [hp] at hd hc
    exact inv_resolve hI hr ⟨h0, h1⟩ hfresh hrc hp hpp hres hd hc hpc

/-- Every created account keeps the invariant. -/
theorem inv_stepAccount {D : DB} (hI : Inv D) {ts : Nat} {a : NewAccount} : Inv (stepAccount D ts a).2 := by
  unfold stepAccount
  rcases h : decideAccount (D.account? a.id) ts a with ⟨s, _ | acc⟩
  · exact hI
  · have := (decideAccount_some h).1; subst this
    show Inv (D.apply (Writes.ofAccount acc))
    rw [apply_ofAccount]; exact inv_account hI h

/-- Every transfer keeps the invariant. -/
theorem inv_stepTransfer {D : DB} (hI : Inv D) {ts : Nat} {t : NewTransfer} : Inv (stepTransfer D ts t).2 := by
  unfold stepTransfer
  rcases h : decideTransfer (ctxOf D t) ts t with ⟨s, _ | ⟨tr, dr, cr⟩⟩
  · exact hI
  · have := (decideTransfer_some h).1; subst this
    show Inv (D.apply (Writes.ofTransfer tr dr cr))
    exact inv_transfer hI h

end Ledger.Proofs
