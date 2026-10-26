/-
The js-framework-benchmark app (keyed) in Lean with Lasm.UI: create 1,000 or
10,000 rows, append 1,000, update every 10th row, swap two rows, select and
remove rows, clear. Compared with vanilla JavaScript by
scripts/ui/bench-browser.mjs (CI, headless browsers) and docs/UI.md.
-/
import Lasm.UI
open Lasm.UI

structure Row where
  id : Nat
  label : String

structure Model where
  rows : Array Row := #[]
  nextId : Nat := 1
  selected : Option Nat := none
  seed : UInt64 := 0x2545F4914F6CDD1D

inductive Msg where
  | run | runLots | add | update | clear | swapRows
  | select (id : Nat)
  | remove (id : Nat)

def adjectives := #["pretty", "large", "big", "small", "tall", "short", "long", "handsome", "plain", "quaint", "clean",
  "elegant", "easy", "angry", "crazy", "helpful", "mushy", "odd", "unsightly", "adorable", "important", "inexpensive",
  "cheap", "expensive", "fancy"]
def colours := #["red", "yellow", "blue", "green", "pink", "brown", "purple", "brown", "white", "black", "orange"]
def nouns := #["table", "chair", "house", "bbq", "desk", "car", "pony", "cookie", "sandwich", "burger", "pizza", "mouse", "keyboard"]

def nextRand (s : UInt64) : UInt64 :=
  let s := s ^^^ (s <<< 13)
  let s := s ^^^ (s >>> 7)
  s ^^^ (s <<< 17)

def buildRows (m : Model) (n : Nat) : Model := Id.run do
  let mut rows := m.rows
  let mut seed := m.seed
  let mut id := m.nextId
  for _ in [0:n] do
    let s1 := nextRand seed
    let s2 := nextRand s1
    let s3 := nextRand s2
    seed := s3
    let label := adjectives[s1.toNat % adjectives.size]! ++ " " ++ colours[s2.toNat % colours.size]! ++ " " ++ nouns[s3.toNat % nouns.size]!
    rows := rows.push { id, label }
    id := id + 1
  return { m with rows, seed, nextId := id }

def update (msg : Msg) (m : Model) : Model :=
  match msg with
  | .run => buildRows { m with rows := #[], selected := none } 1000
  | .runLots => buildRows { m with rows := #[], selected := none } 10000
  | .add => buildRows m 1000
  | .update => { m with rows := m.rows.mapIdx fun i r => if i % 10 == 0 then { r with label := r.label ++ " !!!" } else r }
  | .clear => { m with rows := #[], selected := none }
  | .swapRows =>
    if m.rows.size > 998 then { m with rows := (m.rows.swapIfInBounds 1 998) } else m
  | .select id => { m with selected := some id }
  | .remove id => { m with rows := m.rows.filter (·.id != id) }

def actionButton (id label : String) (msg : Msg) : Html Msg :=
  html! <div class="col-sm-6 smallpad">
          <button type="button" class="btn btn-primary btn-block" id={id} onClick={msg}>{label}</button>
        </div>

def row (selected : Option Nat) (r : Row) : Html Msg :=
  html! <tr key={r.id} class={if selected == some r.id then "danger" else ""}>
          <td class="col-md-1">{r.id}</td>
          <td class="col-md-4"><a onClick={Msg.select r.id}>{r.label}</a></td>
          <td class="col-md-1"><a onClick={Msg.remove r.id}><span class="glyphicon glyphicon-remove" aria-hidden="true"></span></a></td>
          <td class="col-md-6"></td>
        </tr>

def view (m : Model) : Html Msg :=
  html! <div class="container">
          <div class="jumbotron">
            <div class="row">
              <div class="col-md-6"><h1>Lasm.UI (keyed)</h1></div>
              <div class="col-md-6">
                <div class="row">
                  {actionButton "run" "Create 1,000 rows" .run}
                  {actionButton "runlots" "Create 10,000 rows" .runLots}
                  {actionButton "add" "Append 1,000 rows" .add}
                  {actionButton "update" "Update every 10th row" .update}
                  {actionButton "clear" "Clear" .clear}
                  {actionButton "swaprows" "Swap Rows" .swapRows}
                </div>
              </div>
            </div>
          </div>
          <table class="table table-hover table-striped test-data">
            <tbody id="tbody">{m.rows.toList.map (row m.selected)}</tbody>
          </table>
        </div>


