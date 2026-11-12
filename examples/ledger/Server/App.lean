/-
The server on every JavaScript target: `Ledger.Api.handle` (pure Lean,
written against `Store`) as an HTTP handler (`Server/Web.lean`), on a SQLite
connection from one of the binding modules. The entry files serve it with
each platform's own server (`Server/JsServe.lean`, `Server/NodeServe.lean`).

Each request runs `Api.handle` on the database's queries, then commits its
writes with a version check (`Server/Sql.lean`): if another request committed
in between, the commit is rolled back and the request runs again from the
start, so every committed request saw the database exactly as it was when
it committed. Requests that only read never commit.
-/
import Lasm.JS
import Server.Assets
import Ledger.Api
import Server.Sql
import Std.Sync.Semaphore
open Lasm.JS Lean Std.Async

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

def response (r : Reply) : Web.Response :=
  let base := Web.Response.withBody r.body.toUTF8 r.contentType r.status.toUInt16
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

/-- Runs `act` holding the writers' permit (`run` makes one per process):
one create request at a time, since concurrent writers would otherwise keep
invalidating each other's reads and retry. The version check still guards
against writers in other processes or isolates. -/
def exclusive {α : Type} (writers : Option Std.Semaphore) (act : Async α) : Async α := do
  match writers with
  | none => act
  | some w =>
    let _ ← await (← w.acquire).result?
    try act finally w.release

/-- `/api/…`: the API. -/
def api (writers : Option Std.Semaphore) (db : Sql) (req : Web.Request) (path : List String) : Async Web.Response := do
  if req.method == "OPTIONS" then return { status := 204, headers := cors }
  let r : Request := { method := if req.method == "HEAD" then "GET" else req.method, path,
                       query := req.queryParams, body := req.text }
  let reply ← if r.method == "POST" then exclusive writers (runRequest db r 50) else runRequest db r 50
  return response reply

/-- The whole site: the API under `/api` (the page's files are served before this). -/
def site (writers : Option Std.Semaphore) (db : Sql) (req : Web.Request) : Async Web.Response := do
  match req.segments with
  | "api" :: path => api writers db req path
  | _ => return .notFound

/-- Ledger's HTTP handler on a SQL database (whose binding module created the
tables), with the browser page's files (`assets`: `embed_dir! "dist/public"`
in the entry file). `serializeWriters`: take turns between create requests
in this process (off on Cloudflare Workers, which does not let one request
wait on another's promise; there the version check alone keeps commits
consistent). -/
def handler (db : Sql) (assets : Web.Assets) (serializeWriters := true) : IO Web.Handler := do
  let writers ← if serializeWriters then some <$> Std.Semaphore.new 1 else pure none
  return assets.wrap (site writers db)

end Ledger.Server
