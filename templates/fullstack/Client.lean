/-
The browser app: the shared view, kept up to date by `update`, which calls the
server through the shared endpoints. The first view arrives as HTML from the
server, with the todos as flags; mounting hydrates it.
-/
import Lasm.UI
import Lasm.JS.Json
import Lasm.RPC.Client
import View
open Lean Lasm.UI Lasm.RPC

def update (msg : Msg) (m : Model) : Model × Cmd Msg :=
  match msg with
  | .setDraft s => ({ m with draft := s, error := none }, .none)
  | .add => ({ m with busy := true }, addTodo.call { title := m.draft } .added)
  | .added (.ok t) => ({ m with todos := m.todos.push t, draft := "", busy := false, error := none }, .none)
  | .added (.error e) => ({ m with busy := false, error := some (toString e) }, .none)
  | .toggle id => (m, toggleTodo.call { id } .toggled)
  | .toggled (.ok t) => ({ m with todos := m.todos.map fun u => if u.id == t.id then t else u }, .none)
  | .delete id => (m, deleteTodo.call { id } .deleted)
  | .deleted (.ok r) => ({ m with todos := m.todos.filter (·.id != r.id) }, .none)
  | .refresh => (m, listTodos.call {} .loaded)
  | .loaded (.ok ts) => ({ m with todos := ts, error := none }, .none)
  | .toggled (.error e) | .deleted (.error e) | .loaded (.error e) => ({ m with error := some (toString e) }, .none)

/-- The browser never sends an invalid title: `add` with one only shows the error. -/
theorem add_invalid (m : Model) (e : String) (h : checkTitle m.draft = .error e) :
    (update .add m).2.effects = [.msg (.added (.error (.invalid e)))] :=
  addTodo.call_invalid { title := m.draft } Msg.added "" e h

def app : App Json Model Msg where
  init flags _ :=
    let todos := (flags.getObjValAs? (Array Todo) "todos").toOption.getD #[]
    ({ todos }, .none)
  update := update
  view := view

def main : IO Unit := app.run
