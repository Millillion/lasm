/-
The database layer: every SQL statement Ledger runs, and `Ledger.Store` built
from them. It talks to SQLite through `Sql`, three functions that each
target's binding module provides (`Server/NodeSqlite.lean`, and per platform
in later milestones). All values are bound as parameters (`?`), never spliced
into the SQL text.

Numbers. Ids and `user_data_128`/`user_data_64` are u128/u64, so they are
TEXT (decimal). Balances, amounts and timestamps are INTEGER (at most
`2^63 - 1`, `Spec.within_bounds`), but they are bound as decimal strings
(SQLite's INTEGER affinity stores them as integers) and read back with
`CAST(… AS TEXT)`, because a JavaScript number loses precision past 2^53.

Concurrency. A request reads, then commits its writes in one transaction
(`batch`). The commit first checks that the database's `version` is still the
one read before the request's reads (a `CHECK` constraint fails otherwise,
which rolls the transaction back), then increments it; the server then
retries the request from the start. So no request commits on stale reads,
whatever the store's own isolation between separate statements.
-/
import Lasm.JS
import Ledger.Store
open Lasm.JS

namespace Ledger.Server

/-- A SQLite connection, as a binding module provides it. -/
structure Sql where
  /-- The rows of a query, as plain objects. -/
  all : String → Array Data → Async (Array Data)
  /-- One statement that returns no rows. -/
  run : String → Array Data → Async Unit
  /-- Several statements, all or none: a failing statement rolls back the others and throws. -/
  batch : Array (String × Array Data) → Async Unit

/-- The tables, created on first start. Every statement is idempotent. -/
def schema : List String := [
  "CREATE TABLE IF NOT EXISTS accounts (
     id TEXT PRIMARY KEY,
     debits_pending INTEGER NOT NULL CHECK (debits_pending >= 0),
     debits_posted INTEGER NOT NULL CHECK (debits_posted >= 0),
     credits_pending INTEGER NOT NULL CHECK (credits_pending >= 0),
     credits_posted INTEGER NOT NULL CHECK (credits_posted >= 0),
     user_data_128 TEXT NOT NULL,
     user_data_64 TEXT NOT NULL,
     user_data_32 INTEGER NOT NULL,
     ledger INTEGER NOT NULL,
     code INTEGER NOT NULL,
     flags INTEGER NOT NULL,
     timestamp INTEGER NOT NULL)",
  "CREATE INDEX IF NOT EXISTS accounts_by_ledger ON accounts(ledger, timestamp)",
  "CREATE TABLE IF NOT EXISTS transfers (
     id TEXT PRIMARY KEY,
     debit_account_id TEXT NOT NULL,
     credit_account_id TEXT NOT NULL,
     amount INTEGER NOT NULL CHECK (amount >= 0),
     pending_id TEXT NOT NULL,
     user_data_128 TEXT NOT NULL,
     user_data_64 TEXT NOT NULL,
     user_data_32 INTEGER NOT NULL,
     ledger INTEGER NOT NULL,
     code INTEGER NOT NULL,
     flags INTEGER NOT NULL,
     timestamp INTEGER NOT NULL UNIQUE)",
  -- At most one post or void per pending transfer (flags 4: post, 8: void).
  "CREATE UNIQUE INDEX IF NOT EXISTS transfers_resolution ON transfers(pending_id) WHERE (flags & 12) <> 0",
  "CREATE INDEX IF NOT EXISTS transfers_by_debit ON transfers(debit_account_id, timestamp)",
  "CREATE INDEX IF NOT EXISTS transfers_by_credit ON transfers(credit_account_id, timestamp)",
  "CREATE TABLE IF NOT EXISTS failed_transfers (id TEXT PRIMARY KEY)",
  "CREATE TABLE IF NOT EXISTS meta (k INTEGER PRIMARY KEY CHECK (k = 0), version INTEGER NOT NULL)",
  "INSERT OR IGNORE INTO meta (k, version) VALUES (0, 0)",
  "CREATE TABLE IF NOT EXISTS commit_guard (expected INTEGER NOT NULL, actual INTEGER NOT NULL,
     CHECK (expected = actual))"]

/-! ## Reading rows -/

