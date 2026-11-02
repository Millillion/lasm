/- Ledger on Node and Deno with node:sqlite: `npm run build`, then `npm start` (DATABASE_PATH, PORT, HOST). -/
import Server.App
import Server.NodeSqlite

/-- `DATABASE_PATH`, else `ledger.db` in the working directory, else (where
that directory is read-only, as on function platforms) `ledger.db` in the
temporary directory, which lasts only as long as the function's instance. -/
def database : IO Ledger.Server.Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← Ledger.Server.NodeSqlite.open path
  try Ledger.Server.NodeSqlite.open "ledger.db"
  catch e =>
    let tmp := (← IO.getEnv "TMPDIR").getD "/tmp"
    IO.eprintln s!"ledger.db cannot be opened here ({e}); using {tmp}/ledger.db"
    Ledger.Server.NodeSqlite.open s!"{tmp}/ledger.db"

def main : IO Unit := do
  Ledger.Server.run (← database)
