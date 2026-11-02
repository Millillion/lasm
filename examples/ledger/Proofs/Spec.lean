/-
# What is proved about Ledger

Every proposition proved about Ledger, as a named `def … : Prop`, grouped by
requirement, with no proofs in this file. The proofs are in the other files
of `Proofs/`; each proposition `Spec.x` is proved by a theorem
`Ledger.Proofs.x : Spec.x`, and `npm run proofs` fails unless every
proposition here has its theorem and every such theorem uses only Lean's
standard axioms. SPEC.md maps the requirements onto these names; PROOFS.md
is generated from this file.

Reading guide. The propositions talk about the code the server runs: the
API (`Ledger.Api.handle`), the rules (`Ledger.Rules`) and the auditor
(`Ledger.Audit`). Only the database is a model (`Proofs/Model.lean`: the
tables as lists, one function per SQL statement). `D` is a database;
`after now r D` is the database after request `r` at time `now`;
`Reachable D` says some sequence of requests, from the empty database,
leads to `D`. `limit` is `2^63 - 1`, SQLite's largest integer; `u128Max` is
`2^128 - 1`.
-/
import Proofs.Requests

namespace Ledger.Spec
open Ledger Rules Proofs

/-! ## Vocabulary -/

/-- The sum of `f` over the accounts of ledger `L`. -/
def ledgerTotal (D : DB) (L : Nat) (f : Account → Nat) : Nat :=
  ((D.accounts.filter (·.ledger == L)).map f).sum

/-- One transfer, alone in its batch and not linked, submitted to `D` at
time `ts`: its status and the database after it. -/
def submitTransfer (D : DB) (ts : Nat) (t : NewTransfer) : List TransferStatus × DB :=
  ((createTransfers D.reads ts [t]).1, D.apply (createTransfers D.reads ts [t]).2)

/-- One account, alone in its batch and not linked, submitted to `D`. -/
def submitAccount (D : DB) (ts : Nat) (a : NewAccount) : List AccountStatus × DB :=
  ((createAccounts D.reads ts [a]).1, D.apply (createAccounts D.reads ts [a]).2)

/-- `b` is `a` with only its four balances changed. -/
def SameButBalances (a b : Account) : Prop :=
  b.id = a.id ∧ b.userData128 = a.userData128 ∧ b.userData64 = a.userData64 ∧ b.userData32 = a.userData32 ∧
  b.ledger = a.ledger ∧ b.code = a.code ∧ b.flags = a.flags ∧ b.timestamp = a.timestamp

/-- Whether pending transfer `id` has been posted or voided in the journal. -/
def Resolved (D : DB) (id : Nat) : Prop := ∃ r ∈ D.transfers, r.flags.resolves = true ∧ r.pendingId = id

/-- The sum of the amounts of the pending transfers in `D` that are not yet
posted or voided and whose `side` (debit or credit account) is account `id`. -/
def openPending (D : DB) (side : Transfer → Nat) (id : Nat) : Nat :=
  ((D.transfers.filter (fun p => p.flags.pending && side p == id &&
    !D.transfers.any (fun r => r.flags.resolves && r.pendingId == p.id))).map (·.amount)).sum

/-! ## A. Money is neither created nor destroyed -/

/-- **Conservation of posted amounts**: in every reachable database, in
every ledger, the accounts' posted debits add up to their posted credits. -/
def conservation_posted : Prop :=
  ∀ D, Reachable D → ∀ L, ledgerTotal D L (·.debitsPosted) = ledgerTotal D L (·.creditsPosted)

/-- **Conservation of pending amounts**: likewise for the pending debits and
pending credits. -/
def conservation_pending : Prop :=
  ∀ D, Reachable D → ∀ L, ledgerTotal D L (·.debitsPending) = ledgerTotal D L (·.creditsPending)

/-! ## B. A transfer moves money between exactly two accounts -/

