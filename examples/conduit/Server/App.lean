/-
The server on the JavaScript targets (Node, Bun, Deno, the edge platforms
and the function platforms): `Server/Http.lean` with the clock, passwords
and tokens from Web Crypto, on a SQLite connection from one of the binding
modules, or on a key-value store (`Server/Kv.lean`). The same code runs on
every platform; only the store it is given differs.
-/
import Lasm.JS
import Server.JsServe
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
  match ← JsServe.platformEnv.get with
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

/-- Conduit on a store, with the browser app's files (`assets`:
`embed_dir! "dist/public"` in the entry file), as the handler the entry file
serves. -/
def storeHandler (store : Store Async) (assets : Web.Assets) : IO Web.Handler :=
  handlerWith store services assets

/-- Conduit on a SQL database (whose binding module created the tables).
`isolate`: run writes alone in this process (`Isolation` in
`Server/Http.lean`); off on Cloudflare Workers, which cancels a request that
waits on another request's promise. -/
def sqlHandler (db : Sql) (assets : Web.Assets) (isolate := true) : IO Web.Handler :=
  handlerWith (store db) services assets isolate

end Conduit.Server
