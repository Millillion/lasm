/-
The page, shared by the server (which renders it to HTML for the first
visit) and the browser (which hydrates that HTML and keeps it up to date).
-/
import Lasm.UI.Elements
import Lasm.UI.Syntax
import Shared
open Lasm.UI

structure Model where
  todos : Array Todo := #[]
  draft : String := ""
  error : Option String := none
  /-- A request is on its way. -/
  busy : Bool := false
  deriving Inhabited

inductive Msg where
  | setDraft (s : String)
  | add
  | added (r : Except Lasm.RPC.Error Todo)
  | toggle (id : Nat)
  | toggled (r : Except Lasm.RPC.Error Todo)
  | delete (id : Nat)
  | deleted (r : Except Lasm.RPC.Error TodoRef)
  | refresh
  | loaded (r : Except Lasm.RPC.Error (Array Todo))

def viewTodo (t : Todo) : Html Msg :=
  html! <li key={t.id} class={if t.done then "done" else ""}>
          <label>
            <input type="checkbox" checked={t.done} onCheck={fun _ => Msg.toggle t.id} />
            <span>{t.title}</span>
          </label>
          <button class="delete" aria-label="Delete" onClick={Msg.delete t.id}>×</button>
        </li>

def view (m : Model) : Html Msg :=
  let left := (m.todos.filter (!·.done)).size
  html! <main class="todos">
          <h1>Todos</h1>
          <form onSubmit={Msg.add}>
            <input id="new-todo" placeholder="What needs to be done?" value={m.draft} onInput={Msg.setDraft} />
            <button type="submit" disabled={m.busy}>Add</button>
          </form>
          {match m.error with
           | some e => [html! <p class="error" role="alert">{e}</p>]
           | none => []}
          <ul>{m.todos.toList.map viewTodo}</ul>
          <footer>
            <span id="left">{left} {if left == 1 then "item" else "items"} left</span>
            <button id="refresh" onClick={Msg.refresh}>Refresh</button>
          </footer>
        </main>
