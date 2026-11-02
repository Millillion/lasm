/- Porter on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun`
(PORT, HOST, ISSUER, DATABASE_PATH, PORTER_CONFIG). -/
import Server.App
import Server.BunSqlite

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "porter.db"
  Porter.Server.run (← Porter.Server.BunSqlite.open path)
