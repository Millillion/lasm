/-
The browser app: the shared view, kept up to date by `update`, which calls the
server's REST API (Shared.lean lists the routes) with the web's own `fetch`
(Lasm.JS.Web) through `Cmd.task`. The first view arrives as HTML from the
server, with the todos as flags; mounting hydrates it.
-/
import Lasm.UI
import Lasm.JS.Json
import Lasm.JS.Web.Fetch
import View
open Lean Lasm.UI

/-- A request to the API: `method path` with an optional JSON body. The
answer's body is decoded with `decode` when the status is 2xx; otherwise the
message is the answer's `{"error"}`, or names the status. -/
def api (method path : String) (body : Option Json) (decode : String → Except String α)
    (handle : Except String α → Msg) : Cmd Msg :=
  Cmd.task do
    try
      let r ← Lasm.JS.Web.fetch (.usvString path) (some {
        method := some method,
        body := body.map fun b => .usvString b.compress,
        headers := some (.record ⟨#[("content-type", "application/json")]⟩) })
      let status ← r.status
      let text ← r.text
      if 200 ≤ status && status < 300 then return handle (decode text)
      else return handle (.error (((decodeJson (α := ApiError) text).map (·.error)).toOption.getD s!"the server answered {status}"))
    catch err => return handle (.error s!"network error: {err}")

def update (msg : Msg) (m : Model) : Model × Cmd Msg :=
  match msg with
  | .setDraft s => ({ m with draft := s, error := none }, .none)
  -- The shared check first: an invalid title is never sent.
  | .add => match checkTitle m.draft with
    | .error e => (m, Cmd.send (.added (.error e)))
    | .ok () => ({ m with busy := true },
        api "POST" "/api/todos" (some (toJson ({ title := m.draft } : NewTodo))) decodeJson .added)
  | .added (.ok t) => ({ m with todos := m.todos.push t, draft := "", busy := false, error := none }, .none)
  | .added (.error e) => ({ m with busy := false, error := some e }, .none)
  -- Shown at once (the checkbox follows the model), then confirmed by the server.
  | .toggle id =>
    let done := !((m.todos.find? (·.id == id)).map (·.done)).getD false
    ({ m with todos := m.todos.map fun u => if u.id == id then { u with done } else u },
      api "PATCH" s!"/api/todos/{id}" (some (toJson ({ done } : TodoPatch))) decodeJson .toggled)
  | .toggled (.ok t) => ({ m with todos := m.todos.map fun u => if u.id == t.id then t else u }, .none)
  | .delete id => (m, api "DELETE" s!"/api/todos/{id}" none (fun _ => .ok ()) (.deleted id))
  | .deleted id (.ok ()) => ({ m with todos := m.todos.filter (·.id != id) }, .none)
  | .refresh => (m, api "GET" "/api/todos" none decodeJson .loaded)
  | .loaded (.ok ts) => ({ m with todos := ts, error := none }, .none)
  -- A failed toggle is undone by reloading the list from the server.
  | .toggled (.error e) => ({ m with error := some e }, api "GET" "/api/todos" none decodeJson .loaded)
  | .deleted _ (.error e) | .loaded (.error e) => ({ m with error := some e }, .none)

/-- The browser never sends an invalid title: `add` with one only shows the error. -/
theorem add_invalid (m : Model) (e : String) (h : checkTitle m.draft = .error e) :
    (update .add m).2.effects = [.msg (.added (.error e))] := by
  simp [update, h, Cmd.send, Cmd.ofEffect]

def app : App Json Model Msg where
  init flags _ :=
    let todos := (flags.getObjValAs? (Array Todo) "todos").toOption.getD #[]
    ({ todos }, .none)
  update := update
  view := view

def main : IO Unit := app.run
