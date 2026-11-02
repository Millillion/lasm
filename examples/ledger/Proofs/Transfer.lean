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
      intro e; subst e
      obtain ⟨r, hrm, rfl⟩ := List.mem_map.mp hx
      rw [List.mem_filter] at hrm
      unfold resolvedIn at this
      rw [List.any_eq_false] at this
      exact this r hrm.1 (by simp [hrm.2])
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

end Ledger.Proofs
