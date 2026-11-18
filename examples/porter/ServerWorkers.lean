/- Porter on Cloudflare Workers with D1: `npm run build:workers`, then
`npx wrangler dev` (wrangler.toml binds DB; ISSUER and PORTER_CONFIG are the
Worker's variables, in wrangler.toml or .dev.vars). -/
import Lasm.JS
import Lasm.JS.Cloudflare.D1
import Lasm.JS.Cloudflare.Workers
import Server.App
import Server.D1
import Server.Embed
import Server.JsServe
open Lasm.JS Lasm.JS.Cloudflare

/-- The sign-in and consent pages' browser app (dist/public/ui, from npm run
build:client), embedded in the program so every target serves it. -/
def assets : Porter.Server.Web.Assets := embed_dir! "dist/public"

/-- The Worker's bindings and variables (wrangler.toml), read with `deriving FromJS`. -/
structure Env where
  DB : D1Database
  ISSUER : Option String
  PORTER_CONFIG : Option String
  deriving FromJS

def main : IO Unit := do
  -- `env` of cloudflare:workers: the Worker's bindings, read once at start.
  let env : Env ← Lasm.JS.Cloudflare.env
  let var : String → IO (Option String)
    | "ISSUER" => pure env.ISSUER
    | "PORTER_CONFIG" => pure env.PORTER_CONFIG
    | _ => pure none
  let handler ← Porter.Server.handler (← Porter.Server.D1.open env.DB) assets var (serializeWriters := false)
  let fetch ← ExportedHandlerFetchHandler.ofFn fun request (_ : Env) _ =>
    Porter.Server.JsServe.webHandler handler request
  -- The fetch handler itself (ExportedHandler would link every handler kind's module).
  exportDefault fetch
