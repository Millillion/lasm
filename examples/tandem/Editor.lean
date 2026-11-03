/-
The editor's browser app (`npm run build:client` → dist/public/ui). Everything
it does is `Frontend/Ui.lean`; this file starts it. The flags carry the
document's name.
-/
import Lasm.UI
import Lasm.JS.Json
import Frontend.Ui
open Lean Lasm.UI Tandem.Ui

def docOf (flags : Json) : String :=
  match flags.getObjValAs? String "doc" with
  | .ok d => d
  | .error _ => "welcome"

def app : App Json Model Msg where
  init flags _ := init (docOf flags)
  update := update
  view := view
  subscriptions := subscriptions

def main : IO Unit := app.run
