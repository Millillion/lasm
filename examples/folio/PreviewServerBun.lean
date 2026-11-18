/- The live preview's server on Bun (`npm run build:bun`, then `bun bun/main.mjs`): the browser page
(dist/public, embedded) and `POST /api/render` (`Server/Preview.lean`). `Bun.serve`
(Lasm.JS.Bun.Serve) on $HOST:$PORT (default 0.0.0.0:3000). -/
import Server.Assets
import Server.Embed
import Server.JsServe
import Server.Preview
import Lasm.JS.Bun.Serve
import Lasm.JS.Web.Url
open Lasm.JS

/-- The browser page and its files, embedded in the program. -/
def assets : Folio.Server.Web.Assets := embed_dir! "dist/public"

/-- Waits for ever: the server answers from JavaScript's event loop meanwhile
(on Bun, `main` returning would end the program). -/
def forever : IO Unit := do
  let p : IO.Promise Unit ← IO.Promise.new
  -- Keep `p` alive: a dropped promise would resolve its result with `none`.
  let r ← IO.mkRef (some p)
  (Std.Async.await p : Std.Async.Async Unit).block
  discard <| r.get

def main : IO Unit := do
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let fetch ← Bun.ServeOptionsFetch.ofFn fun request _ => Folio.Server.JsServe.webHandler (assets.wrap Folio.Server.Preview.handle) request
  let server ← Bun.serve { fetch, port := some (.unsignedShort port), hostname := some ((← IO.getEnv "HOST").getD "0.0.0.0") }
  IO.eprintln s!"Listening on {← (← server.url).href}"
  forever
