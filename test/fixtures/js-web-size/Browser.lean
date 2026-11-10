/- The same program with the browser tier of Lasm.JS.Web imported too (Lasm.JS.Web.Browser), for scripts/bindings/test-web.mjs --sizes. -/
import Lasm.JS.Web.Browser
open Lasm.JS.Web

def main : IO Unit := do
  let url ← URL.new "https://example.com/a"
  IO.println (← url.href)
