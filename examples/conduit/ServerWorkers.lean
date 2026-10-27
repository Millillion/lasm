/- Conduit on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). -/
import Server.App
import Server.D1

def main : IO Unit := do
  Conduit.Server.run (← Conduit.Server.D1.open "DB")
