/-
`GET /items?limit=N` answers with the first N items, where N is
`App.pageSize`: the function the theorems in App.lean are about.
-/
import App
import Lasm.Fetch
import Lean.Data.Json
open Lasm.Fetch Lean

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", ["items"] =>
    let size := App.pageSize (req.queryParam? "limit")
    let items := (List.range size).map (· + 1)
    return .json (Json.mkObj [("size", toJson size), ("items", toJson items)]).compress
  | _, _ => return .notFound

def main : IO Unit := serve handle
