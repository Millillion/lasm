/- Conduit on Node: `npm run build`, then `npm start` (DATABASE_PATH, PORT, HOST, JWT_SECRET). -/
import Server.App
import Server.NodeSqlite

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "conduit.db"
  Conduit.Server.run (← Conduit.Server.NodeSqlite.open path)
