/-
The database layer: every SQL statement Porter runs, and `Porter.Reads`
built from them, on SQLite (Node, Bun, Deno) or D1 (Workers) through `Sql`,
three functions each binding module provides. Every value is bound as a
parameter (`?`), never spliced into SQL text.

Each `Write` is one statement, and each statement does to its table what
`DB.apply` does to the model's list (`Proofs/Model.lean`): inserts are
`INSERT OR IGNORE` (a row with the same hash stays as it was), and a used
code or a rotated refresh token is never unmarked.

Concurrency. A request reads, then commits its writes in one transaction
(`batch`) that first checks the database's `version` is still the one read
before the request's reads (a `CHECK` constraint fails otherwise, rolling
the transaction back), then increments it; the server then runs the request
again. So two requests can never both redeem one code or both rotate one
refresh token, on any store.
-/
import Lasm.JS
import Porter.Store
import Porter.Request
open Lasm.JS

namespace Porter.Server

/-- A SQLite connection, as a binding module provides it. -/
structure Sql where
  /-- The rows of a query, as plain objects. -/
  all : String → Array Data → Async (Array Data)
  /-- One statement that returns no rows. -/
  run : String → Array Data → Async Unit
  /-- Several statements, all or none: a failing statement rolls back the others and throws. -/
  batch : Array (String × Array Data) → Async Unit

def grantCols : String := "client TEXT NOT NULL, user TEXT NOT NULL, scope TEXT NOT NULL,
  auth_time INTEGER NOT NULL, sid TEXT NOT NULL, nonce TEXT"

/-- The tables, created on first start. Every statement is idempotent. -/
def schema : List String := [
  s!"CREATE TABLE IF NOT EXISTS codes (hash TEXT PRIMARY KEY, {grantCols}, redirect_uri TEXT NOT NULL,
     challenge TEXT NOT NULL, family TEXT NOT NULL, expires INTEGER NOT NULL, used INTEGER NOT NULL)",
  s!"CREATE TABLE IF NOT EXISTS refresh_tokens (hash TEXT PRIMARY KEY, family TEXT NOT NULL, {grantCols},
     expires INTEGER NOT NULL, rotated INTEGER NOT NULL)",
  s!"CREATE TABLE IF NOT EXISTS access_tokens (hash TEXT PRIMARY KEY, family TEXT NOT NULL, {grantCols},
     expires INTEGER NOT NULL)",
  "CREATE TABLE IF NOT EXISTS revoked_families (family TEXT PRIMARY KEY)",
  "CREATE TABLE IF NOT EXISTS sessions (hash TEXT PRIMARY KEY, user TEXT NOT NULL, sid TEXT NOT NULL,
     auth_time INTEGER NOT NULL, expires INTEGER NOT NULL)",
  "CREATE TABLE IF NOT EXISTS interactions (hash TEXT PRIMARY KEY, client TEXT NOT NULL,
     redirect_uri TEXT NOT NULL, scope TEXT NOT NULL, state TEXT, nonce TEXT, challenge TEXT NOT NULL,
     prompt_none INTEGER NOT NULL, prompt_login INTEGER NOT NULL, prompt_consent INTEGER NOT NULL,
     max_age INTEGER, login_user TEXT, login_sid TEXT, login_auth_time INTEGER, expires INTEGER NOT NULL)",
  "CREATE TABLE IF NOT EXISTS consents (user TEXT NOT NULL, client TEXT NOT NULL, scope TEXT NOT NULL,
     PRIMARY KEY (user, client, scope))",
  "CREATE TABLE IF NOT EXISTS keys (alg TEXT PRIMARY KEY, jwk TEXT NOT NULL)",
  "CREATE TABLE IF NOT EXISTS meta (k INTEGER PRIMARY KEY CHECK (k = 0), version INTEGER NOT NULL)",
  "INSERT OR IGNORE INTO meta (k, version) VALUES (0, 0)",
  "CREATE TABLE IF NOT EXISTS commit_guard (expected INTEGER NOT NULL, actual INTEGER NOT NULL,
     CHECK (expected = actual))"]

