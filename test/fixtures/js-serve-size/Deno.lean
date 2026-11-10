/- The same server through Lasm.JS.Deno, for scripts/bindings/test-web.mjs --fixture js-serve --sizes. Built, not run. -/
import Lasm.JS.Deno
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let handler ← Deno.ServeHandler.ofFn fun _ _ => Response.new (some (.usvString "hello")) none
  let server ← Deno.serve handler
  discard <| server.addr
