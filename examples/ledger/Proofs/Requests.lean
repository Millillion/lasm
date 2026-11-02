/-
Requests on the model: the store the API runs on, the database after a
request, and the databases the API can reach. Every request either writes
nothing or is one batch of accounts or transfers, so the invariant holds of
every reachable database.
-/
import Ledger.Api
import Proofs.Batch

namespace Ledger.Proofs
open Ledger Rules

/-- The model of the whole store: the queries, and the listings the API serves. -/
def store (D : DB) : Store Id where
  reads := D.reads
  lastTimestamp := D.lastTimestamp
  commit _ := pure ()
  accounts l := D.accounts.filter (fun a => l.all (a.ledger == ·))
  transfers after limit := (D.transfers.filter (·.timestamp > after)).take limit
  transfersOf id := D.transfers.filter (fun t => t.debitAccountId == id || t.creditAccountId == id)
  snapshot := (D.accounts, D.transfers)

/-- The reply to request `r` at time `now`. -/
def reply (now : Nat) (r : Request) (D : DB) : Reply := (Api.handle (store D) now r).1

/-- The database after request `r` at time `now`: its writes committed. -/
def after (now : Nat) (r : Request) (D : DB) : DB := D.apply (Api.handle (store D) now r).2

/-- Every request writes nothing, or is one batch of accounts or of transfers. -/
theorem handle_writes (D : DB) (now : Nat) (r : Request) :
    (Api.handle (store D) now r).2 = {} ∨
    (∃ ts batch, (Api.handle (store D) now r) =
      (Reply.json (Wire.results ((createAccounts D.reads ts batch).1.map (·.name))), (createAccounts D.reads ts batch).2)) ∨
    (∃ ts batch, (Api.handle (store D) now r) =
      (Reply.json (Wire.results ((createTransfers D.reads ts batch).1.map (·.name))), (createTransfers D.reads ts batch).2)) := by
  unfold Api.handle
  split
  · split
    · exact .inl rfl
    · rename_i batch _; exact .inr (.inl ⟨_, batch, rfl⟩)
  · split
    · exact .inl rfl
    · rename_i batch _; exact .inr (.inr ⟨_, batch, rfl⟩)
  all_goals
    left
    repeat' (first | rfl | split)

/-- The databases the API can reach from the empty one. -/
inductive Reachable : DB → Prop
  | empty : Reachable {}
  | step {D : DB} (now : Nat) (r : Request) : Reachable D → Reachable (after now r D)

/-- `D'` is `D` or a database later requests reach from it. -/
inductive Later : DB → DB → Prop
  | refl (D : DB) : Later D D
  | step {D D' : DB} (now : Nat) (r : Request) : Later D D' → Later D (after now r D')

theorem inv_after {D : DB} (hI : Inv D) (now : Nat) (r : Request) : Inv (after now r D) := by
  unfold after
  rcases handle_writes D now r with h | ⟨ts, b, h⟩ | ⟨ts, b, h⟩
  · rw [h, apply_empty]; exact hI
  · rw [h]; exact inv_createAccounts hI ts b
  · rw [h]; exact inv_createTransfers hI ts b

theorem inv_reachable {D : DB} (h : Reachable D) : Inv D := by
  induction h with
  | empty => exact inv_empty
  | step now r _ ih => exact inv_after ih now r

theorem reachable_later {D D' : DB} (h : Later D D') (hD : Reachable D) : Reachable D' := by
  induction h with
  | refl => exact hD
  | step now r _ ih => exact .step now r ih

/-- Later databases extend the journal and the failed ids. -/
theorem later_prefix {D D' : DB} (h : Later D D') : D.transfers <+: D'.transfers ∧ D.failed <+: D'.failed := by
  induction h with
  | refl => exact ⟨List.prefix_refl _, List.prefix_refl _⟩
  | step now r _ ih =>
    refine ⟨ih.1.trans ?_, ih.2.trans ?_⟩
    · simp [after, DB.apply]
    · simp [after, DB.apply]

end Ledger.Proofs
