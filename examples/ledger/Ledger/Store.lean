/-
What the ledger's rules need from the database, as a plain record of
functions over any monad `m`: `Reads m`, one function per SQL query. The
server implements it with SQLite (`Server/Sql.lean`); the proofs implement it
with lists (`Proofs/Model.lean`).

The rules never write. A request computes its `Writes` (the accounts it
changed, the transfers it added, the ids that failed), and the server
commits them in one transaction (`Store.commit`). So the theorems about the
rules are about the code the server runs, and what is trusted is that each
query returns what its model returns and that the commit applies the writes
atomically, with no other write between the reads and the commit.
-/
import Ledger.Types

namespace Ledger

/-- The database's queries. -/
structure Reads (m : Type → Type) where
  /-- The account with this id. -/
  account : Nat → m (Option Account)
  /-- The transfer with this id. -/
  transfer : Nat → m (Option Transfer)
  /-- The transfer that posted or voided the pending transfer with this id. -/
  resolution : Nat → m (Option Transfer)
  /-- Whether a transfer with this id failed for a transient reason. -/
  failed : Nat → m Bool

/-- What a request changes: the database is append-only except for the
accounts' balances. -/
structure Writes where
  /-- New accounts and new versions of accounts, newest first: the first one
  with a given id is that account now. -/
  accounts : List Account := []
  /-- New transfers, in order. -/
  transfers : List Transfer := []
  /-- Ids of transfers that failed for a transient reason. -/
  failed : List Nat := []
  deriving Repr, DecidableEq, Inhabited

/-- A read that sees a request's own writes first (a linked chain's later
events see its earlier ones): the database as it would be after `w`. -/
def Reads.over {m : Type → Type} [Monad m] (r : Reads m) (w : Writes) : Reads m where
  account id := do
    match w.accounts.find? (·.id == id) with
    | some a => return some a
    | none => r.account id
  transfer id := do
    match ← r.transfer id with
    | some t => return some t
    | none => return w.transfers.find? (·.id == id)
  resolution id := do
    match ← r.resolution id with
    | some t => return some t
    | none => return w.transfers.find? (fun t => t.flags.resolves && t.pendingId == id)
  failed id := do return (← r.failed id) || w.failed.contains id

/-- The whole database: its queries, its commit, and the listings the API
serves. -/
structure Store (m : Type → Type) where
  reads : Reads m
  /-- The latest timestamp of any account or transfer (0 when there is none). -/
  lastTimestamp : m Nat
  /-- Applies a request's writes, all or none. -/
  commit : Writes → m Unit
  /-- Every account, oldest first (`ledger` filters by ledger). -/
  accounts : Option Nat → m (List Account)
  /-- Transfers in journal order: those after timestamp `after`, at most `limit`. -/
  transfers : (after : Nat) → (limit : Nat) → m (List Transfer)
  /-- The transfers that touch an account, in journal order. -/
  transfersOf : Nat → m (List Transfer)

/-- The clock. -/
structure Services (m : Type → Type) where
  /-- Nanoseconds since the epoch. -/
  now : m Nat

end Ledger
