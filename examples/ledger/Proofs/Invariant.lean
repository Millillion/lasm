/-
The invariant: everything that holds of every database the ledger can reach,
in one structure. It holds of the empty database and every created account
and transfer keeps it; most propositions of `Spec.lean` are one of its fields.
-/
import Proofs.Sums

namespace Ledger.Proofs
open Ledger Rules

/-- An account with its balances replaced. -/
def Account.withBalances (a : Account) (b : Balances) : Account :=
  { a with debitsPending := b.debitsPending, debitsPosted := b.debitsPosted,
           creditsPending := b.creditsPending, creditsPosted := b.creditsPosted }

/-- What holds of every reachable database. -/
structure Inv (D : DB) : Prop where
  /-- Account ids are unique. -/
  accountIds : (D.accounts.map (·.id)).Nodup
  /-- Transfer ids are unique. -/
  transferIds : (D.transfers.map (·.id)).Nodup
  accountIdOk : ∀ a ∈ D.accounts, a.id ≠ 0 ∧ a.id ≠ u128Max
  transferIdOk : ∀ t ∈ D.transfers, t.id ≠ 0 ∧ t.id ≠ u128Max
  /-- Every transfer's two accounts exist, differ and are in its ledger. -/
  accountsOf : ∀ t ∈ D.transfers, t.debitAccountId ≠ t.creditAccountId ∧
    (∃ dr, D.account? t.debitAccountId = some dr ∧ dr.ledger = t.ledger) ∧
    (∃ cr, D.account? t.creditAccountId = some cr ∧ cr.ledger = t.ledger)
  flagsOk : ∀ t ∈ D.transfers, ¬(t.flags.pending = true ∧ t.flags.resolves = true) ∧
    ¬(t.flags.postPendingTransfer = true ∧ t.flags.voidPendingTransfer = true)
  /-- Every post or void names a pending transfer with the same accounts and
  ledger, and moves at most (a void: exactly) its amount. -/
  resolves : ∀ t ∈ D.transfers, t.flags.resolves = true → ∃ p, D.transfer? t.pendingId = some p ∧
    p.flags.pending = true ∧ p.debitAccountId = t.debitAccountId ∧ p.creditAccountId = t.creditAccountId ∧
    p.ledger = t.ledger ∧ t.amount ≤ p.amount ∧ (t.flags.voidPendingTransfer = true → t.amount = p.amount)
  /-- At most one post or void per pending transfer. -/
  once : ((D.transfers.filter (·.flags.resolves)).map (·.pendingId)).Nodup
  /-- The stored balances are the journal's replay. -/
  replay : ∀ a ∈ D.accounts, a.balances = Audit.replay D.transfers a.id
  pendingD : ∀ a ∈ D.accounts, a.debitsPending = pendingOn (·.debitAccountId) D.transfers a.id
  pendingC : ∀ a ∈ D.accounts, a.creditsPending = pendingOn (·.creditAccountId) D.transfers a.id
  bounds : ∀ a ∈ D.accounts, a.debitsPending + a.debitsPosted ≤ limit ∧ a.creditsPending + a.creditsPosted ≤ limit
  amounts : ∀ t ∈ D.transfers, t.amount ≤ limit
  dmnec : ∀ a ∈ D.accounts, a.flags.debitsMustNotExceedCredits = true →
    a.debitsPending + a.debitsPosted ≤ a.creditsPosted
  cmned : ∀ a ∈ D.accounts, a.flags.creditsMustNotExceedDebits = true →
    a.creditsPending + a.creditsPosted ≤ a.debitsPosted
  posted : ∀ L, total D.accounts L (·.debitsPosted) = total D.accounts L (·.creditsPosted)
  pending : ∀ L, total D.accounts L (·.debitsPending) = total D.accounts L (·.creditsPending)

theorem inv_empty : Inv {} := by
  constructor <;> simp [total, DB.account?, DB.transfer?]

/-! ## Failed ids change nothing the invariant mentions -/

theorem inv_failed {D : DB} (h : Inv D) (xs : List Nat) : Inv { D with failed := D.failed ++ xs } := by
  obtain ⟨h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14, h15, h16, h17⟩ := h
  exact ⟨h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11, h12, h13, h14, h15, h16, h17⟩

/-! ## Lookups and membership -/

theorem account?_mem {D : DB} {i : Nat} {a : Account} (h : D.account? i = some a) : a ∈ D.accounts ∧ a.id = i :=
  find_some_id h

theorem transfer?_mem {D : DB} {i : Nat} {t : Transfer} (h : D.transfer? i = some t) : t ∈ D.transfers ∧ t.id = i :=
  find_some_tid h

theorem transfer?_append_some {J : List Transfer} {x : Transfer} {i : Nat} {t : Transfer}
    (h : J.find? (·.id == i) = some t) : (J ++ [x]).find? (·.id == i) = some t := by
  rw [List.find?_append, h]; rfl

theorem not_mem_ids_of_transfer?_none {D : DB} {i : Nat} (h : D.transfer? i = none) : i ∉ D.transfers.map (·.id) := by
  intro m
  obtain ⟨t, ht, rfl⟩ := List.mem_map.mp m
  exact tfind_none h t ht rfl

