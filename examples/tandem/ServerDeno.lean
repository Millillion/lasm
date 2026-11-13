/- Tandem's sync server on Deno with node:sqlite (in Deno) and Deno's
WebSockets: `npm run build:deno`, then `npm run start:deno` (PORT,
DATABASE_PATH, TANDEM_POLL_SECONDS). -/
import Server.App
import Server.Embed
import Server.NodeSqlite
import Server.EdgeWs

/-- The editor's browser app (dist/public/ui, from npm run build:client),
embedded in the program so every target serves it. -/
def assets : Tandem.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "tandem.db"
  let db ← Tandem.Server.NodeSqlite.open path
  let writers ← Std.Semaphore.new 1
  let hub ← Tandem.Server.Hub.new
  let pollSeconds := ((← IO.getEnv "TANDEM_POLL_SECONDS").bind String.toNat?).getD 20
  let env : Tandem.Server.Env := { db, writers := some writers, push := hub.push, pollSeconds }
  Tandem.Server.EdgeWs.serveDeno env hub (assets.wrap (Tandem.Server.handler env))
