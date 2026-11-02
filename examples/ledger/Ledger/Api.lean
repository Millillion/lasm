/-
The HTTP API, written once against `Store m` for any monad `m`. The server
runs it with SQLite (`Server/`); the proofs run it on the model.

`handle` never writes: it returns the reply and the request's writes, and
the server commits the writes in one transaction before it sends the reply.

    POST /api/accounts             create_accounts: a JSON array of accounts → one status each
    POST /api/transfers            create_transfers: a JSON array of transfers → one status each
    GET  /api/accounts             every account, oldest first (?ledger=N for one ledger)
    GET  /api/accounts/:id         one account
    GET  /api/accounts/:id/transfers  the transfers that touch it, in journal order
    GET  /api/transfers            the journal, in order (?after=TIMESTAMP&limit=N, at most 1000)
    GET  /api/transfers/:id        one transfer
    GET  /api/journal              the whole journal as NDJSON, for `ledger verify`
-/
import Ledger.Rules
import Ledger.Json
open Lean

namespace Ledger

/-- An HTTP request, as the API sees it. -/
structure Request where
  method : String
  /-- The path's segments after `/api`: `["accounts", "7"]`. -/
  path : List String
  query : List (String × String) := []
  body : String := ""
  deriving Repr, Inhabited

/-- An HTTP response. -/
structure Reply where
  status : Nat
  contentType : String := "application/json"
  body : String
  deriving Repr, Inhabited

def Reply.json (j : Json) (status := 200) : Reply := { status, body := j.compress }
def Reply.error (status : Nat) (msg : String) : Reply := Reply.json (Wire.error msg) status

namespace Api

variable {m : Type → Type} [Monad m]

/-- A path segment or query value that is a decimal number. -/
def num? (s : String) : Option Nat := if !s.isEmpty && s.length ≤ 40 && s.all Char.isDigit then some s.toNat! else none

def query? (r : Request) (k : String) : Option String := (r.query.find? (·.1 == k)).map (·.2)

/-- One line of the exported journal. -/
def journalLine (kind : String) (j : Json) : String :=
  (Json.mkObj [("type", .str kind), ("data", j)]).compress

/-- The NDJSON export: every account (with its balances), then every transfer, in order. -/
def journal (accounts : List Account) (transfers : List Transfer) : String :=
  String.join ((accounts.map fun a => journalLine "account" (Wire.account a) ++ "\n") ++
    (transfers.map fun t => journalLine "transfer" (Wire.transfer t) ++ "\n"))

/-- The reply to a request that writes nothing: the reads, and every error. -/
def read (s : Store m) (r : Request) : m Reply := do
  match r.method, r.path with
  | "GET", ["accounts"] =>
    let ledger := (query? r "ledger").bind num?
    let accounts ← s.accounts ledger
    return Reply.json (.arr (accounts.map Wire.account).toArray)
  | "GET", ["accounts", id] =>
    match num? id with
    | none => return Reply.error 404 "no such account"
    | some i =>
      match ← s.reads.account i with
      | some a => return Reply.json (Wire.account a)
      | none => return Reply.error 404 "no such account"
  | "GET", ["accounts", id, "transfers"] =>
    match num? id with
    | none => return Reply.error 404 "no such account"
    | some i =>
      let ts ← s.transfersOf i
      return Reply.json (.arr (ts.map Wire.transfer).toArray)
  | "GET", ["transfers"] =>
    let after := ((query? r "after").bind num?).getD 0
    let limit := min 1000 (((query? r "limit").bind num?).getD 100)
    let ts ← s.transfers after limit
    return Reply.json (.arr (ts.map Wire.transfer).toArray)
  | "GET", ["transfers", id] =>
    match num? id with
    | none => return Reply.error 404 "no such transfer"
    | some i =>
      match ← s.reads.transfer i with
      | some t => return Reply.json (Wire.transfer t)
      | none => return Reply.error 404 "no such transfer"
  | "GET", ["journal"] =>
    let (accounts, transfers) ← s.snapshot
    return { status := 200, contentType := "application/x-ndjson", body := journal accounts transfers }
  | _, ["accounts"] | _, ["transfers"] => return Reply.error 405 "method not allowed"
  | _, _ => return Reply.error 404 "not found"

/-- The reply and the writes for a request at time `now`: the two create
endpoints run a batch; every other request only reads. -/
def handle (s : Store m) (now : Nat) (r : Request) : m (Reply × Writes) := do
  match r.method, r.path with
  | "POST", ["accounts"] =>
    match Wire.batch Wire.decodeNewAccount r.body with
    | .error e => return (Reply.error 400 e, {})
    | .ok batch =>
      let ts := Rules.firstTimestamp now (← s.lastTimestamp)
      let (rs, w) ← Rules.createAccounts s.reads ts batch
      return (Reply.json (Wire.results (rs.map (·.name))), w)
  | "POST", ["transfers"] =>
    match Wire.batch Wire.decodeNewTransfer r.body with
    | .error e => return (Reply.error 400 e, {})
    | .ok batch =>
      let ts := Rules.firstTimestamp now (← s.lastTimestamp)
      let (rs, w) ← Rules.createTransfers s.reads ts batch
      return (Reply.json (Wire.results (rs.map (·.name))), w)
  | _, _ => return (← read s r, {})

end Api
end Ledger