theorem not_mem_ids_of_account?_none {D : DB} {i : Nat} (h : D.account? i = none) : i ∉ D.accounts.map (·.id) := by
  intro m
  obtain ⟨a, ha, rfl⟩ := List.mem_map.mp m
  exact find_none_of_not_mem h a ha rfl

/-- A transfer id that is in no transfer is posted or voided by none either (posts name existing transfers). -/
theorem resolvedIn_fresh {D : DB} (hI : Inv D) {i : Nat} (h : D.transfer? i = none) :
    resolvedIn D.transfers i = false := by
  unfold resolvedIn
  rw [List.any_eq_false]
  intro r hr hb
  simp only [Bool.and_eq_true, beq_iff_eq] at hb
  obtain ⟨p, hp, -⟩ := hI.resolves r hr hb.1
  rw [hb.2, h] at hp
  cases hp

/-! ## Accounts -/

theorem upsert_fresh {l : List Account} {a : Account} (h : l.find? (·.id == a.id) = none) : upsert l a = l ++ [a] := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    have hx : x.id ≠ a.id := find_none_of_not_mem h x (List.mem_cons_self ..)
    have h' : xs.find? (·.id == a.id) = none := by
      rw [List.find?_eq_none] at h ⊢; exact fun y hy => h y (List.mem_cons_of_mem _ hy)
    simp [upsert, hx, ih h']

theorem total_append_one (l : List Account) (a : Account) (L : Nat) (f : Account → Nat) :
    total (l ++ [a]) L f = total l L f + part L f a := by
  unfold total part; by_cases h : a.ledger = L <;> simp [h, List.filter_append]

theorem inv_account {D : DB} (hI : Inv D) {ts : Nat} {a : NewAccount} {acc : Account}
    (h : decideAccount (D.account? a.id) ts a = (.created, some acc)) :
    Inv { D with accounts := upsert D.accounts acc } := by
  obtain ⟨-, ha0, ha1, hex, hchk, rfl⟩ := decideAccount_some h
  have hfresh : D.accounts.find? (·.id == (newAccount ts a).id) = none := hex
  rw [upsert_fresh hfresh]
  -- no transfer touches the new account
  have untouched : ∀ t ∈ D.transfers, t.debitAccountId ≠ a.id ∧ t.creditAccountId ≠ a.id := by
    intro t ht
    obtain ⟨-, ⟨dr, hdr, -⟩, ⟨cr, hcr, -⟩⟩ := hI.accountsOf t ht
    exact ⟨fun e => by rw [e] at hdr; simp [hdr] at hex, fun e => by rw [e] at hcr; simp [hcr] at hex⟩
  have acct (i : Nat) (x : Account) (hx : D.account? i = some x) :
      (D.accounts ++ [newAccount ts a]).find? (·.id == i) = some x := by
    rw [List.find?_append]; unfold DB.account? at hx; rw [hx]; rfl
  have pend (side : Transfer → Nat) (hs : ∀ t ∈ D.transfers, side t ≠ a.id) : pendingOn side D.transfers a.id = 0 := by
    unfold pendingOn sumIf
    rw [List.filter_eq_nil_iff.mpr]
    · rfl
    · intro t ht; simp [hs t ht]
  have hchk' := hchk
  simp [accountChecks] at hchk'
  constructor
  · rw [List.map_append]
    exact List.nodup_append.mpr ⟨hI.accountIds, by simp, by
      intro x hx y hy; simp at hy; subst hy
      exact fun e => not_mem_ids_of_account?_none hex (by rw [show a.id = (newAccount ts a).id from rfl, ← e]; exact hx)⟩
  · exact hI.transferIds
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.accountIdOk b m
    · simp at m; subst m; exact ⟨ha0, ha1⟩
  · exact hI.transferIdOk
  · intro t ht
    obtain ⟨hne, ⟨dr, hdr, hl1⟩, ⟨cr, hcr, hl2⟩⟩ := hI.accountsOf t ht
    exact ⟨hne, ⟨dr, acct _ _ hdr, hl1⟩, ⟨cr, acct _ _ hcr, hl2⟩⟩
  · exact hI.flagsOk
  · exact hI.resolves
  · exact hI.once
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.replay b m
    · simp at m; subst m
      show (newAccount ts a).balances = Audit.replay D.transfers a.id
      rw [replay_untouched _ _ untouched]; rfl
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.pendingD b m
    · simp at m; subst m
      exact (pend _ (fun t ht => (untouched t ht).1)).symm
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.pendingC b m
    · simp at m; subst m
      exact (pend _ (fun t ht => (untouched t ht).2)).symm
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.bounds b m
    · simp at m; subst m; simp [newAccount]
  · exact hI.amounts
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.dmnec b m
    · simp at m; subst m; simp [newAccount]
  · intro b hb
    rcases List.mem_append.mp hb with m | m
    · exact hI.cmned b m
    · simp at m; subst m; simp [newAccount]
  · intro L; rw [total_append_one, total_append_one, hI.posted L]; simp [part, newAccount]
  · intro L; rw [total_append_one, total_append_one, hI.pending L]; simp [part, newAccount]

end Ledger.Proofs
