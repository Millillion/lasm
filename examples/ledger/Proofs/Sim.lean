/-
The rules read through `Reads.over`: the database, then the batch's own
writes. On the model, that is exactly reading the database after those
writes (`reads_over`), so each event of a batch is decided on the state the
earlier events left.
-/
import Proofs.Basic

namespace Ledger.Proofs
open Ledger Rules

theorem account_apply (D : DB) (w : Writes) (i : Nat) :
    (D.apply w).account? i = (w.accounts.find? (·.id == i)).or (D.account? i) := by
  simp only [DB.apply, DB.account?]; rw [find_foldl_upsert, List.reverse_reverse]

theorem transfer_apply (D : DB) (w : Writes) (i : Nat) :
    (D.apply w).transfer? i = (D.transfer? i).or (w.transfers.find? (·.id == i)) := by
  simp [DB.apply, DB.transfer?, List.find?_append]

theorem resolution_apply (D : DB) (w : Writes) (i : Nat) :
    (D.apply w).resolution? i =
      (D.resolution? i).or (w.transfers.find? (fun t => t.flags.resolves && t.pendingId == i)) := by
  simp [DB.apply, DB.resolution?, List.find?_append]

/-- Reading through a batch's writes is reading the database after them. -/
theorem reads_over (D : DB) (w : Writes) : D.reads.over w = (D.apply w).reads := by
  simp only [Reads.over, DB.reads]
  congr 1
  · funext i
    rw [account_apply]
    cases w.accounts.find? (·.id == i) <;> rfl
  · funext i
    rw [transfer_apply]
    cases D.transfer? i <;> rfl
  · funext i
    rw [resolution_apply]
    cases D.resolution? i <;> rfl
  · funext i
    simp [DB.apply, List.contains_append]
    rfl

theorem apply_merge (D : DB) (w d : Writes) : D.apply (w.merge d) = (D.apply w).apply d := by
  simp [DB.apply, Writes.merge, List.foldl_append]

theorem apply_empty (D : DB) : D.apply {} = D := by
  cases D; simp [DB.apply]

theorem apply_ofTransfer (D : DB) (tr : Transfer) (dr cr : Account) :
    D.apply (Writes.ofTransfer tr dr cr) =
      { D with accounts := upsert (upsert D.accounts dr) cr, transfers := D.transfers ++ [tr] } := by
  simp [DB.apply, Writes.ofTransfer]

theorem apply_ofAccount (D : DB) (a : Account) :
    D.apply (Writes.ofAccount a) = { D with accounts := upsert D.accounts a } := by
  simp [DB.apply, Writes.ofAccount]

/-! ## The rules on the model -/

/-- What creating transfer `t` reads, on the model. -/
def ctxOf (D : DB) (t : NewTransfer) : TransferCtx :=
  let pending := if t.flags.resolves then D.transfer? t.pendingId else none
  { existing := D.transfer? t.id, failed := D.failed.contains t.id, pending,
    resolution := if t.flags.resolves then D.resolution? t.pendingId else none,
    debit := D.account? (match pending with | some p => p.debitAccountId | none => t.debitAccountId),
    credit := D.account? (match pending with | some p => p.creditAccountId | none => t.creditAccountId) }

theorem fetch_model (D : DB) (t : NewTransfer) : fetchTransfer D.reads t = ctxOf D t := by
  unfold fetchTransfer ctxOf
  cases h : t.flags.resolves <;> rfl

/-- One transfer on the model: its status and the database after it. -/
def stepTransfer (D : DB) (ts : Nat) (t : NewTransfer) : TransferStatus × DB :=
  match decideTransfer (ctxOf D t) ts t with
  | (s, some (tr, dr, cr)) => (s, D.apply (Writes.ofTransfer tr dr cr))
  | (s, none) => (s, D)

/-- Creating a transfer on the model: the decision on what it reads. -/
theorem createTransfer_eq (D : DB) (ts : Nat) (t : NewTransfer) :
    createTransfer D.reads ts t = (match decideTransfer (ctxOf D t) ts t with
      | (s, some (tr, dr, cr)) => (s, Writes.ofTransfer tr dr cr)
      | (s, none) => (s, {})) := by
  rw [← fetch_model]; rfl

theorem createTransfer_model (D : DB) (ts : Nat) (t : NewTransfer) :
    ((createTransfer D.reads ts t).1, D.apply (createTransfer D.reads ts t).2) = stepTransfer D ts t := by
  rw [createTransfer_eq]
  unfold stepTransfer
  rcases decideTransfer (ctxOf D t) ts t with ⟨s, _ | ⟨tr, dr, cr⟩⟩
  · simp [apply_empty]
  · rfl

/-- One account on the model. -/
def stepAccount (D : DB) (ts : Nat) (a : NewAccount) : AccountStatus × DB :=
  match decideAccount (D.account? a.id) ts a with
  | (s, some acc) => (s, D.apply (Writes.ofAccount acc))
  | (s, none) => (s, D)

theorem createAccount_eq (D : DB) (ts : Nat) (a : NewAccount) :
    createAccount D.reads ts a = (match decideAccount (D.account? a.id) ts a with
      | (s, some acc) => (s, Writes.ofAccount acc)
      | (s, none) => (s, {})) := rfl

theorem createAccount_model (D : DB) (ts : Nat) (a : NewAccount) :
    ((createAccount D.reads ts a).1, D.apply (createAccount D.reads ts a).2) = stepAccount D ts a := by
  rw [createAccount_eq]
  unfold stepAccount
  rcases decideAccount (D.account? a.id) ts a with ⟨s, _ | acc⟩
  · simp [apply_empty]
  · rfl

end Ledger.Proofs
