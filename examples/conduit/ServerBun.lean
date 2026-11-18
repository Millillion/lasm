/- Conduit on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun` (DATABASE_PATH, PORT,
HOST, JWT_SECRET). `Bun.serve` (Lasm.JS.Bun.Serve) on $HOST:$PORT (default 0.0.0.0:3000). -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.BunSqlite
import Lasm.JS.Bun.Serve
import Lasm.JS.Web.Url
open Lasm.JS

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

/-- Waits for ever: the server answers from JavaScript's event loop meanwhile
(on Bun, `main` returning would end the program). -/
def forever : IO Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  -- Keep `p` alive: a dropped promise would resolve its result with `none`.
  let r ← IO.mkRef (some p)
  (Std.Async.await p : Std.Async.Async Unit).block
  discard <| r.get

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "conduit.db"
  let handler ← Conduit.Server.sqlHandler (← Conduit.Server.BunSqlite.open path) assets
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let fetch ← Bun.ServeOptionsFetch.ofFn fun request _ => Conduit.Server.JsServe.webHandler handler request
  let server ← Bun.serve { fetch, port := some (.unsignedShort port), hostname := some ((← IO.getEnv "HOST").getD "0.0.0.0") }
  IO.eprintln s!"Listening on {← (← server.url).href}"
  forever
