/-
The server: `Conduit.Api.handle` (pure Lean, written against `Store` and
`Services`) served over HTTP with `Lasm.Fetch`, on a SQLite connection from
one of the binding modules. The same code runs on Node, Cloudflare Workers
and Bun; only the `Sql` it is given differs.
-/
import Lasm.Fetch
import Lasm.JS
import Conduit.Api
import Server.Sql
import Server.Crypto
import Server.Pages
import Lasm.Fetch.Assets
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

/-- Signs development tokens when `JWT_SECRET` is not set. -/
def developmentSecret : String := "conduit development secret: set JWT_SECRET in production"

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

/-- Any origin may call the API (it uses tokens, not cookies), so other
RealWorld frontends work with this backend too. -/
def cors : Array (String × String) := #[
  ("access-control-allow-origin", "*"),
  ("access-control-allow-headers", "authorization, content-type"),
  ("access-control-allow-methods", "GET, POST, PUT, DELETE, OPTIONS")]

/-- `/api/…`: the RealWorld API. -/
def api (store : Store Async) (req : Lasm.Fetch.Request) (path : List String) : Async Lasm.Fetch.Response := do
  if req.method == "OPTIONS" then return { status := 204, headers := cors }
  let r : Request := { method := if req.method == "HEAD" then "GET" else req.method, path,
                       query := req.queryParams, authorization := req.header? "authorization", body := req.text }
  let reply ← Api.handle store services r
  let response : Lasm.Fetch.Response := match reply.body with
    | some j => .json j.compress reply.status.toUInt16
    | none => .empty reply.status.toUInt16
  return { response with headers := response.headers ++ cors }

/-- The whole site: the API under `/api`, and every other URL's page,
server-rendered (the browser app's files are served before this, by `run`). -/
def site (store : Store Async) (req : Lasm.Fetch.Request) : Async Lasm.Fetch.Response := do
  match req.segments with
  | "api" :: path => api store req path
  | _ =>
    if req.method == "GET" || req.method == "HEAD" then pageResponse store services req
    else return .notFound

/-- Serves Conduit on a database (whose binding module created the tables),
with the browser app's files (`assets`: `embed_dir! "dist/public"` in the
entry file). -/
def run (db : Sql) (assets : Lasm.Fetch.Assets) : IO Unit :=
  Lasm.Fetch.serve (assets.wrap (site (store db)))

end Conduit.Server
