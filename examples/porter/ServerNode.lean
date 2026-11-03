/- Porter on Node and Deno with node:sqlite: `npm run build`, then `npm start`
(PORT, HOST, ISSUER, DATABASE_PATH, PORTER_CONFIG). The same file is the Deno
build (`npm run build:deno`) and, packaged, the Node function platforms. -/
import Server.App
import Server.NodeSqlite
import Lasm.Fetch.Embed

/-- The sign-in and consent pages' browser app (dist/public/ui, from npm run
build:client), embedded in the program so every target serves it. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

/-- `DATABASE_PATH`, else `porter.db` in the working directory, else (where
that directory is read-only, as on function platforms) `porter.db` in the
temporary directory, which lasts only as long as the function's instance. -/
def database : IO Porter.Server.Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← Porter.Server.NodeSqlite.open path
  try Porter.Server.NodeSqlite.open "porter.db"
  catch e =>
    let tmp := (← IO.getEnv "TMPDIR").getD "/tmp"
    IO.eprintln s!"porter.db cannot be opened here ({e}); using {tmp}/porter.db"
    Porter.Server.NodeSqlite.open s!"{tmp}/porter.db"

def main : IO Unit := do
  Porter.Server.run (← database) assets
