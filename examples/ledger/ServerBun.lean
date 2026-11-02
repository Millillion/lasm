/- Ledger on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun` (DATABASE_PATH, PORT, HOST). -/
import Server.App
import Server.BunSqlite

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "ledger.db"
  Ledger.Server.run (← Ledger.Server.BunSqlite.open path)
