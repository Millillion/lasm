/-
The sign-in and consent pages' browser app (`npm run build:client` →
dist/public/ui). Everything it does is `Frontend/Ui.lean`; this file starts it.
-/
import Lasm.UI
import Lasm.JS.Json
import Frontend.Ui
open Lean Lasm.UI Porter.Ui

def app : App Json Model Msg where
  init flags _ := (fromFlags flags, .none)
  update msg m := (update msg m, .none)
  view := view

def main : IO Unit := app.run
