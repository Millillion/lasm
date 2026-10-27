/-
The server: the API (the shared endpoints) and the first page, rendered from
the shared view, and the browser app's files (embedded). `Lasm.Fetch.serve`
runs it on Node (`npm start`) and on every other server target (the
`build:<target>` scripts). The todos are kept in `Lasm.KV`: Workers KV, Deno KV
or a Fastly KV Store where the platform has one named TODOS, else memory (one
copy per server process, isolate or instance).
-/
import Lasm.Fetch
import Lasm.Fetch.Embed
import Lasm.KV
import Lasm.RPC.Server
import Lasm.UI.Render
import View
open Lean Lasm.Fetch Lasm.RPC Lasm.UI

structure Store where
  todos : Array Todo
  next : Nat
  deriving ToJson, FromJson

/-- Adds a todo. The proof that its title passed `checkTitle` is required, so
only validated titles are ever stored (`checkTitle_ok`: non-empty, short). -/
def Store.add (s : Store) (title : String) (_ : checkTitle title = .ok ()) : Store × Todo :=
  let t := { id := s.next, title := clean title, done := false }
  ({ todos := s.todos.push t, next := s.next + 1 }, t)

def initial : Store :=
  { todos := #[{ id := 1, title := "Write the server in Lean", done := true },
               { id := 2, title := "Write the browser app in Lean", done := false }], next := 3 }

/-- The todos, as the store holds them (JSON under one key). -/
def load (kv : Lasm.KV.Store) : Async Store := do
  match ← kv.get "state" with
  | some text => return ((Json.parse text).bind fromJson?).toOption.getD initial
  | none => return initial

def save (kv : Lasm.KV.Store) (s : Store) : Async Unit := kv.put "state" (toJson s).compress

def api (kv : Lasm.KV.Store) : List Route := [
  listTodos.serve' fun _ => do return .ok (← load kv).todos,
  addTodo.serve fun req ok => do
    let (s, t) := (← load kv).add req.title ok
    save kv s
    return .ok t,
  toggleTodo.serve' fun req => do
    let s ← load kv
    match s.todos.find? (·.id == req.id) with
    | none => return .error s!"no todo {req.id}"
    | some t =>
      let t := { t with done := !t.done }
      save kv { s with todos := s.todos.map fun u => if u.id == t.id then t else u }
      return .ok t,
  deleteTodo.serve' fun req => do
    let s ← load kv
    save kv { s with todos := s.todos.filter (·.id != req.id) }
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

/-- The browser app and public/ (dist/public), embedded in the program, so
every target serves them, including those without a file system (Workers,
Vercel and Netlify Edge, Deno Deploy, Fastly, wasi-http). `lasm dev` embeds
nothing and reads the directory instead. -/
def assets : Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let kv ← Lasm.KV.open "TODOS"
  serve <| assets.wrap <| handler (api kv) fun req => do
    match req.method, req.segments with
    | "GET", [] => return .html (page (← load kv))
    | _, _ => return .notFound
