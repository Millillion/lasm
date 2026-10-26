import Lasm.UI
open Lasm.UI

inductive Msg where
  | increment
  | decrement
  | reset

def update : Msg → Nat → Nat
  | .increment, n => n + 1
  | .decrement, n => n - 1
  | .reset, _ => 0

def view (n : Nat) : Html Msg :=
  html! <main class="counter">
          <button id="dec" onClick={Msg.decrement}>-</button>
          <output id="count">{n}</output>
          <button id="inc" onClick={Msg.increment}>+</button>
          <button id="reset" onClick={Msg.reset} disabled={n == 0}>Reset</button>
        </main>

def main : IO Unit := (App.sandbox 0 update view).run
