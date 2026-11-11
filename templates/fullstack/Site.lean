/-
The site, on every server target: the API (the shared endpoints), the first
page, rendered from the shared view, and the browser app's files. Each server
program (Server.lean, ServerFastly.lean, ServerWasiHttp.lean) passes it its
platform's requests as `Http.Request`s. The todos are kept in `Lasm.KV`:
Workers KV, Deno KV or a Fastly KV Store where the platform has one named
TODOS, else memory (one copy per server process, isolate or instance).
-/
import Http
import Lasm.KV
import Lasm.RPC.Server
import Lasm.UI.Render
import View
open Lean Lasm.RPC Lasm.UI Std.Async

namespace Site

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

/-- Answers a request: a file of the browser app (`assets`), an endpoint
(`/rpc/<name>`), the first page (`GET /`), or 404. A `HEAD` request is
answered as `GET` (the server program sends no body). -/
def respond (kv : Lasm.KV.Store) (assets : Http.Assets) (req : Http.Request) : Async Http.Response := do
  let req := if req.method == "HEAD" then { req with method := "GET" } else req
  if let some file ← assets.serve req then return file
  if let some answer := dispatch (api kv) req.method req.segments req.text then
    let a ← answer
    return { status := a.status, headers := a.headers, body := a.body.toUTF8 }
  match req.method, req.segments with
  | "GET", [] => return .html (page (← load kv))
  | _, _ => return .notFound

end Site
