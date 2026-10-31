/- Conduit on Deno Deploy, on Deno KV (`Lasm.KV`): `npm run build:deno-deploy`; locally
`deno run -A --unstable-kv deno/main.mjs` (elsewhere `Lasm.KV.open` falls back to memory).
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
