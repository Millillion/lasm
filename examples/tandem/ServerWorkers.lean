/- Tandem's sync server on Cloudflare Workers with D1: `npm run
build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). Workers
has no WebSockets here (they need a Durable Object), so clients long-poll;
a poll waits at most 10 seconds. -/
import Lasm.JS
import Lasm.JS.Cloudflare.D1
import Lasm.JS.Cloudflare.Workers
import Server.App
import Server.Embed
import Server.D1
import Server.JsServe
open Lasm.JS Lasm.JS.Cloudflare

/-- The editor's browser app (dist/public/ui, from npm run build:client),
embedded in the program so every target serves it. -/
def assets : Tandem.Server.Web.Assets := embed_dir! "dist/public"

/-- The Worker's bindings (wrangler.toml), read with `deriving FromJS`. -/
structure Env where
  DB : D1Database
  deriving FromJS

def main : IO Unit := do
  -- `env` of cloudflare:workers: the Worker's bindings, read once at start.
  let bindings : Env ← Lasm.JS.Cloudflare.env
  let db ← Tandem.Server.D1.open bindings.DB
  -- Workers does not let one request wait on another's promise: no
  -- in-process turns; the store's keys keep racing commits apart.
  let env : Tandem.Server.Env := { db, writers := none, pollSeconds := 10 }
  let handler := assets.wrap (Tandem.Server.handler env)
  let fetch ← ExportedHandlerFetchHandler.ofFn fun request (_ : Env) _ =>
    Tandem.Server.JsServe.webHandler handler request
  -- The fetch handler itself (ExportedHandler would link every handler kind's module).
  exportDefault fetch
