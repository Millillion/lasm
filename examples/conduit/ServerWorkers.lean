/- Conduit on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml
binds DB). The Worker's fetch handler receives its bindings typed (`Env`): the D1 database DB and the
secret JWT_SECRET (`wrangler secret put JWT_SECRET`; locally .dev.vars; without it the development
secret). Without the DB binding every request fails with an error naming it. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.D1
import Lasm.JS.Cloudflare.D1
import Lasm.JS.Cloudflare.Workers
open Lasm.JS Lasm.JS.Cloudflare

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

/-- The Worker's bindings (wrangler.toml). -/
structure Env where
  DB : D1Database
  JWT_SECRET : Option String := none
  deriving FromJS

def main : IO Unit := do
  exportDefault (← ExportedHandlerFetchHandler.ofFn fun request (env : Env) _ctx => do
    -- No isolation between requests: Workers cancels a request that waits on
    -- another request's promise.
    let handler ← Conduit.Server.sqlHandler (Conduit.Server.D1.sql env.DB) assets (isolate := false)
      (secret := pure (env.JWT_SECRET.getD Conduit.Server.developmentSecret))
    Conduit.Server.JsServe.webHandler handler request)
