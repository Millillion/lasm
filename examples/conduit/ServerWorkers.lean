/- Conduit on Cloudflare Workers with D1: `npm run build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.D1

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  -- No isolation between requests: Workers cancels a request that waits on
  -- another request's promise.
  Conduit.Server.JsServe.serveEdge (← Conduit.Server.sqlHandler (← Conduit.Server.D1.open "DB") assets (isolate := false))
