/-
The journal auditor: recomputes every balance from the journal alone, as an
outside auditor would, and checks the ledger's invariants. The WASI build
(`ledger verify journal.ndjson`) runs `verify`; the proofs show that the
balances the ledger stores are exactly `replay`'s (`Spec.replay_balances`).
-/
import Ledger.Types

namespace Ledger

/-- An account's four balances. -/
structure Balances where
  debitsPending : Nat := 0
  debitsPosted : Nat := 0
  creditsPending : Nat := 0
  creditsPosted : Nat := 0
  deriving Repr, DecidableEq, Inhabited

/-- An account's balances. -/
def Account.balances (a : Account) : Balances :=
  ⟨a.debitsPending, a.debitsPosted, a.creditsPending, a.creditsPosted⟩

namespace Audit

/-- How transfer `t` changes the balances `b` of account `id`, given the
journal `before` it: a single-phase transfer moves its amount into the posted
balances, a pending one into the pending balances, and a post or void
releases its pending transfer's amount from the pending balances (a post
moving its own amount into the posted ones). -/
def replayStep (before : List Transfer) (t : Transfer) (id : Nat) (b : Balances) : Balances :=
  if t.flags.resolves then
    let held := match before.find? (·.id == t.pendingId) with
      | some p => p.amount
      | none => 0
    let posted := if t.flags.postPendingTransfer then t.amount else 0
    let b := if t.debitAccountId == id then
      { b with debitsPending := b.debitsPending - held, debitsPosted := b.debitsPosted + posted } else b
    if t.creditAccountId == id then
      { b with creditsPending := b.creditsPending - held, creditsPosted := b.creditsPosted + posted } else b
  else if t.flags.pending then
    let b := if t.debitAccountId == id then { b with debitsPending := b.debitsPending + t.amount } else b
    if t.creditAccountId == id then { b with creditsPending := b.creditsPending + t.amount } else b
  else
    let b := if t.debitAccountId == id then { b with debitsPosted := b.debitsPosted + t.amount } else b
    if t.creditAccountId == id then { b with creditsPosted := b.creditsPosted + t.amount } else b

/-- Replays a journal, after `before`, from balances `b`. -/
def replayFrom (before : List Transfer) (b : Balances) (id : Nat) : List Transfer → Balances
  | [] => b
  | t :: ts => replayFrom (before ++ [t]) (replayStep before t id b) id ts

/-- The balances of account `id` after the journal: every account starts at zero. -/
def replay (journal : List Transfer) (id : Nat) : Balances := replayFrom [] {} id journal

end Audit
end Ledger
