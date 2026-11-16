/- The same Worker through Lasm.JS.Cloudflare, for scripts/bindings/test-web.mjs --fixture js-cloudflare --sizes.
Built for --target workers, not run. -/
import Lasm.JS.Cloudflare
open Lasm.JS Lasm.JS.Web Lasm.JS.Cloudflare

def main : IO Unit := do
  let fetch ← ExportedHandlerFetchHandler.ofFn fun _ env _ => do
    let kv ← IO.ofExcept (readField KVNamespace env "KV")
    let value ← kv.get "greeting"
    Response.new (some (.usvString (value.getD "hello"))) none
  exportDefault ({ fetch := some fetch } : ExportedHandler)
