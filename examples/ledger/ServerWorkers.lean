/- Ledger on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). -/
import Server.App
import Server.D1
import Server.Embed
import Server.JsServe

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Ledger.Server.Web.Assets := embed_dir! "dist/public"


def main : IO Unit := do
  Ledger.Server.JsServe.serveEdge (← Ledger.Server.handler (← Ledger.Server.D1.open "DB") assets (serializeWriters := false))
