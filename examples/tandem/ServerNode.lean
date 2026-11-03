/- Tandem's sync server on Node with node:sqlite and WebSockets (the `ws`
package): `npm run build`, then `npm start` (PORT, HOST, DATABASE_PATH,
TANDEM_POLL_SECONDS). -/
import Server.App
import Server.NodeSqlite
import Server.NodeWs

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "tandem.db"
  let db ← Tandem.Server.NodeSqlite.open path
  let writers ← Std.Semaphore.new 1
  let hub ← Tandem.Server.Hub.new
  let pollSeconds := ((← IO.getEnv "TANDEM_POLL_SECONDS").bind String.toNat?).getD 20
  Tandem.Server.NodeWs.serve { db, writers := some writers, push := hub.push, pollSeconds } hub
