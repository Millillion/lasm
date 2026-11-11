/- Size and build-time baseline for Lasm.JS.Cloudflare (scripts/bindings/test-web.mjs --fixture js-cloudflare --sizes):
a Worker that reads a Workers KV key, on the Lasm.JS.Web modules Lasm.JS.Cloudflare.Kv and Workers import (Streams,
Fetch), with hand-written calls (Value.get, callMethodAwait). Built for --target workers, not run. -/
import Lasm.JS
import Lasm.JS.Web.Streams
import Lasm.JS.Web.Fetch
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let handler ← Function.ofFn fun args => do
    let .object fields := args[1]?.getD .undefined | return .undefined
    let some (.ref kv _) := fields.find? (·.1 == "KV") |>.map (·.2) | return .undefined
    let value ← kv.callMethodAwait "get" #[toJS "greeting"] (Option String)
    return toJS (← Response.new (some (.usvString (value.getD "hello"))) none)
  exportDefault handler
