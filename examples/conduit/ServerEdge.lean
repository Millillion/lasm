/- Conduit on the platforms without SQL, on a key-value store (`Lasm.KV`): Deno KV on Deno Deploy
(`npm run build:deno-deploy`; locally `deno run -A --unstable-kv`), Fastly's KV Store `conduit`,
else memory (Vercel Edge, Supabase Edge Functions; one copy per isolate). JWT_SECRET as everywhere. -/
import Server.App
import Lasm.Fetch.Embed
import Server.Kv

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let kv ← Lasm.KV.open "conduit"
  IO.eprintln s!"Conduit: the store is {kv.kind}"
  Conduit.Server.serveStore (Conduit.Server.Kv.store kv) assets
