/-
The site (Site.lean) on the JavaScript runtimes, on the web's own `Request`
and `Response` (Lasm.JS.Web): Server.lean serves it on Node with
`Node.serve`, and Export.lean publishes it as the program's default export
for Cloudflare Workers, the other edge targets, Bun and Deno.
-/
import Lasm.JS.Web
import Site
open Lasm.JS

namespace JsSite

/-- The site's answer to a web `Request`, as a web `Response`. -/
def handle (kv : Lasm.KV.Store) (request : Lasm.JS.Web.Request) : Async Lasm.JS.Web.Response := do
  let method ← request.method
  let url ← request.url
  let headers ← (← request.headers).entries
  let body ← if method == "GET" || method == "HEAD" then pure .empty else request.arrayBuffer
  let req : Http.Request := { method, url, headers, body }
  let r ← try Site.respond kv req
    catch e => do
      IO.eprintln s!"{method} {req.path}: {e}"
      pure (Http.Response.text "Internal Server Error\n" 500)
  Lasm.JS.Web.Response.new (if Http.bodyless method r.status then none else some (.bufferSource r.body))
    (some { status := some r.status.toNat, headers := some (.sequence (r.headers.map fun (k, v) => #[k, v])) })

end JsSite
