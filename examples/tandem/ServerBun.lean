/- Tandem's sync server on Bun with bun:sqlite and Bun's WebSockets:
`npm run build:bun`, then `npm run start:bun` (PORT, DATABASE_PATH,
TANDEM_POLL_SECONDS). -/
import Server.App
import Server.BunSqlite
import Server.EdgeWs

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "tandem.db"
  let db ← Tandem.Server.BunSqlite.open path
  let writers ← Std.Semaphore.new 1
  let hub ← Tandem.Server.Hub.new
  let pollSeconds := ((← IO.getEnv "TANDEM_POLL_SECONDS").bind String.toNat?).getD 20
  Tandem.Server.EdgeWs.serve { db, writers := some writers, push := hub.push, pollSeconds } hub .bun
