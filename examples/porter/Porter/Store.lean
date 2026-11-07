/-
What the provider needs from the outside world, as plain records of
functions over any monad `m`:

- `Reads m`, the database's queries, one function per SQL query. The server
  implements it with SQLite or D1 (`Server/Sql.lean`); the proofs with lists
  (`Proofs/Model.lean`).
- `Crypto m`, the platform's cryptography: SHA-256, the password check and
  the signature. The server implements it with Web Crypto (`Server/Crypto.lean`);
  the proofs hold for any functions (every theorem is stated for all of them).
- `Ctx`, the request's clock reading and four fresh random values, which the
  server draws before it runs a request.

The provider never writes. A request computes its `Write`s, and the server
commits them in one transaction after checking that no other request
committed since this one read (`Server/Sql.lean`), so the theorems, which are
about one request at a time, describe what the server does. A commit that
throws is decided by `afterFailedCommit`: one that landed anyway (its receipt
is in the database) is not run again.
-/
import Porter.Types

namespace Porter

/-- The database's queries, each by the SHA-256 of a secret value. -/
structure Reads (m : Type → Type) where
  code : String → m (Option Code)
  refresh : String → m (Option Refresh)
  access : String → m (Option Access)
  /-- Whether a token family has been revoked. -/
  revoked : String → m Bool
  session : String → m (Option Session)
  interaction : String → m (Option Interaction)
  /-- The scopes user (first) has consented to for client (second). -/
  consent : String → String → m (List String)

/-- One change to the database. -/
inductive Write where
  /-- A new code (ignored if a code with its hash exists: `INSERT OR IGNORE`). -/
  | addCode (c : Code)
  /-- Marks a code used. -/
  | useCode (hash : String)
  | addRefresh (r : Refresh)
  /-- Marks a refresh token rotated. -/
  | rotate (hash : String)
  | addAccess (a : Access)
  /-- Revokes a token family: its refresh and access tokens stop working. -/
  | revoke (family : String)
  | addSession (s : Session)
  | endSession (hash : String)
  | addInteraction (i : Interaction)
  /-- Records who signed in during an interaction. -/
  | signIn (hash : String) (login : Login)
  | endInteraction (hash : String)
  /-- Adds scopes to what a user (first) has consented to for a client. -/
  | consent (user client : String) (scopes : List String)
  deriving DecidableEq, Repr

/-- The platform's cryptography. -/
structure Crypto (m : Type → Type) where
  /-- SHA-256 of the UTF-8 bytes, base64url without padding (43 characters). -/
  sha256 : String → m String
  /-- Whether a password matches a stored password hash. -/
  checkPassword : String → String → m Bool
  /-- The signature (base64url) of a JWS signing input, with the key for an algorithm. -/
  sign : Alg → String → m String

/-- Four fresh random values (32 bytes each, base64url). -/
structure Fresh where
  a : String
  b : String
  c : String
  d : String
  deriving DecidableEq, Repr, Inhabited

/-- What the server supplies with each request. -/
structure Ctx where
  /-- Seconds since the epoch. -/
  now : Nat
  fresh : Fresh
  deriving DecidableEq, Repr, Inhabited

/-- What the server does after a commit throws. -/
inductive AfterFailedCommit where
  /-- The commit landed (its success was lost): the request's reply stands. -/
  | stand
  /-- Another request committed first: the request runs again. -/
  | rerun
  /-- Nothing changed: the database refused the commit. -/
  | fail
  deriving DecidableEq, Repr

/-- The server's choice after a commit throws (`Server/App.lean`). `landed`:
whether the request's commit receipt is in the database, `none` if even that
could not be read; `moved`: whether the database's version changed since the
request read it. A commit whose receipt is there is never run again; one
whose receipt could not be read is decided by the version alone, as before
receipts. -/
def afterFailedCommit (landed : Option Bool) (moved : Bool) : AfterFailedCommit :=
  match landed, moved with
  | some true, _ => .stand
  | _, true => .rerun
  | _, false => .fail

end Porter