/-! ## Rows -/

def nat (d : Data) (k : String) : Nat :=
  match d.field k with
  | .string s => s.toNat?.getD 0
  | .number n => n.toUInt64.toNat
  | .bigint i => i.toNat
  | _ => 0

def str (d : Data) (k : String) : String :=
  match d.field k with
  | .string s => s
  | _ => ""

def optStr (d : Data) (k : String) : Option String :=
  match d.field k with
  | .string s => some s
  | _ => none

def bool (d : Data) (k : String) : Bool := nat d k != 0

def num (n : Nat) : Data := toJS n
def opt (s : Option String) : Data := match s with | some s => toJS s | none => .null
def flag (b : Bool) : Data := toJS (if b then 1 else 0 : Nat)
def scopeText (s : List String) : String := " ".intercalate s

def grantRow (d : Data) : Grant :=
  { client := str d "client", user := str d "user", scope := Porter.splitScope (str d "scope"),
    authTime := nat d "auth_time", sid := str d "sid", nonce := optStr d "nonce" }

def grantParams (g : Grant) : Array Data :=
  #[toJS g.client, toJS g.user, toJS (scopeText g.scope), num g.authTime, toJS g.sid, opt g.nonce]

def codeRow (d : Data) : Code :=
  { hash := str d "hash", grant := grantRow d, redirectUri := str d "redirect_uri", challenge := str d "challenge",
    family := str d "family", expires := nat d "expires", used := bool d "used" }

def refreshRow (d : Data) : Refresh :=
  { hash := str d "hash", family := str d "family", grant := grantRow d, expires := nat d "expires",
    rotated := bool d "rotated" }

def accessRow (d : Data) : Access :=
  { hash := str d "hash", family := str d "family", grant := grantRow d, expires := nat d "expires" }

def sessionRow (d : Data) : Session :=
  { hash := str d "hash", user := str d "user", sid := str d "sid", authTime := nat d "auth_time",
    expires := nat d "expires" }

def interactionRow (d : Data) : Interaction :=
  { hash := str d "hash",
    request := { client := str d "client", redirectUri := str d "redirect_uri", scope := Porter.splitScope (str d "scope"),
                 state := optStr d "state", nonce := optStr d "nonce", challenge := str d "challenge",
                 promptNone := bool d "prompt_none", promptLogin := bool d "prompt_login",
                 promptConsent := bool d "prompt_consent",
                 maxAge := match d.field "max_age" with | .number n => some n.toUInt64.toNat | _ => none },
    login := match optStr d "login_user", optStr d "login_sid" with
      | some user, some sid => some { user, sid, authTime := nat d "login_auth_time" }
      | _, _ => none,
    expires := nat d "expires" }

/-! ## Queries and writes -/

def one {α : Type} (rows : Array Data) (f : Data → α) : Option α := rows[0]?.map f

