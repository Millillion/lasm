/-
Serving Porter on Node with `Node.serve` (Lasm.JS.Node.Serve, shaped like
`Bun.serve`): Node's `node:http` on $PORT (default 3000) and $HOST (default
0.0.0.0), with Porter's handler as a web `Request → Async Response`
(`Server/JsServe.lean`). Node's own SIGTERM and SIGINT close the server.
-/
import Lasm.JS.Node.Serve
import Server.JsServe

namespace Porter.Server.NodeServe

/-- Node: `handler` on `Node.serve`, on $HOST:$PORT. Returns when the server closes. -/
def serve (handler : Web.Handler) : IO Unit := do
  let (port, hostname) ← JsServe.address 3000
  Lasm.JS.Node.serve { fetch := JsServe.webHandler handler, port := some port, hostname := some hostname }

end Porter.Server.NodeServe
