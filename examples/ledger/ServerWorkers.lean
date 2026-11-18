/- Ledger on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). -/
import Lasm.JS
import Lasm.JS.Cloudflare.D1
import Lasm.JS.Cloudflare.Workers
import Server.App
import Server.D1
import Server.Embed
import Server.JsServe
open Lasm.JS Lasm.JS.Cloudflare

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Ledger.Server.Web.Assets := embed_dir! "dist/public"

/-- The Worker's bindings (wrangler.toml), read with `deriving FromJS`. -/
structure Env where
  DB : D1Database
  deriving FromJS

def main : IO Unit := do
  -- `env` of cloudflare:workers: the Worker's bindings, read once at start.
  let env : Env ← Lasm.JS.Cloudflare.env
  -- Workers compresses responses itself (Content-Encoding): the embedded files are
  -- served without their Brotli copies (0.5-8). No cross-request lock on Workers:
  -- D1's atomic batch and the version check serialize commits (0.5-8).
  let handler ← Ledger.Server.handler (← Ledger.Server.D1.open env.DB) assets.withoutBrotli (serializeWriters := false)
  let fetch ← ExportedHandlerFetchHandler.ofFn fun request (_ : Env) _ =>
    Ledger.Server.JsServe.webHandler handler request
  -- The fetch handler itself (ExportedHandler would link every handler kind's module).
  exportDefault fetch
