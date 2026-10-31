/- Conduit on Supabase Edge Functions, on the project's Postgres (the table of
supabase/migrations/, through Supabase's REST API): `npm run build:supabase-edge`;
locally `supabase start`, then `supabase functions serve`. JWT_SECRET as everywhere. -/
import Server.App
import Lasm.Fetch.Embed
import Server.Kv
import Server.Postgrest

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

/-- A setting Supabase gives every function. -/
def setting (name : String) : IO String := do
  match ← IO.getEnv name with
  | some v => return v
  | none => throw (IO.userError s!"{name} is not set: Supabase sets it for every function (supabase functions serve, or deployed)")

def main : IO Unit := do
  let kv ← Conduit.Server.Postgrest.open ((← setting "SUPABASE_URL") ++ "/rest/v1") (some (← setting "SUPABASE_SERVICE_ROLE_KEY"))
  Conduit.Server.serveStore (Conduit.Server.Kv.store kv) assets
