/- Conduit on Deno Deploy and Vercel Edge, on `Lasm.KV.open`: Deno KV on Deno Deploy
(`npm run build:deno-deploy`; locally `deno run -A --unstable-kv deno/main.mjs`), memory on Vercel
Edge (`npm run build:vercel-edge`; Vercel Edge has no store of its own: one copy per isolate).
JWT_SECRET as everywhere. -/
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