/-- The queries of `Porter.Reads`. -/
def reads (db : Sql) : Reads Async where
  code h := do return one (← db.all "SELECT * FROM codes WHERE hash = ?" #[toJS h]) codeRow
  refresh h := do return one (← db.all "SELECT * FROM refresh_tokens WHERE hash = ?" #[toJS h]) refreshRow
  access h := do return one (← db.all "SELECT * FROM access_tokens WHERE hash = ?" #[toJS h]) accessRow
  revoked f := do return !(← db.all "SELECT family FROM revoked_families WHERE family = ?" #[toJS f]).isEmpty
  session h := do return one (← db.all "SELECT * FROM sessions WHERE hash = ?" #[toJS h]) sessionRow
  interaction h := do return one (← db.all "SELECT * FROM interactions WHERE hash = ?" #[toJS h]) interactionRow
  consent u c := do
    return (← db.all "SELECT scope FROM consents WHERE user = ? AND client = ?" #[toJS u, toJS c]).toList.map
      (str · "scope")

/-- The statements of one write. -/
def statements : Write → List (String × Array Data)
  | .addCode k =>
    [("INSERT OR IGNORE INTO codes (hash, client, user, scope, auth_time, sid, nonce, redirect_uri, challenge,
        family, expires, used) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)",
      #[toJS k.hash] ++ grantParams k.grant ++ #[toJS k.redirectUri, toJS k.challenge, toJS k.family,
        num k.expires, flag k.used])]
  | .useCode h => [("UPDATE codes SET used = 1 WHERE hash = ?", #[toJS h])]
  | .addRefresh r =>
    [("INSERT OR IGNORE INTO refresh_tokens (hash, family, client, user, scope, auth_time, sid, nonce, expires,
        rotated) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)",
      #[toJS r.hash, toJS r.family] ++ grantParams r.grant ++ #[num r.expires, flag r.rotated])]
  | .rotate h => [("UPDATE refresh_tokens SET rotated = 1 WHERE hash = ?", #[toJS h])]
  | .addAccess a =>
    [("INSERT OR IGNORE INTO access_tokens (hash, family, client, user, scope, auth_time, sid, nonce, expires)
        VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)",
      #[toJS a.hash, toJS a.family] ++ grantParams a.grant ++ #[num a.expires])]
  | .revoke f => [("INSERT OR IGNORE INTO revoked_families (family) VALUES (?)", #[toJS f])]
  | .addSession s =>
    [("INSERT OR IGNORE INTO sessions (hash, user, sid, auth_time, expires) VALUES (?, ?, ?, ?, ?)",
      #[toJS s.hash, toJS s.user, toJS s.sid, num s.authTime, num s.expires])]
  | .endSession h => [("DELETE FROM sessions WHERE hash = ?", #[toJS h])]
  | .addInteraction i =>
    let a := i.request
    [("INSERT OR IGNORE INTO interactions (hash, client, redirect_uri, scope, state, nonce, challenge, prompt_none,
        prompt_login, prompt_consent, max_age, login_user, login_sid, login_auth_time, expires)
        VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)",
      #[toJS i.hash, toJS a.client, toJS a.redirectUri, toJS (scopeText a.scope), opt a.state, opt a.nonce,
        toJS a.challenge, flag a.promptNone, flag a.promptLogin, flag a.promptConsent,
        (match a.maxAge with | some n => num n | none => .null),
        opt (i.login.map (·.user)), opt (i.login.map (·.sid)),
        (match i.login with | some l => num l.authTime | none => .null), num i.expires])]
  | .signIn h l =>
    [("UPDATE interactions SET login_user = ?, login_sid = ?, login_auth_time = ? WHERE hash = ?",
      #[toJS l.user, toJS l.sid, num l.authTime, toJS h])]
  | .endInteraction h => [("DELETE FROM interactions WHERE hash = ?", #[toJS h])]
  | .consent u c scopes =>
    scopes.map fun s => ("INSERT OR IGNORE INTO consents (user, client, scope) VALUES (?, ?, ?)",
      #[toJS u, toJS c, toJS s])

/-- The database's version: incremented by every commit. -/
def version (db : Sql) : Async Nat := do
  return (← db.all "SELECT CAST(version AS TEXT) AS version FROM meta WHERE k = 0" #[])[0]?.map (nat · "version")
    |>.getD 0

/-- A commit: the version check, then every write's statements, in order. -/
def commitStatements (expected : Nat) (ws : List Write) : Array (String × Array Data) :=
  #[("INSERT INTO commit_guard (expected, actual) SELECT ?, version FROM meta WHERE k = 0", #[num expected]),
    ("DELETE FROM commit_guard", #[]),
    ("UPDATE meta SET version = version + 1 WHERE k = 0", #[])] ++
  (ws.flatMap statements).toArray

/-- Creates the tables (each binding module runs this once at start). -/
def migrate (db : Sql) : Async Unit := do
  for stmt in schema do db.run stmt #[]

end Porter.Server
