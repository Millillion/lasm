/-
A model of the ledger's database: the tables as lists, and `DB.reads`, the
`Ledger.Reads` whose every query does to the lists what its SQL statement in
`Server/Sql.lean` does to the tables. `DB.apply` is what the commit does.
The theorems run the real rules (`Ledger.Rules`) on this model. What they
rely on, and do not prove, is that each SQL statement does what its model
function does, and that the commit is atomic (PROOFS.md, "What is trusted").
-/
import Ledger.Rules

namespace Ledger.Proofs
open Ledger Rules

/-- `INSERT … ON CONFLICT (id) DO UPDATE`: the account replaces the row with
its id (the primary key), or is added at the end. -/
def upsert : List Account → Account → List Account
  | [], a => [a]
  | x :: xs, a => if x.id == a.id then a :: xs else x :: upsert xs a

/-- The tables. -/
structure DB where
  /-- `accounts`, oldest first. -/
  accounts : List Account := []
  /-- `transfers`: the journal, in the order the transfers were created. -/
  transfers : List Transfer := []
  /-- `failed_transfers`: ids that failed for a transient reason. -/
  failed : List Nat := []
  deriving Inhabited

namespace DB

/-- The account with this id (`SELECT … FROM accounts WHERE id = ?`). -/
def account? (D : DB) (id : Nat) : Option Account := D.accounts.find? (·.id == id)

/-- The transfer with this id. -/
def transfer? (D : DB) (id : Nat) : Option Transfer := D.transfers.find? (·.id == id)

/-- The post or void of the pending transfer with this id
(`SELECT … FROM transfers WHERE pending_id = ?`). -/
def resolution? (D : DB) (id : Nat) : Option Transfer :=
  D.transfers.find? (fun t => t.flags.resolves && t.pendingId == id)

/-- The model of each query. -/
def reads (D : DB) : Reads Id where
  account id := D.account? id
  transfer id := D.transfer? id
  resolution id := D.resolution? id
  failed id := D.failed.contains id

/-- The commit: every account written (newest last), every transfer
appended, every failed id recorded. -/
def apply (D : DB) (w : Writes) : DB :=
  { accounts := w.accounts.reverse.foldl upsert D.accounts,
    transfers := D.transfers ++ w.transfers,
    failed := D.failed ++ w.failed }

/-- `SELECT max(timestamp) …` over accounts and transfers. -/
def lastTimestamp (D : DB) : Nat :=
  max (D.accounts.foldr (fun a n => max a.timestamp n) 0) (D.transfers.foldr (fun t n => max t.timestamp n) 0)

end DB
end Ledger.Proofs
