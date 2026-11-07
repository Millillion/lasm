/- Renders a batch of Markdown documents: `batch IN OUT`, in the format of
`Folio.batch` (Folio/Batch.lean). Built for Node (`npm run build:batch`) and
WASI (`npm run build:batch-wasi`); used by test/spec.mjs, the differential
test, the pathological inputs and the fuzzer (test/batch.mjs). -/
import Folio
import Folio.Batch

def main (args : List String) : IO UInt32 := do
  let [inp, out] := args | IO.eprintln "usage: batch IN OUT"; return 2
  IO.FS.writeFile out (Folio.batch (← IO.FS.readFile inp))
  return 0
