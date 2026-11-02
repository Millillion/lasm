/- The live preview in the browser (`npm run build:preview` → dist/public).
Everything it does is `Preview/Page.lean`; this file starts it. -/
import Preview.Page
open Lasm.UI Folio.Preview

def app : App Unit Model Msg := App.sandbox init (fun msg m => update msg m) view

def main : IO Unit := app.run
