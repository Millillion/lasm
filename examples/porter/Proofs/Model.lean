/-
A model of Porter's database and platform. The tables are lists, and
`DB.reads` is the `Porter.Reads` whose every query does to the lists what its
SQL statement in `Server/Sql.lean` does to the tables; `DB.apply` is what the
commit does, one `Write` (one statement) at a time. The cryptography is any
functions at all: `Env` holds a hash `H`, a password check and a signature,
and every theorem holds for every `Env`.

The theorems run the real provider (`Porter.handle`) on this model. What
they rely on, and do not prove, is that each SQL statement does what its
model function does, that a commit is atomic and serialized (the version
check, `Server/Sql.lean`), and that the platform's SHA-256 and signatures
are what the server's Web Crypto computes (PROOFS.md, "What is trusted").
-/
import Porter.Api

namespace Porter.Proofs
open Porter

/-! In the model the monad is `Id`: a bind is an application, `pure` is the value. -/
@[simp] theorem id_pure {α : Type} (x : α) : (pure x : Id α) = x := rfl
@[simp] theorem id_bind {α β : Type} (x : Id α) (f : α → Id β) : (x >>= f) = f x := rfl
@[simp] theorem id_run {α : Type} (x : Id α) : Id.run x = x := rfl

/-- `INSERT OR IGNORE`: add a row unless a row with its key is there. -/
def insertOrIgnore {α β : Type} [DecidableEq β] (key : α → β) (rows : List α) (x : α) : List α :=
  if rows.any (key · = key x) then rows else rows ++ [x]

/-- The tables. -/
structure DB where
  codes : List Code := []
  refreshes : List Refresh := []
  accesses : List Access := []
  revoked : List String := []
  sessions : List Session := []
  interactions : List Interaction := []
  /-- (user, client, scope) -/
  consents : List (String × String × String) := []
  deriving Inhabited

namespace DB

def code? (D : DB) (h : String) : Option Code := D.codes.find? (·.hash = h)
def refresh? (D : DB) (h : String) : Option Refresh := D.refreshes.find? (·.hash = h)
def access? (D : DB) (h : String) : Option Access := D.accesses.find? (·.hash = h)
def session? (D : DB) (h : String) : Option Session := D.sessions.find? (·.hash = h)
def interaction? (D : DB) (h : String) : Option Interaction := D.interactions.find? (·.hash = h)
def consented (D : DB) (u c : String) : List String :=
  (D.consents.filter fun x => x.1 = u ∧ x.2.1 = c).map (·.2.2)

/-- The model of each query. -/
def reads (D : DB) : Reads Id where
  code h := D.code? h
  refresh h := D.refresh? h
  access h := D.access? h
  revoked f := D.revoked.contains f
  session h := D.session? h
  interaction h := D.interaction? h
  consent u c := D.consented u c

/-- One write: what its SQL statement does. -/
def write (D : DB) : Write → DB
  | .addCode k => { D with codes := insertOrIgnore (·.hash) D.codes k }
  | .useCode h => { D with codes := D.codes.map fun k => if k.hash = h then { k with used := true } else k }
  | .addRefresh r => { D with refreshes := insertOrIgnore (·.hash) D.refreshes r }
  | .rotate h => { D with refreshes := D.refreshes.map fun r => if r.hash = h then { r with rotated := true } else r }
  | .addAccess a => { D with accesses := insertOrIgnore (·.hash) D.accesses a }
  | .revoke f => { D with revoked := insertOrIgnore id D.revoked f }
  | .addSession s => { D with sessions := insertOrIgnore (·.hash) D.sessions s }
  | .endSession h => { D with sessions := D.sessions.filter (·.hash ≠ h) }
  | .addInteraction i => { D with interactions := insertOrIgnore (·.hash) D.interactions i }
  | .signIn h l => { D with interactions := D.interactions.map fun i => if i.hash = h then { i with login := some l } else i }
  | .endInteraction h => { D with interactions := D.interactions.filter (·.hash ≠ h) }
  | .consent u c scopes =>
    { D with consents := scopes.foldl (fun cs s => insertOrIgnore id cs (u, c, s)) D.consents }

/-- The commit: every write, in order. -/
def apply (D : DB) (ws : List Write) : DB := ws.foldl write D

end DB

/-- The platform, as any functions: `H` is SHA-256 (base64url), `check` the
password check, `S` the signature of a signing input. -/
structure Env where
  cfg : Config
  H : String → String
  check : String → String → Bool
  S : Alg → String → String

def Env.crypto (e : Env) : Crypto Id where
  sha256 s := e.H s
  checkPassword p h := e.check p h
  sign a s := e.S a s

/-- The reply and writes of request `r` at `ctx`, on database `D`. -/
def run (e : Env) (ctx : Ctx) (r : Request) (D : DB) : Reply × List Write :=
  Id.run (handle e.cfg e.crypto D.reads ctx r)

def reply (e : Env) (ctx : Ctx) (r : Request) (D : DB) : Reply := (run e ctx r D).1
def writes (e : Env) (ctx : Ctx) (r : Request) (D : DB) : List Write := (run e ctx r D).2

/-- The database after request `r`. -/
def after (e : Env) (ctx : Ctx) (r : Request) (D : DB) : DB := D.apply (writes e ctx r D)

/-- The database after a sequence of requests, each with its context. -/
def afterAll (e : Env) : DB → List (Ctx × Request) → DB
  | D, [] => D
  | D, (c, r) :: rest => afterAll e (after e c r D) rest

/-- The writes of every request of a sequence, in order. -/
def trace (e : Env) : DB → List (Ctx × Request) → List (List Write)
  | _, [] => []
  | D, (c, r) :: rest => writes e c r D :: trace e (after e c r D) rest

end Porter.Proofs
