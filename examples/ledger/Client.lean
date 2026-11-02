/-
The browser page (`npm run build:client` → dist/public): the accounts and
the journal, read from the API. Everything it does is `Frontend/Page.lean`;
this file starts it.
-/
import Lasm.UI
import Lasm.JS.Json
import Frontend.Page
open Lean Lasm.UI Ledger.Page

def app : App Json Model Msg where
  init _ _ := init
  update := update
  view := view

def main : IO Unit := app.run
