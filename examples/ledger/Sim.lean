/- The deterministic simulation of Ledger (test/dst.mjs, `npm run test:dst`):
`sim WORLD.mjs [options]`.

What runs here is Ledger's own server code, compiled by Lasm: the HTTP
routes (`Ledger.Server.site`), the rules (`Api.handle`), the SQL layer and
its version-checked commit with retries (`runRequest`), on the world's
simulated SQLite database, at the world's simulated time (`Date.now`, which
`nowNs` reads, is the world's clock). The world (test/dst/world.mjs, on
scripts/sim) simulates the clients, the network, the database's faults and
the server's crashes, from one seed.

Two ways a request is served:
- `request`: one at a time, through `site`, as the Node server does with its
  writers' permit;
- `race`: several requests at once, as on Workers or with several server
  processes (no permit): every request reads (the database's version, then
  `Api.handle`) before any commits, at its own instance's clock, then they
  commit in the world's order with the version check, and a request whose
  commit found the version changed runs again through `runRequest`, as the
  server does. So the version check is tested under interleavings the world
  chooses, with Ledger's own reads, rules and commit statements.

`audit`: the auditor (`Audit.verify`) on a snapshot of the database: every
balance is the journal's replay, every ledger balances.

Where it runs: with the world's path as its argument, on Node (`npm run
build:sim`), the world is `require`d into the same process and every call to
it is synchronous. Built for Workers or a browser (`npm run build:sim-workers`,
`build:sim-browser`; test/dst.mjs --target), the program publishes a handler
(`exportDefault`); scripts/sim/remote.mjs connects it to the world running in
Node and calls it, and every call to the world is awaited. The world and the
seeds are the same, so a seed's trace is the same on every target. -/
import Ledger
import Server.App
import Lasm.JS
open Lasm.JS Ledger

namespace Ledger.Sim

def str (d : Data) (k : String) : String :=
  match d.field k with
  | .string s => s
  | _ => ""

def nat (d : Data) (k : String) : Nat :=
  match d.field k with
  | .number n => n.toUInt64.toNat
  | .string s => s.toNat?.getD 0
  | _ => 0

def nats (d : Data) (k : String) : Array Nat :=
  match d.field k with
  | .array xs => xs.map fun
    | .number n => n.toUInt64.toNat
    | _ => 0
  | _ => #[]

/-- A JavaScript object of the world: in this process (`remote := false`) or
a stand-in for one in the Node process (scripts/sim/remote.mjs), whose
methods return promises. -/
structure Obj where
  v : Value
  remote : Bool

/-- `o.name(...args)`, awaited when the object is remote. -/
def Obj.call (o : Obj) (name : String) (args : Array Data) (α : Type := Data) [FromJS α] : Async α :=
  if o.remote then o.v.callMethodAwait name args α
  else do
    let x ← o.v.callMethod name args α
    pure x

def call (w : Obj) (name : String) (args : Array Data) : Async Unit := do
  let _ ← w.call name args Data

/-- The world's simulated SQLite, as `Sql`. -/
def simSql (s : Obj) : Ledger.Server.Sql where
  all sql params := do
    let rows ← s.call "all" #[toJS sql, .array params] (Array Data)
    return rows
  run sql params := do
    let _ ← s.call "run" #[toJS sql, .array params] Data
  batch stmts := do
    let _ ← s.call "batch" #[.array (stmts.map fun (q, p) => Data.array #[toJS q, .array p])] Data

def fetchRequest (d : Data) : Ledger.Server.Web.Request :=
  { method := str d "method", url := str d "url", body := (str d "body").toUTF8 }

/-- The API's view of a request under `/api`. -/
def apiRequest (r : Ledger.Server.Web.Request) : Option Ledger.Request :=
  match r.segments with
  | "api" :: path => some { method := r.method, path, query := r.queryParams, body := r.text }
  | _ => none

def answer (w : Obj) (d : Data) (status : Nat) (body : String) : Async Unit :=
  call w "reply" #[toJS (nat d "id"), toJS status, toJS body]

/-- What one request read before committing (`race`). -/
structure Read where
  req : Ledger.Request
  version : Nat
  reply : Ledger.Reply
  writes : Ledger.Writes

/-- Commits a request's writes with the version check, as `runRequest` does,
then runs it again through `runRequest` if the version had changed. -/
def commitRead (db : Ledger.Server.Sql) (r : Read) : Async Ledger.Reply := do
  if Ledger.Server.isEmpty r.writes then return r.reply
  let ok ← try db.batch (Ledger.Server.commitStatements r.version r.writes); pure true catch _ => pure false
  if ok then return r.reply
  if (← Ledger.Server.version db) != r.version then Ledger.Server.runRequest db r.req 50
  else return Ledger.Reply.error 500 "the database rejected the writes"

def handle (w : Obj) (db : Ledger.Server.Sql) (k : String) (ev : Data) : Async Unit := do
  match k with
  | "request" =>
    let resp ← try Ledger.Server.site none db (fetchRequest ev) catch e => pure ({ status := 500, body := s!"\{\"error\":\"{e}\"}".toUTF8 } : Ledger.Server.Web.Response)
    answer w ev resp.status.toNat ((String.fromUTF8? resp.body).getD "")
  | "race" =>
    let reqs := match ev.field "reqs" with
      | .array xs => xs
      | _ => #[]
    -- Every request reads first, each at its own instance's clock.
    let mut reads : Array (Option Read) := #[]
    for d in reqs do
      let one : Async (Option Read) := do
        match apiRequest (fetchRequest d) with
        | none => return none
        | some req =>
          let version ← Ledger.Server.version db
          let (reply, writes) ← Ledger.Api.handle (Ledger.Server.store db) (nat d "now") req
          return some { req, version, reply, writes }
      let r ← try one catch _ => pure none
      reads := reads.push r
    -- Then they commit, in the world's order.
    for i in nats ev "order" do
      match reqs[i]?, reads[i]? with
      | some d, some (some r) =>
        let reply ← try commitRead db r catch e => pure (Ledger.Reply.error 500 s!"{e}")
        answer w d reply.status reply.body
      | some d, _ => answer w d 500 "{\"error\":\"the request failed\"}"
      | none, _ => pure ()
  | "audit" =>
    let (accounts, transfers) ← (Ledger.Server.store db).snapshot
    let problems := Ledger.Audit.verify accounts transfers
    call w "audit" #[toJS problems, toJS accounts.length, toJS transfers.length]
  | _ => call w "fail" #[toJS s!"unknown event {k}"]

def runSeed (w : Obj) : Async Unit := do
  let db := simSql { v := ← w.call "store" #[] Value, remote := w.remote }
  Ledger.Server.migrate db
  repeat
    let ev ← w.call "next" #[] Data
    let k := str ev "k"
    if k == "end" then break
    try handle w db k ev
    catch e => call w "fail" #[toJS s!"{k}: the Lean side threw: {e}"]

/-- Every seed the world gives, then its exit status. -/
def runAll (w : Obj) : Async Nat := do
  repeat
    let cfg ← w.call "begin" #[] Data
    match cfg with
    | .object _ => runSeed w
    | _ => break
  w.call "exitCode" #[] Nat

end Ledger.Sim

def main (args : List String) : IO UInt32 := do
  match args.head? with
  | some path =>
    let code ← (Ledger.Sim.runAll { v := ← require path, remote := false }).block
    return code.toUInt32
  | none =>
    unless ← onEdge do
      IO.eprintln "usage: sim WORLD.mjs [options]"
      return 2
    -- Workers and browsers: scripts/sim/remote.mjs calls this handler once the
    -- world in Node is connected, and waits for its exit status.
    exportDefault (← Lasm.JS.Function.ofFn fun _ => do
      let code ← Ledger.Sim.runAll { v := ← (← global).get "lasmSimWorld", remote := true }
      return toJS code)
    return 0
