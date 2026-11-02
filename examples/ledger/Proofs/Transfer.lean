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
      intro e
      obtain ⟨r, hrm, hrx⟩ := List.mem_map.mp hx
      rw [List.mem_filter] at hrm
      unfold resolvedIn at this
      rw [List.any_eq_false] at this
      exact this r hrm.1 (by simp at hrm; simp [hrm.2, hrx, e])
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
  have hdr1 : (dr.id == t.debitAccountId) = true := by simp [hdid]
  have hcr1 : (cr.id == t.creditAccountId) = true := by simp [hcid]
  have hx1 : (t.debitAccountId == cr.id) = false := beq_eq_false_iff_ne.mpr (by rw [← hdid]; exact hdc)
  have hx2 : (t.creditAccountId == dr.id) = false := beq_eq_false_iff_ne.mpr (by rw [← hcid]; exact hcd)
  have hy1 : (t.debitAccountId == dr.id) = true := by simp [hdid]
  have hy2 : (t.creditAccountId == cr.id) = true := by simp [hcid]
  have hpoX (side : Transfer → Nat) (hs : side = (·.debitAccountId) ∨ side = (·.creditAccountId)) (i : Nat)
      (h1 : i ≠ dr.id) (h2 : i ≠ cr.id) (tr : Transfer) (htr : tr.flags = t.flags) (hid' : tr.id = t.id)
      (hsd : tr.debitAccountId = t.debitAccountId) (hsc : tr.creditAccountId = t.creditAccountId) :
      pendingOn side (D.transfers ++ [tr]) i = pendingOn side D.transfers i := by
    rw [pendingOn_append_new side _ tr i (by rw [htr]; exact hr) (by rw [hid']; exact rfresh)]
    rcases hs with rfl | rfl
    · have : (tr.debitAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [hsd, ← hdid]; exact Ne.symm h1)
      simp [this]
    · have : (tr.creditAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [hsc, ← hcid]; exact Ne.symm h2)
      simp [this]
  unfold newEffect
  cases hp : t.flags.pending
  all_goals
    simp only [hp, Bool.false_eq_true, ite_false, ite_true]
    apply inv_two hI (dr := dr) (cr := cr) hd hc hne b2.symm (b1.symm.trans b2.symm) hfresh hid
      (by simp [hr]) (by simp [hr]) (by omega)
    · simp [Account.withBalances, Audit.replayStep, Account.balances, hr, hp, hx2, hy1]
    · simp [Account.withBalances, Audit.replayStep, Account.balances, hr, hp, hx1, hy2]
    · exact fun i h1 h2 => hpoX _ (.inl rfl) i h1 h2 _ rfl rfl rfl rfl
    · exact fun i h1 h2 => hpoX _ (.inr rfl) i h1 h2 _ rfl rfl rfl rfl
    · intro x hx
      rcases hx with rfl | rfl
      all_goals
        simp only [pendingOn_append_new _ _ _ _ hr rfresh]
        simp [hp, hdid, hcid, hx1, hx2, hy1, hy2, ← pdD, ← pcD, ← pdC, ← pcC] at *
        omega
    · intro L
      have h1 := total_two hI.accountIds (find_of_mem hI.accountIds hdm) (find_of_mem hI.accountIds hcm) hdc rfl rfl L
      have e1 := h1 (·.debitsPosted)
      have e2 := h1 (·.creditsPosted)
      have e3 := h1 (·.debitsPending)
      have e4 := h1 (·.creditsPending)
      have := hI.posted L
      have := hI.pending L
      by_cases hl : dr.ledger = L
      all_goals
        have hl' : cr.ledger = dr.ledger := (b1).symm
        simp [part, hl, hl'] at e1 e2 e3 e4
        constructor <;> omega

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
  -- the pending amounts after: `p` no longer counts
  have po (side : Transfer → Nat) (i : Nat) (tr : Transfer) (htp : tr.pendingId = p.id)
      (htr : tr.flags = t.flags) :
      pendingOn side (D.transfers ++ [tr]) i + (if p.flags.pending && side p == i && !resolvedIn D.transfers p.id
        then p.amount else 0) = pendingOn side D.transfers i :=
    pendingOn_append_resolve side tr p i hI.transferIds hpm htp (by rw [htr]; exact hr) (by rw [htr]; exact hnp)
  have hamt : resolvedAmount t p ≤ p.amount := by omega
  unfold resolveEffect
  cases hpost : t.flags.postPendingTransfer
  all_goals
    simp only [ite_true, ite_false, Bool.false_eq_true]
    apply inv_two hI (dr := dr) (cr := cr) hd hc hne hxl hyl hfresh hid
      (by simp [hnp]) (fun _ => ⟨⟨p, hp, hpp, rfl, rfl, rfl, hamt, fun hv => by
        have : ¬ resolvedAmount t p < p.amount := fun h => by simp [hv] at q6; omega
        omega⟩, hres⟩) (by omega)
    · simp [Account.withBalances, Audit.replayStep, Account.balances, hr, hpost, hx2, hy1, hfind]
    · simp [Account.withBalances, Audit.replayStep, Account.balances, hr, hpost, hx1, hy2, hfind]
    · intro i h1 h2
      have := po (·.debitAccountId) i _ hpid.symm rfl
      have : (p.debitAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [← hdid]; exact Ne.symm h1)
      simp_all
    · intro i h1 h2
      have := po (·.creditAccountId) i _ hpid.symm rfl
      have : (p.creditAccountId == i) = false := beq_eq_false_iff_ne.mpr (by rw [← hcid]; exact Ne.symm h2)
      simp_all
    · have e1 := po (·.debitAccountId) dr.id _ hpid.symm rfl
      have e2 := po (·.creditAccountId) dr.id _ hpid.symm rfl
      have e3 := po (·.debitAccountId) cr.id _ hpid.symm rfl
      have e4 := po (·.creditAccountId) cr.id _ hpid.symm rfl
      simp only [hpp, hx1, hx2, hy1, hy2, rfalse, Bool.true_and, Bool.and_true, Bool.not_false,
        Bool.false_and, Bool.and_false, ite_true, ite_false, Bool.false_eq_true] at e1 e2 e3 e4
      intro z hz
      rcases hz with rfl | rfl
      all_goals
        simp only [Account.withBalances] at *
        refine ⟨by omega, by omega, by omega, by omega, fun h => ?_, fun h => ?_⟩
        all_goals first | (have := dmD h; omega) | (have := cmD h; omega) | (have := dmC h; omega) | (have := cmC h; omega)
    · intro L
      have h1 := total_two hI.accountIds (find_of_mem hI.accountIds hdm) (find_of_mem hI.accountIds hcm) hdc rfl rfl L
      have e1 := h1 (·.debitsPosted)
      have e2 := h1 (·.creditsPosted)
      have e3 := h1 (·.debitsPending)
      have e4 := h1 (·.creditsPending)
      have := hI.posted L
      have := hI.pending L
      have f1 := po (·.debitAccountId) dr.id _ hpid.symm rfl
      have f2 := po (·.creditAccountId) cr.id _ hpid.symm rfl
      simp only [hpp, hy1, hy2, rfalse, Bool.true_and, Bool.not_false, Bool.and_true, ite_true] at f1 f2
      by_cases hl : dr.ledger = L
      all_goals
        have hl' : cr.ledger = dr.ledger := hyl.trans hxl.symm
        simp [part, hl, hl', Account.withBalances] at e1 e2 e3 e4
        constructor <;> omega

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
