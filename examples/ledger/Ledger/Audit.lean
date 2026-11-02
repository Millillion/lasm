/-
The journal auditor: recomputes every balance from the journal alone, as an
outside auditor would, and checks the ledger's invariants. The WASI build
(`ledger verify journal.ndjson`) runs `verify`; the proofs show that the
balances the ledger stores are exactly `replay`'s (`Spec.replay_balances`).
-/
import Ledger.Types
import Std.Data.HashMap

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

/-- An account with its balances replaced. -/
def Account.withBalances (a : Account) (b : Balances) : Account :=
  { a with debitsPending := b.debitsPending, debitsPosted := b.debitsPosted,
           creditsPending := b.creditsPending, creditsPosted := b.creditsPosted }

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

/-! ## The audit -/

/-- `replay` for every account at once, in one pass over the journal (hash
maps instead of list searches; the auditor runs this on large journals). It
computes `replay journal id` for every `id`: each transfer changes its two
accounts as `replayStep` does, with the pending transfer it names looked up
among the transfers before it. -/
def replayAll (journal : List Transfer) : Std.HashMap Nat Balances := Id.run do
  let mut balances : Std.HashMap Nat Balances := {}
  let mut seen : Std.HashMap Nat Transfer := {}
  for t in journal do
    let get (id : Nat) := balances.getD id {}
    let dr := t.debitAccountId
    let cr := t.creditAccountId
    if t.flags.resolves then
      let held := match seen.get? t.pendingId with | some p => p.amount | none => 0
      let posted := if t.flags.postPendingTransfer then t.amount else 0
      let b := get dr
      balances := balances.insert dr { b with debitsPending := b.debitsPending - held, debitsPosted := b.debitsPosted + posted }
      let b := get cr
      balances := balances.insert cr { b with creditsPending := b.creditsPending - held, creditsPosted := b.creditsPosted + posted }
    else if t.flags.pending then
      let b := get dr
      balances := balances.insert dr { b with debitsPending := b.debitsPending + t.amount }
      let b := get cr
      balances := balances.insert cr { b with creditsPending := b.creditsPending + t.amount }
    else
      let b := get dr
      balances := balances.insert dr { b with debitsPosted := b.debitsPosted + t.amount }
      let b := get cr
      balances := balances.insert cr { b with creditsPosted := b.creditsPosted + t.amount }
    unless seen.contains t.id do seen := seen.insert t.id t
  return balances

/-- The sum of `f` over the accounts of ledger `L`. -/
def ledgerSum (accounts : List Account) (L : Nat) (f : Account → Nat) : Nat :=
  ((accounts.filter (·.ledger == L)).map f).sum

/-- Every problem the auditor finds in an exported journal: the accounts (with
their stored balances) and the transfers, in order. An empty list means the
journal is consistent: every balance is what replaying the transfers gives,
every ledger balances, and every rule of the ledger holds. -/
def verify (accounts : List Account) (transfers : List Transfer) : List String := Id.run do
  let mut problems : Array String := #[]
  let byId : Std.HashMap Nat Account := accounts.foldl (fun m a => if m.contains a.id then m else m.insert a.id a) {}
  let find (id : Nat) := byId.get? id
  -- Ids.
  if byId.size != accounts.length then problems := problems.push "two accounts share an id"
  let tids : Std.HashMap Nat Unit := transfers.foldl (fun m t => m.insert t.id ()) {}
  if tids.size != transfers.length then problems := problems.push "two transfers share an id"
  for a in accounts do
    if a.id == 0 || a.id == u128Max then problems := problems.push s!"account {a.id}: invalid id"
  -- Each transfer, in order.
  let mut before : Std.HashMap Nat Transfer := {}
  let mut resolved : Std.HashMap Nat Unit := {}
  for t in transfers do
    if t.id == 0 || t.id == u128Max then problems := problems.push s!"transfer {t.id}: invalid id"
    if t.amount > limit then problems := problems.push s!"transfer {t.id}: amount past 2^63 - 1"
    if t.debitAccountId == t.creditAccountId then problems := problems.push s!"transfer {t.id}: one account on both sides"
    match find t.debitAccountId, find t.creditAccountId with
    | some dr, some cr =>
      if dr.ledger != t.ledger || cr.ledger != t.ledger then
        problems := problems.push s!"transfer {t.id}: its accounts are not both in ledger {t.ledger}"
    | _, _ => problems := problems.push s!"transfer {t.id}: an account is missing"
    if t.flags.resolves then
      if t.flags.pending || (t.flags.postPendingTransfer && t.flags.voidPendingTransfer) then
        problems := problems.push s!"transfer {t.id}: conflicting flags"
      match before.get? t.pendingId with
      | none => problems := problems.push s!"transfer {t.id}: resolves {t.pendingId}, which is not an earlier transfer"
      | some p =>
        if !p.flags.pending then problems := problems.push s!"transfer {t.id}: resolves {p.id}, which is not pending"
        if p.debitAccountId != t.debitAccountId || p.creditAccountId != t.creditAccountId || p.ledger != t.ledger then
          problems := problems.push s!"transfer {t.id}: not the accounts and ledger of {p.id}"
        if t.amount > p.amount then problems := problems.push s!"transfer {t.id}: posts more than {p.id} holds"
        if t.flags.voidPendingTransfer && t.amount != p.amount then
          problems := problems.push s!"transfer {t.id}: voids another amount than {p.id} holds"
      if resolved.contains t.pendingId then
        problems := problems.push s!"transfer {t.id}: {t.pendingId} was already posted or voided"
      resolved := resolved.insert t.pendingId ()
    unless before.contains t.id do before := before.insert t.id t
  -- Balances.
  let replayed := replayAll transfers
  for a in accounts do
    if a.balances != replayed.getD a.id {} then
      problems := problems.push s!"account {a.id}: its balances are not the journal's"
    if a.debitsPending + a.debitsPosted > limit || a.creditsPending + a.creditsPosted > limit then
      problems := problems.push s!"account {a.id}: a balance past 2^63 - 1"
    if a.flags.debitsMustNotExceedCredits && a.debitsPending + a.debitsPosted > a.creditsPosted then
      problems := problems.push s!"account {a.id}: debits exceed credits"
    if a.flags.creditsMustNotExceedDebits && a.creditsPending + a.creditsPosted > a.debitsPosted then
      problems := problems.push s!"account {a.id}: credits exceed debits"
  for L in (accounts.map (·.ledger)).eraseDups do
    if ledgerSum accounts L (·.debitsPosted) != ledgerSum accounts L (·.creditsPosted) then
      problems := problems.push s!"ledger {L}: posted debits and credits differ"
    if ledgerSum accounts L (·.debitsPending) != ledgerSum accounts L (·.creditsPending) then
      problems := problems.push s!"ledger {L}: pending debits and credits differ"
  return problems.toList

end Audit
end Ledger
