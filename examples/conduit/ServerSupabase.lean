/- Conduit on Supabase Edge Functions, on the project's Postgres (the table of
supabase/migrations/, through Supabase's REST API): `npm run build:supabase-edge`;
locally `supabase start`, then `supabase functions serve`. JWT_SECRET as everywhere. -/
import Server.App
import Lasm.Fetch.Embed
import Server.Kv
import Server.SupabaseKv

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  Conduit.Server.serveStore (Conduit.Server.Kv.store (← Conduit.Server.SupabaseKv.open)) assets
