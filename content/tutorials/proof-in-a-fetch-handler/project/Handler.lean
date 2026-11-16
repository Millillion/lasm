/-
`GET /items?limit=N` answers with the first N items, where N is
`App.pageSize`: the function the theorems in App.lean are about.
-/
import App
import Lasm.JS.Web
import Lean.Data.Json
open Lasm.JS Lasm.JS.Web Lean

namespace Handler

def handle (request : Request) : Async Response := do
  let url ← URL.new (← request.url)
  match (← request.method), (← url.pathname) with
  | "GET", "/items" =>
    let size := App.pageSize (← (← url.searchParams).get "limit")
    let items := (List.range size).map (· + 1)
    let body := (Json.mkObj [("size", toJson size), ("items", toJson items)]).compress
    Response.new (some (.usvString body))
      (some { headers := some (.record ⟨#[("content-type", "application/json")]⟩) })
  | _, _ => Response.new (some (.usvString "Not Found\n")) (some { status := some 404 })

end Handler
