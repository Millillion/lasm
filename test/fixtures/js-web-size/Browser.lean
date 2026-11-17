/- The same program with the DOM and HTML modules imported too, for scripts/bindings/test-web.mjs --sizes. -/
import Lasm.JS.Web.Dom
import Lasm.JS.Web.Url
import Lasm.JS.Web.Html
open Lasm.JS.Web

def main : IO Unit := do
  let url ← URL.new "https://example.com/a"
  IO.println (← url.href)
