/-
A counter written in Lean, running in the browser: `lasm build Main.lean
--target browser` compiles it to WebAssembly with a small loader (dist/).
The browser mounts it on `<div data-lasm-app>`; `App.root` is that element.
-/
import Lasm.Web
import App
open Lasm.Web

def main : IO Unit := do
  let root ← App.root
  let count ← IO.mkRef (0 : Int)
  let title ← createElement "h1"
  title.setTextContent (App.greet "Lean")
  let label ← createElement "output"
  label.setTextContent "0"
  let button (text : String) (change : Int → Int) : IO Element := do
    let b ← createElement "button"
    b.setTextContent text
    discard <| b.on "click" fun _ => do
      count.modify change
      label.setTextContent (toString (← count.get))
    return b
  let minus ← button "−" (· - 1)
  let plus ← button "+" (· + 1)
  let row ← createElement "p"
  row.append #[minus, label, plus]
  root.append #[title, row]
