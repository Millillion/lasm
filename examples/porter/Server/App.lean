/-
The server on every JavaScript target: `Porter.handle` (pure Lean, written
against `Reads` and `Crypto`) as an HTTP handler (`Server/Web.lean`), on a
SQL database from one of the binding modules, with Web Crypto. The entry
files serve it with each platform's own server (`Server/JsServe.lean`,
`Server/NodeServe.lean`).

Each request draws its clock reading and four random values, runs
`Porter.handle` on the database's queries, then commits its writes with a
version check (`Server/Sql.lean`): if another request committed in between,
the commit is rolled back and the request runs again from the start (with
the same random values), so every committed request saw the database exactly
as it was when it committed. Each commit also inserts a receipt, an id from
the request's random values, so a commit that landed but reported an error is
recognised and not run again (issue #138).
-/
import Lasm.JS
import Server.Assets
import Porter.Render
import Server.Sql
import Server.Crypto
import Server.Config
import Std.Sync.Semaphore
open Lasm.JS Lean Std.Async

namespace Porter.Server

/-- Seconds since the epoch. -/
def nowSeconds : IO Nat := do
  let ms ← (← (← global).get "Date").callMethod "now" #[] Float
  return ms.toUInt64.toNat / 1000

/-- Everything a request needs besides itself. -/
structure Env where
  cfg : Config
  db : Sql
  crypto : Porter.Crypto Async

/-- The signing keys: from the database, or generated on first start (the
first instance to store a key wins; every instance then reads the same one). -/
def keys (db : Sql) : Async (Crypto.Key × Crypto.Key) := do
  let load (alg : Alg) : Async Crypto.Key := do
    let read : Async (Option String) := do
      return (← db.all "SELECT jwk FROM keys WHERE alg = ?" #[toJS alg.name])[0]?.map (str · "jwk")
    match ← read with
    | some jwk => Crypto.loadKey alg jwk
    | none =>
      db.run "INSERT OR IGNORE INTO keys (alg, jwk) VALUES (?, ?)" #[toJS alg.name, toJS (← Crypto.generate alg)]
      match ← read with
      | some jwk => Crypto.loadKey alg jwk
      | none => throw (IO.userError "the signing key could not be stored")
  return (← load .ES256, ← load .EdDSA)

/-- Reads the configuration (`PORTER_CONFIG`, else the demo), hashes the
client secrets, and loads the keys. `issuer`: `ISSUER`, else the file's,
else `http://localhost:<PORT>`. -/
def setup (db : Sql) (getEnv' : String → IO (Option String)) : Async Env := do
  -- An empty variable counts as unset (a template may declare it empty).
  let getEnv (k : String) : IO (Option String) := do
    return (← getEnv' k).filter (· != "")
  let (fileIssuer, specs, users) ← match ← getEnv "PORTER_CONFIG" with
    | some text => IO.ofExcept ((Config.parse text).mapError (s!"PORTER_CONFIG: {·}"))
    | none => pure (none, Config.demoClients, Config.demoUsers)
  let port := (← getEnv "PORT").getD "3000"
  let issuer := (← getEnv "ISSUER").orElse (fun _ => fileIssuer) |>.getD s!"http://localhost:{port}"
  unless Config.validIssuer issuer do throw (IO.userError s!"the issuer {issuer} must be an origin, with no path")
  let mut clients : List Client := []
  for s in specs do
    let secretHash ← match s.secret with
      | some secret => some <$> Crypto.sha256 secret
      | none => pure none
    clients := clients ++ [{ s.client with secretHash }]
  let (es, ed) ← keys db
  let jwks := "{\"keys\":[" ++ es.publicJwk ++ "," ++ ed.publicJwk ++ "]}"
  let cfg : Config := { issuer, clients, users, dummyHash := Config.dummyHash, jwks, kidES256 := es.kid,
                        kidEdDSA := ed.kid }
  let crypto : Porter.Crypto Async := {
    sha256 := Crypto.sha256
    checkPassword := Crypto.checkPassword
    sign := fun alg input => Crypto.sign (match alg with | .ES256 => es | .EdDSA => ed) input }
  return { cfg, db, crypto }

/-- The request's commit receipt id: unique to the request (its four fresh
values) and the same on every rerun (a rerun reuses `ctx`), and no secret
(a SHA-256 of the fresh values, which are tokens, codes and cookies, not one
of them). -/
def receiptId (ctx : Ctx) : Async String :=
  Crypto.sha256 s!"porter-commit:{ctx.fresh.a}:{ctx.fresh.b}:{ctx.fresh.c}:{ctx.fresh.d}"

/-- Commits a request's writes (read at version `v`, answering `reply`) and
returns the reply, or `none` if the request must run again. A commit that
throws may have landed anyway (a lost reply from D1, a timeout after
`COMMIT`): its receipt decides (`Porter.afterFailedCommit`). If the receipt
is there, the commit landed and its reply stands; if not, a commit that
found the version changed runs the request again. If even the receipt
cannot be read, the version alone decides, as before receipts (the rerun
may then answer an error, but cannot commit: its receipt's insert fails). -/
def commitRequest (env : Env) (ctx : Ctx) (v : Nat) (reply : Reply) (w : List Write) : Async (Option Reply) := do
  let id ← receiptId ctx
  let committed ← try env.db.batch (commitStatements v id ctx.now w); pure true catch _ => pure false
  if committed then return some reply
  let landed ← try (some <$> receiptLanded env.db id) catch _ => pure none
  let moved ← match landed with
    | some true => pure false
    | _ => (· != v) <$> version env.db
  match afterFailedCommit landed moved with
  | .stand => return some reply
  | .rerun => return none
  | .fail => throw (IO.userError "the database rejected a commit")

/-- Runs a request, committing its writes (`commitRequest`); a commit that finds
the version changed is retried (at most `fuel` times). -/
def runRequest (env : Env) (ctx : Ctx) (r : Porter.Request) : Nat → Async Reply
  | 0 => return { status := 503 }
  | fuel + 1 => do
    let v ← version env.db
    let (reply, w) ← Porter.handle env.cfg env.crypto (reads env.db) ctx r
    if w.isEmpty then return reply
    match ← commitRequest env ctx v reply w with
    | some reply => return reply
    | none => runRequest env ctx r fuel

/-- Takes turns between requests that may write, within this process. -/
def exclusive {α : Type} (writers : Option Std.Semaphore) (act : Async α) : Async α := do
  match writers with
  | none => act
  | some w =>
    let _ ← await (← w.acquire).result?
    try act finally w.release

def toResponse (w : Wire) (head : Bool) : Web.Response :=
  { status := w.status.toUInt16, headers := w.headers.toArray, body := if head then .empty else w.body.toUTF8 }

/-- One HTTP request. -/
def serveRequest (env : Env) (writers : Option Std.Semaphore) (req : Web.Request) : Async Web.Response := do
  let head := req.method == "HEAD"
  let r : Porter.Request := { method := if head then "GET" else req.method, path := req.segments,
                              query := req.query, headers := req.headers.toList, body := req.text }
  let fresh : Fresh := { a := ← Crypto.fresh, b := ← Crypto.fresh, c := ← Crypto.fresh, d := ← Crypto.fresh }
  let ctx : Ctx := { now := ← nowSeconds, fresh }
  let reply ← try
      if r.method == "GET" && (r.path == [] || r.path == ["jwks"] || r.path == [".well-known", "openid-configuration"])
      then runRequest env ctx r 1
      else exclusive writers (runRequest env ctx r 20)
    catch e =>
      IO.eprintln s!"porter: {e}"
      return { status := 503, body := .empty }
  return toResponse (reply.render env.cfg) head

/-- Porter's HTTP handler on a SQL database (whose binding module created the
tables), with the browser app's files (`assets`: `embed_dir! "dist/public"`
in the entry file, served under `/ui/`). The configuration and the keys are read on the first request (on
Workers, the environment and the database exist only during a request), then
kept. `getEnv`: the environment variables (Workers passes them with each
request). `serializeWriters`: off on Cloudflare Workers, which does not let
one request wait on another's promise; the version check alone keeps commits
consistent there. -/
def handler (db : Sql) (assets : Web.Assets) (getEnv : String → IO (Option String) := fun k => IO.getEnv k)
    (serializeWriters := true) : IO Web.Handler := do
  let ready ← IO.mkRef (none : Option Env)
  let writers ← if serializeWriters then some <$> Std.Semaphore.new 1 else pure none
  return assets.wrap fun req => do
    let env ← match ← ready.get with
      | some env => pure env
      | none => do
        let env ← setup db getEnv
        ready.set (some env)
        pure env
    serveRequest env writers req

end Porter.Server
