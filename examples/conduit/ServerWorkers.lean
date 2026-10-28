/- Conduit on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). -/
import Server.App
import Lasm.Fetch.Embed
import Server.D1

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  Conduit.Server.run (← Conduit.Server.D1.open "DB") assets
