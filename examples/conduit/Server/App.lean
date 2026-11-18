/-
The server on the JavaScript targets (Node, Bun, Deno, the edge platforms
and the function platforms): `Server/Http.lean` with the clock, passwords
and tokens from Web Crypto, on a SQLite connection from one of the binding
modules, or on a key-value store (`Server/Kv.lean`). The same code runs on
every platform; only the store (and, on Workers, where the secret comes
from) differs.
-/
import Lasm.JS
import Conduit.Api
import Server.Sql
import Server.Crypto
import Server.Http
open Lasm.JS Lean

namespace Conduit.Server

/-- `JWT_SECRET` from the environment, else the development secret. -/
def envSecret : IO String := do return (← IO.getEnv "JWT_SECRET").getD developmentSecret

/-- Milliseconds since the epoch (`Date.now()`: ECMAScript's `Date`, which no
generated binding covers). -/
def nowMs : IO Nat := do
  let ms ← (← (← global).get "Date").callMethod "now" #[] Float
  return ms.toUInt64.toNat

/-- The clock, passwords and tokens, with Web Crypto; tokens are signed with
the secret `secret` reads. -/
def services (secret : IO String := envSecret) : Services Async where
  now := nowMs
  hashPassword := Crypto.hashPassword
  checkPassword := Crypto.checkPassword
  issueToken id := do Crypto.issueToken (← secret) id ((← nowMs) / 1000)
  readToken token := do Crypto.readToken (← secret) token ((← nowMs) / 1000)

/-- Conduit on a store, with the browser app's files (`assets`:
`embed_dir! "dist/public"` in the entry file), as the handler the entry file
serves. -/
def storeHandler (store : Store Async) (assets : Web.Assets) (secret : IO String := envSecret) : IO Web.Handler :=
  handlerWith store (services secret) assets

/-- Conduit on a SQL database (whose binding module created the tables).
`isolate`: run writes alone in this process (`Isolation` in
`Server/Http.lean`); off on Cloudflare Workers, which cancels a request that
waits on another request's promise. -/
def sqlHandler (db : Sql) (assets : Web.Assets) (isolate := true) (secret : IO String := envSecret) : IO Web.Handler :=
  handlerWith (store db) (services secret) assets isolate

end Conduit.Server
