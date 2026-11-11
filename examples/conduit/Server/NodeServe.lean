/-
Serving Conduit on Node. Node has no server that takes a web `Request`, so it
goes through the npm package `@hono/node-server` (an `@[js]` binding;
docs/JS_BINDINGS.md, "Node: an npm adapter"). The same build runs on Deno
(`npm run build:deno`), where it serves with `Deno.serve` instead; package.json
leaves the Node adapter out of the Deno build (`lasm.edge.exclude`).
-/
import Lasm.JS
import Server.JsServe
open Lasm.JS

namespace Conduit.Server.NodeServe

/-- `serve(options, listeningListener)` of @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque nodeServe : Data → Value → IO Value

/-- Node: an HTTP server on $HOST:$PORT (default 0.0.0.0:3000) that runs
`handler`. SIGTERM and SIGINT close it (open requests finish), then the
process exits. Never returns. -/
def serveNode (handler : Web.Handler) : IO Unit := do
  let (port, host) ← JsServe.address 3000
  let fetch ← Function.ofFn1 (JsServe.webHandler handler)
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port}"
    (← IO.getStdout).flush
    return .undefined
  let server ← nodeServe (obj [("fetch", toJS fetch), ("port", toJS port), ("hostname", toJS host)]) listening
  -- Containers and platforms stop the server with SIGTERM: finish open requests, then exit.
  let process ← require "node:process"
  let exit ← Function.ofFn fun _ => do
    let _ : Value ← process.callMethod "exit" #[toJS 0]
    return .undefined
  let stop ← Function.ofFn fun _ => do
    let _ : Value ← server.callMethod "close" #[.ref exit ""]
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, .ref stop ""]
  waitForever

/-- Node, or Deno when the same build runs there. -/
def serve (handler : Web.Handler) : IO Unit := do
  if ← JsServe.onDeno then JsServe.serveDeno handler else serveNode handler

end Conduit.Server.NodeServe
