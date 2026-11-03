/- Tandem's sync server on Node with node:sqlite and WebSockets (the `ws`
package): `npm run build`, then `npm start` (PORT, HOST, DATABASE_PATH,
TANDEM_POLL_SECONDS). -/
import Server.App
import Lasm.Fetch.Embed
import Server.NodeSqlite
import Server.NodeWs

/-- The editor's browser app (dist/public/ui, from npm run build:client),
embedded in the program so every target serves it. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "tandem.db"
  let db ← Tandem.Server.NodeSqlite.open path
  let writers ← Std.Semaphore.new 1
  let hub ← Tandem.Server.Hub.new
  let pollSeconds := ((← IO.getEnv "TANDEM_POLL_SECONDS").bind String.toNat?).getD 20
  let env : Tandem.Server.Env := { db, writers := some writers, push := hub.push, pollSeconds }
  Tandem.Server.NodeWs.serve env hub (assets.wrap (Tandem.Server.handler env))
