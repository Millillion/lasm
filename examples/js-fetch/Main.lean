/-
Outbound HTTP with Node's own `fetch`, from Lean compiled by Lasm:
  npx lasm Main.lean -- https://example.com
No npm packages are needed: `fetch` is a Node global (module "globalThis").
-/
import Lasm.JS
import Lean.Data.Json
open Lasm.JS

/-- `await fetch(url, init)`: the Response object. `Async`: waiting holds no Lean thread. -/
@[js "globalThis" "fetch"] opaque fetch : String → Data → Async Value

structure Reply where
  status : Nat
  contentType : Option String
  body : String

/-- GET (or POST with a JSON body) and read the whole response as text. -/
def request (url : String) (json : Option Lean.Json := none) : Async Reply := do
  let init := match json with
    | none => obj []
    | some body => obj [("method", toJS "POST"), ("headers", obj [("content-type", toJS "application/json")]),
                        ("body", toJS body.compress)]
  let response ← fetch url init
  let headers ← response.get "headers"
  return { status := ← response.get "status" Nat,
           contentType := ← headers.callMethod "get" #[toJS "content-type"] (Option String),
           body := ← response.callMethodAwait "text" #[] String }

def main (args : List String) : IO UInt32 := do
  let url := args.head?.getD "https://example.com"
  try
    let reply ← (request url).block   -- run an `Async` computation from `IO` and wait for it
    IO.println s!"{reply.status} {reply.contentType.getD "?"} {reply.body.length} characters"
    return 0
  catch e =>
    IO.eprintln s!"fetch failed: {e}"
    return 1
