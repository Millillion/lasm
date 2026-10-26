/-
The Lean examples of docs/UI.md, with the definitions around them, elaborated
by scripts/ui/lean-tests.mjs so the guide stays correct.
-/
import Lasm.UI
open Lasm.UI

namespace Views
structure Todo where
  id : Nat
  title : String
  done : Bool

inductive Msg where
  | toggle (id : Nat)

-- function DSL
def item (t : Todo) : Html Msg :=
  li [class_ (if t.done then "done" else ""), onClick (.toggle t.id)] [text t.title]

-- html!
def item' (t : Todo) : Html Msg :=
  html! <li class={if t.done then "done" else ""} onClick={Msg.toggle t.id}>{t.title}</li>

#guard render (item ⟨1, "a", true⟩) == render (item' ⟨1, "a", true⟩)
end Views

namespace Syntax
structure Model where
  field : String
  todos : List String

inductive Msg where
  | updateField (s : String)
  | add

def viewTodo (t : String) : Html Msg := html! <li>{t}</li>
def footer (m : Model) : Html Msg := html! <footer>{m.todos.length}</footer>

def view (m : Model) : Html Msg :=
  html! <section class="todoapp">
          <input class="new-todo" placeholder="What needs to be done?" value={m.field}
            onInput={Msg.updateField} onEnter={Msg.add} />
          <ul class="todo-list">{m.todos.map viewTodo}</ul>
          {if m.todos.isEmpty then [] else [footer m]}
        </section>
end Syntax

namespace Events
inductive Msg where
  | submitted (s : String)
  | clicked (x y : Float)

-- Enter in an input, with its value:
def onSubmitValue (f : String → Msg) : Attr Msg :=
  on "keydown" (Decoder.map2 (fun k v => (k, v)) Decoder.key Decoder.targetValue
    |>.filterMap fun (k, v) => if k == "Enter" then some (f v) else none)

-- Clicks with coordinates, and modifier keys:
def onCanvasClick : Attr Msg :=
  on "click" (Decoder.map2 Msg.clicked Decoder.offsetX Decoder.offsetY)
end Events

namespace Commands
structure Model where
  loading : Bool := false
  body : String := ""
  error : String := ""

inductive Msg where
  | load
  | loaded (r : Except Http.Error String)

def update : Msg → Model → Model × Cmd Msg
  | .load, m => ({ m with loading := true }, Http.get "/api/items" .loaded)
  | .loaded (.ok body), m => ({ m with loading := false, body }, .none)
  | .loaded (.error e), m => ({ m with loading := false, error := toString e }, .none)

#guard match (update .load {}).2.effects with | [.http r _] => r.url == "/api/items" | _ => false
end Commands

namespace Subscriptions
structure Model where
  running : Bool

inductive Msg where
  | tick (t : Float)
  | key (k : String)

def subscriptions (m : Model) : Subs Msg :=
  Subs.batch [
    if m.running then Subs.every 1000 .tick else .none,
    Subs.onKeyDown (Decoder.key.map .key) ]

#guard (subscriptions ⟨true⟩).items.length == 2
end Subscriptions

namespace Routing
inductive Route where
  | home
  | post (id : Nat)
  | notFound
  deriving DecidableEq

def route (u : Url) : Route :=
  match u.segments with
  | [] => .home
  | ["posts", id] => match id.toNat? with | some n => .post n | none => .notFound
  | _ => .notFound

#guard (Url.parse "https://example.com/posts/12").map route == some (.post 12)
#guard (Url.parse "https://example.com/").map route == some .home
end Routing
