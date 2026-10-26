/-
TodoMVC (https://todomvc.com) in Lean with Lasm.UI. The state and update are
in Todo.lean, with proofs that every reachable model is valid; this file is the
view, storage and routing. Build: lasm build Main.lean --target browser.
-/
import Lean.Data.Json.Parser
import Lean.Data.Json.Printer
import Lasm.UI
import Todo
open Lasm.UI Todo

/-! Storage: the todos as JSON in localStorage. -/

def toJson (todos : List Item) : String :=
  (Lean.Json.arr (todos.toArray.map fun t =>
    Lean.Json.mkObj [("id", (t.id : Nat)), ("title", t.title), ("completed", t.completed)])).compress

def fromJson (s : String) : List Item :=
  match Lean.Json.parse s with
  | .ok (.arr items) => items.toList.filterMap fun j => do
      let id ← (j.getObjValAs? Nat "id").toOption
      let title ← (j.getObjValAs? String "title").toOption
      let completed ← (j.getObjValAs? Bool "completed").toOption
      return { id, title, completed }
  | _ => []

/-! Routing: `#/`, `#/active`, `#/completed`. -/

def filterOf (u : Url) : Filter :=
  match u.fragment with
  | some "/active" => .active
  | some "/completed" => .completed
  | _ => .all

/-! The view -/

def editId (id : Nat) : String := s!"edit-{id}"

def viewTodo (m : Model) (t : Item) : Html Msg :=
  let editing := match m.editing with | some (e, _) => e == t.id | none => false
  html! <li key={t.id} class={" ".intercalate ((if t.completed then ["completed"] else []) ++ (if editing then ["editing"] else []))}>
          <div class="view">
            <input class="toggle" type="checkbox" checked={t.completed} onCheck={fun _ => Msg.toggle t.id} />
            <label onDoubleClick={Msg.startEdit t.id}>{t.title}</label>
            <button class="destroy" onClick={Msg.delete t.id} />
          </div>
          {if editing then
            [html! <input class="edit" id={editId t.id} value={(m.editing.map (·.2)).getD ""}
                     onInput={Msg.updateEdit} onEnter={Msg.commitEdit} onBlur={Msg.commitEdit} onEscape={Msg.cancelEdit} />]
           else []}
        </li>

def visible (m : Model) : List Item :=
  match m.filter with
  | .all => m.todos
  | .active => m.todos.filter (!·.completed)
  | .completed => m.todos.filter (·.completed)

def filterLink (m : Model) (f : Filter) (href label : String) : Html Msg :=
  html! <li><a class={if m.filter == f then "selected" else ""} href={href}>{label}</a></li>

def view (m : Model) : Html Msg :=
  let active := (m.todos.filter (!·.completed)).length
  let completed := m.todos.length - active
  html! <section class="todoapp">
          <header class="header">
            <h1>todos</h1>
            <input class="new-todo" placeholder="What needs to be done?" autofocus value={m.field}
              onInput={Msg.updateField} onEnter={Msg.add} />
          </header>
          {if m.todos.isEmpty then [] else
            [html! <main class="main">
                     <div class="toggle-all-container">
                       <input class="toggle-all" id="toggle-all" type="checkbox" checked={active == 0}
                         onCheck={Msg.toggleAll} />
                       <label class="toggle-all-label" for="toggle-all">Mark all as complete</label>
                     </div>
                     <ul class="todo-list">{(visible m).map (viewTodo m)}</ul>
                   </main>,
             html! <footer class="footer">
                     <span class="todo-count"><strong>{active}</strong> {if active == 1 then "item" else "items"} left</span>
                     <ul class="filters">
                       {filterLink m .all "#/" "All"}
                       {filterLink m .active "#/active" "Active"}
                       {filterLink m .completed "#/completed" "Completed"}
                     </ul>
                     {if completed == 0 then [] else
                       [html! <button class="clear-completed" onClick={Msg.clearCompleted}>Clear completed</button>]}
                   </footer>]}
        </section>

/-! The app -/

def app : App Unit Model Msg where
  init _ url := ({ filter := filterOf url }, Cmd.storageGet storageKey fun s => .loaded (fromJson (s.getD "[]")))
  update msg m :=
    let (m', cmd) := Todo.update toJson msg m
    match msg with
    | .startEdit id => (m', cmd ++ Cmd.focus (editId id))
    | _ => (m', cmd)
  view := view
  onUrlChange := some fun u => .setFilter (filterOf u)

def main : IO Unit := app.run
