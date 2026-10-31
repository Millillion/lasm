/-
The server on the JavaScript targets (Node, Bun, Deno, the edge platforms
and the function platforms): `Server/Http.lean` with the clock, passwords
and tokens from Web Crypto, on a SQLite connection from one of the binding
modules, or on a key-value store (`Server/Kv.lean`). The same code runs on
every platform; only the store it is given differs.
-/
import Lasm.Fetch
import Lasm.JS
import Conduit.Api
import Server.Sql
import Server.Crypto
import Server.Http
open Lasm.JS Lean

namespace Conduit.Server

/-- A setting: the process environment (Node, Bun), else the Worker's `env`
(Cloudflare Workers `[vars]` and secrets). -/
def setting (name : String) : IO (Option String) := do
  if let some v ← IO.getEnv name then return some v
  match ← Lasm.Fetch.platformEnv.get with
  | .ref env _ => match ← (try env.get name Data catch _ => pure .undefined) with
    | .string s => return some s
    | _ => return none
  | env@(.object _) => match env.field name with
    | .string s => return some s
    | _ => return none
  | _ => return none

def secret : IO String := do return (← setting "JWT_SECRET").getD developmentSecret

/-- Milliseconds since the epoch (`Date.now()`). -/
def nowMs : IO Nat := do
  let ms ← (← (← global).get "Date").callMethod "now" #[] Float
  return ms.toUInt64.toNat

/-- The clock, passwords and tokens, with Web Crypto. -/
def services : Services Async where
  now := nowMs
  hashPassword := Crypto.hashPassword
  checkPassword := Crypto.checkPassword
  issueToken id := do Crypto.issueToken (← secret) id ((← nowMs) / 1000)
  readToken token := do Crypto.readToken (← secret) token ((← nowMs) / 1000)

/-- Serves Conduit on a store, with the browser app's files (`assets`:
`embed_dir! "dist/public"` in the entry file). -/
def serveStore (store : Store Async) (assets : Lasm.Fetch.Assets) : IO Unit :=
  serveWith store services assets

/-- Serves Conduit on a SQL database (whose binding module created the tables). -/
def run (db : Sql) (assets : Lasm.Fetch.Assets) : IO Unit := serveStore (store db) assets

end Conduit.Server
