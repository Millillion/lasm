/-
The server on every JavaScript target: `Ledger.Api.handle` (pure Lean,
written against `Store`) served with `Lasm.Fetch`, on a SQLite connection
from one of the binding modules.

Each request runs `Api.handle` on the database's queries, then commits its
writes with a version check (`Server/Sql.lean`): if another request committed
in between, the commit is rolled back and the request runs again from the
start, so every committed request saw the database exactly as it was when
it committed. Requests that only read never commit.
-/
import Lasm.Fetch
import Lasm.JS
import Ledger.Api
import Server.Sql
open Lasm.JS Lean

namespace Ledger.Server

/-- Nanoseconds since the epoch (`Date.now()` × 10^6). -/
def nowNs : IO Nat := do
  let ms ← (← (← global).get "Date").callMethod "now" #[] Float
  return ms.toUInt64.toNat * 1000000

def isEmpty (w : Writes) : Bool := w.accounts.isEmpty && w.transfers.isEmpty && w.failed.isEmpty

/-- Any origin may call the API (it has no cookies). -/
def cors : Array (String × String) := #[
  ("access-control-allow-origin", "*"),
  ("access-control-allow-headers", "content-type"),
  ("access-control-allow-methods", "GET, POST, OPTIONS")]

def response (r : Reply) : Lasm.Fetch.Response :=
  let base := Lasm.Fetch.Response.withBody r.body.toUTF8 r.contentType r.status.toUInt16
  { base with headers := base.headers ++ cors }

/-- Runs a request, committing its writes; a commit that finds the version
changed is retried (at most `fuel` times). -/
def runRequest (db : Sql) (r : Request) : Nat → Async Reply
  | 0 => return Reply.error 503 "too many concurrent writers; try again"
  | fuel + 1 => do
    let v ← version db
    let (reply, w) ← Api.handle (store db) (← nowNs) r
    if isEmpty w then return reply
    let committed ← try db.batch (commitStatements v w); pure true catch _ => pure false
    if committed then return reply
    else
      -- Either another commit came first (the version check failed), or the
      -- database rejected the writes; in both cases the database is unchanged.
      if (← version db) != v then runRequest db r fuel
      else return Reply.error 500 "the database rejected the writes"

/-- `/api/…`: the API. -/
def api (db : Sql) (req : Lasm.Fetch.Request) (path : List String) : Async Lasm.Fetch.Response := do
  if req.method == "OPTIONS" then return { status := 204, headers := cors }
  let r : Request := { method := if req.method == "HEAD" then "GET" else req.method, path,
                       query := req.queryParams, body := req.text }
  return response (← runRequest db r 50)

/-- The whole site: the API under `/api`. -/
def site (db : Sql) (req : Lasm.Fetch.Request) : Async Lasm.Fetch.Response := do
  match req.segments with
  | "api" :: path => api db req path
  | [] => return Lasm.Fetch.Response.text "Ledger: see /api/accounts and /api/transfers\n"
  | _ => return .notFound

/-- Serves Ledger on a SQL database (whose binding module created the tables). -/
def run (db : Sql) : IO Unit := Lasm.Fetch.serve (site db)

end Ledger.Server
