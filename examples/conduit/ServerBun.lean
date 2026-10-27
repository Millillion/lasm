/- Conduit on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun` (DATABASE_PATH, PORT, JWT_SECRET). -/
import Server.App
import Server.BunSqlite

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "conduit.db"
  Conduit.Server.run (← Conduit.Server.BunSqlite.open path)
