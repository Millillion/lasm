/-
A counter written in Lean with Lasm.UI, running in the browser: `lasm build
Main.lean --target browser` compiles it to WebAssembly with a small loader
(dist/). The page mounts it on `<main data-lasm-app>`. `update` and `view` are
pure functions; Lasm.UI renders the view and patches the DOM on each change.
Guide: https://github.com/Millillion/lasm/blob/main/docs/UI.md
-/
import Lasm.UI
import App
open Lasm.UI

inductive Msg where
  | increment
  | decrement

def update : Msg → Int → Int
  | .increment, n => n + 1
  | .decrement, n => n - 1

def view (n : Int) : Html Msg :=
  html! <div>
          <h1>{App.greet "Lean"}</h1>
          <p>
            <button onClick={Msg.decrement}>−</button>
            <output>{n}</output>
            <button onClick={Msg.increment}>+</button>
          </p>
        </div>

def main : IO Unit := (App.sandbox 0 update view).run
