/-
The site, on every server target: the REST API (Shared.lean lists its
routes), the first page, rendered from the shared view, and the browser app's
files. Each server program (Server.lean on Node, Export.lean on the edge, Bun
and Deno, Workers.lean, Deno.lean, Fastly.lean, WasiHttp.lean) passes it its
platform's requests as `Http.Request`s, and its store: Workers KV, Deno KV or
the Fastly KV Store TODOS, through each platform's own API, else memory (one
copy per server process, isolate or instance).
-/
import Std.Data.HashMap
import Lasm.JS.Core
import Embed
import Lasm.UI.Render
import View
open Lean Lasm.UI Std.Async

namespace Site

/-- Where the todos are kept: one value per key. Each server program gives the
site its platform's store (Workers.lean, Deno.lean, Fastly.lean), or `memory`. -/
structure Kv where
  get : String → Async (Option String)
  put : String → String → Async Unit

/-- A store in this process's (isolate's, instance's) memory. -/
def Kv.memory : IO Kv := do
  let table ← IO.mkRef ({} : Std.HashMap String String)
  return { get := fun k => do return (← table.get)[k]?, put := fun k v => table.modify (·.insert k v) }

structure Store where
  todos : Array Todo
  next : Nat
  deriving ToJson, FromJson

/-- Adds a todo. Its title is a `ValidTitle`, so only titles that passed
`checkTitle` are ever stored (`checkTitle_ok`: non-empty, short). -/
def Store.add (s : Store) (title : ValidTitle) : Store × Todo :=
  let t := { id := s.next, title := clean title.val, done := false }
  ({ todos := s.todos.push t, next := s.next + 1 }, t)

def initial : Store :=
  { todos := #[{ id := 1, title := "Write the server in Lean", done := true },
               { id := 2, title := "Write the browser app in Lean", done := false }], next := 3 }

/-- The todos, as the store holds them (JSON under one key). -/
def load (kv : Kv) : Async Store := do
  match ← kv.get "state" with
  | some text => return ((Json.parse text).bind fromJson?).toOption.getD initial
  | none => return initial

def save (kv : Kv) (s : Store) : Async Unit := kv.put "state" (toJson s).compress

/-- A JSON answer. -/
def json [ToJson α] (value : α) (status : UInt16 := 200) : Http.Response :=
  Http.Response.withBody (toJson value).compress.toUTF8 "application/json" status

/-- A 4xx answer: `{"error": message}`. -/
def failure (status : UInt16) (message : String) : Http.Response := json ({ error := message } : ApiError) status

/-- The REST API, or `none` for a path outside `/api/todos`. -/
def api (kv : Kv) (req : Http.Request) : Option (Async Http.Response) :=
  match req.method, req.segments with
  | "GET", ["api", "todos"] => some do return json (← load kv).todos
  | "POST", ["api", "todos"] => some do
    match decodeJson (α := NewTodo) req.text >>= fun r => ValidTitle.check r.title with
    | .error e => return failure 400 e
    | .ok title =>
      let (s, t) := (← load kv).add title
      save kv s
      return json t 201
  | "PATCH", ["api", "todos", id] => some do
    match id.toNat?, decodeJson (α := TodoPatch) req.text with
    | _, .error e => return failure 400 e
    | none, _ => return failure 404 s!"no todo {id}"
    | some id, .ok patch =>
      let s ← load kv
      match s.todos.find? (·.id == id) with
      | none => return failure 404 s!"no todo {id}"
      | some t =>
        let t := { t with done := patch.done }
        save kv { s with todos := s.todos.map fun u => if u.id == id then t else u }
        return json t
  | "DELETE", ["api", "todos", id] => some do
    let s ← load kv
    match id.toNat? with
    | some n =>
      if s.todos.any (·.id == n) then
        save kv { s with todos := s.todos.filter (·.id != n) }
        return { status := 204 }
      else return failure 404 s!"no todo {id}"
    | none => return failure 404 s!"no todo {id}"
  | _, "api" :: _ => some do return failure 404 "no such route"
  | _, _ => none

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
def assets : Http.Assets := embed_dir! "dist/public"

/-- Answers a request: a file of the browser app (`assets`), the API
(`/api/todos`), the first page (`GET /`), or 404. A `HEAD` request is
answered as `GET` (the server program sends no body). -/
def respond (kv : Kv) (req : Http.Request) : Async Http.Response := do
  let req := if req.method == "HEAD" then { req with method := "GET" } else req
  if let some file ← assets.serve req then return file
  if let some answer := api kv req then return ← answer
  match req.method, req.segments with
  | "GET", [] => return .html (page (← load kv))
  | _, _ => return .notFound

end Site
