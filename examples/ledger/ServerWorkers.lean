/- Ledger on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). -/
import Server.App
import Server.D1
import Lasm.Fetch.Embed

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"


def main : IO Unit := do
  Ledger.Server.run (← Ledger.Server.D1.open "DB") assets (serializeWriters := false)
