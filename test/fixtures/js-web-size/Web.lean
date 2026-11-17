/- The same program through Lasm.JS.Web (all of it imported), for scripts/bindings/test-web.mjs --sizes. -/
import Lasm.JS.Web.Url
open Lasm.JS.Web

def main : IO Unit := do
  let url ← URL.new "https://example.com/a"
  IO.println (← url.href)
