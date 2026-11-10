/- Size and build-time baseline for Lasm.JS.Deno and Lasm.JS.Bun (scripts/bindings/test-web.mjs --fixture js-serve --sizes):
a handler on the Lasm.JS.Web modules Lasm.JS.Deno and Lasm.JS.Bun import (Dom, Fetch, Url), served with a hand-written call of Deno.serve. Built, not run. -/
import Lasm.JS
import Lasm.JS.Web.Dom
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Url
open Lasm.JS Lasm.JS.Web

/-- `Deno.serve(handler)`, looked up at run time (an `@[js]` binding of a Deno-only global fails
the build's binding check, which runs on Node). -/
def denoServe (handler : Value) : IO Value := do
  (← (← Lasm.JS.global).get "Deno" Value).callMethod "serve" #[toJS handler] Value

def main : IO Unit := do
  let handler ← Function.ofFn1 fun (_ : Request) => do
    Response.new (some (.usvString "hello")) none
  let server ← denoServe handler
  discard <| server.get "finished" Value
