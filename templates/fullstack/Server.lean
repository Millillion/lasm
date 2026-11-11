/-
The server on JavaScript runtimes, through the web's own `Request` and
`Response` (Lasm.JS.Web): Bun, Deno, Cloudflare Workers and the other edge
targets (their `build:<target>` scripts), which serve the program's default
export, and Node (`npm start`, through Lasm.Fetch's Node server for now), on
$HOST (default 0.0.0.0) and $PORT (default 3000). Each request is passed to
the site (Site.lean) as an `Http.Request`.
-/
import Lasm.JS.Web
import Lasm.Fetch
import Embed
import Site
open Lasm.JS

/-- The browser app and public/ (dist/public), embedded in the program, so
every target serves them, including those without a file system (Workers,
Vercel and Netlify Edge, Deno Deploy). `lasm dev` embeds nothing and reads
the directory instead. -/
def assets : Http.Assets := embed_dir! "dist/public"

/-- The site's answer to a web `Request`, as a web `Response`. -/
def handle (kv : Lasm.KV.Store) (request : Lasm.JS.Web.Request) : Async Lasm.JS.Web.Response := do
  let method ← request.method
  let url ← request.url
  let headers ← (← request.headers).entries
  let body ← if method == "GET" || method == "HEAD" then pure .empty else request.arrayBuffer
  let req : Http.Request := { method, url, headers, body }
  let r ← try Site.respond kv assets req
    catch e => do
      IO.eprintln s!"{method} {req.path}: {e}"
      pure (Http.Response.text "Internal Server Error\n" 500)
  Lasm.JS.Web.Response.new (if Http.bodyless method r.status then none else some (.bufferSource r.body))
    (some { status := some r.status.toNat, headers := some (.sequence (r.headers.map fun (k, v) => #[k, v])) })

/-- Node: the site on Lasm.Fetch's Node server ($HOST:$PORT, SIGTERM closes
it). How Lean servers run on Node without Lasm.Fetch is still being decided,
so this is the server's one use of Lasm.Fetch. -/
def serveNode (kv : Lasm.KV.Store) : IO Unit := Lasm.Fetch.serveNode fun req => do
  let r ← Site.respond kv assets { method := req.method, url := req.url, headers := req.headers, body := req.body }
  return { status := r.status, headers := r.headers, body := r.body }

def main : IO Unit := do
  let kv ← Lasm.KV.open "TODOS"
  -- Bun, Deno, Cloudflare Workers and the other edge targets serve the
  -- program's default export (Workers' `export default {fetch}`):
  -- `(request, env) => Promise<Response>`. Workers pass their bindings as
  -- `env`, where Lasm.KV finds the TODOS namespace.
  if ← onEdge then
    exportDefault (← Function.ofFn fun args => do
      Lasm.KV.setWorkersEnv (args[1]?.getD .undefined)
      let .ref request _ := args[0]?.getD .undefined | throw (IO.userError "expected a Request")
      return toJS (← handle kv { val := request }))
  else serveNode kv
