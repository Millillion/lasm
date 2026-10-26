/-
A counter written in Lean with Lasm.UI (the Elm architecture), running in the
browser. `update` and `view` are pure functions: Lasm.UI diffs each new view
in Lean and applies one patch per frame. `lasm build Main.lean --target
browser` compiles it to WebAssembly with a small loader (dist/); the page
mounts it on `<main data-lasm-app>`.
-/
import Lasm.UI
import App
open Lasm.UI

inductive Msg where
  | increment
  | decrement
  | reset

def update : Msg → Int → Int
  | .increment, n => n + 1
  | .decrement, n => n - 1
  | .reset, _ => 0

def view (n : Int) : Html Msg :=
  html! <section class="counter">
          <h1>{App.greet "Lean"}</h1>
          <p>
            <button id="dec" onClick={Msg.decrement}>-</button>
            <output id="count">{n}</output>
            <button id="inc" onClick={Msg.increment}>+</button>
          </p>
          <button id="reset" onClick={Msg.reset} disabled={n == 0}>Reset</button>
        </section>

-- Properties of `update` are theorems Lean checks, for every model.
theorem update_reset (n : Int) : update .reset n = 0 := rfl

def main : IO Unit := (App.sandbox 0 update view).run
