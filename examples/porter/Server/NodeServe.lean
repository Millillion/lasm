/-
Serving Porter on Node.

**Node still runs on `Lasm.Fetch`'s server, on purpose and only here.** How a
Lean server runs on Node without `Lasm.Fetch` is being decided (Lasm's Node
entry serving `Lasm.JS.exportDefault`, an npm adapter such as
`@hono/node-server`, generated `node:http`, or a helper API; docs/REVIEW.md),
so the app's handler is handed to `Lasm.Fetch.serveNode` (Node's `node:http`
on $HOST:$PORT, as before) through a conversion of the request and response.
This is Porter's one import of `Lasm.Fetch`; it moves when that is decided.
Every other platform already serves with its own bindings (`Server/JsServe.lean`).
-/
import Lasm.Fetch
import Server.JsServe

namespace Porter.Server.NodeServe

/-- Node: `handler` on Lasm.Fetch's Node server (HEAD as GET, a thrown handler
answered 500, SIGTERM closes the server). Never returns. -/
def serveNode (handler : Web.Handler) : IO Unit :=
  Lasm.Fetch.serveNode fun req => do
    let r ← handler { method := req.method, url := req.url, headers := req.headers, body := req.body }
    return { status := r.status, headers := r.headers, body := r.body }

/-- Node, or Deno when the same build runs there. -/
def serve (handler : Web.Handler) : IO Unit := do
  if ← JsServe.onDeno then JsServe.serveDeno handler else serveNode handler

end Porter.Server.NodeServe
