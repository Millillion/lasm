/- Tandem's sync server on Cloudflare Workers with D1: `npm run
build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). Workers
has no WebSockets here (they need a Durable Object), so clients long-poll;
a poll waits at most 10 seconds. -/
import Server.App
import Server.Embed
import Server.D1
import Server.JsServe

/-- The editor's browser app (dist/public/ui, from npm run build:client),
embedded in the program so every target serves it. -/
def assets : Tandem.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let db ← Tandem.Server.D1.open "DB"
  -- Workers does not let one request wait on another's promise: no
  -- in-process turns; the store's keys keep racing commits apart.
  let env : Tandem.Server.Env := { db, writers := none, pollSeconds := 10 }
  Tandem.Server.JsServe.serveEdge (assets.wrap (Tandem.Server.handler env))