/-- A decimal column (read with `CAST(… AS TEXT)`), or a number. -/
def nat (d : Data) (k : String) : Nat :=
  match d.field k with
  | .string s => s.toNat?.getD 0
  | .number n => n.toUInt64.toNat
  | .bigint i => i.toNat
  | _ => 0

def accountFlagsOf (n : Nat) : AccountFlags :=
  { linked := n &&& 1 != 0, debitsMustNotExceedCredits := n &&& 2 != 0, creditsMustNotExceedDebits := n &&& 4 != 0 }

def transferFlagsOf (n : Nat) : TransferFlags :=
  { linked := n &&& 1 != 0, pending := n &&& 2 != 0, postPendingTransfer := n &&& 4 != 0,
    voidPendingTransfer := n &&& 8 != 0 }

def _root_.Ledger.AccountFlags.bits (f : AccountFlags) : Nat :=
  (if f.linked then 1 else 0) + (if f.debitsMustNotExceedCredits then 2 else 0) +
  (if f.creditsMustNotExceedDebits then 4 else 0)

def _root_.Ledger.TransferFlags.bits (f : TransferFlags) : Nat :=
  (if f.linked then 1 else 0) + (if f.pending then 2 else 0) + (if f.postPendingTransfer then 4 else 0) +
  (if f.voidPendingTransfer then 8 else 0)

def accountRow (d : Data) : Account :=
  { id := nat d "id", debitsPending := nat d "debits_pending", debitsPosted := nat d "debits_posted",
    creditsPending := nat d "credits_pending", creditsPosted := nat d "credits_posted",
    userData128 := nat d "user_data_128", userData64 := nat d "user_data_64", userData32 := nat d "user_data_32",
    ledger := nat d "ledger", code := nat d "code", flags := accountFlagsOf (nat d "flags"),
    timestamp := nat d "timestamp" }

def transferRow (d : Data) : Transfer :=
  { id := nat d "id", debitAccountId := nat d "debit_account_id", creditAccountId := nat d "credit_account_id",
    amount := nat d "amount", pendingId := nat d "pending_id", userData128 := nat d "user_data_128",
    userData64 := nat d "user_data_64", userData32 := nat d "user_data_32", ledger := nat d "ledger",
    code := nat d "code", flags := transferFlagsOf (nat d "flags"), timestamp := nat d "timestamp" }

/-- Every column, numbers as decimal text. -/
def accountCols : String :=
  "id, CAST(debits_pending AS TEXT) AS debits_pending, CAST(debits_posted AS TEXT) AS debits_posted,
   CAST(credits_pending AS TEXT) AS credits_pending, CAST(credits_posted AS TEXT) AS credits_posted,
   user_data_128, user_data_64, CAST(user_data_32 AS TEXT) AS user_data_32, CAST(ledger AS TEXT) AS ledger,
   CAST(code AS TEXT) AS code, CAST(flags AS TEXT) AS flags, CAST(timestamp AS TEXT) AS timestamp"

def transferCols : String :=
  "id, debit_account_id, credit_account_id, CAST(amount AS TEXT) AS amount, pending_id, user_data_128,
   user_data_64, CAST(user_data_32 AS TEXT) AS user_data_32, CAST(ledger AS TEXT) AS ledger,
   CAST(code AS TEXT) AS code, CAST(flags AS TEXT) AS flags, CAST(timestamp AS TEXT) AS timestamp"

/-- A number as a parameter: decimal text (exact for every width). -/
def dec (n : Nat) : Data := toJS (toString n)

/-! ## Queries -/

