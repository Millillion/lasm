/- The same server through Lasm.JS.Bun, for scripts/bindings/test-web.mjs --fixture js-serve --sizes. Built, not run. -/
import Lasm.JS.Bun
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let fetch ← Bun.ServeOptionsFetch.ofFn fun _ _ => Response.new (some (.usvString "hello")) none
  let server ← Bun.serve { fetch }
  discard <| server.port
