/-
The server: the API (the shared endpoints) and the first page, rendered from
the shared view. `Lasm.Fetch.serve` runs it on Node (`npm start`), on
Cloudflare Workers (`npm run build:workers`) and on Lasm's other server
targets. The todos live in memory (one copy per server process or isolate).
-/
import Lasm.Fetch
import Lasm.RPC.Server
import Lasm.UI.Render
import View
open Lean Lasm.Fetch Lasm.RPC Lasm.UI

structure Store where
  todos : Array Todo
  next : Nat

/-- Adds a todo. The proof that its title passed `checkTitle` is required, so
only validated titles are ever stored (`checkTitle_ok`: non-empty, short). -/
def Store.add (s : Store) (title : String) (_ : checkTitle title = .ok ()) : Store × Todo :=
  let t := { id := s.next, title := clean title, done := false }
  ({ todos := s.todos.push t, next := s.next + 1 }, t)

def initial : Store :=
  { todos := #[{ id := 1, title := "Write the server in Lean", done := true },
               { id := 2, title := "Write the browser app in Lean", done := false }], next := 3 }

def api (store : IO.Ref Store) : List Route := [
  listTodos.serve' fun _ => do return .ok (← store.get).todos,
  addTodo.serve fun req ok => do
    let (s, t) := (← store.get).add req.title ok
    store.set s
    return .ok t,
  toggleTodo.serve' fun req => do
    let s ← store.get
    match s.todos.find? (·.id == req.id) with
    | none => return .error s!"no todo {req.id}"
    | some t =>
      let t := { t with done := !t.done }
      store.set { s with todos := s.todos.map fun u => if u.id == t.id then t else u }
      return .ok t,
  deleteTodo.serve' fun req => do
    store.modify fun s => { s with todos := s.todos.filter (·.id != req.id) }
    return .ok req ]

/-- The first page: the view rendered on the server, with the todos as the
browser app's flags; the app hydrates it. -/
def page (s : Store) : String :=
  let flags := (Json.mkObj [("todos", toJson s.todos)]).compress
  "<!doctype html><html lang=\"en\"><head><meta charset=\"utf-8\">" ++
  "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"><title>Todos</title>" ++
  "<link rel=\"stylesheet\" href=\"/client/style.css\"><script type=\"module\" src=\"/client/app.js\"></script></head>" ++
  "<body><div id=\"app\" data-lasm-app data-lasm-hydrate data-lasm-flags=\"" ++ Render.escapeAttr flags ++ "\">" ++
  render (view { todos := s.todos }) ++ "</div></body></html>"

def contentType (path : String) : String :=
  if path.endsWith ".js" then "text/javascript; charset=utf-8"
  else if path.endsWith ".wasm" then "application/wasm"
  else if path.endsWith ".css" then "text/css; charset=utf-8"
  else if path.endsWith ".html" then "text/html; charset=utf-8"
  else "application/octet-stream"

/-- Files of `dist/public` (the browser build and public/), on Node; on
Workers the platform serves them before the Worker runs (wrangler.toml). -/
def staticFile (req : Request) : Async Response := do
  let segs := req.segments
  if segs.isEmpty || segs.any (fun s => s == ".." || s.startsWith ".") then return .notFound
  let path := "dist/public/" ++ "/".intercalate segs
  -- (Where there is no file system, as on Workers, every miss is a 404.)
  let some bytes ← (try (if ← System.FilePath.pathExists path then some <$> IO.FS.readBinFile path else pure none)
      catch _ => pure none : IO (Option ByteArray)) | return .notFound
  let cache := if segs.head? == some "client" && segs.length == 2 && segs[1]! != "app.js" then "public, max-age=31536000, immutable" else "no-cache"
  return Response.bytes bytes (contentType path) |>.withHeader "cache-control" cache

def main : IO Unit := do
  let store ← IO.mkRef initial
  serve <| handler (api store) fun req => do
    match req.method, req.segments with
    | "GET", [] => return .html (page (← store.get))
    | "GET", _ => staticFile req
    | _, _ => return .notFound
