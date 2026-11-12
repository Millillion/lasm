/-
HTTP: `Conduit.Api.handle` (pure Lean, written against `Store` and
`Services`) and the server-rendered pages, as one handler (`Server/Web.lean`)
that each platform's server runs (`Server/JsServe.lean`, `Server/NodeServe.lean`,
`Server/FastlyServe.lean`, `Server/WasiHttpServe.lean`). No JavaScript here:
every target uses it, with the store and the services its entry file gives
(Web Crypto in `Server/App.lean`; pure Lean in `Server/LeanCrypto.lean` for
Fastly and wasi-http).
-/
import Server.Assets
import Std.Async.Basic
import Std.Sync.Semaphore
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
def api (store : Store Async) (services : Services Async) (req : Web.Request) (path : List String) :
    Async Web.Response := do
  if req.method == "OPTIONS" then return { status := 204, headers := cors }
  let r : Request := { method := if req.method == "HEAD" then "GET" else req.method, path,
                       query := req.queryParams, authorization := req.header? "authorization", body := req.text }
  let reply ← Api.handle store services r
  let response : Web.Response := match reply.body with
    | some j => .json j.compress reply.status.toUInt16
    | none => .empty reply.status.toUInt16
  return { response with headers := response.headers ++ cors }

/-- The whole site: the API under `/api`, and every other URL's page,
server-rendered (the browser app's files are served before this). -/
def site (store : Store Async) (services : Services Async) (req : Web.Request) : Async Web.Response := do
  match req.segments with
  | "api" :: path => api store services req path
  | _ =>
    if req.method == "GET" || req.method == "HEAD" then pageResponse store services req
    else return .notFound

/-! ## Isolation between requests -/

/-- Isolation between the requests of one process: a request that may write
(every API request but `GET`, `HEAD` and `OPTIONS`) runs alone, and reads
(the other API requests and the pages) run together but never beside a
write, so no request sees another one half done (a request writes in several
statements). Fair: a waiting write holds back reads that arrive after it. -/
structure Isolation where
  /-- Taken by a waiting write; reads pass through it. -/
  turnstile : Std.Semaphore
  /-- Held by a write, or by the reads while any is running. -/
  room : Std.Semaphore
  /-- Guards `readers`. -/
  guard : Std.Semaphore
  readers : IO.Ref Nat

def Isolation.new : IO Isolation :=
  return { turnstile := ← Std.Semaphore.new 1, room := ← Std.Semaphore.new 1, guard := ← Std.Semaphore.new 1,
           readers := ← IO.mkRef 0 }

def take (s : Std.Semaphore) : Async Unit := do
  let _ ← await (← s.acquire).result?

/-- Runs a read: beside other reads, never beside a write. -/
def Isolation.read {α : Type} (iso : Isolation) (act : Async α) : Async α := do
  take iso.turnstile
  iso.turnstile.release
  take iso.guard
  if (← iso.readers.modifyGet fun n => (n + 1, n + 1)) == 1 then take iso.room
  iso.guard.release
  try act finally
    take iso.guard
    if (← iso.readers.modifyGet fun n => (n - 1, n - 1)) == 0 then iso.room.release
    iso.guard.release

/-- Runs a write alone. -/
def Isolation.write {α : Type} (iso : Isolation) (act : Async α) : Async α := do
  take iso.turnstile
  take iso.room
  iso.turnstile.release
  try act finally iso.room.release

/-- Whether a request may write. -/
def mayWrite (req : Web.Request) : Bool :=
  !(req.method == "GET" || req.method == "HEAD" || req.method == "OPTIONS")

/-- Conduit on a store with services, and the browser app's files
(`assets`: `embed_dir! "dist/public"` in the entry file), as the handler the
platform's server runs. `isolate`: run writes alone in this process
(`Isolation`); off where one request may not wait on another's promise
(Cloudflare Workers cancels it) or where every request has its own instance. -/
def handlerWith (store : Store Async) (services : Services Async) (assets : Web.Assets)
    (isolate := false) : IO Web.Handler := do
  let iso ← if isolate then some <$> Isolation.new else pure none
  return (assets.wrap fun req =>
    match iso with
    | none => site store services req
    | some iso => if mayWrite req then iso.write (site store services req) else iso.read (site store services req))

end Conduit.Server
