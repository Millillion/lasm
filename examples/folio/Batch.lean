/- Renders a batch of Markdown documents: `batch IN OUT`. `IN` holds, for
each document, a line `u N` (raw HTML enabled) or `s N` (the default, safe)
followed by the document's `N` characters; `OUT` gets, for each, a line `N`
and the `N` characters of its HTML. Used by test/spec.mjs and the
differential tests. -/
import Folio

def main (args : List String) : IO UInt32 := do
  let [inp, out] := args | IO.eprintln "usage: batch IN OUT"; return 2
  let a := Folio.chars (← IO.FS.readFile inp)
  let mut i := 0
  let mut result := ""
  for _ in [0:a.size] do
    if i ≥ a.size then break
    let mode := a[i]!
    let digits := Folio.countWhile a (i + 2) a.size Folio.isDigit
    let n := (Folio.slice a (i + 2) (i + 2 + digits)).toNat!
    let start := i + 2 + digits + 1
    let html := Folio.render { rawHtml := mode == 'u', anyUrl := mode == 'u' } (Folio.slice a start (start + n))
    result := result ++ s!"{html.length}\n" ++ html
    i := start + n
  IO.FS.writeFile out result
  return 0
