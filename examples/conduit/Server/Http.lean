/-
HTTP: `Conduit.Api.handle` (pure Lean, written against `Store` and
`Services`) and the server-rendered pages, served with `Lasm.Fetch`. No
JavaScript here: every target uses it, with the store and the services its
entry file gives (Web Crypto in `Server/App.lean`; pure Lean in
`Server/LeanCrypto.lean` for Fastly and wasi-http).
-/
import Lasm.Fetch
import Lasm.Fetch.Assets
import Std.Async.Basic
import Conduit.Api
import Server.Pages
open Lean Std.Async

namespace Conduit.Server

/-- Signs development tokens when `JWT_SECRET` is not set. -/
def developmentSecret : String := "conduit development secret: set JWT_SECRET in production"

/-- Any origin may call the API (it uses tokens, not cookies), so other
RealWorld frontends work with this backend too. -/
def cors : Array (String × String) := #[
  ("access-control-allow-origin", "*"),
  ("access-control-allow-headers", "authorization, content-type"),
  ("access-control-allow-methods", "GET, POST, PUT, DELETE, OPTIONS")]

/-- `/api/…`: the RealWorld API. -/
def api (store : Store Async) (services : Services Async) (req : Lasm.Fetch.Request) (path : List String) :
    Async Lasm.Fetch.Response := do
  if req.method == "OPTIONS" then return { status := 204, headers := cors }
  let r : Request := { method := if req.method == "HEAD" then "GET" else req.method, path,
                       query := req.queryParams, authorization := req.header? "authorization", body := req.text }
  let reply ← Api.handle store services r
  let response : Lasm.Fetch.Response := match reply.body with
    | some j => .json j.compress reply.status.toUInt16
    | none => .empty reply.status.toUInt16
  return { response with headers := response.headers ++ cors }

/-- The whole site: the API under `/api`, and every other URL's page,
server-rendered (the browser app's files are served before this). -/
def site (store : Store Async) (services : Services Async) (req : Lasm.Fetch.Request) : Async Lasm.Fetch.Response := do
  match req.segments with
  | "api" :: path => api store services req path
  | _ =>
    if req.method == "GET" || req.method == "HEAD" then pageResponse store services req
    else return .notFound

/-- Serves Conduit on a store with services, and the browser app's files
(`assets`: `embed_dir! "dist/public"` in the entry file). -/
def serveWith (store : Store Async) (services : Services Async) (assets : Lasm.Fetch.Assets) : IO Unit :=
  Lasm.Fetch.serve (assets.wrap (site store services))

end Conduit.Server
