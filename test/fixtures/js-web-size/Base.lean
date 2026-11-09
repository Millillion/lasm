/- Size and build-time baseline for Lasm.JS.Web (scripts/bindings/test-web.mjs --sizes): Lasm.JS only. -/
import Lasm.JS
open Lasm.JS

def main : IO Unit := do
  let url ← (← (← global).get "URL" Value).new #[.string "https://example.com/a"]
  IO.println (← url.get "href" String)