/-- **A created transfer changes exactly two accounts and adds one journal
entry**: the debit and credit accounts it names (for a post or void, its
pending transfer's), which are different and in the transfer's ledger, get
new balances and nothing else; every other account, and every earlier
transfer, is unchanged. -/
def transfer_two_accounts : Prop :=
  ∀ D ts t D', Reachable D → t.flags.linked = false → submitTransfer D ts t = ([.created], D') →
    ∃ tr dr cr dr' cr', D' = { D with accounts := upsert (upsert D.accounts dr') cr', transfers := D.transfers ++ [tr] } ∧
      tr.id = t.id ∧ D.account? tr.debitAccountId = some dr ∧ D.account? tr.creditAccountId = some cr ∧
      dr.id ≠ cr.id ∧ dr.ledger = tr.ledger ∧ cr.ledger = tr.ledger ∧
      SameButBalances dr dr' ∧ SameButBalances cr cr'

/-- **Equal and opposite**: in that transfer, the debit account's credits
and the credit account's debits do not change, and what is added to the
debit account's debits equals what is added to the credit account's
credits, for the posted and for the pending balances (a post or void
removes the same pending amount from both). -/
def transfer_equal_opposite : Prop :=
  ∀ D ts t D', Reachable D → t.flags.linked = false → submitTransfer D ts t = ([.created], D') →
    ∃ tr dr cr dr' cr', D' = { D with accounts := upsert (upsert D.accounts dr') cr', transfers := D.transfers ++ [tr] } ∧
      D.account? tr.debitAccountId = some dr ∧ D.account? tr.creditAccountId = some cr ∧
      dr'.creditsPending = dr.creditsPending ∧ dr'.creditsPosted = dr.creditsPosted ∧
      cr'.debitsPending = cr.debitsPending ∧ cr'.debitsPosted = cr.debitsPosted ∧
      (dr'.debitsPosted : Int) - dr.debitsPosted = (cr'.creditsPosted : Int) - cr.creditsPosted ∧
      (dr'.debitsPending : Int) - dr.debitsPending = (cr'.creditsPending : Int) - cr.creditsPending

/-! ## C. Client-chosen ids: idempotency -/

/-- **Resubmitting an existing transfer id changes nothing**: the answer is
`exists` or one `exists_with_different_*` code, and the database is exactly
as it was. -/
def transfer_exists : Prop :=
  ∀ D ts t e, Reachable D → t.flags.linked = false → D.transfer? t.id = some e →
    ∃ s, submitTransfer D ts t = ([s], D) ∧ s.isExists = true

/-- **`exists` means the same transfer**: for a transfer that is not a post or
void, a stored transfer with its id answers `exists` exactly when every field
the client chose is the same; otherwise the code names the first field that
differs (flags, pending id, accounts, amount, user data, ledger, code). -/
def transfer_exists_iff_same : Prop :=
  ∀ (t : NewTransfer) (e : Transfer) p, t.flags.resolves = false →
    (existsTransfer t e p = .exists ↔
      t.flags = e.flags ∧ t.pendingId = e.pendingId ∧ t.debitAccountId = e.debitAccountId ∧
      t.creditAccountId = e.creditAccountId ∧ t.amount = e.amount ∧ t.userData128 = e.userData128 ∧
      t.userData64 = e.userData64 ∧ t.userData32 = e.userData32 ∧ t.ledger = e.ledger ∧ t.code = e.code)

/-- **A retried transfer is not applied twice**: once a transfer is created,
submitting the same request again, in any later database, answers `exists`
and changes nothing. -/
def transfer_retry : Prop :=
  ∀ D ts t D1 D2 ts', Reachable D → t.flags.linked = false → submitTransfer D ts t = ([.created], D1) →
    Later D1 D2 → submitTransfer D2 ts' t = ([.exists], D2)

/-- **A failed id stays failed**: once a transfer fails for a reason that
depends on the ledger's state (an account or pending transfer missing, a
balance limit), no transfer with its id is ever created afterwards:
resubmitting it changes nothing. -/
def failed_retry : Prop :=
  ∀ D ts t s D1 D2 ts' t', Reachable D → t.flags.linked = false → submitTransfer D ts t = ([s], D1) →
    s.transient = true → Later D1 D2 → t'.id = t.id → t'.flags.linked = false →
    ∃ s', submitTransfer D2 ts' t' = ([s'], D2) ∧ s' ≠ .created

/-- **Resubmitting an existing account id changes nothing**: the answer is
`exists` or one `exists_with_different_*` code, and the database is
exactly as it was. -/
def account_exists : Prop :=
  ∀ D ts a e, Reachable D → a.flags.linked = false → D.account? a.id = some e →
    ∃ s, submitAccount D ts a = ([s], D) ∧ s.isExists = true

