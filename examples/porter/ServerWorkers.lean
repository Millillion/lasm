/- Porter on Cloudflare Workers with D1: `npm run build:workers`, then
`npx wrangler dev` (wrangler.toml binds DB; ISSUER and PORTER_CONFIG are the
Worker's variables, in wrangler.toml or .dev.vars). -/
import Server.App
import Server.D1
open Lasm.JS

/-- A variable of the Worker's `env` (it arrives with each request). -/
def workerVar (name : String) : IO (Option String) := do
  let found : Data ← match ← Lasm.Fetch.platformEnv.get with
    | .ref env _ => (try env.get name Data catch _ => pure .undefined)
    | env@(.object _) => pure (env.field name)
    | _ => pure .undefined
  match found with
  | .string s => return some s
  | _ => return none

def main : IO Unit := do
  Porter.Server.run (← Porter.Server.D1.open "DB") workerVar (serializeWriters := false)
