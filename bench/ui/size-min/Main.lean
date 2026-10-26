/- Size probe: the counter with only the modules an app needs (no html!, no SSR). -/
import Lasm.UI.App
import Lasm.UI.Elements
open Lasm.UI

inductive Msg where
  | increment
  | decrement

def update : Msg → Nat → Nat
  | .increment, n => n + 1
  | .decrement, n => n - 1

def view (n : Nat) : Html Msg :=
  main_ [] [button [onClick .decrement] [text "-"], node "output" [] [text (toString n)], button [onClick .increment] [text "+"]]

def main : IO Unit := (App.sandbox 0 update view).run