/-- The queries of `Ledger.Reads`. -/
def reads (db : Sql) : Reads Async where
  account id := do
    return (← db.all s!"SELECT {accountCols} FROM accounts WHERE id = ?" #[dec id])[0]?.map accountRow
  transfer id := do
    return (← db.all s!"SELECT {transferCols} FROM transfers WHERE id = ?" #[dec id])[0]?.map transferRow
  resolution id := do
    return (← db.all s!"SELECT {transferCols} FROM transfers WHERE pending_id = ? AND (flags & 12) <> 0"
      #[dec id])[0]?.map transferRow
  failed id := do
    return !(← db.all "SELECT id FROM failed_transfers WHERE id = ?" #[dec id]).isEmpty

/-- The database's version: incremented by every commit. -/
def version (db : Sql) : Async Nat := do
  return (← db.all "SELECT CAST(version AS TEXT) AS version FROM meta WHERE k = 0" #[])[0]?.map (nat · "version")
    |>.getD 0

/-- The statements of a commit: the version check, then each account's
newest version (insert or update), each new transfer and each failed id. -/
def commitStatements (expected : Nat) (w : Writes) : Array (String × Array Data) := Id.run do
  let mut out : Array (String × Array Data) := #[
    ("INSERT INTO commit_guard (expected, actual) SELECT ?, version FROM meta WHERE k = 0", #[dec expected]),
    ("DELETE FROM commit_guard", #[]),
    ("UPDATE meta SET version = version + 1 WHERE k = 0", #[])]
  let mut seen : List Nat := []
  -- Oldest first, so each account is written once, at its newest version.
  for a in w.accounts do
    unless seen.contains a.id do
      seen := a.id :: seen
      out := out.push ("INSERT INTO accounts (id, debits_pending, debits_posted, credits_pending, credits_posted,
          user_data_128, user_data_64, user_data_32, ledger, code, flags, timestamp)
          VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
          ON CONFLICT (id) DO UPDATE SET debits_pending = excluded.debits_pending,
            debits_posted = excluded.debits_posted, credits_pending = excluded.credits_pending,
            credits_posted = excluded.credits_posted",
        #[dec a.id, dec a.debitsPending, dec a.debitsPosted, dec a.creditsPending, dec a.creditsPosted,
          dec a.userData128, dec a.userData64, dec a.userData32, dec a.ledger, dec a.code, dec a.flags.bits,
          dec a.timestamp])
  for t in w.transfers do
    out := out.push ("INSERT INTO transfers (id, debit_account_id, credit_account_id, amount, pending_id,
        user_data_128, user_data_64, user_data_32, ledger, code, flags, timestamp)
        VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)",
      #[dec t.id, dec t.debitAccountId, dec t.creditAccountId, dec t.amount, dec t.pendingId, dec t.userData128,
        dec t.userData64, dec t.userData32, dec t.ledger, dec t.code, dec t.flags.bits, dec t.timestamp])
  for id in w.failed do
    out := out.push ("INSERT OR IGNORE INTO failed_transfers (id) VALUES (?)", #[dec id])
  return out

/-- Ledger's store on a SQLite connection. `commit` is unused by the server
(which commits with a version check, `Server/App.lean`) but is the plain
commit for tools and tests. -/
def store (db : Sql) : Store Async where
  reads := reads db
  lastTimestamp := do
    let rows ← db.all "SELECT CAST(max(m) AS TEXT) AS m FROM (SELECT max(timestamp) AS m FROM accounts
      UNION ALL SELECT max(timestamp) AS m FROM transfers)" #[]
    return rows[0]?.map (nat · "m") |>.getD 0
  commit w := do db.batch (commitStatements (← version db) w)
  accounts ledger := do
    match ledger with
    | some l => return (← db.all s!"SELECT {accountCols} FROM accounts WHERE ledger = ? ORDER BY timestamp"
        #[dec l]).toList.map accountRow
    | none => return (← db.all s!"SELECT {accountCols} FROM accounts ORDER BY timestamp" #[]).toList.map accountRow
  transfers after limit := do
    return (← db.all s!"SELECT {transferCols} FROM transfers WHERE timestamp > ? ORDER BY timestamp LIMIT ?"
      #[dec after, toJS limit]).toList.map transferRow
  transfersOf id := do
    return (← db.all s!"SELECT {transferCols} FROM transfers WHERE debit_account_id = ? OR credit_account_id = ?
      ORDER BY timestamp" #[dec id, dec id]).toList.map transferRow
  snapshot := do
    -- One read transaction where the store has them; elsewhere the version is checked around the reads.
    let read : Async (List Account × List Transfer) := do
      let accounts := (← db.all s!"SELECT {accountCols} FROM accounts ORDER BY timestamp" #[]).toList.map accountRow
      let transfers := (← db.all s!"SELECT {transferCols} FROM transfers ORDER BY timestamp" #[]).toList.map transferRow
      return (accounts, transfers)
    for _ in [0:100] do
      let v ← version db
      let r ← read
      if (← version db) == v then return r
    read

/-- Creates the tables (each binding module runs this once at start). -/
def migrate (db : Sql) : Async Unit := do
  for stmt in schema do db.run stmt #[]

end Ledger.Server