/-- **A retried account is not created twice**: once an account is created,
submitting the same request again, in any later database, answers `exists`
and changes nothing. -/
def account_retry : Prop :=
  ∀ D ts a D1 D2 ts', Reachable D → a.flags.linked = false → submitAccount D ts a = ([.created], D1) →
    Later D1 D2 → submitAccount D2 ts' a = ([.exists], D2)

/-! ## D. Balance limits -/

/-- **`debits_must_not_exceed_credits` holds**: in every reachable database,
an account with this flag has debits (pending and posted) of at most its
posted credits. -/
def debits_must_not_exceed_credits : Prop :=
  ∀ D, Reachable D → ∀ a ∈ D.accounts, a.flags.debitsMustNotExceedCredits = true →
    a.debitsPending + a.debitsPosted ≤ a.creditsPosted

/-- **`credits_must_not_exceed_debits` holds**: likewise for credits. -/
def credits_must_not_exceed_debits : Prop :=
  ∀ D, Reachable D → ∀ a ∈ D.accounts, a.flags.creditsMustNotExceedDebits = true →
    a.creditsPending + a.creditsPosted ≤ a.debitsPosted

/-! ## E. Two-phase transfers -/

/-- **A pending transfer is posted or voided at most once**: in every
reachable database, no two posts or voids name the same pending transfer. -/
def resolved_at_most_once : Prop :=
  ∀ D, Reachable D → ((D.transfers.filter (·.flags.resolves)).map (·.pendingId)).Nodup

/-- **Posts and voids match their pending transfer**: every post or void in
the journal names a pending transfer in the journal, with the same debit
and credit accounts and ledger; a post moves at most the pending amount and
a void exactly the pending amount. -/
def resolution_matches_pending : Prop :=
  ∀ D, Reachable D → ∀ t ∈ D.transfers, t.flags.resolves = true →
    ∃ p ∈ D.transfers, p.id = t.pendingId ∧ p.flags.pending = true ∧
      p.debitAccountId = t.debitAccountId ∧ p.creditAccountId = t.creditAccountId ∧ p.ledger = t.ledger ∧
      t.amount ≤ p.amount ∧ (t.flags.voidPendingTransfer = true → t.amount = p.amount)

/-- **Pending balances are the open pending transfers**: every account's
pending debits (credits) are the sum of the pending transfers that debit
(credit) it and are not yet posted or voided. So posting or voiding
releases exactly the pending amount. -/
def pending_balances : Prop :=
  ∀ D, Reachable D → ∀ a ∈ D.accounts,
    a.debitsPending = openPending D (·.debitAccountId) a.id ∧ a.creditsPending = openPending D (·.creditAccountId) a.id

/-! ## F. Linked chains -/

/-- **How a batch is cut into chains**: the chains, in order, are the batch;
none is empty; within a chain every event but the last is linked; and every
chain but the last ends with an event that is not linked (so a chain is a
maximal run of linked events and the event after it). -/
def chains_cut : Prop :=
  ∀ (batch : List NewTransfer),
    (chains (·.flags.linked) batch).flatten = batch ∧
    (∀ c ∈ chains (·.flags.linked) batch, c ≠ []) ∧
    (∀ c ∈ chains (·.flags.linked) batch, ∀ t ∈ c.dropLast, t.flags.linked = true) ∧
    (∀ c ∈ (chains (·.flags.linked) batch).dropLast, ∀ t, c.getLast? = some t → t.flags.linked = false)

/-- **A linked chain succeeds or fails as a whole**: a batch gets one status
per event, and within each chain either every event is `created` or none is. -/
def chains_atomic : Prop :=
  ∀ (D : DB) ts (batch : List NewTransfer), ∃ parts : List (List TransferStatus),
    (createTransfers D.reads ts batch).1 = parts.flatten ∧ parts.length = (chains (·.flags.linked) batch).length ∧
    ∀ cp ∈ (chains (·.flags.linked) batch).zip parts, cp.2.length = cp.1.length ∧
      ((∀ s ∈ cp.2, s = .created) ∨ (∀ s ∈ cp.2, s ≠ .created))

