/- Tandem's sync server on Cloudflare Workers with D1: `npm run
build:workers`, then `npx wrangler dev` (wrangler.toml binds DB). Workers
has no WebSockets here (they need a Durable Object), so clients long-poll;
a poll waits at most 10 seconds. -/
import Server.App
import Server.D1
import Server.EdgeWs

def main : IO Unit := do
  let db ← Tandem.Server.D1.open "DB"
  -- Workers does not let one request wait on another's promise: no
  -- in-process turns; the store's keys keep racing commits apart.
  Tandem.Server.EdgeWs.serve { db, writers := none, pollSeconds := 10 } (← Tandem.Server.Hub.new) .none
