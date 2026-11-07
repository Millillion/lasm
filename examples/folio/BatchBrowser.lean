/- The batch renderer in a browser (`npm run build:batch-browser` →
dist/batch-browser): it renders `globalThis.folioBatchInput`, in the format
of `Folio.batch` (Folio/Batch.lean), into `globalThis.folioBatchOutput`.
test/spec.mjs --engine chromium|firefox|webkit sets the input before the page
loads and reads the output, so the specification's examples run on the
renderer as the browser runs it. -/
import Folio.Batch
import Lasm.JS
open Lasm.JS

def main : IO Unit := do
  let g ← global
  let input ← g.get "folioBatchInput" String
  g.set "folioBatchOutput" (Folio.batch input)