/-- **The journal holds exactly the created transfers**: after a batch, the
journal is the journal before followed by the batch's transfers whose status
is `created`, in order (by id); nothing from a failed chain is written. -/
def journal_is_created : Prop :=
  ∀ (D : DB) ts (batch : List NewTransfer),
    (D.apply (createTransfers D.reads ts batch).2).transfers.map (·.id) =
      D.transfers.map (·.id) ++ ((batch.zip (createTransfers D.reads ts batch).1).filter
        (fun p => decide (p.2 = .created))).map (·.1.id)

/-! ## G. The audit -/

/-- **Replaying the journal reproduces every balance**: in every reachable
database, each account's four balances are exactly what the auditor
computes by replaying the journal from zero (`Audit.replay`, the function
`ledger verify` runs). -/
def replay_balances : Prop :=
  ∀ D, Reachable D → ∀ a ∈ D.accounts, a.balances = Audit.replay D.transfers a.id

/-! ## H. Ledgers, ids and bounds -/

/-- **Every transfer stays within one ledger**: in every reachable database,
each transfer's debit and credit accounts exist, are different, and are in
the transfer's ledger. -/
def same_ledger : Prop :=
  ∀ D, Reachable D → ∀ t ∈ D.transfers, t.debitAccountId ≠ t.creditAccountId ∧
    (∃ dr, D.account? t.debitAccountId = some dr ∧ dr.ledger = t.ledger) ∧
    (∃ cr, D.account? t.creditAccountId = some cr ∧ cr.ledger = t.ledger)

/-- **A transfer between ledgers is rejected**: a transfer (not a post or
void) whose two accounts exist in different ledgers is never created, and
changes nothing. -/
def cross_ledger_rejected : Prop :=
  ∀ (D : DB) ts t dr cr, t.flags.resolves = false → D.account? t.debitAccountId = some dr →
    D.account? t.creditAccountId = some cr → dr.ledger ≠ cr.ledger →
    (createTransfer D.reads ts t).1 ≠ .created ∧ (createTransfer D.reads ts t).2 = {}

/-- **Every amount fits the database**: in every reachable database, each
account's debits (pending plus posted) and credits (pending plus posted),
and each transfer's amount, are at most `2^63 - 1`, SQLite's largest
integer, so no stored number overflows. -/
def within_bounds : Prop :=
  ∀ D, Reachable D → (∀ a ∈ D.accounts, a.debitsPending + a.debitsPosted ≤ limit ∧
    a.creditsPending + a.creditsPosted ≤ limit) ∧ ∀ t ∈ D.transfers, t.amount ≤ limit

/-- **Ids are unique**: in every reachable database no two accounts and no
two transfers share an id, and no id is 0 or `2^128 - 1`. -/
def ids_unique : Prop :=
  ∀ D, Reachable D → (D.accounts.map (·.id)).Nodup ∧ (D.transfers.map (·.id)).Nodup ∧
    (∀ a ∈ D.accounts, a.id ≠ 0 ∧ a.id ≠ u128Max) ∧ (∀ t ∈ D.transfers, t.id ≠ 0 ∧ t.id ≠ u128Max)

/-- **Nothing is ever deleted or rewritten**: whatever requests follow, the
journal only grows at its end, and every account stays, with the same id,
user data, ledger, code, flags and timestamp (only its balances change). -/
def history_kept : Prop :=
  ∀ D D', Reachable D → Later D D' → D.transfers <+: D'.transfers ∧
    ∀ a ∈ D.accounts, ∃ a' ∈ D'.accounts, SameButBalances a a'

/-! ## I. Requests -/

/-- **Reads change nothing**: every `GET` request leaves the database as it was. -/
def reads_change_nothing : Prop :=
  ∀ now (r : Request) D, r.method = "GET" → after now r D = D

/-- **Only the two create endpoints write**, and each writes exactly what
one batch (`create_accounts` or `create_transfers`) writes. -/
def writes_are_batches : Prop :=
  ∀ now r D, after now r D = D ∨ (∃ ts batch, after now r D = D.apply (createAccounts D.reads ts batch).2) ∨
    (∃ ts batch, after now r D = D.apply (createTransfers D.reads ts batch).2)

end Ledger.Spec
