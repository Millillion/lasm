/- The deterministic simulation of Porter (test/dst.mjs, `npm run test:dst`):
`sim WORLD.mjs [options]`.

What runs here is Porter's own server code, compiled by Lasm: its setup
(the configuration, the client secrets' hashes, the signing keys stored in
the database), every endpoint (`Porter.handle`), the SQL layer and its
version-checked commit with retries (`runRequest`), on the world's
simulated SQLite database, with Web Crypto. What the world supplies, from one
seed, is each request's clock reading and its four fresh random values (the
server draws them from the clock and Web Crypto; here they come from the
world, so a run replays), the network, the database's faults and the
users and relying parties (test/dst/world.mjs, on scripts/sim).

As in Ledger's simulation, a request is served alone (`request`) or racing
others (`race`: all read before any commits, each at its own instance's
clock, then they commit in the world's order with the version check, and a
request whose commit found the version changed runs again; one whose commit
landed but threw is recognised by its commit receipt). -/
import Porter
import Server.App
import Lasm.JS
open Lasm.JS Porter

namespace Porter.Sim

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

def call (w : Value) (name : String) (args : Array Data) : IO Unit := do
  let _ ← w.callMethod name args Data

def simSql (s : Value) : Porter.Server.Sql where
  all sql params := do
    let rows ← s.callMethod "all" #[toJS sql, .array params] (Array Data)
    return rows
  run sql params := do
    let _ ← s.callMethod "run" #[toJS sql, .array params] Data
  batch stmts := do
    let _ ← s.callMethod "batch" #[.array (stmts.map fun (q, p) => Data.array #[toJS q, .array p])] Data

/-- The request's headers: an array of `[name, value]`. -/
def headers (d : Data) : List (String × String) :=
  match d.field "headers" with
  | .array xs => xs.toList.filterMap fun
    | .array kv => match (kv[0]? : Option Data), (kv[1]? : Option Data) with
      | some (.string k), some (.string v) => some (k, v)
      | _, _ => none
    | _ => none
  | _ => []

/-- Porter's view of a request, as `serveRequest` builds it. -/
def request (d : Data) : Porter.Request :=
  let fr : Lasm.Fetch.Request := { method := str d "method", url := str d "url", body := (str d "body").toUTF8 }
  { method := fr.method, path := fr.segments, query := fr.query, headers := headers d, body := fr.text }

/-- The clock reading and fresh values the world chose for a request. -/
def ctx (d : Data) : Porter.Ctx :=
  { now := nat d "now", fresh := { a := str d "a", b := str d "b", c := str d "c", d := str d "d" } }

def answer (w : Value) (env : Porter.Server.Env) (d : Data) (reply : Porter.Reply) : IO Unit := do
  let wire := reply.render env.cfg
  call w "reply" #[toJS (nat d "id"), toJS wire.status, toJS (wire.headers.map fun (k, v) => #[k, v]), toJS wire.body]

/-- What one request read before committing (`race`). -/
structure Read where
  req : Porter.Request
  ctx : Porter.Ctx
  version : Nat
  reply : Porter.Reply
  writes : List Porter.Write

def commitRead (env : Porter.Server.Env) (r : Read) : Async Porter.Reply := do
  if r.writes.isEmpty then return r.reply
  match ← Porter.Server.commitRequest env r.ctx r.version r.reply r.writes with
  | some reply => return reply
  | none => Porter.Server.runRequest env r.ctx r.req 20

def unavailable : Porter.Reply := { status := 503 }

def handle (w : Value) (env : Porter.Server.Env) (k : String) (ev : Data) : Async Unit := do
  match k with
  | "request" =>
    let reply ← try Porter.Server.runRequest env (ctx ev) (request ev) 20 catch _ => pure unavailable
    answer w env ev reply
  | "race" =>
    let reqs := match ev.field "reqs" with
      | .array xs => xs
      | _ => #[]
    let mut reads : Array (Option Read) := #[]
    for d in reqs do
      let one : Async Read := do
        let req := request d
        let c := ctx d
        let version ← Porter.Server.version env.db
        let (reply, writes) ← Porter.handle env.cfg env.crypto (Porter.Server.reads env.db) c req
        return { req, ctx := c, version, reply, writes }
      let r ← try (some <$> one) catch _ => pure none
      reads := reads.push r
    for i in nats ev "order" do
      match reqs[i]?, reads[i]? with
      | some d, some (some r) =>
        let reply ← try commitRead env r catch _ => pure unavailable
        answer w env d reply
      | some d, _ => answer w env d unavailable
      | none, _ => pure ()
  | _ => call w "fail" #[toJS s!"unknown event {k}"]

def runSeed (w : Value) : Async Unit := do
  let db := simSql (← w.callMethod "store" #[] Value)
  Porter.Server.migrate db
  let getEnv (key : String) : IO (Option String) := w.callMethod "env" #[toJS key] (Option String)
  let env ← Porter.Server.setup db getEnv
  call w "ready" #[toJS env.cfg.issuer]
  repeat
    let ev ← w.callMethod "next" #[] Data
    let k := str ev "k"
    if k == "end" then break
    try handle w env k ev
    catch e => call w "fail" #[toJS s!"{k}: the Lean side threw: {e}"]

end Porter.Sim

def main (args : List String) : IO UInt32 := do
  let some path := args.head? | IO.eprintln "usage: sim WORLD.mjs [options]"; return 2
  let w ← require path
  let go : Async Unit := do
    repeat
      let cfg ← w.callMethod "begin" #[] Data
      match cfg with
      | .object _ => Porter.Sim.runSeed w
      | _ => break
  go.block
  let code ← w.callMethod "exitCode" #[] Nat
  return code.toUInt32
