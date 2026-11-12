/- Porter on Cloudflare Workers with D1: `npm run build:workers`, then
`npx wrangler dev` (wrangler.toml binds DB; ISSUER and PORTER_CONFIG are the
Worker's variables, in wrangler.toml or .dev.vars). -/
import Server.App
import Server.D1
import Server.Embed
import Server.JsServe

/-- The sign-in and consent pages' browser app (dist/public/ui, from npm run
build:client), embedded in the program so every target serves it. -/
def assets : Porter.Server.Web.Assets := embed_dir! "dist/public"
open Lasm.JS

/-- A variable of the Worker's `env` (it arrives with each request). -/
def workerVar (name : String) : IO (Option String) := do
  let found : Data ← match ← Porter.Server.JsServe.platformEnv.get with
    | .ref env _ => (try env.get name Data catch _ => pure .undefined)
    | env@(.object _) => pure (env.field name)
    | _ => pure .undefined
  match found with
  | .string s => return some s
  | _ => return none

def main : IO Unit := do
  Porter.Server.JsServe.serveEdge
    (← Porter.Server.handler (← Porter.Server.D1.open "DB") assets workerVar (serializeWriters := false))
