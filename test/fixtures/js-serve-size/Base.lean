/- Size and build-time baseline for Lasm.JS.Deno and Lasm.JS.Bun (scripts/bindings/test-web.mjs --fixture js-serve --sizes):
a handler on Lasm.JS.Web served with a hand-written `@[js]` binding of Deno.serve. Built, not run. -/
import Lasm.JS
import Lasm.JS.Web
open Lasm.JS Lasm.JS.Web

@[js "globalThis" "Deno.serve"] opaque denoServe : Value → IO Value

def main : IO Unit := do
  let handler ← Function.ofFn1 fun (_ : Request) => do
    Response.new (some (.usvString "hello")) none
  let server ← denoServe handler
  discard <| server.get "finished" Value
