/- Tandem's sync server on Bun with bun:sqlite and Bun's WebSockets:
`npm run build:bun`, then `npm run start:bun` (PORT, DATABASE_PATH,
TANDEM_POLL_SECONDS). -/
import Server.App
import Lasm.Fetch.Embed
import Server.BunSqlite
import Server.EdgeWs

/-- The editor's browser app (dist/public/ui, from npm run build:client),
embedded in the program so every target serves it. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "tandem.db"
  let db ← Tandem.Server.BunSqlite.open path
  let writers ← Std.Semaphore.new 1
  let hub ← Tandem.Server.Hub.new
  let pollSeconds := ((← IO.getEnv "TANDEM_POLL_SECONDS").bind String.toNat?).getD 20
  let env : Tandem.Server.Env := { db, writers := some writers, push := hub.push, pollSeconds }
  Tandem.Server.EdgeWs.serve env hub (assets.wrap (Tandem.Server.handler env)) .bun
