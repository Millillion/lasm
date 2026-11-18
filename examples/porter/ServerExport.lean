/- Porter as the program's default export (`Lasm.JS.exportDefault`), with node:sqlite:
Deno (`npm run build:deno`; Deno's entry serves it on $PORT) and the function platforms
(`npm run build:lambda`, `build:lambda-image`, `build:vercel`, `build:netlify`,
`build:azure`, `build:gcf`), whose generated entry calls the handler for each request.
DATABASE_PATH, else porter.db here, else (a read-only directory, as on function
platforms) porter.db in the temporary directory, for as long as the instance lasts. -/
import Server.App
import Server.NodeSqlite
import Server.Embed
import Server.JsServe

/-- The sign-in and consent pages' browser app (dist/public/ui, from npm run
build:client), embedded in the program so every target serves it. -/
def assets : Porter.Server.Web.Assets := embed_dir! "dist/public"

def database : IO Porter.Server.Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← Porter.Server.NodeSqlite.open path
  try Porter.Server.NodeSqlite.open "porter.db"
  catch e =>
    let tmp := (← IO.getEnv "TMPDIR").getD "/tmp"
    IO.eprintln s!"porter.db cannot be opened here ({e}); using {tmp}/porter.db"
    Porter.Server.NodeSqlite.open s!"{tmp}/porter.db"

def main : IO Unit := do
  let handler ← Porter.Server.handler (← database) assets
  Lasm.JS.exportDefault (Porter.Server.JsServe.webHandler handler)
