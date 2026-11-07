/- The test suites' batch format: many Markdown documents in one text, and
their HTML in one text, so that one run of a program (Batch.lean on Node or
WASI, BatchBrowser.lean in a browser) renders them all.

The input holds, for each document, a line `u N` (raw HTML enabled) or
`s N` (the defaults, safe) followed by the document's `N` characters; the
output holds, for each, a line `N` and the `N` characters of its HTML. -/
import Folio.Render

namespace Folio

/-- Renders every document of a batch (see the module documentation). -/
def batch (input : String) : String := Id.run do
  let a := chars input
  let mut i := 0
  let mut result := ""
  for _ in [0:a.size] do
    if i ≥ a.size then break
    let mode := a[i]!
    let digits := countWhile a (i + 2) a.size isDigit
    let n := (slice a (i + 2) (i + 2 + digits)).toNat!
    let start := i + 2 + digits + 1
    let html := render { rawHtml := mode == 'u', anyUrl := mode == 'u' } (slice a start (start + n))
    result := result ++ s!"{html.length}\n" ++ html
    i := start + n
  return result

end Folio
